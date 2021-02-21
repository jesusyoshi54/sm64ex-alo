#include "custom.model.inc.h"
Vtx VB_mushroom_1up_geo_0x30295e8[] = {
{{{ 31, 31, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -30, 31, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -30, -30, 0 }, 0, { 0, 2012 }, { 255, 255, 255, 255}}},
{{{ 31, -30, 0 }, 0, { 990, 2012 }, { 255, 255, 255, 255}}},
};

Gfx DL_mushroom_1up_geo_0x302a660[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_mushroom_1up_geo_0x302a628),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_mushroom_1up_geo_0x302a628[] = {
gsDPSetTextureImage(0, 2, 1, mushroom_1up_geo__texture_03029628),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_mushroom_1up_geo_0x30295e8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

