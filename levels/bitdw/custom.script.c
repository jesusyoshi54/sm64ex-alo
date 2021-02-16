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
#include "levels/bitdw/header.h"
extern u8 _bitdw_segment_ESegmentRomStart[]; 
extern u8 _bitdw_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bitdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bitdw_segment_ESegmentRomStart, _bitdw_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_bitdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitdw_1_[] = {
AREA(1,Geo_bitdw_1_0x163f0d0),
TERRAIN(col_bitdw_1_0xe03a760),
SET_BACKGROUND_MUSIC(0,33),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(0,-14,3784,101,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,45,3900,413,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,47,3930,462,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(122,-4982,-1740,-1197,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1257,-3788,1925,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,1507,-1410,-142,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(124,-225,3789,269,0,138,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(116,311,3630,814,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,390,3420,1040,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,530,3150,1338,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,641,2880,1695,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,769,2610,2037,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1101,1830,2366,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1432,1290,2619,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1831,810,2699,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2114,-1380,3109,0,180,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2114,0,3109,0,180,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,630,3630,-572,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,826,3390,-759,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1069,3150,-1025,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1358,2850,-1287,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1640,2580,-1559,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1996,2190,-1925,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2374,1770,-2267,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2584,-2580,-2469,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2673,-1230,-2558,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2798,60,-2733,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2894,930,-2815,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,-850,3630,-157,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1134,3390,-257,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1516,3090,-345,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1919,2790,-453,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2354,2430,-573,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2789,2100,-685,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-3321,1590,-896,0,94,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-3841,690,-905,0,94,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,1284,2160,41,0,94,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1444,990,-4466,0,94,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-744,-4590,2581,0,94,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(22,-729,3750,742,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(217,-729,3444,742,0,0,0,0xb0000, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(187,-818,3760,863,90,0,20,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,21,1,10,0),
WARP_NODE(240,17,1,240,0),
WARP_NODE(241,17,1,241,0),
RETURN()
};
