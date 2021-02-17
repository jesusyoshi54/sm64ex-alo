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
#include "levels/ttm/header.h"
extern u8 _ttm_segment_ESegmentRomStart[]; 
extern u8 _ttm_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ttm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom63438528_skybox_mio0SegmentRomStart,_SkyboxCustom63438528_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ttm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttm_1_[] = {
AREA(1,Geo_ttm_1_0x3b41700),
TERRAIN(col_ttm_1_0xe06a1c0),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,-2703,-5655,-8339,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-9012,-2378,-5460,0,0,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,5426,1244,3115,0,-66,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,8866,3363,3138,0,-90,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,7706,3544,-10700,0,45,0,0x320000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,11223,2418,-8572,0,84,0,0x3c0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-2515,-1517,-9710,0,90,0,0x460000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,3634,2687,-9706,0,-90,0,0x500000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-8064,5452,3974,0,-79,0,0x5a0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(137,-4029,2622,1191,0,71,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,7971,1161,-8331,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-534,4172,-135,0,98,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,9105,4343,3197,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-9253,5483,11039,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(103,-1033,4186,-9553,0,0,0,0x5000000, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(46,8130,3251,-10262,0,45,0,0x0, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(242,1070,-2534,-4380,0,31,0,0x10000, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(242,6045,-363,-2249,0,-18,0,0x0, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(241,163,-662,-163,0,4,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,2021,2355,3758,0,-34,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,2457,2721,4060,0,-34,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,11222,2446,-8572,0,84,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-3673,-949,-9678,45,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-3673,-591,-9678,45,0,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-3673,-239,-9678,45,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-3673,119,-9678,45,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-3673,484,-9678,45,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(120,-2275,747,-9708,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(103,-6093,-4509,-8449,0,90,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,10529,3540,-6120,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,4473,950,925,0,-20,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,1031,-2458,-7032,0,-21,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,4964,-2833,-5332,0,-32,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(100,-771,2041,-153,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,1240,1921,3686,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,1103,-2467,-8535,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,2618,1510,2717,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,-1834,672,-9492,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,8117,3251,-9685,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,3046,2680,-9105,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(84,-3313,-945,-9636,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,3171,3948,4646,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-9208,5930,5668,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-5574,-2446,-6112,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,6197,-2323,-7682,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,10653,4126,-3837,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,9116,5911,3510,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,499,4128,-6468,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-4141,-1336,-1363,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(242,11592,2402,-8532,0,84,0,0x0, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(140,7905,3540,-7687,0,-128,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,7417,3266,-7626,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7417,3394,-7626,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7198,3154,-8262,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7198,3282,-8262,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7268,3251,-8796,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7268,3379,-8796,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7552,3203,-9300,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7552,3331,-9300,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,7709,3343,-11024,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(212,8294,4977,3131,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-4118,-582,-1435,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-670,-2219,-9693,0,81,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,9299,4776,1907,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7908,3250,3211,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4810,1250,3729,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3172,2841,-7528,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,4975,325,-600,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4368,-1919,-2507,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,527,1979,414,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,681,-2217,-5936,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,8737,3621,-9578,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,10422,3621,-9867,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,10012,3807,-2754,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3778,3443,3937,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7111,-2814,-8041,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3633,2315,917,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4485,-4428,-8361,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-310,2122,-492,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1635,4267,-9192,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1038,4267,-10267,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-415,4267,-9215,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,-534,2543,-135,0,98,0,0x270000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-534,3140,-135,0,98,0,0x280000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-534,3674,-135,0,98,0,0x260000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(194,8922,-2223,-8496,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,8922,-821,-8496,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,8922,620,-8496,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(180,-9188,5912,9337,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-9088,5531,6582,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-9325,5732,8028,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,3526,2680,-10255,0,148,0,0x240000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,4,5,105,3,0,0,38,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,5,381,12,0,0,39,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,5,381,6,0,0,40,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,32,5,96,6,0,0,41,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,36,1,10,0),
WARP_NODE(20,36,1,30,0),
WARP_NODE(30,36,1,20,0),
WARP_NODE(40,36,1,50,0),
WARP_NODE(50,36,1,40,0),
WARP_NODE(240,26,1,210,0),
WARP_NODE(241,26,1,211,0),
WARP_NODE(60,36,1,70,0),
WARP_NODE(70,36,1,60,0),
WARP_NODE(80,36,1,90,0),
WARP_NODE(90,36,1,80,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
