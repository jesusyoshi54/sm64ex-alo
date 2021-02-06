#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bbh_1_0xe0d9eb0[];
extern Vtx VB_bbh_1_0xe03f3b0[];
extern Vtx VB_hmc_1_0xe02da60[];
extern Vtx VB_hmc_1_0xe02c200[];
extern Vtx VB_hmc_1_0xe02aa90[];
extern Vtx VB_ssl_1_0xe037d80[];
extern Vtx VB_ssl_1_0xe036610[];
extern Vtx VB_ssl_1_0xe03d5a0[];
extern Vtx VB_bob_1_0xe0266e0[];
extern Vtx VB_ttc_1_0xe017140[];
extern Vtx VB_castle_grounds_1_0xe04b650[];
extern Vtx VB_castle_grounds_1_0xe058ee0[];
extern Vtx VB_castle_grounds_1_0xe036110[];
extern Vtx VB_castle_grounds_1_0xe04dcc0[];
extern Vtx VB_vcutm_1_0xe02cae0[];
extern Vtx VB_vcutm_1_0xe02e340[];
extern Vtx VB_vcutm_1_0xe02fab0[];
extern Vtx VB_bitfs_1_0xe006810[];
extern Vtx VB_bitfs_1_0xe018150[];
extern Vtx VB_bitfs_1_0xe018150[];
extern Vtx VB_sa_1_0xe05fb30[];
extern Vtx VB_sa_1_0xe062380[];
extern Vtx VB_sa_1_0xe062380[];
extern Vtx VB_bits_1_0xe055ff0[];
extern Vtx VB_bits_1_0xe0562c0[];
extern Vtx VB_bits_1_0xe0564a0[];
extern Vtx VB_bits_1_0xe056770[];
extern Vtx VB_lll_1_0xe056030[];
extern Vtx VB_ddd_1_0xe064620[];
extern Vtx VB_ddd_1_0xe062eb0[];
extern Vtx VB_ddd_1_0xe061650[];
extern Vtx VB_ddd_1_0xe012780[];
extern Vtx VB_ddd_1_0xe05fee0[];
extern Vtx VB_ddd_1_0xe05e770[];
extern Vtx VB_ddd_1_0xe011010[];
extern Vtx VB_ddd_1_0xe09d290[];
extern Vtx VB_wf_1_0xe0521d0[];
extern Vtx VB_wf_1_0xe02c610[];
extern Vtx VB_castle_courtyard_1_0xe052cb0[];
extern Vtx VB_pss_1_0xe026120[];
extern Vtx VB_pss_1_0xe026120[];
extern Vtx VB_totwc_1_0xe00e010[];
extern Vtx VB_totwc_1_0xe00e010[];
extern Vtx VB_totwc_1_0xe0386d0[];
extern Vtx VB_totwc_1_0xe0386d0[];
extern Vtx VB_totwc_1_0xe036f60[];
extern Vtx VB_totwc_1_0xe036f60[];
extern Vtx VB_bowser_2_1_0xe006810[];
extern Vtx VB_bowser_2_1_0xe014fa0[];
extern Vtx VB_bowser_2_1_0xe014fa0[];
Vtx *ScrollTargets[]={
 &VB_bbh_1_0xe0d9eb0[9],
 &VB_bbh_1_0xe0d9eb0[9],
 &VB_bbh_1_0xe03f3b0[9],
 &VB_hmc_1_0xe02da60[0],
 &VB_hmc_1_0xe02c200[9],
 &VB_hmc_1_0xe02aa90[3],
 &VB_ssl_1_0xe037d80[9],
 &VB_ssl_1_0xe036610[3],
 &VB_ssl_1_0xe03d5a0[9],
 &VB_bob_1_0xe0266e0[9],
 &VB_ttc_1_0xe017140[9],
 &VB_castle_grounds_1_0xe04b650[9],
 &VB_castle_grounds_1_0xe058ee0[3],
 &VB_castle_grounds_1_0xe036110[12],
 &VB_castle_grounds_1_0xe04dcc0[12],
 &VB_vcutm_1_0xe02cae0[9],
 &VB_vcutm_1_0xe02e340[0],
 &VB_vcutm_1_0xe02fab0[6],
 &VB_bitfs_1_0xe006810[12],
 &VB_bitfs_1_0xe018150[0],
 &VB_bitfs_1_0xe018150[0],
 &VB_sa_1_0xe05fb30[0],
 &VB_sa_1_0xe062380[3],
 &VB_sa_1_0xe062380[3],
 &VB_bits_1_0xe055ff0[12],
 &VB_bits_1_0xe0562c0[3],
 &VB_bits_1_0xe0564a0[9],
 &VB_bits_1_0xe056770[0],
 &VB_lll_1_0xe056030[0],
 &VB_ddd_1_0xe064620[9],
 &VB_ddd_1_0xe062eb0[3],
 &VB_ddd_1_0xe061650[12],
 &VB_ddd_1_0xe012780[6],
 &VB_ddd_1_0xe05fee0[6],
 &VB_ddd_1_0xe05e770[0],
 &VB_ddd_1_0xe011010[0],
 &VB_ddd_1_0xe09d290[12],
 &VB_wf_1_0xe0521d0[3],
 &VB_wf_1_0xe02c610[9],
 &VB_castle_courtyard_1_0xe052cb0[6],
 &VB_pss_1_0xe026120[0],
 &VB_pss_1_0xe026120[0],
 &VB_totwc_1_0xe00e010[0],
 &VB_totwc_1_0xe00e010[0],
 &VB_totwc_1_0xe0386d0[6],
 &VB_totwc_1_0xe0386d0[6],
 &VB_totwc_1_0xe036f60[3],
 &VB_totwc_1_0xe036f60[3],
 &VB_bowser_2_1_0xe006810[0],
 &VB_bowser_2_1_0xe014fa0[9],
 &VB_bowser_2_1_0xe014fa0[9],
};