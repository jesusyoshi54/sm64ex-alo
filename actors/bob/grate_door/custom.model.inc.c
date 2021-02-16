#include "custom.model.inc.h"
Vtx VB_bob_geo_000470_0x700e810[] = {
{{{ 0, 384, 0 }, 0, { -1956, -2076 }, { 255, 255, 255, 255}}},
{{{ 320, 640, 0 }, 0, { 598, -4120 }, { 255, 255, 255, 255}}},
{{{ 128, 640, 0 }, 0, { -934, -4120 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 0 }, 0, { -1956, 990 }, { 255, 255, 255, 255}}},
{{{ 320, 0, 0 }, 0, { 598, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_bob_geo_000470_0x700e8a0[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
gsDPSetDepthSource(0),
gsDPSetFogColor(160, 160, 160, 255),
gsMoveWd(G_MW_FOG, 0, 419489792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bob_geo_000470_0x700e860),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4468856),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bob_geo_000470_0x700e860[] = {
gsDPSetTextureImage(0, 2, 1, bob_geo_000470__texture_09008800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bob_geo_000470_0x700e810, 5, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 4, 0),
gsSP1Triangle(0, 4, 1, 0),
gsSPEndDisplayList(),
};

