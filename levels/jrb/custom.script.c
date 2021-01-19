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
#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
const LevelScript level_jrb_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _jrbSegmentRomStart, _jrbSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),
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
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
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
TERRAIN(col_jrb_1_0xe03cab8),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(0,1675,3784,-1285,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-283,-3854,5005,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-52,4635,94,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4501,5313,-694,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2957,-3437,-1150,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,4207,3685,1999,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-1010,3959,3323,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,3865,3646,6291,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(129,-4501,4792,2173,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4501,4792,3123,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4501,4675,4037,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-1737,3211,1241,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(207,-6198,4954,3940,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(215,4630,-1111,-1136,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-155,1489,-897,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4004,3268,4495,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4801,-626,-5794,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2385,-4224,1742,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5954,3232,2141,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6001,1979,6245,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3383,-4224,-6063,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,5396,3232,2740,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(129,-1513,3125,866,0,28,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-393,4179,282,0,28,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(105,-239,3216,106,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-4788,3216,1248,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,4210,3216,5030,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,5535,3216,4561,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-5275,3216,1919,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(88,-4973,1979,-4704,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,2055,-1612,-1207,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,837,-4190,2606,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,2028,-325,481,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(0,3263,0,-3632,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-2123,-3490,817,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,374,2031,622,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,1655,2500,5124,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,-4478,2448,-2441,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,5398,-1094,-3637,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(129,-712,2956,2810,0,0,0,0x0, bhvHiddenObject,4),
OBJECT_WITH_ACTS(0,383,-3802,-3769,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,-4256,2396,813,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,-501,2500,-4231,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,-3088,2263,-4088,0,135,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1099,-4167,2595,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5410,3945,4499,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2133,-1353,-3125,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3694,3268,2568,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,203,1875,-107,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3511,3320,3579,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3497,-4189,-5204,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(118,1831,3232,1015,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1892,3232,562,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1923,3232,96,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1756,3232,-1096,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1873,3232,-486,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(140,1486,3211,1581,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(212,6187,364,-1902,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,4955,3594,2065,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,1469,3211,-1710,0,0,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,4890,-323,133,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-512,2956,2810,0,0,0,0x0, bhvHiddenObject,4),
OBJECT_WITH_ACTS(129,-712,2956,3710,0,0,0,0x0, bhvHiddenObject,4),
OBJECT_WITH_ACTS(129,-512,2956,3710,0,0,0,0x0, bhvHiddenObject,4),
OBJECT_WITH_ACTS(207,884,1958,4513,0,60,0,0x0, bhvFloorSwitchHiddenObjects,4),
OBJECT_WITH_ACTS(129,-748,3748,457,0,28,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1144,3422,665,0,28,0,0x0, bhvHiddenObject,31),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(10,12,1,10,0),
WARP_NODE(11,12,1,12,0),
WARP_NODE(12,12,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,116,0),
WARP_NODE(241,16,1,100,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
