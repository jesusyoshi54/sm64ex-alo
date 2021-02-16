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
#include "areas/5/custom.model.inc.h"
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
JUMP_LINK(local_area_wf_2_),
JUMP_LINK(local_area_wf_3_),
JUMP_LINK(local_area_wf_4_),
JUMP_LINK(local_area_wf_5_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x13ba3f0),
TERRAIN(col_wf_1_0xe0152b0),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,0,0,0,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,4128,-150,-24,-1,270,0,0x1a1a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3630,-221,-18,0,270,0,0x2a0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(137,-3404,-600,12,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,6903,-810,41,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,-1820,-1140,3901,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-1160,-1140,3824,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1,-1140,3348,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-774,-1140,2383,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1932,-1140,2861,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(129,600,-1140,-4064,0,0,0,0x20000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,800,-1140,-4064,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,1000,-1140,-4064,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,1200,-1140,-4064,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,1400,-1140,-4064,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,1600,-1140,-4064,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(0,2685,-1140,4033,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1383,-1140,-3306,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3618,574,477,0,0,0,0x60000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,24,2,10,0),
WARP_NODE(26,24,2,10,0),
WARP_NODE(42,24,2,10,0),
WARP_NODE(240,6,1,32,0),
WARP_NODE(241,6,1,33,0),
RETURN()
};
const LevelScript local_area_wf_2_[] = {
AREA(2,Geo_wf_2_0x13ba2d0),
TERRAIN(col_wf_2_0xe0aa8a0),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_2_),
JUMP_LINK(local_warps_wf_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_2_[] = {
OBJECT_WITH_ACTS(0,-6,-3028,2423,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,-2940,3030,0,0,0,0x1f1a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1389,-2910,-192,0,90,0,0xf110000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7937,-76,-2254,0,0,0,0x120000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7939,54,-2588,0,0,0,0x1f130000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1107,-3096,-183,0,27090,0,0x1f140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1392,-2907,-1161,0,0,0,0xf210000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5760,-68,-2199,0,0,0,0x220000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5769,98,-2522,0,0,0,0x1f230000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1073,-3094,-1151,0,90,0,0x240000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1379,-2980,-182,0,0,0,0xf310000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7940,7952,-5475,0,0,0,0x420000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7928,8118,-5789,0,0,0,0x1f430000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1098,-3090,-197,0,270,0,0x340000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1375,-2948,-1151,0,0,0,0xf410000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5756,7964,-2222,0,0,0,0x320000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5760,8071,-2539,0,0,0,0x1f330000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1090,-3092,-1158,0,270,0,0x440000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4811,8121,268,0,0,0,0xf500000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-9010,112,3664,0,0,0,0x1f510000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8892,8125,7557,0,0,0,0xf520000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,-3024,1103,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-9183,100,-1604,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-6582,58,-2247,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,-3322,-2769,2463,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-10799,8132,2487,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-12172,8327,6476,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5156,8035,2579,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5200,7933,5067,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5609,8053,6231,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6451,8139,1438,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8075,1164,2253,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8214,-386,781,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,11628,188,-1525,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-7929,1,-1204,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7933,8049,-4415,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5757,8049,-996,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5757,0,-996,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5236,8015,274,0,90,0,0xb0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-7937,8021,3694,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,10945,567,-3775,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,9531,398,-3364,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(124,-1089,-3024,26,0,90,0,0x150000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1090,-3024,-949,0,90,0,0x1e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1085,-3024,18,0,270,0,0x200000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1084,-3024,-949,0,270,0,0x210000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-8517,0,3917,0,90,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-8514,8021,7742,0,90,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-356,-3000,2305,0,30,0,0x220000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-3152,-3024,2659,0,180,0,0x2a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,808,-3024,1872,0,270,0,0x4a0000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_wf_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(26,24,1,42,0),
WARP_NODE(17,24,2,18,0),
WARP_NODE(19,24,2,20,0),
WARP_NODE(18,24,2,17,0),
WARP_NODE(20,24,2,19,0),
WARP_NODE(33,24,2,34,0),
WARP_NODE(34,24,2,33,0),
WARP_NODE(35,24,2,36,0),
WARP_NODE(36,24,2,35,0),
WARP_NODE(49,24,2,50,0),
WARP_NODE(50,24,2,49,0),
WARP_NODE(51,24,2,52,0),
WARP_NODE(52,24,2,51,0),
WARP_NODE(65,24,2,66,0),
WARP_NODE(66,24,2,65,0),
WARP_NODE(67,24,2,68,0),
WARP_NODE(68,24,2,67,0),
WARP_NODE(80,24,3,10,0),
WARP_NODE(81,24,4,10,0),
WARP_NODE(82,24,5,10,0),
WARP_NODE(11,24,2,11,0),
WARP_NODE(240,6,1,32,0),
WARP_NODE(241,6,1,33,0),
RETURN()
};
const LevelScript local_area_wf_3_[] = {
AREA(3,Geo_wf_3_0x13ba1c0),
TERRAIN(col_wf_3_0xe005d90),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_3_),
JUMP_LINK(local_warps_wf_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_3_[] = {
OBJECT_WITH_ACTS(0,1398,0,-3366,0,336,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,1647,30,-3960,0,0,0,0x1f0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(122,1099,4200,-1604,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-1614,0,-2601,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2325,0,1967,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2520,0,376,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-2511,450,1229,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2134,450,-1502,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-2122,21,-1499,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2510,21,1231,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,382,3819,-413,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1678,1239,-1440,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(220,2419,3326,737,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,2647,638,-1206,0,0,0,0x0, bhvFlyGuy,31),
RETURN()
};
const LevelScript local_warps_wf_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(11,24,2,11,0),
WARP_NODE(240,6,1,32,0),
WARP_NODE(241,6,1,33,0),
RETURN()
};
const LevelScript local_area_wf_4_[] = {
AREA(4,Geo_wf_4_0x13ba0b0),
TERRAIN(col_wf_4_0xe00e0b0),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_4_),
JUMP_LINK(local_warps_wf_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_4_[] = {
OBJECT_WITH_ACTS(0,3951,0,4084,0,212,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,3965,-1169,3702,0,0,0,0x450000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(122,-5186,3627,4441,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(180,2031,-50,1461,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3808,-401,-1726,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3377,-1332,-3865,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2253,-1332,-4140,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2443,-1332,-2828,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1218,-1332,-3740,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4276,1977,4672,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,3941,-789,-1796,0,149,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(220,2168,-957,4198,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(223,-1940,590,2217,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,-2406,1329,1975,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,3300,-1442,2678,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-3700,1428,4477,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(23,872,-1442,684,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,880,-1442,4161,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3839,-1442,2291,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,4504,-1442,4588,0,0,0,0x0, bhvTree,31),
RETURN()
};
const LevelScript local_warps_wf_4_[] = {
WARP_NODE(10,9,4,0,0),
WARP_NODE(240,6,1,32,0),
WARP_NODE(241,6,1,33,0),
RETURN()
};
const LevelScript local_area_wf_5_[] = {
AREA(5,Geo_wf_5_0x13b9f90),
TERRAIN(col_wf_5_0xe021540),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_5_),
JUMP_LINK(local_warps_wf_5_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_5_[] = {
OBJECT_WITH_ACTS(0,-5117,600,-494,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,2509,2263,-2186,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,2383,2263,-1381,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,3092,2263,-1369,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,2586,2263,415,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,2231,2263,-144,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,684,2541,-3132,0,0,0,0x2000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(180,-580,1013,-1319,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5544,210,1197,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-752,1936,-4464,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(187,1613,2233,-3084,0,0,0,0x60000, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-224,1936,-4631,0,0,0,0x60000, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-1989,1936,-3880,0,0,0,0x60000, bhvButterfly,31),
OBJECT_WITH_ACTS(0,5,5,4,0,0,20,0, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wf_5_[] = {
WARP_NODE(10,9,5,0,0),
WARP_NODE(240,6,1,32,0),
WARP_NODE(241,6,1,33,0),
RETURN()
};
