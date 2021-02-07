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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/ccm/header.h"
const LevelScript level_bbh_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ccmSegmentRomStart, _ccmSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),
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
LOAD_MODEL_FROM_GEO(39, cabin_door_geo),
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x1201700),
TERRAIN(col_bbh_1_0xe036798),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,-11034,1077,9338,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,1563,8802,-3906,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,8958,7344,-10938,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-602,3405,-3353,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3718,2247,-695,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,663,1229,13871,0,24,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5044,9813,-4090,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-3785,557,5565,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-6901,3080,-9944,0,0,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,-5751,4193,15287,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-4638,5751,-4304,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10092,2152,-6901,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2766,2050,1450,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9115,875,-1904,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1892,297,4007,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4341,-37,334,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3525,-594,-10649,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5714,4712,-11577,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-4044,0,11317,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-11280,0,10575,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5900,4679,-3117,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,1707,8423,-7866,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,2523,4786,-10167,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4638,6011,-4824,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2338,2152,-334,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(140,3933,-701,-10983,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,9165,-742,-11614,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,8608,-742,-11539,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,8014,-445,-11539,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,8014,-445,-11205,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7087,-445,-10426,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,5900,-445,-10426,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,-3710,0,5454,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5491,922,11502,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1633,4712,-10797,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2375,1224,7903,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(180,-8632,2266,-1801,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-10152,2266,-5687,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4415,6122,-3414,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-557,6642,-3228,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,8311,4786,-10426,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4786,2115,-705,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(120,-2677,1019,17392,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,328,-708,2642,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,328,-708,2642,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,104,-708,1606,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,104,-708,1606,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,276,-708,604,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,276,-708,604,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,432,-708,-311,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,432,-708,-311,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,104,-708,-1244,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,104,-708,-1244,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(137,-1510,4271,-10625,0,17,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-808,5346,-3359,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6748,425,4369,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,4355,30686,-8703,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,7475,4601,-6178,0,265,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,7329,4795,-6210,0,46,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,7232,4601,-6162,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,7232,4601,-6339,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(124,-6875,2566,-9948,0,283,0,0x550000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(130,-6042,990,11511,0,0,0,0x0, bhvBreakableBoxSmall,31),
OBJECT_WITH_ACTS(129,2031,213,6094,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(223,-3906,-417,-208,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-5035,10838,-5127,0,16,0,0x70000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,37,0),
WARP_NODE(241,16,1,36,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
