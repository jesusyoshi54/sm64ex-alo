#include "custom.model.inc.h"
Vtx VB_yellow_sphere_geo_0x5000000[] = {
{{{ -49, -49, 0 }, 0, { 0, 992 }, { 181, 32, 64, 255}}},
{{{ 50, -49, 0 }, 0, { 992, 992 }, { 181, 32, 64, 255}}},
{{{ 50, 50, 0 }, 0, { 992, 0 }, { 181, 32, 64, 255}}},
{{{ -49, 50, 0 }, 0, { 0, 0 }, { 181, 32, 64, 255}}},
};

Gfx DL_yellow_sphere_geo_0x50008c8[] = {
gsSPDisplayList(DL_yellow_sphere_geo_0x5000840),
gsDPSetTextureImage(0, 2, 1, yellow_sphere_geo__texture_05000040),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_yellow_sphere_geo_0x5000888),
gsSPEndDisplayList(),
};

Gfx DL_yellow_sphere_geo_0x5000840[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPEndDisplayList(),
};

Gfx DL_yellow_sphere_geo_0x5000888[] = {
gsSPVertex(VB_yellow_sphere_geo_0x5000000, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

