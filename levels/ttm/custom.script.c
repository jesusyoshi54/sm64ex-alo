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
#include "levels/ttm/header.h"
extern u8 _ttm_segment_ESegmentRomStart[]; 
extern u8 _ttm_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ttm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_ttm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttm_1_[] = {
AREA(1,Geo_ttm_1_0x14d8cf0),
TERRAIN(col_ttm_1_0xe01ccc0),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,3583,-2868,5294,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-1605,-4929,-3555,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,138,5019,-20990,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,570,3390,-8691,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,256,4173,-14959,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(206,256,4173,-16100,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,256,4173,-17500,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,256,4173,-19000,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(180,147,5580,-21012,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,137,5244,-20691,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-9800,3200,11665,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(101,-9800,2791,11665,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(122,-4424,1573,3573,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-7130,1837,-4172,0,39,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(223,-7612,3615,-1412,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-1589,9000,3302,0,0,0,0x4000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,-1632,7095,6543,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-1632,7095,6543,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-1610,8764,5757,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-1610,8764,5757,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-1623,7095,4059,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-1623,7095,4059,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-1638,7674,4936,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-1638,7674,4936,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-1806,8350,2983,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-1806,8350,2983,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(89,-1882,8564,3467,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(194,-1721,8295,6541,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1543,8295,6545,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1721,7695,6541,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1543,7695,6545,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1706,8445,5740,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1528,8445,5744,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1706,7845,5740,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1528,7845,5744,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1711,8055,4905,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1533,8055,4909,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1711,7275,4905,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1533,7275,4909,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1688,7485,4050,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1510,7485,4054,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1688,8625,4050,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1510,8625,4054,0,0,0,0x30000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,-7621,4150,-1417,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,6014,-1390,1794,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2322,-296,-755,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(120,3581,-2807,-2033,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(215,3300,-1144,-4238,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3875,2725,-8422,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1586,-506,-3558,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5506,871,-998,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6386,1645,2089,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6727,1547,2823,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1046,-39,1550,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2152,3096,2792,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1701,4547,3181,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8002,3947,-1846,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-6639,2791,7611,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6326,2791,6787,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8398,2791,8203,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7536,2791,8084,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9800,2791,11665,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3574,-2868,3183,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3585,-2868,174,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,3637,1150,-6393,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(223,4009,831,-8003,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(192,4057,831,-7279,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(89,3854,831,-6709,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(137,-2465,375,-2885,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(101,-6060,540,1402,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(0,136,4341,5051,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-614,4341,6692,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-577,4341,4265,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-351,4341,5949,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(180,-1863,750,2649,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(101,-1986,517,2715,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(206,296,-702,-3991,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(0,-5353,850,575,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5644,901,2994,0,2,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7609,901,2066,0,41,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(89,-7110,2791,7700,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(0,-4520,624,-3380,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-4457,1917,3529,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-6728,2246,2734,0,337,0,0x40000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,3,18,0),
WARP_NODE(241,6,3,17,0),
RETURN()
};
