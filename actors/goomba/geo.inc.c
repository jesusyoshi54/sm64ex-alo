// 0x0F0006E4
const GeoLayout goomba_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, DL_goomba_geo_0x801d760),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_BILLBOARD(),
               GEO_OPEN_NODE(),
                  GEO_DISPLAY_LIST(LAYER_ALPHA, DL_goomba_geo_0x801b690),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_OPEN_NODE(),
               GEO_SWITCH_CASE(2, geo_switch_anim_state),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 48, 0, 0, DL_goomba_geo_0x801afd0),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 48, 0, 0, DL_goomba_geo_0x801afd0),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -60, -16, 45, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, DL_goomba_geo_0x801ce20),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -60, -16, -45, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, DL_goomba_geo_0x801cf78),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
