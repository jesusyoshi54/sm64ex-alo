#include "src/game/envfx_snow.h"

const GeoLayout warp_ring[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(5, warp_ring_Cylinder_006_mesh_layer_5),
		GEO_DISPLAY_LIST(5, warp_ring_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
