#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/sl/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_sl_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,32,4086,1024,400,86),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1285,2210,385,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1728,2560,64865,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1371,2188,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1814,3174,114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,28,3328,1885,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65308,3482,1742,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,4483,821,1168,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,62084,1110,62172,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,5422,1065,64248,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,59003,2048,63092,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4750,1061,60306,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,416,1050,61014,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58976,2040,60456,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58776,2040,64176,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58656,1857,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61325,1092,60813,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59265,1390,4764,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65007,1050,60207,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61776,1120,1240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,3840,1240,60256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,62096,1400,65496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,400,1060,5860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,880,1080,4860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,1400,1080,3860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,3400,1660,62616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,62365,1075,60771,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61295,1009,61702,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,60086,1300,5900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4060,900,62596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61440,1125,3062,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61000,1125,3782,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,23,64876,2120,1340,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64016,1040,940,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64196,1280,1020,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64356,1520,1120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,104,64701,1125,61680,61),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,64,60486,1020,6026,16),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,2766,1522,61903,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,48,61936,1024,64736,148),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moneybag,0,2440,1024,4840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moneybag,0,63136,1177,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,62156,1360,61396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_4,0,60836,1300,5850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2909,1024,4245,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3418,1024,3554,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,5420,0,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_sl_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1740,0,900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1440,0,900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1140,0,900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,1760,0,200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,1600,80,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,1660,300,63816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,64816,300,63796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,64136,0,63796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,65516,0,960,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,320,0,64316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,64676,40,2040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,800,60,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,1500,0,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,32,1500,100,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,32,1500,200,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,32,1500,300,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,1700,20,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,65416,300,63796,0),
MACRO_OBJECT_END(),
};
static const LevelScript script_func_local_1[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  700, 4500,  690, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 4350, 1350, 4350, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 5000, 1200,    0, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  977, 1024, 2075, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnowMoundSpawn),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_PENGUIN,            /*pos*/ 1715, 3328,   518, /*angle*/ 0, -51, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSLWalkingPenguin),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  700, 3428,   700, /*angle*/ 0,  30, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSLSnowmanWind),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  480, 2300,  1370, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvIgloo),
    OBJECT(/*model*/ MODEL_BIG_CHILL_BULLY,    /*pos*/  315, 1331, -4852, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvBigChillBully),
    OBJECT(/*model*/ MODEL_MR_BLIZZARD_HIDDEN, /*pos*/ 2954,  970,   750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvMrBlizzard),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 0, 500, 1000, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_sl_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group7_geoSegmentRomStart,  _group7_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group16_geoSegmentRomStart,  _group16_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_8),
    JUMP_LINK(script_func_global_17),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE,      sl_geo_000390),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE,        sl_geo_000360),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK,  sl_geo_000378),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE,          snow_tree_geo),

    AREA(/*index*/ 1, sl_geo_0003A8),
MACRO_OBJECTS(local_macro_objects_sl_1),
WARP_NODE(241,6,2,104,0),
WARP_NODE(240,6,2,54,0),
WARP_NODE(14,10,1,13,0),
WARP_NODE(13,10,1,14,0),
WARP_NODE(12,10,2,10,0),
WARP_NODE(11,10,1,11,0),
WARP_NODE(10,10,1,10,0),
OBJECT_WITH_ACTS(85,2954,970,750,0,0,0,0x20000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(101,315,1331,-4852,0,0,0,0x1000000, bhvBigChillBully,31),
OBJECT_WITH_ACTS(0,480,2300,1370,0,0,0,0x0, bhvIgloo,31),
OBJECT_WITH_ACTS(0,700,3428,700,0,30,0,0x0, bhvSLSnowmanWind,31),
OBJECT_WITH_ACTS(87,1715,3328,518,0,-51,0,0x0, bhvSLWalkingPenguin,31),
OBJECT_WITH_ACTS(0,977,1024,2075,0,0,0,0x0, bhvSnowMoundSpawn,31),
OBJECT_WITH_ACTS(0,5000,1200,0,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,4350,1350,4350,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(122,700,4500,690,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,-3698,1024,-1237,0,6,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,5468,1056,-5400,0,-20,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,569,2150,1336,0,0,0,0x60c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,257,2150,1399,0,290,0,0xb0000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(0,5541,2024,443,0,270,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ sl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),
MACRO_OBJECTS(local_macro_objects_sl_2),
WARP_NODE(241,6,2,104,0),
WARP_NODE(240,6,2,54,0),
WARP_NODE(11,10,1,11,0),
WARP_NODE(10,10,2,10,0),
OBJECT_WITH_ACTS(122,0,500,1000,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(0,0,0,3277,0,0,0,0x140b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,0,2867,0,180,0,0xa0000, bhvInstantActiveWarp,31),

    AREA(/*index*/ 2, sl_geo_000484),
        TERRAIN(/*terrainData*/ sl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ 5541, 1024, 443),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
