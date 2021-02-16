#include "custom.model.inc.h"
Vtx VB_ttc_geo_000340_0x7011440[] = {
{{{ 256, -153, -127 }, 0, { 3034, 990 }, { 84, 214, 172, 255}}},
{{{ 256, 0, 128 }, 0, { -2074, 0 }, { 84, 42, 84, 255}}},
{{{ 256, -153, 128 }, 0, { -2074, 990 }, { 51, 153, 51, 255}}},
{{{ 256, -153, 128 }, 0, { 0, 990 }, { 51, 153, 51, 255}}},
{{{ -255, -153, 128 }, 0, { 0, 990 }, { 172, 214, 84, 255}}},
{{{ -255, -153, -127 }, 0, { 4056, 990 }, { 205, 153, 205, 255}}},
{{{ 256, -153, -127 }, 0, { 4056, 990 }, { 84, 214, 172, 255}}},
{{{ 256, 0, 128 }, 0, { 6100, 0 }, { 84, 42, 84, 255}}},
{{{ -255, -153, 128 }, 0, { -4118, 990 }, { 172, 214, 84, 255}}},
{{{ 256, -153, 128 }, 0, { 6100, 990 }, { 51, 153, 51, 255}}},
{{{ -255, 0, 128 }, 0, { -4118, 0 }, { 205, 103, 51, 255}}},
{{{ 256, -153, -127 }, 0, { -5140, 990 }, { 84, 214, 172, 255}}},
{{{ -255, -153, -127 }, 0, { 5078, 990 }, { 205, 153, 205, 255}}},
{{{ -255, 0, -127 }, 0, { 5078, 0 }, { 172, 42, 172, 255}}},
{{{ 256, 0, -127 }, 0, { -5140, 0 }, { 51, 103, 205, 255}}},
};

Vtx VB_ttc_geo_000340_0x7011530[] = {
{{{ -255, -153, 128 }, 0, { 3034, 990 }, { 172, 214, 84, 255}}},
{{{ -255, 0, 128 }, 0, { 3034, 0 }, { 205, 103, 51, 255}}},
{{{ -255, 0, -127 }, 0, { -2074, 0 }, { 172, 42, 172, 255}}},
{{{ 256, -153, -127 }, 0, { 3034, 990 }, { 84, 214, 172, 255}}},
{{{ 256, 0, -127 }, 0, { 3034, 0 }, { 51, 103, 205, 255}}},
{{{ 256, 0, 128 }, 0, { -2074, 0 }, { 84, 42, 84, 255}}},
{{{ -255, -153, -127 }, 0, { -2074, 990 }, { 205, 153, 205, 255}}},
};

Vtx VB_ttc_geo_000340_0x70115a0[] = {
{{{ 256, 0, -127 }, 0, { 990, 0 }, { 51, 103, 205, 255}}},
{{{ -255, 0, 128 }, 0, { 0, 990 }, { 205, 103, 51, 255}}},
{{{ 256, 0, 128 }, 0, { 990, 990 }, { 84, 42, 84, 255}}},
{{{ -255, 0, -127 }, 0, { 0, 0 }, { 172, 42, 172, 255}}},
};

Light_t Light_ttc_geo_000340_0x7011430 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_000340_0x7011428 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttc_geo_000340_0x70116a8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(200, 255, 255, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_000340_0x70115e0),
gsSPDisplayList(DL_ttc_geo_000340_0x7011670),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000340_0x70115e0[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000340__texture_09003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttc_geo_000340_0x7011430.col, 1),
gsSPLight(&Light_ttc_geo_000340_0x7011428.col, 2),
gsSPVertex(VB_ttc_geo_000340_0x7011440, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP1Triangle(11, 13, 14, 0),
gsSPVertex(VB_ttc_geo_000340_0x7011530, 7, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(0, 2, 6, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000340_0x7011670[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000340__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_000340_0x70115a0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

