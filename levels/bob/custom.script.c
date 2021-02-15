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
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x129d720),
TERRAIN(col_bob_1_0xe0103a0),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,1650,-1782,-5130,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-3909,7002,2403,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-3502,7020,3653,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(122,9634,2670,8393,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,520,1533,-4313,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,2600,1,-5498,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(180,2654,-305,-4903,0,181,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-3289,9858,2633,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-214,2647,-4125,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,1845,-1094,-1599,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1471,613,-4933,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-466,93,-4767,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(215,2003,-1433,-2827,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3644,-1285,-7563,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1763,4891,3598,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8087,2308,4858,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7665,5926,1996,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6564,3708,1423,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4080,3836,535,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3057,6625,664,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3444,8556,2868,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2453,2006,3406,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(140,-1372,6089,2777,0,31,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-2120,6489,4,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2120,6365,4,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2120,6278,4,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(223,-2650,6089,615,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2820,6089,1162,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-2232,6089,2571,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4639,6089,3876,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(180,7872,2250,4663,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-449,2000,-4686,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,1000,1488,-3641,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-209,2000,-4119,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(195,4213,-1800,-7157,0,0,0,0x10000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,2627,-305,-5550,0,0,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(215,-1435,1129,-1380,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1101,1533,-3262,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3200,6868,4606,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,1105,2006,993,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,6791,3708,1637,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,6286,2006,3417,0,59,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2747,6822,-37,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-5312,8198,3281,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3081,6256,3595,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,975,1975,-4769,0,0,0,0x60000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,1,8,0),
WARP_NODE(241,6,1,7,0),
RETURN()
};
