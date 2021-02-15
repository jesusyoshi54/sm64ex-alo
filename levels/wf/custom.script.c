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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/ssl/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _sslSegmentRomStart, _sslSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),
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
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2d81700),
TERRAIN(col_wf_1_0xe00f758),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,0,-3734,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(217,3233,-617,-1072,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,3240,-635,-1554,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(100,3104,-746,-1838,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(122,3287,2748,6240,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3242,2190,6163,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,5717,-5670,1351,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2217,-5850,-815,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-5232,-540,5156,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,-695,-1500,5232,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-3427,-2610,5143,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-4336,-1590,5139,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,1353,150,5165,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(217,3123,150,1929,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,0,-4740,0,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-4804,-5493,4703,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4891,-5493,1334,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2223,-5493,2599,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2690,-5493,-349,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1820,-5493,-3698,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4397,-5493,-3740,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3990,-5493,-212,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,898,-5493,-1005,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,2515,-5493,-766,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,1591,-5493,3162,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,1447,-5493,-3358,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-774,-5493,-2018,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-941,-5493,1664,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3758,-5493,-2044,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4203,-2784,-6324,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2125,-2785,-6282,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-376,-2785,-6301,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,985,-2785,-6355,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4473,1214,-9215,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1910,1214,-9248,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,224,1214,-9197,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2662,-5493,1330,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2928,-2785,-6358,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,5038,-5493,1369,0,0,0,0x0, bhvBobomb,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,2,0),
WARP_NODE(241,6,1,3,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
