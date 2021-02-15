#include "custom.model.inc.h"
Vtx VB_jrb_geo_000900_0x700ad50[] = {
{{{ -153, 922, 154 }, 0, { -796, -2076 }, { 167, 14, 89, 255}}},
{{{ -153, 922, -153 }, 0, { 736, -2076 }, { 167, 14, 167, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 990 }, { 0, 130, 0, 255}}},
{{{ 154, 922, 154 }, 0, { 736, -2076 }, { 89, 14, 89, 255}}},
{{{ 0, 1382, 0 }, 0, { 0, -3610 }, { 0, 126, 0, 255}}},
{{{ -153, 922, -153 }, 0, { -796, -2076 }, { 167, 14, 167, 255}}},
{{{ 154, 922, -153 }, 0, { 736, -2076 }, { 89, 14, 167, 255}}},
{{{ 154, 922, 154 }, 0, { -796, -2076 }, { 89, 14, 89, 255}}},
};

const Light_t Light_jrb_geo_000900_0x700ad40 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_jrb_geo_000900_0x700ad38 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_jrb_geo_000900_0x700ae48[] = {
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
gsSPDisplayList(DL_jrb_geo_000900_0x700add0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_jrb_geo_000900_0x700add0[] = {
gsDPSetTextureImage(0, 2, 1, jrb_geo_000900__texture_09001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPLight(&Light_jrb_geo_000900_0x700ad40.col, 1),
gsSPLight(&Light_jrb_geo_000900_0x700ad38.col, 2),
gsSPVertex(VB_jrb_geo_000900_0x700ad50, 8, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 0, 0),
gsSP2Triangles(5, 4, 6, 0,6, 4, 7, 0),
gsSP2Triangles(4, 1, 0, 0,2, 5, 6, 0),
gsSP2Triangles(7, 2, 6, 0,3, 0, 2, 0),
gsSPEndDisplayList(),
};

