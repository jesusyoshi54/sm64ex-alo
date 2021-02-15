#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_000368_0x7003d28[] = {
{{{ 0, -1340, -3276 }, 0, { 5896, -1156 }, { 234, 153, 186, 255}}},
{{{ 0, -1852, -2522 }, 0, { 5144, -1156 }, { 234, 153, 186, 255}}},
{{{ -1945, -1340, -2661 }, 0, { 5282, 786 }, { 234, 153, 186, 255}}},
{{{ 0, -1852, -2522 }, 0, { 5144, -1156 }, { 231, 144, 204, 255}}},
{{{ -787, -2364, -1024 }, 0, { 3648, -370 }, { 231, 144, 204, 255}}},
{{{ -1945, -1340, -2661 }, 0, { 5282, 786 }, { 231, 144, 204, 255}}},
};

Vtx VB_bowser_3_geo_000368_0x7003d88[] = {
{{{ -787, 307, -1024 }, 0, { 466, -1872 }, { 0, 127, 0, 255}}},
{{{ 0, 307, -2522 }, 0, { 990, -2870 }, { 0, 127, 0, 255}}},
{{{ 0, 307, -3276 }, 0, { 990, -3370 }, { 0, 127, 0, 255}}},
{{{ -1945, 307, -2661 }, 0, { -302, -2962 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_000368_0x7003dc8[] = {
{{{ -787, -2364, -1024 }, 0, { -1010, 2012 }, { 153, 0, 73, 255}}},
{{{ -787, 307, -1024 }, 0, { -1010, 0 }, { 153, 0, 73, 255}}},
{{{ -1945, -1340, -2661 }, 0, { 990, 2012 }, { 153, 0, 73, 255}}},
{{{ -1945, -1340, -2661 }, 0, { 13006, 1816 }, { 218, 0, 135, 255}}},
{{{ 0, 307, -3276 }, 0, { 11466, 172 }, { 218, 0, 135, 255}}},
{{{ 0, -1340, -3276 }, 0, { 11466, 1816 }, { 218, 0, 135, 255}}},
{{{ -1945, 307, -2661 }, 0, { 13006, 172 }, { 218, 0, 135, 255}}},
{{{ 0, -1340, -3276 }, 0, { 990, 2012 }, { 127, 0, 0, 255}}},
{{{ 0, 307, -3276 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 0, 307, -2522 }, 0, { 238, 0 }, { 127, 0, 0, 255}}},
{{{ 0, -1852, -2522 }, 0, { 238, 2012 }, { 127, 0, 0, 255}}},
{{{ 0, 307, -2522 }, 0, { -698, 0 }, { 112, 0, 59, 255}}},
{{{ -787, -2364, -1024 }, 0, { 990, 2012 }, { 112, 0, 59, 255}}},
{{{ 0, -1852, -2522 }, 0, { -698, 2012 }, { 112, 0, 59, 255}}},
{{{ -787, 307, -1024 }, 0, { 990, 0 }, { 112, 0, 59, 255}}},
{{{ -1945, 307, -2661 }, 0, { 990, 0 }, { 153, 0, 73, 255}}},
};

const Light_t Light_bowser_3_geo_000368_0x7003d00 = {
{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

const Light_t Light_bowser_3_geo_000368_0x7003d18 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_bowser_3_geo_000368_0x7003cf8 = {
{34, 34, 34}, 0, {34, 34, 34}, 0
};

const Ambient_t Light_bowser_3_geo_000368_0x7003d10 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_bowser_3_geo_000368_0x7003fa0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bowser_3_geo_000368_0x7003ec8),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowser_3_geo_000368_0x7003f38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_000368_0x7003ec8[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000368__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_bowser_3_geo_000368_0x7003d00.col, 1),
gsSPLight(&Light_bowser_3_geo_000368_0x7003cf8.col, 2),
gsSPVertex(VB_bowser_3_geo_000368_0x7003d28, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_bowser_3_geo_000368_0x7003d18.col, 1),
gsSPLight(&Light_bowser_3_geo_000368_0x7003d10.col, 2),
gsSPVertex(VB_bowser_3_geo_000368_0x7003d88, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_000368_0x7003f38[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000368__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowser_3_geo_000368_0x7003dc8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,1, 15, 2, 0),
gsSPEndDisplayList(),
};

