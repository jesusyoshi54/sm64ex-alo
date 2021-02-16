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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x1520cd0),
TERRAIN(col_castle_courtyard_1_0xe012ba0),
SET_BACKGROUND_MUSIC(0,10),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,89,119,-1577,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,-2201,330,723,0,270,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-1795,165,2286,0,180,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(207,2113,-459,906,0,270,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,-1831,165,2071,0,0,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(137,-300,300,-455,0,33,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-476,300,-340,0,33,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-661,300,-221,0,33,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(221,1496,2640,2293,0,270,0,0x4c000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(22,1796,84,-1444,0,0,0,0x8c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1871,339,-1658,0,0,0,0x960000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,105,141,-2574,0,0,0,0x6650000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2088,1640,1549,0,30,0,0x6660000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1580,360,-1021,0,46,0,0x8d0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2404,690,-1916,0,180,0,0x970000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1573,360,-1035,0,44,0,0x8e0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-2415,660,-1947,0,180,0,0x980000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-1259,420,66,0,342,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1259,420,66,0,342,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,1625,1640,918,0,253,0,0xc0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(23,-904,108,-1619,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1196,113,1589,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,617,2996,1268,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1758,3256,1119,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1777,26,-609,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(212,1780,1890,-253,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(187,1416,-74,309,90,0,15,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(101,6,1,11,0),
WARP_NODE(102,6,2,10,0),
WARP_NODE(12,26,1,0,0),
WARP_NODE(140,5,1,10,0),
WARP_NODE(141,26,1,0,0),
WARP_NODE(142,26,1,0,0),
WARP_NODE(150,4,1,10,0),
WARP_NODE(151,26,1,0,0),
WARP_NODE(152,26,1,0,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
RETURN()
};
