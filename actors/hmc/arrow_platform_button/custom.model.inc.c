#include "custom.model.inc.h"
Vtx VB_hmc_geo_0005B8_0x7022ea8[] = {
{{{ 38, 11, 38 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ 38, 11, -37 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -37, 11, -37 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -37, 11, 38 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_hmc_geo_0005B8_0x7022ee8[] = {
{{{ -50, 0, -50 }, 0, { 0, 0 }, { 0, 96, 174, 255}}},
{{{ -37, 11, -37 }, 0, { 0, 0 }, { 0, 96, 174, 255}}},
{{{ 51, 0, -50 }, 0, { 0, 0 }, { 0, 96, 174, 255}}},
{{{ 38, 11, -37 }, 0, { 0, 0 }, { 0, 96, 174, 255}}},
{{{ 51, 0, -50 }, 0, { 0, 0 }, { 82, 96, 0, 255}}},
{{{ 38, 11, -37 }, 0, { 0, 0 }, { 82, 96, 0, 255}}},
{{{ 51, 0, 51 }, 0, { 0, 0 }, { 82, 96, 0, 255}}},
{{{ 38, 11, 38 }, 0, { 0, 0 }, { 82, 96, 0, 255}}},
{{{ -37, 11, 38 }, 0, { 0, 0 }, { 174, 96, 0, 255}}},
{{{ -37, 11, -37 }, 0, { 0, 0 }, { 174, 96, 0, 255}}},
{{{ -50, 0, -50 }, 0, { 0, 0 }, { 174, 96, 0, 255}}},
{{{ -50, 0, 51 }, 0, { 0, 0 }, { 174, 96, 0, 255}}},
{{{ 38, 11, 38 }, 0, { 0, 0 }, { 0, 96, 82, 255}}},
{{{ -50, 0, 51 }, 0, { 0, 0 }, { 0, 96, 82, 255}}},
{{{ 51, 0, 51 }, 0, { 0, 0 }, { 0, 96, 82, 255}}},
{{{ -37, 11, 38 }, 0, { 0, 0 }, { 0, 96, 82, 255}}},
};

Light_t Light_hmc_geo_0005B8_0x7022e80 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_hmc_geo_0005B8_0x7022e98 = {
{ 168, 211, 192}, 0, { 168, 211, 192}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_hmc_geo_0005B8_0x7022e78 = {
{121, 121, 121}, 0, {121, 121, 121}, 0
};

Ambient_t Light_hmc_geo_0005B8_0x7022e90 = {
{79, 100, 91}, 0, {79, 100, 91}, 0
};

Gfx DL_hmc_geo_0005B8_0x7023090[] = {
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
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_hmc_geo_0005B8_0x7022fe8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_hmc_geo_0005B8_0x7023030),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_hmc_geo_0005B8_0x7022fe8[] = {
gsDPSetTextureImage(0, 2, 1, hmc_geo_0005B8__texture_07003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_hmc_geo_0005B8_0x7022e80.col, 1),
gsSPLight(&Light_hmc_geo_0005B8_0x7022e78.col, 2),
gsSPVertex(VB_hmc_geo_0005B8_0x7022ea8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 2, 0),
gsSPEndDisplayList(),
};

Gfx DL_hmc_geo_0005B8_0x7023030[] = {
gsSPLight(&Light_hmc_geo_0005B8_0x7022e98.col, 1),
gsSPLight(&Light_hmc_geo_0005B8_0x7022e90.col, 2),
gsSPVertex(VB_hmc_geo_0005B8_0x7022ee8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSP2Triangles(4, 5, 6, 0,5, 7, 6, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSP2Triangles(12, 13, 14, 0,12, 15, 13, 0),
gsSPEndDisplayList(),
};

