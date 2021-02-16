#include "custom.model.inc.h"
Vtx VB_lll_geo_000B68_0x7018d08[] = {
{{{ 768, 0, 384 }, 0, { 10188, 990 }, { 0, 0, 127, 255}}},
{{{ 768, 154, 384 }, 0, { 10188, 0 }, { 0, 0, 127, 255}}},
{{{ -767, 154, 384 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -767, 0, 384 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ -767, 0, -383 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ 768, 154, -383 }, 0, { -9228, 0 }, { 0, 0, 129, 255}}},
{{{ 768, 0, -383 }, 0, { -9228, 990 }, { 0, 0, 129, 255}}},
{{{ -767, 154, -383 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
};

Vtx VB_lll_geo_000B68_0x7018d88[] = {
{{{ 768, 154, -383 }, 0, { 0, -9230 }, { 0, 127, 0, 255}}},
{{{ -767, 154, -383 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -767, 154, 384 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 768, 154, 384 }, 0, { 990, -9230 }, { 0, 127, 0, 255}}},
{{{ 768, 0, -383 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 768, 154, -383 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 768, 154, 384 }, 0, { -4118, 0 }, { 127, 0, 0, 255}}},
{{{ 768, 0, 384 }, 0, { -4118, 990 }, { 127, 0, 0, 255}}},
{{{ -767, 0, 384 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -767, 154, -383 }, 0, { -4118, 0 }, { 129, 0, 0, 255}}},
{{{ -767, 0, -383 }, 0, { -4118, 990 }, { 129, 0, 0, 255}}},
{{{ -767, 154, 384 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
};

Light_t Light_lll_geo_000B68_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000B68_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000B68_0x7018ef8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B68_0x7018e48),
gsSPDisplayList(DL_lll_geo_000B68_0x7018ea0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B68_0x7018e48[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B68__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000B68_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000B68_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000B68_0x7018d08, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B68_0x7018ea0[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B68__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B68_0x7018d88, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

