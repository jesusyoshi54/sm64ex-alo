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
#include "levels/cotmc/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_cotmc_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,62616,220,65516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,64156,240,740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,65176,300,65336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,360,200,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,400,256,61236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,300,620,60256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,65196,260,62916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,0,65086,58536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,900,260,61916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,0,65366,63876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,65516,65325,61596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,96,65465,20,720,123),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,200,65245,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,980,260,62106,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64996,65184,59596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65236,450,59296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65336,65136,58856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,250,450,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,540,65175,59196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,980,260,61726,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,65516,180,2060,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CAP_SWITCH, /*pos*/ 0,  363, -6144, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvCapSwitch),
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 0,  500, -7373, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 0,  500,  3584, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 0, -200, -7000, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_cotmc_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_9),
    JUMP_LINK(script_func_global_18),
    JUMP_LINK(script_func_global_1),

    AREA(/*index*/ 1, cotmc_geo_0001A0),
MACRO_OBJECTS(local_macro_objects_cotmc_1),
WARP_NODE(243,16,1,20,0),
WARP_NODE(241,6,3,102,0),
WARP_NODE(240,6,3,52,0),
WARP_NODE(10,28,1,10,0),
OBJECT_WITH_ACTS(0,0,500,3584,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,0,500,-7373,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(85,0,363,-6144,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,0,-200,-7000,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-4185,1020,-47,0,90,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ cotmc_seg7_collision_level),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_130),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -4185, 20, -47),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
