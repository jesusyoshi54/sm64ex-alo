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

#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(3,0x140001d0),
// LOAD_MODEL_FROM_GEO(4,0x14000290),
// LOAD_MODEL_FROM_GEO(5,0x140002b8),
// LOAD_MODEL_FROM_GEO(6,0x140002e0),
// LOAD_MODEL_FROM_GEO(7,0x14000308),
// LOAD_MODEL_FROM_GEO(8,0x14000200),
// LOAD_MODEL_FROM_GEO(9,0x14000230),
// LOAD_MODEL_FROM_GEO(10,0x14000260),
// LOAD_MODEL_FROM_GEO(11,0x14000330),
// LOAD_MODEL_FROM_GEO(12,0x14000358),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(53,0x120005b0),
// LOAD_MODEL_FROM_GEO(54,0x120005c8),
// LOAD_MODEL_FROM_GEO(55,0x120005e0),
// LOAD_MODEL_FROM_GEO(56,0x120005f8),
// LOAD_MODEL_FROM_GEO(57,0x12000610),
// LOAD_MODEL_FROM_GEO(58,0x12000628),
// LOAD_MODEL_FROM_GEO(59,0x12000640),
// LOAD_MODEL_FROM_GEO(60,0x12000640),
// LOAD_MODEL_FROM_GEO(88,0x500c778),
// LOAD_MODEL_FROM_DL(132,0x8025f08,4),
// LOAD_MODEL_FROM_DL(158,0x302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x4032a18,4),
// LOAD_MODEL_FROM_DL(201,0x80048e0,4),
// LOAD_MODEL_FROM_DL(218,0x8024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x19001700),
TERRAIN(col_wmotr_1_0xe030060),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-19442,-221,66,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,11794,13,202,0,-154,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,11032,127,-144,0,-153,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6225,747,178,0,107,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-16273,612,40,0,-151,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1204,-509,105,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-135,937,207,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3225,184,178,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10949,-97,92,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6069,419,33,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,11012,-462,-79,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(192,-16628,-587,141,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-13339,-587,99,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-11741,-587,79,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-11398,-587,111,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-7742,17,-1,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-7498,612,172,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-4767,-587,-27,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-5278,-587,240,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(104,-3557,-587,130,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(192,-513,0,185,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-705,0,133,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-882,0,190,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1113,0,82,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6751,-587,162,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6340,-587,259,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-9999,5,107,0,0,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(100,-15274,-307,108,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-13783,-142,86,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-12588,17,94,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-10916,17,110,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,4969,-307,95,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,7345,-307,120,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(22,9031,-587,94,0,90,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-19491,-801,152,0,90,0,0x1e0000, bhvWarpPipe,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(20,9,1,10,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,34,0),
WARP_NODE(241,6,1,35,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(20,31,1,30,0),
WARP_NODE(30,31,1,20,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(55,31,1,10,0),
RETURN()
};
