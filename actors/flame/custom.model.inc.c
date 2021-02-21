#include "custom.model.inc.h"
Vtx VB_red_flame_geo_0x30172e0[] = {
{{{ -25, -25, 0 }, 0, { 0, 992 }, { 0, 0, 0, 0}}},
{{{ 25, -25, 0 }, 0, { 992, 992 }, { 0, 0, 0, 0}}},
{{{ 25, 25, 0 }, 0, { 992, 0 }, { 0, 0, 0, 0}}},
{{{ -25, 25, 0 }, 0, { 0, 0 }, { 0, 0, 0, 0}}},
};

Gfx DL_red_flame_geo_0x301b3b0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03017320),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b320[] = {
gsSPGeometryMode(G_LIGHTING|G_SHADING_SMOOTH, 0),
gsDPSetEnvColor(0, 50, 248, 200),
gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_red_flame_geo_0x30172e0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING|G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_red_flame_geo_0x301b3c8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03017B20),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b3e0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03018320),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b3f8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03018B20),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b410[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03019320),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b428[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03019B20),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b440[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_0301A320),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_red_flame_geo_0x301b458[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_0301AB20),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

Gfx DL_blue_flame_geo_0x301b500[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03017320),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b470[] = {
gsSPGeometryMode(G_LIGHTING|G_SHADING_SMOOTH, 0),
gsDPSetEnvColor(0, 181, 248, 200),
gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_red_flame_geo_0x30172e0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING|G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_blue_flame_geo_0x301b518[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03017B20),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b530[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03018320),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b548[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03018B20),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b560[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03019320),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b578[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_03019B20),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b590[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_0301A320),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

Gfx DL_blue_flame_geo_0x301b5a8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, red_flame_geo__texture_0301AB20),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

