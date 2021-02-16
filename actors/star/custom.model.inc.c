#include "custom.model.inc.h"
Vtx VB_star_geo_0x3033b28[] = {
{{{ -250, -240, 0 }, 0, { 2032, 1008 }, { 0, 0, 129, 255}}},
{{{ 250, 260, 0 }, 0, { 1008, -16 }, { 0, 0, 129, 255}}},
{{{ 250, -240, 0 }, 0, { 1008, 1008 }, { 0, 0, 129, 255}}},
{{{ -250, 260, 0 }, 0, { 2032, -16 }, { 0, 0, 129, 255}}},
{{{ 250, -240, 0 }, 0, { 2032, 1008 }, { 0, 0, 127, 255}}},
{{{ -250, 260, 0 }, 0, { 1008, -16 }, { 0, 0, 127, 255}}},
{{{ -250, -240, 0 }, 0, { 1008, 1008 }, { 0, 0, 127, 255}}},
{{{ 250, 260, 0 }, 0, { 2032, -16 }, { 0, 0, 127, 255}}},
{{{ 0, -240, -250 }, 0, { 2032, 1008 }, { 127, 0, 0, 255}}},
{{{ 0, 260, 250 }, 0, { 1008, -16 }, { 127, 0, 0, 255}}},
{{{ 0, -240, 250 }, 0, { 1008, 1008 }, { 127, 0, 0, 255}}},
};

Vtx VB_star_geo_0x3033bd8[] = {
{{{ 0, 260, 250 }, 0, { 1008, -16 }, { 127, 0, 0, 255}}},
{{{ 0, -240, -250 }, 0, { 2032, 1008 }, { 127, 0, 0, 255}}},
{{{ 0, 260, -250 }, 0, { 2032, -16 }, { 127, 0, 0, 255}}},
{{{ 0, -240, 250 }, 0, { 2032, 1008 }, { 129, 0, 0, 255}}},
{{{ 0, 260, -250 }, 0, { 1008, -16 }, { 129, 0, 0, 255}}},
{{{ 0, -240, -250 }, 0, { 1008, 1008 }, { 129, 0, 0, 255}}},
{{{ 0, 260, 250 }, 0, { 2032, -16 }, { 129, 0, 0, 255}}},
};

Vtx VB_star_geo_0x302b920[] = {
{{{ 67, 86, 63 }, 0, { 990, 0 }, { 24, 21, 122, 255}}},
{{{ 0, -27, 96 }, 0, { 0, 990 }, { 24, 21, 122, 255}}},
{{{ 67, -29, 83 }, 0, { 990, 990 }, { 24, 21, 122, 255}}},
{{{ 0, 89, 76 }, 0, { 0, 0 }, { 24, 21, 122, 255}}},
{{{ 0, 89, 76 }, 0, { 990, 0 }, { 232, 21, 122, 255}}},
{{{ -66, -29, 83 }, 0, { 0, 990 }, { 232, 21, 122, 255}}},
{{{ 0, -27, 96 }, 0, { 990, 990 }, { 232, 21, 122, 255}}},
{{{ 0, 89, 76 }, 0, { 990, 0 }, { 231, 21, 122, 255}}},
{{{ -66, 86, 63 }, 0, { 0, 0 }, { 231, 21, 122, 255}}},
{{{ -66, -29, 83 }, 0, { 0, 990 }, { 231, 21, 122, 255}}},
};

Light_t Light_star_geo_0x3033310 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 73, 73, 73}, 0
};

Ambient_t Light_star_geo_0x3033308 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx star_seg3_dl_0302B870[] = {
gsDPPipeSync(),
gsSPGeometryMode(0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPLoadSync(),
gsSPLight(&Light_star_geo_0x3033308.col, 2),
gsSPLight(&Light_star_geo_0x3033310.col, 1),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsDPSetTextureImage(0, 2, 1, star_geo__texture_03033320),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_star_geo_0x3033b28, 11, 0),
gsSP2Triangles(0, 1, 2, 0,1, 0, 3, 0),
gsSP2Triangles(4, 5, 6, 0,5, 4, 7, 0),
gsSP1Triangle(8, 9, 10, 0),
gsSPVertex(VB_star_geo_0x3033bd8, 7, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(4, 3, 6, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPEndDisplayList(),
};

Light_t Light_star_geo_0x302b910 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_star_geo_0x302b908 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx star_seg3_dl_0302BA18[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_star_geo_0x302b9c0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_star_geo_0x302b9c0[] = {
gsDPSetTextureImage(0, 2, 1, star_geo__texture_0302AEF0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_star_geo_0x302b910.col, 1),
gsSPLight(&Light_star_geo_0x302b908.col, 2),
gsSPVertex(VB_star_geo_0x302b920, 10, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,7, 8, 9, 0),
gsSPEndDisplayList(),
};

