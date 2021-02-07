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
#include "levels/bbh/header.h"
const LevelScript level_ttm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom63438528_skybox_mio0SegmentRomStart,_SkyboxCustom63438528_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
TERRAIN(col_ttm_1_0xe0972c0),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,6601,5671,8450,0,-100,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(128,-3836,-1769,11485,0,0,0,0x3c0000, bhvCannon,31),
OBJECT_WITH_ACTS(122,-11248,7589,-11826,0,88,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(180,-9795,7005,-13315,0,88,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6174,1299,-13462,0,88,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7082,2578,-13544,0,88,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7838,4078,-13554,0,88,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8516,5468,-13761,0,88,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(120,-8725,5967,-13438,0,88,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-7386,3307,-13608,0,88,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-6669,1928,-13574,0,88,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(188,-2284,-2256,-5222,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4688,-2256,-2225,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,767,-2924,1382,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-940,-2681,-730,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-899,-2681,657,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-682,-5391,684,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,704,-5391,-359,0,-1,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,63,-5391,-2485,0,-1,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2300,-5199,2486,0,-1,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1749,-4283,-78,0,-1,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,593,-2054,-130,0,-1,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1533,-1916,135,0,-1,0,0x4000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(180,-11475,1918,6837,0,-1,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-10992,-3532,2024,0,5,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(194,-11627,-3686,4038,0,5,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-11702,-5260,-3672,0,5,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(103,-11473,-5260,-4938,0,5,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(118,13043,-3365,11375,0,-62,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(118,-2088,-5061,235,0,-91,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(118,1037,-5061,2205,0,-91,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(118,1406,-2603,1990,0,-91,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(118,1489,-2603,-2056,0,-91,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,11372,17997,-11455,0,-91,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1742,16585,12601,0,-91,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-13469,15619,12807,0,-91,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(207,-12448,8337,4618,0,-180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-12448,8171,4618,0,-180,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-11733,8118,3457,0,-180,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-11781,7900,2271,0,-180,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-11857,7783,1304,0,-180,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-11642,7696,399,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-11316,7467,-346,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-10712,7467,-1168,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-10577,7389,-2256,0,-180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-10590,7207,-2258,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-11522,7207,-2959,0,-180,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-12043,7207,-4117,0,-180,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-12441,7207,-5433,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-12676,7330,-6325,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-9081,6801,-2201,0,-180,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-12754,7661,-8565,0,-180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-11959,8822,8818,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-11978,8607,7630,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-11896,8455,6581,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-12385,8455,5422,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(215,-1918,-3771,-2114,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3349,-5770,3084,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-13902,7765,-13902,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3811,1135,-11508,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2818,-5021,8944,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3831,2079,11427,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1686,4991,-5188,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11304,10559,1947,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-5033,-2562,-46,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,10130,-4693,-14487,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,3411,5494,-2191,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(188,5592,4857,-3963,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,7235,3615,-4482,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,7235,2346,-4482,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,12705,6177,-2561,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(84,11927,5468,-4995,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(180,11726,2455,-6445,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(103,12908,1031,-7818,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(0,11476,2279,-11486,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,8874,889,-11572,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(188,8421,-29,-13246,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,8792,-5402,-14390,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,7252,-5402,-13073,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,7612,-2715,-13321,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,1808,447,-13555,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1787,447,-9536,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5729,447,-13433,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5825,447,-9593,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(84,1931,360,-13716,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(0,-3854,1830,-11445,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1466,-257,-11878,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1083,-5186,-10075,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1762,-4781,-3973,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(215,66,-1871,-3291,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(180,-3697,-1871,-5216,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(84,-4064,-681,869,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(0,-13011,-765,3053,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4806,-648,5252,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5206,1492,4075,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4974,629,10074,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(103,-11088,11485,12480,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,-13291,9069,9857,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(223,-10240,9069,9840,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,11308,16105,3795,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,9829,16608,-182,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,11462,16608,3600,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(116,11597,16608,-3572,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(180,12715,15037,-9121,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(84,10146,15037,-8064,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(102,11614,1313,11459,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(102,-12710,1615,12309,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(102,-5226,-2342,-5171,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(180,8,15746,13189,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(188,1854,14368,9300,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,1887,14368,8196,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,1778,14368,6777,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,284,7300,-2161,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,617,7300,2466,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(215,2896,8412,-12,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3338,11023,1614,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,2783,12062,3677,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(120,1238,11987,3760,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(137,549,10414,-727,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2,7642,-226,0,0,0,0x960000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(120,-3360,6873,-437,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-3023,6073,-446,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-3760,5719,-433,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3643,5269,1567,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(194,-10,4969,1557,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,1052,2267,3035,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,1784,2164,2562,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,1075,2164,2758,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(188,-69,2064,2660,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,2430,2497,2053,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2434,2497,-306,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2691,2918,-2339,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,5197,1437,4103,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,12690,4448,-4333,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-13490,15026,8891,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(84,-11982,13266,8484,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(188,-12542,11824,10580,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,-14066,11878,13744,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-2820,-2042,10498,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-9942,-332,10539,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5001,-137,3169,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,6438,3550,8494,0,93,0,0x4e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,-10615,45,12720,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-662,-5104,-1993,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-598,7522,2102,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13168,1897,-10115,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5014,0,2515,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-9089,7075,-2215,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,16,5,6,0,0,0,11, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,32,0),
WARP_NODE(241,26,1,31,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
