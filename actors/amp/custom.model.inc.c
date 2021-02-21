#include "custom.model.inc.h"
Vtx VB_amp_geo_0x8002c10[] = {
{{{ 68, 72, 158 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -27, -71, 164 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ 68, -71, 158 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -27, 72, 164 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
};

Vtx VB_amp_geo_0x8002b18[] = {
{{{ 224, 0, -89 }, 0, { 0, 480 }, { 255, 255, 255, 255}}},
{{{ 187, 149, 0 }, 0, { 223, 1078 }, { 255, 255, 255, 255}}},
{{{ 224, 0, 90 }, 0, { 479, 478 }, { 255, 255, 255, 255}}},
{{{ 187, -148, 0 }, 0, { 224, -122 }, { 255, 255, 255, 255}}},
{{{ 224, 0, -89 }, 0, { 0, 478 }, { 255, 255, 255, 255}}},
};

Vtx VB_amp_geo_0x8002cf8[] = {
{{{ -29, 72, 164 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -124, -71, 121 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -29, -71, 164 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -124, 72, 121 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
};

Vtx VB_amp_geo_0x8002de0[] = {
{{{ -39, -39, 0 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 40, 40, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -39, 40, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 40, -39, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_amp_geo_0x8002c88[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_amp_geo_0x8002c50),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002c50[] = {
gsDPSetTextureImage(0, 2, 1, amp_geo__texture_08001318),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_amp_geo_0x8002c10, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002ba0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 5, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 124),
gsSPDisplayList(DL_amp_geo_0x8002b68),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002b68[] = {
gsDPSetTextureImage(0, 2, 1, amp_geo__texture_08000F18),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 512),
gsSPVertex(VB_amp_geo_0x8002b18, 5, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 4, 0),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002d70[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_amp_geo_0x8002d38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002d38[] = {
gsDPSetTextureImage(0, 2, 1, amp_geo__texture_08002318),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_amp_geo_0x8002cf8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002e58[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_amp_geo_0x8002e20),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_amp_geo_0x8002e20[] = {
gsDPSetTextureImage(0, 2, 1, amp_geo__texture_08001B18),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_amp_geo_0x8002de0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

