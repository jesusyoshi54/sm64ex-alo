#include "custom.model.inc.h"
Vtx VB_ttm_geo_000830_0x700bec0[] = {
{{{ 614, -1486, -697 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ -613, -1486, -697 }, 0, { 2420, 990 }, { 0, 0, 129, 255}}},
{{{ -613, 1487, -697 }, 0, { 2420, -4946 }, { 0, 0, 129, 255}}},
{{{ 205, 1487, -697 }, 0, { 786, -4946 }, { 0, 0, 129, 255}}},
{{{ -613, 1282, 717 }, 0, { 0, -1470 }, { 0, 0, 127, 255}}},
{{{ -613, 49, 717 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 614, 49, 717 }, 0, { 2420, 990 }, { 0, 0, 127, 255}}},
{{{ 205, 1282, 717 }, 0, { 1604, -1470 }, { 0, 0, 127, 255}}},
};

Vtx VB_ttm_geo_000830_0x700bf40[] = {
{{{ 205, 1282, 717 }, 0, { 1604, 990 }, { 0, 125, 18, 255}}},
{{{ 205, 1487, -697 }, 0, { 1604, -1864 }, { 0, 125, 18, 255}}},
{{{ -613, 1282, 717 }, 0, { 0, 990 }, { 0, 125, 18, 255}}},
{{{ -613, 1487, -697 }, 0, { 0, -1864 }, { 0, 125, 18, 255}}},
{{{ 205, 1282, 717 }, 0, { 4874, -4536 }, { 120, 39, 5, 255}}},
{{{ 614, 49, 717 }, 0, { 4874, -2076 }, { 120, 39, 5, 255}}},
{{{ 205, 1487, -697 }, 0, { 7698, -4946 }, { 120, 39, 5, 255}}},
{{{ 614, -1486, -697 }, 0, { 7698, 990 }, { 124, 17, 238, 255}}},
{{{ 205, 1487, -697 }, 0, { 7698, -4946 }, { 124, 17, 238, 255}}},
{{{ 614, 49, 717 }, 0, { 4874, -2076 }, { 124, 17, 238, 255}}},
};

Light_t Light_ttm_geo_000830_0x700be98 = {
{ 153, 153, 153}, 0, { 153, 153, 153}, 0, { 40, 40, 40}, 0
};

Light_t Light_ttm_geo_000830_0x700beb0 = {
{ 187, 187, 187}, 0, { 187, 187, 187}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttm_geo_000830_0x700be90 = {
{76, 76, 76}, 0, {76, 76, 76}, 0
};

Ambient_t Light_ttm_geo_000830_0x700bea8 = {
{93, 93, 93}, 0, {93, 93, 93}, 0
};

Gfx DL_ttm_geo_000830_0x700c070[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttm_geo_000830_0x700bfe0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_000830_0x700bfe0[] = {
gsDPSetTextureImage(0, 2, 1, ttm_geo_000830__texture_09004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttm_geo_000830_0x700be98.col, 1),
gsSPLight(&Light_ttm_geo_000830_0x700be90.col, 2),
gsSPVertex(VB_ttm_geo_000830_0x700bec0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,6, 7, 4, 0),
gsSPLight(&Light_ttm_geo_000830_0x700beb0.col, 1),
gsSPLight(&Light_ttm_geo_000830_0x700bea8.col, 2),
gsSPVertex(VB_ttm_geo_000830_0x700bf40, 10, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSP2Triangles(4, 5, 6, 0,7, 8, 9, 0),
gsSPEndDisplayList(),
};

