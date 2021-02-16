#include "custom.model.inc.h"
Vtx VB_lll_geo_000AD8_0x7017938[] = {
{{{ -127, 0, -127 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ -127, 307, -127 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 128, 307, -127 }, 0, { 138, 0 }, { 0, 0, 129, 255}}},
{{{ 128, 0, -127 }, 0, { 138, 990 }, { 0, 0, 129, 255}}},
{{{ -127, 0, 128 }, 0, { 820, 990 }, { 129, 0, 0, 255}}},
{{{ -127, 307, 128 }, 0, { 820, 0 }, { 129, 0, 0, 255}}},
{{{ -127, 307, -127 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -127, 0, -127 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ 128, 0, -127 }, 0, { 820, 990 }, { 127, 0, 0, 255}}},
{{{ 128, 307, 128 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 128, 0, 128 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 128, 307, -127 }, 0, { 820, 0 }, { 127, 0, 0, 255}}},
};

Vtx VB_lll_geo_000AD8_0x70179f8[] = {
{{{ -127, 307, -127 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 128, 307, 128 }, 0, { 820, 820 }, { 0, 127, 0, 255}}},
{{{ 128, 307, -127 }, 0, { 820, 0 }, { 0, 127, 0, 255}}},
{{{ -127, 307, 128 }, 0, { 0, 820 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000AD8_0x7017a38[] = {
{{{ 128, 0, 128 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ 128, 307, 128 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 307, 128 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 0, 128 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
};

Light_t Light_lll_geo_000AD8_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000AD8_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000AD8_0x7017b50[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000AD8_0x7017a78),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000AD8_0x7017ae0),
gsSPDisplayList(DL_lll_geo_000AD8_0x7017b18),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000AD8_0x7017a78[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000AD8__texture_09006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000AD8_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000AD8_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000AD8_0x7017938, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000AD8_0x7017ae0[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000AD8__texture_09006000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000AD8_0x70179f8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000AD8_0x7017b18[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000AD8__texture_09008800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000AD8_0x7017a38, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

