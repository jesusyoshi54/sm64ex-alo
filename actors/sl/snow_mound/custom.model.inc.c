#include "custom.model.inc.h"
Vtx VB_sl_geo_000390_0x700a638[] = {
{{{ 102, 0, -255 }, 0, { 2522, 2010 }, { 89, 89, 0, 255}}},
{{{ 0, 102, 256 }, 0, { 0, 1498 }, { 89, 89, 0, 255}}},
{{{ 102, 0, 256 }, 0, { 0, 2010 }, { 89, 89, 0, 255}}},
{{{ 0, 102, -255 }, 0, { 2522, 1500 }, { 89, 89, 0, 255}}},
{{{ 0, 102, -255 }, 0, { 2522, 1500 }, { 166, 89, 0, 255}}},
{{{ -101, 0, 256 }, 0, { 0, 990 }, { 166, 89, 0, 255}}},
{{{ 0, 102, 256 }, 0, { 0, 1498 }, { 166, 89, 0, 255}}},
{{{ -101, 0, -255 }, 0, { 2522, 990 }, { 166, 89, 0, 255}}},
{{{ 0, 102, 256 }, 0, { 478, 480 }, { 0, 0, 127, 255}}},
{{{ -101, 0, 256 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 102, 0, 256 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ 102, 0, -255 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ -101, 0, -255 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ 0, 102, -255 }, 0, { 478, 480 }, { 0, 0, 129, 255}}},
};

Light_t Light_sl_geo_000390_0x700a628 = {
{ 230, 230, 230}, 0, { 230, 230, 230}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_sl_geo_000390_0x700a620 = {
{115, 115, 115}, 0, {115, 115, 115}, 0
};

Gfx DL_sl_geo_000390_0x700a780[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_sl_geo_000390_0x700a718),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_sl_geo_000390_0x700a718[] = {
gsDPSetTextureImage(0, 2, 1, sl_geo_000390__texture_09008800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_sl_geo_000390_0x700a628.col, 1),
gsSPLight(&Light_sl_geo_000390_0x700a620.col, 2),
gsSPVertex(VB_sl_geo_000390_0x700a638, 14, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,11, 12, 13, 0),
gsSPEndDisplayList(),
};

