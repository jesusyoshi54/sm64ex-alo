#include "custom.model.inc.h"
Vtx VB_pokey_body_part_geo_0x5012838[] = {
{{{ 26, 26, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -25, 26, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -25, -25, 0 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 26, -25, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_pokey_body_part_geo_0x50130b0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_pokey_body_part_geo_0x5013078),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_pokey_body_part_geo_0x5013078[] = {
gsDPSetTextureImage(0, 2, 1, pokey_body_part_geo__texture_05012878),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_pokey_body_part_geo_0x5012838, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

