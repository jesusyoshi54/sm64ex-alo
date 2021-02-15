#include "custom.model.inc.h"
Vtx VB_ssl_geo_000618_0x700bd88[] = {
{{{ 512, -255, 512 }, 0, { 480, 990 }, { 89, 89, 0, 255}}},
{{{ 512, -255, -511 }, 0, { 4566, 990 }, { 89, 89, 0, 255}}},
{{{ 0, 256, 0 }, 0, { 2522, -1900 }, { 89, 89, 0, 255}}},
{{{ 512, -255, -511 }, 0, { 480, 990 }, { 0, 89, 167, 255}}},
{{{ -511, -255, -511 }, 0, { 4568, 990 }, { 0, 89, 167, 255}}},
{{{ 0, 256, 0 }, 0, { 2524, -1900 }, { 0, 89, 167, 255}}},
{{{ -511, -255, -511 }, 0, { 478, 990 }, { 167, 89, 0, 255}}},
{{{ -511, -255, 512 }, 0, { 4566, 990 }, { 167, 89, 0, 255}}},
{{{ 0, 256, 0 }, 0, { 2522, -1900 }, { 167, 89, 0, 255}}},
{{{ -511, -255, 512 }, 0, { 480, 990 }, { 0, 89, 89, 255}}},
{{{ 512, -255, 512 }, 0, { 4566, 990 }, { 0, 89, 89, 255}}},
{{{ 0, 256, 0 }, 0, { 2522, -1900 }, { 0, 89, 89, 255}}},
};

Vtx VB_ssl_geo_000618_0x700be48[] = {
{{{ -511, -255, 512 }, 0, { 6100, -7186 }, { 0, 129, 0, 255}}},
{{{ 512, -255, -511 }, 0, { 10188, -3098 }, { 0, 129, 0, 255}}},
{{{ 512, -255, 512 }, 0, { 6100, -3098 }, { 0, 129, 0, 255}}},
{{{ -511, -255, -511 }, 0, { 10188, -7186 }, { 0, 129, 0, 255}}},
};

const Light_t Light_ssl_geo_000618_0x700bd78 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_ssl_geo_000618_0x700bd70 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_ssl_geo_000618_0x700bf18[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ssl_geo_000618_0x700be88),
gsSPDisplayList(DL_ssl_geo_000618_0x700bee0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_ssl_geo_000618_0x700be88[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000618__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ssl_geo_000618_0x700bd78.col, 1),
gsSPLight(&Light_ssl_geo_000618_0x700bd70.col, 2),
gsSPVertex(VB_ssl_geo_000618_0x700bd88, 12, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSPEndDisplayList(),
};

const Gfx DL_ssl_geo_000618_0x700bee0[] = {
gsDPSetTextureImage(0, 2, 1, ssl_geo_000618__texture_0900A800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ssl_geo_000618_0x700be48, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

