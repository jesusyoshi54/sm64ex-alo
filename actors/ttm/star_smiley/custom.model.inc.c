#include "custom.model.inc.h"
Vtx VB_ttm_geo_000D84_0x702ab18[] = {
{{{ 1024, 2048, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -1023, 2048, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -1023, 0, 0 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 1024, 0, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_ttm_geo_000D84_0x702ab90[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttm_geo_000D84_0x702ab58),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_000D84_0x702ab58[] = {
gsDPSetTextureImage(0, 2, 1, ttm_geo_000D84__texture_09009800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttm_geo_000D84_0x702ab18, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

