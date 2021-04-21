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
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3312, 0, 0, 0, -90, 0, 0x000A0000, bhvPenguinRaceShortcutCheck),
		OBJECT_WITH_ACTS(MODEL_NONE, -3112, 560, 225, 0, -90, 0, 0x20, bhv_Music_Changer, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, -836, 2589, 260, 0, -180, 0, 0x00020000, WaterCube_ForBack, ACT_1),
		OBJECT_WITH_ACTS(255, -227, 2686, -1138, 0, 0, 0, 0x00020000, WaterCube_ForBack, ACT_1),
		OBJECT_WITH_ACTS(MODEL_SNUFIT, -23, 2431, 6832, 0, -90, 0, 0x000A0000, bhvSnufit, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_SNUFIT, 776, 4231, 8640, 0, -90, 0, 0x000A0000, bhvSnufit, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_SNUFIT, 648, 6401, 7098, 0, -90, 0, 0x000A0000, bhvSnufit, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_STAR, -839, 6136, -3110, 0, -90, 0, 0x00000064, bhvStar, ACT_1),
		OBJECT_WITH_ACTS(MODEL_STAR, 648, 6136, 5900, 0, -90, 0, 0x01000064, bhvStar, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -6701, -932, 3193, 0, -90, 0, 0x000A0000, bhvAirborneWarp, ACT_1),
		OBJECT_WITH_ACTS(MODEL_NONE, -4531, -594, -3317, 0, -90, 0, 0x000A0000, bhvAirborneWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(255, -227, 2686, -2109, 0, 0, 0, 0x00000000, WaterCube_Static),
		OBJECT_WITH_ACTS(255, -2386, 1971, 6765, 0, -180, 0, 0x00020000, WaterCube_UPDown, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, -1852, 1368, 6765, 0, -180, 0, 0, WaterCube_UPDown, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x1F),
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
