#include "custom.model.inc.h"
Vtx VB_sparkles_geo_0x4027450[] = {
{{{ -32, 0, 0 }, 0, { 0, 1984 }, { 0, 0, 127, 0}}},
{{{ 32, 0, 0 }, 0, { 1984, 1984 }, { 0, 0, 127, 0}}},
{{{ 32, 64, 0 }, 0, { 1984, 0 }, { 0, 0, 127, 0}}},
{{{ -32, 64, 0 }, 0, { 0, 0 }, { 0, 0, 127, 0}}},
};

Gfx DL_sparkles_geo_0x402a570[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, sparkles_geo__texture_04029C90),
gsSPBranchList(DL_sparkles_geo_0x402a490),
};

Gfx DL_sparkles_geo_0x402a490[] = {
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_sparkles_geo_0x4027450, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(1, 1, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_sparkles_geo_0x402a558[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, sparkles_geo__texture_04029490),
gsSPBranchList(DL_sparkles_geo_0x402a490),
};

Gfx DL_sparkles_geo_0x402a540[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, sparkles_geo__texture_04028C90),
gsSPBranchList(DL_sparkles_geo_0x402a490),
};

Gfx DL_sparkles_geo_0x402a528[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, sparkles_geo__texture_04028490),
gsSPBranchList(DL_sparkles_geo_0x402a490),
};

Gfx DL_sparkles_geo_0x402a510[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, sparkles_geo__texture_04027C90),
gsSPBranchList(DL_sparkles_geo_0x402a490),
};

Gfx DL_sparkles_geo_0x402a4f8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, sparkles_geo__texture_04027490),
gsSPBranchList(DL_sparkles_geo_0x402a490),
};

