#include "src/game/envfx_snow.h"

const GeoLayout Test[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(5, Test_BezierCircle_mesh_layer_5),
		GEO_DISPLAY_LIST(1, Test_Plane_001_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_ASM(0,geo_TextureCall),
			GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, Test_Plane_002_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, Test_Text_mesh_layer_1),
		GEO_DISPLAY_LIST(1, Test_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, Test_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
