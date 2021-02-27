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
#include "levels/bbh/header.h"
const LevelScript level_castle_grounds_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,7710,1783,6682),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe065f20),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,2696,3600,-19057,0,-39,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(223,176,5075,14206,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-15111,3490,8155,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4089,1310,-4022,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2414,1934,13796,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,5053,1424,9994,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-1637,2445,-928,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2460,2445,-12534,0,-100,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-2622,3206,-10927,0,-100,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6851,1359,-4666,0,13,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6927,1221,16682,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4308,5070,8054,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(25,-4794,5737,1821,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-3063,5737,488,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-3830,1018,-1412,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-501,1018,400,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-2876,1018,3445,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-3490,1244,6479,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-2130,1241,7119,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,4511,1875,4268,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,376,1667,-4875,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(24,-8121,1243,-2388,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-419,1243,-15724,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-8431,1243,-13069,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-3175,1243,-5294,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-10089,1243,187,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,1409,1243,11850,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,1095,1243,3709,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-746,4062,-11253,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1218,1302,-15342,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5656,1302,-15192,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-7249,1302,-8199,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-8795,1302,-308,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-14049,3490,8394,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4880,1302,6281,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6998,1302,16310,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1498,1302,6086,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(34,-822,1243,-11001,0,180,0,0xa000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-836,1382,-10709,0,93,0,0x140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,287,4356,-8139,0,71,0,0x1a0000, bhvWarp,31),
OBJECT_WITH_ACTS(34,46,4210,-8292,0,252,0,0x14000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-2,4210,-8149,0,71,0,0x14000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-4450,2858,15047,0,0,0,0x370000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-18441,818,-5126,0,0,0,0xa1e0000, bhvWarp,31),
OBJECT_WITH_ACTS(22,-3921,5729,1068,0,0,0,0x230000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-15946,3795,8554,0,0,0,0x280000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,6777,1967,18685,0,0,0,0x2d0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,9726,7921,9470,0,0,0,0x14320000, bhvWarp,31),
OBJECT_WITH_ACTS(124,-4438,1946,-17315,0,0,0,0x400000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(215,-9956,3417,8656,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2349,1177,6607,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1739,3730,-9947,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2522,1217,-20296,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3481,1361,20860,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10568,4459,2299,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1036,-5229,-4512,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2776,4928,8016,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,2068,7115,15993,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2123,6662,16657,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2114,6119,16224,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1620,5608,16155,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1004,5211,15921,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,403,4927,15460,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-1,5041,14758,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(37,2918,3444,-19252,0,136,0,0x2050000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,2812,3444,-19354,0,-44,0,0x2050000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,3814,8060,17267,0,0,0,0x2000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(101,-10524,4394,4070,0,-111,0,0x3e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,5704,1615,17372,0,0,0,0x2f0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,5704,1615,17372,0,0,0,0x2e0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,4273,5074,8091,0,0,0,0x330000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,4273,5074,8091,0,0,0,0x340000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1759,1458,11691,0,0,0,0x380000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-1759,1458,11691,0,0,0,0x390000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-15523,3906,9018,0,0,0,0x290000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-16929,3906,7612,0,0,0,0x2a0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-915,1406,-12087,0,0,0,0x150000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-915,1406,-12087,0,0,0,0x160000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-651,4167,-9143,0,0,0,0x1b0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-651,4167,-9143,0,0,0,0x1c0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-17880,1302,-6336,0,0,0,0x1f0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-17880,1302,-6336,0,0,0,0x200000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3560,5885,1670,0,0,0,0x240000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-3560,5885,1670,0,0,0,0x250000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3005,1418,6270,0,0,0,0x90000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,3005,1418,6270,0,0,0,0xa0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(188,-568,1458,5442,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,11172,1458,14371,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4061,1458,19586,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1681,1458,19438,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4163,1458,10113,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7835,1458,16508,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8528,1458,5981,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2394,1458,-14451,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7147,1458,-16642,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-11679,1458,-10375,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-14352,1458,-9481,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6135,1458,390,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3751,1458,2983,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-853,1458,1838,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,2754,1823,6529,0,0,0,0x0, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(124,-17193,3795,9527,0,130,0,0x670000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,16,5,144,9,0,0,2, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(19,16,1,10,0),
WARP_NODE(8,16,1,10,0),
WARP_NODE(9,16,1,10,0),
WARP_NODE(10,16,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(20,28,1,10,0),
WARP_NODE(21,28,1,10,0),
WARP_NODE(22,28,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(26,17,1,10,0),
WARP_NODE(27,17,1,10,0),
WARP_NODE(28,17,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(30,20,1,10,0),
WARP_NODE(31,20,1,10,0),
WARP_NODE(32,20,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(35,4,1,10,0),
WARP_NODE(36,4,1,10,0),
WARP_NODE(37,4,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(40,5,1,10,0),
WARP_NODE(41,5,1,10,0),
WARP_NODE(42,5,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(45,24,1,10,0),
WARP_NODE(46,24,1,10,0),
WARP_NODE(47,24,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(50,9,1,10,0),
WARP_NODE(51,9,1,10,0),
WARP_NODE(52,9,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(55,12,1,10,0),
WARP_NODE(56,12,1,10,0),
WARP_NODE(57,12,1,10,0),
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
WARP_NODE(94,16,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(31,0,33,192,39),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,64,35),
WARP_NODE(0,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,10,0),
WARP_NODE(241,16,1,9,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,6,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
