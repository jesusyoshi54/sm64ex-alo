#include "custom.model.inc.h"
Vtx VB_wave_trail_geo_0x4025318[] = {
{{{ -64, 0, 64 }, 0, { 0, 0 }, { 255, 255, 255, 200}}},
{{{ 64, 0, 64 }, 0, { 992, 0 }, { 255, 255, 255, 200}}},
{{{ 64, 0, -64 }, 0, { 992, 992 }, { 255, 255, 255, 200}}},
{{{ -64, 0, -64 }, 0, { 0, 992 }, { 255, 255, 255, 200}}},
};

Gfx DL_wave_trail_geo_0x40273f0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, wave_trail_geo__texture_04025358),
gsSPBranchList(DL_wave_trail_geo_0x40273d8),
};

Gfx DL_wave_trail_geo_0x40273d8[] = {
gsSPDisplayList(DL_wave_trail_geo_0x4027358),
gsSPVertex(VB_wave_trail_geo_0x4025318, 4, 0),
gsSPBranchList(DL_wave_trail_geo_0x40273a0),
};

Gfx DL_wave_trail_geo_0x4027358[] = {
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPEndDisplayList(),
};

Gfx DL_wave_trail_geo_0x40273a0[] = {
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsDPPipeSync(),
gsSPTexture(1, 1, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_wave_trail_geo_0x4027408[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, wave_trail_geo__texture_04025B58),
gsSPBranchList(DL_wave_trail_geo_0x40273d8),
};

Gfx DL_wave_trail_geo_0x4027420[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, wave_trail_geo__texture_04026358),
gsSPBranchList(DL_wave_trail_geo_0x40273d8),
};

Gfx DL_wave_trail_geo_0x4027438[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, wave_trail_geo__texture_04026B58),
gsSPBranchList(DL_wave_trail_geo_0x40273d8),
};

