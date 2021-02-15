#include "custom.model.inc.h"
Vtx VB_breakable_box_small_geo_0x8012a90[] = {
{{{ -100, 0, -100 }, 0, { 992, 0 }, { 129, 0, 0, 255}}},
{{{ -100, 0, 100 }, 0, { 992, 992 }, { 129, 0, 0, 255}}},
{{{ -100, 200, 100 }, 0, { 0, 992 }, { 129, 0, 0, 255}}},
{{{ -100, 0, 100 }, 0, { 0, 992 }, { 0, 0, 127, 255}}},
{{{ 100, 0, 100 }, 0, { 992, 992 }, { 0, 0, 127, 255}}},
{{{ 100, 200, 100 }, 0, { 992, 0 }, { 0, 0, 127, 255}}},
{{{ -100, 200, 100 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ 100, 0, -100 }, 0, { 992, 0 }, { 0, 129, 0, 255}}},
{{{ 100, 0, 100 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
{{{ -100, 0, 100 }, 0, { 0, 992 }, { 0, 129, 0, 255}}},
{{{ -100, 0, -100 }, 0, { 992, 992 }, { 0, 129, 0, 255}}},
{{{ 100, 200, -100 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 100, 200, 100 }, 0, { 0, 992 }, { 127, 0, 0, 255}}},
{{{ 100, 0, 100 }, 0, { 992, 992 }, { 127, 0, 0, 255}}},
{{{ 100, 0, -100 }, 0, { 992, 0 }, { 127, 0, 0, 255}}},
};

Vtx VB_breakable_box_small_geo_0x8012b80[] = {
{{{ -100, 200, 100 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 100, 200, -100 }, 0, { 992, 992 }, { 0, 127, 0, 255}}},
{{{ -100, 200, -100 }, 0, { 992, 0 }, { 0, 127, 0, 255}}},
{{{ 100, 200, 100 }, 0, { 0, 992 }, { 0, 127, 0, 255}}},
{{{ 100, 200, -100 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 100, 0, -100 }, 0, { 0, 992 }, { 0, 0, 129, 255}}},
{{{ -100, 0, -100 }, 0, { 992, 992 }, { 0, 0, 129, 255}}},
{{{ -100, 200, -100 }, 0, { 992, 0 }, { 0, 0, 129, 255}}},
{{{ -100, 0, -100 }, 0, { 992, 0 }, { 129, 0, 0, 255}}},
{{{ -100, 200, 100 }, 0, { 0, 992 }, { 129, 0, 0, 255}}},
{{{ -100, 200, -100 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
};

const Light_t Light_breakable_box_small_geo_0x8011a80 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_breakable_box_small_geo_0x8011a78 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_breakable_box_small_geo_0x8012d20[] = {
gsSPDisplayList(DL_breakable_box_small_geo_0x8012cd8),
gsDPSetTextureImage(0, 2, 1, breakable_box_small_geo__texture_08011A90),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPBranchList(DL_breakable_box_small_geo_0x8012c30),
};

const Gfx DL_breakable_box_small_geo_0x8012cd8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPEndDisplayList(),
};

const Gfx DL_breakable_box_small_geo_0x8012c30[] = {
gsSPLight(&Light_breakable_box_small_geo_0x8011a80.col, 1),
gsSPLight(&Light_breakable_box_small_geo_0x8011a78.col, 2),
gsSPVertex(VB_breakable_box_small_geo_0x8012a90, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 13, 14, 0),
gsSPVertex(VB_breakable_box_small_geo_0x8012b80, 11, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP1Triangle(8, 9, 10, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_breakable_box_small_geo_0x8012d48[] = {
gsSPDisplayList(DL_breakable_box_small_geo_0x8012cd8),
gsDPSetTextureImage(0, 2, 1, breakable_box_small_geo__texture_08012290),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPBranchList(DL_breakable_box_small_geo_0x8012c30),
};

