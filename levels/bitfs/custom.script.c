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
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x26a1700),
TERRAIN(col_bitfs_1_0xe01b518),
SET_BACKGROUND_MUSIC(0,52),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,13473,-4510,-14646,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,7456,-5955,-4833,0,0,0,0xb0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-512,-7094,-22231,0,0,0,0xc0000, bhvWarp,31),
OBJECT_WITH_ACTS(129,-480,-7261,-22050,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-510,-7261,-19262,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,1410,-7261,-19163,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(0,3816,-5955,-11231,0,0,0,0xd0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-13060,-5798,9108,0,0,0,0xe0000, bhvWarp,31),
OBJECT_WITH_ACTS(207,6000,2184,-13433,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,6800,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,7600,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8400,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,9200,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10000,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10800,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,12000,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,13200,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,14400,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,15600,2184,-13415,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,15790,8650,-3388,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,20613,-5300,-15943,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,1378,-6223,-22713,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,22500,-4790,-16875,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,18998,-5230,-16970,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,20750,8445,-20740,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,17518,2423,-9633,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,3863,-5955,-19673,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,19378,-4500,-20618,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,18760,8670,-3940,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7118,-3026,-20963,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,16953,5485,-10700,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6995,1855,-13790,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,16750,3225,-10098,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-13031,-5168,9763,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,18740,10000,-3923,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(124,2133,11073,-1128,0,180,0,0x2e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,1825,11400,-1035,0,0,0,0x5080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-13178,-5238,8610,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(22,10368,9100,-3846,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,10185,9520,-4095,0,0,0,0x10000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,19,1,10,0),
WARP_NODE(11,19,1,12,0),
WARP_NODE(12,19,1,11,0),
WARP_NODE(13,19,1,14,0),
WARP_NODE(14,19,1,13,0),
WARP_NODE(240,6,1,211,0),
WARP_NODE(241,6,1,212,0),
WARP_NODE(0,33,1,10,0),
WARP_NODE(1,19,1,6,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
