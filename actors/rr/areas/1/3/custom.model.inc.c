#include "custom.model.inc.h"
Vtx VB_rr_geo_000678_0x7002d40[] = {
{{{ -409, 0, -204 }, 0, { 990, 990 }, { 255, 212, 0, 255}}},
{{{ 410, 0, 205 }, 0, { -3096, 0 }, { 255, 212, 0, 255}}},
{{{ 410, 0, -204 }, 0, { -3096, 990 }, { 255, 212, 0, 255}}},
{{{ -409, 0, 205 }, 0, { 990, 0 }, { 255, 212, 0, 255}}},
};

Vtx VB_rr_geo_000678_0x7002d80[] = {
{{{ 410, 113, -204 }, 0, { 3590, -12 }, { 255, 212, 0, 255}}},
{{{ -406, 117, -204 }, 0, { 0, 0 }, { 255, 212, 0, 255}}},
{{{ -409, -112, -204 }, 0, { -42, 988 }, { 255, 212, 0, 255}}},
{{{ 410, -112, -204 }, 0, { 3590, 988 }, { 255, 212, 0, 255}}},
{{{ 410, 113, 205 }, 0, { 3590, -12 }, { 255, 212, 0, 255}}},
{{{ -406, 117, 205 }, 0, { 0, 0 }, { 255, 212, 0, 255}}},
{{{ -409, -112, 205 }, 0, { -42, 988 }, { 255, 212, 0, 255}}},
{{{ 410, -112, 205 }, 0, { 3590, 988 }, { 255, 212, 0, 255}}},
};

Gfx DL_rr_geo_000678_0x7002e80[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_rr_geo_000678_0x7002e00),
gsSPDisplayList(DL_rr_geo_000678_0x7002e38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_rr_geo_000678_0x7002e00[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_000678__texture_09000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_rr_geo_000678_0x7002d40, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_rr_geo_000678_0x7002e38[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_000678__texture_09006000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_rr_geo_000678_0x7002d80, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

