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

#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(3,0x140001d0),
// LOAD_MODEL_FROM_GEO(4,0x14000290),
// LOAD_MODEL_FROM_GEO(5,0x140002b8),
// LOAD_MODEL_FROM_GEO(6,0x140002e0),
// LOAD_MODEL_FROM_GEO(7,0x14000308),
// LOAD_MODEL_FROM_GEO(8,0x14000200),
// LOAD_MODEL_FROM_GEO(9,0x14000230),
// LOAD_MODEL_FROM_GEO(10,0x14000260),
// LOAD_MODEL_FROM_GEO(11,0x14000330),
// LOAD_MODEL_FROM_GEO(12,0x14000358),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
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
// LOAD_MODEL_FROM_GEO(53,0x12000f18),
// LOAD_MODEL_FROM_GEO(54,0x12001940),
// LOAD_MODEL_FROM_GEO(55,0x12001530),
// LOAD_MODEL_FROM_GEO(56,0x12001548),
// LOAD_MODEL_FROM_GEO(57,0x12001518),
// LOAD_MODEL_FROM_GEO(88,0x500c778),
// LOAD_MODEL_FROM_DL(132,0x8025f08,4),
// LOAD_MODEL_FROM_DL(158,0x302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x4032a18,4),
// LOAD_MODEL_FROM_DL(201,0x80048e0,4),
// LOAD_MODEL_FROM_GEO(208,0x12000f00),
// LOAD_MODEL_FROM_GEO(209,0x12000f00),
// LOAD_MODEL_FROM_GEO(213,0x12000f00),
// LOAD_MODEL_FROM_GEO(214,0x12000f00),
// LOAD_MODEL_FROM_DL(218,0x8024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,8120,-1382,-9473),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x19001700),
TERRAIN(col_castle_courtyard_1_0xe061878),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-6193,1111,3949,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(195,2299,4672,7313,0,-182,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(0,-7644,4982,-3296,0,-153,0,0x1000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(212,-7474,-2481,-16088,0,269,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(22,18126,1051,16284,0,-165,0,0x320000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,16624,6735,16622,0,112,0,0x330000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,3296,998,-1252,0,-29,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-7302,994,2272,0,156,0,0x640000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6317,-637,-5019,0,99,0,0x650000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-8000,-2791,-15350,90,0,0,0x3cb0000, bhvWarp,31),
OBJECT_WITH_ACTS(215,-7668,2872,-3686,-1,10,-1,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6809,-1058,-6003,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8185,-1460,-15463,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6573,562,4139,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,682,2129,5372,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8583,-1694,-8794,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5344,1523,-8316,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9906,2231,-2654,0,10,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-9918,2212,-2650,0,10,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,998,2320,-4406,0,13,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(217,15184,-1774,15907,0,42,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(212,19002,6793,16862,0,-89,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,19018,6786,15962,0,-90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,17753,6816,16121,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,17694,6816,16797,0,-6,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,3678,738,-1440,0,-58,0,0x7c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(223,-1333,684,-247,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-7590,-433,-5752,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5191,1270,438,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,265,669,-2639,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-10050,846,1008,0,89,0,0x340000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,503,987,-2721,0,313,0,0x360000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-8026,-2576,-14682,0,1,0,0x380000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-806,2360,6644,0,162,0,0x3a0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-7685,2532,-2496,0,354,0,0x3c0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-10041,837,1008,0,-90,0,0x350000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,498,985,-2721,0,127,0,0x370000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-8025,-2576,-14682,0,-179,0,0x390000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-811,2359,6657,0,344,0,0x3b0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-7685,2526,-2496,0,-185,0,0x3d0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(22,-10375,562,1006,0,0,0,0xc90000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,853,684,-3030,0,-109,0,0xca0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-575,2053,7277,90,213,0,0x3cc0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7670,2236,-3122,90,-4,0,0x3cd0000, bhvWarp,31),
OBJECT_WITH_ACTS(188,-6225,1642,-1676,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(195,-6374,-1220,-4278,0,70,0,0x20000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(34,-7978,-2829,-15015,0,1,0,0x9000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-6497,-800,-8220,0,12,0,0x9000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-745,1979,7031,0,211,0,0xd000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-7676,2152,-2791,0,-4,0,0x12000000, bhvDoor,31),
OBJECT_WITH_ACTS(220,1266,2255,-4343,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(24,2133,2037,-3847,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(212,18283,7222,16458,0,-95,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(201,1520,2031,-4293,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(124,15206,-1956,15581,0,223,0,0x7e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(24,2580,2037,-1780,0,129,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(22,15189,-1872,15900,90,-138,0,0xce0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1020,5463,8551,0,30,0,0xcf0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-5039,1538,968,0,180,0,0x3e0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,15112,-1602,15213,0,165,0,0x3f0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,15112,-1602,15213,0,-14,0,0x400000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(137,15580,-2380,14067,0,0,0,0x960000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6456,1413,298,0,-3,0,0x970000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(22,-11171,1108,5072,0,0,0,0xd00000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-10895,1530,4869,0,-40,0,0x410000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(188,-10128,562,1272,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(28,-6114,562,4115,0,180,0,0x2280000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(28,-6263,562,4115,0,0,0,0x2280000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(212,1082,4737,7016,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(84,2250,2517,-1044,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(38,-10118,1108,4402,0,118,0,0x1b000000, bhvDoor,31),
OBJECT_WITH_ACTS(38,-10190,1108,4269,0,-62,0,0x1b000000, bhvDoor,31),
OBJECT_WITH_ACTS(137,17176,7127,15458,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(217,1044,4355,7020,0,32,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,1208,4355,7283,0,32,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,7552,-1991,-8847,0,-45,0,0x40000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(203,12,1,10,0),
WARP_NODE(201,9,1,10,0),
WARP_NODE(202,24,1,10,0),
WARP_NODE(204,5,1,10,0),
WARP_NODE(205,4,1,10,0),
WARP_NODE(50,26,1,51,0),
WARP_NODE(51,26,1,50,0),
WARP_NODE(52,26,1,52,0),
WARP_NODE(53,26,1,53,0),
WARP_NODE(54,26,1,54,0),
WARP_NODE(55,26,1,55,0),
WARP_NODE(56,26,1,56,0),
WARP_NODE(57,26,1,57,0),
WARP_NODE(58,26,1,58,0),
WARP_NODE(59,26,1,59,0),
WARP_NODE(60,26,1,60,0),
WARP_NODE(61,26,1,61,0),
WARP_NODE(62,26,1,62,0),
WARP_NODE(0,25,1,10,0),
WARP_NODE(30,29,1,10,0),
WARP_NODE(206,20,1,10,0),
WARP_NODE(207,27,1,10,0),
WARP_NODE(63,26,1,63,0),
WARP_NODE(64,26,1,64,0),
WARP_NODE(150,26,1,151,0),
WARP_NODE(151,26,1,150,0),
WARP_NODE(208,17,1,10,0),
WARP_NODE(65,26,1,65,0),
WARP_NODE(40,15,1,10,0),
WARP_NODE(0,25,1,10,0),
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
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
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
WARP_NODE(240,26,1,100,0),
WARP_NODE(241,26,1,101,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(100,26,1,100,0),
WARP_NODE(101,26,1,101,0),
RETURN()
};
