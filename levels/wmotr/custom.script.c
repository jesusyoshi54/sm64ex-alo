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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x14bf390),
TERRAIN(col_wmotr_1_0xe034ce0),
SET_BACKGROUND_MUSIC(0,24),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-1678,2350,-527,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-2089,2580,-562,0,270,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2082,2580,-553,0,270,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(122,1304,3930,683,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1795,-1740,-557,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1252,-3780,-89,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-994,-3870,23,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1020,-4560,1109,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1255,-3060,-717,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,277,-3210,-1360,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1233,-4170,1354,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,848,-4170,-318,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,843,-3750,-723,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,319,-3600,1378,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,-102,-2659,20,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-983,-2837,-1510,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-11,-4009,1377,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,600,-4009,1377,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-1660,2010,83,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,236,2700,-704,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,245,4740,-988,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,245,4740,2051,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(137,264,4890,2756,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,264,4890,-2612,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,552,5010,557,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-376,2610,478,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-376,2538,399,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,2350,2500,-4,0,270,0,0x330000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(220,2608,3060,-378,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,2519,3060,718,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-586,-3060,-808,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,831,-3810,423,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,239,4660,-29,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,239,4660,1120,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-693,2660,-711,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,-2038,2350,389,0,180,0,0x490000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-1920,2350,742,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(187,148,2475,520,90,0,90,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,6,2,10,0),
WARP_NODE(240,31,1,240,0),
WARP_NODE(241,31,1,241,0),
RETURN()
};
