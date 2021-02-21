#include "custom.model.inc.h"
Vtx VB_hmc_geo_0005A0_0x7022b60[] = {
{{{ 307, 51, 307 }, 0, { 3004, -12 }, { 0, 0, 127, 255}}},
{{{ -306, 0, 307 }, 0, { -2, 990 }, { 0, 0, 127, 255}}},
{{{ 307, 0, 307 }, 0, { 3004, 990 }, { 0, 0, 127, 255}}},
{{{ -306, 51, 307 }, 0, { -2, -12 }, { 0, 0, 127, 255}}},
{{{ -306, 0, -306 }, 0, { -2, 990 }, { 0, 0, 129, 255}}},
{{{ 307, 51, -306 }, 0, { 3004, -12 }, { 0, 0, 129, 255}}},
{{{ 307, 0, -306 }, 0, { 3004, 990 }, { 0, 0, 129, 255}}},
{{{ -306, 51, -306 }, 0, { -2, -12 }, { 0, 0, 129, 255}}},
{{{ 307, 0, -306 }, 0, { 3004, 990 }, { 127, 0, 0, 255}}},
{{{ 307, 51, -306 }, 0, { 3004, -12 }, { 127, 0, 0, 255}}},
{{{ 307, 51, 307 }, 0, { -2, -12 }, { 127, 0, 0, 255}}},
{{{ 307, 0, 307 }, 0, { -2, 990 }, { 127, 0, 0, 255}}},
{{{ -306, 0, 307 }, 0, { -2, 990 }, { 129, 0, 0, 255}}},
{{{ -306, 51, 307 }, 0, { -2, -12 }, { 129, 0, 0, 255}}},
{{{ -306, 51, -306 }, 0, { 3004, -12 }, { 129, 0, 0, 255}}},
{{{ -306, 0, -306 }, 0, { 3004, 990 }, { 129, 0, 0, 255}}},
};

Vtx VB_hmc_geo_0005A0_0x7022c60[] = {
{{{ 307, 0, 307 }, 0, { 3004, -2046 }, { 0, 129, 0, 255}}},
{{{ -306, 0, -306 }, 0, { -2, 960 }, { 0, 129, 0, 255}}},
{{{ 307, 0, -306 }, 0, { 3004, 960 }, { 0, 129, 0, 255}}},
{{{ -306, 0, 307 }, 0, { -2, -2046 }, { 0, 129, 0, 255}}},
{{{ 307, 51, -306 }, 0, { 1982, -1024 }, { 0, 127, 0, 255}}},
{{{ -306, 51, -306 }, 0, { -1022, -1024 }, { 0, 127, 0, 255}}},
{{{ -306, 51, 307 }, 0, { -1022, 1980 }, { 0, 127, 0, 255}}},
{{{ 307, 51, 307 }, 0, { 1982, 1980 }, { 0, 127, 0, 255}}},
};

Light_t Light_hmc_geo_0005A0_0x7022b50 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_hmc_geo_0005A0_0x7022b48 = {
{121, 121, 121}, 0, {121, 121, 121}, 0
};

Gfx DL_hmc_geo_0005A0_0x7022da0[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(0, 0, 0, 255),
gsMoveWd(G_MW_FOG, 0, 209777792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_hmc_geo_0005A0_0x7022ce0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_hmc_geo_0005A0_0x7022d58),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_hmc_geo_0005A0_0x7022ce0[] = {
gsDPSetTextureImage(0, 2, 1, hmc_geo_0005A0__texture_07004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_hmc_geo_0005A0_0x7022b50.col, 1),
gsSPLight(&Light_hmc_geo_0005A0_0x7022b48.col, 2),
gsSPVertex(VB_hmc_geo_0005A0_0x7022b60, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_hmc_geo_0005A0_0x7022d58[] = {
gsDPSetTextureImage(0, 2, 1, hmc_geo_0005A0__texture_07003000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_hmc_geo_0005A0_0x7022c60, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

