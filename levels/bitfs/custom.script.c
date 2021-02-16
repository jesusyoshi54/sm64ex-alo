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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x166e280),
TERRAIN(col_bitfs_1_0xe021cc0),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-455,0,228,0,181,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0xfc0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(137,-16,150,1620,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1410,150,-18,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1259,300,11,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-18,-224,-1543,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-15,-425,-1855,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15,-425,-2055,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15,-425,-2255,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15,-425,-3200,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15,-425,-3400,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15,-425,-3600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-15,-425,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-215,-425,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-415,-425,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-615,-425,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-815,-425,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-815,-225,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-815,-25,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1500,235,-3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-500,2790,0,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1495,510,-3797,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2505,1110,521,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5,1440,3404,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3416,1380,-2,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3429,5250,-3405,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3310,4290,3529,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3147,2340,-4009,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,985,3720,3344,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,3366,3401,3958,0,180,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,3733,3396,2064,0,270,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(180,1753,2652,759,0,270,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1758,2652,1253,0,270,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2502,2652,1000,0,270,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,1971,4088,3351,0,270,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-2874,4080,3515,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-3522,510,648,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-2433,-180,5,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2502,4020,-2506,0,225,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,3147,2190,-3392,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(212,1205,2045,-1677,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(192,-3492,3076,1867,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3221,3076,1606,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,0,60,0,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(187,982,3547,2065,90,0,0,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,21,1,11,0),
WARP_NODE(241,6,2,182,0),
RETURN()
};
