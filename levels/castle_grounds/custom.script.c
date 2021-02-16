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
#include "areas/2/custom.model.inc.h"
#include "areas/3/custom.model.inc.h"
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_castle_grounds_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(28, castle_door_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
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
JUMP_LINK(local_area_castle_grounds_1_),
JUMP_LINK(local_area_castle_grounds_2_),
JUMP_LINK(local_area_castle_grounds_3_),
FREE_LEVEL_POOL(),
MARIO_POS(2,0,0,2000,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x156eee0),
TERRAIN(col_castle_grounds_1_0xe02a9c0),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,-971,216,-630,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-730,213,-597,0,331,0,0xa90000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1064,108,-144,0,0,0,0x52000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(35,-195,3,961,0,180,0,0x1000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-206,0,1324,0,0,0,0xf0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-972,215,-630,0,0,0,0x640000, bhvDeathWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,6,1,10,0),
WARP_NODE(100,9,1,10,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,16,1,100,0),
RETURN()
};
const LevelScript local_area_castle_grounds_2_[] = {
AREA(2,Geo_castle_grounds_2_0x156edd0),
TERRAIN(col_castle_grounds_2_0xe0034f0),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_2_),
JUMP_LINK(local_warps_castle_grounds_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_2_[] = {
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,-4950,0,0,0,0,0xa000000, bhvWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(0,16,1,10,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
RETURN()
};
const LevelScript local_area_castle_grounds_3_[] = {
AREA(3,Geo_castle_grounds_3_0x156ecb0),
TERRAIN(col_castle_grounds_3_0xe011030),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_3_),
JUMP_LINK(local_warps_castle_grounds_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_3_[] = {
OBJECT_WITH_ACTS(0,448,-6,-2,0,270,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,185,0,-235,0,21,0,0x310000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-637,82,52,0,0,0,0xf0b0000, bhvWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(11,20,1,10,0),
WARP_NODE(240,25,1,10,0),
WARP_NODE(241,20,1,10,0),
RETURN()
};
