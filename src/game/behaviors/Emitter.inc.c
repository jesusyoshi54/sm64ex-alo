void bhv_emitter_loop(void) {
	if ((f32)((o->oBehParams>>24)&0xFF)>o->oDistanceToMario){
		spawn_object(o, 0, bhvSparkleSpawn);
	}
}