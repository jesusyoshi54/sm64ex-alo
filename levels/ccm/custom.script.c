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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ccm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom21626560_skybox_mio0SegmentRomStart,_SkyboxCustom21626560_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x1361700),
TERRAIN(col_ccm_1_0xe0e5ff0),
SET_BACKGROUND_MUSIC(0,50),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,-1613,-6146,3260,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(129,-10567,-8955,27,0,46,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(89,-10567,-8955,27,0,46,0,0x0, bhvFlyingBookend,31),
OBJECT_WITH_ACTS(89,-3437,-5925,10703,0,0,0,0x0, bhvFlyingBookend,31),
OBJECT_WITH_ACTS(129,-3435,-6071,10691,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(86,-3020,-7300,-6580,0,0,0,0x0, bhvHauntedChair,31),
OBJECT_WITH_ACTS(86,-2330,-6521,9831,0,10,0,0x0, bhvHauntedChair,31),
OBJECT_WITH_ACTS(86,-2187,-6655,8986,0,10,0,0x0, bhvHauntedChair,31),
OBJECT_WITH_ACTS(101,-1626,-7641,7549,0,10,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(100,-1489,-7531,-820,0,10,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-1599,-8164,453,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-721,-8164,1830,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(0,-3364,-11193,-3089,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,-5576,-11193,9575,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,-721,-11193,4635,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(194,-1568,-7860,6742,9,-10,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(116,-7065,-5221,14057,9,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,3660,-9721,5166,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4713,-9721,-882,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(116,-15810,-3986,4417,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,-10545,-6241,4324,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-8247,-8152,6866,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(87,-3028,-7203,-7074,0,0,0,0x0, bhvMadPiano,31),
OBJECT_WITH_ACTS(129,-1395,-8372,-11871,40,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-1393,-8371,-12224,40,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(101,-4443,2763,-14995,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-1413,2763,-15034,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(206,-3630,912,-16218,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-2170,912,-16211,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(0,-2185,816,-13689,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-3593,816,-13662,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-2882,-2375,-13694,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2882,-4682,-13694,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2882,-7421,-13694,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-1160,-8833,-13023,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-1416,-8441,-11523,40,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-1458,-8494,-11171,40,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,-6852,-13647,17518,0,-17,0,0x6080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-2269,-7275,-6997,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2904,2611,-13930,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-12631,-9182,-2064,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,16798,-5229,5543,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(102,-16021,-4230,-2415,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1617,0,2853,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(129,16807,-6031,8041,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(180,13191,-5220,13933,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(86,13658,-5179,11542,0,0,0,0x0, bhvHauntedChair,31),
OBJECT_WITH_ACTS(86,12106,-6449,15007,0,0,0,0x0, bhvHauntedChair,31),
OBJECT_WITH_ACTS(0,8512,-6987,16522,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7377,-7029,15882,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,5158,-5099,15469,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-699,-5854,13133,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-4311,-5504,13402,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-3794,-5808,11986,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(180,261,-5594,13787,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1747,-5594,13262,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(100,-12885,-5346,10615,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(116,-12017,-5076,11211,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(116,-16458,-4016,4377,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(116,-16674,-3588,1208,0,0,0,0x0, bhvTripletButterfly,31),
OBJECT_WITH_ACTS(116,-16713,-3543,349,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(116,-16707,-3543,2112,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(216,-14827,-5110,5016,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(116,-10173,-5301,12376,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(216,-15787,-3518,-136,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(100,-13226,-5301,9227,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(116,-11479,-5301,12464,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-9390,-5301,13058,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(100,-8005,-5301,13134,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(100,-6059,-5786,10329,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-4825,-5944,8247,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(223,565,-7916,1765,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-3529,-7916,1736,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(100,-11666,-4445,-752,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-11581,-4208,-1323,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(188,-10040,-7330,833,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-9468,-7330,372,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8003,-8130,1204,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(84,-7656,-8117,-584,0,0,0,0x95000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(122,-16019,-3652,-2110,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(124,7729,-6698,16725,0,16,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,7242,-5796,16922,0,-23,0,0x3f0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,7816,-8240,16955,0,25,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-6067,-8307,7076,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(223,-4113,-9614,6826,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(101,-3239,-7935,4723,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(129,-10854,-8577,-238,0,47,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(187,-6918,-14104,17807,0,-17,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(101,-12644,-9479,-2062,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(100,3972,-9569,6881,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-2452,-7281,-5887,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(206,-5607,-6680,-5348,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(116,-5351,-5624,-4462,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,7047,26993,14970,0,22,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(187,-7366,-5585,18432,0,68,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(187,-7564,-5616,17641,0,68,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(187,-7798,-5541,17001,0,15,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(187,-7470,-5652,15885,0,-15,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(187,-7363,-5564,14957,0,184,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-7083,-5472,14042,0,184,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,341,4,0,0,0,0,&VB_ccm_1_0xe0641d0[9], editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,4,0,0,0,0,&VB_ccm_1_0xe06ed60[14], editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,30,0),
WARP_NODE(241,16,1,31,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
