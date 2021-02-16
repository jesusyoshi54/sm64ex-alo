#include "custom.model.inc.h"
Vtx VB_lll_geo_000C10_0x701a270[] = {
{{{ -245, 0, 246 }, 0, { 0, 992 }, { 0, 127, 0, 255}}},
{{{ 246, 0, 246 }, 0, { 992, 992 }, { 0, 127, 0, 255}}},
{{{ 246, 0, -245 }, 0, { 992, 0 }, { 0, 127, 0, 255}}},
{{{ -245, 0, -245 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000C10_0x701a2b0[] = {
{{{ -245, -45, 246 }, 0, { 0, 0 }, { 0, 0, 0, 200}}},
{{{ 246, -45, 246 }, 0, { 0, 0 }, { 0, 0, 0, 200}}},
{{{ 246, -45, -245 }, 0, { 0, 0 }, { 0, 0, 0, 200}}},
{{{ -245, -45, -245 }, 0, { 0, 0 }, { 0, 0, 0, 200}}},
};

Light_t Light_lll_geo_000C10_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000C10_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000C10_0x701a388[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000C10__texture_07006000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C10_0x701a2f0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C10_0x701a338[] = {
gsSPLight(&Light_lll_geo_000C10_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000C10_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000C10_0x701a270, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C10_0x701a628[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPVertex(VB_lll_geo_000C10_0x701a2b0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C30_0x701a3b8[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000C30__texture_07006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C50_0x701a3e8[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000C50__texture_07007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C70_0x701a418[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000C70__texture_07007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000C90_0x701a448[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000C90__texture_07008000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000CB0_0x701a478[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000CB0__texture_07008800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000CD0_0x701a4a8[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000CD0__texture_07009000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000CF0_0x701a4d8[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000CF0__texture_07009800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000D10_0x701a508[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000D10__texture_0700A000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000D30_0x701a538[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000D30__texture_0700A800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000D50_0x701a568[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000D50__texture_0700B000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000D70_0x701a598[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000D70__texture_0700B800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000D90_0x701a5c8[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000D90__texture_0700C000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000DB0_0x701a5f8[] = {
gsSPDisplayList(DL_lll_geo_000C10_0x701a2f0),
gsDPSetTextureImage(0, 2, 1, lll_geo_000DB0__texture_0700C800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_lll_geo_000C10_0x701a338),
gsSPEndDisplayList(),
};

