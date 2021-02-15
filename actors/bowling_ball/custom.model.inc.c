#include "custom.model.inc.h"
Vtx VB_bowling_ball_geo_0x8022bb8[] = {
{{{ 0, 49, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -49, -49, 0 }, 0, { 0, 2012 }, { 255, 255, 255, 255}}},
{{{ 0, -49, 0 }, 0, { 990, 2012 }, { 255, 255, 255, 255}}},
{{{ -49, 49, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Vtx VB_bowling_ball_geo_0x8022bf8[] = {
{{{ 49, 49, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ 0, -49, 0 }, 0, { 0, 2012 }, { 255, 255, 255, 255}}},
{{{ 49, -49, 0 }, 0, { 990, 2012 }, { 255, 255, 255, 255}}},
{{{ 0, 49, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_bowling_ball_geo_0x8022d08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowling_ball_geo_0x8022c38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_bowling_ball_geo_0x8022c38[] = {
gsDPSetTextureImage(0, 2, 1, bowling_ball_geo__texture_0801DA60),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowling_ball_geo_0x8022bb8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsDPSetTextureImage(0, 2, 1, bowling_ball_geo__texture_0801EA60),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowling_ball_geo_0x8022bf8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

