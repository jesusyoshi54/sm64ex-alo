#include "custom.model.inc.h"
Vtx VB_transparent_star_geo_0x302c4a0[] = {
{{{ 0, 8, -89 }, 0, { 0, 0 }, { 0, 7, 130, 255}}},
{{{ 190, -201, 0 }, 0, { 0, 0 }, { 85, 163, 0, 255}}},
{{{ 0, -129, 0 }, 0, { 0, 0 }, { 0, 130, 0, 255}}},
{{{ 146, -42, 0 }, 0, { 0, 0 }, { 124, 231, 0, 255}}},
{{{ 0, 8, 90 }, 0, { 0, 0 }, { 0, 7, 126, 255}}},
{{{ 257, 84, 0 }, 0, { 0, 0 }, { 104, 71, 0, 255}}},
{{{ -145, -42, 0 }, 0, { 0, 0 }, { 132, 231, 0, 255}}},
{{{ -189, -201, 0 }, 0, { 0, 0 }, { 170, 163, 0, 255}}},
{{{ -256, 84, 0 }, 0, { 0, 0 }, { 151, 71, 0, 255}}},
{{{ 0, 246, 0 }, 0, { 0, 0 }, { 0, 126, 0, 255}}},
{{{ 96, 99, 0 }, 0, { 0, 0 }, { 61, 111, 0, 255}}},
{{{ -95, 99, 0 }, 0, { 0, 0 }, { 195, 111, 0, 255}}},
};

Light_t Light_transparent_star_geo_0x302c490 = {
{ 30, 50, 230}, 0, { 30, 50, 230}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_transparent_star_geo_0x302c488 = {
{3, 5, 23}, 0, {3, 5, 23}, 0
};

Gfx DL_transparent_star_geo_0x302c620[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
gsDPSetEnvColor(255, 255, 255, 120),
gsSPDisplayList(DL_transparent_star_geo_0x302c560),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_transparent_star_geo_0x302c560[] = {
gsSPLight(&Light_transparent_star_geo_0x302c490.col, 1),
gsSPLight(&Light_transparent_star_geo_0x302c488.col, 2),
gsSPVertex(VB_transparent_star_geo_0x302c4a0, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(2, 1, 4, 0,1, 3, 4, 0),
gsSP2Triangles(5, 3, 0, 0,4, 3, 5, 0),
gsSP2Triangles(6, 7, 4, 0,7, 2, 4, 0),
gsSP2Triangles(8, 6, 4, 0,9, 4, 10, 0),
gsSP2Triangles(9, 11, 4, 0,4, 5, 10, 0),
gsSP2Triangles(11, 8, 4, 0,0, 2, 7, 0),
gsSP2Triangles(0, 7, 6, 0,0, 6, 8, 0),
gsSP2Triangles(0, 8, 11, 0,0, 11, 9, 0),
gsSP2Triangles(10, 5, 0, 0,10, 0, 9, 0),
gsSPEndDisplayList(),
};

