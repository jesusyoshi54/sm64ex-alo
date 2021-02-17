#include "custom.model.inc.h"
Vtx VB_totwc_geo_000160_0x7007930[] = {
{{{ 1024, 512, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -1023, 512, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -1023, -511, 0 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 1024, -511, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_totwc_geo_000160_0x70079a8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_totwc_geo_000160_0x7007970),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_totwc_geo_000160_0x7007970[] = {
gsDPSetTextureImage(3, 2, 1, totwc_geo_000160__texture_07002000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_totwc_geo_000160_0x7007930, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

