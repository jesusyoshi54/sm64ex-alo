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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/jrb/header.h"
const LevelScript level_ccm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _jrbSegmentRomStart, _jrbSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x1361700),
TERRAIN(col_ccm_1_0xe062c10),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,-322,-14,-12022,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(86,19204,-884,3828,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,20823,391,-990,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,30274,-558,3633,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,30688,-797,3174,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,26654,-853,8536,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,26478,-1195,8801,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,23746,679,8320,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,20655,231,4225,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,20940,1580,1302,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,23065,7134,3131,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,26779,8075,3586,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,27054,7636,3273,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,27502,6354,1425,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,28286,691,-972,0,-154,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(207,29388,2461,258,0,-154,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,28667,2461,-98,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,28288,2791,-33,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,27837,3241,17,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,27451,3631,133,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,26997,3961,367,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,30808,-1302,-943,0,-154,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,23807,7728,2252,0,-154,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,9226,1458,-2137,0,-154,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-7643,5058,-892,0,-154,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,44,2778,12411,0,-154,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,-13,213,2046,0,-154,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,2961,513,12864,0,-154,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,2947,513,10142,0,-154,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-3000,513,10162,0,-154,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-3036,513,12905,0,-154,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(129,114,1713,15812,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-238,2103,15465,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-14,2643,14110,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,486,420,11511,0,-154,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(122,5452,745,2123,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(217,8014,-1085,1624,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(215,30574,-222,5353,0,-154,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,114,903,15812,0,-154,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-203,2283,14741,0,-154,0,0x0, bhvHiddenObject,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,10,0),
WARP_NODE(241,6,1,12,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
