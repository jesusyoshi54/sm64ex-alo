#include "custom.model.inc.h"
Vtx VB_castle_geo_001940_0x7068920[] = {
{{{ -153, 0, 154 }, 0, { 5078, 4564 }, { 0, 127, 0, 255}}},
{{{ 154, 0, 154 }, 0, { 6612, 4564 }, { 0, 127, 0, 255}}},
{{{ 154, 0, -153 }, 0, { 6612, 3032 }, { 0, 127, 0, 255}}},
{{{ -153, 0, -153 }, 0, { 5078, 3032 }, { 0, 127, 0, 255}}},
};

Vtx VB_castle_geo_001940_0x7068960[] = {
{{{ -153, 0, 154 }, 0, { -5140, -3098 }, { 0, 0, 127, 255}}},
{{{ -153, -409, 154 }, 0, { -5140, 990 }, { 0, 0, 127, 255}}},
{{{ 154, -409, 154 }, 0, { -2074, 990 }, { 0, 0, 127, 255}}},
{{{ -153, 0, -153 }, 0, { 2012, 0 }, { 129, 0, 0, 255}}},
{{{ -153, -409, 154 }, 0, { 5078, 4054 }, { 129, 0, 0, 255}}},
{{{ -153, 0, 154 }, 0, { 5078, 0 }, { 129, 0, 0, 255}}},
{{{ -153, -409, -153 }, 0, { 2012, 4054 }, { 129, 0, 0, 255}}},
{{{ 154, 0, -153 }, 0, { -2074, -3098 }, { 0, 0, 129, 255}}},
{{{ -153, -409, -153 }, 0, { -5140, 990 }, { 0, 0, 129, 255}}},
{{{ -153, 0, -153 }, 0, { -5140, -3098 }, { 0, 0, 129, 255}}},
{{{ 154, -409, -153 }, 0, { -2074, 990 }, { 0, 0, 129, 255}}},
{{{ 154, 0, 154 }, 0, { 5078, 0 }, { 127, 0, 0, 255}}},
{{{ 154, -409, -153 }, 0, { 2012, 4054 }, { 127, 0, 0, 255}}},
{{{ 154, 0, -153 }, 0, { 2012, 0 }, { 127, 0, 0, 255}}},
{{{ 154, -409, 154 }, 0, { 5078, 4054 }, { 127, 0, 0, 255}}},
{{{ 154, 0, 154 }, 0, { -2074, -3098 }, { 0, 0, 127, 255}}},
};

Light_t Light_castle_geo_001940_0x7068910 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_castle_geo_001940_0x7068908 = {
{95, 95, 95}, 0, {95, 95, 95}, 0
};

Gfx DL_castle_geo_001940_0x7068b10[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_castle_geo_001940_0x7068a60),
gsSPDisplayList(DL_castle_geo_001940_0x7068aa8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_castle_geo_001940_0x7068a60[] = {
gsDPSetTextureImage(0, 2, 1, castle_geo_001940__texture_0900B000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_castle_geo_001940_0x7068910.col, 1),
gsSPLight(&Light_castle_geo_001940_0x7068908.col, 2),
gsSPVertex(VB_castle_geo_001940_0x7068920, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_castle_geo_001940_0x7068aa8[] = {
gsDPSetTextureImage(0, 2, 1, castle_geo_001940__texture_09003000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_castle_geo_001940_0x7068960, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

