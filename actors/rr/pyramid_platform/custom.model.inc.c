#include "custom.model.inc.h"
Vtx VB_rr_geo_0008D8_0x701aca0[] = {
{{{ 0, 0, 0 }, 0, { 990, 990 }, { 84, 22, 206, 255}}},
{{{ 307, 307, -306 }, 0, { 2012, 990 }, { 84, 22, 206, 255}}},
{{{ 307, 307, 307 }, 0, { 990, 0 }, { 84, 22, 206, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 990 }, { 84, 22, 206, 255}}},
{{{ -306, 307, -306 }, 0, { 990, 2010 }, { 84, 22, 206, 255}}},
{{{ 307, 307, -306 }, 0, { 2012, 990 }, { 85, 63, 191, 255}}},
{{{ 0, 0, 0 }, 0, { 990, 990 }, { 85, 63, 191, 255}}},
{{{ -306, 307, -306 }, 0, { 990, 2010 }, { 85, 63, 191, 255}}},
{{{ 307, 307, 307 }, 0, { 990, 0 }, { 85, 63, 191, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 990 }, { 85, 63, 191, 255}}},
{{{ 307, 307, -306 }, 0, { 2012, 990 }, { 140, 152, 216, 255}}},
{{{ -306, 307, -306 }, 0, { 990, 2010 }, { 140, 152, 216, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 990 }, { 140, 152, 216, 255}}},
{{{ 307, 307, 307 }, 0, { 990, 0 }, { 140, 152, 216, 255}}},
};

const Gfx DL_rr_geo_0008D8_0x701add8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_rr_geo_0008D8_0x701ad80),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_rr_geo_0008D8_0x701ad80[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_0008D8__texture_09001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_rr_geo_0008D8_0x701aca0, 14, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 0, 0),
gsSP2Triangles(5, 6, 7, 0,6, 8, 9, 0),
gsSP2Triangles(10, 11, 12, 0,10, 12, 13, 0),
gsSPEndDisplayList(),
};

