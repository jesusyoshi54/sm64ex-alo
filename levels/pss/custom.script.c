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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x1479b20),
TERRAIN(col_pss_1_0xe036e50),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,1058,2350,1366,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,830,2760,1274,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,794,2760,1288,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(122,12,5610,0,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,-347,-4024,-498,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,16,-600,3722,180,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,552,930,-4378,180,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-324,-4410,2779,180,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-324,-4410,-2700,180,180,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-318,-3750,512,180,90,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-2773,2820,593,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-2784,692,595,0,0,0,0xa80000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(215,-2225,-2010,670,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1613,-1050,-284,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3518,-265,374,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4052,-690,-1075,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4149,390,-1286,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1540,900,-583,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4117,990,197,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3517,1020,-610,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(217,-2790,1590,1068,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-983,2350,1200,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-1079,2350,-819,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-1384,-4025,671,0,0,0,0x1140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,184,2725,1409,0,0,0,0x1150000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(212,977,4140,258,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,749,686,5433,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,556,-90,-3994,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-339,-1500,2778,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-339,360,-2757,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,-272,1350,-4079,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,27,0,4173,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,89,-4050,-2121,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-751,-3930,2212,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,101,-4500,515,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1308,4570,657,0,0,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,1565,-2950,-163,0,0,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1268,-4050,550,0,180,0,0x480000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(187,-1132,4210,1377,90,0,90,0x0, bhvPenguinRaceShortcutCheck,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(20,27,1,21,0),
WARP_NODE(21,27,1,20,0),
WARP_NODE(240,27,1,240,0),
WARP_NODE(241,27,1,241,0),
RETURN()
};
