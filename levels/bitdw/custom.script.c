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
#include "levels/bob/header.h"
const LevelScript level_bitdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bitdw_segment_ESegmentRomStart, _bitdw_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
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
AREA(1,Geo_bitdw_1_0x1668e90),
TERRAIN(col_bitdw_1_0xe036390),
SET_BACKGROUND_MUSIC(0,49),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(0,1490,1107,5842,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,1671,3241,-6455,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(180,-3633,418,-368,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1953,418,-352,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3645,418,-3629,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(202,-1007,680,-5384,0,270,0,0x240000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(124,3410,3805,1037,0,270,0,0x300000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2486,-611,-5466,0,0,0,0x50000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,585,-611,-3563,0,0,0,0x50000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,843,-611,986,0,0,0,0x50000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1024,-611,4276,0,0,0,0x50000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2824,418,-1945,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(207,2959,659,2505,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,1943,1005,-1590,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2143,1005,-1590,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2134,574,193,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2134,574,393,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2057,660,1894,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2257,660,2094,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,743,1050,-1590,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,543,1050,-1590,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(217,-1889,418,-3651,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-2777,418,-2040,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,83,1523,-6259,0,114,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2336,774,1034,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,-452,2410,-6173,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,1217,2363,-5589,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(120,748,220,5363,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(192,2731,1011,-5169,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(100,2024,-640,2808,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-532,-640,-1604,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2568,-640,-5708,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-1236,-640,-4935,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(144,2596,1020,-100,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,2472,1020,92,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,3183,1020,58,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,3281,1020,-132,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(202,242,2108,-6425,0,270,0,0x7f0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(0,-257,3259,6151,0,0,0,0x80c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1267,3241,-6448,0,270,0,0xd0000, bhvDeathWarp,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,19,1,10,0),
WARP_NODE(12,6,1,10,0),
WARP_NODE(13,9,1,10,0),
WARP_NODE(240,6,1,128,0),
WARP_NODE(241,6,1,129,0),
RETURN()
};
