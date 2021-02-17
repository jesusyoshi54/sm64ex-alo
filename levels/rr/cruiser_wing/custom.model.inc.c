#include "custom.model.inc.h"
Vtx VB_rr_geo_000890_0x701a440[] = {
{{{ 227, 4, 5 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -79, 0, -1 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 214, -397, 947 }, 0, { 2012, 0 }, { 255, 255, 255, 255}}},
{{{ -93, -402, 940 }, 0, { 2012, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_rr_geo_000890_0x701a4b8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_rr_geo_000890_0x701a480),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_rr_geo_000890_0x701a480[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_000890__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPVertex(VB_rr_geo_000890_0x701a440, 4, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSPEndDisplayList(),
};

