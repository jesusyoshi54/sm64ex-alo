#include "custom.model.inc.h"
Vtx VB_clam_shell_geo_0x5001338[] = {
{{{ 260, 0, 0 }, 0, { 480, 600 }, { 245, 126, 7, 255}}},
{{{ -531, -1, 132 }, 0, { 580, -8 }, { 0, 129, 0, 255}}},
{{{ -124, -74, 529 }, 0, { 886, 304 }, { 255, 255, 255, 255}}},
{{{ 692, -45, 0 }, 0, { 480, 932 }, { 129, 0, 0, 255}}},
{{{ 556, -160, -434 }, 0, { 144, 828 }, { 0, 129, 0, 255}}},
{{{ 248, -68, -657 }, 0, { -26, 590 }, { 0, 0, 129, 255}}},
{{{ -124, -74, -528 }, 0, { 72, 304 }, { 255, 255, 255, 255}}},
{{{ 248, -68, 658 }, 0, { 984, 590 }, { 15, 125, 15, 255}}},
{{{ 556, -160, 435 }, 0, { 814, 828 }, { 0, 0, 127, 255}}},
{{{ -531, -1, -131 }, 0, { 378, -8 }, { 0, 129, 0, 255}}},
};

Vtx VB_clam_shell_geo_0x50013d8[] = {
{{{ 556, -160, 435 }, 0, { 790, 796 }, { 0, 0, 127, 255}}},
{{{ 248, -68, 658 }, 0, { 948, 568 }, { 15, 125, 15, 255}}},
{{{ 260, 0, 0 }, 0, { 480, 576 }, { 245, 126, 7, 255}}},
{{{ 692, -45, 0 }, 0, { 480, 896 }, { 129, 0, 0, 255}}},
{{{ 556, -160, -434 }, 0, { 168, 796 }, { 0, 129, 0, 255}}},
{{{ -124, -74, 529 }, 0, { 856, 292 }, { 255, 255, 255, 255}}},
{{{ -124, -74, -528 }, 0, { 102, 292 }, { 255, 255, 255, 255}}},
{{{ 248, -68, -657 }, 0, { 10, 568 }, { 0, 0, 129, 255}}},
{{{ -531, -1, 132 }, 0, { 574, -8 }, { 0, 129, 0, 255}}},
{{{ -531, -1, -131 }, 0, { 384, -8 }, { 0, 129, 0, 255}}},
};

Vtx VB_clam_shell_geo_0x5001048[] = {
{{{ 728, -261, 0 }, 0, { 480, 566 }, { 0, 126, 245, 255}}},
{{{ -10, 2, -131 }, 0, { 580, 0 }, { 255, 255, 255, 255}}},
{{{ 404, -50, -528 }, 0, { 886, 318 }, { 245, 126, 0, 255}}},
{{{ 404, -50, 529 }, 0, { 72, 318 }, { 0, 127, 0, 255}}},
{{{ 1083, -106, 435 }, 0, { 144, 838 }, { 168, 168, 22, 255}}},
{{{ 777, -25, 658 }, 0, { -26, 604 }, { 255, 255, 255, 255}}},
{{{ 1087, -154, 0 }, 0, { 480, 842 }, { 56, 113, 0, 255}}},
{{{ 1214, 19, 0 }, 0, { 480, 940 }, { 167, 167, 0, 255}}},
{{{ -10, 2, 132 }, 0, { 378, 0 }, { 0, 129, 0, 255}}},
{{{ 1083, -106, -434 }, 0, { 814, 838 }, { 49, 99, 61, 255}}},
{{{ 777, -25, -657 }, 0, { 984, 604 }, { 255, 255, 255, 255}}},
};

