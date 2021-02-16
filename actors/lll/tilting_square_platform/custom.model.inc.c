#include "custom.model.inc.h"
Vtx VB_lll_geo_000BF8_0x701a080[] = {
{{{ 0, 0, 0 }, 0, { 480, 478 }, { 255, 0, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 0, 990 }, { 255, 0, 0, 255}}},
{{{ 307, 307, -306 }, 0, { 990, 990 }, { 255, 0, 0, 255}}},
{{{ 307, 307, 307 }, 0, { 990, 0 }, { 255, 0, 0, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 0 }, { 255, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 480, 478 }, { 200, 0, 0, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 0 }, { 200, 0, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 0, 990 }, { 200, 0, 0, 255}}},
{{{ 307, 307, -306 }, 0, { 990, 990 }, { 200, 0, 0, 255}}},
{{{ 307, 307, 307 }, 0, { 990, 0 }, { 200, 0, 0, 255}}},
};

Vtx VB_lll_geo_000BF8_0x701a120[] = {
{{{ 307, 307, 307 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 307, 307, -306 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
};

Light_t Light_lll_geo_000BF8_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000BF8_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000BF8_0x701a1f0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000BF8_0x701a160),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING),
gsSPDisplayList(DL_lll_geo_000BF8_0x701a1a8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000BF8_0x701a160[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000BF8__texture_09001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000BF8_0x701a080, 10, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 4, 0),
gsSP2Triangles(5, 6, 7, 0,5, 8, 9, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000BF8_0x701a1a8[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000BF8__texture_09004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000BF8_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000BF8_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000BF8_0x701a120, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

