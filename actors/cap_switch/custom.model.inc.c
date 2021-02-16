#include "custom.model.inc.h"
Vtx VB_cap_switch_geo_0x5002cc8[] = {
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

Vtx VB_cap_switch_geo_0x5003180[] = {
{{{ -118, 262, -203 }, 0, { 0, 0 }, { 217, 55, 149, 255}}},
{{{ 130, 0, -224 }, 0, { 0, 0 }, { 41, 11, 137, 255}}},
{{{ -129, 0, -224 }, 0, { 0, 0 }, { 174, 10, 160, 255}}},
{{{ 119, 262, -203 }, 0, { 0, 0 }, { 73, 44, 163, 255}}},
{{{ 260, 0, 0 }, 0, { 0, 0 }, { 124, 10, 232, 255}}},
{{{ -238, 262, 0 }, 0, { 0, 0 }, { 142, 52, 244, 255}}},
{{{ -108, 352, -108 }, 0, { 0, 0 }, { 219, 117, 224, 255}}},
{{{ 109, 352, -108 }, 0, { 0, 0 }, { 37, 109, 205, 255}}},
{{{ 239, 262, 0 }, 0, { 0, 0 }, { 114, 52, 12, 255}}},
{{{ -259, 0, 0 }, 0, { 0, 0 }, { 132, 10, 24, 255}}},
{{{ -118, 262, 204 }, 0, { 0, 0 }, { 183, 44, 93, 255}}},
{{{ -108, 352, 109 }, 0, { 0, 0 }, { 219, 109, 51, 255}}},
{{{ -129, 0, 225 }, 0, { 0, 0 }, { 215, 11, 119, 255}}},
{{{ 119, 262, 204 }, 0, { 0, 0 }, { 39, 55, 107, 255}}},
{{{ 109, 352, 109 }, 0, { 0, 0 }, { 37, 117, 32, 255}}},
{{{ 130, 0, 225 }, 0, { 0, 0 }, { 82, 10, 95, 255}}},
};

Light_t Light_cap_switch_geo_0x5001bc0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cap_switch_geo_0x5001bb8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_cap_switch_geo_0x5002e00[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_cap_switch_geo_0x5002d88),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_cap_switch_geo_0x5002d88[] = {
gsDPSetTextureImage(3, 2, 1, cap_switch_geo__texture_05001C48),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_cap_switch_geo_0x5001bc0.col, 1),
gsSPLight(&Light_cap_switch_geo_0x5001bb8.col, 2),
gsSPVertex(VB_cap_switch_geo_0x5002cc8, 12, 0),
gsSP2Triangles(0, 1, 2, 0,1, 0, 3, 0),
gsSP2Triangles(4, 3, 0, 0,5, 4, 0, 0),
gsSP2Triangles(6, 7, 8, 0,8, 7, 9, 0),
gsSP2Triangles(7, 6, 10, 0,11, 9, 7, 0),
gsSPEndDisplayList(),
};

Light_t Light_cap_switch_geo_0x5001bf0 = {
{ 255, 0, 0}, 0, { 255, 0, 0}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cap_switch_geo_0x5001be8 = {
{63, 0, 0}, 0, {63, 0, 0}, 0
};

Gfx DL_cap_switch_geo_0x5003350[] = {
gsSPLight(&Light_cap_switch_geo_0x5001bf0.col, 1),
gsSPLight(&Light_cap_switch_geo_0x5001be8.col, 2),
gsSPDisplayList(DL_cap_switch_geo_0x5003280),
gsSPEndDisplayList(),
};

Gfx DL_cap_switch_geo_0x5003280[] = {
gsSPVertex(VB_cap_switch_geo_0x5003180, 16, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 4, 0),
gsSP2Triangles(1, 0, 3, 0,2, 5, 0, 0),
gsSP2Triangles(0, 5, 6, 0,7, 3, 0, 0),
gsSP2Triangles(6, 7, 0, 0,8, 3, 7, 0),
gsSP2Triangles(4, 3, 8, 0,9, 10, 5, 0),
gsSP2Triangles(11, 6, 5, 0,5, 10, 11, 0),
gsSP2Triangles(5, 2, 9, 0,10, 9, 12, 0),
gsSP2Triangles(12, 13, 10, 0,10, 13, 11, 0),
gsSP2Triangles(6, 11, 14, 0,14, 11, 13, 0),
gsSP2Triangles(6, 14, 7, 0,15, 8, 13, 0),
gsSP2Triangles(13, 8, 14, 0,13, 12, 15, 0),
gsSP2Triangles(8, 15, 4, 0,7, 14, 8, 0),
gsSPEndDisplayList(),
};

Light_t Light_cap_switch_geo_0x5001c08 = {
{ 7, 169, 37}, 0, { 7, 169, 37}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cap_switch_geo_0x5001c00 = {
{1, 42, 9}, 0, {1, 42, 9}, 0
};

Gfx DL_cap_switch_geo_0x5003370[] = {
gsSPLight(&Light_cap_switch_geo_0x5001c08.col, 1),
gsSPLight(&Light_cap_switch_geo_0x5001c00.col, 2),
gsSPDisplayList(DL_cap_switch_geo_0x5003280),
gsSPEndDisplayList(),
};

Light_t Light_cap_switch_geo_0x5001c20 = {
{ 0, 0, 255}, 0, { 0, 0, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cap_switch_geo_0x5001c18 = {
{0, 0, 63}, 0, {0, 0, 63}, 0
};

Gfx DL_cap_switch_geo_0x5003390[] = {
gsSPLight(&Light_cap_switch_geo_0x5001c20.col, 1),
gsSPLight(&Light_cap_switch_geo_0x5001c18.col, 2),
gsSPDisplayList(DL_cap_switch_geo_0x5003280),
gsSPEndDisplayList(),
};

Light_t Light_cap_switch_geo_0x5001c38 = {
{ 255, 150, 8}, 0, { 255, 150, 8}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cap_switch_geo_0x5001c30 = {
{63, 37, 2}, 0, {63, 37, 2}, 0
};

Gfx DL_cap_switch_geo_0x50033b0[] = {
gsSPLight(&Light_cap_switch_geo_0x5001c38.col, 1),
gsSPLight(&Light_cap_switch_geo_0x5001c30.col, 2),
gsSPDisplayList(DL_cap_switch_geo_0x5003280),
gsSPEndDisplayList(),
};

