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
#include "levels/bowser_1/header.h"
extern u8 _bowser_1_segment_ESegmentRomStart[]; 
extern u8 _bowser_1_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bowser_1_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_1_segment_ESegmentRomStart, _bowser_1_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_1_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_1_1_[] = {
AREA(1,Geo_bowser_1_1_0x35c1700),
TERRAIN(col_bowser_1_1_0xe01a210),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,417,190,-7292,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(217,625,-488,-8287,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-52,15911,-4843,0,0,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(100,-3317,373,-8037,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,7360,13990,-7771,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,9813,5988,-9053,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,4552,307,1468,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-156,1257,-2864,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(207,8170,13079,-4078,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,7400,15281,600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,7400,14839,300,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(192,3977,14674,1028,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(129,7400,14370,500,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,7400,14066,0,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8160,13845,0,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8160,13321,-600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8160,13321,-1600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8160,13321,-2600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8160,13183,-3284,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(192,6928,15900,1170,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(223,-833,379,1378,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,7605,15900,1274,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(192,7761,13958,-7604,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(180,7344,11718,-1406,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5261,4739,1459,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1042,1302,-1302,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,28,0),
WARP_NODE(241,17,1,5,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
