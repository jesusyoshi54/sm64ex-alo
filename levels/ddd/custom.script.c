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
#include "levels/ddd/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_ddd_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x2c21700),
TERRAIN(col_ddd_1_0xe05dcc0),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,16625,742,-3029,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,5648,8154,6364,0,-154,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2160,9330,-4281,0,64,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,10801,67,-2183,0,107,0,0x20000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-9058,-383,11112,0,-151,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,-12280,3861,9597,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-12694,4172,9597,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-16629,3655,-1229,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-15954,1333,6884,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,18553,9789,8051,0,75,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-9257,5130,697,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,10825,1189,6143,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-992,354,10324,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,16280,-1263,10352,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,9041,10413,5821,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,153,614,13201,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,20235,2593,-6053,0,345,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,-275,4494,-10843,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(129,-15900,918,7171,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-16100,918,7171,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15768,918,7171,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-15792,96,10852,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-16006,-288,7700,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-16006,-288,8400,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-16006,-288,9100,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-16006,-288,9793,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,10498,-29,476,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-856,12735,-6747,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1439,8848,-6839,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,20077,11266,-7053,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,17415,2115,904,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,17905,-976,8096,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,16588,9228,10536,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,16270,9560,10335,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,4694,169,15501,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-777,1689,10300,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2702,34,3174,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2533,1655,1486,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4604,4450,-9680,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4193,1530,-16526,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,14629,7131,12487,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7192,8110,13190,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,19923,2158,-5662,0,255,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,19620,11208,-5578,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(122,7890,17683,-4289,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,12927,8346,13931,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,12031,6171,-990,0,26,0,0xa50000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-271,-9,10335,0,90,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(223,9211,7196,10441,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,16040,2067,523,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,1413,8844,-4187,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,10310,7196,10257,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,3768,4893,-13162,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4056,4370,-10100,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,17767,445,-1465,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,15150,779,5809,0,14,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,15700,340,1361,0,14,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,19494,9682,5704,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,14653,779,5024,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,-14025,194,12601,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-12691,3543,9147,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-12298,3360,9147,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-9185,1293,11711,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,17655,1345,6083,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,12023,9489,6193,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4377,7750,10003,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3273,7745,7344,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5502,9972,-5388,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9071,9554,-2959,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,8190,-135,9499,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,7222,79,2774,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(212,4239,4972,6568,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(180,6803,0,7693,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7719,-26,5417,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-6568,0,1020,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-3794,52,7536,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,6045,-26,9734,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4161,105,13816,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,-445,2120,17846,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,-942,1653,17741,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(180,-2303,3873,17767,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5521,1073,16380,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,3716,5914,17846,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-856,172,15097,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,6489,4762,14523,0,15,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,1570,5626,-25382,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,18631,2119,-11304,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-5076,-497,-24204,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-8897,4919,-12717,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-1936,4762,-18814,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-5338,63,-1465,0,331,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-4475,63,-3140,0,331,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,3506,4883,-16197,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-2277,5181,-18552,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-267,10208,-19340,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,37,0),
WARP_NODE(241,6,1,36,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,23,1,2,0),
WARP_NODE(2,23,1,1,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
