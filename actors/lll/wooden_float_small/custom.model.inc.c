#include "custom.model.inc.h"
Vtx VB_lll_geo_000B50_0x7018aa0[] = {
{{{ 154, 0, 384 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ 154, 154, 384 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -153, 154, 384 }, 0, { -1052, 0 }, { 0, 0, 127, 255}}},
{{{ -153, 0, 384 }, 0, { -1052, 990 }, { 0, 0, 127, 255}}},
{{{ -153, 0, -383 }, 0, { 2012, 990 }, { 0, 0, 129, 255}}},
{{{ 154, 154, -383 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 154, 0, -383 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ -153, 154, -383 }, 0, { 2012, 0 }, { 0, 0, 129, 255}}},
};

Vtx VB_lll_geo_000B50_0x7018b20[] = {
{{{ 154, 154, -383 }, 0, { 990, -1564 }, { 0, 127, 0, 255}}},
{{{ -153, 154, -383 }, 0, { 0, -1564 }, { 0, 127, 0, 255}}},
{{{ -153, 154, 384 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 154, 154, 384 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 154, 0, -383 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 154, 154, -383 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 154, 154, 384 }, 0, { -4118, 0 }, { 127, 0, 0, 255}}},
{{{ 154, 0, 384 }, 0, { -4118, 990 }, { 127, 0, 0, 255}}},
{{{ -153, 0, 384 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -153, 154, -383 }, 0, { -4118, 0 }, { 129, 0, 0, 255}}},
{{{ -153, 0, -383 }, 0, { -4118, 990 }, { 129, 0, 0, 255}}},
{{{ -153, 154, 384 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
};

Light_t Light_lll_geo_000B50_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000B50_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000B50_0x7018c90[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B50_0x7018be0),
gsSPDisplayList(DL_lll_geo_000B50_0x7018c38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B50_0x7018be0[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B50__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000B50_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000B50_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000B50_0x7018aa0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B50_0x7018c38[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B50__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B50_0x7018b20, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

