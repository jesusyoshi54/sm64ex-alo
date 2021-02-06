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
#include "levels/ddd/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ddd_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom47578816_skybox_mio0SegmentRomStart,_SkyboxCustom47578816_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x2c21700),
TERRAIN(col_ddd_1_0xe061020),
SET_BACKGROUND_MUSIC(0,60),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,2975,-637,6876,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-2431,293,1434,0,0,0,0x240000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3779,-151,-2601,0,0,0,0x240000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-39,-1363,2948,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1053,-1657,2168,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7978,347,-711,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(201,-1032,279,5688,0,90,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(122,-4912,315,-4099,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-4495,2492,-3941,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2202,2114,2363,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(67,2823,-750,1597,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,4220,2065,-302,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(67,-4672,-1921,-4108,0,90,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(66,-4976,-2098,396,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,-1070,-2098,-208,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,-1074,-2098,-3208,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,-2877,-2098,-1100,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,-4673,-2098,-2306,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,-4373,-2128,-801,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(66,-1977,-2128,689,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(66,-2581,-2128,-2014,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(66,-3775,-2128,-3507,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(66,-1678,-2128,-1395,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(120,-3774,-2304,-4114,0,90,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,2836,-1421,3257,0,180,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1535,-1814,-4107,0,-90,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(37,-958,-319,6263,0,-63,0,0x22d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-889,-319,6398,0,-243,0,0x22e0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-8300,-106,-42,0,0,0,0x2300000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-8148,-106,-42,0,180,0,0x22f0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-8467,298,-523,0,90,0,0x230000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,3121,-1194,7611,0,0,0,0x14500000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2923,-1194,7612,0,0,0,0x14500000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8944,-78,-435,0,0,0,0x141e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8945,-78,-620,0,0,0,0x141e0000, bhvWarp,31),
OBJECT_WITH_ACTS(65,4942,-614,-2307,0,-90,0,0x450000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4326,-164,-2311,0,-90,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4326,-164,-2311,0,90,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(215,-508,-933,4136,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4517,-52,-663,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,580,-475,-4267,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3935,-2295,1457,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1795,2168,-3866,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-712,1814,-3580,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5105,-2074,-4330,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1370,-2082,-1179,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(140,4792,1485,2365,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,2130,1485,1442,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3503,1485,1445,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2094,1485,347,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2045,1485,-839,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,857,1485,-923,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-334,1485,-930,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4799,1485,1467,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,5212,-1183,4110,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4609,-2506,-499,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1683,-123,-3210,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4183,-1152,3389,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5,-1153,1591,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7796,-50,-523,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1391,-553,-4106,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(84,-3332,-57,-2445,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,2901,-419,-2871,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-4424,1499,2910,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-1424,1616,3537,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,2720,-1120,4099,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-810,-492,-2084,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,2534,-796,102,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,572,-589,7193,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,4476,-2178,-3573,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,1842,-2108,-1885,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-2299,1935,841,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,586,1696,-2857,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,612,-1194,-89,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2414,-141,715,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,4522,-1171,2097,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,1780,-1156,7142,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,4168,-2646,-1756,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(206,-4215,-35,539,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2785,-1088,3191,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,290,-433,-4297,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,206,1785,-1902,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,4509,-1108,5917,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-431,1591,3123,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1509,2041,-2311,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-4501,2041,-1834,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(180,1925,-468,-1417,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-653,-506,-3067,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1707,-10,-4101,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5036,-2461,-647,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4942,-1044,3555,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2646,1543,3245,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-129,1830,-3620,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4811,1591,3248,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,417,2658,-1508,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,-8629,-77,-892,0,45,0,0x220000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-745,-314,6511,0,117,0,0x3c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2687,-1214,7318,0,180,0,0x350000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(15,1931,-307,-2392,0,180,0,0x3d0000, bhvBobombBuddy,60),
OBJECT_WITH_ACTS(124,-2432,-135,1591,0,180,0,0x3e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(194,-3763,-2292,-2292,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(0,1514,-3000,289,0,0,0,0x0, bhvInitializeChangingWaterLevel,31),
OBJECT_WITH_ACTS(137,-520,2117,-1839,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1763,174,5281,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,4720,-578,-2087,0,-106,0,0x870000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,8,4,30,0,0,0,61, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,96,0,0,0,62, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(20,23,1,20,0),
WARP_NODE(45,23,1,47,0),
WARP_NODE(46,23,1,48,0),
WARP_NODE(35,23,1,35,0),
WARP_NODE(240,6,1,91,0),
WARP_NODE(241,6,1,92,0),
WARP_NODE(30,12,1,95,0),
WARP_NODE(47,23,1,45,0),
WARP_NODE(48,23,1,46,0),
WARP_NODE(80,8,1,90,0),
WARP_NODE(69,18,2,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
