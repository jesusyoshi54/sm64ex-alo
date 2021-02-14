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
#include "levels/rr/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom59113152_skybox_mio0SegmentRomStart,_SkyboxCustom59113152_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
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
TERRAIN(col_wmotr_1_0xe0404f8),
SET_BACKGROUND_MUSIC(0,59),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,0,-748,8705,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,9818,0,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(15,0,5550,-10716,0,0,0,0x670000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,0,5550,-12596,0,0,0,0x450000, bhvWarp,31),
OBJECT_WITH_ACTS(31,0,5550,-12320,0,0,0,0x5a5a0000, bhvDoor,31),
OBJECT_WITH_ACTS(0,0,6394,-11156,0,180,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(67,0,6128,-11157,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,0,-2436,4196,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,784,-3655,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,3725,3520,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,1429,7511,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,6229,4494,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,6255,1461,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,5681,-2842,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,6530,-12706,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,0,6858,-12703,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(123,0,-2383,1645,0,0,0,0x780000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(242,0,-2324,2099,0,0,0,0x0, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(242,0,2775,4196,0,0,0,0x10000, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(241,0,1036,-1797,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,383,-756,0,0,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,631,-1256,0,0,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,2536,6443,0,0,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,2626,8093,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,2926,8393,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,3226,8693,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,0,5853,5178,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(180,0,-1831,1268,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,0,4138,6032,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,0,990,-2571,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,0,5732,-8091,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,0,5907,-8091,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,0,6092,-8091,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-500,1189,-2399,0,90,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-500,2540,747,0,90,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-500,4347,5393,0,90,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-607,-302,977,0,90,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(194,0,-373,1662,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(88,0,4649,7304,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,0,5550,-4802,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(194,0,-1679,5806,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,0,2654,7519,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,0,2817,-1908,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,0,4929,2632,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,0,5200,-2871,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(101,0,30,-812,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,0,1696,4084,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,0,5550,-6806,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,0,3449,9278,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(0,12,-1092,1648,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9,2674,3003,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,64,4,72,9,0,0,90, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,32,5,252,0,0,0,91, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,48,12,0,0,92, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,48,12,0,0,93, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,64,5,96,6,0,0,94, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,12,0),
WARP_NODE(69,21,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
