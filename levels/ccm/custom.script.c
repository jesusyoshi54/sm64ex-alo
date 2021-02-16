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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ccm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x13130a0),
TERRAIN(col_ccm_1_0xe014de0),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,1192,330,468,0,263,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-2101,2100,2119,0,0,0,0x0, bhvStar,1),
OBJECT_WITH_ACTS(122,2436,-390,-1066,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(88,2423,-300,-1063,0,231,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(122,128,3060,-1455,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(88,-794,2596,3168,0,180,0,0x0, bhvThwomp,8),
OBJECT_WITH_ACTS(88,-448,2596,3166,0,180,0,0x0, bhvThwomp,8),
OBJECT_WITH_ACTS(88,84,1546,3163,0,180,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,504,2896,3169,0,180,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(137,-1645,930,-1642,0,12,0,0x10000, bhvExclamationBox,3),
OBJECT_WITH_ACTS(137,-1467,1680,2741,0,32,0,0x10000, bhvExclamationBox,8),
OBJECT_WITH_ACTS(22,-731,1990,-2690,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,-1133,2790,3186,0,0,0,0x3000000, bhvStar,8),
OBJECT_WITH_ACTS(122,-1703,4020,480,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(27,-573,23,-275,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-1056,21,541,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-491,27,908,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,100,22,729,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(212,424,3240,-1999,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-621,3150,-1879,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1299,3150,-2264,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-2060,3150,-2255,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-2964,780,-1118,0,87,0,0x0, bhvFlamethrower,1),
OBJECT_WITH_ACTS(0,-3142,900,-477,0,89,0,0x0, bhvFlamethrower,1),
OBJECT_WITH_ACTS(0,-3150,1200,1167,0,87,0,0x0, bhvFlamethrower,1),
OBJECT_WITH_ACTS(0,-3344,1260,1857,0,86,0,0x0, bhvFlamethrower,1),
OBJECT_WITH_ACTS(0,-1798,1440,2735,0,241,0,0x0, bhvFlamethrower,1),
OBJECT_WITH_ACTS(124,2134,240,36,0,296,0,0x2e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,953,540,1852,0,0,0,0x5000000, bhvHiddenRedCoinStar,32),
OBJECT_WITH_ACTS(215,-385,180,311,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-2650,1020,3207,0,175,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-2691,810,-1632,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-2861,870,431,0,87,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-1339,1170,2254,0,152,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,2443,3060,270,0,270,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,1069,2880,1405,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,67,660,3248,0,182,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(140,2577,570,2035,0,351,0,0x0, bhvBlueCoinSwitch,32),
OBJECT_WITH_ACTS(118,2130,450,1687,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,1517,360,1025,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,1017,210,233,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,353,60,-673,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,-175,60,-1310,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,-714,90,-1801,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,-1295,180,-2211,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(0,2469,2636,-803,0,0,0,0x0, bhvCoinFormation,32),
OBJECT_WITH_ACTS(0,1281,2445,3013,0,280,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2052,19,712,0,27,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,2426,480,-1066,0,0,0,0x60000, bhvExclamationBox,32),
OBJECT_WITH_ACTS(0,-752,420,745,0,0,0,0x110000, bhvCoinFormation,32),
OBJECT_WITH_ACTS(137,-1247,360,2592,0,334,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1699,298,-1892,0,353,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(187,-2799,1050,1252,90,0,60,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,29,1,10,0),
WARP_NODE(240,26,1,141,0),
WARP_NODE(241,26,1,142,0),
RETURN()
};
