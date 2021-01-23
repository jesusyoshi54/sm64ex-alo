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
#include "levels/rr/header.h"
const LevelScript level_cotmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x3301700),
TERRAIN(col_cotmc_1_0xe0605c0),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,-9725,-52,6060,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-7723,782,15403,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-5993,2780,-10735,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(20,5948,-2944,-5985,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,8640,-1019,5099,0,-90,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(85,5955,-1353,-15404,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,2170,-3609,3703,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,9712,-2313,-2206,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,7307,-3382,-7269,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7590,-3382,-6043,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4940,-3382,-7419,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6090,-3382,-7517,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4269,-3382,-6413,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5158,-3382,-5504,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7433,-3382,-4321,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4835,-3382,-4586,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(180,-4438,43,15950,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6713,317,12917,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7742,317,14292,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4336,-2325,3707,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7742,-1330,5089,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3738,-1225,7847,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6571,73,-5373,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5315,73,-6655,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1362,-1195,2864,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4955,-1332,-15407,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6944,-1332,-15392,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(101,2961,-1353,4434,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2928,-2621,3747,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,2215,-85,-9718,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-3263,-115,12855,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,2197,-1353,-15386,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,5940,-1353,-2233,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-7689,434,15407,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,5948,-3413,-6031,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-8635,-1078,5984,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(122,5145,-3830,6517,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,6260,-3830,12904,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,4071,-3005,11113,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,4171,-1905,5390,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,-5755,-1800,8371,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,-3712,-227,-4240,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(206,-6279,-2213,6007,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2180,-2488,-2189,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,9789,-1220,-6075,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,5957,1314,-9703,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,9722,-1220,-15405,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-3336,-955,10380,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,5960,161,-5985,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,8618,-1355,5006,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2179,-3830,3685,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1122,-2123,3717,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(212,-2640,954,-7766,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,1541,-1353,3740,0,-90,0,0x460000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,7,1,240,0),
WARP_NODE(241,7,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};