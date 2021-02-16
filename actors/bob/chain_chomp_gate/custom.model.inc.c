#include "custom.model.inc.h"
Vtx VB_bob_geo_000440_0x700e3e0[] = {
{{{ 512, 0, 0 }, 0, { -7184, -5142 }, { 255, 255, 255, 255}}},
{{{ 512, 640, 0 }, 0, { -7184, 990 }, { 255, 255, 255, 255}}},
{{{ -511, 640, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -511, 0, 0 }, 0, { 990, -5142 }, { 255, 255, 255, 255}}},
};

Gfx DL_bob_geo_000440_0x700e458[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
gsDPSetDepthSource(0),
gsDPSetFogColor(160, 160, 160, 255),
gsMoveWd(G_MW_FOG, 0, 419489792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bob_geo_000440_0x700e420),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4468856),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bob_geo_000440_0x700e420[] = {
gsDPSetTextureImage(0, 2, 1, bob_geo_000440__texture_09008800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bob_geo_000440_0x700e3e0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 2, 0),
gsSPEndDisplayList(),
};

