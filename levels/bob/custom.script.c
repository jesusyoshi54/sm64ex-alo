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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
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
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe0cc170),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,3897,-1635,11479,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,5380,2482,7752,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-7306,3326,2071,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-2432,-760,234,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,7895,532,-5691,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-4701,1732,-360,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,799,-634,2536,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3287,505,393,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-178,-849,8171,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9129,-944,4421,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,616,-1549,-2263,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-317,-464,-11182,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6489,737,8810,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1920,-1150,-5609,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,10326,-2048,2235,0,180,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,-2056,-1151,246,0,-90,0,0x1010000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,3509,-1904,-1975,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8062,1089,953,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,10330,-2048,1340,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1977,-998,6516,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7342,-1598,-7311,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,10675,-651,8931,0,-33,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,571,-1298,10740,0,67,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3954,-377,-6849,0,79,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2683,-802,-10829,0,75,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1712,-1688,2283,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5053,-1538,-4773,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2894,-72,-8666,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4050,1251,-1460,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3936,-2048,7638,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4096,-98,6390,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1981,951,-10613,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-450,-2048,-6071,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,7898,1401,4823,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,10303,-2048,2212,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(122,4285,-1748,2943,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,8721,-1298,7161,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,-8947,801,-2760,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,1888,-2048,-4041,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(188,2840,-1748,4495,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6259,-98,7556,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,618,-2048,8681,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3545,-2048,-687,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3139,-1598,-7284,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5661,-1598,-7255,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8007,801,-1825,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,7941,-848,8737,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4997,51,-9082,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(118,3499,-1992,-3247,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3127,-1992,-3849,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(220,-1450,-458,355,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,6386,2639,7548,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,9785,1147,4540,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(89,9042,801,4062,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(129,-10747,801,2191,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(129,-1026,-1646,6441,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(0,-521,-2775,-195,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(140,6016,-2048,-3151,0,-121,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,3115,-1992,-4225,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3483,-1992,-2809,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(124,-7524,-98,7304,0,90,0,0x220000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,8541,-1598,-7099,0,-90,0,0x210000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2722,951,-11646,0,-90,0,0x2e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-7896,-98,7624,0,0,0,0x141e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7892,-98,7433,0,0,0,0x141e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8920,-1598,-7398,0,0,0,0x14140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8920,-1598,-7218,0,0,0,0x14140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2879,951,-12089,0,0,0,0x14320000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3066,951,-12088,0,0,0,0x14320000, bhvWarp,31),
OBJECT_WITH_ACTS(0,8372,-1127,-7307,0,90,0,0x190000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-7333,374,7539,0,-90,0,0x230000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-2977,1385,-11608,0,180,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-2977,1385,-11608,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2989,1394,-11605,0,0,0,0x370000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-7327,502,7537,0,90,0,0x1f0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,8368,-1122,-7311,0,-90,0,0x180000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,3784,-2011,12089,0,0,0,0x140a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3997,-2011,12087,0,0,0,0x140a0000, bhvWarp,31),
OBJECT_WITH_ACTS(188,3960,-2048,8408,0,-90,0,0x40000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,4109,-2048,8486,0,-90,0,0x30000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-514,-1718,-7170,0,191,0,0x130000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,-2964,951,-11918,0,0,0,0x10000, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(195,3230,-1748,2456,0,0,0,0x6f0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,16,5,120,6,0,0,21,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,16,1,78,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(24,9,1,13,0),
WARP_NODE(240,6,1,11,0),
WARP_NODE(241,6,1,12,0),
WARP_NODE(20,24,1,10,0),
WARP_NODE(30,12,1,10,0),
WARP_NODE(50,4,1,10,0),
WARP_NODE(35,9,1,35,0),
WARP_NODE(25,9,1,25,0),
WARP_NODE(55,9,1,55,0),
WARP_NODE(31,9,1,31,0),
RETURN()
};
