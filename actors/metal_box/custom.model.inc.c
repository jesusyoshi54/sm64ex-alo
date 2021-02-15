#include "custom.model.inc.h"
Vtx VB_metal_box_geo_0x8024998[] = {
{{{ 154, 307, -153 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ -153, 307, -153 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -153, 307, 154 }, 0, { 0, 2012 }, { 0, 127, 0, 255}}},
{{{ 154, 307, 154 }, 0, { 990, 2012 }, { 0, 127, 0, 255}}},
{{{ -153, 0, -153 }, 0, { 990, 2012 }, { 0, 0, 129, 255}}},
{{{ -153, 307, -153 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 154, 307, -153 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 154, 0, -153 }, 0, { 0, 2012 }, { 0, 0, 129, 255}}},
{{{ -153, 0, 154 }, 0, { 990, 2012 }, { 129, 0, 0, 255}}},
{{{ -153, 307, 154 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -153, 307, -153 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -153, 0, -153 }, 0, { 0, 2012 }, { 129, 0, 0, 255}}},
{{{ 154, 0, 154 }, 0, { 990, 0 }, { 0, 129, 0, 255}}},
{{{ -153, 0, 154 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
{{{ -153, 0, -153 }, 0, { 0, 2012 }, { 0, 129, 0, 255}}},
{{{ 154, 0, -153 }, 0, { 990, 2012 }, { 0, 129, 0, 255}}},
};

Vtx VB_metal_box_geo_0x8024a98[] = {
{{{ 154, 0, 154 }, 0, { 990, 2012 }, { 0, 0, 127, 255}}},
{{{ -153, 307, 154 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -153, 0, 154 }, 0, { 0, 2012 }, { 0, 0, 127, 255}}},
{{{ 154, 307, 154 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ 154, 0, -153 }, 0, { 990, 2012 }, { 127, 0, 0, 255}}},
{{{ 154, 307, -153 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 154, 307, 154 }, 0, { -24, -36 }, { 127, 0, 0, 255}}},
{{{ 154, 0, 154 }, 0, { -24, 2008 }, { 127, 0, 0, 255}}},
};

const Light_t Light_metal_box_geo_0x8023988 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_metal_box_geo_0x8023980 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_metal_box_geo_0x8024bb8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_metal_box_geo_0x8024b18),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_metal_box_geo_0x8024b18[] = {
gsDPSetTextureImage(0, 2, 1, metal_box_geo__texture_08023998),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_metal_box_geo_0x8023988.col, 1),
gsSPLight(&Light_metal_box_geo_0x8023980.col, 2),
gsSPVertex(VB_metal_box_geo_0x8024998, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPVertex(VB_metal_box_geo_0x8024a98, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

