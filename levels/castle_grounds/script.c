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
#include "levels/castle_grounds/header.h"

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group10_mio0SegmentRomStart, _group10_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BITDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x5, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x2B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x2C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x3B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x3C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 0x01, 0x4C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x4C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 1, 0, 0, 0, 0, 0x000a0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, 2221, 1, 721, 0, 0, 0, 0x002B0000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, 2221, 1, 721, 0, 0, 0, 0x002C0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_NONE, 2864, 1, -934, 0, 0, 0, 0x001B0000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, 2864, 1, -934, 0, 0, 0, 0x001C0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_NONE, 1527, 1, -2093, 0, 0, 0, 0x003C0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_NONE, 1527, 1, -2093, 0, 0, 0, 0x003B0000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, 0, 185, -6, 0, 0, 0, 0x004C0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_NONE, -3116, -125, 2303, 0, 142, 0, 0x00000000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3312, -120, 2148, 0, 142, 0, 0x00010000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3507, -120, 1993, 0, 142, 0, 0x00020000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3794, -120, 1578, 0, 108, 0, 0x00030000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3889, -120, 1283, 0, 108, 0, 0x00040000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3979, -120, 1004, 0, 108, 0, 0x00050000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3976, -120, 458, 0, 78, 0, 0x00060000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3921, -120, 179, 0, 78, 0, 0x00070000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3865, -120, -92, 0, 78, 0, 0x00080000, bhvSignOnWall),
		OBJECT(MODEL_NONE, 1, 1737, -1, 0, 0, 0, 0x00040000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -3491, 2656, 1084, 0, 0, 0, 0x00050000, bhvFadingWarp),
		OBJECT(249, -3491, 2637, 1084, 0, 0, 0, 0x00050000, bhvWarpRing),
		OBJECT(249, 1, 1718, -1, 0, 0, 0, 0x00050000, bhvWarpRing),
		OBJECT(MODEL_THI_WARP_PIPE, 2500, -194, 815, 0, 0, 0, 0x00020000, bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 3266, -194, -1064, 0, 0, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 1662, -194, -2286, 0, 0, 0, 0x00030000, bhvWarpPipe),
		OBJECT(250, -3437, 1122, -625, 0, 0, 0, 0x000a0000, bhvLargeFlame),
		OBJECT(250, -2506, 1122, 2567, 0, 0, 0, 0x000a0000, bhvLargeFlame),
		OBJECT(250, -1835, 2426, -1734, 0, 0, 0, 0x000a0000, bhvLargeFlame),
		OBJECT(250, -752, 2426, 2501, 0, 0, 0, 0x000a0000, bhvLargeFlame),
		OBJECT(250, -3654, 2111, 2287, 0, 0, 0, 0x000a0000, bhvLargeFlame),
		OBJECT(250, -4307, 2111, 216, 0, 0, 0, 0x000a0000, bhvLargeFlame),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x03),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
