#include "custom.model.inc.h"
Vtx VB_cartoon_star_geo_0x302c0f8[] = {
{{{ 0, -8, 0 }, 0, { 0, 0 }, { 0, 0, 129, 0}}},
{{{ -32, 80, 0 }, 0, { 0, 0 }, { 0, 0, 129, 0}}},
{{{ 32, 80, 0 }, 0, { 0, 0 }, { 0, 0, 129, 0}}},
{{{ -52, 28, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -116, 80, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -84, -52, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 52, 28, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 84, -52, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 116, 80, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 0, 160, 0 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
};

Vtx VB_cartoon_star_geo_0x302c198[] = {
{{{ 0, -8, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ -32, 80, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 32, 80, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ -52, 28, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ -116, 80, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ -84, -52, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 52, 28, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 84, -52, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 116, 80, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 0, 160, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
};

Light_t Light_cartoon_star_geo_0x302bd70 = {
{ 255, 100, 100}, 0, { 255, 100, 100}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cartoon_star_geo_0x302bd68 = {
{63, 25, 25}, 0, {63, 25, 25}, 0
};

Gfx DL_cartoon_star_geo_0x302c298[] = {
gsSPLight(&Light_cartoon_star_geo_0x302bd70.col, 1),
gsSPLight(&Light_cartoon_star_geo_0x302bd68.col, 2),
gsSPDisplayList(DL_cartoon_star_geo_0x302c238),
gsSPEndDisplayList(),
};

Gfx DL_cartoon_star_geo_0x302c238[] = {
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPVertex(VB_cartoon_star_geo_0x302c0f8, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 1, 0),
gsSP2Triangles(0, 5, 3, 0,6, 7, 0, 0),
gsSP2Triangles(2, 8, 6, 0,1, 9, 2, 0),
gsSP2Triangles(0, 3, 1, 0,2, 6, 0, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Light_t Light_cartoon_star_geo_0x302bd88 = {
{ 100, 255, 100}, 0, { 100, 255, 100}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cartoon_star_geo_0x302bd80 = {
{25, 63, 25}, 0, {25, 63, 25}, 0
};

Gfx DL_cartoon_star_geo_0x302c2b8[] = {
gsSPLight(&Light_cartoon_star_geo_0x302bd88.col, 1),
gsSPLight(&Light_cartoon_star_geo_0x302bd80.col, 2),
gsSPDisplayList(DL_cartoon_star_geo_0x302c238),
gsSPEndDisplayList(),
};

Light_t Light_cartoon_star_geo_0x302bda0 = {
{ 100, 100, 255}, 0, { 100, 100, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cartoon_star_geo_0x302bd98 = {
{25, 25, 63}, 0, {25, 25, 63}, 0
};

Gfx DL_cartoon_star_geo_0x302c2d8[] = {
gsSPLight(&Light_cartoon_star_geo_0x302bda0.col, 1),
gsSPLight(&Light_cartoon_star_geo_0x302bd98.col, 2),
gsSPDisplayList(DL_cartoon_star_geo_0x302c238),
gsSPEndDisplayList(),
};

Light_t Light_cartoon_star_geo_0x302bdb8 = {
{ 255, 255, 100}, 0, { 255, 255, 100}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_cartoon_star_geo_0x302bdb0 = {
{63, 63, 25}, 0, {63, 63, 25}, 0
};

Gfx DL_cartoon_star_geo_0x302c2f8[] = {
gsSPLight(&Light_cartoon_star_geo_0x302bdb8.col, 1),
gsSPLight(&Light_cartoon_star_geo_0x302bdb0.col, 2),
gsSPDisplayList(DL_cartoon_star_geo_0x302c238),
gsSPEndDisplayList(),
};

Gfx DL_cartoon_star_geo_0x302c318[] = {
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsSPVertex(VB_cartoon_star_geo_0x302c198, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 1, 0),
gsSP2Triangles(0, 5, 3, 0,6, 7, 0, 0),
gsSP2Triangles(2, 8, 6, 0,1, 9, 2, 0),
gsSP2Triangles(0, 3, 1, 0,2, 6, 0, 0),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

