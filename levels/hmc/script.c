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
#include "levels/hmc/header.h"

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0xB, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0xC, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 870, 1855, 4060, 0, 0, 0, 0x000A0000, bhvPenguinRaceShortcutCheck),
		OBJECT_WITH_ACTS(MODEL_NONE, 252, 626, 3478, 0, 0, 0, 0x1E, bhv_Music_Changer, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 2625, 2311, 353, 0, 0, 0, 0x00020000, WaterCube_ForBack, ACT_1),
		OBJECT_WITH_ACTS(255, -2521, 937, -4485, 0, 0, 0, 0x00020000, WaterCube_ForBack, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, -2521, 937, -3204, 0, -180, 0, 0x00020000, WaterCube_ForBack, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_HEART, 2098, -1004, -2186, 0, 0, 0, 0, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, -1017, -1126, 2134, 0, 0, 0, 0, bhvRecoveryHeart),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -33, 789, 4319, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1573, -1792, 2086, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1584, -1865, -1544, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 693, -1679, 570, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 3294, 724, -180, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2628, 865, -4227, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -858, 610, -2939, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2184, 1638, -5464, 0, 0, 0, 0x00020000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_STAR, 2613, 2886, -135, 0, 0, 0, 0x64, bhvStar, ACT_1),
		OBJECT_WITH_ACTS(MODEL_NONE, 1322, -819, -175, 0, 0, 0, 0x01000064, bhvHiddenRedCoinStar, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 2409, 703, -4234, 0, 0, 0, 0x000A0000, bhvAirborneWarp, ACT_1),
		OBJECT_WITH_ACTS(MODEL_NONE, -2788, 861, 3919, 0, -180, 0, 0x000A0000, bhvAirborneWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, -3185, 87, 3032, 0, 0, 0, 0x00020000, WaterCube_UPDown, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(255, 1590, 1393, 3948, 0, 0, 0, 0x00020000, WaterCube_UPDown, ACT_1),
		OBJECT_WITH_ACTS(255, -793, 518, 3097, 0, 0, 0, 0x00020000, WaterCube_Static, ACT_1),
		OBJECT(255, -861, 218, -3385, 0, 0, 0, 0x00020000, WaterCube_Static),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0X18),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
