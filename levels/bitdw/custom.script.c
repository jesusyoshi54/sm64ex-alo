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
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_18),
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
AREA(1,Geo_bitdw_1_0x1701bb0),
TERRAIN(col_bitdw_1_0xe00a2f0),
SET_BACKGROUND_MUSIC(0,18),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(0,8688,-376,1434,0,181,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,7403,2869,-2911,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(206,-670,3446,933,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1870,3446,933,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-3170,3446,933,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-4470,3446,933,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(220,-5565,3446,933,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,8256,6286,-365,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1585,2806,481,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4590,5984,5870,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,7317,2257,-4468,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,3791,3538,1114,0,0,0,0x4000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,7658,2759,-4188,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5935,1738,-3238,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8295,1796,53,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3989,2759,6842,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4309,4413,4213,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4673,2759,1102,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2976,3462,1119,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,1445,2481,-2950,0,34,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,1445,2640,-2948,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(206,1904,2481,-2141,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1822,2481,-2341,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,9481,-494,-506,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(22,656,3981,-163,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,-9225,3446,1001,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(180,1243,3446,1100,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,1243,3446,1100,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1243,3446,1100,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4487,3446,5880,0,90,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(89,3935,3311,5865,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(192,4248,4352,7551,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(223,4732,2075,-793,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,2628,2481,3006,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(89,1271,2963,2221,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(101,1523,2481,467,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(116,5357,2075,2405,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,4430,2075,3568,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3477,2481,-797,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2724,2481,-1192,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1995,2481,-389,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(206,6102,2936,-2239,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(101,5873,1628,541,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(0,1061,3981,-93,0,0,0,0xc0000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(11,30,1,10,0),
WARP_NODE(10,17,1,10,0),
WARP_NODE(12,17,1,12,0),
WARP_NODE(240,6,1,3,0),
WARP_NODE(241,6,1,4,0),
RETURN()
};
