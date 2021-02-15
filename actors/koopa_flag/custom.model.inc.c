#include "custom.model.inc.h"
Vtx VB_koopa_flag_geo_0x6000878[] = {
{{{ 2800, -18, 57 }, 0, { 0, 0 }, { 95, 231, 79, 255}}},
{{{ 2800, -59, 0 }, 0, { 0, 0 }, { 45, 138, 0, 255}}},
{{{ 2800, -18, -56 }, 0, { 0, 0 }, { 77, 225, 161, 255}}},
{{{ 2800, 49, -34 }, 0, { 0, 0 }, { 77, 81, 197, 255}}},
{{{ 2800, 49, 35 }, 0, { 0, 0 }, { 45, 96, 69, 255}}},
};

Vtx VB_koopa_flag_geo_0x60008c8[] = {
{{{ 2800, -18, 57 }, 0, { 0, 0 }, { 95, 231, 79, 255}}},
{{{ 2800, 49, 35 }, 0, { 0, 0 }, { 45, 96, 69, 255}}},
{{{ 0, 19, 57 }, 0, { 0, 0 }, { 0, 39, 120, 255}}},
{{{ 0, -48, 35 }, 0, { 0, 0 }, { 0, 154, 74, 255}}},
{{{ 0, 60, 0 }, 0, { 0, 0 }, { 0, 126, 0, 255}}},
{{{ 2800, -59, 0 }, 0, { 0, 0 }, { 45, 138, 0, 255}}},
{{{ 0, -48, -34 }, 0, { 0, 0 }, { 0, 154, 182, 255}}},
{{{ 2800, -18, -56 }, 0, { 0, 0 }, { 77, 225, 161, 255}}},
{{{ 0, 19, -56 }, 0, { 0, 0 }, { 0, 39, 136, 255}}},
{{{ 2800, 49, -34 }, 0, { 0, 0 }, { 77, 81, 197, 255}}},
};

Vtx VB_koopa_flag_geo_0x6000a38[] = {
{{{ 0, 0, 0 }, 0, { -226, 510 }, { 255, 255, 255, 255}}},
{{{ 460, 0, 540 }, 0, { 224, 1318 }, { 255, 255, 255, 255}}},
{{{ 460, 0, -539 }, 0, { 224, -302 }, { 255, 255, 255, 255}}},
};

Vtx VB_koopa_flag_geo_0x6000a68[] = {
{{{ 0, 0, 720 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 460, 0, 540 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 460, 0, -539 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 0, 0, -719 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
};

Vtx VB_koopa_flag_geo_0x6000b80[] = {
{{{ 0, 0, 540 }, 0, { 224, 1318 }, { 255, 255, 255, 255}}},
{{{ 460, 0, 360 }, 0, { 676, 1048 }, { 255, 255, 255, 255}}},
{{{ 460, 0, -359 }, 0, { 676, 0 }, { 255, 255, 255, 255}}},
{{{ 0, 0, -539 }, 0, { 224, -302 }, { 255, 255, 255, 255}}},
};

Vtx VB_koopa_flag_geo_0x6000c68[] = {
{{{ 344, 0, 224 }, 0, { 1014, 846 }, { 255, 255, 255, 255}}},
{{{ 344, 0, -223 }, 0, { 1014, 172 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 360 }, 0, { 676, 1048 }, { 255, 255, 255, 255}}},
{{{ 0, 0, -359 }, 0, { 676, 0 }, { 255, 255, 255, 255}}},
};

Vtx VB_koopa_flag_geo_0x6000d50[] = {
{{{ 0, 0, 224 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 288, 0, 112 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 288, 0, -111 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 0, 0, -223 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
};

Vtx VB_koopa_flag_geo_0x6000df0[] = {
{{{ 0, 0, 112 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 288, 0, 0 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
{{{ 0, 0, -111 }, 0, { 0, 0 }, { 253, 168, 2, 255}}},
};

const Light_t Light_koopa_flag_geo_0x6000850 = {
{ 223, 159, 31}, 0, { 223, 159, 31}, 0, { 40, 40, 40}, 0
};

const Light_t Light_koopa_flag_geo_0x6000868 = {
{ 80, 40, 0}, 0, { 80, 40, 0}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_koopa_flag_geo_0x6000848 = {
{55, 39, 7}, 0, {55, 39, 7}, 0
};

const Ambient_t Light_koopa_flag_geo_0x6000860 = {
{20, 10, 0}, 0, {20, 10, 0}, 0
};

const Gfx DL_koopa_flag_geo_0x6000a08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_koopa_flag_geo_0x6000968),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000968[] = {
gsSPLight(&Light_koopa_flag_geo_0x6000850.col, 1),
gsSPLight(&Light_koopa_flag_geo_0x6000848.col, 2),
gsSPVertex(VB_koopa_flag_geo_0x6000878, 5, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 0, 0),
gsSP1Triangle(3, 0, 2, 0),
gsSPLight(&Light_koopa_flag_geo_0x6000868.col, 1),
gsSPLight(&Light_koopa_flag_geo_0x6000860.col, 2),
gsSPVertex(VB_koopa_flag_geo_0x60008c8, 10, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 0, 0),
gsSP2Triangles(4, 2, 1, 0,5, 0, 3, 0),
gsSP2Triangles(3, 6, 5, 0,7, 5, 6, 0),
gsSP2Triangles(6, 8, 7, 0,9, 7, 8, 0),
gsSP2Triangles(8, 4, 9, 0,1, 9, 4, 0),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000b08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, SHADE, 0, 0, 0, TEXEL0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_koopa_flag_geo_0x6000ab8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_koopa_flag_geo_0x6000ae8),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000ab8[] = {
gsDPSetTextureImage(0, 2, 1, koopa_flag_geo__texture_06000048),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_koopa_flag_geo_0x6000a38, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000ae8[] = {
gsSPVertex(VB_koopa_flag_geo_0x6000a68, 5, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 2, 0),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000bf8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, SHADE, 0, 0, 0, TEXEL0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_koopa_flag_geo_0x6000bc0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000bc0[] = {
gsDPSetTextureImage(0, 2, 1, koopa_flag_geo__texture_06000048),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_koopa_flag_geo_0x6000b80, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000ce0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, SHADE, 0, 0, 0, TEXEL0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_koopa_flag_geo_0x6000ca8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000ca8[] = {
gsDPSetTextureImage(0, 2, 1, koopa_flag_geo__texture_06000048),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_koopa_flag_geo_0x6000c68, 4, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000db0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_koopa_flag_geo_0x6000d90),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000d90[] = {
gsSPVertex(VB_koopa_flag_geo_0x6000d50, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000e38[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_koopa_flag_geo_0x6000e20),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_koopa_flag_geo_0x6000e20[] = {
gsSPVertex(VB_koopa_flag_geo_0x6000df0, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

