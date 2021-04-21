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
#include "levels/bbh/header.h"

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 

	AREA(1, bbh_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 0, -3312, 0, 180, 0, 0x000A0000, bhvPenguinRaceShortcutCheck),
		OBJECT_WITH_ACTS(MODEL_NONE, -225, 560, -3112, 0, 180, 0, 0x10, bhv_Music_Changer, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 3704, 542, -12548, 0, 0, 0, 0x00020000, WaterCube_ForBack, ACT_1),
		OBJECT_WITH_ACTS(255, 4395, 542, -11502, 0, 180, 0, 0x00020000, WaterCube_ForBack, ACT_1),
		OBJECT_WITH_ACTS(255, 3778, 1250, -4362, 0, 180, 0, 0x00020000, WaterCube_Square, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 4429, 1250, -4351, 0, 180, 0, 0x00000000, WaterCube_Square, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 3102, 1354, 1358, 0, 180, 0, 0x00020000, WaterCube_Square, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 3555, 1354, 1282, 0, 180, 0, 0x00000000, WaterCube_Square, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_STAR, 7815, 3089, 1744, 0, 180, 0, 0x64, bhvStar, ACT_1),
		OBJECT_WITH_ACTS(MODEL_STAR, 3548, -209, 7409, 0, 180, 0, 0x01000064, bhvStar, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -840, 1250, -15900, 0, 180, 0, 0x000A0000, bhvAirborneWarp, ACT_1),
		OBJECT_WITH_ACTS(MODEL_NONE, -1257, 357, -3860, 0, 0, 0, 0x000A0000, bhvAirborneWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 8146, 608, -3899, 0, 180, 0, 0x00020000, WaterCube_UPDown, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 7496, 1250, -1682, 0, 180, 0, 0x00020000, WaterCube_UPDown, ACT_1),
		OBJECT_WITH_ACTS(255, 2985, 1803, -271, 0, 180, 0, 0x00020000, WaterCube_Static, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x13),
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
