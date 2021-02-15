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
#include "levels/ssl/header.h"
extern u8 _ssl_segment_ESegmentRomStart[]; 
extern u8 _ssl_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ssl_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ssl_segment_ESegmentRomStart, _ssl_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ssl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ssl_1_[] = {
AREA(1,Geo_ssl_1_0x1404f70),
TERRAIN(col_ssl_1_0xe012ec0),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_ssl_1_),
JUMP_LINK(local_warps_ssl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ssl_1_[] = {
OBJECT_WITH_ACTS(0,0,-4911,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,0,-4445,0,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-2288,1809,-411,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,3827,-4911,-5138,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,5826,-3297,2174,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,5827,-3297,2025,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(137,5670,4303,-5760,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(87,4139,3802,4533,0,0,0,0x2000000, bhvWigglerHead,7),
OBJECT_WITH_ACTS(122,-8123,3767,2698,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-4098,5964,-3709,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1365,-4880,-9094,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5792,4151,-5747,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5865,-4880,-5838,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5900,-4880,-4442,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5775,-4880,-5772,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5635,-4880,5668,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5757,-4880,5708,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5846,-4880,2849,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-631,-134,1587,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5754,3032,1474,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6340,3548,-965,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5642,-382,-3038,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1176,-2554,5165,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1175,-2554,2908,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5152,-2554,5148,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5170,-2554,2917,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4841,-4841,3245,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4677,-4042,4747,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3364,-4288,3292,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4742,2000,-2053,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4272,2000,-3302,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5401,-288,-5311,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3329,2128,-3595,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5273,2826,-4312,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4333,-1146,-4722,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3770,-2799,-3264,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4254,4989,-3393,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4890,1491,-4137,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5156,-1814,-3801,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5930,-4454,-2988,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1299,443,958,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,774,-733,997,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1307,-2578,-757,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-228,-3924,-1786,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2426,-4591,-3990,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5798,-4877,2004,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3957,-4877,-646,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3223,-3288,5680,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1720,-4844,2989,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4830,-1570,-3088,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,4830,-2121,-3088,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,4817,-2121,-2159,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,4786,-2121,-1210,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,4771,-2121,-262,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(207,4778,-2121,668,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(0,1720,-4911,2989,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3636,-4911,983,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-237,-4911,-7176,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1648,-4911,-3481,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-3636,-4600,983,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-237,-4600,-7176,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1648,-4600,-3481,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1541,-4373,-9078,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2437,-4017,-8424,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3588,-3560,-9112,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4733,-3105,-8481,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5909,-2639,-9122,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7902,-2060,-8170,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7911,-2060,-7250,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7919,-2060,-6376,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7891,-2060,-5455,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7909,-2060,-4562,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7917,-2060,-3660,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7907,-2060,-2721,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7925,-2060,-1809,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7916,-2060,-1020,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7907,-2060,-137,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7906,-2060,895,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7923,-2060,1853,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7923,-2060,2811,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7922,-2060,3620,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7921,-2060,4336,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7930,-2060,4987,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7939,-2060,5693,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7919,-2060,8325,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7920,-2060,6464,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7911,-2060,7358,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7090,-1863,8976,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7095,-1863,8250,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6367,-1599,8616,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5413,-1250,8954,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5427,-1250,8236,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4366,-867,8647,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3348,-495,8957,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3340,-495,8245,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2406,-150,8605,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1489,185,8887,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1465,185,8262,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,610,506,8608,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,607,506,8302,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-349,857,8941,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-347,857,8302,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1304,1206,8616,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1317,1206,8985,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2331,1581,8282,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2338,1581,8951,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3368,1961,8603,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3383,1961,8279,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4200,2265,8946,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4225,2265,8258,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5102,2595,8595,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5103,2595,8940,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5920,2895,8619,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5896,2895,8943,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5946,2895,8267,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6814,3221,8632,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6793,3221,8910,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6840,3221,8280,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7140,3490,8629,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7129,3490,8897,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7148,3490,8276,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8037,3644,8605,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8122,3444,8028,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8123,3444,6650,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8037,3344,8605,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8122,3694,8028,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8123,3694,6650,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8123,3694,4743,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8126,3694,2653,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8123,3444,4743,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8126,3444,2653,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5049,-4681,-3479,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4641,4050,3998,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4422,4050,5174,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3552,4050,3936,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3337,4050,4891,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(206,5812,-201,-2821,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,5361,-201,-2748,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,5781,3209,1217,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(180,5637,-201,-972,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4786,-3678,4047,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3350,-3829,4005,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5127,-2281,4028,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3627,3333,-5745,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2698,3333,-5744,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1642,3333,-5814,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-529,3333,-5826,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5095,3333,-5713,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5095,3802,-5713,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2677,3333,-5720,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1215,3333,-5708,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4244,3903,-4230,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2042,-4529,-4050,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,7543,-2210,-9218,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,-3230,-1964,2895,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2584,-3811,-4227,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3019,-1964,2895,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3475,-1964,2921,0,0,0,0x30000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_ssl_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,2,21,0),
WARP_NODE(241,6,2,20,0),
RETURN()
};
