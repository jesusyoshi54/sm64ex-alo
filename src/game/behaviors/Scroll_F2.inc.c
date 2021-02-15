//64 bit pointer meme means this code cannot take bparams as pointers
extern Gfx DL_wf_1_0xe0d5b80[];
extern Gfx DL_ending_1_0xe0dfc20[];
extern Gfx DL_ending_1_0xe110c18[];

//The numbers in the array are the line numbers of the DL in the text file (set tile size-gfx first cmd)
static Gfx *F2_Scrolls[] = {
	&DL_wf_1_0xe0d5b80[28659-28507],
	&DL_ending_1_0xe0dfc20[25644-25568],
	&DL_ending_1_0xe110c18[34679-34629],
};
//This ended up much more complex than it needed to be because of differing platforms
#if IS_64_BIT
struct F2{
	unsigned int Y:12;
	unsigned int X:12;
	unsigned int MSB:8;
};
#else
struct F2{
	unsigned int MSB:8;
	unsigned int X:12;
	unsigned int Y:12;
};
#endif
union PosBytes{
	float pos;
	char bytes[4];
};
union WDBytes{
	uintptr_t w0;
	struct F2 SetTile;
};

void Scroll_F2_Loop(void){
	//protection for out of array access
	if (o->oBehParams>2){
		
	}else{
		Gfx *F2 = segmented_to_virtual(F2_Scrolls[o->oBehParams]);
		union PosBytes Xspd;
		union PosBytes Yspd;
		union WDBytes F2B;
		Xspd.pos = o->oPosX;
		Yspd.pos = o->oPosY;
		F2B.w0 = F2->words.w0;
		#if IS_64_BIT
		#define FLOAT_BYTE 2
		#else
		#define FLOAT_BYTE 1
		#endif
		F2B.SetTile.X+=Xspd.bytes[FLOAT_BYTE];
		F2B.SetTile.Y+=Yspd.bytes[FLOAT_BYTE];
		F2->words.w0 = F2B.w0;
	}
};