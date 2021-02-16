#include "custom.model.inc.h"
Vtx VB_thi_geo_0005F0_0x70076d8[] = {
{{{ -409, 0, -409 }, 0, { -848, 172 }, { 172, 84, 214, 255}}},
{{{ 410, 0, 410 }, 0, { 786, 1806 }, { 84, 84, 42, 255}}},
{{{ 410, 0, -409 }, 0, { 786, 172 }, { 51, 51, 153, 255}}},
{{{ -409, 0, 410 }, 0, { -848, 1806 }, { 205, 51, 103, 255}}},
};

Vtx VB_thi_geo_0005F0_0x7007718[] = {
{{{ -409, -101, -409 }, 0, { 990, 224 }, { 192, 212, 156, 255}}},
{{{ -409, 0, -409 }, 0, { 990, 0 }, { 172, 84, 214, 255}}},
{{{ 410, 0, -409 }, 0, { 0, 0 }, { 51, 51, 153, 255}}},
{{{ 410, -101, -409 }, 0, { 0, 224 }, { 100, 212, 192, 255}}},
{{{ 410, 0, 410 }, 0, { 990, 0 }, { 84, 84, 42, 255}}},
{{{ 410, -101, 410 }, 0, { 990, 224 }, { 64, 212, 100, 255}}},
{{{ 410, -101, 410 }, 0, { 0, 224 }, { 64, 212, 100, 255}}},
{{{ -409, 0, 410 }, 0, { 990, 0 }, { 205, 51, 103, 255}}},
{{{ -409, -101, 410 }, 0, { 990, 224 }, { 156, 212, 64, 255}}},
{{{ 410, 0, 410 }, 0, { 0, 0 }, { 84, 84, 42, 255}}},
{{{ -409, 0, -409 }, 0, { 0, 0 }, { 172, 84, 214, 255}}},
{{{ -409, -101, -409 }, 0, { 0, 224 }, { 192, 212, 156, 255}}},
};

Vtx VB_thi_geo_0005F0_0x70077d8[] = {
{{{ -409, -101, -409 }, 0, { -438, 2624 }, { 192, 212, 156, 255}}},
{{{ 410, -101, -409 }, 0, { -1666, 2624 }, { 100, 212, 192, 255}}},
{{{ 0, -613, 0 }, 0, { -1052, 2010 }, { 0, 130, 0, 255}}},
{{{ 410, -101, 410 }, 0, { -1666, 1396 }, { 64, 212, 100, 255}}},
{{{ -409, -101, 410 }, 0, { -438, 1396 }, { 156, 212, 64, 255}}},
};

Light_t Light_thi_geo_0005F0_0x70076b0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_thi_geo_0005F0_0x70076c8 = {
{ 153, 153, 153}, 0, { 153, 153, 153}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_thi_geo_0005F0_0x70076a8 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Ambient_t Light_thi_geo_0005F0_0x70076c0 = {
{76, 76, 76}, 0, {76, 76, 76}, 0
};

Gfx DL_thi_geo_0005F0_0x7007930[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_thi_geo_0005F0_0x7007828),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_thi_geo_0005F0_0x7007870),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_thi_geo_0005F0_0x70078d8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_thi_geo_0005F0_0x7007828[] = {
gsDPSetTextureImage(0, 2, 1, thi_geo_0005F0__texture_09005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_thi_geo_0005F0_0x70076b0.col, 1),
gsSPLight(&Light_thi_geo_0005F0_0x70076a8.col, 2),
gsSPVertex(VB_thi_geo_0005F0_0x70076d8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_thi_geo_0005F0_0x7007870[] = {
gsDPSetTextureImage(0, 2, 1, thi_geo_0005F0__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_thi_geo_0005F0_0x7007718, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(3, 2, 4, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 9, 7, 0),
gsSP2Triangles(8, 7, 10, 0,8, 10, 11, 0),
gsSPEndDisplayList(),
};

Gfx DL_thi_geo_0005F0_0x70078d8[] = {
gsDPSetTextureImage(0, 2, 1, thi_geo_0005F0__texture_09004800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_thi_geo_0005F0_0x70076c8.col, 1),
gsSPLight(&Light_thi_geo_0005F0_0x70076c0.col, 2),
gsSPVertex(VB_thi_geo_0005F0_0x70077d8, 5, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSP2Triangles(3, 4, 2, 0,4, 0, 2, 0),
gsSPEndDisplayList(),
};

