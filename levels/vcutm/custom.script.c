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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _vcutmSegmentRomStart, _vcutmSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x2541700),
TERRAIN(col_vcutm_1_0xe013d08),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-3080,436,8878,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,6845,3973,1648,0,-154,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3172,4465,-7449,0,-153,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2418,2284,2503,0,107,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4256,2688,5359,0,-151,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4216,270,334,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-5597,6300,5851,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,2245,360,5014,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-9319,6480,-7553,0,0,0,0x2000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,-3183,7020,-9388,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4156,-630,9761,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,8791,3644,-7710,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,5316,3949,1725,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(100,3637,3418,-7668,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,633,3575,-7721,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,4160,3418,-7680,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2649,3478,-7681,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,7960,3418,-7694,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,5918,3418,-7687,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,1625,3478,-7692,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(85,-4600,3060,5989,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(217,-5430,2460,4472,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(122,-7023,3360,-7225,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(217,2443,1740,2513,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,11,1,12,0),
WARP_NODE(241,11,1,11,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
