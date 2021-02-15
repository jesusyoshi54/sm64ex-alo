#include "custom.model.inc.h"
Vtx VB_leaves_geo_0x301cba0[] = {
{{{ -10, -10, 0 }, 0, { 0, 480 }, { 255, 255, 255, 255}}},
{{{ 10, -10, 0 }, 0, { 480, 480 }, { 255, 255, 255, 255}}},
{{{ 10, 10, 0 }, 0, { 480, 0 }, { 255, 255, 255, 255}}},
{{{ -10, 10, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_leaves_geo_0x301cde0[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, leaves_geo__texture_0301CBE0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 255, 512),
gsDPPipeSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPVertex(VB_leaves_geo_0x301cba0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

