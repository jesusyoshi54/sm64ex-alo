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
LOAD_MIO0(0xA,_SkyboxCustom22520224_skybox_mio0SegmentRomStart,_SkyboxCustom22520224_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_15),
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
AREA(1,Geo_sa_1_0x15a00d0),
TERRAIN(col_sa_1_0xe00c5c0),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,574,119,734,0,220,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,0,-3330,0,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,7682,4590,-10569,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3899,3870,4773,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-8820,3420,-5177,0,37,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1916,1680,-3877,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(120,-3398,1210,3752,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(215,-867,1174,1055,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2281,613,-5311,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8376,2314,-6633,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2575,1369,-4027,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1811,93,-796,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4424,343,-2885,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5893,1799,-8474,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1146,4046,-5652,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(87,1292,1204,-562,0,267,0,0x0, bhvMadPiano,31),
OBJECT_WITH_ACTS(84,1423,1234,-468,0,0,0,0x5000000, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(87,639,1116,-216,0,17,0,0x0, bhvMadPiano,31),
OBJECT_WITH_ACTS(87,25,1116,-601,0,0,0,0x0, bhvMadPiano,31),
OBJECT_WITH_ACTS(102,-5312,1780,-7805,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(122,-2472,-120,-4203,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(129,-2472,-630,-4203,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1584,-630,-5047,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-570,-630,-6068,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,1728,2538,-7302,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(0,0,119,0,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3878,1799,-5695,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3878,1799,-5695,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1569,1318,-2698,0,305,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5683,3965,-7999,0,36,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-9502,4996,-4690,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-3750,789,-5508,0,306,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(84,-3416,1225,3637,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-1688,2452,-4511,0,0,0,0x0, bhvCourtyardBooTriplet,31),
OBJECT_WITH_ACTS(84,3612,3295,-7698,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(192,-4173,789,-2600,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,63,1196,-1828,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,219,789,-3457,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(180,-1350,999,-2245,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,248,2452,-5865,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-1636,1690,-331,0,35,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(104,-435,3433,-4770,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-4439,1799,-6384,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(194,757,1264,-626,0,0,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(180,-7920,3360,-6072,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,327,119,433,0,36,0,0x80000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,2,14,0),
WARP_NODE(241,6,2,13,0),
RETURN()
};
