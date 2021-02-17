#include "custom.model.inc.h"
Vtx VB_bowser_impact_smoke_geo_0x6062b78[] = {
{{{ -150, 150, 0 }, 0, { 0, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 150, 0 }, 0, { 2016, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 300, 0 }, 0, { 2016, 0 }, { 40, 25, 20, 255}}},
{{{ -150, 300, 0 }, 0, { 0, 0 }, { 40, 25, 20, 255}}},
{{{ -150, 0, 0 }, 0, { 0, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 0, 0 }, 0, { 2016, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 150, 0 }, 0, { 2016, 0 }, { 40, 25, 20, 255}}},
{{{ -150, 150, 0 }, 0, { 0, 0 }, { 40, 25, 20, 255}}},
};

Gfx DL_bowser_impact_smoke_geo_0x6062c88[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_0605AB78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_0605BB78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062bf8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, TEXEL0, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, TEXEL0, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062c28[] = {
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062c40[] = {
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062c58[] = {
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062d28[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_0605CB78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_0605DB78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062dc8[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_0605EB78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_0605FB78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

Gfx DL_bowser_impact_smoke_geo_0x6062e68[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_06060B78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, bowser_impact_smoke_geo__texture_06061B78),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

