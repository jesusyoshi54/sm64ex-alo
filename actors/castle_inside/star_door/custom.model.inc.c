#include "custom.model.inc.h"
Vtx VB_castle_geo_000F00_0x703bd40[] = {
{{{ -76, 0, -15 }, 0, { 478, 990 }, { 129, 0, 0, 255}}},
{{{ -76, 0, 15 }, 0, { 992, 990 }, { 129, 0, 0, 255}}},
{{{ -76, 256, 15 }, 0, { 992, 0 }, { 129, 0, 0, 255}}},
{{{ -76, 256, -15 }, 0, { 1100, 460 }, { 0, 127, 0, 255}}},
{{{ 79, 256, 15 }, 0, { -650, 240 }, { 0, 127, 0, 255}}},
{{{ 79, 256, -15 }, 0, { -542, 734 }, { 0, 127, 0, 255}}},
{{{ -76, 256, 15 }, 0, { 990, -34 }, { 0, 127, 0, 255}}},
{{{ 79, 0, -15 }, 0, { 1234, -116 }, { 0, 129, 0, 255}}},
{{{ -76, 0, 15 }, 0, { -174, 868 }, { 0, 129, 0, 255}}},
{{{ -76, 0, -15 }, 0, { -604, 498 }, { 0, 129, 0, 255}}},
{{{ 79, 0, 15 }, 0, { 1664, 254 }, { 0, 129, 0, 255}}},
{{{ 79, 0, 15 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 79, 0, -15 }, 0, { 584, 990 }, { 127, 0, 0, 255}}},
{{{ 79, 256, -15 }, 0, { 584, 0 }, { 127, 0, 0, 255}}},
{{{ 79, 256, 15 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ -76, 256, -15 }, 0, { 480, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_castle_geo_000F00_0x703be40[] = {
{{{ -76, 0, 15 }, 0, { 0, 2012 }, { 0, 0, 127, 255}}},
{{{ 79, 0, 15 }, 0, { 990, 2012 }, { 0, 0, 127, 255}}},
{{{ 79, 256, 15 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -76, 256, 15 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
};

Vtx VB_castle_geo_000F00_0x703be80[] = {
{{{ 79, 0, -15 }, 0, { 0, 2012 }, { 0, 0, 129, 255}}},
{{{ -76, 256, -15 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 79, 256, -15 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -76, 0, -15 }, 0, { 990, 2012 }, { 0, 0, 129, 255}}},
};

Light_t Light_castle_geo_000F00_0x703bd30 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_castle_geo_000F00_0x703bd28 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_castle_geo_000F00_0x703bfa8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_castle_geo_000F00_0x703bec0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_castle_geo_000F00_0x703bf38),
gsSPDisplayList(DL_castle_geo_000F00_0x703bf70),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_castle_geo_000F00_0x703bec0[] = {
gsDPSetTextureImage(0, 2, 1, castle_geo_000F00__texture_07005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_castle_geo_000F00_0x703bd30.col, 1),
gsSPLight(&Light_castle_geo_000F00_0x703bd28.col, 2),
gsSPVertex(VB_castle_geo_000F00_0x703bd40, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_castle_geo_000F00_0x703bf38[] = {
gsDPSetTextureImage(0, 2, 1, castle_geo_000F00__texture_07003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_castle_geo_000F00_0x703be40, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_castle_geo_000F00_0x703bf70[] = {
gsDPSetTextureImage(0, 2, 1, castle_geo_000F00__texture_07004800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_castle_geo_000F00_0x703be80, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

