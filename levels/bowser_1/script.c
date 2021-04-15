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
#include "actors/group12.h"

#include "make_const_nonconst.h"
#include "levels/bowser_1/header.h"

const LevelScript level_bowser_1_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bowser_1_segment_7SegmentRomStart, _bowser_1_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x06, _group12_mio0SegmentRomStart, _group12_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bowser_1_yellow_sphere_geo), 

	AREA(1, bowser_1_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_SA, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_BITDW, 0x02, 0x11, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOWSER, 398, -391, 0, 0, 0, 0, 0x000A0000, bhvBowser),
		OBJECT(254, 1582, -809, 2076, 0, 0, -90, 0x000000, bhv_Rot_Gear_Flat),
		OBJECT(254, 3418, -809, 2405, 0, 0, -90, 0x000000, bhv_Rot_Gear_Flat),
		OBJECT(254, 3785, 69, 1663, 0, 0, -90, 0x000000, bhv_Rot_Gear_Flat),
		OBJECT(254, 2533, 232, 3667, 0, 0, -90, 0x000000, bhv_Rot_Gear_Flat),
		OBJECT(MODEL_RED_COIN, 5852, -503, -3394, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(0, 8, -595, 1, 0, 0, 0, 0, bhvBowserCourseRedCoinStar),
		OBJECT(MODEL_RED_COIN, 3280, 1039, -2954, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1356, -527, -5034, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3100, -1719, -4512, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4217, 199, 1767, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -760, 179, 4515, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2535, 460, 3699, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3801, 357, 1617, 0, 0, 0, 0, bhvRedCoin),
		OBJECT(MODEL_NONE, 8, -189, -528, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(247, -1100, -433, 1437, 0, 141, 0, 2, BhvTransparentCube),
		OBJECT(247, -1788, -280, 2323, 0, 141, 0, 1, BhvTransparentCube),
		OBJECT(247, -3309, 52, 2492, 0, 141, 0, 0, BhvTransparentCube),
		OBJECT(247, -1645, 52, 3754, 0, 141, 0, 0, BhvTransparentCube),
		OBJECT(255, 1946, -19, -2117, 0, 16, 0, 0x00020000, WaterCube_UPDown),
		OBJECT(255, 2326, 889, -2840, 0, 16, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4100, 935, -3131, 0, 10, 0, 0, WaterCube_UPDown),
		OBJECT(255, 4979, 153, -3250, 0, 10, 0, 0x00020000, WaterCube_UPDown),
		TERRAIN(bowser_1_area_1_collision),
		MACRO_OBJECTS(bowser_1_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x19),
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
