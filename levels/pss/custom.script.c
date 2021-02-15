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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom22777312_skybox_mio0SegmentRomStart,_SkyboxCustom22777312_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x15ded10),
TERRAIN(col_pss_1_0xe011be0),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,4918,1038,-694,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(223,5707,535,-5422,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(215,4874,752,-6559,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,9522,828,-7210,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,9517,1745,-10209,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2341,704,-8171,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3262,2263,-6039,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2620,1352,-13247,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4276,1643,-4187,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9789,1249,-5245,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11636,709,-8189,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,11048,787,-8037,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3047,558,-14022,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,6430,2,-12869,0,0,0,0x30c0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(220,4969,2116,-13905,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,9713,605,-13876,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,5730,870,-2247,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4811,531,-9786,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3721,531,-9791,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(207,9628,1922,-5603,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,9791,1038,-5265,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,4924,2346,-921,0,0,0,0x6000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,3747,531,-9059,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,4573,531,-9794,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,4964,531,-10023,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,4985,531,-9604,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,6673,535,-8411,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,6671,535,-8410,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,3747,531,-9056,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,4967,531,-10021,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,4575,531,-9792,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,4986,531,-9606,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,4882,516,-6569,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,5434,1439,-1219,0,40,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,4463,870,-2883,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,4025,233,-14078,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(192,5916,1735,-14054,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,3170,1735,-14006,0,0,0,0x0, bhvBetaFishSplashSpawner,31),
OBJECT_WITH_ACTS(0,3559,4981,-10978,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,3104,4981,-8886,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,9717,1397,-5726,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3011,2888,-8754,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,5721,535,-7704,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1752,535,-7852,0,0,0,0x0, bhvBetaFishSplashSpawner,31),
OBJECT_WITH_ACTS(180,2999,1903,-5559,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3612,2263,-6369,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,1,19,0),
WARP_NODE(241,6,1,18,0),
RETURN()
};
