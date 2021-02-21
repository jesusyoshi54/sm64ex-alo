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

#include "areas/1/custom.model.inc.h"
#include "areas/2/custom.model.inc.h"
#include "areas/3/custom.model.inc.h"
#include "areas/4/custom.model.inc.h"
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bitdw/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_pss_1_),
JUMP_LINK(local_area_pss_2_),
JUMP_LINK(local_area_pss_3_),
JUMP_LINK(local_area_pss_4_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x31a1700),
TERRAIN(col_pss_1_0xe014c28),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,0,645,1434,0,180,0,0xa0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(221,305,0,342,0,-58,0,0x40000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,0,60,0,0,0,0,0x2450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,120,257,0,0,0,0,0x2450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,120,60,0,0,0,0,0x2450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-120,60,0,0,0,0,0x2450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-120,257,0,0,0,0,0x2450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,257,0,0,0,0,0x2450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,408,414,0,180,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,32,4,60,6,0,0,67, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,4,48,12,0,0,68, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(69,27,4,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,27,1,241,0),
RETURN()
};
const LevelScript local_area_pss_2_[] = {
AREA(2,Geo_pss_2_0x31a18f0),
TERRAIN(col_pss_2_0xe01f460),
SET_BACKGROUND_MUSIC(0,67),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_2_),
JUMP_LINK(local_warps_pss_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_2_[] = {
OBJECT_WITH_ACTS(0,18,686,-1856,0,169,0,0xa0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(3,191,300,-2529,0,-15,0,0x410000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,23,357,-1903,0,170,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3550,714,-2205,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(22,3913,300,-2111,0,0,0,0x450000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(215,6059,877,-3558,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,612,877,1167,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4760,877,1806,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,10739,877,3815,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3717,877,-9786,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1670,877,-6410,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4110,877,-3082,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9729,877,-7204,0,0,0,0x0, bhvRedCoin,31),
RETURN()
};
const LevelScript local_warps_pss_2_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(69,25,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,27,2,241,0),
RETURN()
};
const LevelScript local_area_pss_3_[] = {
AREA(3,Geo_pss_3_0x31a19f0),
TERRAIN(col_pss_3_0xe029c58),
SET_BACKGROUND_MUSIC(0,62),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_pss_3_),
JUMP_LINK(local_warps_pss_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_3_[] = {
OBJECT_WITH_ACTS(0,0,1001,0,0,180,0,0xa0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(31,-73,0,-1091,0,0,0,0x450000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,73,0,-1091,0,180,0,0x450000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(3,254,0,-964,0,0,0,0x440000, bhvBobombBuddy,31),
RETURN()
};
const LevelScript local_warps_pss_3_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(69,25,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(240,25,1,10,0),
WARP_NODE(241,25,1,10,0),
RETURN()
};
const LevelScript local_area_pss_4_[] = {
AREA(4,Geo_pss_4_0x31a1af0),
TERRAIN(col_pss_4_0xe055ef0),
SET_BACKGROUND_MUSIC(0,66),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_4_),
JUMP_LINK(local_warps_pss_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_4_[] = {
OBJECT_WITH_ACTS(0,1166,154,-3141,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-2911,-284,6701,0,0,0,0xd450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3155,-284,6697,0,0,0,0xd450000, bhvWarp,31),
OBJECT_WITH_ACTS(221,-3301,-284,3578,0,162,0,0x48000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,361,-104,4424,0,-90,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(195,814,-494,4439,0,0,0,0x3f0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,2712,-831,-1086,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3617,-794,-3021,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1890,-832,-4755,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-99,-794,-1882,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4469,-460,3569,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1048,-373,4019,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(187,479,-678,730,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-2520,-284,1139,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(124,-2615,-284,5971,0,213,0,0x660000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,112,477,4411,0,0,0,0x1000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,-4861,-407,3588,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1494,-350,4278,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1414,-337,708,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3230,-740,-131,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1035,-608,-3257,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,649,10,-3672,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2173,-776,-4641,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4755,-554,-3391,0,0,0,0x0, bhvRedCoin,31),
RETURN()
};
const LevelScript local_warps_pss_4_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(69,25,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,27,1,241,0),
RETURN()
};
