#ifndef TEXT_ENGINE_H
#define TEXT_ENGINE_H

#include <PR/ultratypes.h>

#define NumEngines 3
struct Transition{
	/* 0xD0 */ s32 TransVI; //the start of the transition, for the end of a box
	/* 0xD4 */ u8 TransLength;
	/* 0xD5 */ u8 TransAlpha;
	/* 0xD6 */ u8 TransDir;
	/* 0xD7 */ u8 TransSpeed;
};
struct TEState{
	/* N//A */ u8 state;
	/* 0x60 */ u8 ShakeScreen;
	/* 0x61 */ u8 PlainText;
	/* 0x00 */ u32 LastVI;
	/* 0x04 */ s16 TempXOrigin;
	/* 0x06 */ s16 TempYOrigin;
	/* 0x08 */ s16 VIpChar; //VIs per char, negative for char per VI
	/* 0x0A */ u8  KeyboardState; //also used to keep track of box ends
	/* 0x0B */ u8  WobbleHeight;
	/* 0x0C */ u8 *TempStr;
	/* 0x10 */ s16 TempX;
	/* 0x12 */ s16 TempY;
	//offsets from a start transition so they remain baked in
	//until next box
	/* NEW  */ s16 TransX;
	/* NEW  */ s16 TransY;
	//variables for boxes. These piggy back on start/end timers
	/* NEW  */ s16 BoxTrXi;
	/* NEW  */ s16 BoxTrXf;
	/* NEW  */ s16 BoxTrYi;
	/* NEW  */ s16 BoxTrYf;
	/* 0x14 */ s32 TempStrEnd;
	/* 0x18 */ u16 SfxArg;
	/* 0x1A */ u8 CheckBlip;
	/* 0x60 */ u8 ScissorSet;
	/* 0x1C */ u8 *ReturnUsrStr;
	/* 0x20 */ s16 OgSeqID;
	/* 0x22 */ s16 NewSeqID;
	/* 0x24 */ u32 BlankTimer; //timer for removing str visibility
	/* 0x28 */ u32 EndTimer; //timer for ending str
	/* 0x2C */ u32 PauseTimer; //timer for pausing str printing
	union{
	/* 0x30 */ f32 ScaleF[2]; //X then Y
	/* 0x30 */ u32 ScaleU[2]; //X then Y
	};
	union{
	/* 0x38 */ u8 EnvColorByte[4];
	/* 0x38 */ u32 EnvColorWord;
	};
	union{
	/* 0x3C */ u8 RainbowColorByte[4];
	/* 0x3C */ u32 RainbowColorWord;
	};
	/* 0x40 */ u8 *StrRemoval;
	//For user input on keyboard
	/* 0x44 */ u8 UserInput;
	/* 0x45 */ u8 ShiftPressed;
	/* 0x46 */ u8 IntendedLetter;
	/* 0x47 */ u8 SelLetter;
	/* 0x48 */ u32 KeyboardTimer;
	/* 0x4C */ u8 *PreKeyboardStr;
	/* 0x50 */ u8 *InputStr;
	/* 0x54 */ u32 TotalXOff; //X offset from current line origin
	//dialog options
	/* 0x58 */ u8 ReturnedDialog;
	/* 0x59 */ u8 DisplayingDialog;
	/* 0x5A */ u8 NumDialogs;
	/* 0x5B */ u8 HoveredDialog;
	/* 0x5C */ u8 *DialogEnd;
	/* 0x62 */ u32 VICounter;
	/* 0x64 */ Gfx *TextEndDL; //gDisplayListHead of last text. In place due to some jank might not keep
	/* 0x68 */ u8 *BufferStrPtr; //Used so buffer knows where to go back and clear
	/* 0x6C */ s16 NewSpeed;
	//camera cmds
	
	//callback cmds
	/* 0xB0 */ u8 *ReturnStr[8];
	//transition cmds
	/* 0xD0 */ struct Transition TrEnd;
	/* 0xE0 */ struct Transition TrStart;
	/* NEW */ f32 TrPct; //to track percent for boxes
	/* 0xD8 */ s32 VIBufferPos;
	/* 0xDC */ s32 BufferPos;
	//to save display list head space
	/* 0xE8 */ s32 PrevEnvColorWord;
	/* 0xF0 */ s32 CurPos;
	/* 0xF4 */ s16 StartX;
	/* 0xF6 */ s16 StartY;
	/* 0xF8 */ u8 *OgStr;
	/* 0xFC */ s32 StrEnd; //the string buffer end pos
};
union PtrByte{
	u8 *ptr;
	char bytes[4];
};
union WordByte{
	u32 w0;
	char col[4];
};

