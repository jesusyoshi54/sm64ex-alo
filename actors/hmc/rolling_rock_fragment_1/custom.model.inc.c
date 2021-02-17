#include "custom.model.inc.h"
Vtx VB_hmc_geo_000570_0x7023c88[] = {
{{{ -91, 0, -45 }, 0, { -22, 4380 }, { 138, 23, 216, 255}}},
{{{ -73, -53, 46 }, 0, { 158, 3308 }, { 159, 201, 60, 255}}},
{{{ -32, 24, 51 }, 0, { -194, 2768 }, { 173, 94, 17, 255}}},
{{{ 0, 0, -101 }, 0, { 426, 5632 }, { 246, 29, 133, 255}}},
{{{ 74, 54, -45 }, 0, { 1058, 4388 }, { 62, 82, 183, 255}}},
{{{ -32, 24, 51 }, 0, { 1634, 2768 }, { 173, 94, 17, 255}}},
{{{ 28, 87, 46 }, 0, { 1246, 3284 }, { 5, 112, 58, 255}}},
{{{ 92, 0, 46 }, 0, { 874, 3300 }, { 114, 249, 54, 255}}},
{{{ -41, -67, -45 }, 0, { 272, 4428 }, { 220, 149, 199, 255}}},
{{{ 37, -80, 29 }, 0, { 546, 3484 }, { 33, 143, 44, 255}}},
{{{ 66, -59, -28 }, 0, { 660, 4196 }, { 83, 179, 201, 255}}},
{{{ 0, 0, 102 }, 0, { 426, 2044 }, { 243, 3, 126, 255}}},
};

Light_t Light_hmc_geo_000570_0x7023c78 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_hmc_geo_000570_0x7023c70 = {
{121, 121, 121}, 0, {121, 121, 121}, 0
};

Gfx DL_hmc_geo_000570_0x7023e10[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(0, 0, 0, 255),
gsMoveWd(G_MW_FOG, 0, 209777792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_hmc_geo_000570_0x7023d48),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_hmc_geo_000570_0x7023d48[] = {
gsDPSetTextureImage(0, 2, 1, hmc_geo_000570__texture_07004800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_hmc_geo_000570_0x7023c78.col, 1),
gsSPLight(&Light_hmc_geo_000570_0x7023c70.col, 2),
gsSPVertex(VB_hmc_geo_000570_0x7023c88, 12, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 0, 0),
gsSP2Triangles(2, 4, 3, 0,5, 6, 4, 0),
gsSP2Triangles(4, 6, 7, 0,3, 8, 0, 0),
gsSP2Triangles(8, 9, 1, 0,10, 7, 9, 0),
gsSP2Triangles(1, 0, 8, 0,3, 10, 8, 0),
gsSP2Triangles(3, 4, 10, 0,9, 8, 10, 0),
gsSP2Triangles(11, 9, 7, 0,11, 7, 6, 0),
gsSP2Triangles(11, 1, 9, 0,11, 2, 1, 0),
gsSP2Triangles(11, 6, 2, 0,7, 10, 4, 0),
gsSPEndDisplayList(),
};

