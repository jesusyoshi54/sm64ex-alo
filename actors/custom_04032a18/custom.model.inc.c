#include "custom.model.inc.h"
Vtx VB_custom_DL_04032a18_0x4032700[] = {
{{{ -4, 0, 0 }, 0, { 0, 960 }, { 255, 255, 255, 255}}},
{{{ 4, 0, 0 }, 0, { 960, 960 }, { 255, 255, 255, 255}}},
{{{ 4, 8, 0 }, 0, { 960, 0 }, { 255, 255, 255, 255}}},
{{{ -4, 8, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_custom_DL_04032a18_0x4032a18[] = {
gsSPDisplayList(DL_custom_DL_04032a18_0x4032980),
gsSPVertex(VB_custom_DL_04032a18_0x4032700, 4, 0),
gsSPBranchList(DL_custom_DL_04032a18_0x40329e0),
};

const Gfx DL_custom_DL_04032a18_0x4032980[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, custom_DL_04032a18__texture_04032780),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 255, 512),
gsDPPipeSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPEndDisplayList(),
};

const Gfx DL_custom_DL_04032a18_0x40329e0[] = {
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsDPPipeSync(),
gsSPTexture(1, 1, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

