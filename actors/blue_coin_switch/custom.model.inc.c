#include "custom.model.inc.h"
const Vtx VB_blue_coin_switch_geo_0x8000c18[] = {
{{{ 26, 0, 26 }, 0, { 990, 479 }, { 0, 0, 127, 255}}},
{{{ 26, 26, 26 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -25, 26, 26 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -25, 0, 26 }, 0, { 0, 479 }, { 0, 0, 127, 255}}},
{{{ -25, 0, -25 }, 0, { 990, 479 }, { 0, 0, 129, 255}}},
{{{ 26, 26, -25 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 26, 0, -25 }, 0, { 0, 479 }, { 0, 0, 129, 255}}},
{{{ -25, 26, -25 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ -25, 0, 26 }, 0, { 990, 479 }, { 129, 0, 0, 255}}},
{{{ -25, 26, -25 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -25, 0, -25 }, 0, { 0, 479 }, { 129, 0, 0, 255}}},
{{{ -25, 26, 26 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ 26, 0, -25 }, 0, { 990, 479 }, { 127, 0, 0, 255}}},
{{{ 26, 26, -25 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 26, 26, 26 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 26, 0, 26 }, 0, { 0, 479 }, { 127, 0, 0, 255}}},
};

const Vtx VB_blue_coin_switch_geo_0x8000d18[] = {
{{{ 26, 26, -25 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ -25, 26, 26 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 26, 26, 26 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -25, 26, -25 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

const Light_t Light_blue_coin_switch_geo_0x8000008 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_blue_coin_switch_geo_0x8000000 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_blue_coin_switch_geo_0x8000e08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 4, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 60),
gsSPDisplayList(DL_blue_coin_switch_geo_0x8000d58),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_blue_coin_switch_geo_0x8000dd0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_blue_coin_switch_geo_0x8000d58[] = {
gsDPSetTextureImage(0, 2, 1, texture_blue_coin_switch_geo_0x8000018_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 256),
gsSPLight(&Light_blue_coin_switch_geo_0x8000008.col, 1),
gsSPLight(&Light_blue_coin_switch_geo_0x8000000.col, 2),
gsSPVertex(VB_blue_coin_switch_geo_0x8000c18, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPEndDisplayList(),
};

const Gfx DL_blue_coin_switch_geo_0x8000dd0[] = {
gsDPSetTextureImage(0, 2, 1, texture_blue_coin_switch_geo_0x8000418_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_blue_coin_switch_geo_0x8000d18, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

