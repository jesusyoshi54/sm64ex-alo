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
#include "levels/bowser_2/header.h"
extern u8 _bowser_2_segment_ESegmentRomStart[]; 
extern u8 _bowser_2_segment_ESegmentRomEnd[];
#include "levels/sl/header.h"
const LevelScript level_bowser_2_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _slSegmentRomStart, _slSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_2_segment_ESegmentRomStart, _bowser_2_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE,      sl_geo_000390),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE,        sl_geo_000360),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK,  sl_geo_000378),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE,          snow_tree_geo),
LOAD_MODEL_FROM_GEO(18, snow_tree_geo),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bowser_2_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_2_1_[] = {
AREA(1,Geo_bowser_2_1_0x3881700),
TERRAIN(col_bowser_2_1_0xe041000),
SET_BACKGROUND_MUSIC(0,13),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_2_1_),
JUMP_LINK(local_warps_bowser_2_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_2_1_[] = {
OBJECT_WITH_ACTS(0,-1355,10959,-1706,0,-179,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(86,27434,16427,-828,0,0,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(22,29838,2973,-364,0,0,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2794,16443,-558,0,0,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(217,2808,16373,-261,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,2803,16373,-558,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(145,25233,17415,2243,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,30478,17400,2195,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,30393,17390,-4115,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,25195,17407,-4012,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(217,29817,2973,-1171,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(206,29176,2973,-1649,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,26960,2973,-1795,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,27982,2973,-1843,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,26179,2973,-1805,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,24782,2973,-1855,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,23443,2973,-1863,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,21722,2948,-1778,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,20340,2948,-1731,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,19341,2948,-1719,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,18016,2948,-1954,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,16872,2948,-1814,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,15977,2946,-1842,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,14621,2946,-1740,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,13512,2946,-1673,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,12277,2946,-1613,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(217,10982,2903,-1617,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,8379,2903,-1626,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(206,19027,16477,1693,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,17647,16477,1596,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,15366,16477,1439,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,14237,16477,1227,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,12786,16477,1282,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,11432,16477,1319,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,10092,16477,1009,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,9172,16477,769,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,8470,16477,306,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,7425,16477,-10,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6064,16477,-105,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,5039,16477,-177,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,3740,16477,-268,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,20473,16174,1899,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,23157,16174,2311,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,21596,16174,1877,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(124,29191,4791,-727,0,105,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2163,9977,-1612,0,92,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(206,16659,16383,1580,0,0,0,0x0, bhvSnufit,31),
RETURN()
};
const LevelScript local_warps_bowser_2_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,51,0),
WARP_NODE(241,19,1,1,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,33,1,6,0),
WARP_NODE(6,33,1,5,0),
RETURN()
};
