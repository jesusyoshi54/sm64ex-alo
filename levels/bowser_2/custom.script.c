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
#include "levels/bowser_2/header.h"
extern u8 _bowser_2_segment_ESegmentRomStart[]; 
extern u8 _bowser_2_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bowser_2_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_2_segment_ESegmentRomStart, _bowser_2_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom45317824_skybox_mio0SegmentRomStart,_SkyboxCustom45317824_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_2_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_2_1_[] = {
AREA(1,Geo_bowser_2_1_0x19001700),
TERRAIN(col_bowser_2_1_0xe018648),
SET_BACKGROUND_MUSIC(0,47),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_2_1_),
JUMP_LINK(local_warps_bowser_2_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_2_1_[] = {
OBJECT_WITH_ACTS(0,-8034,4618,1223,0,-12,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(100,29,-193,-5727,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1078,-193,-2976,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-1854,-193,-3464,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-8290,2422,2070,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(122,-274,373,-4024,0,73,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(145,-408,57,-3134,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(102,-246,-193,-4025,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(100,4717,-1623,-4231,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(223,4784,-1493,-4450,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-205,-193,-4052,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(86,-501,-193,-5301,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,424,-193,-5163,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-920,-193,-4622,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,644,-193,-4371,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-1438,-193,-3986,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,1044,-193,-3694,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-1226,-193,-3186,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,329,-193,-2951,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-358,-193,-3045,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,4760,-49,-4343,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(0,-2240,264,-2569,0,220,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(0,-101,-789,-5155,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1204,-789,-3761,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,525,-789,-3429,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-350,-789,-3498,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,279,-789,-4232,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-712,-789,-4405,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,4715,-14,-4203,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(145,609,57,-4366,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-249,57,-4021,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-948,57,-4613,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,592,-821,-3773,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,4694,-1921,-5261,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,5797,-1249,-4270,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5804,-755,-4042,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3085,-259,-4173,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2058,-225,-4207,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(180,-8056,2313,3021,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7224,1332,5316,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5730,598,6444,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4201,-112,7438,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2601,-836,8165,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1856,1669,7213,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2738,2231,7246,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4076,1659,5947,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4902,1195,4900,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5174,644,3213,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5386,96,1487,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5008,-687,-1424,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4722,-986,-4229,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(129,347,-2026,8334,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1141,-2026,8152,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2035,-2026,7618,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-1029,-1633,8450,0,-90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(0,2278,-849,7236,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4723,181,-4242,0,0,0,0x10000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-7928,2767,855,0,-14,0,0x170000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,1865,2186,7220,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_bowser_2_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,58,0),
WARP_NODE(241,19,1,33,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};