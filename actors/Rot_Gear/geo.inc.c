#include "src/game/envfx_snow.h"

const GeoLayout Rot_Gear[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, Rot_Gear_Metal_Structure_004_mesh_layer_1),
		GEO_DISPLAY_LIST(1, Rot_Gear_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
