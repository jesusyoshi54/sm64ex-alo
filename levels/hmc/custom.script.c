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
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_hmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom24510144_skybox_mio0SegmentRomStart,_SkyboxCustom24510144_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_hmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x1621700),
TERRAIN(col_hmc_1_0xe0649b8),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,2978,-4984,-8307,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,9015,-2147,-5460,0,180,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2513,-1520,-9710,0,-90,0,0x190000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-3636,2687,-9706,0,90,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-5428,1237,3111,0,64,0,0x230000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-8874,3360,3141,0,90,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-7702,3544,-10698,0,-45,0,0x2d0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-11224,2416,-8573,0,-84,0,0x320000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,8063,5437,3972,0,79,0,0x370000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-8443,1126,-8410,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-1719,5774,-10084,0,25,0,0x1000000, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(122,-9101,4766,3385,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,5887,-991,-3835,0,-104,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,9246,6086,11146,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(20,-209,-620,127,0,-4,0,0x5000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(152,-304,-1243,260,0,-4,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(3,-5138,2944,2674,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,2925,-2841,-8352,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,-2672,-2522,-3383,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,-199,1532,-195,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,9013,-1324,-4951,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(47,-3825,1203,4540,0,-63,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(47,-1895,1642,4399,0,-128,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(46,-6026,-380,-2195,0,198,0,0x0, bhvCheckpoint_Flag_MOP,28),
OBJECT_WITH_ACTS(146,-785,4126,-7039,-90,208,0,0x731e0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(120,-8438,-2939,-8392,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,3582,-1730,-9726,0,-90,0,0x0, bhvFloorSwitchHiddenObjects,3),
OBJECT_WITH_ACTS(129,4025,-1443,-9726,0,0,45,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,4244,-1052,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,4244,-852,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,3636,-831,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,3440,-631,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,4369,306,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,4162,-395,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,4369,106,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,3615,122,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(129,3415,322,-9726,0,0,0,0x0, bhvHiddenObject,3),
OBJECT_WITH_ACTS(217,-3636,2655,-9705,0,0,0,0x0, bhvPushableMetalBox,3),
OBJECT_WITH_ACTS(120,2294,747,-9703,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(194,370,1140,-9698,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-137,1585,-9698,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-638,2012,-9698,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1284,2365,-9698,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-1937,2524,-9698,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-2607,2638,-9698,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(123,3581,-1681,-9728,0,0,0,0x960000, bhvNoteblock_MOP,60),
OBJECT_WITH_ACTS(101,440,2041,-257,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-8367,3251,-10001,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,19,-2324,-9656,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-792,-2404,-5372,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-5105,-2784,-5484,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-4472,1237,3520,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,9265,5177,4122,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-3418,3362,4204,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,2048,672,-9745,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(223,-2528,2895,4477,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,6221,-4509,-8229,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,4409,-1943,-2703,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-4672,1612,2802,0,19,0,0x120000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2179,-5484,-8344,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,2416,-153,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7702,3769,-10299,0,0,0,0x1f0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9102,5700,3561,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2539,3920,-7242,0,8,0,0x150000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-2702,1581,5485,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-4664,1006,166,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-11324,3670,-9325,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-10263,3670,-5197,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-8366,3670,-7555,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-5148,3435,2831,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,8838,-2876,-5251,0,181,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-1192,-2378,-7340,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-3678,-2711,-3476,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(122,-9233,4397,-197,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(192,-1213,1921,3431,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3281,2680,-9136,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4980,-4509,-8294,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,1148,-2045,-9730,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-7599,-2921,-8112,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2412,672,-9612,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,9174,5943,9967,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-9286,4841,2202,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(180,9100,5410,5652,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9327,5886,9070,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6720,-4441,-8593,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4080,1190,2244,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8289,3608,-9312,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5241,1305,4022,0,17,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-10991,2526,-8889,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-729,-2292,-6202,0,8,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3245,-1537,-9681,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2102,2529,3473,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-11788,3592,-5780,0,6,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3921,2732,-9707,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7910,3243,3182,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7152,3161,-8480,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3699,-3224,-8344,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(206,-548,2045,1181,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1997,-1807,-9773,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(194,-998,5747,-8717,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(152,-8553,628,-8501,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-8353,628,-8301,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-8353,628,-8501,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-8553,628,-8301,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-304,-1243,60,0,-4,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-86,-1243,260,0,-4,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-86,-1243,60,0,-4,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(0,-4455,1083,893,0,22,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4063,-4509,-8363,0,2,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,8667,5494,4091,0,78,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,3820,-5805,-8346,0,-90,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,4120,-1949,-976,0,-103,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(47,-9102,4380,3738,0,90,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(0,8,5,135,9,0,0,5,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,96,6,0,0,6,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,5,381,3,0,0,7,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(50,7,1,55,0),
WARP_NODE(55,7,1,50,0),
WARP_NODE(240,6,1,160,0),
WARP_NODE(241,6,1,161,0),
WARP_NODE(20,7,1,25,0),
WARP_NODE(25,7,1,20,0),
WARP_NODE(30,7,1,35,0),
WARP_NODE(35,7,1,30,0),
WARP_NODE(40,7,1,45,0),
WARP_NODE(45,7,1,40,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
