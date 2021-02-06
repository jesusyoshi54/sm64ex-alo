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
#include "levels/wdw/header.h"
extern u8 _wdw_segment_ESegmentRomStart[]; 
extern u8 _wdw_segment_ESegmentRomEnd[];
const LevelScript level_wdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _wdw_segment_ESegmentRomStart, _wdw_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
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
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_wdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wdw_1_[] = {
AREA(1,Geo_wdw_1_0x1ba1700),
TERRAIN(col_wdw_1_0xe05f1b8),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_wdw_1_),
JUMP_LINK(local_warps_wdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_1_[] = {
OBJECT_WITH_ACTS(0,-7540,-957,-6575,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(56,-1618,-3162,-8954,0,0,0,0x0, bhvWaterLevelDiamond,31),
OBJECT_WITH_ACTS(56,-2875,1838,-3928,0,0,0,0x0, bhvWaterLevelDiamond,31),
OBJECT_WITH_ACTS(56,-418,691,2904,0,0,0,0x0, bhvWaterLevelDiamond,31),
OBJECT_WITH_ACTS(56,-5175,-4864,4609,0,0,0,0x0, bhvWaterLevelDiamond,31),
OBJECT_WITH_ACTS(0,1198,-5550,734,0,0,0,0x0, bhvInitializeChangingWaterLevel,31),
OBJECT_WITH_ACTS(0,64,-3690,2003,0,90,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-4138,-4584,895,0,-42,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(56,-700,-3833,5140,0,0,0,0x0, bhvWaterLevelDiamond,31),
OBJECT_WITH_ACTS(122,6345,2658,-7684,0,-90,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,6138,-160,623,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1385,-4347,9266,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7675,-2472,-777,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(59,3372,-1251,2967,0,-70,90,0x0, bhvWdwRectangularFloatingPlatform,31),
OBJECT_WITH_ACTS(59,-3514,183,-7068,0,0,0,0x0, bhvWdwRectangularFloatingPlatform,31),
OBJECT_WITH_ACTS(54,-3506,183,-5370,0,0,0,0x0, bhvWdwSquareFloatingPlatform,31),
OBJECT_WITH_ACTS(54,4450,-742,4702,0,0,0,0x0, bhvWdwSquareFloatingPlatform,31),
OBJECT_WITH_ACTS(54,-995,-3938,739,0,0,0,0x0, bhvWdwSquareFloatingPlatform,31),
OBJECT_WITH_ACTS(137,-994,1191,741,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4451,1191,4703,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(201,2461,-1259,2501,0,90,0,0x780000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(31,-907,-4302,5140,0,-90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(31,-1165,-2861,-5792,0,12,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(31,5471,-549,615,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(45,2954,1968,-6954,0,0,0,0x30000, bhvMoving_Rotating_Block_MOP,31),
OBJECT_WITH_ACTS(45,4060,2130,-7050,0,0,0,0x1040000, bhvMoving_Rotating_Block_MOP,31),
OBJECT_WITH_ACTS(45,4836,2242,-7791,0,0,0,0x30000, bhvMoving_Rotating_Block_MOP,31),
OBJECT_WITH_ACTS(140,5206,-1420,-8027,0,-72,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,4777,-1368,-7855,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4307,-1368,-7595,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3782,-1368,-7482,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2403,-1368,-7119,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2836,-1368,-6376,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(153,-4791,-1776,-2889,0,38,0,0x0, bhvSandblock_MOP,31),
OBJECT_WITH_ACTS(84,6740,1557,-3085,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(152,-1774,-4405,6427,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-1772,-4457,7318,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-1776,-4516,8251,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(0,-5204,-2366,-4753,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,838,-4005,4653,0,-53,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3512,938,-7536,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5231,-386,4245,0,36,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6561,-478,606,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3604,-1349,-244,0,53,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4138,-1885,892,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1866,-2441,1584,0,43,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6137,-3214,-781,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-23,-3338,-1231,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1248,-3708,2280,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5964,1009,-2578,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3345,-1251,2343,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,1635,-3668,-2708,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2422,-1420,-6371,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(192,2319,1879,-5981,0,0,0,0x20000, bhvGoomba,31),
OBJECT_WITH_ACTS(188,4020,-742,5470,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,-2284,-4154,5292,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(188,-4546,-2437,-4259,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7308,-1589,-4699,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,4697,-401,189,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(188,-3176,-1589,-1424,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(105,382,-3729,4976,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,1049,-3668,-54,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-3908,-1049,-6080,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-2830,183,-6731,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,2031,-1420,-5133,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,5787,-243,5592,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-381,249,2716,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,5761,472,2374,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(137,2206,-2921,-1161,0,0,0,0x2c0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(105,-1854,-2861,-6522,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(180,3704,-980,3673,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1597,-3367,1468,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1088,-3367,-4051,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-230,-1149,-2023,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3072,-1149,-1294,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2024,-1149,-4191,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2565,1223,-3056,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1318,1223,-1797,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6539,-4331,1612,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(194,-3200,1908,-4199,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,4092,-1312,-7656,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,3777,2583,-7055,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-6228,-4494,3197,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,4382,-802,-3435,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,1342,1060,-728,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(212,2587,564,167,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(37,-6601,-1589,-6612,0,90,0,0x1500000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-6601,-1589,-6762,0,-90,0,0x1500000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,7151,1167,-2369,0,0,0,0x147d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,7146,1167,-2550,0,0,0,0x147d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6595,1494,-2466,0,-90,0,0x780000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,6595,1494,-2466,0,90,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(195,-2372,-1589,-1778,0,-141,0,0x20000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,-6761,-1589,-6924,0,-48,0,0x350000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,6861,1167,-2099,0,-113,0,0x4b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,8,5,72,0,0,0,25, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,32,5,24,0,0,0,26, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wdw_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(80,8,1,110,0),
WARP_NODE(125,36,1,10,0),
WARP_NODE(120,11,1,120,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,111,0),
WARP_NODE(241,6,1,112,0),
WARP_NODE(20,11,1,20,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
