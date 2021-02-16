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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom23571664_skybox_mio0SegmentRomStart,_SkyboxCustom23571664_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
// LOAD_MODEL_FROM_GEO(26,0x09008cf0),
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
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x16a9940),
TERRAIN(col_bitfs_1_0xe00c240),
SET_BACKGROUND_MUSIC(0,48),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-5280,-829,-15,0,88,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(26,4675,2114,-51,0,268,0,0x7000000, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(0,668,265,-1292,0,0,0,0x1f0b0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(116,609,265,-1297,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,4412,2148,-2371,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5002,2148,2047,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6901,2148,-119,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2596,2148,52,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1143,2177,-1134,0,71,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7294,2678,780,0,342,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,-3890,-845,-526,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-2818,-361,381,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-1227,2369,-342,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(137,-1987,2882,-1151,0,0,0,0x60000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,19,1,10,0),
WARP_NODE(240,16,3,10,0),
WARP_NODE(241,17,1,13,0),
RETURN()
};
