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

#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
#include "levels/ddd/header.h"
const LevelScript level_jrb_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _dddSegmentRomStart, _dddSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),
// LOAD_MODEL_FROM_GEO(3,0x140001d0),
// LOAD_MODEL_FROM_GEO(4,0x14000290),
// LOAD_MODEL_FROM_GEO(5,0x140002b8),
// LOAD_MODEL_FROM_GEO(6,0x140002e0),
// LOAD_MODEL_FROM_GEO(7,0x14000308),
// LOAD_MODEL_FROM_GEO(8,0x14000200),
// LOAD_MODEL_FROM_GEO(9,0x14000230),
// LOAD_MODEL_FROM_GEO(10,0x14000260),
// LOAD_MODEL_FROM_GEO(11,0x14000330),
// LOAD_MODEL_FROM_GEO(12,0x14000358),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(54,0x12000478),
// LOAD_MODEL_FROM_GEO(55,0x120004a0),
// LOAD_MODEL_FROM_GEO(56,0x12000450),
// LOAD_MODEL_FROM_GEO(84,0x5008d14),
// LOAD_MODEL_FROM_DL(87,0x5013cb8,4),
// LOAD_MODEL_FROM_DL(132,0x8025f08,4),
// LOAD_MODEL_FROM_DL(158,0x302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x4032a18,4),
// LOAD_MODEL_FROM_DL(201,0x80048e0,4),
// LOAD_MODEL_FROM_DL(218,0x8024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_jrb_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_jrb_1_[] = {
AREA(1,Geo_jrb_1_0x19001700),
TERRAIN(col_jrb_1_0xe066a28),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(0,-3009,4096,-7898,0,91,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(137,206,4619,-11082,0,-138,0,0x80000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(122,-23374,3731,16077,0,-153,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(137,-7126,2015,11040,0,107,0,0xa0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(22,-2243,720,1552,0,-151,0,0x1f0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(22,-14132,1908,7132,0,-119,0,0x1e0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(129,1612,3698,-13246,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,1810,3704,-13054,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,1610,3699,-13051,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(207,1369,3666,-13603,0,180,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(122,3775,1750,-13572,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(0,-2588,3353,-6993,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(0,6475,1394,-4812,0,0,0,0x5000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(215,-4443,2198,1810,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,857,1639,-12472,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3782,2731,-6125,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,7113,1233,-649,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,723,1908,-5171,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-15032,671,8037,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-11933,2500,1686,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-24408,3609,12435,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(124,-14653,1908,6840,0,63,0,0x9e0000, bhvMessagePanel,63),
OBJECT_WITH_ACTS(122,-2508,720,2859,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(122,-3132,720,-29,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(122,-5926,2198,2092,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(122,-4014,2198,2073,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(122,787,1908,-5454,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(122,-969,1908,-10724,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(122,-3798,720,-261,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(220,-18916,4509,4172,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-21153,4509,4870,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-21138,4509,7178,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-21341,4509,12560,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-19704,4509,14727,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-23336,4509,11078,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(122,-21545,3719,16081,0,156,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(137,6075,1434,-5023,0,0,0,0x30000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,-4242,3282,-4475,0,17,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,-17895,3616,16258,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,-1115,720,1755,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-411,1908,-5418,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-12122,2384,3502,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-15094,3249,2165,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(223,-24328,3373,12450,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(223,2979,3877,-11749,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(129,1811,3700,-13248,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,2661,3688,-12527,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(188,1648,1908,-12270,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(188,930,1914,-15242,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(188,1726,1908,-8927,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(129,115,1715,-6495,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,-3792,2750,-6117,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,776,1708,-8521,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,2878,1708,-8353,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,3230,1708,-10671,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,-15038,627,8030,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,3810,1708,-13571,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,2237,1708,-13714,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,846,1708,-12491,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,-1054,1708,-14571,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(217,1583,3632,-8734,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,1624,-374,-6205,0,-19,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(217,1498,-694,-6406,0,-18,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,1498,-387,-6406,0,-18,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,1404,-694,-6116,0,-18,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,1404,-387,-6116,0,-18,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-123,1453,-1504,0,-24,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2771,2412,3790,0,14,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2346,3024,-10847,0,52,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3825,2047,-11690,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-358,2047,-13804,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-13548,2578,2547,0,46,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-22756,3512,10717,0,19,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3134,2047,-14070,0,93,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6141,1104,-3526,0,38,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,56,0),
WARP_NODE(241,26,1,57,0),
WARP_NODE(30,12,1,31,0),
WARP_NODE(31,12,1,30,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
