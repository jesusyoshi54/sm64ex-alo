#include "custom.model.inc.h"
Vtx VB_seaweed_geo_0x600a0f8[] = {
{{{ 236, 2, -76 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 0, 2, 77 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 236, 2, 77 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ 0, 2, -76 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
};

Vtx VB_seaweed_geo_0x600a000[] = {
{{{ 314, 2, -76 }, 0, { 0, -20 }, { 0, 127, 0, 255}}},
{{{ -1, 2, 77 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 314, 2, 77 }, 0, { 990, -20 }, { 0, 127, 0, 255}}},
{{{ -1, 2, -76 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
};

Vtx VB_seaweed_geo_0x6009f08[] = {
{{{ 311, 2, -76 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -1, 2, -76 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -1, 2, 77 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 311, 2, 77 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_seaweed_geo_0x6009e10[] = {
{{{ 232, 2, -76 }, 0, { -30, -12 }, { 0, 127, 0, 255}}},
{{{ -1, 2, 77 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ 232, 2, 77 }, 0, { 992, -12 }, { 0, 127, 0, 255}}},
{{{ -1, 2, -76 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
};

const Light_t Light_seaweed_geo_0x6007e00 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_seaweed_geo_0x6007df8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_seaweed_geo_0x600a180[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_seaweed_geo_0x600a138),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x600a138[] = {
gsDPSetTextureImage(0, 2, 1, seaweed_geo__texture_06009610),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_seaweed_geo_0x6007e00.col, 1),
gsSPLight(&Light_seaweed_geo_0x6007df8.col, 2),
gsSPVertex(VB_seaweed_geo_0x600a0f8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x600a088[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_seaweed_geo_0x600a040),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x600a040[] = {
gsDPSetTextureImage(0, 2, 1, seaweed_geo__texture_06008E10),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_seaweed_geo_0x6007e00.col, 1),
gsSPLight(&Light_seaweed_geo_0x6007df8.col, 2),
gsSPVertex(VB_seaweed_geo_0x600a000, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x6009f90[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_seaweed_geo_0x6009f48),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x6009f48[] = {
gsDPSetTextureImage(0, 2, 1, seaweed_geo__texture_06008610),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_seaweed_geo_0x6007e00.col, 1),
gsSPLight(&Light_seaweed_geo_0x6007df8.col, 2),
gsSPVertex(VB_seaweed_geo_0x6009f08, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x6009e98[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_seaweed_geo_0x6009e50),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_seaweed_geo_0x6009e50[] = {
gsDPSetTextureImage(0, 2, 1, seaweed_geo__texture_06007E10),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_seaweed_geo_0x6007e00.col, 1),
gsSPLight(&Light_seaweed_geo_0x6007df8.col, 2),
gsSPVertex(VB_seaweed_geo_0x6009e10, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

