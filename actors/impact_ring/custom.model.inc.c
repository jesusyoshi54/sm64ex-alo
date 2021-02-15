#include "custom.model.inc.h"
Vtx VB_invisible_bowser_accessory_geo_0x601c9d0[] = {
{{{ 0, 0, -5 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -5, 0, 5 }, 0, { 0, 2016 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 5 }, 0, { 992, 2016 }, { 255, 255, 255, 255}}},
{{{ -5, 0, -5 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Vtx VB_invisible_bowser_accessory_geo_0x601ca10[] = {
{{{ 5, 0, -5 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 5 }, 0, { 0, 2016 }, { 255, 255, 255, 255}}},
{{{ 5, 0, 5 }, 0, { 992, 2016 }, { 255, 255, 255, 255}}},
{{{ 0, 0, -5 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_invisible_bowser_accessory_geo_0x601eac0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_invisible_bowser_accessory_geo_0x601ea50),
gsSPDisplayList(DL_invisible_bowser_accessory_geo_0x601ea88),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

const Gfx DL_invisible_bowser_accessory_geo_0x601ea50[] = {
gsDPSetTextureImage(3, 2, 1, invisible_bowser_accessory_geo__texture_0601CA50),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_invisible_bowser_accessory_geo_0x601c9d0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

const Gfx DL_invisible_bowser_accessory_geo_0x601ea88[] = {
gsDPSetTextureImage(3, 2, 1, invisible_bowser_accessory_geo__texture_0601DA50),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_invisible_bowser_accessory_geo_0x601ca10, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

