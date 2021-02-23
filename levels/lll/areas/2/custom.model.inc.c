#include "custom.model.inc.h"
Vtx VB_lll_2_0xe0f4c20[] = {
{{{ -611, 0, 660 }, 0, { -2103, -2270 }, { 0, 127, 0, 255}}},
{{{ 611, 0, -660 }, 0, { 2071, 2238 }, { 0, 127, 0, 255}}},
{{{ -660, 0, -611 }, 0, { -2270, 2071 }, { 0, 127, 0, 255}}},
{{{ 611, 0, -660 }, 0, { 2071, 2238 }, { 0, 127, 0, 255}}},
{{{ -611, 0, 660 }, 0, { -2103, -2270 }, { 0, 127, 0, 255}}},
{{{ 660, 0, 611 }, 0, { 2238, -2103 }, { 0, 127, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
};

Light_t Light_lll_2_0xe0f43d0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 127, 127, 127}, 0
};

Ambient_t Light_lll_2_0xe0f43d8 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_lll_2_0xe0f4d10[] = {
gsDPPipeSync(),
gsDPNoOp(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPLoadSync(),
gsSPLight(&Light_lll_2_0xe0f43d0.col, 1),
gsSPLight(&Light_lll_2_0xe0f43d8.col, 2),
gsDPSetTextureImage(0, 2, 1, lll_2__texture_0E0F4420),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_lll_2_0xe0f4c20, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSP1Triangle(12, 13, 14, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPEndDisplayList(),
};

