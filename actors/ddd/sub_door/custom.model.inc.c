#include "custom.model.inc.h"
Vtx VB_ddd_geo_000478_0x7008fd0[] = {
{{{ 4941, -1015, -4095 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 2893, -1015, -4095 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 2893, -3063, -5631 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 4941, -3063, -5631 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
};

Vtx VB_ddd_geo_000478_0x7009098[] = {
{{{ 4941, -1015, -4197 }, 0, { 4056, -3098 }, { 0, 0, 127, 255}}},
{{{ 2893, -1015, -4197 }, 0, { 0, -3098 }, { 0, 0, 127, 255}}},
{{{ 2893, -3063, -4197 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 4941, -3063, -4197 }, 0, { 4056, 990 }, { 0, 0, 127, 255}}},
};

Vtx VB_ddd_geo_000478_0x7009190[] = {
{{{ 4941, -1015, -4187 }, 0, { 1118, -288 }, { 255, 255, 255, 255}}},
{{{ 2893, -1015, -4187 }, 0, { -158, -288 }, { 255, 255, 255, 255}}},
{{{ 2893, -3063, -4187 }, 0, { -158, 2264 }, { 255, 255, 255, 255}}},
{{{ 4941, -3063, -4187 }, 0, { 1118, 2264 }, { 255, 255, 255, 255}}},
};

Gfx DL_ddd_geo_000478_0x7009030[] = {
gsDPPipeSync(),
gsDPSetEnvColor(255, 255, 255, 80),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsSPDisplayList(DL_ddd_geo_000478_0x7009010),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

Gfx DL_ddd_geo_000478_0x7009010[] = {
gsSPVertex(VB_ddd_geo_000478_0x7008fd0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Light_t Light_ddd_geo_000478_0x7009088 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ddd_geo_000478_0x7009080 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_ddd_geo_000478_0x7009120[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ddd_geo_000478_0x70090d8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_ddd_geo_000478_0x70090d8[] = {
gsDPSetTextureImage(0, 2, 1, ddd_geo_000478__texture_07001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ddd_geo_000478_0x7009088.col, 1),
gsSPLight(&Light_ddd_geo_000478_0x7009080.col, 2),
gsSPVertex(VB_ddd_geo_000478_0x7009098, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_ddd_geo_000478_0x7009208[] = {
gsDPPipeSync(),
gsDPSetEnvColor(255, 255, 255, 128),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_ddd_geo_000478_0x70091d0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

Gfx DL_ddd_geo_000478_0x70091d0[] = {
gsDPSetTextureImage(0, 2, 1, ddd_geo_000478__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_ddd_geo_000478_0x7009190, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

