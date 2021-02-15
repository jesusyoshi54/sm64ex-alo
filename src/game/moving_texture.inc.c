#include <ultra64.h>
#include "sm64.h"
#include "moving_texture.h"
#include "area.h"
/*
This is an include meant to help with the addition of moving textures for water boxes. Moving textures are hardcoded in vanilla, but in hacks they're procedural. Every hack uses 0x5000 +Type (0 for water, 1 for toxic mist, 2 for mist) to locate the tables for their water boxes. I will replicate this by using a 3 dimensional array of pointers. This wastes a little bit of memory but is way easier to manage.
To use this, simply place this file inside your source directory after exporting.
*/
extern u8 bbh_1_Movtex_0[];
extern u8 bbh_1_Movtex_1[];
extern u8 bbh_1_Movtex_2[];
extern u8 ccm_1_Movtex_0[];
extern u8 ccm_1_Movtex_1[];
extern u8 ccm_1_Movtex_2[];
extern u8 castle_inside_1_Movtex_0[];
extern u8 castle_inside_1_Movtex_1[];
extern u8 castle_inside_1_Movtex_2[];
extern u8 castle_inside_2_Movtex_0[];
extern u8 castle_inside_2_Movtex_1[];
extern u8 castle_inside_2_Movtex_2[];
extern u8 castle_inside_3_Movtex_0[];
extern u8 castle_inside_3_Movtex_1[];
extern u8 castle_inside_3_Movtex_2[];
extern u8 hmc_1_Movtex_0[];
extern u8 hmc_1_Movtex_1[];
extern u8 hmc_1_Movtex_2[];
extern u8 ssl_1_Movtex_0[];
extern u8 ssl_1_Movtex_1[];
extern u8 ssl_1_Movtex_2[];
extern u8 bob_1_Movtex_0[];
extern u8 bob_1_Movtex_1[];
extern u8 bob_1_Movtex_2[];
extern u8 sl_1_Movtex_0[];
extern u8 sl_1_Movtex_1[];
extern u8 sl_1_Movtex_2[];
extern u8 wdw_1_Movtex_0[];
extern u8 wdw_1_Movtex_1[];
extern u8 wdw_1_Movtex_2[];
extern u8 jrb_1_Movtex_0[];
extern u8 jrb_1_Movtex_1[];
extern u8 jrb_1_Movtex_2[];
extern u8 thi_1_Movtex_0[];
extern u8 thi_1_Movtex_1[];
extern u8 thi_1_Movtex_2[];
extern u8 ttc_1_Movtex_0[];
extern u8 ttc_1_Movtex_1[];
extern u8 ttc_1_Movtex_2[];
extern u8 rr_1_Movtex_0[];
extern u8 rr_1_Movtex_1[];
extern u8 rr_1_Movtex_2[];
extern u8 rr_2_Movtex_0[];
extern u8 rr_2_Movtex_1[];
extern u8 rr_2_Movtex_2[];
extern u8 rr_3_Movtex_0[];
extern u8 rr_3_Movtex_1[];
extern u8 rr_3_Movtex_2[];
extern u8 castle_grounds_1_Movtex_0[];
extern u8 castle_grounds_1_Movtex_1[];
extern u8 castle_grounds_1_Movtex_2[];
extern u8 bitdw_1_Movtex_0[];
extern u8 bitdw_1_Movtex_1[];
extern u8 bitdw_1_Movtex_2[];
extern u8 vcutm_1_Movtex_0[];
extern u8 vcutm_1_Movtex_1[];
extern u8 vcutm_1_Movtex_2[];
extern u8 bitfs_1_Movtex_0[];
extern u8 bitfs_1_Movtex_1[];
extern u8 bitfs_1_Movtex_2[];
extern u8 sa_1_Movtex_0[];
extern u8 sa_1_Movtex_1[];
extern u8 sa_1_Movtex_2[];
extern u8 bits_1_Movtex_0[];
extern u8 bits_1_Movtex_1[];
extern u8 bits_1_Movtex_2[];
extern u8 lll_1_Movtex_0[];
extern u8 lll_1_Movtex_1[];
extern u8 lll_1_Movtex_2[];
extern u8 ddd_1_Movtex_0[];
extern u8 ddd_1_Movtex_1[];
extern u8 ddd_1_Movtex_2[];
extern u8 wf_1_Movtex_0[];
extern u8 wf_1_Movtex_1[];
extern u8 wf_1_Movtex_2[];
extern u8 ending_1_Movtex_0[];
extern u8 ending_1_Movtex_1[];
extern u8 ending_1_Movtex_2[];
extern u8 castle_courtyard_1_Movtex_0[];
extern u8 castle_courtyard_1_Movtex_1[];
extern u8 castle_courtyard_1_Movtex_2[];
extern u8 pss_1_Movtex_0[];
extern u8 pss_1_Movtex_1[];
extern u8 pss_1_Movtex_2[];
extern u8 cotmc_1_Movtex_0[];
extern u8 cotmc_1_Movtex_1[];
extern u8 cotmc_1_Movtex_2[];
extern u8 totwc_1_Movtex_0[];
extern u8 totwc_1_Movtex_1[];
extern u8 totwc_1_Movtex_2[];
extern u8 wmotr_1_Movtex_0[];
extern u8 wmotr_1_Movtex_1[];
extern u8 wmotr_1_Movtex_2[];
extern u8 bowser_3_1_Movtex_0[];
extern u8 bowser_3_1_Movtex_1[];
extern u8 bowser_3_1_Movtex_2[];
extern u8 ttm_1_Movtex_0[];
extern u8 ttm_1_Movtex_1[];
extern u8 ttm_1_Movtex_2[];

