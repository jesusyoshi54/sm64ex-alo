#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe00af90[];
extern Vtx VB_castle_inside_1_0xe009640[];
extern Vtx VB_castle_inside_1_0xe007fc0[];
extern Vtx VB_castle_inside_1_0xe006850[];
extern Vtx VB_castle_inside_1_0xe010030[];
extern Vtx VB_castle_inside_1_0xe00e8c0[];
extern Vtx VB_castle_inside_1_0xe00d060[];
extern Vtx VB_castle_inside_1_0xe00b8f0[];
extern Vtx VB_bbh_1_0xe0373b0[];
extern Vtx VB_bbh_1_0xe0a0d10[];
extern Vtx VB_bbh_1_0xe036ff0[];
extern Vtx VB_bbh_1_0xe0a1b20[];
extern Vtx VB_bbh_1_0xe0a1b20[];
extern Vtx VB_ccm_1_0xe060e50[];
extern Vtx VB_ccm_1_0xe02f8f0[];
extern Vtx VB_hmc_1_0xe033b30[];
extern Vtx VB_hmc_1_0xe033b30[];
extern Vtx VB_hmc_1_0xe033b30[];
extern Vtx VB_hmc_1_0xe07d000[];
extern Vtx VB_hmc_1_0xe03ed50[];
extern Vtx VB_hmc_1_0xe03ed50[];
extern Vtx VB_bob_1_0xe01fa20[];
extern Vtx VB_sl_1_0xe0824a0[];
extern Vtx VB_sl_1_0xe043f20[];
extern Vtx VB_sl_1_0xe043f20[];
extern Vtx VB_wdw_1_0xe03b030[];
extern Vtx VB_wdw_1_0xe01d210[];
extern Vtx VB_jrb_1_0xe027810[];
extern Vtx VB_thi_1_0xe0cc500[];
extern Vtx VB_thi_1_0xe0a0a90[];
extern Vtx VB_thi_1_0xe09f320[];
extern Vtx VB_thi_1_0xe0257f0[];
extern Vtx VB_thi_1_0xe0368c0[];
extern Vtx VB_thi_1_0xe021fb0[];
extern Vtx VB_ttc_1_0xe021e50[];
extern Vtx VB_rr_1_0xe02fb50[];
extern Vtx VB_rr_1_0xe02df30[];
extern Vtx VB_castle_grounds_1_0xe039210[];
extern Vtx VB_bitdw_1_0xe060a50[];
extern Vtx VB_bitdw_1_0xe033690[];
extern Vtx VB_bitdw_1_0xe033690[];
extern Vtx VB_bitdw_1_0xe033690[];
extern Vtx VB_bitdw_1_0xe05f2e0[];
extern Vtx VB_bitdw_1_0xe032880[];
extern Vtx VB_bitdw_1_0xe031f20[];
extern Vtx VB_bitdw_1_0xe0307b0[];
extern Vtx VB_bitdw_1_0xe02ef50[];
extern Vtx VB_bitdw_1_0xe02d7e0[];
extern Vtx VB_bitdw_1_0xe02d600[];
extern Vtx VB_vcutm_1_0xe015f50[];
extern Vtx VB_bitfs_1_0xe028300[];
extern Vtx VB_bitfs_1_0xe0283f0[];
extern Vtx VB_bitfs_1_0xe07a740[];
extern Vtx VB_sa_1_0xe05b520[];
extern Vtx VB_sa_1_0xe03acd0[];
extern Vtx VB_bits_1_0xe00e0b0[];
extern Vtx VB_bits_1_0xe0173e0[];
extern Vtx VB_bits_1_0xe00d2a0[];
extern Vtx VB_bits_1_0xe00d2a0[];
extern Vtx VB_lll_1_0xe07b010[];
extern Vtx VB_lll_1_0xe019bd0[];
extern Vtx VB_ddd_1_0xe057b10[];
extern Vtx VB_ddd_1_0xe036b40[];
extern Vtx VB_cotmc_1_0xe00eb40[];
extern Vtx VB_cotmc_1_0xe00ab80[];
extern Vtx VB_cotmc_1_0xe00ab80[];
extern Vtx VB_cotmc_1_0xe009320[];
extern Vtx VB_totwc_1_0xe05a980[];
extern Vtx VB_totwc_1_0xe05a980[];
extern Vtx VB_totwc_1_0xe00c050[];
extern Vtx VB_totwc_1_0xe03d5b0[];
extern Vtx VB_totwc_1_0xe030a40[];
extern Vtx VB_totwc_1_0xe01f010[];
extern Vtx VB_totwc_1_0xe022760[];
extern Vtx VB_totwc_1_0xe023de0[];
extern Vtx VB_totwc_1_0xe020690[];
extern Vtx VB_totwc_1_0xe0586d0[];
extern Vtx VB_totwc_1_0xe056f60[];
extern Vtx VB_totwc_1_0xe00c050[];
extern Vtx VB_bowser_1_1_0xe0277e0[];
extern Vtx VB_bowser_1_1_0xe025f80[];
extern Vtx VB_bowser_1_1_0xe03c0f0[];
extern Vtx VB_bowser_1_1_0xe033bd0[];
extern Vtx VB_bowser_1_1_0xe01b5d0[];
extern Vtx VB_bowser_1_1_0xe0203a0[];
extern Vtx VB_bowser_1_1_0xe01ec30[];
extern Vtx VB_bowser_1_1_0xe01d3d0[];
extern Vtx VB_bowser_1_1_0xe01bc60[];
extern Vtx VB_wmotr_1_0xe0396e0[];
extern Vtx VB_wmotr_1_0xe028340[];
extern Vtx VB_wmotr_1_0xe0279e0[];
extern Vtx VB_wmotr_1_0xe0279e0[];
extern Vtx VB_wmotr_1_0xe02fe10[];
extern Vtx VB_bowser_2_1_0xe012740[];
extern Vtx VB_bowser_2_1_0xe01b980[];
extern Vtx VB_bowser_2_1_0xe014ae0[];
extern Vtx VB_bowser_3_1_0xe0090b0[];
extern Vtx VB_bowser_3_1_0xe004010[];
extern Vtx VB_ttm_1_0xe0815a0[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe00af90[3],
 &VB_castle_inside_1_0xe009640[0],
 &VB_castle_inside_1_0xe007fc0[6],
 &VB_castle_inside_1_0xe006850[0],
 &VB_castle_inside_1_0xe010030[9],
 &VB_castle_inside_1_0xe00e8c0[3],
 &VB_castle_inside_1_0xe00d060[12],
 &VB_castle_inside_1_0xe00b8f0[6],
 &VB_bbh_1_0xe0373b0[9],
 &VB_bbh_1_0xe0a0d10[0],
 &VB_bbh_1_0xe036ff0[3],
 &VB_bbh_1_0xe0a1b20[12],
 &VB_bbh_1_0xe0a1b20[6],
 &VB_ccm_1_0xe060e50[9],
 &VB_ccm_1_0xe02f8f0[9],
 &VB_hmc_1_0xe033b30[255],
 &VB_hmc_1_0xe033b30[255],
 &VB_hmc_1_0xe033b30[3],
 &VB_hmc_1_0xe07d000[12],
 &VB_hmc_1_0xe03ed50[255],
 &VB_hmc_1_0xe03ed50[3],
 &VB_bob_1_0xe01fa20[6],
 &VB_sl_1_0xe0824a0[0],
 &VB_sl_1_0xe043f20[255],
 &VB_sl_1_0xe043f20[15],
 &VB_wdw_1_0xe03b030[12],
 &VB_wdw_1_0xe01d210[0],
 &VB_jrb_1_0xe027810[9],
 &VB_thi_1_0xe0cc500[9],
 &VB_thi_1_0xe0a0a90[6],
 &VB_thi_1_0xe09f320[0],
 &VB_thi_1_0xe0257f0[9],
 &VB_thi_1_0xe0368c0[255],
 &VB_thi_1_0xe021fb0[12],
 &VB_ttc_1_0xe021e50[15],
 &VB_rr_1_0xe02fb50[3],
 &VB_rr_1_0xe02df30[9],
 &VB_castle_grounds_1_0xe039210[3],
 &VB_bitdw_1_0xe060a50[12],
 &VB_bitdw_1_0xe033690[255],
 &VB_bitdw_1_0xe033690[255],
 &VB_bitdw_1_0xe033690[3],
 &VB_bitdw_1_0xe05f2e0[6],
 &VB_bitdw_1_0xe032880[9],
 &VB_bitdw_1_0xe031f20[6],
 &VB_bitdw_1_0xe0307b0[0],
 &VB_bitdw_1_0xe02ef50[9],
 &VB_bitdw_1_0xe02d7e0[3],
 &VB_bitdw_1_0xe02d600[3],
 &VB_vcutm_1_0xe015f50[0],
 &VB_bitfs_1_0xe028300[9],
 &VB_bitfs_1_0xe0283f0[0],
 &VB_bitfs_1_0xe07a740[255],
 &VB_sa_1_0xe05b520[6],
 &VB_sa_1_0xe03acd0[9],
 &VB_bits_1_0xe00e0b0[12],
 &VB_bits_1_0xe0173e0[3],
 &VB_bits_1_0xe00d2a0[15],
 &VB_bits_1_0xe00d2a0[15],
 &VB_lll_1_0xe07b010[255],
 &VB_lll_1_0xe019bd0[3],
 &VB_ddd_1_0xe057b10[12],
 &VB_ddd_1_0xe036b40[3],
 &VB_cotmc_1_0xe00eb40[3],
 &VB_cotmc_1_0xe00ab80[9],
 &VB_cotmc_1_0xe00ab80[6],
 &VB_cotmc_1_0xe009320[15],
 &VB_totwc_1_0xe05a980[9],
 &VB_totwc_1_0xe05a980[9],
 &VB_totwc_1_0xe00c050[0],
 &VB_totwc_1_0xe03d5b0[9],
 &VB_totwc_1_0xe030a40[12],
 &VB_totwc_1_0xe01f010[3],
 &VB_totwc_1_0xe022760[6],
 &VB_totwc_1_0xe023de0[6],
 &VB_totwc_1_0xe020690[3],
 &VB_totwc_1_0xe0586d0[12],
 &VB_totwc_1_0xe056f60[6],
 &VB_totwc_1_0xe00c050[0],
 &VB_bowser_1_1_0xe0277e0[0],
 &VB_bowser_1_1_0xe025f80[9],
 &VB_bowser_1_1_0xe03c0f0[12],
 &VB_bowser_1_1_0xe033bd0[12],
 &VB_bowser_1_1_0xe01b5d0[6],
 &VB_bowser_1_1_0xe0203a0[6],
 &VB_bowser_1_1_0xe01ec30[0],
 &VB_bowser_1_1_0xe01d3d0[9],
 &VB_bowser_1_1_0xe01bc60[3],
 &VB_wmotr_1_0xe0396e0[9],
 &VB_wmotr_1_0xe028340[15],
 &VB_wmotr_1_0xe0279e0[255],
 &VB_wmotr_1_0xe0279e0[255],
 &VB_wmotr_1_0xe02fe10[255],
 &VB_bowser_2_1_0xe012740[3],
 &VB_bowser_2_1_0xe01b980[255],
 &VB_bowser_2_1_0xe014ae0[9],
 &VB_bowser_3_1_0xe0090b0[6],
 &VB_bowser_3_1_0xe004010[0],
 &VB_ttm_1_0xe0815a0[0],
};