Vtx VB_clam_shell_geo_0x50010f8[] = {
{{{ 1087, -154, 0 }, 0, { 480, 816 }, { 56, 113, 0, 255}}},
{{{ 1214, 19, 0 }, 0, { 480, 906 }, { 167, 167, 0, 255}}},
{{{ 1083, -106, -434 }, 0, { 168, 814 }, { 49, 99, 61, 255}}},
{{{ 728, -261, 0 }, 0, { 480, 560 }, { 0, 126, 245, 255}}},
{{{ -10, 2, 132 }, 0, { 574, 34 }, { 0, 129, 0, 255}}},
{{{ 404, -50, 529 }, 0, { 856, 328 }, { 0, 127, 0, 255}}},
{{{ 1083, -106, 435 }, 0, { 790, 814 }, { 168, 168, 22, 255}}},
{{{ 777, -25, 658 }, 0, { 948, 594 }, { 255, 255, 255, 255}}},
{{{ 777, -25, -657 }, 0, { 10, 594 }, { 255, 255, 255, 255}}},
{{{ 404, -50, -528 }, 0, { 102, 328 }, { 245, 126, 0, 255}}},
{{{ -10, 2, -131 }, 0, { 384, 34 }, { 255, 255, 255, 255}}},
};

Light_t Light_clam_shell_geo_0x5001328 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_clam_shell_geo_0x5001320 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_clam_shell_geo_0x5001568[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_clam_shell_geo_0x5001478),
gsSPDisplayList(DL_clam_shell_geo_0x50014f8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_clam_shell_geo_0x5001478[] = {
gsDPSetTextureImage(0, 2, 1, clam_shell_geo__texture_05000030),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_clam_shell_geo_0x5001328.col, 1),
gsSPLight(&Light_clam_shell_geo_0x5001320.col, 2),
gsSPVertex(VB_clam_shell_geo_0x5001338, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 0, 0),
gsSP2Triangles(4, 5, 0, 0,0, 5, 6, 0),
gsSP2Triangles(0, 7, 8, 0,2, 7, 0, 0),
gsSP2Triangles(8, 3, 0, 0,0, 9, 1, 0),
gsSP1Triangle(6, 9, 0, 0),
gsSPEndDisplayList(),
};

Gfx DL_clam_shell_geo_0x50014f8[] = {
gsDPSetTextureImage(0, 2, 1, clam_shell_geo__texture_05000830),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_clam_shell_geo_0x50013d8, 10, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 0, 0),
gsSP2Triangles(2, 4, 3, 0,2, 1, 5, 0),
gsSP2Triangles(6, 7, 2, 0,2, 7, 4, 0),
gsSP2Triangles(8, 9, 2, 0,2, 9, 6, 0),
gsSP1Triangle(5, 8, 2, 0),
gsSPEndDisplayList(),
};

Light_t Light_clam_shell_geo_0x5001038 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_clam_shell_geo_0x5001030 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_clam_shell_geo_0x50012b8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_clam_shell_geo_0x50011a8),
gsSPDisplayList(DL_clam_shell_geo_0x5001238),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_clam_shell_geo_0x50011a8[] = {
gsDPSetTextureImage(0, 2, 1, clam_shell_geo__texture_05000030),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_clam_shell_geo_0x5001038.col, 1),
gsSPLight(&Light_clam_shell_geo_0x5001030.col, 2),
gsSPVertex(VB_clam_shell_geo_0x5001048, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 4, 0),
gsSP2Triangles(4, 5, 3, 0,4, 0, 6, 0),
gsSP2Triangles(6, 7, 4, 0,3, 8, 0, 0),
gsSP2Triangles(6, 0, 9, 0,2, 10, 9, 0),
gsSP2Triangles(9, 7, 6, 0,9, 0, 2, 0),
gsSP1Triangle(8, 1, 0, 0),
gsSPEndDisplayList(),
};

Gfx DL_clam_shell_geo_0x5001238[] = {
gsDPSetTextureImage(0, 2, 1, clam_shell_geo__texture_05000830),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_clam_shell_geo_0x50010f8, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 3, 5, 0,5, 7, 6, 0),
gsSP2Triangles(0, 3, 6, 0,6, 1, 0, 0),
gsSP2Triangles(2, 8, 9, 0,9, 10, 3, 0),
gsSP2Triangles(9, 3, 2, 0,3, 10, 4, 0),
gsSP1Triangle(2, 3, 0, 0),
gsSPEndDisplayList(),
};

