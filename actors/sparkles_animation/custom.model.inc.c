#include "custom.model.inc.h"
Vtx VB_sparkles_animation_geo_0x4032a48[] = {
{{{ -32, 0, 0 }, 0, { 0, 992 }, { 255, 255, 100, 255}}},
{{{ 32, 0, 0 }, 0, { 992, 992 }, { 255, 255, 100, 255}}},
{{{ 32, 64, 0 }, 0, { 992, 0 }, { 255, 255, 100, 255}}},
{{{ -32, 64, 0 }, 0, { 0, 0 }, { 255, 255, 100, 255}}},
};

Gfx DL_sparkles_animation_geo_0x4035300[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, sparkles_animation_geo__texture_04032A88),
gsSPBranchList(DL_sparkles_animation_geo_0x4035288),
};

Gfx DL_sparkles_animation_geo_0x4035288[] = {
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_sparkles_animation_geo_0x4032a48, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPGeometryMode(0, G_LIGHTING),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_sparkles_animation_geo_0x4035318[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, sparkles_animation_geo__texture_04033288),
gsSPBranchList(DL_sparkles_animation_geo_0x4035288),
};

Gfx DL_sparkles_animation_geo_0x4035330[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, sparkles_animation_geo__texture_04033A88),
gsSPBranchList(DL_sparkles_animation_geo_0x4035288),
};

Gfx DL_sparkles_animation_geo_0x4035348[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, sparkles_animation_geo__texture_04034288),
gsSPBranchList(DL_sparkles_animation_geo_0x4035288),
};

Gfx DL_sparkles_animation_geo_0x4035360[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, sparkles_animation_geo__texture_04034A88),
gsSPBranchList(DL_sparkles_animation_geo_0x4035288),
};

