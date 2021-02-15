#include "custom.model.inc.h"
Vtx VB_burn_smoke_geo_0x40217c0[] = {
{{{ -50, -50, 0 }, 0, { 0, 992 }, { 20, 10, 10, 255}}},
{{{ 50, -50, 0 }, 0, { 992, 992 }, { 20, 10, 10, 255}}},
{{{ 50, 50, 0 }, 0, { 992, 0 }, { 20, 10, 10, 255}}},
{{{ -50, 50, 0 }, 0, { 0, 0 }, { 20, 10, 10, 255}}},
};

const Gfx DL_burn_smoke_geo_0x4022070[] = {
gsSPDisplayList(DL_burn_smoke_geo_0x4022000),
gsDPSetTextureImage(0, 2, 1, burn_smoke_geo__texture_04021800),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_burn_smoke_geo_0x4022028),
gsSPDisplayList(DL_burn_smoke_geo_0x4022048),
gsSPEndDisplayList(),
};

const Gfx DL_burn_smoke_geo_0x4022000[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPEndDisplayList(),
};

const Gfx DL_burn_smoke_geo_0x4022028[] = {
gsSPVertex(VB_burn_smoke_geo_0x40217c0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_burn_smoke_geo_0x4022048[] = {
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

