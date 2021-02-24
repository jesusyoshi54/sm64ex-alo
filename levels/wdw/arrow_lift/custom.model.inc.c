#include "custom.model.inc.h"
Vtx VB_wdw_geo_000598_0x7012c20[] = {
{{{ 63, 127, -60 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ -64, 127, 67 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 63, 127, 67 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -64, 127, -60 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_wdw_geo_000598_0x7012c60[] = {
{{{ 63, 127, -60 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -64, 0, -60 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ -64, 127, -60 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 63, 127, 67 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 63, 0, 67 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 63, 0, -60 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 63, 127, -60 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ -64, 127, 67 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -64, 0, 67 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 63, 0, 67 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ 63, 127, 67 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -64, 127, -60 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -64, 0, -60 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -64, 0, 67 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -64, 127, 67 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_wdw_geo_000598_0x7012d50[] = {
{{{ 63, 0, 67 }, 0, { 0, 990 }, { 0, 129, 0, 255}}},
{{{ -64, 0, 67 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
{{{ -64, 0, -60 }, 0, { 990, 0 }, { 0, 129, 0, 255}}},
{{{ 63, 127, -60 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 63, 0, -60 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ -64, 0, -60 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ 63, 0, -60 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
};

Light_t Light_wdw_geo_000598_0x7012c10 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wdw_geo_000598_0x7012c08 = {
{153, 153, 153}, 0, {153, 153, 153}, 0
};

Gfx DL_wdw_geo_000598_0x7012e88[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wdw_geo_000598_0x7012dc0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wdw_geo_000598_0x7012e08),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_000598_0x7012dc0[] = {
gsDPSetTextureImage(0, 2, 1, wdw_geo_000598__texture_07001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wdw_geo_000598_0x7012c10.col, 1),
gsSPLight(&Light_wdw_geo_000598_0x7012c08.col, 2),
gsSPVertex(VB_wdw_geo_000598_0x7012c20, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_000598_0x7012e08[] = {
gsDPSetTextureImage(0, 2, 1, wdw_geo_000598__texture_09004000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wdw_geo_000598_0x7012c60, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 13, 14, 0),
gsSPVertex(VB_wdw_geo_000598_0x7012d50, 7, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(0, 2, 6, 0),
gsSPEndDisplayList(),
};

