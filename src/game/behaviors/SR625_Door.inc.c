void SR625_Door_Init(void){
	// put BP1 into BP3 originally but not needed I guess?
	u8 BP1 = ((o->oBehParams>>24)&0xFF);
	o->oBehParams = o->oBehParams| (BP1<<8);
};
void SR625_Door_Loop(void){
	u8 BP3 = ((o->oBehParams>>8)&0xFF);
	u32 SaveFlags = save_file_get_star_flags(gCurrSaveFileNum, BP3);
	if (SaveFlags==0){
		o->oBehParams = o->oBehParams | (210<<24);
	} else {
		o->oBehParams = o->oBehParams & 0xFFFFFF;
	}
};