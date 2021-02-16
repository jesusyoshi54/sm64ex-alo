#include "custom.model.inc.h"
Vtx VB_ttc_geo_000310_0x7010e00[] = {
{{{ 102, 0, 102 }, 0, { 1982, 960 }, { 73, 183, 73, 255}}},
{{{ -101, 0, 102 }, 0, { 0, 960 }, { 183, 183, 73, 255}}},
{{{ 102, 0, -101 }, 0, { 1982, -1054 }, { 73, 183, 183, 255}}},
{{{ -101, 0, -101 }, 0, { 0, -1054 }, { 183, 183, 183, 255}}},
{{{ 102, 205, -101 }, 0, { 1982, -1054 }, { 51, 103, 205, 255}}},
{{{ -101, 205, 102 }, 0, { 0, 960 }, { 205, 103, 51, 255}}},
{{{ 102, 205, 102 }, 0, { 1982, 960 }, { 84, 42, 84, 255}}},
{{{ -101, 205, -101 }, 0, { 0, -1054 }, { 172, 42, 172, 255}}},
};

Vtx VB_ttc_geo_000310_0x7010e80[] = {
{{{ 102, 205, 102 }, 0, { 2012, 0 }, { 84, 42, 84, 255}}},
{{{ -101, 205, 102 }, 0, { 0, 0 }, { 205, 103, 51, 255}}},
{{{ -101, 0, 102 }, 0, { 0, 990 }, { 183, 183, 73, 255}}},
{{{ 102, 205, 102 }, 0, { 0, 0 }, { 84, 42, 84, 255}}},
{{{ 102, 0, 102 }, 0, { 0, 990 }, { 73, 183, 73, 255}}},
{{{ 102, 0, -101 }, 0, { 2012, 990 }, { 73, 183, 183, 255}}},
{{{ 102, 205, -101 }, 0, { 2012, 0 }, { 51, 103, 205, 255}}},
{{{ -101, 205, -101 }, 0, { 2012, 0 }, { 172, 42, 172, 255}}},
{{{ 102, 0, -101 }, 0, { 0, 990 }, { 73, 183, 183, 255}}},
{{{ -101, 0, -101 }, 0, { 2012, 990 }, { 183, 183, 183, 255}}},
{{{ 102, 205, -101 }, 0, { 0, 0 }, { 51, 103, 205, 255}}},
{{{ -101, 205, -101 }, 0, { 0, 0 }, { 172, 42, 172, 255}}},
{{{ -101, 0, -101 }, 0, { 0, 990 }, { 183, 183, 183, 255}}},
{{{ -101, 0, 102 }, 0, { 2012, 990 }, { 183, 183, 73, 255}}},
{{{ -101, 205, 102 }, 0, { 2012, 0 }, { 205, 103, 51, 255}}},
{{{ 102, 0, 102 }, 0, { 2012, 990 }, { 73, 183, 73, 255}}},
};

Light_t Light_ttc_geo_000310_0x7010df0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_000310_0x7010de8 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttc_geo_000310_0x7011040[] = {
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
gsSPDisplayList(DL_ttc_geo_000310_0x7010f80),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_000310_0x7010fd8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000310_0x7010f80[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000310__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttc_geo_000310_0x7010df0.col, 1),
gsSPLight(&Light_ttc_geo_000310_0x7010de8.col, 2),
gsSPVertex(VB_ttc_geo_000310_0x7010e00, 8, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000310_0x7010fd8[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000310__texture_09003000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_000310_0x7010e80, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

