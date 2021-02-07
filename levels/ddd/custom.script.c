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
#include "levels/ddd/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
#include "levels/sl/header.h"
const LevelScript level_ddd_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _slSegmentRomStart, _slSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE,      sl_geo_000390),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE,        sl_geo_000360),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK,  sl_geo_000378),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE,          snow_tree_geo),
LOAD_MODEL_FROM_GEO(18, snow_tree_geo),
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x2c21700),
TERRAIN(col_ddd_1_0xe071fa0),
SET_BACKGROUND_MUSIC(0,54),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,-8944,900,-16811,0,-120,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-2545,10066,-6274,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,3961,13654,9872,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,10017,-891,-1863,0,-15,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(137,15310,6740,2581,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-8523,10360,-1937,0,98,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,3254,2846,-8873,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-1171,-2597,24911,0,0,0,0x4000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,6051,6701,-7396,0,33,0,0x0, bhvExclamationBox,56),
OBJECT_WITH_ACTS(201,6539,6106,-7300,0,-57,0,0x0, bhvCannonClosed,60),
OBJECT_WITH_ACTS(128,7751,1795,18836,0,0,0,0x0, bhvCannon,60),
OBJECT_WITH_ACTS(137,8533,2275,19516,0,0,0,0x0, bhvExclamationBox,56),
OBJECT_WITH_ACTS(0,12575,4879,13798,0,-44,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,621,5065,22661,0,-73,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,14535,5244,15944,0,-120,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-5358,4099,20168,0,-145,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,5703,5422,22232,0,-33,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,5703,5302,22232,0,-33,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5358,3919,20168,0,-145,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,14535,5079,15944,0,-209,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,621,4900,22661,0,-73,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,12575,4703,13798,0,-44,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(195,4290,73,12528,0,-91,0,0x0, bhvBobombBuddyOpensCannon,60),
OBJECT_WITH_ACTS(129,-5115,3361,-5497,0,18,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-7263,3352,-2395,0,18,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-4432,3364,-4606,0,-17,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,-16675,248,-15359,0,18,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5979,85,1043,0,18,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1060,4366,5851,0,18,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4758,5524,8944,0,18,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1365,2094,-9211,0,18,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4932,2094,11753,0,18,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7864,-214,-8174,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4731,-877,3625,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(128,-6098,9652,-10546,0,66,0,0x0, bhvCannon,60),
OBJECT_WITH_ACTS(217,3265,673,-7390,0,25,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(145,-4675,4174,19795,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,445,5171,22245,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,5614,5171,21868,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,14854,4815,16172,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,12874,4542,13418,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(18,6880,2688,17818,0,-21,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-9291,721,10569,0,-21,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-13214,57,-6790,0,-21,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-13132,57,6039,0,36,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6052,57,8056,0,103,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6635,2751,-3645,0,118,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3893,7007,11561,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6270,5365,8885,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4067,405,-5899,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3240,4097,-8656,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6463,3862,-7949,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4345,2016,-11213,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,10580,3851,-1059,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1060,2939,5849,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(86,5258,8669,8414,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,4383,4055,8235,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,9922,481,87,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,6672,914,-317,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(84,2614,48,-11423,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-685,48,-8904,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,6286,2432,-4232,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,6020,2432,-2664,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,6555,1571,3960,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,7452,27,6679,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,3073,755,7580,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(86,-2374,-137,550,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,4292,255,-5085,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-1837,616,-12219,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-2490,1717,-13543,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-6410,3084,-2933,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,3540,0,1432,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,1878,163,5143,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(102,6108,0,1779,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(180,2477,6458,10781,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6138,8905,8414,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5698,4936,8114,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7272,1318,3968,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,10402,-716,-3248,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,8592,-716,-6659,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6138,-716,-9687,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2411,-716,-13200,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1612,-716,-14208,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5378,-716,-15058,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7750,-716,-19217,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-9918,-716,-23294,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-12245,-716,-25011,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-14106,-796,-24123,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-14253,-796,-20142,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(86,3912,4997,9586,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,2927,9828,8370,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-1812,99,4414,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,12455,5689,1630,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,6393,6174,-6862,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,4521,7512,12013,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,1045,10457,8901,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,2529,2245,-8866,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,2331,43,11473,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-11590,43,5231,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-15649,43,-3316,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,4327,5181,-11171,0,-183,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,6427,8062,9870,0,-183,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(86,6781,8188,11383,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,1232,6185,9424,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,-11838,1920,-18995,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3028,4031,-8940,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,-16959,3234,-17197,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-15884,1938,-14391,0,0,0,0x0, bhvChuckya,31),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,30,0),
WARP_NODE(241,6,1,31,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
