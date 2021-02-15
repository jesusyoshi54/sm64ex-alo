#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_ttc_1_0xe023d20[];
extern Vtx VB_rr_1_0xe032070[];
extern Vtx VB_rr_1_0xe00f750[];
Vtx *ScrollTargets[]={
 &VB_ttc_1_0xe023d20[6],
 &VB_rr_1_0xe032070[5],
 &VB_rr_1_0xe00f750[3],
};