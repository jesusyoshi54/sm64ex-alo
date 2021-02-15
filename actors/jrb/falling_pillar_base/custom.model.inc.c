#include "custom.model.inc.h"
Vtx VB_jrb_geo_000918_0x700af08[] = {
{{{ 102, 0, -101 }, 0, { 2012, -1054 }, { 51, 103, 204, 255}}},
{{{ 0, 102, 0 }, 0, { 992, 0 }, { 0, 126, 0, 255}}},
{{{ 102, 0, 102 }, 0, { 2012, 990 }, { 51, 103, 51, 255}}},
{{{ -101, 0, -101 }, 0, { 0, -1054 }, { 204, 103, 204, 255}}},
{{{ -101, 0, 102 }, 0, { 0, 990 }, { 204, 103, 51, 255}}},
};

const Light_t Light_jrb_geo_000918_0x700aef8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_jrb_geo_000918_0x700aef0 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_jrb_geo_000918_0x700afb0[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(5, 80, 75, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_jrb_geo_000918_0x700af58),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsSPEndDisplayList(),
};

const Gfx DL_jrb_geo_000918_0x700af58[] = {
gsDPSetTextureImage(0, 2, 1, jrb_geo_000918__texture_09001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPLight(&Light_jrb_geo_000918_0x700aef8.col, 1),
gsSPLight(&Light_jrb_geo_000918_0x700aef0.col, 2),
gsSPVertex(VB_jrb_geo_000918_0x700af08, 5, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 1, 0),
gsSP2Triangles(2, 1, 4, 0,1, 0, 3, 0),
gsSPEndDisplayList(),
};

