#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_000350_0x70039f0[] = {
{{{ 788, -2364, -1024 }, 0, { 3648, -1944 }, { 25, 144, 204, 255}}},
{{{ 0, -1852, -2522 }, 0, { 5144, -1156 }, { 25, 144, 204, 255}}},
{{{ 1946, -1340, -2661 }, 0, { 5282, -3098 }, { 25, 144, 204, 255}}},
{{{ 0, -1852, -2522 }, 0, { 5144, -1156 }, { 22, 153, 186, 255}}},
{{{ 0, -1340, -3276 }, 0, { 5896, -1156 }, { 22, 153, 186, 255}}},
{{{ 1946, -1340, -2661 }, 0, { 5282, -3098 }, { 22, 153, 186, 255}}},
};

Vtx VB_bowser_3_geo_000350_0x7003a50[] = {
{{{ 0, 307, -3276 }, 0, { 990, -3370 }, { 0, 127, 0, 255}}},
{{{ 0, 307, -2522 }, 0, { 990, -2870 }, { 0, 127, 0, 255}}},
{{{ 788, 307, -1024 }, 0, { 1514, -1872 }, { 0, 127, 0, 255}}},
{{{ 1946, 307, -2661 }, 0, { 2284, -2962 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_000350_0x7003a90[] = {
{{{ 1946, -1340, -2661 }, 0, { 990, 2012 }, { 103, 0, 73, 255}}},
{{{ 788, 307, -1024 }, 0, { -1010, 0 }, { 103, 0, 73, 255}}},
{{{ 788, -2364, -1024 }, 0, { -1010, 2012 }, { 103, 0, 73, 255}}},
{{{ 0, 307, -3276 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ 0, -1340, -3276 }, 0, { 990, 2012 }, { 129, 0, 0, 255}}},
{{{ 0, -1852, -2522 }, 0, { 238, 2012 }, { 129, 0, 0, 255}}},
{{{ 0, 307, -2522 }, 0, { 238, 0 }, { 129, 0, 0, 255}}},
{{{ 788, 307, -1024 }, 0, { -698, 0 }, { 144, 0, 59, 255}}},
{{{ 0, 307, -2522 }, 0, { 990, 0 }, { 144, 0, 59, 255}}},
{{{ 0, -1852, -2522 }, 0, { 990, 2012 }, { 144, 0, 59, 255}}},
{{{ 788, -2364, -1024 }, 0, { -698, 2012 }, { 144, 0, 59, 255}}},
{{{ 0, -1340, -3276 }, 0, { -1044, 2012 }, { 38, 0, 135, 255}}},
{{{ 1946, 307, -2661 }, 0, { 990, 0 }, { 38, 0, 135, 255}}},
{{{ 1946, -1340, -2661 }, 0, { 990, 2012 }, { 38, 0, 135, 255}}},
{{{ 0, 307, -3276 }, 0, { -1044, 0 }, { 38, 0, 135, 255}}},
{{{ 1946, 307, -2661 }, 0, { 990, 0 }, { 103, 0, 73, 255}}},
};

const Light_t Light_bowser_3_geo_000350_0x70039c8 = {
{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

const Light_t Light_bowser_3_geo_000350_0x70039e0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_bowser_3_geo_000350_0x70039c0 = {
{34, 34, 34}, 0, {34, 34, 34}, 0
};

const Ambient_t Light_bowser_3_geo_000350_0x70039d8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_bowser_3_geo_000350_0x7003c68[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bowser_3_geo_000350_0x7003b90),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowser_3_geo_000350_0x7003c00),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_000350_0x7003b90[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000350__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_bowser_3_geo_000350_0x70039c8.col, 1),
gsSPLight(&Light_bowser_3_geo_000350_0x70039c0.col, 2),
gsSPVertex(VB_bowser_3_geo_000350_0x70039f0, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_bowser_3_geo_000350_0x70039e0.col, 1),
gsSPLight(&Light_bowser_3_geo_000350_0x70039d8.col, 2),
gsSPVertex(VB_bowser_3_geo_000350_0x7003a50, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_3_geo_000350_0x7003c00[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000350__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowser_3_geo_000350_0x7003a90, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 3, 5, 0,7, 8, 9, 0),
gsSP2Triangles(10, 7, 9, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};
