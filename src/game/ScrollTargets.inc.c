#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bob_1_0xe02a9c0[];
extern Vtx VB_ttc_1_0xe033950[];
extern Vtx VB_wf_1_0xe019640[];
extern Vtx VB_wf_1_0xe0313d0[];
extern Vtx VB_ending_1_0xe02a890[];
extern Vtx VB_pss_1_0xe02a3a0[];
extern Vtx VB_wmotr_1_0xe056840[];
Vtx *ScrollTargets[]={
 &VB_bob_1_0xe02a9c0[9],
 &VB_ttc_1_0xe033950[9],
 &VB_wf_1_0xe019640[3],
 &VB_wf_1_0xe0313d0[12],
 &VB_ending_1_0xe02a890[9],
 &VB_pss_1_0xe02a3a0[12],
 &VB_wmotr_1_0xe056840[3],
};