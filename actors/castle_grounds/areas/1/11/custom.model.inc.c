#include "custom.model.inc.h"
Vtx VB_castle_grounds_geo_000660_0x700c5f0[] = {
{{{ 460, 0, -359 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, -479 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, 480 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 460, 0, 360 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_castle_grounds_geo_000660_0x700c640[] = {
{{{ 460, 0, 360 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 460, 0, -359 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
};

Vtx VB_castle_grounds_geo_000660_0x700c5b0[] = {
{{{ 0, 0, 360 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 460, 0, 240 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 460, 0, -239 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, -359 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_castle_grounds_geo_000660_0x700c570[] = {
{{{ 0, 0, 240 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 345, 0, 150 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 345, 0, -149 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, -239 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_castle_grounds_geo_000660_0x700c530[] = {
{{{ 0, 0, 150 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 287, 0, 75 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 287, 0, -74 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, -149 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Vtx VB_castle_grounds_geo_000660_0x700c500[] = {
{{{ 0, 0, 75 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 287, 0, 0 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, -74 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
};

Light_t Light_castle_grounds_geo_000660_0x700c4e8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Light_t Light_castle_grounds_geo_000660_0x700c4d0 = {
{ 255, 0, 0}, 0, { 255, 0, 0}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_castle_grounds_geo_000660_0x700c4e0 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Ambient_t Light_castle_grounds_geo_000660_0x700c4c8 = {
{102, 0, 0}, 0, {102, 0, 0}, 0
};

Gfx DL_castle_grounds_geo_000660_0x700c768[] = {
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4e8.col, 1),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4e0.col, 2),
gsSPVertex(VB_castle_grounds_geo_000660_0x700c5f0, 5, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 4, 0),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4d0.col, 1),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4c8.col, 2),
gsSPVertex(VB_castle_grounds_geo_000660_0x700c640, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_castle_grounds_geo_000660_0x700c728[] = {
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4d0.col, 1),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4c8.col, 2),
gsSPVertex(VB_castle_grounds_geo_000660_0x700c5b0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_castle_grounds_geo_000660_0x700c6e8[] = {
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4d0.col, 1),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4c8.col, 2),
gsSPVertex(VB_castle_grounds_geo_000660_0x700c570, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_castle_grounds_geo_000660_0x700c6a8[] = {
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4d0.col, 1),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4c8.col, 2),
gsSPVertex(VB_castle_grounds_geo_000660_0x700c530, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_castle_grounds_geo_000660_0x700c670[] = {
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4d0.col, 1),
gsSPLight(&Light_castle_grounds_geo_000660_0x700c4c8.col, 2),
gsSPVertex(VB_castle_grounds_geo_000660_0x700c500, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

