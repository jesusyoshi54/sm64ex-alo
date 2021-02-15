#include "custom.model.inc.h"
Vtx VB_star_geo_0x302b6f0[] = {
{{{ 0, 8, -89 }, 0, { 0, 0 }, { 0, 7, 130, 255}}},
{{{ 190, -201, 0 }, 0, { 0, 0 }, { 85, 163, 0, 255}}},
{{{ 0, -129, 0 }, 0, { 0, 0 }, { 0, 130, 0, 255}}},
{{{ 146, -42, 0 }, 0, { 0, 0 }, { 124, 231, 0, 255}}},
{{{ 0, 8, 90 }, 0, { 0, 0 }, { 0, 7, 126, 255}}},
{{{ 257, 84, 0 }, 0, { 0, 0 }, { 104, 71, 0, 255}}},
{{{ -145, -42, 0 }, 0, { 0, 0 }, { 132, 231, 0, 255}}},
{{{ -189, -201, 0 }, 0, { 0, 0 }, { 170, 163, 0, 255}}},
{{{ -256, 84, 0 }, 0, { 0, 0 }, { 151, 71, 0, 255}}},
{{{ 0, 246, 0 }, 0, { 0, 0 }, { 0, 126, 0, 255}}},
{{{ 96, 99, 0 }, 0, { 0, 0 }, { 61, 111, 0, 255}}},
{{{ -95, 99, 0 }, 0, { 0, 0 }, { 195, 111, 0, 255}}},
};

Vtx VB_star_geo_0x302b920[] = {
{{{ 67, 86, 63 }, 0, { 990, 0 }, { 24, 21, 122, 255}}},
{{{ 0, -27, 96 }, 0, { 0, 990 }, { 24, 21, 122, 255}}},
{{{ 67, -29, 83 }, 0, { 990, 990 }, { 24, 21, 122, 255}}},
{{{ 0, 89, 76 }, 0, { 0, 0 }, { 24, 21, 122, 255}}},
{{{ 0, 89, 76 }, 0, { 990, 0 }, { 232, 21, 122, 255}}},
{{{ -66, -29, 83 }, 0, { 0, 990 }, { 232, 21, 122, 255}}},
{{{ 0, -27, 96 }, 0, { 990, 990 }, { 232, 21, 122, 255}}},
{{{ 0, 89, 76 }, 0, { 990, 0 }, { 231, 21, 122, 255}}},
{{{ -66, 86, 63 }, 0, { 0, 0 }, { 231, 21, 122, 255}}},
{{{ -66, -29, 83 }, 0, { 0, 990 }, { 231, 21, 122, 255}}},
};

const Light_t Light_star_geo_0x302a6e0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_star_geo_0x302a6d8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_star_geo_0x302b870[] = {
gsDPPipeSync(),
gsSPGeometryMode(0, G_TEXTURE_GEN),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
gsDPSetTextureImage(0, 2, 1, star_geo__texture_0302A6F0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPTexture(1984, 1984, 0, 0, 1),
gsSPDisplayList(DL_star_geo_0x302b7b0),
gsDPPipeSync(),
gsSPTexture(1984, 1984, 0, 0, 0),
gsSPGeometryMode(G_TEXTURE_GEN, 0),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_star_geo_0x302b7b0[] = {
gsSPLight(&Light_star_geo_0x302a6e0.col, 1),
gsSPLight(&Light_star_geo_0x302a6d8.col, 2),
gsSPVertex(VB_star_geo_0x302b6f0, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(2, 1, 4, 0,1, 3, 4, 0),
gsSP2Triangles(5, 3, 0, 0,4, 3, 5, 0),
gsSP2Triangles(6, 7, 4, 0,7, 2, 4, 0),
gsSP2Triangles(8, 6, 4, 0,9, 4, 10, 0),
gsSP2Triangles(9, 11, 4, 0,4, 5, 10, 0),
gsSP2Triangles(11, 8, 4, 0,0, 2, 7, 0),
gsSP2Triangles(0, 7, 6, 0,0, 6, 8, 0),
gsSP2Triangles(0, 8, 11, 0,0, 11, 9, 0),
gsSP2Triangles(10, 5, 0, 0,10, 0, 9, 0),
gsSPEndDisplayList(),
};

const Light_t Light_star_geo_0x302b910 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_star_geo_0x302b908 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_star_geo_0x302ba18[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_star_geo_0x302b9c0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_star_geo_0x302b9c0[] = {
gsDPSetTextureImage(0, 2, 1, star_geo__texture_0302AEF0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_star_geo_0x302b910.col, 1),
gsSPLight(&Light_star_geo_0x302b908.col, 2),
gsSPVertex(VB_star_geo_0x302b920, 10, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,7, 8, 9, 0),
gsSPEndDisplayList(),
};

