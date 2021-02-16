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
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
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
JUMP_LINK(script_func_global_15),
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
AREA(1,Geo_totwc_1_0x1601610),
TERRAIN(col_totwc_1_0xe039b80),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,0,900,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,1115,2920,7267,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,0,1297,0,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,4892,3074,-3073,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1859,3354,-9673,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5202,1967,1497,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5755,941,3311,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4507,961,1615,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2575,2519,8284,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5512,2336,-8161,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6217,1069,9800,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(128,-5515,2377,-7656,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(128,-1992,2549,8293,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(137,-6022,2685,-7667,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1991,2898,8693,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-500,1290,0,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(129,150,5955,-148,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-150,5955,-148,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-150,5955,152,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,150,5955,152,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(122,0,6526,0,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(27,-2685,630,-3505,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,6160,2097,-12154,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-6391,1226,10754,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,4018,1912,9995,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-4994,1045,-11888,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,75,1912,-7082,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-7047,780,4484,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,7314,865,1628,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,753,2695,5463,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-1022,746,3549,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-2429,672,4231,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6658,1322,-8472,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1778,719,-3648,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1130,827,2062,0,31,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3134,1140,6064,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,8617,2575,-13289,0,0,0,0x480000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(116,-5231,3628,-7234,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1881,3628,7909,0,0,0,0x0, bhvOneCoin,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,1,96,0),
WARP_NODE(241,6,1,97,0),
RETURN()
};
