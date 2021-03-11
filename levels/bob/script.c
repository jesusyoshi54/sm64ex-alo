#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(250, LEVEL_CASTLE_GROUNDS, 0x01, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(251, LEVEL_CASTLE_GROUNDS, 0x01, 2, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_STAR, -1528, 1391, 5330, 0, 0, 0, 0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 486, 1158, 6636, 0, 0, 0, 0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 3435, 1015, 7140, 0, 0, 0, 0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 3114, 864, 4235, 0, 0, 0, 0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, -23, 740, 4063, 0, 0, 0, 0, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 2791, 833, 0, 0, 0, 0, 0xA0000, bhvAirborneWarp),
		OBJECT(MODEL_STAR, -1332, 3015, -1, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, -1708, -132, -3807, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_NONE, -1, 1058, 1618, 0, 0, 0, 0x03000000, bhvHiddenStar),
		OBJECT(MODEL_STAR, 2754, 220, 13, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(255, 3644, -2342, -1254, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4055, -2342, -928, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 3669, -2342, -2402, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4058, -2342, -2308, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 3632, -2342, -3578, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4049, -2342, -3581, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 3644, -3174, -1254, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4055, -3174, -928, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 3669, -3174, -2402, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4058, -3174, -2308, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 3632, -3174, -3578, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4049, -3174, -3581, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, 1336, -88, -4673, 0, 0, 0, 0x00010000, WaterCube_Square),
		OBJECT(255, 2037, -88, -5260, 0, 0, 0, 0x00030000, WaterCube_Square),
		OBJECT(255, -1407, -132, -4146, 0, 0, 0, 0x00030000, WaterCube_Square),
		OBJECT(255, -2020, -132, -3474, 0, 0, 0, 0x00010000, WaterCube_Square),
		OBJECT(255, -1337, 3012, -1, 0, 0, 0, 0x00000000, WaterCube_Static),
		OBJECT(255, -1337, 2029, -1, 0, 0, 0, 0x00000000, WaterCube_Static),
		OBJECT(255, -3666, 1473, 246, 0, 0, 0, 0x00000000, WaterCube_Static),
		OBJECT(255, -3666, 2443, 246, 0, 0, 0, 0x00000000, WaterCube_Static),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
