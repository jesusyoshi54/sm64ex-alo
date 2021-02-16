#include "custom.model.inc.h"
Vtx VB_ttc_geo_000258_0x700ed80[] = {
{{{ 0, -229, 200 }, 0, { -1052, 0 }, { 41, 184, 95, 255}}},
{{{ 0, 1, 200 }, 0, { 478, 762 }, { 0, 0, 127, 255}}},
{{{ -199, 116, 200 }, 0, { 2012, 0 }, { 173, 0, 95, 255}}},
{{{ -199, 116, -199 }, 0, { -1052, 0 }, { 215, 72, 161, 255}}},
{{{ 0, 1, -199 }, 0, { 478, 762 }, { 0, 0, 129, 255}}},
{{{ 0, -229, -199 }, 0, { 2012, 0 }, { 215, 184, 161, 255}}},
{{{ 0, -229, -199 }, 0, { -1052, 0 }, { 215, 184, 161, 255}}},
{{{ 200, 116, -199 }, 0, { 2012, 0 }, { 83, 0, 160, 255}}},
{{{ 200, 116, -199 }, 0, { -1052, 0 }, { 83, 0, 160, 255}}},
{{{ -199, 116, -199 }, 0, { 2012, 0 }, { 215, 72, 161, 255}}},
{{{ 200, 116, 200 }, 0, { -1052, 0 }, { 41, 71, 96, 255}}},
{{{ 0, -229, 200 }, 0, { 2012, 0 }, { 41, 184, 95, 255}}},
{{{ -199, 116, 200 }, 0, { -1052, 0 }, { 173, 0, 95, 255}}},
{{{ 200, 116, 200 }, 0, { 2012, 0 }, { 41, 71, 96, 255}}},
};

Vtx VB_ttc_geo_000258_0x700ee60[] = {
{{{ 200, 116, 200 }, 0, { 990, 0 }, { 41, 71, 96, 255}}},
{{{ -199, 116, -199 }, 0, { 0, 990 }, { 215, 72, 161, 255}}},
{{{ -199, 116, 200 }, 0, { 990, 990 }, { 173, 0, 95, 255}}},
{{{ 200, 116, -199 }, 0, { 0, 0 }, { 83, 0, 160, 255}}},
{{{ -199, 116, 200 }, 0, { 990, 0 }, { 173, 0, 95, 255}}},
{{{ -199, 116, -199 }, 0, { 0, 0 }, { 215, 72, 161, 255}}},
{{{ 0, -229, -199 }, 0, { 0, 990 }, { 215, 184, 161, 255}}},
{{{ 0, -229, 200 }, 0, { 990, 990 }, { 41, 184, 95, 255}}},
{{{ 0, -229, 200 }, 0, { 990, 0 }, { 41, 184, 95, 255}}},
{{{ 0, -229, -199 }, 0, { 0, 0 }, { 215, 184, 161, 255}}},
{{{ 200, 116, -199 }, 0, { 0, 990 }, { 83, 0, 160, 255}}},
{{{ 200, 116, 200 }, 0, { 990, 990 }, { 41, 71, 96, 255}}},
};

Light_t Light_ttc_geo_000258_0x700ed70 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_000258_0x700ed68 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttc_geo_000258_0x700efe0[] = {
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
gsSPDisplayList(DL_ttc_geo_000258_0x700ef20),
gsSPDisplayList(DL_ttc_geo_000258_0x700ef88),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000258_0x700ef20[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000258__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttc_geo_000258_0x700ed70.col, 1),
gsSPLight(&Light_ttc_geo_000258_0x700ed68.col, 2),
gsSPVertex(VB_ttc_geo_000258_0x700ed80, 14, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 4, 7, 0,8, 4, 9, 0),
gsSP2Triangles(10, 1, 11, 0,12, 1, 13, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000258_0x700ef88[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000258__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_000258_0x700ee60, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSPEndDisplayList(),
};

