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
#include "levels/cotmc/header.h"
extern u8 _cotmc_segment_ESegmentRomStart[]; 
extern u8 _cotmc_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_cotmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,6115,-1770,-5848),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x3301700),
TERRAIN(col_cotmc_1_0xe00b1b0),
SET_BACKGROUND_MUSIC(0,51),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,20860,-2649,20187,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,22078,-3631,22185,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,14727,-3041,17056,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(217,14813,-3791,17144,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(122,21028,-2500,14778,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,-13818,-3092,21455,0,0,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,15173,2285,-10583,0,0,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(137,15533,2600,-10600,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,15533,2600,-10900,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,15533,2600,-11200,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(217,2128,-3791,22783,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,2128,-3000,22783,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6063,9350,-9260,0,0,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-9900,-3000,-18180,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(215,21883,-3640,17978,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,22100,-3791,-22673,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-14448,-3000,20783,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-21548,-2700,21585,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,17700,9050,-21830,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-11008,-3000,-19333,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,6500,-2700,19130,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,22058,-2700,16360,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6998,-2700,22225,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-14590,-2700,16410,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,20720,-3000,20140,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-21885,-3450,-5958,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-3218,11900,21843,0,0,0,0x5080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,18743,8000,16895,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(116,6048,9090,-9240,0,0,0,0x0, bhvOneCoin,31),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,28,1,10,0),
WARP_NODE(11,28,1,12,0),
WARP_NODE(12,28,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,10,1,1,0),
WARP_NODE(241,10,1,2,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
