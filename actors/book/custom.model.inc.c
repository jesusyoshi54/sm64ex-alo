#include "custom.model.inc.h"
Vtx VB_bookend_geo_0x5002d70[] = {
{{{ -9, 31, -50 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ 10, 31, 0 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 10, 31, -50 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -9, 31, 0 }, 0, { 479, 990 }, { 0, 127, 0, 255}}},
{{{ 10, -30, -50 }, 0, { 0, 990 }, { 0, 129, 0, 255}}},
{{{ 10, -30, 0 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
{{{ -9, -30, 0 }, 0, { 479, 0 }, { 0, 129, 0, 255}}},
{{{ -9, -30, -50 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
{{{ 10, -30, -50 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ -9, 31, -50 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 10, 31, -50 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -9, -30, -50 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
};

Vtx VB_bookend_geo_0x5002e30[] = {
{{{ 10, 31, 0 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -9, 31, 0 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -9, -30, 0 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 10, -30, 0 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ -9, -30, -50 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -9, 31, 0 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -9, 31, -50 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -9, -30, 0 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ 10, 31, -50 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 10, 31, 0 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 10, -30, 0 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 10, -30, -50 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
};

Light_t Light_bookend_geo_0x5002560 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_bookend_geo_0x5002558 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_bookend_geo_0x5002fb0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 5, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 124),
gsSPDisplayList(DL_bookend_geo_0x5002ef0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bookend_geo_0x5002f58),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_bookend_geo_0x5002ef0[] = {
gsDPSetTextureImage(0, 2, 1, bookend_geo__texture_05000C60),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 512),
gsSPLight(&Light_bookend_geo_0x5002560.col, 1),
gsSPLight(&Light_bookend_geo_0x5002558.col, 2),
gsSPVertex(VB_bookend_geo_0x5002d70, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

Gfx DL_bookend_geo_0x5002f58[] = {
gsDPSetTextureImage(0, 2, 1, bookend_geo__texture_05002570),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bookend_geo_0x5002e30, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSPEndDisplayList(),
};

