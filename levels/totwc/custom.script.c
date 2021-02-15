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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom56590016_skybox_mio0SegmentRomStart,_SkyboxCustom56590016_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x3461700),
TERRAIN(col_totwc_1_0xe003988),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-2300,-3277,-5050,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,-3590,-2038,-2135,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,5345,3500,4270,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-5452,-2038,-979,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4363,-2038,-985,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4710,-832,-638,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4710,-832,-1073,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2950,-922,4145,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2950,-922,4878,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5345,3277,3543,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5345,3277,4960,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,4788,-2500,-7863,0,0,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,5323,-547,5550,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(129,5323,-662,5550,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,1200,-3502,-2043,0,0,0,0x3080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3903,4000,3985,0,0,0,0x4080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3348,3500,728,0,0,0,0x5080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3633,-1788,-1603,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3150,-672,3325,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(120,2973,-922,4495,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-4435,-2038,-2833,0,0,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(250,9,1,10,0),
WARP_NODE(251,9,1,10,0),
WARP_NODE(240,24,1,20,0),
WARP_NODE(241,24,1,21,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
