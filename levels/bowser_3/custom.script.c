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
#include "levels/bowser_3/header.h"
extern u8 _bowser_3_segment_ESegmentRomStart[]; 
extern u8 _bowser_3_segment_ESegmentRomEnd[];
const LevelScript level_bowser_3_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bowser_3_segment_7SegmentRomStart, _bowser_3_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bowser_3SegmentRomStart, _bowser_3SegmentRomEnd),
LOAD_RAW(0x0E, _bowser_3_segment_ESegmentRomStart, _bowser_3_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom61996736_skybox_mio0SegmentRomStart,_SkyboxCustom61996736_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group12_mio0SegmentRomStart,_group12_mio0SegmentRomEnd),
LOAD_RAW(13,_group12_geoSegmentRomStart,_group12_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_1,  bowser_3_geo_000290),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_2,  bowser_3_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_3,  bowser_3_geo_0002C0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_4,  bowser_3_geo_0002D8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_5,  bowser_3_geo_0002F0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_6,  bowser_3_geo_000308),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_7,  bowser_3_geo_000320),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_8,  bowser_3_geo_000338),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_9,  bowser_3_geo_000350),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_10, bowser_3_geo_000368),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,            bowser_3_geo_000380),
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
JUMP_LINK(script_func_global_13),
JUMP_LINK(local_area_bowser_3_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_3_1_[] = {
AREA(1,Geo_bowser_3_1_0x39e1700),
TERRAIN(col_bowser_3_1_0xe0063f0),
SET_BACKGROUND_MUSIC(0,25),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_3_1_),
JUMP_LINK(local_warps_bowser_3_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_3_1_[] = {
OBJECT_WITH_ACTS(0,-12,1023,1157,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(100,0,302,-400,0,0,0,0x0, bhvBowser,31),
OBJECT_WITH_ACTS(101,-2131,852,-2789,0,38,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(101,2131,852,-2791,0,-38,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(101,3445,852,1265,0,-116,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(101,-1,852,3770,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(101,-3451,852,1262,0,116,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(180,9,481,-2668,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2688,481,-730,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2691,481,-739,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1628,481,2398,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1651,481,2427,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,0,430,144,0,0,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,0,430,144,0,74,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,0,430,144,0,-74,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,0,430,144,0,144,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,0,430,144,0,-144,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(122,-1038,369,-173,0,72,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,0,369,-955,0,0,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,-631,369,1031,0,144,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,631,369,1040,0,-144,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,987,369,-158,0,-72,0,0x10000, bhvCirclingAmp,31),
RETURN()
};
const LevelScript local_warps_bowser_3_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,150,0),
WARP_NODE(241,21,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
