#include "custom.model.inc.h"
Vtx VB_purple_switch_geo_0x800c528[] = {
{{{ 102, 0, -101 }, 0, { 0, -543 }, { 83, 95, 0, 255}}},
{{{ 61, 36, -60 }, 0, { 1326, -287 }, { 83, 95, 0, 255}}},
{{{ 61, 36, 61 }, 0, { 1326, 478 }, { 83, 95, 0, 255}}},
{{{ -101, 0, -101 }, 0, { 0, 734 }, { 0, 95, 173, 255}}},
{{{ 61, 36, -60 }, 0, { 1326, -287 }, { 0, 95, 173, 255}}},
{{{ 102, 0, -101 }, 0, { 0, -543 }, { 0, 95, 173, 255}}},
{{{ -60, 36, -60 }, 0, { 1326, 478 }, { 0, 95, 173, 255}}},
{{{ -101, 0, 102 }, 0, { 0, 734 }, { 173, 95, 0, 255}}},
{{{ -60, 36, -60 }, 0, { 1326, -287 }, { 173, 95, 0, 255}}},
{{{ -101, 0, -101 }, 0, { 0, -543 }, { 173, 95, 0, 255}}},
{{{ -60, 36, 61 }, 0, { 1326, 478 }, { 173, 95, 0, 255}}},
{{{ 102, 0, 102 }, 0, { 0, -543 }, { 0, 95, 83, 255}}},
{{{ 61, 36, 61 }, 0, { 1326, -287 }, { 0, 95, 83, 255}}},
{{{ -60, 36, 61 }, 0, { 1326, 478 }, { 0, 95, 83, 255}}},
{{{ -101, 0, 102 }, 0, { 0, 734 }, { 0, 95, 83, 255}}},
{{{ 102, 0, 102 }, 0, { 0, 734 }, { 83, 95, 0, 255}}},
};

Vtx VB_purple_switch_geo_0x800c628[] = {
{{{ 61, 36, -60 }, 0, { 607, -134 }, { 0, 127, 0, 255}}},
{{{ -60, 36, 61 }, 0, { -159, 1090 }, { 0, 127, 0, 255}}},
{{{ 61, 36, 61 }, 0, { 607, 1090 }, { 0, 127, 0, 255}}},
{{{ -60, 36, -60 }, 0, { -159, -134 }, { 0, 127, 0, 255}}},
};

Light_t Light_purple_switch_geo_0x800c098 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_purple_switch_geo_0x800c090 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_purple_switch_geo_0x800c718[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 2, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 12),
gsSPDisplayList(DL_purple_switch_geo_0x800c668),
gsDPTileSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 5, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 124),
gsSPDisplayList(DL_purple_switch_geo_0x800c6e0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_purple_switch_geo_0x800c668[] = {
gsDPSetTextureImage(0, 2, 1, purple_switch_geo__texture_0800C0A8),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 63, 512),
gsSPLight(&Light_purple_switch_geo_0x800c098.col, 1),
gsSPLight(&Light_purple_switch_geo_0x800c090.col, 2),
gsSPVertex(VB_purple_switch_geo_0x800c528, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_purple_switch_geo_0x800c6e0[] = {
gsDPSetTextureImage(0, 2, 1, purple_switch_geo__texture_0800C128),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 512),
gsSPVertex(VB_purple_switch_geo_0x800c628, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

