#include "custom.model.inc.h"
Vtx VB_wooden_signpost_geo_0x302c958[] = {
{{{ 0, 504, 19 }, 0, { 962, 478 }, { 0, 126, 252, 255}}},
{{{ 24, 490, 34 }, 0, { 938, 780 }, { 98, 59, 54, 255}}},
{{{ 0, 490, -6 }, 0, { 938, 478 }, { 255, 57, 144, 255}}},
{{{ -23, 490, 34 }, 0, { 938, 178 }, { 158, 58, 54, 255}}},
{{{ 0, -39, 34 }, 0, { 36, 478 }, { 0, 252, 126, 255}}},
{{{ -23, -39, -6 }, 0, { 36, 178 }, { 147, 0, 193, 255}}},
{{{ 24, -39, -6 }, 0, { 36, 780 }, { 109, 0, 192, 255}}},
};

Vtx VB_wooden_signpost_geo_0x302dac0[] = {
{{{ 180, 260, 20 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
{{{ -179, 260, 60 }, 0, { 0, 990 }, { 0, 129, 0, 255}}},
{{{ -179, 260, 20 }, 0, { 0, 990 }, { 0, 129, 0, 255}}},
{{{ 180, 260, 20 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ -179, 260, 20 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ -179, 460, 20 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -179, 260, 20 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -179, 260, 60 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -179, 460, 60 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -179, 460, 20 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ 180, 260, 60 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
{{{ -179, 460, 20 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -179, 460, 60 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 180, 460, 60 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ 180, 460, 20 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 180, 460, 20 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_wooden_signpost_geo_0x302dbc0[] = {
{{{ 180, 260, 60 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 180, 460, 20 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 180, 460, 60 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 180, 260, 20 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
};

Vtx VB_wooden_signpost_geo_0x302dc00[] = {
{{{ -179, 260, 60 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 180, 460, 60 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -179, 460, 60 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ 180, 260, 60 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
};

Light_t Light_wooden_signpost_geo_0x302c948 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wooden_signpost_geo_0x302c940 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_wooden_signpost_geo_0x302da48[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wooden_signpost_geo_0x302d9c8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_wooden_signpost_geo_0x302d9c8[] = {
gsDPSetTextureImage(0, 2, 1, wooden_signpost_geo__texture_0302C9C8),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wooden_signpost_geo_0x302c948.col, 1),
gsSPLight(&Light_wooden_signpost_geo_0x302c940.col, 2),
gsSPVertex(VB_wooden_signpost_geo_0x302c958, 7, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 0, 0),
gsSP2Triangles(0, 3, 1, 0,4, 1, 3, 0),
gsSP2Triangles(3, 5, 4, 0,5, 3, 2, 0),
gsSP2Triangles(2, 6, 5, 0,1, 4, 6, 0),
gsSP1Triangle(6, 2, 1, 0),
gsSPEndDisplayList(),
};

Light_t Light_wooden_signpost_geo_0x302dab0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wooden_signpost_geo_0x302daa8 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_wooden_signpost_geo_0x302dd08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wooden_signpost_geo_0x302dc40),
gsSPDisplayList(DL_wooden_signpost_geo_0x302dcd0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wooden_signpost_geo_0x302dc40[] = {
gsDPSetTextureImage(0, 2, 1, wooden_signpost_geo__texture_0302C9C8),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wooden_signpost_geo_0x302dab0.col, 1),
gsSPLight(&Light_wooden_signpost_geo_0x302daa8.col, 2),
gsSPVertex(VB_wooden_signpost_geo_0x302dac0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 8, 9, 0),
gsSP2Triangles(0, 10, 1, 0,11, 12, 13, 0),
gsSP2Triangles(3, 5, 14, 0,11, 13, 15, 0),
gsSPVertex(VB_wooden_signpost_geo_0x302dbc0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_wooden_signpost_geo_0x302dcd0[] = {
gsDPSetTextureImage(0, 2, 1, wooden_signpost_geo__texture_0302D1C8),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wooden_signpost_geo_0x302dc00, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

