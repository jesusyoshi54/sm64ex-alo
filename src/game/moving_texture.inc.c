#include <ultra64.h>
#include "sm64.h"
#include "moving_texture.h"
#include "area.h"
/*
This is an include meant to help with the addition of moving textures for water boxes. Moving textures are hardcoded in vanilla, but in hacks they're procedural. Every hack uses 0x5000 +Type (0 for water, 1 for toxic mist, 2 for mist) to locate the tables for their water boxes. I will replicate this by using a 3 dimensional array of pointers. This wastes a little bit of memory but is way easier to manage.
To use this, simply place this file inside your source directory after exporting.
*/
extern u8 ccm_1_Movtex_0[];
extern u8 castle_inside_1_Movtex_0[];
extern u8 sl_1_Movtex_0[];
extern u8 ttc_1_Movtex_0[];
extern u8 castle_grounds_1_Movtex_0[];
extern u8 wmotr_1_Movtex_0[];

static void *RM2C_Water_Box_Array[33][8][3] = {
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ccm_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_inside_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&sl_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ttc_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_grounds_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&wmotr_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, }
};

void *GetRomhackWaterBox(u32 id){
id = id&0xF;
return RM2C_Water_Box_Array[gCurrLevelNum-4][gCurrAreaIndex][id];
};