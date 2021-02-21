#include "custom.model.inc.h"
Vtx VB_ssl_geo_000794_0x7022ab8[] = {
{{{ -63, 0, 307 }, 0, { 2420, 990 }, { 153, 205, 51, 255}}},
{{{ -63, 512, 307 }, 0, { 2420, -1054 }, { 214, 84, 84, 255}}},
{{{ -63, 512, -306 }, 0, { 0, -1054 }, { 153, 51, 205, 255}}},
{{{ -63, 0, -306 }, 0, { 990, 990 }, { 214, 172, 172, 255}}},
{{{ -63, 512, -306 }, 0, { 990, -1054 }, { 153, 51, 205, 255}}},
{{{ 64, 512, -306 }, 0, { 478, -1054 }, { 42, 84, 172, 255}}},
{{{ 64, 0, -306 }, 0, { 478, 990 }, { 103, 205, 205, 255}}},
{{{ 64, 0, -306 }, 0, { 2420, 990 }, { 103, 205, 205, 255}}},
{{{ 64, 512, 307 }, 0, { 0, -1054 }, { 103, 51, 51, 255}}},
{{{ 64, 0, 307 }, 0, { 0, 990 }, { 42, 172, 84, 255}}},
{{{ 64, 512, -306 }, 0, { 2420, -1054 }, { 42, 84, 172, 255}}},
{{{ 64, 0, 307 }, 0, { 990, 990 }, { 42, 172, 84, 255}}},
{{{ -63, 512, 307 }, 0, { 478, -1054 }, { 214, 84, 84, 255}}},
{{{ -63, 0, 307 }, 0, { 478, 990 }, { 153, 205, 51, 255}}},
{{{ 64, 512, 307 }, 0, { 990, -1054 }, { 103, 51, 51, 255}}},
{{{ -63, 0, -306 }, 0, { 0, 990 }, { 214, 172, 172, 255}}},
};

Vtx VB_ssl_geo_000794_0x7022bb8[] = {
{{{ 64, 0, 307 }, 0, { 990, 1464 }, { 42, 172, 84, 255}}},
{{{ -63, 0, 307 }, 0, { 480, 1464 }, { 153, 205, 51, 255}}},
{{{ -63, 0, -306 }, 0, { 480, -986 }, { 214, 172, 172, 255}}},
{{{ 64, 0, -306 }, 0, { 990, -986 }, { 103, 205, 205, 255}}},
{{{ 64, 512, -306 }, 0, { 990, -986 }, { 42, 84, 172, 255}}},
{{{ -63, 512, 307 }, 0, { 480, 1464 }, { 214, 84, 84, 255}}},
{{{ 64, 512, 307 }, 0, { 990, 1464 }, { 103, 51, 51, 255}}},
{{{ -63, 512, -306 }, 0, { 480, -986 }, { 153, 51, 205, 255}}},
};

Light_t Light_ssl_geo_000794_0x7022aa8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ssl_geo_000794_0x7022aa0 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ssl_geo_000794_0x7022cf8[] = {
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
gsSPDisplayList(DL_ssl_geo_000794_0x7022c38),
gsSPDisplayList(DL_ssl_geo_000794_0x7022cb0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ssl_geo_000794_0x7022c38[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000794__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ssl_geo_000794_0x7022aa8.col, 1),
gsSPLight(&Light_ssl_geo_000794_0x7022aa0.col, 2),
gsSPVertex(VB_ssl_geo_000794_0x7022ab8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_ssl_geo_000794_0x7022cb0[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000794__texture_0900A800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ssl_geo_000794_0x7022bb8, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

