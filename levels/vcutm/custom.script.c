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
#include "levels/bbh/header.h"
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
AREA(1,Geo_vcutm_1_0x15f5870),
TERRAIN(col_vcutm_1_0xe0349d0),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,35,2550,1337,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,22,2640,1413,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(122,-983,2370,944,180,45,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-975,2370,-978,180,134,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,945,2370,948,180,315,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,957,2370,-979,180,225,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,9,3480,-1057,180,180,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,19,2910,2339,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,2496,-420,495,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(85,0,2550,0,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,14,2670,-1049,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3828,-1440,642,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-223,1350,65,0,270,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4163,-570,-786,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-3627,-720,-1544,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4263,-1129,144,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2774,690,-1549,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3165,1230,-753,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5018,1147,-10,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4106,-1132,1367,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4065,396,1347,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4156,1230,536,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,3544,-600,520,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,3380,25,521,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-981,3025,-966,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,960,3025,949,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,960,3025,-966,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-981,3025,949,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(212,4533,-58,2811,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(217,-3664,-330,1701,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(100,4463,60,60,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(0,4524,-100,-2507,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(207,-2661,1350,53,0,90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-2663,1625,429,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2663,1985,628,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(212,-3466,787,-14,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,27,2640,1379,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(187,-1031,2241,-967,270,0,90,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,18,1,240,0),
WARP_NODE(241,18,1,241,0),
RETURN()
};