extern const Gfx dl_draw_text_bg_box_TE[];
extern char TestStr[];
extern u8 StrBuffer[NumEngines][0x100];
extern volatile struct TEState TE_Engines[NumEngines];
void SetupTextEngine(s16 x, s16 y, u8 *str, u8 state);
void RunTextEngine(void);
void TE_setup_ia8(void);
void TE_end_ia8(void);
void TE_flush_str_buff(struct TEState *CurEng);
void TE_frame_init(struct TEState *CurEng);
void TE_set_env(struct TEState *CurEng);
void TE_add_char2buf(struct TEState *CurEng);
void TE_add_new_char(struct TEState *CurEng,u32 VI_inc);
void TE_reset_Xpos(struct TEState *CurEng);
void TE_fix_scale_Xpos(struct TEState *CurEng);
void TE_print(struct TEState *CurEng);
void TE_transition_print(struct TEState *CurEng);
void TE_transition_active(struct TEState *CurEng,struct Transition *Tr,u8 flip);
s8 TE_jump_cmds(struct TEState *CurEng,u8 cmd,u8 *str);
s8 TE_advBlen(struct TEState *CurEng,u16 len);
s8 TE_print_adv(struct TEState *CurEng,u16 len);
u16 TE_get_u16(u8 *str);
s16 TE_get_s16(u8 *str);
u32 TE_get_u32(u8 *str);
s32 TE_get_s32(u8 *str);
s8 TE_end_str(struct TEState *CurEng);
s8 TE_reset_str(struct TEState *CurEng);
void TE_clear_box_tr(struct TEState *CurEng);
void TE_bg_box_finish(struct TEState *CurEng);
void TE_bg_box_setup(struct TEState *CurEng);
void TE_bg_coords(struct TEState *CurEng,u8 *str);
void TE_flush_buffers(struct TEState *CurEng);
void TE_flush_eng(struct TEState *CurEng);
void TE_add_to_cmd_buffer(struct TEState *CurEng,u8 *str,u8 len);
void TE_clear_cmd_buffer(struct TEState *CurEng);
//str cmd functions
s8 TE_set_speed(struct TEState *CurEng,u8 *str);
s8 TE_set_sfx(struct TEState *CurEng,u8 *str);
s8 TE_set_env_color(struct TEState *CurEng,u8 *str);
s8 TE_display_usr_str(struct TEState *CurEng,u8 *str);
s8 TE_set_scissor(struct TEState *CurEng,u8 *str);
s8 TE_return_usr_str(struct TEState *CurEng,u8 *str);
s8 TE_enable_rainbow_txt(struct TEState *CurEng,u8 *str);
s8 TE_change_origin(struct TEState *CurEng,u8 *str);
s8 TE_jump_str(struct TEState *CurEng,u8 *str);
s8 TE_translate_offset(struct TEState *CurEng,u8 *str);
s8 TE_translate_absolute(struct TEState *CurEng,u8 *str);
s8 TE_text_moving(struct TEState *CurEng,u8 *str);
s8 TE_en_A_spd_incr(struct TEState *CurEng,u8 *str);
s8 TE_dis_A_spd_incr(struct TEState *CurEng,u8 *str);
s8 TE_always_allow_keyboard(struct TEState *CurEng,u8 *str);
s8 TE_make_keyboard(struct TEState *CurEng,u8 *str);
s8 TE_next_box(struct TEState *CurEng,u8 *str);
s8 TE_auto_goto_next_box(struct TEState *CurEng,u8 *str);
s8 TE_Abtn_goto_next_box(struct TEState *CurEng,u8 *str);
s8 TE_blank_time(struct TEState *CurEng,u8 *str);
s8 TE_btn_check_start(struct TEState *CurEng,u8 *str);
s8 TE_pause_time(struct TEState *CurEng,u8 *str);
s8 TE_enable_blip(struct TEState *CurEng,u8 *str);
s8 TE_disable_blip(struct TEState *CurEng,u8 *str);
s8 TE_persist_music(struct TEState *CurEng,u8 *str);
s8 TE_change_music(struct TEState *CurEng,u8 *str);
s8 TE_clean_buffer(struct TEState *CurEng,u8 *str);
s8 TE_Abtn_end_string(struct TEState *CurEng,u8 *str);
s8 TE_time_end_string(struct TEState *CurEng,u8 *str);
//bg box cmds
s8 TE_mosaic_bg_box(struct TEState *CurEng,u8 *str);
s8 TE_moving_textured_bg_box(struct TEState *CurEng,u8 *str);
s8 TE_shaded_bg_box(struct TEState *CurEng,u8 *str);
s8 TE_textured_bg_box(struct TEState *CurEng,u8 *str);
s8 TE_moving_shaded_bg_box(struct TEState *CurEng,u8 *str);
s8 TE_set_cutscene(struct TEState *CurEng,u8 *str);
s8 TE_non_buffer_pad(struct TEState *CurEng,u8 *str);
s8 TE_scale_text(struct TEState *CurEng,u8 *str);
s8 TE_enable_dialog_options(struct TEState *CurEng,u8 *str);
s8 TE_dialog_response(struct TEState *CurEng,u8 *str);
s8 TE_enable_screen_shake(struct TEState *CurEng,u8 *str);
s8 TE_disable_screen_shake(struct TEState *CurEng,u8 *str);
//camera cmds
s8 TE_trigger_warp(struct TEState *CurEng,u8 *str);
//object cmds
s8 TE_start_bracket(struct TEState *CurEng,u8 *str);
u8 * TE_mask_nested_dialog_option(struct TEState *CurEng,u8 *str);
s8 TE_set_return(struct TEState *CurEng,u8 *str);
s8 TE_goto_return(struct TEState *CurEng,u8 *str);
s8 TE_enable_plaintext(struct TEState *CurEng,u8 *str);
s8 TE_disable_plaintext(struct TEState *CurEng,u8 *str);
//transitions
s8 TE_enable_end_transition(struct TEState *CurEng,u8 *str);
s8 TE_enable_start_transition(struct TEState *CurEng,u8 *str);
s8 TE_box_transition(struct TEState *CurEng,u8 *str);
s8 TE_line_break(struct TEState *CurEng,u8 *str);
s8 TE_terminator(struct TEState *CurEng,u8 *str);
#endif