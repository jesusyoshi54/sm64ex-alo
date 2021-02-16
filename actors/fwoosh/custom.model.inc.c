#include "custom.model.inc.h"
Vtx VB_fwoosh_geo_0x50157c8[] = {
{{{ -19, -19, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 20, -19, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 20, 20, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -19, 20, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_fwoosh_geo_0x5016040[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_fwoosh_geo_0x5016008),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_fwoosh_geo_0x5016008[] = {
gsDPSetTextureImage(3, 2, 1, fwoosh_geo__texture_05015808),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_fwoosh_geo_0x50157c8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

