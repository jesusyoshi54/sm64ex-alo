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
#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_jrb_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_jrb_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_jrb_1_[] = {
AREA(1,Geo_jrb_1_0x1d01700),
TERRAIN(col_jrb_1_0xe00ab00),
SET_BACKGROUND_MUSIC(0,59),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(0,0,-4987,3453,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-290,-4987,1343,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,135,-4987,-701,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1010,-4987,-1661,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5588,-4987,-155,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(140,4148,-3021,-1878,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,4148,-3021,-700,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4148,-3021,100,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4148,-3021,900,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4148,-3021,1700,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,1738,-1595,-1678,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,750,-1595,1323,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1775,-1595,2340,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1775,-895,2340,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1775,-195,2340,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1775,695,2340,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1233,3641,2830,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,333,2813,2830,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-633,1924,2830,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1533,1096,2830,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2433,267,2830,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5573,-4987,195,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-4745,5287,1613,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4445,-2556,2235,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-4630,-5010,2813,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,1648,-908,3068,0,0,0,0x20b0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1760,4120,923,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,1793,3810,1608,0,180,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(215,-4530,-4787,3453,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3458,-4787,-1063,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4695,-4987,-6210,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4140,-4987,4348,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1185,-4787,-3900,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3695,-818,2793,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1595,-2630,2365,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4130,-4987,-2193,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3430,4987,1613,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1765,3810,1035,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1400,-1403,-1340,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1300,-1403,-1340,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,-4653,5287,1120,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,1843,-1295,-3038,0,0,0,0x0, bhvExclamationBox,32),
OBJECT_WITH_ACTS(122,-4468,-649,-4603,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,4878,-3020,1703,0,0,0,0x0, bhvRedCoin,31),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,3,0),
WARP_NODE(241,16,1,33,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
