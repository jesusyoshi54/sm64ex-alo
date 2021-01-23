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
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
const LevelScript level_castle_grounds_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom37486272_skybox_mio0SegmentRomStart,_SkyboxCustom37486272_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
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
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe083618),
SET_BACKGROUND_MUSIC(0,47),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,8764,3143,6594,0,268,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,0,3629,-4701,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,4394,1510,6470,0,0,0,0x380000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-5065,910,1099,0,0,0,0x5390000, bhvWarp,31),
OBJECT_WITH_ACTS(22,14858,2560,-3854,0,0,0,0x3a0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,6477,3760,-8996,0,0,0,0x3b0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2711,3010,-7567,0,0,0,0x3c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,3617,1810,-10194,0,0,0,0x3d0000, bhvWarp,31),
OBJECT_WITH_ACTS(36,-4747,910,1101,0,-90,0,0x1e1e0000, bhvDoor,31),
OBJECT_WITH_ACTS(36,5650,1810,-3141,0,0,0,0x23230000, bhvDoor,31),
OBJECT_WITH_ACTS(36,5799,1810,-3142,0,180,0,0x23230000, bhvDoor,31),
OBJECT_WITH_ACTS(36,3930,1810,-10193,0,90,0,0x2d2d0000, bhvDoor,31),
OBJECT_WITH_ACTS(37,-73,910,-2343,0,0,0,0x2510000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,79,910,-2343,0,180,0,0x2500000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,10111,1810,2510,0,-90,0,0x5a0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,10111,1810,2662,0,90,0,0x5b0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,4421,1974,7326,0,0,0,0xa00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4421,1974,7326,0,0,0,0xa10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-4394,1345,1094,0,90,0,0xaa0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-4394,1345,1094,0,90,0,0xab0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,14226,3030,-4227,0,-121,0,0xb40000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,14226,3030,-4227,0,-121,0,0xb50000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,6884,4333,-9592,0,145,0,0xbe0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,6884,4333,-9592,0,145,0,0xbf0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3377,3699,-7488,0,90,0,0x6e0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3377,3699,-7488,0,90,0,0x6f0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,4257,2297,-9631,0,48,0,0x780000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4257,2297,-9631,0,48,0,0x790000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,13,1353,-1629,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,13,1353,-1629,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,8766,3214,6594,0,268,0,0x820000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,8766,3214,6594,0,268,0,0x830000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(124,6486,2710,4746,0,145,0,0xa70000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,7,1294,-1948,0,0,0,0x6000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,-647,474,2405,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1882,1352,7517,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3239,998,-5,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6055,2492,3004,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6315,3098,-3361,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6382,3848,-6981,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3531,2648,-10484,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11925,2348,-9227,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,2711,4661,-7572,0,0,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4504,4146,-5767,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,9520,2759,7037,0,0,0,0xf210000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9520,2759,6813,0,0,0,0xf210000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9520,2759,6587,0,0,0,0xf210000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9520,2759,6358,0,0,0,0xf210000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9520,2759,6138,0,0,0,0xf210000, bhvWarp,31),
OBJECT_WITH_ACTS(22,4,8109,-4167,0,0,0,0x2c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,-4,8467,-3603,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-4710,327,-4124,0,0,0,0x194a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4714,597,-3787,0,0,0,0x194a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4710,597,-4124,0,0,0,0x194a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4714,327,-3787,0,0,0,0x194a0000, bhvWarp,31),
OBJECT_WITH_ACTS(122,260,1004,-2234,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-654,960,2639,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-660,960,2403,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-657,960,2173,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,3882,1174,2096,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,3884,1174,2421,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,3893,1174,2821,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,3889,1174,3157,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,1901,910,-967,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-3159,910,19,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1720,910,-1012,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,12,1352,4561,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(0,5444,3760,-9741,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,12748,2469,-5816,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,8136,2248,-6652,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10904,2260,-7623,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(212,-16,989,-5796,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(180,-141,1612,7827,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2428,1612,8523,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,-5146,3037,1097,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(180,4527,3112,-3791,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,936,1012,2419,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(195,9291,6609,-4316,0,90,0,0x30000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,5555,1810,-12368,0,0,0,0x280000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(100,-5326,2859,1086,0,0,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(220,3655,6917,521,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(137,7036,3307,6661,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,-4,910,-1233,0,0,0,0x20000, bhvGoomba,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_castle_grounds_1_0xe05b640[10],editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_castle_grounds_1_0xe058ee0[3],editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_castle_grounds_1_0xe0560f0[14],editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_castle_grounds_1_0xe05dcb0[13],editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(56,7,1,10,0),
WARP_NODE(57,22,1,10,0),
WARP_NODE(58,8,1,10,0),
WARP_NODE(59,23,1,10,0),
WARP_NODE(60,10,1,10,0),
WARP_NODE(61,17,1,10,0),
WARP_NODE(160,16,1,10,0),
WARP_NODE(161,16,1,10,0),
WARP_NODE(170,16,1,10,0),
WARP_NODE(171,16,1,10,0),
WARP_NODE(180,16,1,10,0),
WARP_NODE(181,16,1,10,0),
WARP_NODE(190,16,1,10,0),
WARP_NODE(191,16,1,10,0),
WARP_NODE(110,16,1,10,0),
WARP_NODE(111,16,1,10,0),
WARP_NODE(120,16,1,10,0),
WARP_NODE(121,16,1,10,0),
WARP_NODE(90,26,1,90,0),
WARP_NODE(91,26,1,91,0),
WARP_NODE(130,16,1,10,0),
WARP_NODE(131,16,1,10,0),
WARP_NODE(33,20,1,10,0),
WARP_NODE(80,6,1,80,0),
WARP_NODE(81,6,1,81,0),
WARP_NODE(44,6,1,53,0),
WARP_NODE(74,25,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};