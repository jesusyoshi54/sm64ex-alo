#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_0002C0_0x70026a0[] = {
{{{ -3071, -1340, 1024 }, 0, { 1604, 1908 }, { 196, 153, 41, 255}}},
{{{ -1497, -1852, 2050 }, 0, { 580, 338 }, { 196, 153, 41, 255}}},
{{{ -1945, -1340, 2662 }, 0, { 0, 786 }, { 196, 153, 41, 255}}},
{{{ -3071, -1340, 1024 }, 0, { 1604, 1908 }, { 204, 144, 24, 255}}},
{{{ -1182, -2364, 394 }, 0, { 2232, 24 }, { 204, 144, 24, 255}}},
{{{ -1497, -1852, 2050 }, 0, { 580, 338 }, { 204, 144, 24, 255}}},
};

Vtx VB_bowser_3_geo_0002C0_0x7002700[] = {
{{{ -3071, 307, 1024 }, 0, { -1052, -508 }, { 0, 127, 0, 255}}},
{{{ -1497, 307, 2050 }, 0, { -6, 174 }, { 0, 127, 0, 255}}},
{{{ -1182, 307, 394 }, 0, { 204, -928 }, { 0, 127, 0, 255}}},
{{{ -1945, 307, 2662 }, 0, { -302, 582 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_0002C0_0x7002740[] = {
{{{ -3071, -1340, 1024 }, 0, { -996, 2012 }, { 216, 0, 136, 255}}},
{{{ -1182, 307, 394 }, 0, { 990, 0 }, { 216, 0, 136, 255}}},
{{{ -1182, -2364, 394 }, 0, { 990, 2012 }, { 216, 0, 136, 255}}},
{{{ -1945, -1340, 2662 }, 0, { 2260, 1816 }, { 152, 0, 71, 255}}},
{{{ -1945, 307, 2662 }, 0, { 2260, 172 }, { 152, 0, 71, 255}}},
{{{ -3071, 307, 1024 }, 0, { 754, 172 }, { 152, 0, 71, 255}}},
{{{ -3071, -1340, 1024 }, 0, { 754, 1816 }, { 152, 0, 71, 255}}},
{{{ -1182, -2364, 394 }, 0, { -690, 2012 }, { 124, 0, 23, 255}}},
{{{ -1497, 307, 2050 }, 0, { 990, 0 }, { 124, 0, 23, 255}}},
{{{ -1497, -1852, 2050 }, 0, { 990, 2012 }, { 124, 0, 23, 255}}},
{{{ -1182, 307, 394 }, 0, { -690, 0 }, { 124, 0, 23, 255}}},
{{{ -1497, 307, 2050 }, 0, { 234, 0 }, { 102, 0, 75, 255}}},
{{{ -1945, -1340, 2662 }, 0, { 990, 2012 }, { 102, 0, 75, 255}}},
{{{ -1497, -1852, 2050 }, 0, { 234, 2012 }, { 102, 0, 75, 255}}},
{{{ -1945, 307, 2662 }, 0, { 990, 0 }, { 102, 0, 75, 255}}},
{{{ -3071, 307, 1024 }, 0, { -996, 0 }, { 216, 0, 136, 255}}},
};

const Light_t Light_bowser_3_geo_0002C0_0x7002678 = {
{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

const Light_t Light_bowser_3_geo_0002C0_0x7002690 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_bowser_3_geo_0002C0_0x7002670 = {
{34, 34, 34}, 0, {34, 34, 34}, 0
};

const Ambient_t Light_bowser_3_geo_0002C0_0x7002688 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_bowser_3_geo_0002C0_0x7002918[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bowser_3_geo_0002C0_0x7002840),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowser_3_geo_0002C0_0x70028b0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_0002C0_0x7002840[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_0002C0__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_bowser_3_geo_0002C0_0x7002678.col, 1),
gsSPLight(&Light_bowser_3_geo_0002C0_0x7002670.col, 2),
gsSPVertex(VB_bowser_3_geo_0002C0_0x70026a0, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_bowser_3_geo_0002C0_0x7002690.col, 1),
gsSPLight(&Light_bowser_3_geo_0002C0_0x7002688.col, 2),
gsSPVertex(VB_bowser_3_geo_0002C0_0x7002700, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_0002C0_0x70028b0[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_0002C0__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowser_3_geo_0002C0_0x7002740, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};

