#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe0a7ff0[];
extern Vtx VB_wdw_1_0xe0c32f0[];
extern Vtx VB_castle_grounds_1_0xe056280[];
extern Vtx VB_bitdw_1_0xe024930[];
extern Vtx VB_bitdw_1_0xe024930[];
extern Vtx VB_castle_courtyard_1_0xe055c50[];
extern Vtx VB_castle_courtyard_1_0xe045f30[];
extern Vtx VB_pss_1_0xe0502c0[];
extern Vtx VB_pss_1_0xe053b00[];
extern Vtx VB_pss_1_0xe055180[];
extern Vtx VB_totwc_1_0xe072090[];
extern Vtx VB_ttm_1_0xe033850[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe0a7ff0[6],
 &VB_wdw_1_0xe0c32f0[0],
 &VB_castle_grounds_1_0xe056280[9],
 &VB_bitdw_1_0xe024930[12],
 &VB_bitdw_1_0xe024930[6],
 &VB_castle_courtyard_1_0xe055c50[9],
 &VB_castle_courtyard_1_0xe045f30[12],
 &VB_pss_1_0xe0502c0[9],
 &VB_pss_1_0xe053b00[9],
 &VB_pss_1_0xe055180[9],
 &VB_totwc_1_0xe072090[0],
 &VB_ttm_1_0xe033850[9],
};