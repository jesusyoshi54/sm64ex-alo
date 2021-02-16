#include "custom.model.inc.h"
Vtx VB_sl_geo_000360_0x700a808[] = {
{{{ -101, 0, 102 }, 0, { 734, 734 }, { 0, 127, 0, 255}}},
{{{ 102, 0, 102 }, 0, { 734, 224 }, { 0, 127, 0, 255}}},
{{{ -101, 0, -101 }, 0, { 224, 734 }, { 0, 127, 0, 255}}},
{{{ 102, 0, -101 }, 0, { 224, 224 }, { 0, 127, 0, 255}}},
};

Light_t Light_sl_geo_000360_0x700a7f8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_sl_geo_000360_0x700a7f0 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_sl_geo_000360_0x700a890[] = {
gsDPPipeSync(),
gsDPSetEnvColor(255, 255, 255, 100),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_sl_geo_000360_0x700a848),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

Gfx DL_sl_geo_000360_0x700a848[] = {
gsDPSetTextureImage(0, 2, 1, sl_geo_000360__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_sl_geo_000360_0x700a7f8.col, 1),
gsSPLight(&Light_sl_geo_000360_0x700a7f0.col, 2),
gsSPVertex(VB_sl_geo_000360_0x700a808, 4, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSPEndDisplayList(),
};

