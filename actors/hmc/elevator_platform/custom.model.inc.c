#include "custom.model.inc.h"
Vtx VB_hmc_geo_0005D0_0x7022928[] = {
{{{ -255, 0, -255 }, 0, { 990, 96 }, { 214, 172, 172, 255}}},
{{{ 256, 102, -255 }, 0, { 0, 0 }, { 42, 84, 172, 255}}},
{{{ 256, 0, -255 }, 0, { 0, 96 }, { 103, 205, 205, 255}}},
{{{ 256, 0, 256 }, 0, { 990, 0 }, { 42, 172, 84, 255}}},
{{{ -255, 0, 256 }, 0, { 990, 990 }, { 153, 205, 51, 255}}},
{{{ -255, 0, -255 }, 0, { 0, 990 }, { 214, 172, 172, 255}}},
{{{ 256, 0, -255 }, 0, { 0, 0 }, { 103, 205, 205, 255}}},
{{{ -255, 102, 256 }, 0, { 990, 990 }, { 214, 84, 84, 255}}},
{{{ 256, 102, 256 }, 0, { 990, 0 }, { 103, 51, 51, 255}}},
{{{ -255, 102, -255 }, 0, { 0, 990 }, { 153, 51, 205, 255}}},
{{{ 256, 0, 256 }, 0, { 990, 96 }, { 42, 172, 84, 255}}},
{{{ -255, 102, 256 }, 0, { 0, 0 }, { 214, 84, 84, 255}}},
{{{ -255, 102, -255 }, 0, { 990, 0 }, { 153, 51, 205, 255}}},
{{{ -255, 0, 256 }, 0, { 0, 96 }, { 153, 205, 51, 255}}},
};

Light_t Light_hmc_geo_0005D0_0x7022918 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_hmc_geo_0005D0_0x7022910 = {
{121, 121, 121}, 0, {121, 121, 121}, 0
};

Gfx DL_hmc_geo_0005D0_0x7022aa0[] = {
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
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_hmc_geo_0005D0_0x7022a08),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_hmc_geo_0005D0_0x7022a08[] = {
gsDPSetTextureImage(0, 2, 1, hmc_geo_0005D0__texture_09002800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_hmc_geo_0005D0_0x7022918.col, 1),
gsSPLight(&Light_hmc_geo_0005D0_0x7022910.col, 2),
gsSPVertex(VB_hmc_geo_0005D0_0x7022928, 14, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 1, 0),
gsSP2Triangles(7, 1, 9, 0,2, 8, 10, 0),
gsSP2Triangles(2, 1, 8, 0,10, 8, 11, 0),
gsSP2Triangles(0, 12, 1, 0,13, 12, 0, 0),
gsSP2Triangles(10, 11, 13, 0,13, 11, 12, 0),
gsSPEndDisplayList(),
};

