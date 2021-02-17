#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe05b300[];
extern Vtx VB_castle_inside_1_0xe059b90[];
extern Vtx VB_bbh_1_0xe048730[];
extern Vtx VB_ccm_1_0xe027310[];
extern Vtx VB_ccm_1_0xe025ba0[];
extern Vtx VB_hmc_1_0xe023b60[];
extern Vtx VB_hmc_1_0xe03b710[];
extern Vtx VB_hmc_1_0xe0223f0[];
extern Vtx VB_ssl_1_0xe038070[];
extern Vtx VB_ssl_1_0xe038070[];
extern Vtx VB_sl_1_0xe02bdb0[];
extern Vtx VB_sl_1_0xe02a550[];
extern Vtx VB_wdw_1_0xe050ad0[];
extern Vtx VB_castle_grounds_1_0xe0605e0[];
extern Vtx VB_bitfs_1_0xe05cf10[];
extern Vtx VB_bitfs_1_0xe05cd30[];
extern Vtx VB_bitfs_1_0xe05ca60[];
extern Vtx VB_bitfs_1_0xe05d1e0[];
extern Vtx VB_sa_1_0xe01bf90[];
extern Vtx VB_sa_1_0xe01a820[];
extern Vtx VB_ddd_1_0xe012720[];
extern Vtx VB_ddd_1_0xe052140[];
extern Vtx VB_ddd_1_0xe010ec0[];
extern Vtx VB_ddd_1_0xe00f750[];
extern Vtx VB_ddd_1_0xe00def0[];
extern Vtx VB_ddd_1_0xe052140[];
extern Vtx VB_ddd_1_0xe00c780[];
extern Vtx VB_ddd_1_0xe00b010[];
extern Vtx VB_wf_1_0xe031a40[];
extern Vtx VB_wf_1_0xe0302d0[];
extern Vtx VB_wf_1_0xe036450[];
extern Vtx VB_wf_1_0xe02eb60[];
extern Vtx VB_castle_courtyard_1_0xe05b7b0[];
extern Vtx VB_castle_courtyard_1_0xe05a040[];
extern Vtx VB_pss_1_0xe03bc40[];
extern Vtx VB_pss_1_0xe03bc40[];
extern Vtx VB_pss_1_0xe0220b0[];
extern Vtx VB_pss_1_0xe0220b0[];
extern Vtx VB_ttm_1_0xe028aa0[];
extern Vtx VB_ttm_1_0xe027240[];
extern Vtx VB_ttm_1_0xe025ad0[];
extern Vtx VB_ttm_1_0xe042810[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe05b300[12],
 &VB_castle_inside_1_0xe059b90[6],
 &VB_bbh_1_0xe048730[9],
 &VB_ccm_1_0xe027310[6],
 &VB_ccm_1_0xe025ba0[0],
 &VB_hmc_1_0xe023b60[9],
 &VB_hmc_1_0xe03b710[6],
 &VB_hmc_1_0xe0223f0[3],
 &VB_ssl_1_0xe038070[3],
 &VB_ssl_1_0xe038070[3],
 &VB_sl_1_0xe02bdb0[3],
 &VB_sl_1_0xe02a550[12],
 &VB_wdw_1_0xe050ad0[12],
 &VB_castle_grounds_1_0xe0605e0[12],
 &VB_bitfs_1_0xe05cf10[9],
 &VB_bitfs_1_0xe05cd30[3],
 &VB_bitfs_1_0xe05ca60[12],
 &VB_bitfs_1_0xe05d1e0[0],
 &VB_sa_1_0xe01bf90[9],
 &VB_sa_1_0xe01a820[3],
 &VB_ddd_1_0xe012720[0],
 &VB_ddd_1_0xe052140[12],
 &VB_ddd_1_0xe010ec0[9],
 &VB_ddd_1_0xe00f750[3],
 &VB_ddd_1_0xe00def0[12],
 &VB_ddd_1_0xe052140[12],
 &VB_ddd_1_0xe00c780[6],
 &VB_ddd_1_0xe00b010[0],
 &VB_wf_1_0xe031a40[12],
 &VB_wf_1_0xe0302d0[6],
 &VB_wf_1_0xe036450[12],
 &VB_wf_1_0xe02eb60[0],
 &VB_castle_courtyard_1_0xe05b7b0[9],
 &VB_castle_courtyard_1_0xe05a040[3],
 &VB_pss_1_0xe03bc40[0],
 &VB_pss_1_0xe03bc40[0],
 &VB_pss_1_0xe0220b0[12],
 &VB_pss_1_0xe0220b0[12],
 &VB_ttm_1_0xe028aa0[3],
 &VB_ttm_1_0xe027240[12],
 &VB_ttm_1_0xe025ad0[6],
 &VB_ttm_1_0xe042810[6],
};