#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe048df0[];
extern Vtx VB_castle_inside_1_0xe0474a0[];
extern Vtx VB_bbh_1_0xe0223b0[];
extern Vtx VB_bbh_1_0xe047340[];
extern Vtx VB_ccm_1_0xe037070[];
extern Vtx VB_ccm_1_0xe037520[];
extern Vtx VB_ccm_1_0xe038060[];
extern Vtx VB_ccm_1_0xe034370[];
extern Vtx VB_ccm_1_0xe02bd60[];
extern Vtx VB_ccm_1_0xe024ec0[];
extern Vtx VB_hmc_1_0xe049b40[];
extern Vtx VB_hmc_1_0xe04d470[];
extern Vtx VB_hmc_1_0xe04d470[];
extern Vtx VB_hmc_1_0xe05e450[];
extern Vtx VB_hmc_1_0xe04c660[];
extern Vtx VB_ssl_1_0xe024da0[];
extern Vtx VB_bob_1_0xe05cc20[];
extern Vtx VB_bob_1_0xe014bf0[];
extern Vtx VB_sl_1_0xe011f70[];
extern Vtx VB_sl_1_0xe010cb0[];
extern Vtx VB_sl_1_0xe00f9f0[];
extern Vtx VB_sl_1_0xe00edc0[];
extern Vtx VB_sl_1_0xe00e190[];
extern Vtx VB_sl_1_0xe017f10[];
extern Vtx VB_castle_grounds_1_0xe02d070[];
extern Vtx VB_castle_grounds_1_0xe01ba00[];
extern Vtx VB_bitdw_1_0xe0dc170[];
extern Vtx VB_bitdw_1_0xe0db180[];
extern Vtx VB_bitdw_1_0xe0d9920[];
extern Vtx VB_bitdw_1_0xe0b47b0[];
extern Vtx VB_bitdw_1_0xe06f750[];
extern Vtx VB_bitdw_1_0xe070ec0[];
extern Vtx VB_vcutm_1_0xe06f910[];
extern Vtx VB_vcutm_1_0xe06e650[];
extern Vtx VB_vcutm_1_0xe06d390[];
extern Vtx VB_vcutm_1_0xe06c0d0[];
extern Vtx VB_vcutm_1_0xe06ae10[];
extern Vtx VB_vcutm_1_0xe069b50[];
extern Vtx VB_vcutm_1_0xe070720[];
extern Vtx VB_bitfs_1_0xe0531d0[];
extern Vtx VB_bitfs_1_0xe0aed00[];
extern Vtx VB_bitfs_1_0xe0ad590[];
extern Vtx VB_bitfs_1_0xe01f9c0[];
extern Vtx VB_sa_1_0xe027260[];
extern Vtx VB_sa_1_0xe027170[];
extern Vtx VB_sa_1_0xe027080[];
extern Vtx VB_sa_1_0xe026ae0[];
extern Vtx VB_sa_1_0xe026630[];
extern Vtx VB_sa_1_0xe026180[];
extern Vtx VB_sa_1_0xe025dc0[];
extern Vtx VB_sa_1_0xe02ee20[];
extern Vtx VB_sa_1_0xe02db60[];
extern Vtx VB_bits_1_0xe027ea0[];
extern Vtx VB_bits_1_0xe039600[];
extern Vtx VB_bits_1_0xe038340[];
extern Vtx VB_bits_1_0xe037080[];
extern Vtx VB_bits_1_0xe035dc0[];
extern Vtx VB_bits_1_0xe034b00[];
extern Vtx VB_lll_1_0xe0aab10[];
extern Vtx VB_lll_1_0xe049310[];
extern Vtx VB_lll_1_0xe025640[];
extern Vtx VB_lll_1_0xe026900[];
extern Vtx VB_ddd_1_0xe016990[];
extern Vtx VB_ddd_1_0xe04b0a0[];
extern Vtx VB_ddd_1_0xe049de0[];
extern Vtx VB_wf_1_0xe05da00[];
extern Vtx VB_wf_1_0xe052e70[];
extern Vtx VB_pss_1_0xe012830[];
extern Vtx VB_pss_1_0xe011570[];
extern Vtx VB_cotmc_1_0xe061610[];
extern Vtx VB_cotmc_1_0xe051e90[];
extern Vtx VB_bowser_1_1_0xe0373a0[];
extern Vtx VB_bowser_1_1_0xe035d20[];
extern Vtx VB_bowser_1_1_0xe0346a0[];
extern Vtx VB_bowser_1_1_0xe033020[];
extern Vtx VB_bowser_1_1_0xe0319a0[];
extern Vtx VB_bowser_1_1_0xe030320[];
extern Vtx VB_bowser_1_1_0xe02eca0[];
extern Vtx VB_bowser_1_1_0xe02d620[];
extern Vtx VB_bowser_1_1_0xe02bfa0[];
extern Vtx VB_bowser_1_1_0xe02a920[];
extern Vtx VB_bowser_1_1_0xe020f60[];
extern Vtx VB_wmotr_1_0xe018370[];
extern Vtx VB_wmotr_1_0xe016c00[];
extern Vtx VB_wmotr_1_0xe06fdf0[];
extern Vtx VB_wmotr_1_0xe06fd00[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe048df0[0],
 &VB_castle_inside_1_0xe0474a0[9],
 &VB_bbh_1_0xe0223b0[9],
 &VB_bbh_1_0xe047340[6],
 &VB_ccm_1_0xe037070[3],
 &VB_ccm_1_0xe037520[12],
 &VB_ccm_1_0xe038060[6],
 &VB_ccm_1_0xe034370[6],
 &VB_ccm_1_0xe02bd60[9],
 &VB_ccm_1_0xe024ec0[3],
 &VB_hmc_1_0xe049b40[9],
 &VB_hmc_1_0xe04d470[6],
 &VB_hmc_1_0xe04d470[12],
 &VB_hmc_1_0xe05e450[6],
 &VB_hmc_1_0xe04c660[0],
 &VB_ssl_1_0xe024da0[9],
 &VB_bob_1_0xe05cc20[3],
 &VB_bob_1_0xe014bf0[3],
 &VB_sl_1_0xe011f70[6],
 &VB_sl_1_0xe010cb0[6],
 &VB_sl_1_0xe00f9f0[6],
 &VB_sl_1_0xe00edc0[9],
 &VB_sl_1_0xe00e190[0],
 &VB_sl_1_0xe017f10[6],
 &VB_castle_grounds_1_0xe02d070[6],
 &VB_castle_grounds_1_0xe01ba00[0],
 &VB_bitdw_1_0xe0dc170[0],
 &VB_bitdw_1_0xe0db180[0],
 &VB_bitdw_1_0xe0d9920[9],
 &VB_bitdw_1_0xe0b47b0[6],
 &VB_bitdw_1_0xe06f750[12],
 &VB_bitdw_1_0xe070ec0[6],
 &VB_vcutm_1_0xe06f910[6],
 &VB_vcutm_1_0xe06e650[6],
 &VB_vcutm_1_0xe06d390[6],
 &VB_vcutm_1_0xe06c0d0[6],
 &VB_vcutm_1_0xe06ae10[6],
 &VB_vcutm_1_0xe069b50[6],
 &VB_vcutm_1_0xe070720[9],
 &VB_bitfs_1_0xe0531d0[12],
 &VB_bitfs_1_0xe0aed00[3],
 &VB_bitfs_1_0xe0ad590[12],
 &VB_bitfs_1_0xe01f9c0[9],
 &VB_sa_1_0xe027260[6],
 &VB_sa_1_0xe027170[3],
 &VB_sa_1_0xe027080[6],
 &VB_sa_1_0xe026ae0[12],
 &VB_sa_1_0xe026630[3],
 &VB_sa_1_0xe026180[12],
 &VB_sa_1_0xe025dc0[12],
 &VB_sa_1_0xe02ee20[6],
 &VB_sa_1_0xe02db60[6],
 &VB_bits_1_0xe027ea0[0],
 &VB_bits_1_0xe039600[6],
 &VB_bits_1_0xe038340[6],
 &VB_bits_1_0xe037080[6],
 &VB_bits_1_0xe035dc0[6],
 &VB_bits_1_0xe034b00[6],
 &VB_lll_1_0xe0aab10[9],
 &VB_lll_1_0xe049310[6],
 &VB_lll_1_0xe025640[9],
 &VB_lll_1_0xe026900[9],
 &VB_ddd_1_0xe016990[6],
 &VB_ddd_1_0xe04b0a0[9],
 &VB_ddd_1_0xe049de0[9],
 &VB_wf_1_0xe05da00[9],
 &VB_wf_1_0xe052e70[0],
 &VB_pss_1_0xe012830[6],
 &VB_pss_1_0xe011570[12],
 &VB_cotmc_1_0xe061610[9],
 &VB_cotmc_1_0xe051e90[12],
 &VB_bowser_1_1_0xe0373a0[9],
 &VB_bowser_1_1_0xe035d20[9],
 &VB_bowser_1_1_0xe0346a0[9],
 &VB_bowser_1_1_0xe033020[9],
 &VB_bowser_1_1_0xe0319a0[9],
 &VB_bowser_1_1_0xe030320[9],
 &VB_bowser_1_1_0xe02eca0[9],
 &VB_bowser_1_1_0xe02d620[9],
 &VB_bowser_1_1_0xe02bfa0[9],
 &VB_bowser_1_1_0xe02a920[9],
 &VB_bowser_1_1_0xe020f60[3],
 &VB_wmotr_1_0xe018370[9],
 &VB_wmotr_1_0xe016c00[3],
 &VB_wmotr_1_0xe06fdf0[12],
 &VB_wmotr_1_0xe06fd00[3],
};