#include <PR/ultratypes.h>

#include "gfx_dimensions.h"
#include "print.h"
#include "rendering_graph_node.h"
#include "sm64.h"
#include "main.h"
#include "area.h"
#include "audio/external.h"
#include "text_engine.h"
#include "ingame_menu.h"
#include "segment2.h"
#include "game_init.h"
#include "object_helpers.h"

extern u8 gDialogCharWidths[256];

volatile struct TEState TE_Engines[NumEngines];
u8 StrBuffer[NumEngines][0x100];
u8 CmdBuffer[NumEngines][0x400];
u32 TimerBuffer[NumEngines][64];
u8 UserInputs[NumEngines][16][16]; //16 length 16 strings
//object array
//asm return values


u8 TestStr[] = {
	/* speed */0x40,0,4,0x76,0,1,2,3,
	/* mosaic BG */0x7d,0,0,1,0x40,0,0,0,240,2,0,0,0,2,2,
	/* color */0x42,0xFF,0,0,0xFF,4,5,6,4,5,6,
	/* play music */0x79,4,
	/* a btn box*/ 0x71,
	/* scale */0x84,0x40,0,0,0,0x3f,0x80,0,0,
	/* scale */5,5,5,5,5,5,5,5,
	/* blank */0x72,0,60,3,3,3,3,3,3,3,3,3,
	7,8,9,0x7b
};

void SetupTextEngine(s16 x, s16 y, u8 *str, u8 state){
	TE_flush_eng(&TE_Engines[state]);
	TE_Engines[state].state = state;
	TE_Engines[state].LastVI = gNumVblanks;
	TE_Engines[state].OgStr = str;
	TE_Engines[state].TempStr = str;
	TE_Engines[state].BufferStrPtr = str;
	TE_Engines[state].StartX = x;
	TE_Engines[state].StartY = y;
	TE_Engines[state].OgSeqID = -1;
	TE_Engines[state].NewSeqID = -1;
}

void RunTextEngine(void){
	u8 i;
	struct TEState *CurEng;
	register u32 CurVI = gNumVblanks;
	u16 CharsThisFrame;
	u8 CurChar;
	s8 loop;
	u8 *str;
	for(i=0;i<NumEngines;i++){
		CurEng = &TE_Engines[i];
		if (CurEng->OgStr==0){
			continue;
		}
		//there is an engine
		CurEng->TempStr = CurEng->OgStr;
		if (CurEng->VICounter!=CurVI){
			CurEng->VICounter=CurVI;
		}else{
			continue;
		}
		TE_setup_ia8();
		//init TE state vars
		CharsThisFrame = 1;
		TE_frame_init(CurEng);
		//run until either the string ends or you need to wait to draw more chars.
		loop:
			CurChar = CurEng->TempStr[CurEng->CurPos];
			str = &CurEng->TempStr[CurEng->CurPos];
			//no draw
			if (CurEng->BlankTimer>CurVI){
				loop = TE_blank_time(CurEng,str);
				goto loopswitch;
			}
			//draw keyboard
			if (CurEng->UserInput){
				//goto
			}
			if(!(CurChar<0x40||(CurChar>0x4F&&CurChar<0x70)||(CurChar>0xCF&&CurChar<0xFE)||CurChar==0x9E||CurChar==0x9F)){
				//terminator
				if (CurChar==0xFF){
					goto nonewchar;
				}
				//parse cmds and use switch
				loop = TE_jump_cmds(CurEng,CurChar,str);
				loopswitch:
					if (loop==1)
						goto loop;
					else if (loop==0)
						goto nonewchar;
					else if (loop==-1)
						goto printnone;
					else if (loop==-2)
						goto printnone;
			}
			//normal character is detected
			if(CurEng->TempStrEnd!=CurEng->CurPos){
				TE_add_char2buf(CurEng);
				goto loop;
			}
			//now I have to check if a new character has to be drawn
			else{
				//check char speed for neg
				if(CurEng->VIpChar<0){
					if(((CurVI<<absi(CurEng->VIpChar)))>((CurEng->LastVI<<absi(CurEng->VIpChar))+CharsThisFrame)){
						//draw a new char
						TE_add_new_char(CurEng,CurVI);
						goto loop;
					}else{
						CurEng->LastVI = CurVI;
					}
					CharsThisFrame++;
				}else{
					if(CurVI>=(CurEng->LastVI+CurEng->VIpChar)){
						//draw a new char
						TE_add_new_char(CurEng,CurVI+CurEng->VIpChar);
						goto loop;
					}
				}
			}
		//no new char. end loop
		nonewchar:
		//disable plain text
		TE_print(CurEng);
		printnone:
		//check scissor
		//shake screen
		TE_flush_str_buff(CurEng);
		TE_end_ia8();
		//write end string DL ptr
		CurEng->VICounter = 0;
		CurEng->CurPos = 0;
		// end:
	}
}
#include "text_engine_cmds.inc.h"

//inits the variables needed at the start of a frame
void TE_frame_init(struct TEState *CurEng){
	CurEng->TotalXOff=0;
	CurEng->TempX = CurEng->StartX;
	CurEng->TempY = CurEng->StartY;
	CurEng->TempXOrigin = CurEng->StartX;
	CurEng->TempYOrigin = CurEng->StartY;
	CurEng->TempStrEnd = CurEng->StrEnd;
	CurEng->TempStr = CurEng->OgStr;
	CurEng->SfxArg = 0;
	CurEng->ScaleF[0] = 1.0f;
	CurEng->ScaleF[1] = 1.0f;
	CurEng->EnvColorWord =- 1;
	CurEng->NewSpeed = 0x1234;
	CurEng->ShakeScreen = 0;
	StrBuffer[CurEng->state][0] = 0xFF;
}

