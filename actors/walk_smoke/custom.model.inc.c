#include "custom.model.inc.h"
Vtx VB_smoke_geo_0x401de60[] = {
{{{ -32, 0, 0 }, 0, { 0, 992 }, { 255, 255, 255, 100}}},
{{{ 32, 0, 0 }, 0, { 992, 992 }, { 255, 255, 255, 100}}},
{{{ 32, 64, 0 }, 0, { 992, 0 }, { 255, 255, 255, 100}}},
{{{ -32, 64, 0 }, 0, { 0, 0 }, { 255, 255, 255, 100}}},
};

const Gfx DL_smoke_geo_0x4021718[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_0401DEA0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

const Gfx DL_smoke_geo_0x40216a0[] = {
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_smoke_geo_0x401de60, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_smoke_geo_0x4021730[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_0401E6A0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

const Gfx DL_smoke_geo_0x4021748[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_0401EEA0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

const Gfx DL_smoke_geo_0x4021760[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_0401F6A0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

const Gfx DL_smoke_geo_0x4021778[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_0401FEA0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

const Gfx DL_smoke_geo_0x4021790[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_040206A0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

const Gfx DL_smoke_geo_0x40217a8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, smoke_geo__texture_04020EA0),
gsSPBranchList(DL_smoke_geo_0x40216a0),
};

