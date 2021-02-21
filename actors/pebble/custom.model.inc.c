#include "custom.model.inc.h"
Vtx VB_pebble_seg3_dl_0301CB00_0x301c2c0[] = {
{{{ -15, -15, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 15, -15, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 15, 15, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -15, 15, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_pebble_seg3_dl_0301CB00_0x301cb00[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsDPSetTextureImage(0, 2, 1, pebble_seg3_dl_0301CB00__texture_0301C300),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_pebble_seg3_dl_0301CB00_0x301c2c0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

