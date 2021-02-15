#include "custom.model.inc.h"
Vtx VB_white_particle_dl_0x302c660[] = {
{{{ -15, -15, 0 }, 0, { 0, 480 }, { 255, 255, 255, 255}}},
{{{ 15, -15, 0 }, 0, { 480, 480 }, { 255, 255, 255, 255}}},
{{{ 15, 15, 0 }, 0, { 480, 0 }, { 255, 255, 255, 255}}},
{{{ -15, 15, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_white_particle_dl_0x302c8a0[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsDPSetTextureImage(0, 2, 1, white_particle_dl__texture_0302C6A0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 255, 512),
gsDPPipeSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_white_particle_dl_0x302c660, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

