#include "custom.model.inc.h"
Vtx VB_cyan_fish_geo_0x600dc80[] = {
{{{ -95, 32, 0 }, 0, { 32, 436 }, { 169, 91, 255, 255}}},
{{{ -39, 20, 28 }, 0, { 184, 480 }, { 244, 10, 125, 255}}},
{{{ 32, 112, 0 }, 0, { 376, 144 }, { 226, 123, 255, 255}}},
{{{ -39, 20, -27 }, 0, { 184, 478 }, { 245, 9, 130, 255}}},
{{{ -115, 0, 0 }, 0, { -22, 552 }, { 149, 189, 0, 255}}},
{{{ 28, -79, 8 }, 0, { 366, 844 }, { 215, 185, 96, 255}}},
{{{ 161, 14, 0 }, 0, { 724, 500 }, { 105, 70, 0, 255}}},
{{{ 161, -13, 0 }, 0, { 724, 604 }, { 105, 186, 0, 255}}},
{{{ 28, -79, -7 }, 0, { 366, 844 }, { 215, 186, 160, 255}}},
{{{ 56, -111, 0 }, 0, { 442, 960 }, { 194, 146, 0, 255}}},
};

Vtx VB_cyan_fish_geo_0x600df60[] = {
{{{ 55, -37, 6 }, 0, { 868, 690 }, { 78, 174, 55, 255}}},
{{{ 55, -37, -5 }, 0, { 868, 690 }, { 21, 192, 149, 255}}},
{{{ 88, 64, -3 }, 0, { 958, 318 }, { 100, 21, 182, 255}}},
{{{ 0, -13, 0 }, 0, { 718, 604 }, { 202, 181, 86, 255}}},
{{{ 0, 14, 0 }, 0, { 718, 500 }, { 199, 76, 173, 255}}},
{{{ 88, 64, 4 }, 0, { 958, 318 }, { 19, 36, 120, 255}}},
};

Vtx VB_cyan_fish_geo_0x600de50[] = {
{{{ 9, -26, 0 }, 0, { 420, 230 }, { 0, 0, 127, 255}}},
{{{ 57, -48, 0 }, 0, { 560, 260 }, { 0, 0, 127, 255}}},
{{{ 120, 0, 0 }, 0, { 688, 26 }, { 0, 0, 127, 255}}},
{{{ 0, 0, 0 }, 0, { 376, 144 }, { 0, 0, 127, 255}}},
};

const Light_t Light_cyan_fish_geo_0x600dc70 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_cyan_fish_geo_0x600dc68 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_cyan_fish_geo_0x600ddd8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_cyan_fish_geo_0x600dd20),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_cyan_fish_geo_0x600dd20[] = {
gsDPSetTextureImage(0, 2, 1, cyan_fish_geo__texture_0600D468),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_cyan_fish_geo_0x600dc70.col, 1),
gsSPLight(&Light_cyan_fish_geo_0x600dc68.col, 2),
gsSPVertex(VB_cyan_fish_geo_0x600dc80, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 2, 0),
gsSP2Triangles(0, 4, 1, 0,4, 0, 3, 0),
gsSP2Triangles(4, 5, 1, 0,1, 6, 2, 0),
gsSP2Triangles(1, 5, 7, 0,1, 7, 6, 0),
gsSP2Triangles(6, 3, 2, 0,4, 3, 8, 0),
gsSP2Triangles(7, 8, 3, 0,6, 7, 3, 0),
gsSP2Triangles(5, 9, 7, 0,7, 9, 8, 0),
gsSP2Triangles(4, 8, 5, 0,5, 8, 9, 0),
gsSPEndDisplayList(),
};

const Light_t Light_cyan_fish_geo_0x600df50 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_cyan_fish_geo_0x600df48 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_cyan_fish_geo_0x600e038[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_cyan_fish_geo_0x600dfc0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_cyan_fish_geo_0x600dfc0[] = {
gsDPSetTextureImage(0, 2, 1, cyan_fish_geo__texture_0600D468),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_cyan_fish_geo_0x600df50.col, 1),
gsSPLight(&Light_cyan_fish_geo_0x600df48.col, 2),
gsSPVertex(VB_cyan_fish_geo_0x600df60, 6, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 4, 0),
gsSP2Triangles(1, 4, 2, 0,0, 3, 1, 0),
gsSP2Triangles(3, 5, 4, 0,3, 0, 5, 0),
gsSP2Triangles(2, 4, 5, 0,0, 2, 5, 0),
gsSPEndDisplayList(),
};

const Light_t Light_cyan_fish_geo_0x600de40 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_cyan_fish_geo_0x600de38 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

const Gfx DL_cyan_fish_geo_0x600ded8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_CULL_BACK, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_cyan_fish_geo_0x600de90),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

const Gfx DL_cyan_fish_geo_0x600de90[] = {
gsDPSetTextureImage(0, 2, 1, cyan_fish_geo__texture_0600D468),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_cyan_fish_geo_0x600de40.col, 1),
gsSPLight(&Light_cyan_fish_geo_0x600de38.col, 2),
gsSPVertex(VB_cyan_fish_geo_0x600de50, 4, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 0, 0),
gsSPEndDisplayList(),
};

