#include "custom.model.inc.h"
Vtx VB_unk_DL_05002e00_0x5002cc8[] = {
{{{ -118, 262, -203 }, 0, { -130, 364 }, { 0, 54, 142, 255}}},
{{{ 130, 0, -224 }, 0, { 1144, 2144 }, { 0, 10, 130, 255}}},
{{{ -129, 0, -224 }, 0, { -184, 2144 }, { 0, 10, 130, 255}}},
{{{ 119, 262, -203 }, 0, { 1088, 364 }, { 0, 54, 142, 255}}},
{{{ 109, 352, -108 }, 0, { 1034, -252 }, { 0, 92, 169, 255}}},
{{{ -108, 352, -108 }, 0, { -74, -252 }, { 0, 92, 169, 255}}},
{{{ -129, 0, 225 }, 0, { -184, 2144 }, { 0, 10, 126, 255}}},
{{{ 119, 262, 204 }, 0, { 1088, 364 }, { 0, 54, 114, 255}}},
{{{ -118, 262, 204 }, 0, { -130, 364 }, { 0, 54, 114, 255}}},
{{{ -108, 352, 109 }, 0, { -74, -252 }, { 0, 92, 87, 255}}},
{{{ 130, 0, 225 }, 0, { 1144, 2144 }, { 0, 10, 126, 255}}},
{{{ 109, 352, 109 }, 0, { 1034, -252 }, { 0, 92, 87, 255}}},
};

const Light_t Light_unk_DL_05002e00_0x5001bc0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_unk_DL_05002e00_0x5001bb8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_unk_DL_05002e00_0x5002e00[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_unk_DL_05002e00_0x5002d88),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_unk_DL_05002e00_0x5002d88[] = {
gsDPSetTextureImage(3, 2, 1, unk_DL_05002e00__texture_05001C48),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_unk_DL_05002e00_0x5001bc0.col, 1),
gsSPLight(&Light_unk_DL_05002e00_0x5001bb8.col, 2),
gsSPVertex(VB_unk_DL_05002e00_0x5002cc8, 12, 0),
gsSP2Triangles(0, 1, 2, 0,1, 0, 3, 0),
gsSP2Triangles(4, 3, 0, 0,5, 4, 0, 0),
gsSP2Triangles(6, 7, 8, 0,8, 7, 9, 0),
gsSP2Triangles(7, 6, 10, 0,11, 9, 7, 0),
gsSPEndDisplayList(),
};

