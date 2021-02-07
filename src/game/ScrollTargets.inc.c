#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_thi_1_0xe009790[];
extern Vtx VB_bitdw_1_0xe05fdf0[];
extern Vtx VB_bitdw_1_0xe05b6b0[];
extern Vtx VB_bitfs_1_0xe0131b0[];
Vtx *ScrollTargets[]={
 &VB_thi_1_0xe009790[0],
 &VB_bitdw_1_0xe05fdf0[6],
 &VB_bitdw_1_0xe05b6b0[12],
 &VB_bitfs_1_0xe0131b0[12],
};