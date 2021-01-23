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
#include "levels/ttm/header.h"
extern u8 _ttm_segment_ESegmentRomStart[]; 
extern u8 _ttm_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ttm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom63438528_skybox_mio0SegmentRomStart,_SkyboxCustom63438528_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ttm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttm_1_[] = {
AREA(1,Geo_ttm_1_0x3b41700),
TERRAIN(col_ttm_1_0xe094fa0),
SET_BACKGROUND_MUSIC(0,50),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,-7598,-4339,684,0,45,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(128,-7545,943,-5856,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(201,937,634,-8850,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-2422,-2897,-2839,0,134,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(137,-1646,645,-4807,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,598,6990,9183,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2656,-2541,-3022,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7092,1333,-5538,0,0,0,0x0, bhvExclamationBox,32),
OBJECT_WITH_ACTS(122,-8110,2922,9551,0,118,0,0x0, bhvBalconyBigBoo,1),
OBJECT_WITH_ACTS(122,6687,-363,-1318,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(20,6371,-2745,-3332,0,180,0,0x2000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,583,5428,9572,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(20,3433,1875,-2993,0,180,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-7315,-5658,1259,0,-90,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(137,6269,-5070,-1692,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,983,5428,9572,0,0,0,0x1f0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,183,5428,9572,0,0,0,0x1b0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,983,5428,9172,0,0,0,0x1c0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,983,5428,8772,0,0,0,0x1a0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,583,5428,8772,0,0,0,0x120000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,583,5428,9172,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,183,5428,9172,0,0,0,0x110000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,183,5428,8772,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(3,6347,1652,-8234,0,90,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(215,2636,-1036,1317,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1865,-3557,-714,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6370,-2997,-3355,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2868,-2768,-2853,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7549,-112,-9213,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7840,231,6497,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1345,-1550,-8617,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7788,-5198,2115,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,8624,334,4265,0,103,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(120,8307,428,4342,0,14,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(129,3950,-543,4749,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3950,-543,4949,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4150,-543,4949,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4150,-543,4749,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,-165,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,35,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,235,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,435,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,635,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,835,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,1035,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,1235,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4324,1435,4780,0,14,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3953,-543,5144,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4151,-543,5141,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(223,4237,2015,5522,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,5246,97,6625,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,6152,4224,5610,0,0,0,0x100000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2083,-1205,-15,0,0,0,0x120000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3440,729,9362,0,17,0,0x150000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1689,-1575,-9659,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,6368,-4326,-8246,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,6667,-4270,-8553,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6057,-4270,-8549,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6672,-4270,-7936,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6374,-4002,-6514,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6062,-4270,-7939,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(137,-1081,-2897,-3897,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2397,-2897,-4298,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2571,-2747,-6611,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-3678,-2897,-3049,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2913,-1997,-2121,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(137,1312,-3386,1315,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,3590,-3686,-1621,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,2147,-3386,2640,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,4004,3266,2226,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,6319,-3126,-3824,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-519,-1835,-8695,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,297,-1835,-9579,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-6704,358,-8439,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-7783,658,-8075,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-1527,-2546,624,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8760,454,6045,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4277,-637,-9159,0,-60,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4304,-3021,-1199,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,8192,-800,809,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,604,1090,-6122,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2935,2439,5109,0,13,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4614,-3417,1377,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8766,2567,4912,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,941,714,-8842,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2427,-4468,2211,0,62,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(122,4107,-742,2284,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,8208,365,3543,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,1743,-3563,1715,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-8338,-1665,589,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-8148,225,4956,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-4623,592,8022,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-8629,2625,6277,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-6216,181,-9433,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,3389,1462,-2968,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,5899,4428,7797,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,297,6757,9039,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-1590,412,-4767,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(206,6653,-3259,6080,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,4081,-5207,266,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,3477,-5207,-718,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,3294,-3038,4895,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-7936,1197,-6173,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-1066,-1814,4371,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-8568,2741,3139,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-3207,2270,9802,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,7440,-626,2116,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-4509,-4759,1451,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(180,1604,3023,2647,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1805,-3360,-3499,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3049,1448,-5669,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3775,5183,9174,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7661,2994,9883,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7284,2994,8953,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8180,2994,8986,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1544,-2021,-1804,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2674,-2788,-3663,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7059,578,7784,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5723,-2206,-1176,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5502,-1939,4750,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-7683,3042,9415,180,0,0,0x0, bhvSwoop,62),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};