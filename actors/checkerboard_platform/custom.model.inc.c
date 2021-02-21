#include "custom.model.inc.h"
Vtx VB_checkerboard_platform_geo_0x800d440[] = {
{{{ -255, -25, 154 }, 0, { 1504, 480 }, { 129, 0, 0, 255}}},
{{{ -255, 26, 154 }, 0, { 1504, 0 }, { 129, 0, 0, 255}}},
{{{ -255, 26, -153 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -255, -25, -153 }, 0, { 0, 480 }, { 129, 0, 0, 255}}},
{{{ 256, -25, -153 }, 0, { 1504, 480 }, { 127, 0, 0, 255}}},
{{{ 256, 26, 154 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 256, -25, 154 }, 0, { 0, 480 }, { 127, 0, 0, 255}}},
{{{ 256, 26, -153 }, 0, { 1504, 0 }, { 127, 0, 0, 255}}},
};

Vtx VB_checkerboard_platform_geo_0x800d4c0[] = {
{{{ 256, -25, 154 }, 0, { 2528, 992 }, { 0, 129, 0, 255}}},
{{{ -255, -25, -153 }, 0, { 0, -512 }, { 0, 129, 0, 255}}},
{{{ 256, -25, -153 }, 0, { 2528, -512 }, { 0, 129, 0, 255}}},
{{{ 256, 26, -153 }, 0, { 2528, -512 }, { 0, 127, 0, 255}}},
{{{ -255, 26, 154 }, 0, { 0, 992 }, { 0, 127, 0, 255}}},
{{{ 256, 26, 154 }, 0, { 2528, 992 }, { 0, 127, 0, 255}}},
{{{ -255, 26, -153 }, 0, { 0, -512 }, { 0, 127, 0, 255}}},
{{{ -255, -25, -153 }, 0, { 2528, 480 }, { 0, 0, 129, 255}}},
{{{ -255, 26, -153 }, 0, { 2528, 0 }, { 0, 0, 129, 255}}},
{{{ 256, 26, -153 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 256, -25, -153 }, 0, { 0, 480 }, { 0, 0, 129, 255}}},
{{{ 256, -25, 154 }, 0, { 2528, 480 }, { 0, 0, 127, 255}}},
{{{ -255, 26, 154 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -255, -25, 154 }, 0, { 0, 480 }, { 0, 0, 127, 255}}},
{{{ 256, 26, 154 }, 0, { 2528, 0 }, { 0, 0, 127, 255}}},
{{{ -255, -25, 154 }, 0, { 0, 992 }, { 0, 129, 0, 255}}},
};

Light_t Light_checkerboard_platform_geo_0x800c830 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_checkerboard_platform_geo_0x800c828 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_checkerboard_platform_geo_0x800d680[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 4, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 60),
gsSPDisplayList(DL_checkerboard_platform_geo_0x800d5c0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_checkerboard_platform_geo_0x800d618),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_checkerboard_platform_geo_0x800d5c0[] = {
gsDPSetTextureImage(0, 2, 1, checkerboard_platform_geo__texture_0800C840),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 256),
gsSPLight(&Light_checkerboard_platform_geo_0x800c830.col, 1),
gsSPLight(&Light_checkerboard_platform_geo_0x800c828.col, 2),
gsSPVertex(VB_checkerboard_platform_geo_0x800d440, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_checkerboard_platform_geo_0x800d618[] = {
gsDPSetTextureImage(0, 2, 1, checkerboard_platform_geo__texture_0800CC40),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_checkerboard_platform_geo_0x800d4c0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};

