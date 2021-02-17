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
#include "levels/ssl/header.h"
extern u8 _ssl_segment_ESegmentRomStart[]; 
extern u8 _ssl_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ssl_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ssl_segment_ESegmentRomStart, _ssl_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom25951936_skybox_mio0SegmentRomStart,_SkyboxCustom25951936_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ssl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ssl_1_[] = {
AREA(1,Geo_ssl_1_0x1781700),
TERRAIN(col_ssl_1_0xe060560),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_ssl_1_),
JUMP_LINK(local_warps_ssl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ssl_1_[] = {
OBJECT_WITH_ACTS(0,-2755,-2205,348,0,114,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(120,-1591,-2674,-125,0,-154,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(20,-675,3211,-2801,0,-98,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(20,-7743,2232,-5286,0,65,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,9783,-335,5072,0,30,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(20,-4694,5282,-5567,0,-64,0,0x3000000, bhvFlipswitch_Panel_StarSpawn_MOP,31),
OBJECT_WITH_ACTS(122,-10021,3925,8176,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6006,-768,5480,0,129,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,889,2140,-872,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3117,2140,-498,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2426,2140,-1914,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3636,2140,-2577,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1974,2140,-3738,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3506,2140,-4193,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2316,2140,-5585,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1729,-616,-3435,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(123,1053,1626,-2345,0,-27,0,0x1e0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,3166,834,-7184,0,0,0,0x140000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(202,-10055,1924,-2127,0,147,0,0x0, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(123,-2810,-2799,958,0,0,0,0x320000, bhvNoteblock_MOP,62),
OBJECT_WITH_ACTS(123,-2810,-2344,2144,0,0,0,0x3c0000, bhvNoteblock_MOP,62),
OBJECT_WITH_ACTS(3,-5697,271,-3538,0,13,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(42,-7197,3093,-6011,0,-192,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-7725,2952,-6135,0,-192,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-8893,2718,-5827,0,207,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-6122,4673,-4857,0,180,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-8334,4487,-3825,0,-244,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3832,4487,-4914,0,-214,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(122,-6081,3943,-6105,0,190,0,0x7000000, bhvStar,31),
OBJECT_WITH_ACTS(152,-5578,688,-5368,0,37,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(120,4840,1753,-906,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(137,1419,1941,-6785,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(116,-3152,-1586,-4004,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1896,1617,-454,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3430,1617,-1620,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1767,1617,-2845,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3245,1617,-3343,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2572,1617,-4787,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1623,1617,-1672,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(212,9365,2530,4030,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(85,-7473,4651,-4594,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,3575,1701,-5433,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-2175,-761,3950,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-5913,1889,7618,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-6462,1889,6438,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-4134,756,2938,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-562,756,5477,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-5342,-1233,7949,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,1408,-298,-5112,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-9502,4651,-3878,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,-6138,1448,-4821,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(101,-34,-298,-7542,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,4333,1701,-690,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,404,2582,-3208,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2418,756,2631,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2903,1014,8127,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-9166,1735,-3847,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-8526,1765,-4088,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-1601,-2726,-71,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-465,2857,-2769,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(122,1603,723,-8467,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,526,346,-8511,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,3076,1134,-7789,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,62,2765,-1927,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-4237,-913,8820,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-3070,-1220,3341,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-6125,4875,-4871,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,1449,1747,-6353,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-10379,2308,-1726,0,150,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-10379,2845,-1726,0,150,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-10379,3513,-1726,0,150,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-10379,4078,-1726,0,150,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(140,-3416,-52,6773,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-4407,-1196,7466,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4652,-1196,6868,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4847,-1196,7489,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5086,-1196,7713,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5173,-1196,8102,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-5464,-1196,7832,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4550,-1196,7198,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,-324,-400,-5599,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-990,-381,7476,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5178,835,5172,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1490,-220,-7287,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9608,2044,-2720,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8858,4730,-4691,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3248,-2785,-275,0,-16,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-532,835,4668,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-8747,6187,-2575,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(194,7299,2024,-5076,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,9289,2024,-1254,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,8110,2024,1994,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,-6122,770,5764,0,56,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-7833,1754,7336,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-7988,2219,6953,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-7732,2481,7580,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-7917,2522,7655,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-8507,2722,7903,0,22,-30,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-8878,3026,8050,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-9065,3050,8126,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-7908,1754,7150,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-7983,2422,6964,30,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-7650,1754,7259,0,22,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,-6570,3476,-5833,0,25,0,0x150000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(123,-6589,-330,-3917,0,1,0,0x500000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(120,-2024,832,7504,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(124,-5251,6273,-3163,0,-133,0,0x210000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,2,4,216,3,0,0,8,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,216,3,0,0,9,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ssl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,170,0),
WARP_NODE(241,26,1,171,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
