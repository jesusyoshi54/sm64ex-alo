#include "custom.model.inc.h"
Vtx VB_butterfly_geo_0x3004348[] = {
{{{ 0, 0, -78 }, 0, { 2004, -48 }, { 255, 255, 255, 255}}},
{{{ 79, 0, 39 }, 0, { -60, 4056 }, { 255, 255, 255, 255}}},
{{{ 79, 0, -78 }, 0, { -56, -48 }, { 255, 255, 255, 255}}},
{{{ 0, 0, -78 }, 0, { 2004, -48 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 39 }, 0, { 2004, 4056 }, { 255, 255, 255, 255}}},
{{{ 79, 0, 39 }, 0, { -60, 4056 }, { 255, 255, 255, 255}}},
};

Vtx VB_butterfly_geo_0x30053a8[] = {
{{{ 79, 0, -78 }, 0, { -56, 0 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 39 }, 0, { 1972, 4024 }, { 255, 255, 255, 255}}},
{{{ 0, 0, -78 }, 0, { 2000, 0 }, { 255, 255, 255, 255}}},
{{{ 79, 0, -78 }, 0, { -56, 0 }, { 255, 255, 255, 255}}},
{{{ 79, 0, 39 }, 0, { -80, 4032 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 39 }, 0, { 1972, 4024 }, { 255, 255, 255, 255}}},
};

Gfx DL_butterfly_geo_0x3005408[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, butterfly_geo__texture_030043A8),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPVertex(VB_butterfly_geo_0x3004348, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPTexture(32768, 32768, 1, 1, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_butterfly_geo_0x30054a0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, butterfly_geo__texture_030043A8),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPVertex(VB_butterfly_geo_0x30053a8, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPTexture(32768, 32768, 1, 1, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

