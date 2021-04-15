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
#include "levels/bitdw/header.h"

const LevelScript level_bitdw_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, geo_bitdw_0003C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, geo_bitdw_0003D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, geo_bitdw_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, geo_bitdw_000408), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, geo_bitdw_000420), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, geo_bitdw_000438), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, geo_bitdw_000450), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, geo_bitdw_000468), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, geo_bitdw_000480), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, geo_bitdw_000498), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, geo_bitdw_0004B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, geo_bitdw_0004C8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, geo_bitdw_0004E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, geo_bitdw_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, geo_bitdw_000510), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM, geo_bitdw_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM, geo_bitdw_000540), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM, geo_bitdw_000528), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM, geo_bitdw_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4, geo_bitdw_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3, geo_bitdw_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2, geo_bitdw_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1, geo_bitdw_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE, geo_bitdw_000600), 

	AREA(1, bitdw_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_GROUNDS, 0x01, 0x5B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 0x01, 0x5C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BITDW, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 4670, 38, 5297, 0, -180, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(248, -1475, 1869, -4570, 0, -90, 0, 0x00300000, BhvHPillar),
		OBJECT(248, -1475, 3479, -4570, 0, -90, 0, 0x00300000, BhvHPillar),
		OBJECT(248, -5192, 2697, -4570, 0, 90, 0, 0x00300000, BhvHPillar),
		OBJECT(248, -5192, 987, -4570, 0, 90, 0, 0x00300000, BhvHPillar),
		OBJECT(248, -5192, 4380, -4570, 0, 90, 0, 0x00300000, BhvHPillar),
		OBJECT(MODEL_NONE, -3357, 5067, -7280, 0, -180, 0, 0x000A0000, bhvCannon),
		OBJECT(MODEL_NONE, 4715, 414, 706, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1711, 414, 570, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3348, 1028, -4473, 0, 0, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3348, 3059, -4473, 0, 0, 0, 0x00110000, bhvCoinFormation),
		OBJECT(255, 2107, 163, 1348, 0, 0, 0, 0x00010000, WaterCube_Square),
		OBJECT(255, 1494, 163, 171, 0, 0, 0, 0x00030000, WaterCube_Square),
		OBJECT(255, -188, 163, 234, 0, 0, 0, 0x00010000, WaterCube_Square),
		OBJECT(254, 4561, -276, 3856, 0, 0, -90, 0x000000, bhv_Rot_Gear_Flat),
		OBJECT(254, 4891, -276, 2544, 0, 0, -90, 0x000000, bhv_Rot_Gear_FlatO),
		OBJECT(254, 4860, 498, 2375, 0, 0, -90, 0x000000, bhv_Rot_Gear_Flat),
		OBJECT(MODEL_NONE, -3324, 5547, -6449, 0, -180, 0, 0x000C0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_BOWLING_BALL, 4579, 38, 3887, 0, -180, 0, 0x000A0000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 4843, 767, 2369, 0, -180, 0, 0x000A0000, bhvFireSpitter),
		OBJECT(MODEL_NONE, -3357, 8312, -7280, 0, -180, 0, 0x900B0000, bhvWarp),
		TERRAIN(bitdw_area_1_collision),
		MACRO_OBJECTS(bitdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x1B),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, bitdw_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_BOB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOWSER_1, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 2983, -433, 2871, 0, -180, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, 2827, -63, -3695, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2563, 1906, -10268, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -7183, 5105, -12721, 0, -180, 0, 0x00110000, bhvAirborneDeathWarp),
		OBJECT(MODEL_BOWLING_BALL, 4149, 1110, -3666, 0, -180, 0, 0, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 3005, 61, -1908, 0, -180, 0, 0, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 2782, 1235, -10276, 0, -180, 0, 0, bhvFireSpitter),
		OBJECT(MODEL_BITDW_WARP_PIPE, -7177, 4907, -13265, 0, -90, 0, 0x000C0000, bhvWarpPipe),
		OBJECT(MODEL_SNUFIT, 7342, 2645, -3360, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 8686, 3453, -4714, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 7422, 3453, -6814, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 7667, 3192, -9570, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 5393, 2322, -10280, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 5685, 2134, -3612, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 8199, 3453, -5668, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 7926, 3453, -7931, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 7001, 2828, -10021, 0, -180, 0, 0, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 4439, 1997, -10316, 0, -180, 0, 0, bhvSnufit),
		OBJECT(247, 2310, -433, 1565, 0, -180, 0, 2, BhvTransparentCube),
		OBJECT(247, 3731, -433, 1565, 0, -180, 0, 2, BhvTransparentCube),
		OBJECT(247, 3020, -433, 552, 0, -180, 0, 1, BhvTransparentCube),
		OBJECT(247, 2310, -433, -462, 0, -180, 0, 0, BhvTransparentCube),
		OBJECT(247, 3731, -433, -462, 0, -180, 0, 0, BhvTransparentCube),
		OBJECT(247, 1279, 853, -10235, 0, -180, 0, 2, BhvTransparentCube),
		OBJECT(247, 120, 1237, -10235, 0, -180, 0, 1, BhvTransparentCube),
		OBJECT(247, -1064, 1535, -10235, 0, -180, 0, 0, BhvTransparentCube),
		OBJECT(255, -7142, 2328, -11251, 0, 0, 0, 0x00020000, WaterCube_UPDown),
		OBJECT(255, -7142, 3537, -11738, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(255, -7142, 4728, -11231, 0, 0, 0, 0x00020000, WaterCube_UPDown),
		TERRAIN(bitdw_area_2_collision),
		MACRO_OBJECTS(bitdw_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x1D),
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
