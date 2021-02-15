#include "custom.model.inc.h"
Vtx VB_bowser_3_1_0xe001020[] = {
{{{ 0, 0, -1038 }, 0, { -16, -13968 }, { 0, 253, 0, 255}}},
{{{ -899, 0, 519 }, 0, { 12066, 6960 }, { 0, 253, 0, 255}}},
{{{ -899, 0, -519 }, 0, { 12066, -6992 }, { 0, 253, 0, 255}}},
{{{ 0, 0, 1038 }, 0, { -16, 13936 }, { 0, 253, 0, 255}}},
{{{ 899, 0, 519 }, 0, { -12098, 6960 }, { 0, 253, 0, 255}}},
{{{ 899, 0, -519 }, 0, { -12098, -6992 }, { 0, 253, 0, 255}}},
{{{ -899, 191, -519 }, 0, { -6992, -2587 }, { 253, 0, 0, 255}}},
{{{ -899, 0, 519 }, 0, { 6960, -16 }, { 253, 0, 0, 255}}},
{{{ -899, 191, 519 }, 0, { 6960, -2587 }, { 253, 0, 0, 255}}},
};

Vtx VB_bowser_3_1_0xe0010b0[] = {
{{{ -899, 0, 519 }, 0, { 6960, -16 }, { 253, 0, 0, 255}}},
{{{ -899, 191, -519 }, 0, { -6992, -2587 }, { 253, 0, 0, 255}}},
{{{ -899, 0, -519 }, 0, { -6992, -16 }, { 253, 0, 0, 255}}},
{{{ -899, 191, -519 }, 0, { 6960, -2587 }, { 254, 0, 253, 255}}},
{{{ 0, 0, -1038 }, 0, { -6992, -16 }, { 254, 0, 253, 255}}},
{{{ -899, 0, -519 }, 0, { 6960, -16 }, { 254, 0, 253, 255}}},
{{{ 0, 191, -1038 }, 0, { -6992, -2587 }, { 254, 0, 253, 255}}},
{{{ 0, 191, -1038 }, 0, { 6960, -2587 }, { 2, 0, 253, 255}}},
{{{ 899, 0, -519 }, 0, { -6992, -16 }, { 2, 0, 253, 255}}},
{{{ 0, 0, -1038 }, 0, { 6960, -16 }, { 2, 0, 253, 255}}},
{{{ 899, 191, -519 }, 0, { -6992, -2587 }, { 2, 0, 253, 255}}},
};

Vtx VB_bowser_3_1_0xe001160[] = {
{{{ 899, 0, -519 }, 0, { 6960, -16 }, { 3, 0, 0, 255}}},
{{{ 899, 191, 519 }, 0, { -6992, -2587 }, { 3, 0, 0, 255}}},
{{{ 899, 0, 519 }, 0, { -6992, -16 }, { 3, 0, 0, 255}}},
{{{ 899, 191, -519 }, 0, { 6960, -2587 }, { 3, 0, 0, 255}}},
{{{ 899, 191, 519 }, 0, { 6960, -2587 }, { 2, 0, 3, 255}}},
{{{ 0, 0, 1038 }, 0, { -6992, -16 }, { 2, 0, 3, 255}}},
{{{ 899, 0, 519 }, 0, { 6960, -16 }, { 2, 0, 3, 255}}},
{{{ 0, 191, 1038 }, 0, { -6992, -2587 }, { 2, 0, 3, 255}}},
{{{ 0, 191, 1038 }, 0, { 6960, -2587 }, { 254, 0, 3, 255}}},
{{{ -899, 0, 519 }, 0, { -6992, -16 }, { 254, 0, 3, 255}}},
{{{ 0, 0, 1038 }, 0, { 6960, -16 }, { 254, 0, 3, 255}}},
};

Vtx VB_bowser_3_1_0xe001210[] = {
{{{ -899, 0, 519 }, 0, { -6992, -16 }, { 254, 0, 3, 255}}},
{{{ 0, 191, 1038 }, 0, { 6960, -2587 }, { 254, 0, 3, 255}}},
{{{ -899, 191, 519 }, 0, { -6992, -2587 }, { 254, 0, 3, 255}}},
{{{ 0, 191, 1038 }, 0, { -16, 13936 }, { 0, 3, 0, 255}}},
{{{ -899, 191, -519 }, 0, { -12098, -6992 }, { 0, 3, 0, 255}}},
{{{ -899, 191, 519 }, 0, { -12098, 6960 }, { 0, 3, 0, 255}}},
{{{ 0, 191, -1038 }, 0, { -16, -13968 }, { 0, 3, 0, 255}}},
{{{ 899, 191, 519 }, 0, { 12066, 6960 }, { 0, 3, 0, 255}}},
{{{ 899, 191, -519 }, 0, { 12066, -6992 }, { 0, 3, 0, 255}}},
};

const Light_t Light_bowser_3_1_0xe000008 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 73, 73, 73}, 0
};

const Ambient_t Light_bowser_3_1_0xe000000 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_bowser_3_1_0xe0012a0[] = {
gsDPPipeSync(),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPLoadSync(),
gsSPLight(&Light_bowser_3_1_0xe000000.col, 2),
gsSPLight(&Light_bowser_3_1_0xe000008.col, 1),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, bowser_3_1__texture_0E000018),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_3_1_0xe001020, 9, 0),
gsSP2Triangles(0, 1, 2, 0,1, 0, 3, 0),
gsSP2Triangles(3, 0, 4, 0,4, 0, 5, 0),
gsSP1Triangle(6, 7, 8, 0),
gsSPVertex(VB_bowser_3_1_0xe0010b0, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(4, 3, 6, 0,7, 8, 9, 0),
gsSP1Triangle(8, 7, 10, 0),
gsSPVertex(VB_bowser_3_1_0xe001160, 11, 0),
gsSP2Triangles(0, 1, 2, 0,1, 0, 3, 0),
gsSP2Triangles(4, 5, 6, 0,5, 4, 7, 0),
gsSP1Triangle(8, 9, 10, 0),
gsSPVertex(VB_bowser_3_1_0xe001210, 9, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(4, 3, 6, 0,6, 3, 7, 0),
gsSP1Triangle(6, 7, 8, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPEndDisplayList(),
};

