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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom19627232_skybox_mio0SegmentRomStart,_SkyboxCustom19627232_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x12ddc10),
TERRAIN(col_wf_1_0xe012950),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-1114,11618,1138,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(223,-1140,11618,-570,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,750,11618,1020,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2760,11618,1080,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-870,11618,2790,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,720,15047,30,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2250,15047,3150,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-6360,15107,870,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-11278,15047,-908,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-13329,18637,-583,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-8859,15047,9532,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4136,15047,-6590,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,7593,15047,-6720,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,4970,15107,3168,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,5835,15107,9458,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,10022,18422,10242,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(192,9237,18422,10237,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(215,8511,18471,10210,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1256,15351,9706,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2022,15245,9683,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6356,15343,856,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4968,15343,3142,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-907,11246,-5213,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3153,10958,2137,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3021,10958,31,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1000,10958,-44,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,274,10958,2957,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-11515,16097,730,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2255,13946,1126,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-838,15844,1011,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,3782,15107,1268,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-11650,15107,-982,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,7548,15537,-709,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-805,15425,-5210,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-2806,12176,-565,0,40,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,-3049,13961,-855,0,40,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,1436,11450,3320,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-12719,16152,-1006,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12319,14889,11226,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1681,14369,8463,0,0,0,0xc0000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,6,1,21,0),
WARP_NODE(241,6,1,20,0),
RETURN()
};
