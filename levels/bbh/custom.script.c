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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
const LevelScript level_bbh_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x134cb30),
TERRAIN(col_bbh_1_0xe02b110),
SET_BACKGROUND_MUSIC(0,7),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,-2002,120,-2102,0,79,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,-1803,120,-1785,0,204,0,0x310000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-218,270,75,0,0,0,0x0, bhvHiddenStar,1),
OBJECT_WITH_ACTS(137,-133,3210,-234,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1012,2205,-175,0,0,0,0x2000000, bhvHiddenStar,4),
OBJECT_WITH_ACTS(87,-1753,1410,-929,0,0,0,0x0, bhvMadPiano,31),
OBJECT_WITH_ACTS(137,582,2130,179,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,570,1650,-388,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1117,1890,174,0,0,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1664,1890,-604,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1148,330,2044,0,0,0,0x5000000, bhvHiddenRedCoinStar,32),
OBJECT_WITH_ACTS(215,767,3570,1363,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,722,1386,843,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,623,990,129,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-1627,1440,978,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-2038,13,-1132,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-1152,30,2085,0,180,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,1131,2910,1364,0,0,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(215,-2200,2160,-957,0,180,0,0x0, bhvRedCoin,32),
OBJECT_WITH_ACTS(122,-2106,74,968,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-847,90,1737,180,0,0,0x0, bhvHiddenStarTrigger,1),
OBJECT_WITH_ACTS(22,-1071,1110,-1082,90,0,90,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(140,1099,1650,-1296,0,0,0,0x0, bhvBlueCoinSwitch,32),
OBJECT_WITH_ACTS(118,1826,1890,-1318,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,1826,2130,-1873,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,950,1950,-1873,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,446,2010,-1873,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(118,446,2400,-1873,0,0,0,0x0, bhvHiddenBlueCoin,32),
OBJECT_WITH_ACTS(0,-2622,0,70,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(84,2282,150,-39,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(212,443,2910,1365,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1831,3240,-782,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1848,39,1223,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-2316,1860,703,0,180,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,1653,750,838,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1963,2340,848,0,0,0,0x110000, bhvCoinFormation,32),
OBJECT_WITH_ACTS(0,-2196,1560,-391,0,0,0,0x110000, bhvCoinFormation,32),
OBJECT_WITH_ACTS(24,-2570,0,2128,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,64,27,2325,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,2021,0,-2363,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(101,1375,0,-1161,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-1641,0,-339,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,1443,30,1981,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(130,1079,2145,858,0,0,0,0x0, bhvBreakableBoxSmall,32),
OBJECT_WITH_ACTS(84,1196,1680,784,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(137,-1040,2550,-1297,0,0,0,0x60000, bhvExclamationBox,32),
OBJECT_WITH_ACTS(122,-1750,1530,-909,270,0,0,0x0, bhvHiddenStarTrigger,4),
OBJECT_WITH_ACTS(187,1028,2711,249,90,0,0,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,20,1,10,0),
WARP_NODE(240,26,1,151,0),
WARP_NODE(241,26,1,152,0),
RETURN()
};
