#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, -4755, -13, 2020, castle_grounds_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(5, -4755, -13, 2020, castle_grounds_dl_Cube_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, -3691, 2606, 1144, castle_grounds_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1702, 2275, -1511, castle_grounds_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -3394, 1022, -362, castle_grounds_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2570, 1022, 2298, castle_grounds_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -730, 2275, 2219, castle_grounds_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -4031, 1993, 152, castle_grounds_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -3378, 1993, 2206, castle_grounds_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1766, 1226, 1812, castle_grounds_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2498, 1226, -998, castle_grounds_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 312, 693, 2192, castle_grounds_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -639, 693, -2285, castle_grounds_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, -639, 693, -2285, castle_grounds_dl_Cube_013_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(4, -1766, 1226, 1812, castle_grounds_dl_Cube_014_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(4, -2498, 1226, -998, castle_grounds_dl_Cube_016_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(4, 312, 693, 2192, castle_grounds_dl_Cube_017_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(4, 803, -194, -2558, castle_grounds_dl_Cube_019_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, 803, -194, -2558, castle_grounds_dl_Cube_020_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, castle_grounds_dl_Cube_020_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -111, 0, castle_grounds_dl_Cylinder_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, castle_grounds_dl_Cylinder_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2943, -194, 984, castle_grounds_dl_Cylinder_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -111, 0, castle_grounds_dl_Cylinder_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -111, 0, castle_grounds_dl_Cylinder_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2952, 746, 986, castle_grounds_dl_Dorrie_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -692, 0, castle_grounds_dl_Effect_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2191, 317, -1568, castle_grounds_dl_inverted_pyramid_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2674, 317, 126, castle_grounds_dl_inverted_pyramid_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 135, 187, -2827, castle_grounds_dl_NurbsPath_012_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1802, -125, 2924, castle_grounds_dl_Volcano_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(5, 0, -111, 0, castle_grounds_dl_Water_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -50, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(4, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, castle_grounds_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
