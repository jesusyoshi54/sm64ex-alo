#include "custom.model.inc.h"
Vtx VB_ttm_geo_000808_0x700bca0[] = {
{{{ 307, 32, 307 }, 0, { 0, 2418 }, { 0, 127, 0, 255}}},
{{{ 307, 32, -409 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -306, 32, -409 }, 0, { -1256, 990 }, { 0, 127, 0, 255}}},
{{{ -306, 32, 307 }, 0, { -1256, 2418 }, { 0, 127, 0, 255}}},
};

Vtx VB_ttm_geo_000808_0x700bce0[] = {
{{{ 307, 32, -409 }, 0, { 0, 990 }, { 88, 90, 0, 255}}},
{{{ 307, 32, 307 }, 0, { 0, 2418 }, { 88, 90, 0, 255}}},
{{{ 355, -15, 355 }, 0, { 64, 2514 }, { 88, 90, 0, 255}}},
{{{ 355, -15, 355 }, 0, { 64, 2514 }, { 0, 90, 88, 255}}},
{{{ 307, 32, 307 }, 0, { 0, 2418 }, { 0, 90, 88, 255}}},
{{{ -369, -30, 370 }, 0, { -1380, 2544 }, { 0, 90, 88, 255}}},
{{{ 307, 32, 307 }, 0, { 0, 2418 }, { 0, 90, 89, 255}}},
{{{ -306, 32, 307 }, 0, { -1256, 2418 }, { 0, 90, 89, 255}}},
{{{ -369, -30, 370 }, 0, { -1380, 2544 }, { 0, 90, 89, 255}}},
{{{ -369, -30, 370 }, 0, { -1380, 2544 }, { 167, 90, 0, 255}}},
{{{ -306, 32, 307 }, 0, { -1256, 2418 }, { 167, 90, 0, 255}}},
{{{ -306, 32, -409 }, 0, { -1256, 990 }, { 167, 90, 0, 255}}},
};

Light_t Light_ttm_geo_000808_0x700bc78 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_ttm_geo_000808_0x700bc90 = {
{ 187, 187, 187}, 0, { 187, 187, 187}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttm_geo_000808_0x700bc70 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Ambient_t Light_ttm_geo_000808_0x700bc88 = {
{93, 93, 93}, 0, {93, 93, 93}, 0
};

Gfx DL_ttm_geo_000808_0x700be20[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttm_geo_000808_0x700bda0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_000808_0x700bda0[] = {
gsDPSetTextureImage(0, 2, 1, ttm_geo_000808__texture_09004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttm_geo_000808_0x700bc78.col, 1),
gsSPLight(&Light_ttm_geo_000808_0x700bc70.col, 2),
gsSPVertex(VB_ttm_geo_000808_0x700bca0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 2, 0),
gsSPLight(&Light_ttm_geo_000808_0x700bc90.col, 1),
gsSPLight(&Light_ttm_geo_000808_0x700bc88.col, 2),
gsSPVertex(VB_ttm_geo_000808_0x700bce0, 12, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSPEndDisplayList(),
};

