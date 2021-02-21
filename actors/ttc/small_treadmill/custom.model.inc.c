#include "custom.model.inc.h"
Vtx VB_ttc_geo_0002A8_0x700fcb0[] = {
{{{ -229, 0, -306 }, 0, { 4510, -34 }, { 129, 0, 0, 255}}},
{{{ -229, -137, -306 }, 0, { 4510, 990 }, { 129, 0, 0, 255}}},
{{{ -229, -137, 308 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -229, 0, 308 }, 0, { 0, -34 }, { 129, 0, 0, 255}}},
{{{ 230, 0, 308 }, 0, { 0, -34 }, { 127, 0, 0, 255}}},
{{{ 230, -137, -306 }, 0, { 4510, 990 }, { 127, 0, 0, 255}}},
{{{ 230, 0, -306 }, 0, { 4510, -34 }, { 127, 0, 0, 255}}},
{{{ 230, -137, 308 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
};

Vtx VB_ttc_geo_0002A8_0x700fd30[] = {
{{{ -229, -137, 308 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -229, -35, 344 }, 0, { 334, 234 }, { 129, 0, 0, 255}}},
{{{ -229, 0, 308 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ 230, 0, 308 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 230, -35, 344 }, 0, { 334, 234 }, { 127, 0, 0, 255}}},
{{{ 230, -137, 344 }, 0, { 334, 990 }, { 84, 214, 84, 255}}},
{{{ 230, -137, 308 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 230, -137, -306 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 230, -137, -342 }, 0, { 334, 990 }, { 51, 153, 205, 255}}},
{{{ 230, -35, -342 }, 0, { 334, 234 }, { 127, 0, 0, 255}}},
{{{ 230, 0, -306 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ -229, -86, 344 }, 0, { 334, 612 }, { 0, 0, 127, 255}}},
{{{ -229, -137, 344 }, 0, { 334, 990 }, { 205, 153, 51, 255}}},
{{{ 230, -86, 344 }, 0, { 334, 612 }, { 0, 0, 127, 255}}},
{{{ -229, -137, -342 }, 0, { 334, 990 }, { 172, 214, 172, 255}}},
{{{ 230, -86, -342 }, 0, { 334, 612 }, { 0, 0, 129, 255}}},
};

Vtx VB_ttc_geo_0002A8_0x700fe30[] = {
{{{ -229, 0, -306 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -229, -35, -342 }, 0, { 334, 234 }, { 129, 0, 0, 255}}},
{{{ -229, -137, -342 }, 0, { 334, 990 }, { 172, 214, 172, 255}}},
{{{ -229, -137, -306 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -229, -86, -342 }, 0, { 334, 612 }, { 0, 0, 129, 255}}},
{{{ 230, -86, -342 }, 0, { 334, 612 }, { 0, 0, 129, 255}}},
};

Vtx VB_ttc_geo_0002A8_0x700fe90[] = {
{{{ 230, -137, -342 }, 0, { 0, 0 }, { 51, 153, 205, 255}}},
{{{ -229, -137, 344 }, 0, { 0, 0 }, { 205, 153, 51, 255}}},
{{{ -229, -137, -342 }, 0, { 0, 0 }, { 172, 214, 172, 255}}},
{{{ 230, -137, 344 }, 0, { 0, 0 }, { 84, 214, 84, 255}}},
};

Light_t Light_ttc_geo_0002A8_0x700fc88 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_ttc_geo_0002A8_0x700fca0 = {
{ 140, 140, 140}, 0, { 140, 140, 140}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_0002A8_0x700fc80 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Ambient_t Light_ttc_geo_0002A8_0x700fc98 = {
{70, 70, 70}, 0, {70, 70, 70}, 0
};

Gfx DL_ttc_geo_0002A8_0x700ffe8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(200, 255, 255, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_0002A8_0x700fed0),
gsSPDisplayList(DL_ttc_geo_0002A8_0x700ff28),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_ttc_geo_0002A8_0x700ffb8),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002A8_0x700fed0[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_0002A8__texture_09005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttc_geo_0002A8_0x700fc88.col, 1),
gsSPLight(&Light_ttc_geo_0002A8_0x700fc80.col, 2),
gsSPVertex(VB_ttc_geo_0002A8_0x700fcb0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002A8_0x700ff28[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_0002A8__texture_09006000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_0002A8_0x700fd30, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,5, 11, 12, 0),
gsSP2Triangles(5, 13, 11, 0,14, 15, 8, 0),
gsSP1Triangle(0, 12, 1, 0),
gsSPVertex(VB_ttc_geo_0002A8_0x700fe30, 6, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP1Triangle(2, 4, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002A8_0x700ffb8[] = {
gsSPLight(&Light_ttc_geo_0002A8_0x700fca0.col, 1),
gsSPLight(&Light_ttc_geo_0002A8_0x700fc98.col, 2),
gsSPVertex(VB_ttc_geo_0002A8_0x700fe90, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

