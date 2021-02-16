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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_ccm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ccm_1_),
JUMP_LINK(local_area_ccm_2_),
JUMP_LINK(local_area_ccm_3_),
JUMP_LINK(local_area_ccm_4_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x14aaf30),
TERRAIN(col_ccm_1_0xe02e050),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,1756,349,292,0,120,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-467,2497,526,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,2470,-667,1818,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,4985,409,1351,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,371,677,827,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5731,450,3231,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1910,23,-5598,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2719,23,-5574,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2163,23,1279,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3410,206,-2689,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-562,1080,2432,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-443,300,-5116,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,-2441,1753,3825,0,90,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,369,0,3487,0,0,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(22,5870,1831,-386,0,0,105,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,6313,855,3072,0,0,0,0x160d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-447,81,-6517,0,0,0,0x290c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8,0,-5753,0,45,0,0x110000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,5857,855,3069,0,270,0,0x120000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,5574,1650,-385,0,270,0,0x100000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(188,5048,0,2390,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,3786,269,-2679,0,270,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(192,-1280,0,-3321,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(116,-2004,1372,575,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1350,698,452,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-770,225,67,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-2452,1692,514,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-730,67,1314,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-1374,0,-4207,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,4927,0,-472,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-1803,1308,3588,0,0,0,0x110000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,5,2,10,0),
WARP_NODE(12,5,3,10,0),
WARP_NODE(13,5,4,10,0),
WARP_NODE(16,9,1,0,0),
WARP_NODE(17,9,1,0,0),
WARP_NODE(18,9,1,0,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
RETURN()
};
const LevelScript local_area_ccm_2_[] = {
AREA(2,Geo_ccm_2_0x14aae20),
TERRAIN(col_ccm_2_0xe008fc0),
SET_BACKGROUND_MUSIC(0,44),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_2_),
JUMP_LINK(local_warps_ccm_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_2_[] = {
OBJECT_WITH_ACTS(0,-93,1200,3889,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,12,2569,-1248,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(22,1262,153,4308,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(24,-1140,145,-2219,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,1559,-83,-2556,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,26,-28,-2004,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-2517,86,195,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,2981,231,310,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,2020,21,-274,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-1241,159,4088,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-1376,47,2398,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,1019,14,2385,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(124,0,280,0,0,0,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,188,630,1054,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-968,630,-695,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,926,1171,-758,0,335,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(116,-59,2029,-191,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-64,2281,-632,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,1576,1274,-542,0,17,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1601,1274,431,0,17,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_ccm_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(11,5,1,16,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
RETURN()
};
const LevelScript local_area_ccm_3_[] = {
AREA(3,Geo_ccm_3_0x14aad10),
TERRAIN(col_ccm_3_0xe030110),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_3_),
JUMP_LINK(local_warps_ccm_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_3_[] = {
OBJECT_WITH_ACTS(0,0,0,200,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,3573,1230,6623,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1,0,-418,0,0,0,0x1f0c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1719,0,3220,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1395,0,2137,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1583,283,4722,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(140,-2,0,2089,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,131,52,4058,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1153,-42,3377,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1142,0,2426,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,289,0,2086,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(137,-1970,612,4417,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3351,471,361,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2414,379,-818,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-143,-233,7517,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,4420,382,5027,0,51,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_ccm_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(12,5,1,17,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
RETURN()
};
const LevelScript local_area_ccm_4_[] = {
AREA(4,Geo_ccm_4_0x14aac00),
TERRAIN(col_ccm_4_0xe00d9d0),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_4_),
JUMP_LINK(local_warps_ccm_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_4_[] = {
OBJECT_WITH_ACTS(0,2062,600,-3562,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1557,2640,-2884,0,0,0,0x5000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,-1517,2037,-687,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-1499,1691,454,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-983,2258,2020,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,1325,1454,1934,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,1424,1208,458,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,1377,1146,-1871,0,320,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2058,690,-3993,0,0,0,0x1a0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(180,1717,1115,-1253,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1666,1064,3573,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,2226,1314,3888,0,0,0,0x60000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_ccm_4_[] = {
WARP_NODE(10,9,4,0,0),
WARP_NODE(13,5,1,18,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
RETURN()
};
