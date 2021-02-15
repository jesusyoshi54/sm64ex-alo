#include "custom.model.inc.h"
Vtx VB_sand_seg3_dl_0302BCD0_0x302ba90[] = {
{{{ -8, -8, 0 }, 0, { 0, 480 }, { 255, 255, 255, 255}}},
{{{ 8, -8, 0 }, 0, { 480, 480 }, { 255, 255, 255, 255}}},
{{{ 8, 8, 0 }, 0, { 480, 0 }, { 255, 255, 255, 255}}},
{{{ -8, 8, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_sand_seg3_dl_0302BCD0_0x302bcd0[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsDPSetTextureImage(0, 2, 1, sand_seg3_dl_0302BCD0__texture_0302BAD0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 255, 512),
gsDPPipeSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_sand_seg3_dl_0302BCD0_0x302ba90, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

