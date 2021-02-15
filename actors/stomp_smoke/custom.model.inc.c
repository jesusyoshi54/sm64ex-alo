#include "custom.model.inc.h"
Vtx VB_small_water_splash_geo_0x40220c8[] = {
{{{ -32, 0, 32 }, 0, { 0, 0 }, { 255, 255, 255, 200}}},
{{{ 32, 0, 32 }, 0, { 1984, 0 }, { 255, 255, 255, 200}}},
{{{ 32, 0, -32 }, 0, { 1984, 1984 }, { 255, 255, 255, 200}}},
{{{ -32, 0, -32 }, 0, { 0, 1984 }, { 255, 255, 255, 200}}},
};

const Gfx DL_small_water_splash_geo_0x40251f8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, small_water_splash_geo__texture_04022148),
gsSPBranchList(DL_small_water_splash_geo_0x40251c8),
};

const Gfx DL_small_water_splash_geo_0x40251c8[] = {
gsSPDisplayList(DL_small_water_splash_geo_0x4025148),
gsSPVertex(VB_small_water_splash_geo_0x40220c8, 4, 0),
gsSPBranchList(DL_small_water_splash_geo_0x4025190),
};

const Gfx DL_small_water_splash_geo_0x4025148[] = {
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPEndDisplayList(),
};

const Gfx DL_small_water_splash_geo_0x4025190[] = {
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsDPPipeSync(),
gsSPTexture(1, 1, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_small_water_splash_geo_0x4025210[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, small_water_splash_geo__texture_04022948),
gsSPBranchList(DL_small_water_splash_geo_0x40251c8),
};

const Gfx DL_small_water_splash_geo_0x4025228[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, small_water_splash_geo__texture_04023148),
gsSPBranchList(DL_small_water_splash_geo_0x40251c8),
};

const Gfx DL_small_water_splash_geo_0x4025240[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, small_water_splash_geo__texture_04023948),
gsSPBranchList(DL_small_water_splash_geo_0x40251c8),
};

const Gfx DL_small_water_splash_geo_0x4025258[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, small_water_splash_geo__texture_04024148),
gsSPBranchList(DL_small_water_splash_geo_0x40251c8),
};

const Gfx DL_small_water_splash_geo_0x4025270[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, small_water_splash_geo__texture_04024948),
gsSPBranchList(DL_small_water_splash_geo_0x40251c8),
};

