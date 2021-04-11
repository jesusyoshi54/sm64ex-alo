void Update_Mario_Water_Displacement(void) {
	//if mario is underwater, and is inside a platform
	if(((gMarioState->action&ACT_FLAG_SWIMMING)==ACT_FLAG_SWIMMING) && (gMarioState->Waterfloor->object==o)){
		apply_platform_displacement(TRUE, o);
		gMarioState->pos[1]+=o->oVelY;
	}
}
void play_music_init(void) {
	play_music(SEQ_PLAYER_LEVEL, o->oBehParams, 0);
}