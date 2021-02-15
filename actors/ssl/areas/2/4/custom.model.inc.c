#include "custom.model.inc.h"
Vtx VB_ssl_geo_0005D8_0x7004a70[] = {
{{{ 0, -204, 0 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 1024, 0, 0 }, 0, { 2016, 0 }, { 0, 127, 0, 255}}},
{{{ 512, 0, -886 }, 0, { 2016, 992 }, { 0, 127, 0, 255}}},
{{{ -511, 0, -886 }, 0, { 2016, 2016 }, { 0, 127, 0, 255}}},
{{{ -1023, 0, 0 }, 0, { 2016, 3040 }, { 0, 127, 0, 255}}},
{{{ -511, 0, 887 }, 0, { 2016, 2016 }, { 0, 127, 0, 255}}},
{{{ 512, 0, 887 }, 0, { 2016, 992 }, { 0, 127, 0, 255}}},
};

const Light_t Light_ssl_geo_0005D8_0x7004008 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_ssl_geo_0005D8_0x7004000 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_ssl_geo_0005D8_0x7004ae0[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(0, 0, 0, 255),
gsMoveWd(G_MW_FOG, 0, 239727287),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPLight(&Light_ssl_geo_0005D8_0x7004008.col, 1),
gsSPLight(&Light_ssl_geo_0005D8_0x7004000.col, 2),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, ssl_geo_0005D8__texture_07001000),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_ssl_geo_0005D8_0x7004a70, 7, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(0, 3, 4, 0,0, 4, 5, 0),
gsSP2Triangles(0, 5, 6, 0,0, 6, 1, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

