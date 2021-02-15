#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_0002F0_0x7002d10[] = {
{{{ 0, -2364, 1262 }, 0, { 1366, -1156 }, { 8, 144, 57, 255}}},
{{{ 1498, -1852, 2050 }, 0, { 580, -2652 }, { 8, 144, 57, 255}}},
{{{ 0, -1340, 3277 }, 0, { -644, -1156 }, { 8, 144, 57, 255}}},
{{{ 1498, -1852, 2050 }, 0, { 580, -2652 }, { 22, 153, 70, 255}}},
{{{ 1946, -1340, 2662 }, 0, { 0, -3098 }, { 22, 153, 70, 255}}},
{{{ 0, -1340, 3277 }, 0, { -644, -1156 }, { 22, 153, 70, 255}}},
};

Vtx VB_bowser_3_geo_0002F0_0x7002d70[] = {
{{{ 0, 307, 3277 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 1946, 307, 2662 }, 0, { 2284, 582 }, { 0, 127, 0, 255}}},
{{{ 1498, 307, 2050 }, 0, { 1986, 174 }, { 0, 127, 0, 255}}},
{{{ 0, 307, 1262 }, 0, { 990, -350 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_0002F0_0x7002db0[] = {
{{{ 0, -1340, 3277 }, 0, { 958, 2012 }, { 129, 0, 0, 255}}},
{{{ 0, 307, 3277 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ 0, -2364, 1262 }, 0, { -1052, 2012 }, { 129, 0, 0, 255}}},
{{{ 1498, 307, 2050 }, 0, { 234, 0 }, { 102, 0, 181, 255}}},
{{{ 1946, 307, 2662 }, 0, { 990, 0 }, { 102, 0, 181, 255}}},
{{{ 1946, -1340, 2662 }, 0, { 990, 2012 }, { 102, 0, 181, 255}}},
{{{ 1498, -1852, 2050 }, 0, { 234, 2012 }, { 102, 0, 181, 255}}},
{{{ 0, -2364, 1262 }, 0, { 990, 2012 }, { 59, 0, 144, 255}}},
{{{ 0, 307, 1262 }, 0, { 990, 0 }, { 59, 0, 144, 255}}},
{{{ 1498, 307, 2050 }, 0, { -698, 0 }, { 59, 0, 144, 255}}},
{{{ 1498, -1852, 2050 }, 0, { -698, 2012 }, { 59, 0, 144, 255}}},
{{{ 1946, -1340, 2662 }, 0, { 5340, 1816 }, { 38, 0, 121, 255}}},
{{{ 0, 307, 3277 }, 0, { 3800, 172 }, { 38, 0, 121, 255}}},
{{{ 0, -1340, 3277 }, 0, { 3800, 1816 }, { 38, 0, 121, 255}}},
{{{ 1946, 307, 2662 }, 0, { 5340, 172 }, { 38, 0, 121, 255}}},
{{{ 0, 307, 1262 }, 0, { -1020, 0 }, { 129, 0, 0, 255}}},
};

const Light_t Light_bowser_3_geo_0002F0_0x7002ce8 = {
{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

const Light_t Light_bowser_3_geo_0002F0_0x7002d00 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_bowser_3_geo_0002F0_0x7002ce0 = {
{34, 34, 34}, 0, {34, 34, 34}, 0
};

const Ambient_t Light_bowser_3_geo_0002F0_0x7002cf8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_bowser_3_geo_0002F0_0x7002f88[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bowser_3_geo_0002F0_0x7002eb0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowser_3_geo_0002F0_0x7002f20),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_0002F0_0x7002eb0[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_0002F0__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_bowser_3_geo_0002F0_0x7002ce8.col, 1),
gsSPLight(&Light_bowser_3_geo_0002F0_0x7002ce0.col, 2),
gsSPVertex(VB_bowser_3_geo_0002F0_0x7002d10, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_bowser_3_geo_0002F0_0x7002d00.col, 1),
gsSPLight(&Light_bowser_3_geo_0002F0_0x7002cf8.col, 2),
gsSPVertex(VB_bowser_3_geo_0002F0_0x7002d70, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_0002F0_0x7002f20[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_0002F0__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowser_3_geo_0002F0_0x7002db0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,1, 15, 2, 0),
gsSPEndDisplayList(),
};

