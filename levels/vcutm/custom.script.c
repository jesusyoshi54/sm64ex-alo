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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x16ebd10),
TERRAIN(col_vcutm_1_0xe00e3f0),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,2407,-2562,1604,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,570,1066,210,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5910,3152,180,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1062,-1282,-2181,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-819,0,-850,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,1753,-1740,-337,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3261,2370,124,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7969,-346,1906,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1958,3423,4098,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,1958,3423,3235,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,5453,3235,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,1707,3235,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,1707,4088,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,5453,4088,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,5453,4940,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,1707,4940,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1958,3423,4940,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,1945,688,5680,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,1945,688,5680,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,215,307,959,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,215,307,959,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-219,-1740,-332,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-219,-1740,-332,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-3351,-2366,1906,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-3351,-2366,1906,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,-1042,-141,2114,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-1042,-141,2114,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,2152,3324,153,0,0,0,0x6000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,1952,464,2732,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,2419,-2354,1248,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,633,-2082,-1934,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,29,-1739,-1939,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(180,-1298,-1402,-1966,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,1589,-2399,-1840,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3981,2704,142,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5912,2704,105,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,839,-1487,2170,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,839,-664,2170,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(206,-269,75,2504,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1955,847,1838,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(85,205,751,233,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,205,751,233,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7482,2704,146,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(192,198,751,-209,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(129,-7368,-1310,1906,0,0,45,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-6291,-1373,1906,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,22,1,6,0),
WARP_NODE(241,22,1,5,0),
RETURN()
};
