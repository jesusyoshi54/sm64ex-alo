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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom51904192_skybox_mio0SegmentRomStart,_SkyboxCustom51904192_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(28, castle_door_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe063ba8),
SET_BACKGROUND_MUSIC(0,62),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-6587,648,-21242,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(37,-6632,189,-21579,0,0,0,0x5e0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-6482,189,-21577,0,180,0,0x5e0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(22,8874,2690,-10236,0,0,0,0xf0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(34,-4057,1464,17411,0,180,0,0x6e000000, bhvDoor,31),
OBJECT_WITH_ACTS(137,-14191,4407,7007,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(34,-3747,70,223,0,180,0,0x5f000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,12088,923,-999,0,0,0,0x55000000, bhvDoor,31),
OBJECT_WITH_ACTS(100,-3267,5207,-4326,0,0,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(221,-14177,-2685,-5225,0,0,0,0x52000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(201,461,287,-3418,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-12329,3588,7799,0,-90,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(0,8031,2965,-9334,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3722,1105,4840,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2748,1105,8406,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-6708,203,2041,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2209,516,-11351,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-6363,516,-17757,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1954,313,-12354,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-440,313,-3325,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,11651,2878,10088,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,-11190,79,-1259,0,0,0,0x20000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-2611,79,5422,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-3588,68,1359,0,0,0,0x30000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-3904,68,2504,0,0,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(221,-4169,189,-13480,0,0,0,0x83000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,-5855,4187,-15597,0,0,0,0x5000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(122,-7489,3761,-4918,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-4327,6080,7913,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,2748,3750,-4287,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,509,3750,2640,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6478,2896,-22306,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-15116,4115,8734,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4439,156,-4339,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5196,-260,-7828,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11118,625,-1214,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1603,1979,-11368,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,509,3542,2640,0,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2748,3542,-4287,0,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(217,-2960,4276,-396,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,-3256,5643,1124,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10165,4683,-14039,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-10017,4402,-14223,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-2917,3423,-13443,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-15171,3665,-6022,0,0,0,0x290000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-15171,3665,-6022,0,0,0,0x2a0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,8893,2891,-11017,0,0,0,0x100000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,8893,2891,-11017,0,0,0,0x110000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3206,1091,10092,0,0,0,0x150000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,3206,1091,10092,0,0,0,0x160000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-4067,1593,16998,0,0,0,0x3d0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-4067,1593,16998,0,0,0,0x3e0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,10754,2730,8410,0,0,0,0x470000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,10754,2730,8410,0,0,0,0x480000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-9473,1485,-12020,0,0,0,0x330000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-9473,1485,-12020,0,0,0,0x340000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4216,2173,-8598,0,0,0,0x1f0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,4216,2173,-8598,0,0,0,0x200000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,10744,2809,7323,0,0,0,0xb4460000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4058,1565,17629,0,0,0,0x3c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4190,1713,-7794,0,0,0,0x1e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6643,28,10029,0,0,0,0x64140000, bhvWarp,31),
OBJECT_WITH_ACTS(22,-15211,3518,-5246,0,0,0,0x280000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-8897,2202,-11902,0,0,0,0x320000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-6326,208,-20233,0,0,0,0x510000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-6326,208,-20233,0,0,0,0x520000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,16,5,96,9,0,0,5, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,64,5,12,12,0,0,6, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(15,14,1,10,0),
WARP_NODE(16,14,1,10,0),
WARP_NODE(17,14,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(20,15,1,10,0),
WARP_NODE(21,15,1,10,0),
WARP_NODE(22,15,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(30,36,1,10,0),
WARP_NODE(31,36,1,10,0),
WARP_NODE(32,36,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(40,13,1,10,0),
WARP_NODE(41,13,1,10,0),
WARP_NODE(42,13,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(50,11,1,10,0),
WARP_NODE(51,11,1,10,0),
WARP_NODE(52,11,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(60,21,1,10,0),
WARP_NODE(61,21,1,10,0),
WARP_NODE(62,21,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(70,25,1,10,0),
WARP_NODE(71,25,1,10,0),
WARP_NODE(72,25,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(81,26,1,10,0),
WARP_NODE(82,26,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(94,6,1,2,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,82,0),
WARP_NODE(241,26,1,81,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,26,1,2,0),
WARP_NODE(2,26,1,1,0),
WARP_NODE(3,26,1,4,0),
WARP_NODE(4,26,1,3,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
