#include "custom.model.inc.h"
Vtx VB_castle_grounds_geo_000724_0x700bbf0[] = {
{{{ 2283, 65, 2072 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 2485, 65, 2072 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 2485, 65, 1849 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ 2283, 65, 1849 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_castle_grounds_geo_000724_0x700bc68[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_castle_grounds_geo_000724_0x700bc30),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_castle_grounds_geo_000724_0x700bc30[] = {
gsDPSetTextureImage(0, 2, 1, castle_grounds_geo_000724__texture_09005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_castle_grounds_geo_000724_0x700bbf0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

