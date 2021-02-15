#include "custom.model.inc.h"
Vtx VB_cannon_lid_seg8_dl_080048E0_0x8004858[] = {
{{{ 102, 0, -101 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ -101, 0, -101 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -101, 0, 102 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 102, 0, 102 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
};

const Light_t Light_cannon_lid_seg8_dl_080048E0_0x8004048 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_cannon_lid_seg8_dl_080048E0_0x8004040 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_cannon_lid_seg8_dl_080048E0_0x80048e0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_cannon_lid_seg8_dl_080048E0_0x8004898),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_cannon_lid_seg8_dl_080048E0_0x8004898[] = {
gsDPSetTextureImage(0, 2, 1, cannon_lid_seg8_dl_080048E0__texture_08004058),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_cannon_lid_seg8_dl_080048E0_0x8004048.col, 1),
gsSPLight(&Light_cannon_lid_seg8_dl_080048E0_0x8004040.col, 2),
gsSPVertex(VB_cannon_lid_seg8_dl_080048E0_0x8004858, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

