const GeoLayout breakable_box_geo[]= {
GEO_CULLING_RADIUS(500),
GEO_OPEN_NODE(),
GEO_SHADOW(10,180,240),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(2, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_breakable_box_geo_0x8012d20),
GEO_DISPLAY_LIST(1,DL_breakable_box_geo_0x8012d48),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
