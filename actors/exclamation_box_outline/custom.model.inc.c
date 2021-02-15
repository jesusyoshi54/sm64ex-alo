#include "custom.model.inc.h"
Vtx VB_exclamation_box_outline_seg8_dl_08025F08_0x8025e80[] = {
{{{ -22, 49, 0 }, 0, { -157, 0 }, { 0, 0, 127, 255}}},
{{{ -22, 4, 0 }, 0, { -157, 1048 }, { 0, 0, 127, 255}}},
{{{ 23, 4, 0 }, 0, { 605, 1048 }, { 0, 0, 127, 255}}},
{{{ 23, 49, 0 }, 0, { 605, 0 }, { 0, 0, 127, 255}}},
};

const Light_t Light_exclamation_box_outline_seg8_dl_08025F08_0x8025a70 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_exclamation_box_outline_seg8_dl_08025F08_0x8025a68 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_exclamation_box_outline_seg8_dl_08025F08_0x8025f08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 5, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 124),
gsSPDisplayList(DL_exclamation_box_outline_seg8_dl_08025F08_0x8025ec0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_exclamation_box_outline_seg8_dl_08025F08_0x8025ec0[] = {
gsDPSetTextureImage(0, 2, 1, exclamation_box_outline_seg8_dl_08025F08__texture_08025A80),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 512),
gsSPLight(&Light_exclamation_box_outline_seg8_dl_08025F08_0x8025a70.col, 1),
gsSPLight(&Light_exclamation_box_outline_seg8_dl_08025F08_0x8025a68.col, 2),
gsSPVertex(VB_exclamation_box_outline_seg8_dl_08025F08_0x8025e80, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

