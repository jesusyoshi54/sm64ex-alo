#include "custom.model.inc.h"
Vtx VB_ttc_geo_0002C8_0x70100c8[] = {
{{{ 102, 102, -450 }, 0, { 224, 990 }, { 56, 113, 0, 255}}},
{{{ -101, 102, 10 }, 0, { 2268, 0 }, { 205, 103, 51, 255}}},
{{{ 102, 102, 10 }, 0, { 224, 0 }, { 84, 42, 84, 255}}},
{{{ 102, 102, 10 }, 0, { 2268, 0 }, { 84, 42, 84, 255}}},
{{{ 102, -101, -450 }, 0, { 224, 990 }, { 113, 200, 0, 255}}},
{{{ 102, 102, -450 }, 0, { 2268, 990 }, { 56, 113, 0, 255}}},
{{{ 102, -101, 10 }, 0, { 224, 0 }, { 51, 153, 51, 255}}},
{{{ -101, 102, -450 }, 0, { -1308, 990 }, { 143, 56, 0, 255}}},
{{{ -101, -101, -450 }, 0, { 734, 990 }, { 200, 143, 0, 255}}},
{{{ -101, -101, 10 }, 0, { 734, 0 }, { 172, 214, 84, 255}}},
{{{ -101, 102, 10 }, 0, { -1308, 0 }, { 205, 103, 51, 255}}},
{{{ 102, -101, 10 }, 0, { 2268, 0 }, { 51, 153, 51, 255}}},
{{{ -101, -101, 10 }, 0, { 224, 0 }, { 172, 214, 84, 255}}},
{{{ -101, -101, -450 }, 0, { 224, 990 }, { 200, 143, 0, 255}}},
{{{ 102, -101, -450 }, 0, { 2268, 990 }, { 113, 200, 0, 255}}},
{{{ -101, 102, -450 }, 0, { 2268, 990 }, { 143, 56, 0, 255}}},
};

Vtx VB_ttc_geo_0002C8_0x70101c8[] = {
{{{ 102, 102, 10 }, 0, { 990, 16 }, { 84, 42, 84, 255}}},
{{{ -101, -101, 10 }, 0, { 0, 990 }, { 172, 214, 84, 255}}},
{{{ 102, -101, 10 }, 0, { 990, 990 }, { 51, 153, 51, 255}}},
{{{ -101, 102, 10 }, 0, { 0, 16 }, { 205, 103, 51, 255}}},
};

Light_t Light_ttc_geo_0002C8_0x70100b8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_0002C8_0x70100b0 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttc_geo_0002C8_0x70102b8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(200, 255, 255, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_0002C8_0x7010208),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_0002C8_0x7010280),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002C8_0x7010208[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_0002C8__texture_09003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttc_geo_0002C8_0x70100b8.col, 1),
gsSPLight(&Light_ttc_geo_0002C8_0x70100b0.col, 2),
gsSPVertex(VB_ttc_geo_0002C8_0x70100c8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002C8_0x7010280[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_0002C8__texture_09003000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_0002C8_0x70101c8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

