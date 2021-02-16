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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x12ac2d0),
TERRAIN(col_bob_1_0xe056f80),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-32,487,-891,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-1663,4865,4630,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,2342,190,9101,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-9517,1160,1539,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-6575,665,3148,0,0,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,-276,849,5317,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-266,149,5316,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(137,1462,1466,5904,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-9517,112,1540,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-9517,506,1538,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,-4587,29,5080,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-4597,29,683,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-3344,29,4723,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-4434,29,2746,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-3000,29,1330,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(215,1859,209,3049,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2124,278,5382,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1898,278,5069,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1665,336,6726,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1584,209,3703,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-383,209,2808,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-582,6,5704,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2087,1504,5718,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,234,829,-2624,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-12042,697,7610,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3242,474,5106,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,-10916,348,6843,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-9853,553,7357,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-10156,553,7357,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-10462,553,7363,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-10762,553,7353,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-11098,553,7347,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-11411,553,7350,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,-166,1496,3845,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-12052,348,1222,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7460,348,4537,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-592,6,3253,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-11061,348,4515,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1064,0,3063,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(120,-2375,69,481,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-7373,348,6403,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3220,0,5133,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-3520,0,7326,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,250,0,3241,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(187,-1696,232,-879,0,0,0,0x0, bhvTripletButterfly,31),
OBJECT_WITH_ACTS(187,1671,118,-1138,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(124,723,0,2360,0,180,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-6904,348,3135,0,0,0,0x30000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(207,-1426,1887,6265,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-1100,1496,3966,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3676,3237,3854,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2905,3032,4787,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2957,2763,4070,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2224,2202,4568,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4153,3829,4149,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-522,0,5769,0,52,0,0x490000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,1,16,0),
WARP_NODE(241,6,1,17,0),
RETURN()
};
