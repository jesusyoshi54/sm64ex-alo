#include "custom.model.inc.h"
Vtx VB_wdw_geo_0005C0_0x7012f78[] = {
{{{ -50, 51, -50 }, 0, { 990, 0 }, { 166, 88, 0, 255}}},
{{{ -50, 51, 51 }, 0, { 0, 0 }, { 166, 88, 0, 255}}},
{{{ 0, 102, 0 }, 0, { 480, 932 }, { 166, 88, 0, 255}}},
{{{ 51, 51, -50 }, 0, { 990, 0 }, { 89, 167, 0, 255}}},
{{{ 51, 51, 51 }, 0, { 0, 0 }, { 89, 167, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 480, 932 }, { 89, 167, 0, 255}}},
};

Vtx VB_wdw_geo_0005C0_0x7012fd8[] = {
{{{ 51, 51, 51 }, 0, { 990, 0 }, { 89, 89, 0, 255}}},
{{{ 51, 51, -50 }, 0, { 0, 0 }, { 89, 89, 0, 255}}},
{{{ 0, 102, 0 }, 0, { 478, 932 }, { 89, 89, 0, 255}}},
{{{ -50, 51, 51 }, 0, { 990, 0 }, { 166, 168, 0, 255}}},
{{{ -50, 51, -50 }, 0, { 0, 0 }, { 166, 168, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 478, 932 }, { 166, 168, 0, 255}}},
};

Vtx VB_wdw_geo_0005C0_0x7013038[] = {
{{{ -50, 51, 51 }, 0, { 990, 0 }, { 0, 89, 89, 255}}},
{{{ 51, 51, 51 }, 0, { 0, 0 }, { 0, 89, 89, 255}}},
{{{ 0, 102, 0 }, 0, { 480, 932 }, { 0, 89, 89, 255}}},
{{{ -50, 51, -50 }, 0, { 990, 0 }, { 0, 168, 166, 255}}},
{{{ 51, 51, -50 }, 0, { 0, 0 }, { 0, 168, 166, 255}}},
{{{ 0, 0, 0 }, 0, { 480, 932 }, { 0, 168, 166, 255}}},
};

Vtx VB_wdw_geo_0005C0_0x7013098[] = {
{{{ 51, 51, 51 }, 0, { 990, 0 }, { 0, 167, 89, 255}}},
{{{ -50, 51, 51 }, 0, { 0, 0 }, { 0, 167, 89, 255}}},
{{{ 0, 0, 0 }, 0, { 478, 932 }, { 0, 167, 89, 255}}},
{{{ 51, 51, -50 }, 0, { 990, 0 }, { 0, 88, 166, 255}}},
{{{ -50, 51, -50 }, 0, { 0, 0 }, { 0, 88, 166, 255}}},
{{{ 0, 102, 0 }, 0, { 478, 932 }, { 0, 88, 166, 255}}},
};

Light_t Light_wdw_geo_0005C0_0x7012f20 = {
{ 255, 255, 0}, 0, { 255, 255, 0}, 0, { 40, 40, 40}, 0
};

Light_t Light_wdw_geo_0005C0_0x7012f38 = {
{ 0, 0, 255}, 0, { 0, 0, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_wdw_geo_0005C0_0x7012f50 = {
{ 0, 255, 0}, 0, { 0, 255, 0}, 0, { 40, 40, 40}, 0
};

Light_t Light_wdw_geo_0005C0_0x7012f68 = {
{ 255, 0, 0}, 0, { 255, 0, 0}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wdw_geo_0005C0_0x7012f18 = {
{153, 153, 0}, 0, {153, 153, 0}, 0
};

Ambient_t Light_wdw_geo_0005C0_0x7012f30 = {
{0, 0, 153}, 0, {0, 0, 153}, 0
};

Ambient_t Light_wdw_geo_0005C0_0x7012f48 = {
{0, 153, 0}, 0, {0, 153, 0}, 0
};

Ambient_t Light_wdw_geo_0005C0_0x7012f60 = {
{153, 0, 0}, 0, {153, 0, 0}, 0
};

Gfx DL_wdw_geo_0005C0_0x70131b8[] = {
gsDPPipeSync(),
gsDPSetEnvColor(255, 255, 255, 200),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wdw_geo_0005C0_0x70130f8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_0005C0_0x70130f8[] = {
gsDPSetTextureImage(0, 2, 1, wdw_geo_0005C0__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f20.col, 1),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f18.col, 2),
gsSPVertex(VB_wdw_geo_0005C0_0x7012f78, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f38.col, 1),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f30.col, 2),
gsSPVertex(VB_wdw_geo_0005C0_0x7012fd8, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f50.col, 1),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f48.col, 2),
gsSPVertex(VB_wdw_geo_0005C0_0x7013038, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f68.col, 1),
gsSPLight(&Light_wdw_geo_0005C0_0x7012f60.col, 2),
gsSPVertex(VB_wdw_geo_0005C0_0x7013098, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPEndDisplayList(),
};

