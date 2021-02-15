const GeoLayout yellow_coin_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_yellow_coin_geo_0x30076d0),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout Geo_yellow_coin_no_shadow_geo_0x218edc[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_yellow_coin_geo_0x30076d0),
GEO_CLOSE_NODE(),
GEO_END(),
};
const GeoLayout blue_coin_geo[]= {
GEO_SHADOW(0,180,80),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_blue_coin_geo_0x3007720),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout Geo_blue_coin_no_shadow_geo_0x218fa0[]= {
GEO_SHADOW(0,180,80),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_blue_coin_geo_0x3007720),
GEO_CLOSE_NODE(),
GEO_END(),
};
const GeoLayout red_coin_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x3007190),
GEO_CLOSE_NODE(),
GEO_END(),
};
const GeoLayout red_coin_no_shadow_geo[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(8, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_DISPLAY_LIST(4,DL_red_coin_no_shadow_geo_0x80263e8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
const GeoLayout yellow_coin_no_shadow_geo[]= {
GEO_BRANCH(1,Geo_yellow_coin_no_shadow_geo_0x218edc),
};
const GeoLayout blue_coin_no_shadow_geo[]= {
GEO_BRANCH(1,Geo_blue_coin_no_shadow_geo_0x218fa0),
};