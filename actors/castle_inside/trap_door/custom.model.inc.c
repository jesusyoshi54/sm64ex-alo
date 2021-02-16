#include "custom.model.inc.h"
Vtx VB_castle_geo_000F18_0x703bac8[] = {
{{{ 358, 0, 307 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 358, -101, 307 }, 0, { 0, 480 }, { 127, 0, 0, 255}}},
{{{ 358, -101, -306 }, 0, { 3034, 480 }, { 127, 0, 0, 255}}},
{{{ 358, 0, -306 }, 0, { 1756, 0 }, { 0, 0, 129, 255}}},
{{{ 358, -101, -306 }, 0, { 1756, 478 }, { 0, 0, 129, 255}}},
{{{ 0, -101, -306 }, 0, { 0, 478 }, { 0, 0, 129, 255}}},
{{{ 0, 0, -306 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 0, 0, -306 }, 0, { 3034, 0 }, { 129, 0, 0, 255}}},
{{{ 0, -101, -306 }, 0, { 3034, 480 }, { 129, 0, 0, 255}}},
{{{ 0, -101, 307 }, 0, { 0, 480 }, { 129, 0, 0, 255}}},
{{{ 0, 0, 307 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ 0, 0, 307 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ 358, -101, 307 }, 0, { 1756, 478 }, { 0, 0, 127, 255}}},
{{{ 358, 0, 307 }, 0, { 1756, 0 }, { 0, 0, 127, 255}}},
{{{ 0, -101, 307 }, 0, { 0, 478 }, { 0, 0, 127, 255}}},
};

Vtx VB_castle_geo_000F18_0x703bbb8[] = {
{{{ 358, 0, -306 }, 0, { 1756, -2076 }, { 0, 127, 0, 255}}},
{{{ 0, 0, 307 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 358, 0, 307 }, 0, { 1756, 990 }, { 0, 127, 0, 255}}},
{{{ 358, 0, 307 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 358, -101, -306 }, 0, { 3034, 480 }, { 127, 0, 0, 255}}},
{{{ 358, 0, -306 }, 0, { 3034, 0 }, { 127, 0, 0, 255}}},
{{{ 0, 0, -306 }, 0, { 0, -2076 }, { 0, 127, 0, 255}}},
};

Light_t Light_castle_geo_000F18_0x703bab8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_castle_geo_000F18_0x703bab0 = {
{95, 95, 95}, 0, {95, 95, 95}, 0
};

Gfx DL_castle_geo_000F18_0x703bcb8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_castle_geo_000F18_0x703bc28),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_castle_geo_000F18_0x703bc28[] = {
gsDPSetTextureImage(0, 2, 1, castle_geo_000F18__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_castle_geo_000F18_0x703bab8.col, 1),
gsSPLight(&Light_castle_geo_000F18_0x703bab0.col, 2),
gsSPVertex(VB_castle_geo_000F18_0x703bac8, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 14, 12, 0),
gsSPVertex(VB_castle_geo_000F18_0x703bbb8, 7, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(0, 6, 1, 0),
gsSPEndDisplayList(),
};

