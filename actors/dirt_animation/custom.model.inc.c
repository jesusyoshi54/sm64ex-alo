#include "custom.model.inc.h"
Vtx VB_dirt_animation_geo_0x302c098[] = {
{{{ -10, 0, 10 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 10, 0, 10 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
{{{ 0, 0, -10 }, 0, { 0, 0 }, { 0, 127, 0, 0}}},
};

Vtx VB_dirt_animation_geo_0x302bdc8[] = {
{{{ -101, -60, 0 }, 0, { -130, 467 }, { 0, 0, 127, 255}}},
{{{ 102, -60, 0 }, 0, { 599, 467 }, { 0, 0, 127, 255}}},
{{{ 0, 92, 0 }, 0, { 234, -81 }, { 0, 0, 127, 255}}},
};

Vtx VB_dirt_animation_geo_0x302c0c8[] = {
{{{ -10, 10, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 10, 10, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
{{{ 0, -10, 0 }, 0, { 0, 0 }, { 255, 255, 0, 255}}},
};

Light_t Light_dirt_animation_geo_0x302bd70 = {
{ 255, 100, 100}, 0, { 255, 100, 100}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_dirt_animation_geo_0x302bd68 = {
{63, 25, 25}, 0, {63, 25, 25}, 0
};

Gfx DL_dirt_animation_geo_0x302c378[] = {
gsSPLight(&Light_dirt_animation_geo_0x302bd70.col, 1),
gsSPLight(&Light_dirt_animation_geo_0x302bd68.col, 2),
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPVertex(VB_dirt_animation_geo_0x302c098, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Light_t Light_dirt_animation_geo_0x302bd88 = {
{ 100, 255, 100}, 0, { 100, 255, 100}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_dirt_animation_geo_0x302bd80 = {
{25, 63, 25}, 0, {25, 63, 25}, 0
};

Gfx DL_dirt_animation_geo_0x302c3b0[] = {
gsSPLight(&Light_dirt_animation_geo_0x302bd88.col, 1),
gsSPLight(&Light_dirt_animation_geo_0x302bd80.col, 2),
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPVertex(VB_dirt_animation_geo_0x302c098, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Light_t Light_dirt_animation_geo_0x302bda0 = {
{ 100, 100, 255}, 0, { 100, 100, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_dirt_animation_geo_0x302bd98 = {
{25, 25, 63}, 0, {25, 25, 63}, 0
};

Gfx DL_dirt_animation_geo_0x302c3e8[] = {
gsSPLight(&Light_dirt_animation_geo_0x302bda0.col, 1),
gsSPLight(&Light_dirt_animation_geo_0x302bd98.col, 2),
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPVertex(VB_dirt_animation_geo_0x302c098, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_dirt_animation_geo_0x302c028[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPDisplayList(DL_dirt_animation_geo_0x302bff8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_dirt_animation_geo_0x302bff8[] = {
gsDPSetTextureImage(0, 2, 1, dirt_animation_geo__texture_0302BDF8),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 255, 512),
gsSPVertex(VB_dirt_animation_geo_0x302bdc8, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

Light_t Light_dirt_animation_geo_0x302bdb8 = {
{ 255, 255, 100}, 0, { 255, 255, 100}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_dirt_animation_geo_0x302bdb0 = {
{63, 63, 25}, 0, {63, 63, 25}, 0
};

Gfx DL_dirt_animation_geo_0x302c420[] = {
gsSPLight(&Light_dirt_animation_geo_0x302bdb8.col, 1),
gsSPLight(&Light_dirt_animation_geo_0x302bdb0.col, 2),
gsSPGeometryMode(G_CULL_BACK, 0),
gsSPVertex(VB_dirt_animation_geo_0x302c098, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK),
gsSPEndDisplayList(),
};

Gfx DL_dirt_animation_geo_0x302c458[] = {
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsSPVertex(VB_dirt_animation_geo_0x302c0c8, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

