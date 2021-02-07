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
#include "levels/bitdw/header.h"
extern u8 _bitdw_segment_ESegmentRomStart[]; 
extern u8 _bitdw_segment_ESegmentRomEnd[];
const LevelScript level_bitdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _bitdw_segment_ESegmentRomStart, _bitdw_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bitdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitdw_1_[] = {
AREA(1,Geo_bitdw_1_0x23e1700),
TERRAIN(col_bitdw_1_0xe09a0c8),
SET_BACKGROUND_MUSIC(0,51),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(0,70,688,152,0,-100,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(207,-28505,9787,5147,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28926,9787,5737,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28586,9787,6464,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28585,9787,7159,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28061,9439,8249,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-27710,9083,8238,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-27378,8737,8207,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-27378,8737,8207,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-26660,8737,8223,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-25965,8737,8227,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(217,-24741,8468,8243,0,179,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(207,-24290,8742,8239,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-23886,8742,8061,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-23543,8742,7812,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-23502,8742,6618,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-23877,8742,5986,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-23845,8742,5060,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-23787,8742,4202,0,179,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-22536,8561,4476,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-22543,8565,4920,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-22551,8565,5350,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-22545,8565,5739,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-22557,8565,6125,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-22176,8366,6177,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-21699,8108,6234,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-21219,7854,6216,28,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-20577,7757,5931,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-20325,7757,5275,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-19914,7757,4605,0,90,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(217,-19237,7488,4149,0,90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-23057,8464,4122,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(215,-2898,-889,-698,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7536,2394,-15110,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-17034,3204,-14548,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-15369,6570,-15094,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-24116,6642,-12580,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9010,2578,-15546,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-579,2836,130,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-13054,6363,-338,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-13928,7491,6896,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,-27691,9790,2205,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28435,9790,1945,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28929,9790,1874,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28494,9790,2440,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28243,9790,3024,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-27946,9790,3494,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28482,9790,3967,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-28828,9790,4479,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(215,-14377,3045,-10245,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1304,2427,-8525,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3444,3461,1911,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-4148,1216,-8633,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-9716,2108,-1646,0,98,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4583,2164,2549,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-10011,2397,-14544,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8049,406,-4734,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-12722,6458,840,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(207,-29683,7997,2244,0,-180,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(122,-29687,7990,2250,0,-180,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(207,-29448,7970,1571,0,-180,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,-29400,7970,1184,0,-180,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(0,-13170,2937,-4114,35,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(86,-10059,1171,-6303,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-13056,1811,-6263,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-13017,2669,-9444,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(87,-10100,3562,-8948,0,0,0,0x0, bhvBigBully,31),
OBJECT_WITH_ACTS(86,-12936,1644,-5778,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-13636,2704,-8849,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-12346,3562,-8847,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-9652,1095,-5980,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-10249,1095,-5719,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(206,-2643,2820,165,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(86,-2830,3122,-17082,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-1559,3177,-17134,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-3025,3177,-15959,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-3718,2913,-13462,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-3417,2913,-14312,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(0,-22576,8608,-10583,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-2840,6410,-18128,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-12168,3385,-15897,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-20042,2856,-12739,0,125,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-16486,7494,5375,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5575,585,-9381,0,0,0,0x60f0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(195,-17,153,-581,0,-196,0,0x440000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(206,-11829,3911,-15910,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-5326,1869,-11152,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-11801,1932,-999,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-4770,1932,-2260,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(192,-2427,173,-2046,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2148,173,-1356,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1185,-14,-1007,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-709,-14,258,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(223,-17909,3948,-14362,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(206,-16235,3198,-15225,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(192,-11946,3386,-15806,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-12362,3386,-15706,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-11914,3111,-14628,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(86,-2770,4180,-16203,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-24224,6751,-11874,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-23547,6763,-12926,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(206,-21758,6148,-11428,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(180,-22918,7763,-10956,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-23119,7932,-10810,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-22691,7955,-11121,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-22918,8151,-10956,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-19859,5432,-12783,0,4,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-11487,2739,-14573,0,4,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-12438,2535,-8425,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-14552,2120,-8158,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8698,1181,-4756,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-5442,278,-4551,0,96,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-4860,-112,-8178,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-13016,2620,-849,0,96,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,-12906,2839,-1206,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4702,-36,-7323,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(140,-1664,912,-8408,0,-103,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(22,-26825,9143,-8203,0,0,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(118,3107,-475,-9358,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1659,-475,-8883,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-171,-475,-8569,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1642,339,-8402,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(137,5575,-160,-9381,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(206,-17698,7298,5320,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(118,4367,-234,-9389,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(206,-14696,7205,4119,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-12930,7205,3102,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(0,16,4,6,0,0,0,1,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,6,0,0,0,2,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,27,0),
WARP_NODE(241,16,1,28,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,30,1,10,0),
WARP_NODE(5,30,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
