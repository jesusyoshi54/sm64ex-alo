#include "custom.model.inc.h"
Vtx VB_ttm_geo_0008A8_0x700cb90[] = {
{{{ -323, -387, -61 }, 0, { 8458, -5948 }, { 156, 241, 75, 255}}},
{{{ -30, 389, 495 }, 0, { 9592, -7498 }, { 156, 241, 75, 255}}},
{{{ -224, 389, 235 }, 0, { 8972, -7498 }, { 156, 241, 75, 255}}},
{{{ -323, -387, -61 }, 0, { 8458, -5948 }, { 194, 209, 99, 255}}},
{{{ 377, 389, 751 }, 0, { 10552, -7498 }, { 194, 209, 99, 255}}},
{{{ -30, 389, 495 }, 0, { 9592, -7498 }, { 194, 209, 99, 255}}},
};

Vtx VB_ttm_geo_0008A8_0x700cbf0[] = {
{{{ -323, -387, -61 }, 0, { 974, -2960 }, { 130, 13, 7, 255}}},
{{{ -224, 389, 235 }, 0, { 1654, -4488 }, { 130, 13, 7, 255}}},
{{{ -282, 389, -714 }, 0, { -132, -4554 }, { 130, 13, 7, 255}}},
};

Vtx VB_ttm_geo_0008A8_0x700cc20[] = {
{{{ 377, 389, 751 }, 0, { 7672, -3032 }, { 0, 127, 0, 255}}},
{{{ -224, 389, 235 }, 0, { 6470, -4062 }, { 0, 127, 0, 255}}},
{{{ -30, 389, 495 }, 0, { 6856, -3544 }, { 0, 127, 0, 255}}},
{{{ -282, 389, -714 }, 0, { 6352, -5960 }, { 0, 127, 0, 255}}},
};

Light_t Light_ttm_geo_0008A8_0x700cb68 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_ttm_geo_0008A8_0x700cb80 = {
{ 187, 187, 187}, 0, { 187, 187, 187}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttm_geo_0008A8_0x700cb60 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Ambient_t Light_ttm_geo_0008A8_0x700cb78 = {
{93, 93, 93}, 0, {93, 93, 93}, 0
};

Gfx DL_ttm_geo_0008A8_0x700cd10[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttm_geo_0008A8_0x700cc60),
gsSPDisplayList(DL_ttm_geo_0008A8_0x700ccc8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_0008A8_0x700cc60[] = {
gsDPSetTextureImage(0, 2, 1, ttm_geo_0008A8__texture_09004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttm_geo_0008A8_0x700cb68.col, 1),
gsSPLight(&Light_ttm_geo_0008A8_0x700cb60.col, 2),
gsSPVertex(VB_ttm_geo_0008A8_0x700cb90, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_ttm_geo_0008A8_0x700cb80.col, 1),
gsSPLight(&Light_ttm_geo_0008A8_0x700cb78.col, 2),
gsSPVertex(VB_ttm_geo_0008A8_0x700cbf0, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_0008A8_0x700ccc8[] = {
gsDPSetTextureImage(0, 2, 1, ttm_geo_0008A8__texture_09003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttm_geo_0008A8_0x700cb68.col, 1),
gsSPLight(&Light_ttm_geo_0008A8_0x700cb60.col, 2),
gsSPVertex(VB_ttm_geo_0008A8_0x700cc20, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

