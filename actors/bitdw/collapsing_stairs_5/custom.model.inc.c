#include "custom.model.inc.h"
Vtx VB_geo_bitdw_000600_0x700d208[] = {
{{{ -716, 256, 307 }, 0, { 1948, 0 }, { 101, 255, 178, 255}}},
{{{ -1023, 0, -306 }, 0, { 32, 926 }, { 101, 255, 178, 255}}},
{{{ -1023, 0, 307 }, 0, { 1948, 926 }, { 101, 255, 178, 255}}},
{{{ -716, 256, -306 }, 0, { 32, 0 }, { 101, 255, 178, 255}}},
{{{ -409, 512, -306 }, 0, { 32, 0 }, { 101, 255, 204, 255}}},
{{{ -716, 256, -306 }, 0, { 32, 926 }, { 101, 255, 204, 255}}},
{{{ -716, 256, 307 }, 0, { 1948, 926 }, { 101, 255, 204, 255}}},
{{{ -409, 512, 307 }, 0, { 1948, 0 }, { 101, 255, 204, 255}}},
{{{ -101, 768, 307 }, 0, { 1948, 0 }, { 101, 255, 229, 255}}},
{{{ -409, 512, -306 }, 0, { 32, 926 }, { 101, 255, 229, 255}}},
{{{ -409, 512, 307 }, 0, { 1948, 926 }, { 101, 255, 229, 255}}},
{{{ -101, 768, -306 }, 0, { 32, 0 }, { 101, 255, 229, 255}}},
{{{ 205, 1024, 307 }, 0, { 1948, 0 }, { 101, 229, 255, 255}}},
{{{ 205, 1024, -306 }, 0, { 32, 0 }, { 101, 229, 255, 255}}},
{{{ -101, 768, -306 }, 0, { 32, 926 }, { 101, 229, 255, 255}}},
{{{ -101, 768, 307 }, 0, { 1948, 926 }, { 101, 229, 255, 255}}},
};

Vtx VB_geo_bitdw_000600_0x700d308[] = {
{{{ -1023, 0, 307 }, 0, { 0, 0 }, { 183, 205, 186, 255}}},
{{{ -1023, 0, -306 }, 0, { -1052, 990 }, { 183, 205, 186, 255}}},
{{{ -1637, 0, -306 }, 0, { -2074, 0 }, { 183, 205, 186, 255}}},
{{{ -1637, 0, 307 }, 0, { -1052, -1054 }, { 183, 205, 186, 255}}},
};

const Gfx DL_geo_bitdw_000600_0x700d3e8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_geo_bitdw_000600_0x700d348),
gsSPDisplayList(DL_geo_bitdw_000600_0x700d3b0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_geo_bitdw_000600_0x700d348[] = {
gsDPSetTextureImage(0, 2, 1, geo_bitdw_000600__texture_09008000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_geo_bitdw_000600_0x700d208, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPEndDisplayList(),
};

const Gfx DL_geo_bitdw_000600_0x700d3b0[] = {
gsDPSetTextureImage(0, 2, 1, geo_bitdw_000600__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_geo_bitdw_000600_0x700d308, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

