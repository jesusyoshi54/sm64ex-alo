const GeoLayout water_bomb_geo[]= {
GEO_CULLING_RADIUS(150),
GEO_OPEN_NODE(),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(5,DL_water_bomb_geo_0x5011000),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
const GeoLayout water_bomb_shadow_geo[]= {
GEO_CULLING_RADIUS(150),
GEO_OPEN_NODE(),
GEO_SHADOW(1,100,160),
GEO_CLOSE_NODE(),
GEO_END(),
};
