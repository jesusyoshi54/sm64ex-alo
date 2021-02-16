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
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_sa_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x1432020),
TERRAIN(col_sa_1_0xe036110),
SET_BACKGROUND_MUSIC(0,23),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,155,2610,1103,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,117,2700,1419,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,148,2670,1467,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,823,-496,4655,0,0,0,0x1140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,819,2924,961,0,0,0,0x1150000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,3740,1575,-1649,0,0,0,0x11e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,804,2954,985,0,0,0,0x11f0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-800,5190,136,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-914,403,3340,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(86,4143,1000,-1039,0,0,0,0x2000000, bhvKingBobomb,31),
OBJECT_WITH_ACTS(0,581,4257,-99,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,831,-521,3308,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-703,2820,-1819,0,0,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,-850,3130,-1289,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,674,3575,-840,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-22,4235,-1615,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,652,1527,-850,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1227,1527,-524,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-385,1540,-829,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1769,1540,-765,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,-911,855,3607,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-911,-1089,4472,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,826,-1089,5172,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2386,-1711,64,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2386,-1223,64,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2386,-1711,-410,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2386,-1223,-410,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,3409,792,-242,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,4985,-412,-248,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(220,246,0,3018,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-324,0,3888,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(124,-1875,2500,1843,0,41,0,0x490000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-2040,2500,1687,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(187,-779,4655,509,90,0,-15,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(21,20,1,20,0),
WARP_NODE(20,20,1,21,0),
WARP_NODE(31,20,1,30,0),
WARP_NODE(30,20,1,31,0),
WARP_NODE(11,26,1,10,0),
WARP_NODE(240,20,1,240,0),
WARP_NODE(241,20,1,241,0),
RETURN()
};
