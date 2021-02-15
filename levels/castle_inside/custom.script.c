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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(131,0x04037070),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe0b6628),
SET_BACKGROUND_MUSIC(0,69),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,6,-300,3270,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-8351,3074,-2545,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1728,2628,-1129,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,6665,2275,-5703,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-3066,-270,-1877,0,90,0,0x320000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6005,-44,-1874,0,90,0,0x340000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4947,779,-4944,0,180,0,0x3c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5097,639,-5697,0,-90,0,0x460000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5639,1839,-5700,0,-90,0,0x480000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4124,1680,-596,0,180,0,0x500000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1049,4529,-6449,0,-90,0,0x5a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1046,4529,-6450,0,90,0,0x640000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3092,-956,3008,0,90,0,0x6e0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-3230,29,2993,0,137,0,0x780000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,4830,-904,0,180,0,0x820000, bhvWarp,31),
OBJECT_WITH_ACTS(22,2480,1349,300,0,180,0,0xca0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-9159,450,-5695,0,90,0,0xc90000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,-8289,805,-6299,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8290,805,-5697,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8288,805,-5092,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-2616,69,-1871,0,-90,0,0x330000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-5754,294,-1881,0,-90,0,0x350000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-4946,1119,-5541,0,0,0,0x3d0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,4621,969,-5697,0,90,0,0x470000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,5101,2178,-5702,0,90,0,0x490000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,4119,2019,-1049,0,0,0,0x510000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-1443,4869,-6456,0,90,0,0x5b0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,1513,4869,-6443,0,-90,0,0x650000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-3081,-831,2998,0,-90,0,0x6f0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-2911,369,2669,0,-44,0,0x790000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3,5169,-1306,0,0,0,0x830000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,1277,1718,-374,0,90,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-1,3632,-2547,0,180,0,0x8c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4,4022,-3044,0,0,0,0x8d0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(123,6,1049,-6676,0,0,0,0x870000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(212,2552,721,-2557,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(37,-78,1047,-5926,0,0,0,0x1d20000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,72,1047,-5926,0,180,0,0x1d30000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-74,-450,3518,0,0,0,0x2450000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,76,-450,3518,0,180,0,0x2450000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-79,452,94,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(38,72,452,94,0,180,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(38,-75,3601,-5926,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(38,76,3601,-5926,0,180,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(38,-73,4798,-2023,0,0,0,0x4b4b0000, bhvDoor,31),
OBJECT_WITH_ACTS(38,78,4798,-2023,0,180,0,0x4b4b0000, bhvDoor,31),
OBJECT_WITH_ACTS(38,-4501,-450,-1119,0,0,0,0x21000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,-4503,-450,-2624,0,0,0,0x21000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,-3074,150,-7274,0,0,0,0x10000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,3372,600,-5252,0,-90,0,0x23230000, bhvDoor,31),
OBJECT_WITH_ACTS(38,4429,1809,-5697,0,90,0,0x20000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,6676,1800,-5025,0,0,0,0x1a000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,3374,1650,-1874,0,90,0,0x12000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,-1647,4500,-5890,0,0,0,0x3c3c0000, bhvDoor,31),
OBJECT_WITH_ACTS(38,1647,4500,-5887,0,0,0,0x14000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,-825,0,1727,0,-90,0,0x32320000, bhvDoor,31),
OBJECT_WITH_ACTS(38,-825,0,1875,0,90,0,0x32320000, bhvDoor,31),
OBJECT_WITH_ACTS(38,-2470,-1051,2930,0,-90,0,0x16000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(38,-2470,-1051,3078,0,90,0,0x16000000, bhvLllBowserPuzzlePiece,31),
OBJECT_WITH_ACTS(137,-8637,3031,-2562,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-3893,-1047,3071,0,0,0,0x8060000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3893,-822,3071,0,0,0,0x8060000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3896,-1047,2935,0,0,0,0x8060000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3896,-822,2935,0,0,0,0x8060000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6672,1835,-3873,0,0,0,0x960000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6672,2118,-4162,0,0,0,0x970000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(188,6910,1835,-4775,0,0,0,0x610000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(38,7311,1800,-5698,0,-90,0,0xd1d10000, bhvDoor,31),
OBJECT_WITH_ACTS(0,7645,1800,-5695,0,0,0,0x3ed0000, bhvWarp,31),
OBJECT_WITH_ACTS(221,459,0,1825,0,268,0,0x88000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-2687,-119,-86,0,182,0,0x85000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-3259,600,-5332,0,332,0,0x86000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,2312,600,-5693,0,286,0,0x87000000, bhvToadMessage,31),
// OBJECT_WITH_ACTS(0,8,5,18,0,0,0,0, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,8,5,44,0,0,0,1, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,4,70,0,0,0,2, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,8,5,22,0,0,0,3, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,4,0,0,0,4, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,9,0,0,0,5, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,15,0,0,0,6, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,11,0,0,0,7, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,4,68,0,0,0,8, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,28,0,0,0,9, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,166,0,0,0,10, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,318,0,0,0,11, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(50,4,1,10,0),
WARP_NODE(51,6,1,10,0),
WARP_NODE(52,18,1,10,0),
WARP_NODE(53,6,1,10,0),
WARP_NODE(60,7,1,10,0),
WARP_NODE(61,6,1,10,0),
WARP_NODE(70,22,1,10,0),
WARP_NODE(71,6,1,10,0),
WARP_NODE(72,29,1,10,0),
WARP_NODE(73,6,1,10,0),
WARP_NODE(80,8,1,10,0),
WARP_NODE(81,6,1,10,0),
WARP_NODE(90,23,1,10,0),
WARP_NODE(91,6,1,10,0),
WARP_NODE(100,10,1,10,0),
WARP_NODE(101,6,1,10,0),
WARP_NODE(110,31,1,10,0),
WARP_NODE(111,6,1,10,0),
WARP_NODE(150,15,1,10,0),
WARP_NODE(151,6,1,10,0),
WARP_NODE(120,19,1,10,0),
WARP_NODE(121,6,1,10,0),
WARP_NODE(130,21,1,10,0),
WARP_NODE(131,6,1,10,0),
WARP_NODE(201,6,1,202,0),
WARP_NODE(202,6,1,201,0),
WARP_NODE(210,6,1,210,0),
WARP_NODE(211,6,1,211,0),
WARP_NODE(69,26,1,215,0),
WARP_NODE(140,27,1,10,0),
WARP_NODE(141,6,1,10,0),
WARP_NODE(0,9,1,11,0),
WARP_NODE(227,34,1,20,0),
WARP_NODE(0,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(237,26,1,237,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,16,1,10,0),
RETURN()
};
