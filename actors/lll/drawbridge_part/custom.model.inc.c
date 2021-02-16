#include "custom.model.inc.h"
Vtx VB_lll_geo_000B20_0x70183f0[] = {
{{{ 0, -101, -191 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 0, 0, 192 }, 0, { 3800, 0 }, { 127, 0, 0, 255}}},
{{{ 0, -101, 192 }, 0, { 3800, 990 }, { 127, 0, 0, 255}}},
{{{ 0, 0, -191 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ -639, -101, 192 }, 0, { 3800, 990 }, { 129, 0, 0, 255}}},
{{{ -639, 0, -191 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -639, -101, -191 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -639, 0, 192 }, 0, { 3800, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_lll_geo_000B20_0x7018470[] = {
{{{ 0, 0, -191 }, 0, { -5140, 990 }, { 0, 127, 0, 255}}},
{{{ -639, 0, -191 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -639, 0, 192 }, 0, { 0, -2076 }, { 0, 127, 0, 255}}},
{{{ 0, 0, 192 }, 0, { -5140, -2076 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000B20_0x70184b0[] = {
{{{ 0, -101, 192 }, 0, { -3352, 862 }, { 0, 129, 0, 255}}},
{{{ -639, -101, 192 }, 0, { -158, 862 }, { 0, 129, 0, 255}}},
{{{ -639, -101, -191 }, 0, { -158, -1054 }, { 0, 129, 0, 255}}},
{{{ 0, -101, -191 }, 0, { -3352, -1054 }, { 0, 129, 0, 255}}},
};

Vtx VB_lll_geo_000B20_0x70184f0[] = {
{{{ 0, -101, 192 }, 0, { 5334, 990 }, { 0, 0, 127, 255}}},
{{{ 0, 0, 192 }, 0, { 5334, 0 }, { 0, 0, 127, 255}}},
{{{ -639, 0, 192 }, 0, { -1052, 0 }, { 0, 0, 127, 255}}},
{{{ -639, -101, 192 }, 0, { -1052, 990 }, { 0, 0, 127, 255}}},
{{{ -639, -101, -191 }, 0, { 2268, 990 }, { 0, 0, 129, 255}}},
{{{ -639, 0, -191 }, 0, { 2268, 0 }, { 0, 0, 129, 255}}},
{{{ 0, 0, -191 }, 0, { -4118, 0 }, { 0, 0, 129, 255}}},
{{{ 0, -101, -191 }, 0, { -4118, 990 }, { 0, 0, 129, 255}}},
};

Light_t Light_lll_geo_000B20_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000B20_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000B20_0x7018680[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B20_0x7018570),
gsSPDisplayList(DL_lll_geo_000B20_0x70185c8),
gsSPDisplayList(DL_lll_geo_000B20_0x7018600),
gsSPDisplayList(DL_lll_geo_000B20_0x7018638),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B20_0x7018570[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B20__texture_07005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000B20_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000B20_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000B20_0x70183f0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B20_0x70185c8[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B20__texture_0900A000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B20_0x7018470, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B20_0x7018600[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B20__texture_09001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B20_0x70184b0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B20_0x7018638[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B20__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B20_0x70184f0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

