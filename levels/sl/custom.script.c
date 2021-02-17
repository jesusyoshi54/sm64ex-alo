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
#include "levels/sl/header.h"
extern u8 _sl_segment_ESegmentRomStart[]; 
extern u8 _sl_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_sl_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _sl_segment_ESegmentRomStart, _sl_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom28835520_skybox_mio0SegmentRomStart,_SkyboxCustom28835520_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_sl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sl_1_[] = {
AREA(1,Geo_sl_1_0x1a41700),
TERRAIN(col_sl_1_0xe085d38),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sl_1_),
JUMP_LINK(local_warps_sl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sl_1_[] = {
OBJECT_WITH_ACTS(0,-4709,-1002,4120,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,-3965,-25,9414,0,0,0,0x8c0000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,7103,-1634,-3357,0,61,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(122,-8777,-3074,-4557,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(20,-6539,-3206,4853,0,0,0,0x2000000, bhvFlipswitch_Panel_StarSpawn_MOP,31),
OBJECT_WITH_ACTS(20,9246,-3237,11854,0,180,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,12784,-3208,-5092,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-7111,3991,-11590,0,289,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(3,-4093,-1872,857,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-1013,-2794,5936,0,78,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(42,-8163,-3690,5512,0,64,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-9626,-3690,5982,0,-30,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-9454,-3690,1655,0,-90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-8228,-3690,4028,0,-46,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-9250,-3690,3181,0,-90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-7986,-3690,2760,0,-124,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-7045,-3690,1999,0,-156,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-10364,-3690,607,0,-61,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-10628,-3690,-1201,0,-107,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-8956,-3690,591,0,73,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-8602,-3690,-612,0,82,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-8628,-3690,-1882,0,115,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-9602,-3690,-2402,0,-162,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-5957,-3690,1814,0,180,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(47,1780,2488,2207,0,0,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(47,1780,2736,1464,0,180,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(47,10166,-4188,4557,0,95,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(202,2090,3004,-1276,0,0,0,0x10000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(46,-1415,3525,1602,0,0,0,0x0, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(22,-3231,3798,1927,0,0,0,0x1e0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-2677,4295,1928,0,-90,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2677,4295,1928,0,-90,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(137,9703,3556,-1890,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(120,-4515,-716,-8936,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,12784,-5865,-5092,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,12684,-4327,-5191,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,12884,-4327,-4991,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,12684,-4327,-4991,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,12884,-4327,-5191,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,11198,-3785,8190,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(146,-9658,2418,-2104,-90,-142,0,0x3c0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(120,-9817,2635,-2310,0,-142,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(84,3834,2865,-262,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,10385,2865,2895,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,8390,2865,4022,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-11309,1954,-4256,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-11359,1954,-6260,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-12263,1954,-8146,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-10971,1954,-7548,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-11157,1954,-9379,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-9422,1954,-11376,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-10098,1954,-10383,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-9781,1954,-9158,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-12421,1954,-5892,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(84,-1133,-1994,-6728,0,0,0,0x0, bhvBeta_Blarrg_MOP,31),
OBJECT_WITH_ACTS(153,-7941,3090,-11565,0,14,0,0x0, bhvSandblock_MOP,31),
OBJECT_WITH_ACTS(212,9068,3482,3187,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,9215,3482,4525,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,10083,3482,3777,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(86,1495,3224,-316,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-5310,-1365,7938,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-5181,-2985,421,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(192,9775,3224,-1627,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(86,-3371,-4184,4291,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-9181,2145,-2495,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-10172,2384,-1603,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-7070,3465,-11570,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-183,-1994,-7308,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,6767,-3525,1739,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(105,1532,-4247,-4069,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,4261,-4247,-5758,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,6716,-4247,-7764,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,7837,-4247,-3300,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,9284,-4247,-4176,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,1644,-4247,6589,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,4709,-4247,5148,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,2990,-4247,5468,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-3656,-4247,6624,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-1059,-4247,9495,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-3869,-4247,12202,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-6410,-4247,8007,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-5124,-3705,-2116,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,10286,-4247,9744,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,4003,-4247,6833,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,9221,-4247,7174,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,619,-3855,-1194,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,4547,-3255,1974,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,146,-3315,5868,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-1321,-3855,-1189,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,221,-3855,1697,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-8394,2745,6965,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,9141,-3658,11365,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(192,-49,2384,6009,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(188,-1107,2384,5600,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2453,2384,3728,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8636,2145,-2099,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7295,2384,3700,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7741,2384,5174,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,745,3224,-277,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-808,3224,280,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,455,3224,424,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,5114,2726,5845,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2642,2575,7563,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5003,3026,2407,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3780,1433,-4068,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4534,1681,3450,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2056,-3124,7952,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5425,-1923,11549,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2528,-649,9770,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,-3619,163,10921,0,0,0,0x1e0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,4922,2985,2972,0,193,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,4786,3044,2572,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4824,3044,2187,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4633,3044,1954,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4429,3044,1727,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3401,3193,1462,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3184,3193,1427,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3217,3193,1122,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,-1138,-1941,-6730,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2065,-3112,6946,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1556,-3471,3120,0,21,0,0x40000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1865,-3802,-5457,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6246,-4661,-4285,0,42,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,11358,-5654,-3538,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2669,2138,3946,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-1918,3615,481,0,28,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-3818,699,9585,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,-4131,699,9261,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,-775,-5393,-2103,0,0,0,0x0, bhvInitializeChangingWaterLevel,31),
OBJECT_WITH_ACTS(192,5014,3344,-2130,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,7074,3344,1667,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,8524,-3512,10527,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-5956,-3370,1815,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,7233,-797,-3845,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(46,-3226,3953,1925,0,0,0,0x10000, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(124,4373,-3044,7067,0,-146,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,7118,-1634,-4148,0,0,0,0x3c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-3984,-239,8853,0,0,0,0x3d0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,16,5,309,3,0,0,10,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,381,12,0,0,11,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_sl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,190,0),
WARP_NODE(241,26,1,191,0),
WARP_NODE(30,14,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(60,10,1,61,0),
WARP_NODE(61,10,1,60,0),
RETURN()
};
