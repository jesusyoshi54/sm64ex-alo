#include "src/game/envfx_snow.h"

const GeoLayout TCube_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
	 GEO_ASM(0, geo_update_layer_transparency),
	 GEO_SWITCH_CASE(2, geo_switch_anim_state),
	 GEO_OPEN_NODE(),
		 GEO_DISPLAY_LIST(1, TCube_Cube_007_mesh_layer_1),
		 GEO_DISPLAY_LIST(5, TCube_Cube_007_mesh_layer_1),
	 GEO_CLOSE_NODE(),
	 GEO_DISPLAY_LIST(1, TCube_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};