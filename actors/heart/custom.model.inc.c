#include "custom.model.inc.h"
Vtx VB_heart_geo_0x800d7a0[] = {
{{{ -50, -50, 0 }, 0, { 0, 992 }, { 255, 255, 255, 180}}},
{{{ 50, -50, 0 }, 0, { 992, 992 }, { 255, 255, 255, 180}}},
{{{ 50, 50, 0 }, 0, { 992, 0 }, { 255, 255, 255, 180}}},
{{{ -50, 50, 0 }, 0, { 0, 0 }, { 255, 255, 255, 180}}},
};

const Gfx DL_heart_geo_0x800dfe0[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsDPSetTextureImage(0, 2, 1, heart_geo__texture_0800D7E0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_heart_geo_0x800d7a0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

