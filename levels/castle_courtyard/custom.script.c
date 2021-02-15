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
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_courtyardSegmentRomStart, _castle_courtyardSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE,  spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     castle_courtyard_geo_000200),
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
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe013670),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-1310,-1254,12133,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1349,-547,9355,0,180,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-1349,-547,9355,0,180,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(221,2176,-1059,-3250,0,0,0,0x53000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(100,-2053,-242,4641,0,0,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(22,-8285,-1011,7745,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,6760,-530,6318,0,0,0,0xc0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6738,-1059,-1195,0,0,0,0xd0000, bhvWarp,31),
OBJECT_WITH_ACTS(34,6820,-530,6735,0,0,0,0x64000000, bhvDoor,31),
OBJECT_WITH_ACTS(124,6551,-530,6612,0,0,0,0x20000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,6820,-498,6588,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,2291,-1059,-1553,0,0,0,0xe0000, bhvWarp,31),
OBJECT_WITH_ACTS(217,1963,-1090,-1493,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-6438,-1079,-1245,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(34,-6248,-1059,-1180,0,90,0,0x73000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-3368,-1059,-2815,0,0,0,0x5f000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,1815,-1059,-1493,0,-90,0,0x90000000, bhvDoor,31),
OBJECT_WITH_ACTS(22,-3773,-1059,-3415,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,-6115,-1059,-1538,0,90,0,0x8a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-3180,-1059,-2740,0,0,0,0x8b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1710,-1059,-1168,0,-90,0,0x8c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-8319,-197,7673,0,180,0,0x780000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,6816,287,6695,0,180,0,0x820000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6341,-207,-1251,0,270,0,0x8c0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-8319,-197,7673,0,0,0,0x790000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,6816,287,6695,0,180,0,0x830000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-6341,-207,-1251,0,270,0,0x8d0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,6787,210,4891,-90,0,0,0x780000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,-7963,-1011,7970,0,0,0,0x480000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(120,15,1,10,0),
WARP_NODE(121,26,1,121,0),
WARP_NODE(130,26,1,130,0),
WARP_NODE(131,26,1,131,0),
WARP_NODE(140,26,1,140,0),
WARP_NODE(141,26,1,141,0),
WARP_NODE(21,26,1,10,0),
WARP_NODE(22,26,1,10,0),
WARP_NODE(23,26,1,10,0),
WARP_NODE(24,26,1,10,0),
WARP_NODE(25,9,1,10,0),
WARP_NODE(26,9,1,10,0),
WARP_NODE(27,9,1,10,0),
WARP_NODE(28,9,1,10,0),
WARP_NODE(29,9,1,10,0),
WARP_NODE(10,26,1,10,0),
WARP_NODE(11,36,1,10,0),
WARP_NODE(12,13,1,10,0),
WARP_NODE(13,14,1,10,0),
WARP_NODE(14,31,1,10,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,34,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
