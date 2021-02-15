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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe00d890),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,3005,1290,3197,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-6113,4727,5601,0,-154,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(217,6585,3595,-5306,0,266,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(122,-1145,-431,-1392,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,6454,8630,-6388,0,-151,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,6411,8220,6452,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6232,2940,-4924,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,3057,645,3297,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-6139,1590,5186,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6592,3330,-3341,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4333,5010,-6377,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-927,300,-4818,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2648,6000,-499,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,254,5880,-2384,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6409,1320,6493,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4792,1770,-4390,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(120,6359,390,6481,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,6416,2820,6492,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,6434,4590,6497,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,6463,6630,6551,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-915,0,-4831,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4762,0,-1510,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2600,495,5819,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,-6536,977,1517,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-5636,975,1532,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5643,1027,1596,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5042,1034,1569,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5061,1097,1609,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4374,1085,1603,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4329,1037,1535,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,5590,656,-1257,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(118,-3778,1027,1540,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3778,1027,1540,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3778,1027,1540,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,4805,1435,-4349,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(100,-982,-122,-5230,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(0,3024,0,-1847,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(217,332,4833,-2826,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-778,6900,-6412,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,2,0),
WARP_NODE(241,6,1,3,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
