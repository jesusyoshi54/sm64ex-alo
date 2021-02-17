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
#include "levels/totwc/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_totwc_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,0,63776,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,32,0,64536,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,62036,65336,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,4500,1400,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,32,0,600,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65436,800,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62036,0,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,100,64736,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4500,1600,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,100,800,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62036,0,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65436,64736,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4500,1600,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2913,1200,62595,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3954,1400,63719,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1554,1000,61856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62879,400,62794,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64051,600,61908,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62305,200,64022,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63339,65136,2142,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62480,65336,1310,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64392,64936,2742,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3680,1800,1439,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2080,2000,2080,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,920,2200,1920,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65496,2400,1520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64576,2600,1040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63776,2800,600,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CAP_SWITCH, /*pos*/   0, -2047, 10, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCapSwitch),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 800, -1700,  0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_totwc_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),

    AREA(/*index*/ 1, totwc_geo_000188),
MACRO_OBJECTS(local_macro_objects_totwc_1),
WARP_NODE(241,6,1,35,0),
WARP_NODE(240,6,1,38,0),
WARP_NODE(243,6,1,32,0),
WARP_NODE(10,29,1,10,0),
OBJECT_WITH_ACTS(85,-273,-2047,-123,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(181,800,-1630,0,0,0,0,0x0, bhvBetaTrampolineTop,31),
OBJECT_WITH_ACTS(0,-4095,2935,0,0,90,0,0xa0000, bhvFlyingWarp,31),
        TERRAIN(/*terrainData*/ totwc_seg7_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_131),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -4095, 2935, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
