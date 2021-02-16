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
#include "levels/bits/header.h"
extern u8 _bits_segment_ESegmentRomStart[]; 
extern u8 _bits_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_bits_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
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
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x1699a40),
TERRAIN(col_bits_1_0xe01f150),
SET_BACKGROUND_MUSIC(0,11),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,1,0,-1294,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(23,1200,0,637,0,180,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1200,0,637,0,180,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1200,0,-800,0,180,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1200,0,-800,0,180,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(34,-772,0,821,0,225,0,0x40000000, bhvDoor,31),
OBJECT_WITH_ACTS(187,1259,180,35,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(0,419,650,1248,0,270,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(0,418,600,1246,0,0,0,0x0, bhvHidden1upTrigger,31),
OBJECT_WITH_ACTS(0,-385,633,1253,0,0,0,0x1690000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-593,0,976,0,0,0,0x6aa0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-5,270,-420,0,0,0,0xb0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-5,270,-420,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-955,300,376,0,21,0,0xb50000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-955,300,376,0,21,0,0xb60000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(124,188,540,779,0,206,0,0x3f0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(120,527,697,-476,0,180,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-537,697,-476,0,180,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,499,1148,547,0,180,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-537,1148,563,0,180,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,418,600,1246,0,0,0,0x0, bhvHidden1upTrigger,31),
OBJECT_WITH_ACTS(124,752,0,564,0,137,0,0x400000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(105,25,1,10,0),
WARP_NODE(170,22,1,10,0),
WARP_NODE(181,21,1,0,0),
WARP_NODE(182,21,1,0,0),
WARP_NODE(11,21,1,0,0),
WARP_NODE(240,21,1,240,0),
WARP_NODE(241,21,1,241,0),
RETURN()
};
