#include "custom.model.inc.h"
Vtx VB_mr_i_geo_0x6000000[] = {
{{{ -100, 0, 0 }, 0, { 0, 2016 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 0 }, 0, { 992, 2016 }, { 255, 255, 255, 255}}},
{{{ 0, 200, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -100, 200, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 2016 }, { 255, 255, 255, 255}}},
{{{ 100, 0, 0 }, 0, { 992, 2016 }, { 255, 255, 255, 255}}},
{{{ 100, 200, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ 0, 200, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_mr_i_geo_0x6002080[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_mr_i_geo_0x6000000, 8, 0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsDPSetTextureImage(0, 2, 1, mr_i_geo__texture_06000080),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsDPSetTextureImage(0, 2, 1, mr_i_geo__texture_06001080),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

