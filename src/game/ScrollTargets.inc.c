#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bbh_1_0xe007bd0[];
extern Vtx VB_bbh_1_0xe009340[];
Vtx *ScrollTargets[]={
 &VB_bbh_1_0xe007bd0[0],
 &VB_bbh_1_0xe009340[6],
};