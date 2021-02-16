#include "custom.model.inc.h"
Vtx VB_castle_grounds_geo_00070C_0x700bab8[] = {
{{{ -3532, -1330, -6069 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -4044, -1330, -5557 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -3532, -1330, -5557 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ -4044, -1330, -6069 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -3225, -562, -2178 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -3532, -562, -2178 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -3225, -562, -1871 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ -3532, -562, -1871 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_castle_grounds_geo_00070C_0x700bb80[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_castle_grounds_geo_00070C_0x700bb38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_castle_grounds_geo_00070C_0x700bb38[] = {
gsDPSetTextureImage(0, 2, 1, castle_grounds_geo_00070C__texture_09005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_castle_grounds_geo_00070C_0x700bab8, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,5, 7, 6, 0),
gsSPEndDisplayList(),
};

