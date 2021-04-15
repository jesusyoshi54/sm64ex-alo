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
void NoCull(void) {
	o->header.gfx.node.flags |= GRAPH_RENDER_NO_CULL;;
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

void TCube_Init(void) {
	o->oAction=o->oBehParams;
	switch(o->oAction){
	case 0:
		o->oOpacity=255;
		break;
	case 1:
		o->oOpacity=255;
		break;
	case 2:
		o->oOpacity=0;
		break;
	case 3:
		o->oOpacity=0;
	}
}
void TCube_Loop(void) {
	switch(o->oAction){
	case 0:
		o->oOpacity=255;
		o->oAnimState=0;
		if(o->oTimer>48){
			o->oAction=1;
		}
		load_object_collision_model();
		break;
	case 1:
		o->oOpacity-=5;
		o->oAnimState=1;
		if(o->oOpacity<=0){
			o->oAction=2;
		}
		load_object_collision_model();
		break;
	case 2:
		if(o->oTimer>150){
			o->oAction=3;
		}
		break;
	case 3:
		o->oOpacity+=5;
		o->oAnimState=1;
		if(o->oOpacity>=255){
			o->oAction=0;
		}
		load_object_collision_model();
		break;
	}
}