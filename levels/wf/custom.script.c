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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_18),
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
AREA(1,Geo_wf_1_0x2d81700),
TERRAIN(col_wf_1_0xe067980),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,2746,-1925,284,0,-109,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,1607,-2739,13,0,-181,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,1264,2857,-2767,0,-153,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(120,1659,-2652,-335,0,107,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(20,590,3290,-2872,0,-63,0,0x0, bhvFlipswitch_Panel_StarSpawn_MOP,31),
OBJECT_WITH_ACTS(122,7021,-710,6348,0,-128,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,10021,3896,8179,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(20,7719,2114,-5301,0,-76,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,-9767,-274,5072,0,-22,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,6591,2915,-5828,0,154,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(42,-2851,1452,-4460,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-2687,1452,-3530,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3227,1452,-2707,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3529,1452,-3716,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-2084,1452,-4208,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-1858,1452,-3075,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-1447,1452,-2153,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-2478,1452,-2100,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-4027,1452,-2323,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-1536,1452,-1129,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-587,1452,-973,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-1801,1452,-150,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-2850,1452,-418,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-2843,1452,-1233,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(146,-4351,2208,-1043,0,110,0,0x46a00000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(0,1828,-863,-4815,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9379,2391,4060,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,9596,4651,-3712,0,194,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,9396,4753,-3961,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,8505,4753,-3900,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7480,4753,-4582,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,8856,4753,-4705,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,8048,4753,-5477,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,5832,4753,-4460,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,6348,4753,-5236,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(3,9608,2044,-2724,0,215,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(212,4618,6212,-3837,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(194,-9115,2101,-2422,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(137,6464,-702,8148,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(85,3155,756,3055,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,1101,756,5483,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,4404,756,5092,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,5908,1889,7545,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,187,2582,-1838,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,528,2857,-3260,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-2342,1564,-6183,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-519,-298,-4828,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,73,-298,-7083,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-9796,1966,4809,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,1193,-2726,-504,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,7675,4651,-4530,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,4391,-1096,8739,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,8643,1710,-3972,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,-3249,1940,-5656,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2842,756,4780,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1502,756,7442,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,34,2987,-2604,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(84,-4393,1701,-466,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(137,4678,5207,-5575,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3393,926,6781,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2218,-518,3967,0,122,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3819,1239,8137,0,-81,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4882,1768,-1336,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3887,188,-5072,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,8930,1733,-3586,0,32,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1618,648,-8436,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,-3069,1411,-7783,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,6124,759,5759,0,-59,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(137,4069,-1149,4871,0,-22,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(129,7887,1907,7368,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8063,2107,7445,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8239,2307,7523,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8239,2507,7523,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8417,2707,7602,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8594,2907,7681,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8594,3107,7681,0,-22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,6455,-1149,6121,0,-156,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,6213,-1149,5359,0,-101,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(120,6993,1977,7078,0,-22,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(194,4390,-1160,4212,0,0,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,3402,-1160,6772,0,0,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(153,5514,429,-5412,0,52,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(124,-368,-298,-7515,0,36,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,5286,756,4674,0,36,0,0x4c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,16,5,240,12,0,0,28,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,381,6,0,0,29,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,5,216,12,0,0,30,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,381,0,0,0,31,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,120,0),
WARP_NODE(241,6,1,121,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
