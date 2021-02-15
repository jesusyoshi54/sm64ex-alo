#include "custom.model.inc.h"
Vtx VB_explosion_geo_0x30009c8[] = {
{{{ -128, -128, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 128, -128, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 128, 128, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -128, 128, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_explosion_geo_0x3004298[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03000A08),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

const Gfx DL_explosion_geo_0x3004208[] = {
gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
gsDPSetEnvColor(255, 255, 255, 150),
gsSPGeometryMode(G_LIGHTING, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_explosion_geo_0x30009c8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_explosion_geo_0x30042b0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03001208),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

const Gfx DL_explosion_geo_0x30042c8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03001A08),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

const Gfx DL_explosion_geo_0x30042e0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03002208),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

const Gfx DL_explosion_geo_0x30042f8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03002A08),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

const Gfx DL_explosion_geo_0x3004310[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03003208),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

const Gfx DL_explosion_geo_0x3004328[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, explosion_geo__texture_03003A08),
gsSPBranchList(DL_explosion_geo_0x3004208),
};

