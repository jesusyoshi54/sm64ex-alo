#include "custom.model.inc.h"
Vtx VB_lll_geo_000BC8_0x7019a98[] = {
{{{ 5, 41, 1024 }, 0, { -26, 1000 }, { 13, 126, 0, 255}}},
{{{ 384, 0, -1023 }, 0, { 1006, -4116 }, { 13, 126, 0, 255}}},
{{{ 5, 41, -1023 }, 0, { -14, -4108 }, { 13, 126, 0, 255}}},
{{{ 384, 0, 1024 }, 0, { 994, 992 }, { 13, 126, 0, 255}}},
{{{ -383, 0, -1023 }, 0, { -48, -4040 }, { 243, 126, 0, 255}}},
{{{ 5, 41, 1024 }, 0, { 1008, 994 }, { 243, 126, 0, 255}}},
{{{ 5, 41, -1023 }, 0, { 984, -4052 }, { 243, 126, 0, 255}}},
{{{ -383, 0, 1024 }, 0, { -26, 1006 }, { 243, 126, 0, 255}}},
};

Vtx VB_lll_geo_000BC8_0x7019b18[] = {
{{{ -383, 0, -1023 }, 0, { 7122, 990 }, { 0, 0, 129, 255}}},
{{{ 5, 41, -1023 }, 0, { 4016, 662 }, { 0, 0, 129, 255}}},
{{{ 384, 0, -1023 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ 384, 0, 1024 }, 0, { 6100, 0 }, { 0, 0, 127, 255}}},
{{{ 5, 41, 1024 }, 0, { 3074, -360 }, { 0, 0, 127, 255}}},
{{{ -380, 0, 1024 }, 0, { -8, -34 }, { 0, 0, 127, 255}}},
};

Light_t Light_lll_geo_000BC8_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000BC8_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000BC8_0x7019c08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000BC8_0x7019b78),
gsSPDisplayList(DL_lll_geo_000BC8_0x7019bd0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000BC8_0x7019b78[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000BC8__texture_09004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000BC8_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000BC8_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000BC8_0x7019a98, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000BC8_0x7019bd0[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000BC8__texture_09006000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000BC8_0x7019b18, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPEndDisplayList(),
};

