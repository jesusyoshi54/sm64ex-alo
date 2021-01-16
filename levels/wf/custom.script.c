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

#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
// LOAD_MODEL_FROM_GEO(54,0x12000440),
// LOAD_MODEL_FROM_GEO(55,0x12000458),
// LOAD_MODEL_FROM_GEO(56,0x12000470),
// LOAD_MODEL_FROM_GEO(88,0x500c778),
// LOAD_MODEL_FROM_DL(132,0x8025f08,4),
// LOAD_MODEL_FROM_DL(158,0x302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x4032a18,4),
// LOAD_MODEL_FROM_DL(201,0x80048e0,4),
// LOAD_MODEL_FROM_DL(218,0x8024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x19001700),
TERRAIN(col_wf_1_0xe0681e8),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-897,-1583,4501,0,175,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(128,-3536,658,5651,0,-181,0,0x0, bhvCannon,63),
OBJECT_WITH_ACTS(22,-952,4496,-1146,0,-153,0,0x60000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(0,-552,4467,-2055,0,73,0,0x150000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,3485,658,2751,0,-106,0,0x140000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(122,4583,4143,4355,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(122,-4579,-269,4989,0,119,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(122,-7103,2892,-757,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(0,-3102,-1966,3508,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,4002,2439,1679,0,0,0,0x4000000, bhvStar,63),
OBJECT_WITH_ACTS(103,-579,-2369,1250,0,0,0,0x0, bhvSmallWhomp,63),
OBJECT_WITH_ACTS(137,-63,-1357,-2848,0,-15,0,0xf0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,-63,-1357,-2848,0,-15,0,0xf0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,-63,-1355,-2848,0,-15,0,0xe0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(215,594,-2559,3730,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-4328,0,1924,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2214,4262,3540,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-4209,1521,5373,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2620,825,1305,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-882,3902,-6119,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-1846,-1665,-3010,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,3467,3157,-584,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(84,-3805,959,5290,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(84,-898,4757,-1520,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(84,3888,3803,615,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(84,-1126,2224,-3827,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(84,1431,3182,-5402,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,-579,-2369,2607,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-3194,563,1402,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,3775,3735,954,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-983,5386,-1181,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1185,1697,-5399,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2013,-2199,4118,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(207,-2510,2830,-4444,0,96,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(129,-3840,2428,-4648,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-3640,2428,-4648,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-3640,2428,-4448,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-3840,2428,-4448,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-4704,2428,-3886,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-4504,2428,-3886,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-4504,2428,-3686,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-4704,2428,-3686,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(0,-929,4876,-1496,0,0,0,0xf10000, bhvAirborneDeathWarp,63),
OBJECT_WITH_ACTS(0,-929,4876,-1496,0,180,0,0xf00000, bhvAirborneStarCollectWarp,63),
OBJECT_WITH_ACTS(223,-7210,2613,-696,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(220,128,3366,-5366,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,3048,1102,-2027,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-2373,-851,817,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,2954,3550,3126,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,-2534,2969,-5107,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(220,1600,2112,2814,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(212,1612,1878,2855,0,-61,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(103,3460,2890,1706,0,192,0,0x0, bhvSmallWhomp,63),
OBJECT_WITH_ACTS(129,-330,1697,-3054,0,-16,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(118,2894,2918,-182,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,4290,2918,-232,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,3168,2918,920,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,4548,2918,839,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(140,4171,3417,1359,0,0,0,0x0, bhvBlueCoinSwitch,63),
OBJECT_WITH_ACTS(116,3413,658,3073,0,0,0,0x0, bhvYellowCoin,63),
OBJECT_WITH_ACTS(137,2750,1068,-2206,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,-341,-1345,5382,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,2036,3501,-4801,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(217,-1055,-2369,1981,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,-1055,-2062,1782,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,-1058,-1755,1590,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(129,550,-2369,4419,0,-36,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(129,-5624,2428,-3085,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5424,2428,-3085,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5424,2428,-2885,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5624,2428,-2885,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6421,2428,-2317,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6221,2428,-2317,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6221,2428,-2117,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6421,2428,-2117,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-5,-2174,-1086,0,-16,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4759,-974,194,0,-40,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4352,497,2220,0,36,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1611,714,2847,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3567,714,635,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,621,1877,-5131,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,876,2869,-6592,0,61,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1543,4552,-1330,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,213,1117,-3292,0,0,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,54,0),
WARP_NODE(241,26,1,55,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(20,24,1,21,0),
WARP_NODE(21,24,1,20,0),
WARP_NODE(6,29,1,10,0),
RETURN()
};