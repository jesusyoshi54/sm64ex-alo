#include "custom.model.inc.h"
Vtx VB_sl_geo_000378_0x700a928[] = {
{{{ -8, 0, 5 }, 0, { 0, 0 }, { 0, 127, 0, 100}}},
{{{ 9, 0, 5 }, 0, { 0, 0 }, { 0, 127, 0, 100}}},
{{{ 0, 0, -9 }, 0, { 0, 0 }, { 0, 127, 0, 100}}},
};

Light_t Light_sl_geo_000378_0x700a918 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_sl_geo_000378_0x700a910 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_sl_geo_000378_0x700a980[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_CULL_BACK|G_SHADING_SMOOTH, 0),
gsSPDisplayList(DL_sl_geo_000378_0x700a958),
gsDPPipeSync(),
gsSPGeometryMode(0, G_CULL_BACK|G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_sl_geo_000378_0x700a958[] = {
gsSPLight(&Light_sl_geo_000378_0x700a918.col, 1),
gsSPLight(&Light_sl_geo_000378_0x700a910.col, 2),
gsSPVertex(VB_sl_geo_000378_0x700a928, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

