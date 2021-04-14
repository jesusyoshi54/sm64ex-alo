#include "src/game/envfx_snow.h"

const GeoLayout Mesh_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, Mesh_Cube_085_mesh_layer_1),
		GEO_DISPLAY_LIST(4, Mesh_Cube_085_mesh_layer_4),
		GEO_DISPLAY_LIST(4, Mesh_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, Mesh_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
