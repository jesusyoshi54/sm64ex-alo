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
#include "levels/bits/header.h"
extern u8 _bits_segment_ESegmentRomStart[]; 
extern u8 _bits_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bits_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x2961700),
TERRAIN(col_bits_1_0xe0d3b88),
SET_BACKGROUND_MUSIC(0,59),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,11887,8281,7966,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(217,-1406,6473,11577,0,-7,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,3375,3899,8446,0,-7,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,-10700,5025,1443,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7294,11458,-9963,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(24,-7428,3870,-1562,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-7741,4075,-2443,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(137,-1886,16710,5982,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(120,1548,11211,21640,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-1411,14429,-313,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,2185,1426,-12564,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(116,3513,3162,7523,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,3513,3701,7523,0,0,0,0x190000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,3455,3389,6433,0,0,0,0x190000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(116,3455,2864,6433,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(122,-540,14267,19998,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-922,-3956,29826,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(194,-940,-3218,29663,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(180,-912,-20,26333,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-917,-4296,18161,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,-799,-4840,20635,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-869,-4840,15862,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-700,-4229,5910,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-619,-3828,3815,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,6301,-3828,5489,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(223,3758,-3453,4249,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,1197,-3684,3926,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2770,-3525,5417,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6345,-3525,6709,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,8654,-3525,5694,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(89,10894,-4059,8949,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,11435,-4059,7262,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(180,-2362,1297,-2332,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(89,-2295,2877,-1372,0,136,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(0,-2295,2877,-1372,0,136,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(122,-8570,13667,1827,0,136,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(180,-10603,4867,-135,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-10329,4602,-2330,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8479,4602,-3567,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7045,4244,-290,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,-5552,4765,1030,0,136,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(180,-3884,3883,2673,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1802,4029,2081,0,136,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,4394,3989,1805,0,136,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,3274,3892,5089,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(89,7686,3892,2203,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(0,4773,3892,-242,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4011,3892,-4370,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(180,1770,3385,-11231,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,1053,3191,-12644,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,9136,1126,-9833,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,6826,1126,-10959,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9616,265,-6239,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,7742,-36,-4586,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,5289,-1617,-6937,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4011,-1617,-7197,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3084,-1617,-6819,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(89,2910,-1925,-4701,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(180,2910,-1575,-4701,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,219,-3205,-1218,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-559,-3797,995,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,-559,-3634,995,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(129,12525,11307,6666,0,-92,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,11925,10756,6687,0,-92,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,11277,10323,6710,0,-92,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10677,9983,6731,0,-92,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,10084,9892,6752,0,-92,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(0,8619,10748,7164,0,-182,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(89,8376,10748,6809,0,-182,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,9026,10748,6992,0,-182,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(0,20624,16745,1201,0,-182,0,0x3000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(180,9246,10224,8025,0,-182,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,7523,9290,9381,0,-182,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,7903,7381,10285,0,-182,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,7806,7323,10605,0,-4,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,6503,7720,14007,0,-94,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(89,4327,7257,13777,0,-94,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(194,-1809,7698,13000,0,-94,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1378,5751,10317,0,-94,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(180,2679,7503,8619,0,-94,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,1474,4900,8408,0,-94,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-2331,2078,-320,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,-3794,17741,-2661,0,0,0,0x40d0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(223,-1538,12222,5785,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-394,12459,4900,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(206,464,11496,4411,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,16662,13149,12236,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(223,5913,12451,23576,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,5913,12848,23576,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,8545,12479,22281,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(217,10677,12073,21265,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,14328,12073,18579,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(223,14583,12514,17113,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(188,14797,13186,14605,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,14477,13186,14382,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,14604,12817,10466,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,12867,12817,6246,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,12867,12273,6246,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,12867,11645,6246,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(180,17885,10831,-8756,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,17330,10831,-10461,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,15066,10831,-10640,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,15593,10831,-9068,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,14141,10831,-7953,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,13210,10831,-10338,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,13190,9521,-14186,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,11546,8647,-16029,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,10095,8096,-15475,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2540,11823,-10468,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,678,10912,-9750,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(116,-1491,8778,-9841,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-277,8384,-9649,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1650,17000,-7317,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2167,16579,-6384,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(84,3666,14863,-7285,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(89,1105,14145,-2913,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(180,-1197,15414,-2266,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,20601,16279,210,0,0,0,0x450000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,23178,17144,-1398,0,0,0,0x14060000, bhvWarp,31),
OBJECT_WITH_ACTS(116,23178,17144,-1398,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,23165,17102,-1552,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(129,23421,16737,-857,0,91,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,22939,16527,-822,0,91,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,22271,16527,-790,0,91,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,21907,16097,-1229,0,91,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(180,21006,16167,-5905,0,91,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,25474,16542,-735,0,91,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,25075,16067,2660,0,91,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,22597,11865,-11169,0,91,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,22597,11865,-11169,0,91,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,22230,10507,-11196,0,91,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(89,19207,10638,-9609,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(137,11894,8081,8248,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3512,4332,2370,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,6856,5439,13749,0,0,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,4052,3988,2382,0,0,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(215,26353,15819,783,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,26379,2155,-6352,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,16638,13398,-10023,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11097,9932,-15561,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3700,15432,-1592,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,20015,11559,12136,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1154,4787,12212,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6620,7382,9059,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8820,759,-11792,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1248,759,-351,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,15217,-661,8048,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(217,26340,11546,-3632,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,37,0),
WARP_NODE(241,26,1,38,0),
WARP_NODE(69,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,21,1,5,0),
WARP_NODE(5,21,1,4,0),
WARP_NODE(6,34,1,10,0),
RETURN()
};
