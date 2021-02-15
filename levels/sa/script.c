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
#include "levels/sa/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_sa_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63136,60929,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63136,60929,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2400,60929,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2400,60929,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,63336,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64036,63336,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,63336,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1500,63336,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,1927,62627,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,32,0,63136,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,64036,63136,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,32,0,63136,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,1500,63136,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,0,62036,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,0,61736,0,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,0,62036,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,64536,61456,63796,0),
MACRO_OBJECT_END(),
};
static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1000, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLargeFishGroup),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1000, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvLargeFishGroup),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -4250, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_sa_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),

    AREA(/*index*/ 1, sa_geo_000170),
MACRO_OBJECTS(local_macro_objects_sa_1),
WARP_NODE(241,6,1,40,0),
WARP_NODE(240,6,1,39,0),
WARP_NODE(10,20,1,10,0),
OBJECT_WITH_ACTS(0,0,-4250,0,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,0,-1000,0,0,0,0,0x20000, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,0,-1000,0,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,0,-1535,0,0,90,0,0xa0000, bhvSwimmingWarp,31),
        TERRAIN(/*terrainData*/ sa_seg7_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ (SEQ_LEVEL_WATER | SEQ_VARIATION)),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ 0, -1535, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
