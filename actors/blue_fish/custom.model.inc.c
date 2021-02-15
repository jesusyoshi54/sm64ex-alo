#include "custom.model.inc.h"
Vtx VB_fish_geo_0x301bde0[] = {
{{{ -108, 1, 0 }, 0, { 14, 566 }, { 137, 0, 215, 255}}},
{{{ -44, -13, -31 }, 0, { 286, 688 }, { 235, 137, 220, 255}}},
{{{ -62, -19, 12 }, 0, { 210, 502 }, { 232, 132, 10, 255}}},
{{{ -44, 16, -31 }, 0, { 286, 688 }, { 234, 119, 220, 255}}},
{{{ -62, 21, 12 }, 0, { 210, 502 }, { 232, 124, 11, 255}}},
{{{ -47, 1, -64 }, 0, { 274, 830 }, { 189, 255, 149, 255}}},
{{{ -97, 1, 23 }, 0, { 62, 462 }, { 162, 0, 84, 255}}},
{{{ 55, 1, 127 }, 0, { 712, -8 }, { 26, 0, 124, 255}}},
{{{ 41, 16, 56 }, 0, { 656, 298 }, { 67, 103, 27, 255}}},
{{{ 50, 16, -43 }, 0, { 692, 722 }, { 53, 111, 230, 255}}},
{{{ 41, -14, 56 }, 0, { 656, 298 }, { 67, 153, 27, 255}}},
{{{ 50, -13, -43 }, 0, { 692, 722 }, { 53, 145, 230, 255}}},
{{{ 62, 1, -92 }, 0, { 742, 930 }, { 66, 255, 148, 255}}},
{{{ 101, 1, 1 }, 0, { 910, 520 }, { 126, 0, 1, 255}}},
};

Vtx VB_fish_geo_0x301c018[] = {
{{{ 67, 0, -58 }, 0, { 736, 728 }, { 122, 0, 222, 255}}},
{{{ 67, -3, -28 }, 0, { 704, 574 }, { 83, 163, 20, 255}}},
{{{ 0, 1, -3 }, 0, { 1022, 356 }, { 161, 249, 173, 255}}},
{{{ 67, 4, 27 }, 0, { 644, 290 }, { 63, 109, 243, 255}}},
{{{ 53, 0, 0 }, 0, { 744, 414 }, { 126, 0, 254, 255}}},
{{{ 67, -3, 27 }, 0, { 644, 290 }, { 64, 149, 235, 255}}},
{{{ 0, 0, 5 }, 0, { 1016, 312 }, { 158, 253, 80, 255}}},
{{{ 67, 4, -28 }, 0, { 704, 574 }, { 84, 92, 21, 255}}},
{{{ 67, 0, 57 }, 0, { 612, 138 }, { 122, 0, 34, 255}}},
};

const Light_t Light_fish_geo_0x301b5d0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_fish_geo_0x301b5c8 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_fish_geo_0x301bfb8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_fish_geo_0x301bec0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_fish_geo_0x301bec0[] = {
gsDPSetTextureImage(0, 2, 1, fish_geo__texture_0301B5E0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_fish_geo_0x301b5d0.col, 1),
gsSPLight(&Light_fish_geo_0x301b5c8.col, 2),
gsSPVertex(VB_fish_geo_0x301bde0, 14, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 4, 0),
gsSP2Triangles(5, 0, 3, 0,2, 6, 0, 0),
gsSP2Triangles(0, 6, 4, 0,5, 1, 0, 0),
gsSP2Triangles(4, 6, 7, 0,6, 2, 7, 0),
gsSP2Triangles(7, 8, 4, 0,9, 4, 8, 0),
gsSP2Triangles(9, 3, 4, 0,2, 10, 7, 0),
gsSP2Triangles(1, 11, 2, 0,11, 10, 2, 0),
gsSP2Triangles(1, 5, 12, 0,12, 5, 3, 0),
gsSP2Triangles(9, 11, 12, 0,3, 9, 12, 0),
gsSP2Triangles(12, 11, 1, 0,8, 7, 10, 0),
gsSP2Triangles(13, 9, 8, 0,9, 13, 11, 0),
gsSP2Triangles(11, 13, 10, 0,10, 13, 8, 0),
gsSPEndDisplayList(),
};

const Gfx DL_fish_geo_0x301c150[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_fish_geo_0x301c0a8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_fish_geo_0x301c0a8[] = {
gsDPSetTextureImage(0, 2, 1, fish_geo__texture_0301B5E0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_fish_geo_0x301b5d0.col, 1),
gsSPLight(&Light_fish_geo_0x301b5c8.col, 2),
gsSPVertex(VB_fish_geo_0x301c018, 9, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 4, 0),
gsSP2Triangles(4, 5, 2, 0,2, 5, 6, 0),
gsSP2Triangles(2, 1, 4, 0,2, 6, 3, 0),
gsSP2Triangles(4, 7, 2, 0,2, 7, 0, 0),
gsSP2Triangles(6, 8, 3, 0,3, 8, 5, 0),
gsSP2Triangles(3, 5, 4, 0,4, 1, 7, 0),
gsSP2Triangles(6, 5, 8, 0,1, 0, 7, 0),
gsSPEndDisplayList(),
};

