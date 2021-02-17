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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x31a1700),
TERRAIN(col_pss_1_0xe049138),
SET_BACKGROUND_MUSIC(0,44),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(22,-5043,-1802,2227,0,180,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-5187,747,2552,0,0,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,10296,-597,2544,0,0,0,0x1e0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(212,10576,-64,155,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(20,10287,50,-154,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(122,10288,239,460,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-5030,349,149,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8713,-384,-2470,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9989,976,759,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5495,52,2248,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7890,-1735,2555,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5489,-1436,-1338,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9159,208,-2463,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,10217,674,-1790,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,-9996,1292,-1349,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(215,7888,647,2557,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(215,6688,-550,2538,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(215,9984,-1303,2241,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(100,-5269,-220,-2354,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-6173,-654,-2652,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-9184,-90,-3227,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-9998,-68,-478,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-7615,1127,2605,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-8830,542,2566,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(122,-5037,723,153,0,180,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(206,-5138,-1943,148,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-5818,-1345,-2553,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-8637,428,-2705,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-8937,428,-3002,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-10591,-771,-2261,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-10284,878,2535,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-8185,1778,2548,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-6991,-13,2551,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(192,5203,-597,2169,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,5490,339,-135,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6882,2,-2709,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6529,2,-3103,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,9222,701,-2464,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,7351,2,-2609,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,10196,152,-1181,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,9383,-597,2567,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(180,8477,356,2565,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,8482,-806,2579,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6086,-243,2571,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7286,-1437,2567,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7289,-242,2559,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5468,-206,741,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4881,777,-1347,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5174,1106,-2699,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6989,1256,-3172,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(46,9972,-597,2245,0,0,0,0x0, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(0,10291,-147,701,0,0,0,0x10000, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(0,8,5,33,0,0,0,34,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,33,0,0,0,35,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,5,30,12,0,0,36,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,30,12,0,0,37,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,14,1,30,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,14,1,240,0),
WARP_NODE(241,14,1,241,0),
WARP_NODE(20,27,1,30,0),
WARP_NODE(30,27,1,20,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
