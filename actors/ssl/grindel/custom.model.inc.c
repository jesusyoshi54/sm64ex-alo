#include "custom.model.inc.h"
Vtx VB_ssl_geo_000734_0x7021e68[] = {
{{{ -224, 0, -224 }, 0, { 990, 990 }, { 214, 172, 172, 255}}},
{{{ 224, 0, 224 }, 0, { 0, 0 }, { 42, 172, 84, 255}}},
{{{ -224, 0, 224 }, 0, { 0, 990 }, { 153, 205, 51, 255}}},
{{{ 224, 0, -224 }, 0, { 990, 0 }, { 103, 205, 205, 255}}},
{{{ -224, 450, 224 }, 0, { 0, 990 }, { 214, 84, 84, 255}}},
{{{ 224, 450, -224 }, 0, { 990, 0 }, { 42, 84, 172, 255}}},
{{{ -224, 450, -224 }, 0, { 990, 990 }, { 153, 51, 205, 255}}},
{{{ 224, 450, 224 }, 0, { 0, 0 }, { 103, 51, 51, 255}}},
};

Vtx VB_ssl_geo_000734_0x7021ee8[] = {
{{{ 224, 450, -224 }, 0, { 0, 0 }, { 42, 84, 172, 255}}},
{{{ -224, 0, -224 }, 0, { 990, 2012 }, { 214, 172, 172, 255}}},
{{{ -224, 450, -224 }, 0, { 990, 0 }, { 153, 51, 205, 255}}},
{{{ -224, 450, 224 }, 0, { 0, 0 }, { 214, 84, 84, 255}}},
{{{ 224, 0, 224 }, 0, { 990, 2012 }, { 42, 172, 84, 255}}},
{{{ 224, 450, 224 }, 0, { 990, 0 }, { 103, 51, 51, 255}}},
{{{ -224, 0, 224 }, 0, { 0, 2012 }, { 153, 205, 51, 255}}},
{{{ -224, 450, -224 }, 0, { 0, 0 }, { 153, 51, 205, 255}}},
{{{ -224, 0, -224 }, 0, { 0, 2012 }, { 214, 172, 172, 255}}},
{{{ -224, 0, 224 }, 0, { 990, 2012 }, { 153, 205, 51, 255}}},
{{{ -224, 450, 224 }, 0, { 990, 0 }, { 214, 84, 84, 255}}},
{{{ 224, 450, 224 }, 0, { 0, 0 }, { 103, 51, 51, 255}}},
{{{ 224, 0, 224 }, 0, { 0, 2012 }, { 42, 172, 84, 255}}},
{{{ 224, 0, -224 }, 0, { 990, 2012 }, { 103, 205, 205, 255}}},
{{{ 224, 450, -224 }, 0, { 990, 0 }, { 42, 84, 172, 255}}},
{{{ 224, 0, -224 }, 0, { 0, 2012 }, { 103, 205, 205, 255}}},
};

Vtx VB_ssl_geo_000734_0x7022170[] = {
{{{ -229, 382, -157 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -229, 68, -157 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ -229, 68, 157 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -229, 382, 157 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
};

const Light_t Light_ssl_geo_000734_0x7021e58 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_ssl_geo_000734_0x7021e50 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_ssl_geo_000734_0x70220a8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(0, 0, 0, 255),
gsMoveWd(G_MW_FOG, 0, 239727287),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ssl_geo_000734_0x7021fe8),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_ssl_geo_000734_0x7022040),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_ssl_geo_000734_0x7021fe8[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000734__texture_09002000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ssl_geo_000734_0x7021e58.col, 1),
gsSPLight(&Light_ssl_geo_000734_0x7021e50.col, 2),
gsSPVertex(VB_ssl_geo_000734_0x7021e68, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

const Gfx DL_ssl_geo_000734_0x7022040[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000734__texture_07002800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_ssl_geo_000734_0x7021ee8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};

const Gfx DL_ssl_geo_000734_0x70221e8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
gsDPSetDepthSource(0),
gsDPSetFogColor(0, 0, 0, 255),
gsMoveWd(G_MW_FOG, 0, 239727287),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ssl_geo_000734_0x70221b0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4468856),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_ssl_geo_000734_0x70221b0[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000734__texture_07003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ssl_geo_000734_0x7022170, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

