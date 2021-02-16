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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x15b0490),
TERRAIN(col_totwc_1_0xe038640),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,0,2670,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,15,2790,300,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,21,2790,299,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(85,838,2775,1003,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,-569,-4280,669,0,0,0,0x1140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-919,2680,154,0,0,0,0x1150000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(137,-886,5730,1004,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-581,-2520,1084,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,1364,720,-3721,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(223,716,3825,-730,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-1002,4675,-736,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-1568,2350,-1364,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,1311,2350,1599,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-26,2730,-744,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,442,-840,-3714,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-570,-3270,1547,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,510,2190,-4433,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-306,-2820,1519,0,40,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,135,-2094,-4421,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1589,96,-2100,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1589,96,-2000,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1589,96,-1900,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,3664,-1284,-203,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1941,-954,814,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,297,2954,-4414,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,337,1110,-3310,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,356,-780,-2955,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(22,-1498,2350,1606,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,-1270,2350,1426,0,39,0,0x490000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(187,1133,3835,-906,90,0,-30,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(20,29,1,21,0),
WARP_NODE(21,29,1,20,0),
WARP_NODE(11,26,1,10,0),
WARP_NODE(240,29,1,240,0),
WARP_NODE(241,29,1,241,0),
RETURN()
};