static void *RM2C_Water_Box_Array[33][8][3] = {
{ {NULL,NULL,NULL,},{&bbh_1_Movtex_0,&bbh_1_Movtex_1,&bbh_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ccm_1_Movtex_0,&ccm_1_Movtex_1,&ccm_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_inside_1_Movtex_0,&castle_inside_1_Movtex_1,&castle_inside_1_Movtex_2,},{&castle_inside_2_Movtex_0,&castle_inside_2_Movtex_1,&castle_inside_2_Movtex_2,},{&castle_inside_3_Movtex_0,&castle_inside_3_Movtex_1,&castle_inside_3_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&hmc_1_Movtex_0,&hmc_1_Movtex_1,&hmc_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ssl_1_Movtex_0,&ssl_1_Movtex_1,&ssl_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bob_1_Movtex_0,&bob_1_Movtex_1,&bob_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&sl_1_Movtex_0,&sl_1_Movtex_1,&sl_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&wdw_1_Movtex_0,&wdw_1_Movtex_1,&wdw_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&jrb_1_Movtex_0,&jrb_1_Movtex_1,&jrb_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&thi_1_Movtex_0,&thi_1_Movtex_1,&thi_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ttc_1_Movtex_0,&ttc_1_Movtex_1,&ttc_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&rr_1_Movtex_0,&rr_1_Movtex_1,&rr_1_Movtex_2,},{&rr_2_Movtex_0,&rr_2_Movtex_1,&rr_2_Movtex_2,},{&rr_3_Movtex_0,&rr_3_Movtex_1,&rr_3_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_grounds_1_Movtex_0,&castle_grounds_1_Movtex_1,&castle_grounds_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bitdw_1_Movtex_0,&bitdw_1_Movtex_1,&bitdw_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&vcutm_1_Movtex_0,&vcutm_1_Movtex_1,&vcutm_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bitfs_1_Movtex_0,&bitfs_1_Movtex_1,&bitfs_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&sa_1_Movtex_0,&sa_1_Movtex_1,&sa_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bits_1_Movtex_0,&bits_1_Movtex_1,&bits_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&lll_1_Movtex_0,&lll_1_Movtex_1,&lll_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ddd_1_Movtex_0,&ddd_1_Movtex_1,&ddd_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&wf_1_Movtex_0,&wf_1_Movtex_1,&wf_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ending_1_Movtex_0,&ending_1_Movtex_1,&ending_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_courtyard_1_Movtex_0,&castle_courtyard_1_Movtex_1,&castle_courtyard_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&pss_1_Movtex_0,&pss_1_Movtex_1,&pss_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&cotmc_1_Movtex_0,&cotmc_1_Movtex_1,&cotmc_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&totwc_1_Movtex_0,&totwc_1_Movtex_1,&totwc_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&wmotr_1_Movtex_0,&wmotr_1_Movtex_1,&wmotr_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bowser_3_1_Movtex_0,&bowser_3_1_Movtex_1,&bowser_3_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ttm_1_Movtex_0,&ttm_1_Movtex_1,&ttm_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, }
};

void *GetRomhackWaterBox(u32 id){
id = id&0xF;
return RM2C_Water_Box_Array[gCurrLevelNum-4][gCurrAreaIndex][id];
};