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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(131,0x04037070),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_GEO(137,0x04036f60),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
// LOAD_MODEL_FROM_GEO(245,0x0404cf00),
// LOAD_MODEL_FROM_GEO(246,0x0404ce00),
// LOAD_MODEL_FROM_GEO(247,0x0404cf80),
// LOAD_MODEL_FROM_GEO(248,0x0404cfc0),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
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
AREA(1,Geo_wmotr_1_0x3721700),
TERRAIN(col_wmotr_1_0xe1037b0),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,0,-7611,439,0,180,0,0xa0000, bhvWarp,31),
OBJECT_WITH_ACTS(31,1,-7641,-1857,0,0,0,0x10000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-15149,12886,7484,0,90,0,0xb0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-937,-7641,-912,0,90,0,0x20000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,7371,12876,-13150,0,330,0,0x160000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,945,-7641,-909,0,-90,0,0x30000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-8986,-5478,25445,0,-87,0,0x210000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(137,-8211,-5158,25388,0,3,0,0x40006, bhvExclamationBox,31),
OBJECT_WITH_ACTS(31,-12349,-7149,-19049,0,156,0,0xb0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,20967,-7149,2019,0,-29,0,0x160000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,5265,12875,16944,0,206,0,0x210000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(122,-18105,7028,26328,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-16261,-3128,-7352,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-12611,-6738,-18439,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-7681,7028,-24870,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,7973,1077,-13514,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,21302,-6738,1404,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,23507,6181,11285,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(122,5570,13289,17565,0,0,0,0x7000000, bhvStar,31),
OBJECT_WITH_ACTS(137,23310,6167,11318,0,4,0,0x40006, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,8,-7641,-917,0,0,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(118,-15787,622,7264,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(118,-20107,-4474,-3974,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(118,11481,-819,-19613,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,0,-7600,-158,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(118,22829,4488,11326,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(118,18103,7992,24055,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,0,0,0,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,0,0,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,0,0,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,0,32640,10240,0,0,0,0xe0fbbf8, Bhv_Custom_0x0040f000,31),
OBJECT_WITH_ACTS(0,8,5,116,0,0,0,134, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,0,32512,10240,0,0,0,0xe115708, Bhv_Custom_0x0040f000,31),
OBJECT_WITH_ACTS(0,0,32512,9216,0,0,0,0xe115a38, Bhv_Custom_0x0040f000,31),
OBJECT_WITH_ACTS(0,0,32512,8704,0,0,0,0xe116c70, Bhv_Custom_0x0040f000,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,16,1,130,0),
WARP_NODE(0,9,1,12,0),
WARP_NODE(0,9,1,11,0),
WARP_NODE(0,9,1,14,0),
WARP_NODE(0,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,16,1,131,0),
WARP_NODE(1,31,1,11,0),
WARP_NODE(11,31,1,1,0),
WARP_NODE(2,31,1,22,0),
WARP_NODE(22,31,1,2,0),
WARP_NODE(3,31,1,33,0),
WARP_NODE(33,31,1,3,0),
WARP_NODE(0,9,1,10,0),
RETURN()
};
