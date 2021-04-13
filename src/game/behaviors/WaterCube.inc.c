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
void RotCrane(void) {
	o->header.gfx.node.flags |= GRAPH_RENDER_NO_CULL;
	switch(o->oAction){
	case 1:
		o->oFaceAnglePitch+=60;
		o->oAngleVelPitch=60;
		if(o->oTimer>130){
			o->oAction=2;
		}
		break;
	case 2:
		// o->oFaceAnglePitch+=40;
		o->oAngleVelPitch=0;
		if(o->oTimer>130){
			o->oAction=3;
		}
		break;
	case 3:
		o->oFaceAnglePitch-=60;
		o->oAngleVelPitch=-60;
		if(o->oTimer>130){
			o->oAction=4;
		}
		break;
	case 4:
		o->oAngleVelPitch=0;
		if(o->oTimer>130){
			o->oAction=1;
		}
		break;
	}
}