#include "custom.model.inc.h"
Vtx VB_yellow_coin_geo_0x30056c0[] = {
{{{ -32, 0, 0 }, 0, { 0, 1984 }, { 255, 216, 0, 255}}},
{{{ 32, 0, 0 }, 0, { 1984, 1984 }, { 255, 114, 0, 255}}},
{{{ 32, 64, 0 }, 0, { 1984, 0 }, { 255, 216, 0, 255}}},
{{{ -32, 64, 0 }, 0, { 0, 0 }, { 218, 218, 218, 255}}},
};

Vtx VB_blue_coin_geo_0x3005700[] = {
{{{ -50, 0, 0 }, 0, { 0, 1984 }, { 139, 153, 233, 255}}},
{{{ 50, 0, 0 }, 0, { 1984, 1984 }, { 69, 35, 249, 255}}},
{{{ 50, 100, 0 }, 0, { 1984, 0 }, { 147, 170, 231, 255}}},
{{{ -50, 100, 0 }, 0, { 0, 0 }, { 64, 227, 243, 255}}},
};

Vtx VB_red_coin_geo_0x3005740[] = {
{{{ -35, 0, 0 }, 0, { 0, 1984 }, { 239, 0, 139, 255}}},
{{{ 35, 0, 0 }, 0, { 1984, 1984 }, { 111, 6, 241, 255}}},
{{{ 35, 70, 0 }, 0, { 1984, 0 }, { 244, 145, 17, 255}}},
{{{ -35, 70, 0 }, 0, { 0, 0 }, { 255, 51, 51, 255}}},
};

const Gfx DL_yellow_coin_geo_0x3007800[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03005780),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_yellow_coin_geo_0x30056c0, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_yellow_coin_geo_0x3007780[] = {
gsDPNoOp(),
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

const Gfx DL_yellow_coin_geo_0x30077d0[] = {
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(1, 1, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_yellow_coin_geo_0x3007828[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03005F80),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_yellow_coin_geo_0x30056c0, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_yellow_coin_geo_0x3007850[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03006780),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_yellow_coin_geo_0x30056c0, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_yellow_coin_geo_0x3007878[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03006F80),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_yellow_coin_geo_0x30056c0, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_blue_coin_geo_0x30078a0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03005780),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_blue_coin_geo_0x3005700, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_blue_coin_geo_0x30078c8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03005F80),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_blue_coin_geo_0x3005700, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_blue_coin_geo_0x30078f0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03006780),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_blue_coin_geo_0x3005700, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_blue_coin_geo_0x3007918[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03006F80),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_blue_coin_geo_0x3005700, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_red_coin_geo_0x3007940[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03005780),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_red_coin_geo_0x3005740, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_red_coin_geo_0x3007968[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03005F80),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_red_coin_geo_0x3005740, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_red_coin_geo_0x3007990[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03006780),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_red_coin_geo_0x3005740, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

const Gfx DL_red_coin_geo_0x30079b8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, yellow_coin_geo__texture_03006F80),
gsSPDisplayList(DL_yellow_coin_geo_0x3007780),
gsSPVertex(VB_red_coin_geo_0x3005740, 4, 0),
gsSPBranchList(DL_yellow_coin_geo_0x30077d0),
};