void TE_print(struct TEState *CurEng){
	TE_set_env(CurEng);
	print_generic_string(CurEng->TempX,CurEng->TempY,&StrBuffer[CurEng->state]);
	TE_flush_str_buff(CurEng);
	TE_reset_Xpos(CurEng);
	gSPPopMatrix(gDisplayListHead++, G_MTX_MODELVIEW);
	create_dl_scale_matrix(MENU_MTX_PUSH, CurEng->ScaleF[0], CurEng->ScaleF[1], 1.0f);
	TE_fix_scale_Xpos(CurEng);
}

void TE_add_new_char(struct TEState *CurEng,u32 VI_inc){
	//I should use macros here but I'm not really sure how they work
	if(CurEng->SfxArg){
		play_sound((CurEng->SfxArg<<16)+0x81, gGlobalSoundSource);
	}else if(CurEng->CheckBlip){
		play_sound(0x16FF81, gGlobalSoundSource);
	}
	CurEng->StrEnd+=1;
	CurEng->TempStrEnd+=1;
	CurEng->LastVI = VI_inc;
	TE_add_char2buf(CurEng);
}

void TE_add_char2buf(struct TEState *CurEng){
	u8 CharWrite;
	//get char
	CharWrite = CurEng->TempStr[CurEng->CurPos];
	//increase X pos
	CurEng->TotalXOff+=gDialogCharWidths[CharWrite];
	//write char to buffer
	StrBuffer[CurEng->state][CurEng->CurPos] = CharWrite;
	StrBuffer[CurEng->state][CurEng->CurPos+1] = 0xFF;
	CurEng->CurPos+=1;
	//check wobbly text
	if(CurEng->WobbleHeight){
		TE_set_env(CurEng);
		//calc pos
		//write str to screen
		//flush str
		CurEng->CurPos=0;
		CurEng->TempStrEnd--;
	}
}

void TE_add_to_cmd_buffer(struct TEState *CurEng,u8 *str,u8 len){
	u32 i;
	union PtrByte Offset;
	Offset.ptr = str;
	for(i=0;i<4;i++){
		CmdBuffer[CurEng->state][CurEng->BufferPos+i] = Offset.bytes[i];
	}
	CmdBuffer[CurEng->state][CurEng->BufferPos+4] = len;
	for(i=0;i<len;i++){
		CmdBuffer[CurEng->state][CurEng->BufferPos+i+5] = str[i];
		str[i] = 0x9D;
	}
	CurEng->BufferPos += len+5;
}

void TE_flush_buffers(struct TEState *CurEng){
	TE_clear_cmd_buffer(CurEng);
	TE_flush_eng(CurEng);
	TE_flush_str_buff(CurEng);
	//VI buffer
}

void TE_flush_eng(struct TEState *CurEng){
	bzero(CurEng, sizeof(*CurEng));
}

void TE_clear_cmd_buffer(struct TEState *CurEng){
	u32 i;
	union PtrByte Offset;
	u32 n = 0;
	u8 *str;
	u8 len;
	while(1){
		for(i=0;i<4;i++){
			Offset.bytes[i] = CmdBuffer[CurEng->state][i+n];
			CmdBuffer[CurEng->state][i+n] = 0;
		}
		len = CmdBuffer[CurEng->state][4+n];
		if (len == 0){
			break;
		}
		CmdBuffer[CurEng->state][4+n] = 0;
		for(i=0;i<len;i++){
			Offset.ptr[i] = CmdBuffer[CurEng->state][i+5+n];
			CmdBuffer[CurEng->state][i+5+n] = 0;
		}
		n += 5+len;
	}
	CurEng->BufferPos = 0;
}

void TE_flush_str_buff(struct TEState *CurEng){
	u32 i;
	for(i=0;i<0x100;i++){
		if (StrBuffer[CurEng->state][i]==0){
			break;
		}
		StrBuffer[CurEng->state][i] = 0;
	}
	StrBuffer[CurEng->state][0]=0x9E;
	StrBuffer[CurEng->state][1]=0xFF;
}

void TE_set_env(struct TEState *CurEng){
	gDPSetEnvColor(gDisplayListHead++, CurEng->EnvColorByte[0], CurEng->EnvColorByte[1], CurEng->EnvColorByte[2], CurEng->EnvColorByte[3]);
}

void TE_reset_Xpos(struct TEState *CurEng){
	CurEng->TempX += CurEng->TotalXOff*CurEng->ScaleF[0];
	CurEng->TotalXOff = 0;
}

void TE_fix_scale_Xpos(struct TEState *CurEng){
	create_dl_translation_matrix(MENU_MTX_NOPUSH, (f32)CurEng->TempX*(1.0f/CurEng->ScaleF[0]-1.0f), (f32)CurEng->TempY*(1.0f/CurEng->ScaleF[1]-1.0f), 0);
}

//gets str ready to display characters
void TE_setup_ia8(void){
	create_dl_ortho_matrix();
	gSPDisplayList(gDisplayListHead++, dl_ia_text_begin);
}
void TE_end_ia8(void){
	gSPDisplayList(gDisplayListHead++, dl_ia_text_end);
}

u16 TE_get_u16(u8 *str){
	u16 res;
	res = (str[1]<<8)+str[2];
	return res;
}

s16 TE_get_s16(u8 *str){
	s16 res;
	res = (str[1]<<8)+str[2];
	return res;
}

s32 TE_get_s32(u8 *str){
	s32 res;
	res = (str[1]<<24)+(str[2]<<16)+(str[3]<<8)+str[4];
	return res;
}

u32 TE_get_u32(u8 *str){
	u32 res;
	res = (str[1]<<24)+(str[2]<<16)+(str[3]<<8)+str[4];
	return res;
}