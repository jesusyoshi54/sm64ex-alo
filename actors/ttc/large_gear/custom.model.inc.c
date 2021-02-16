#include "custom.model.inc.h"
Vtx VB_ttc_geo_0003A0_0x7012200[] = {
{{{ 154, 0, -153 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -153, 0, -153 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -153, 0, 154 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 154, 0, 154 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_ttc_geo_0003A0_0x7012278[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
gsDPSetDepthSource(0),
gsDPSetFogColor(200, 255, 255, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_0003A0_0x7012240),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4468856),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0003A0_0x7012240[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_0003A0__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_0003A0_0x7012200, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

