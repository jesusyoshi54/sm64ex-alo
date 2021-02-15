#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_0002D8_0x70029d8[] = {
{{{ -1497, -1852, 2050 }, 0, { 580, 338 }, { 248, 144, 57, 255}}},
{{{ 0, -2364, 1262 }, 0, { 1366, -1156 }, { 248, 144, 57, 255}}},
{{{ 0, -1340, 3277 }, 0, { -644, -1156 }, { 248, 144, 57, 255}}},
{{{ -1497, -1852, 2050 }, 0, { 580, 338 }, { 234, 153, 70, 255}}},
{{{ 0, -1340, 3277 }, 0, { -644, -1156 }, { 234, 153, 70, 255}}},
{{{ -1945, -1340, 2662 }, 0, { 0, 786 }, { 234, 153, 70, 255}}},
};

Vtx VB_bowser_3_geo_0002D8_0x7002a38[] = {
{{{ -1945, 307, 2662 }, 0, { -302, 582 }, { 0, 127, 0, 255}}},
{{{ 0, 307, 3277 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 0, 307, 1262 }, 0, { 990, -350 }, { 0, 127, 0, 255}}},
{{{ -1497, 307, 2050 }, 0, { -6, 174 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_0002D8_0x7002a78[] = {
{{{ 0, -2364, 1262 }, 0, { -1020, 2012 }, { 127, 0, 0, 255}}},
{{{ 0, 307, 1262 }, 0, { -1020, 0 }, { 127, 0, 0, 255}}},
{{{ 0, -1340, 3277 }, 0, { 990, 2012 }, { 127, 0, 0, 255}}},
{{{ 0, -1340, 3277 }, 0, { 3800, 1816 }, { 218, 0, 121, 255}}},
{{{ -1945, 307, 2662 }, 0, { 2260, 172 }, { 218, 0, 121, 255}}},
{{{ -1945, -1340, 2662 }, 0, { 2260, 1816 }, { 218, 0, 121, 255}}},
{{{ 0, 307, 3277 }, 0, { 3800, 172 }, { 218, 0, 121, 255}}},
{{{ -1945, 307, 2662 }, 0, { 234, 0 }, { 154, 0, 181, 255}}},
{{{ -1497, 307, 2050 }, 0, { 990, 0 }, { 154, 0, 181, 255}}},
{{{ -1497, -1852, 2050 }, 0, { 990, 2012 }, { 154, 0, 181, 255}}},
{{{ -1945, -1340, 2662 }, 0, { 234, 2012 }, { 154, 0, 181, 255}}},
{{{ -1497, 307, 2050 }, 0, { -698, 0 }, { 197, 0, 144, 255}}},
{{{ 0, -2364, 1262 }, 0, { 990, 2012 }, { 197, 0, 144, 255}}},
{{{ -1497, -1852, 2050 }, 0, { -698, 2012 }, { 197, 0, 144, 255}}},
{{{ 0, 307, 1262 }, 0, { 990, 0 }, { 197, 0, 144, 255}}},
{{{ 0, 307, 3277 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
};

const Light_t Light_bowser_3_geo_0002D8_0x70029b0 = {
{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

const Light_t Light_bowser_3_geo_0002D8_0x70029c8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_bowser_3_geo_0002D8_0x70029a8 = {
{34, 34, 34}, 0, {34, 34, 34}, 0
};

const Ambient_t Light_bowser_3_geo_0002D8_0x70029c0 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_bowser_3_geo_0002D8_0x7002c50[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bowser_3_geo_0002D8_0x7002b78),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowser_3_geo_0002D8_0x7002be8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_0002D8_0x7002b78[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_0002D8__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_bowser_3_geo_0002D8_0x70029b0.col, 1),
gsSPLight(&Light_bowser_3_geo_0002D8_0x70029a8.col, 2),
gsSPVertex(VB_bowser_3_geo_0002D8_0x70029d8, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_bowser_3_geo_0002D8_0x70029c8.col, 1),
gsSPLight(&Light_bowser_3_geo_0002D8_0x70029c0.col, 2),
gsSPVertex(VB_bowser_3_geo_0002D8_0x7002a38, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_0002D8_0x7002be8[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_0002D8__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowser_3_geo_0002D8_0x7002a78, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(10, 7, 9, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,1, 15, 2, 0),
gsSPEndDisplayList(),
};

