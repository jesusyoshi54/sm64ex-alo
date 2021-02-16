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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x12c46b0),
TERRAIN(col_wf_1_0xe020f20),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-78,120,-2129,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-75,-1365,-688,0,0,0,0x8a0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-72,-915,-1205,0,0,0,0x5d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,2621,345,-25,0,0,0,0x790000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(122,-78,2990,2382,0,0,0,0x0, bhvStar,1),
OBJECT_WITH_ACTS(0,-2562,4035,133,0,0,0,0x5f0000, bhvPoleGrabbing,60),
OBJECT_WITH_ACTS(0,136,4615,2770,0,0,0,0x550000, bhvPoleGrabbing,60),
OBJECT_WITH_ACTS(122,-60,275,2499,0,0,0,0x1000000, bhvStar,3),
OBJECT_WITH_ACTS(0,-66,0,1827,0,0,0,0x0, bhvOpenableGrill,3),
OBJECT_WITH_ACTS(207,-61,-1467,-25,0,180,0,0x0, bhvFloorSwitchGrills,3),
OBJECT_WITH_ACTS(122,-74,4890,2387,0,0,0,0x2000000, bhvStar,44),
OBJECT_WITH_ACTS(0,-81,420,-2112,0,0,0,0x3000000, bhvHiddenStar,8),
OBJECT_WITH_ACTS(122,-642,-279,980,180,0,0,0x0, bhvHiddenStarTrigger,8),
OBJECT_WITH_ACTS(122,-1262,663,-767,180,0,0,0x0, bhvHiddenStarTrigger,8),
OBJECT_WITH_ACTS(122,881,1353,832,180,0,0,0x0, bhvHiddenStarTrigger,8),
OBJECT_WITH_ACTS(122,467,1971,-826,180,0,0,0x0, bhvHiddenStarTrigger,8),
OBJECT_WITH_ACTS(122,-905,2394,781,180,0,0,0x0, bhvHiddenStarTrigger,8),
OBJECT_WITH_ACTS(0,-80,1740,2377,0,0,0,0x4000000, bhvHiddenRedCoinStar,16),
OBJECT_WITH_ACTS(215,-97,3660,-2188,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,-2167,5010,-11,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,-82,5520,2383,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,2056,1020,-18,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,-68,3594,-21,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,-78,2580,1168,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,-572,1710,465,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(215,-2156,2490,334,0,0,0,0x0, bhvRedCoin,16),
OBJECT_WITH_ACTS(122,-2070,261,-23,0,0,0,0x5000000, bhvStar,47),
OBJECT_WITH_ACTS(140,1892,2640,-10,0,0,0,0x0, bhvBlueCoinSwitch,16),
OBJECT_WITH_ACTS(118,2028,2670,-789,0,0,0,0x0, bhvHiddenBlueCoin,16),
OBJECT_WITH_ACTS(118,2028,2670,-1100,0,0,0,0x0, bhvHiddenBlueCoin,16),
OBJECT_WITH_ACTS(118,2028,2820,-1400,0,0,0,0x0, bhvHiddenBlueCoin,16),
OBJECT_WITH_ACTS(118,2028,2970,-1700,0,0,0,0x0, bhvHiddenBlueCoin,16),
OBJECT_WITH_ACTS(118,1474,3090,-2195,0,0,0,0x0, bhvHiddenBlueCoin,16),
OBJECT_WITH_ACTS(118,1005,3330,-2195,0,0,0,0x0, bhvHiddenBlueCoin,16),
OBJECT_WITH_ACTS(124,2208,2640,-8,0,270,0,0x120000, bhvMessagePanel,3),
OBJECT_WITH_ACTS(0,-1035,4617,2372,0,90,0,0x0, bhvCoinFormation,16),
OBJECT_WITH_ACTS(0,-1476,3647,-2206,0,270,0,0x0, bhvCoinFormation,16),
OBJECT_WITH_ACTS(137,2021,2970,-230,0,0,0,0x30000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(137,2021,2970,-30,0,0,0,0x30000, bhvExclamationBox,44),
OBJECT_WITH_ACTS(137,2021,2970,170,0,0,0,0x30000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(137,-71,3900,-26,0,0,0,0x50000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(137,-2179,5250,-27,0,0,0,0x60000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(137,-80,5790,2378,0,0,0,0x50000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(22,-74,-1377,2300,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-2174,3960,-50,0,0,0,0x0, bhvCoinFormation,16),
OBJECT_WITH_ACTS(212,2621,1710,-12,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,-63,-1080,-27,0,0,0,0x60000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(187,2020,2642,-548,90,0,0,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,28,1,10,0),
WARP_NODE(240,6,1,121,0),
WARP_NODE(241,6,1,122,0),
RETURN()
};
