#include "custom.model.inc.h"
Vtx VB_thi_geo_0005B0_0x70075c0[] = {
{{{ -101, 0, -101 }, 0, { 406, 406 }, { 0, 127, 0, 255}}},
{{{ -101, 0, 102 }, 0, { 406, 552 }, { 0, 127, 0, 255}}},
{{{ 102, 0, -101 }, 0, { 552, 406 }, { 0, 127, 0, 255}}},
{{{ 102, 0, 102 }, 0, { 552, 552 }, { 0, 127, 0, 255}}},
};

Light_t Light_thi_geo_0005B0_0x70075b0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_thi_geo_0005B0_0x70075a8 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_thi_geo_0005B0_0x7007648[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_thi_geo_0005B0_0x7007600),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_thi_geo_0005B0_0x7007600[] = {
gsDPSetTextureImage(0, 2, 1, thi_geo_0005B0__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_thi_geo_0005B0_0x70075b0.col, 1),
gsSPLight(&Light_thi_geo_0005B0_0x70075a8.col, 2),
gsSPVertex(VB_thi_geo_0005B0_0x70075c0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSPEndDisplayList(),
};

