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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_wdw_skybox_mio0SegmentRomStart,_wdw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe005730),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-2430,-1339,-463,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-445,975,-2127,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1830,174,-1008,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-365,1995,-1449,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3940,-1625,568,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-478,2345,338,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(217,5433,-6518,555,0,0,0,0x0, bhvPushableMetalBox,32),
OBJECT_WITH_ACTS(122,5430,-6041,563,0,0,0,0x5000000, bhvStar,32),
OBJECT_WITH_ACTS(0,-536,-1185,818,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-1306,-224,-1186,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1236,-249,-1825,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-535,-1339,1173,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-445,615,-1563,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-535,-1015,993,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-378,295,-548,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-378,973,-548,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-660,1829,-875,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-500,-698,960,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-500,-697,960,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-500,3,960,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-500,4,960,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-1813,-1339,1273,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2073,-1339,1623,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-1095,-1339,1608,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,-423,-1339,2073,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1673,-1339,2033,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(140,-1095,1995,325,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-1208,1995,35,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,2123,35,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,2251,35,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,2379,35,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,1995,580,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,2123,580,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,2251,580,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1208,2379,580,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,-663,1995,110,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-663,1995,608,0,90,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,1,0),
WARP_NODE(241,16,1,11,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
