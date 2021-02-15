#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe06b830[];
extern Vtx VB_castle_inside_1_0xe070d30[];
extern Vtx VB_castle_inside_1_0xe0767f0[];
extern Vtx VB_castle_inside_1_0xe0779a0[];
extern Vtx VB_castle_inside_1_0xe07dd90[];
extern Vtx VB_castle_inside_1_0xe082290[];
extern Vtx VB_castle_inside_1_0xe082320[];
extern Vtx VB_castle_inside_1_0xe082410[];
extern Vtx VB_castle_inside_1_0xe0824c0[];
extern Vtx VB_castle_inside_1_0xe082900[];
extern Vtx VB_castle_inside_1_0xe082ac0[];
extern Vtx VB_castle_inside_1_0xe083520[];
extern Vtx VB_bbh_1_0xe074d00[];
extern Vtx VB_bbh_1_0xe07a940[];
extern Vtx VB_bbh_1_0xe07bb30[];
extern Vtx VB_bbh_1_0xe088c90[];
extern Vtx VB_ccm_1_0xe073b20[];
extern Vtx VB_ccm_1_0xe07ef40[];
extern Vtx VB_hmc_1_0xe0b4560[];
extern Vtx VB_ssl_1_0xe054480[];
extern Vtx VB_ssl_1_0xe06dfc0[];
extern Vtx VB_ssl_1_0xe06f310[];
extern Vtx VB_ssl_1_0xe073f20[];
extern Vtx VB_bob_1_0xe0919a0[];
extern Vtx VB_sl_1_0xe044d30[];
extern Vtx VB_sl_1_0xe08c440[];
extern Vtx VB_sl_1_0xe08cf10[];
extern Vtx VB_sl_1_0xe08d930[];
extern Vtx VB_wdw_1_0xe084730[];
extern Vtx VB_jrb_1_0xe0753d0[];
extern Vtx VB_jrb_1_0xe0842a0[];
extern Vtx VB_thi_1_0xe09d620[];
extern Vtx VB_thi_1_0xe09f310[];
extern Vtx VB_thi_1_0xe09fa00[];
extern Vtx VB_thi_1_0xe0a1910[];
extern Vtx VB_ttc_1_0xe07dd10[];
extern Vtx VB_ttc_1_0xe07e950[];
extern Vtx VB_rr_1_0xe067390[];
extern Vtx VB_rr_1_0xe067530[];
extern Vtx VB_rr_1_0xe067800[];
extern Vtx VB_rr_1_0xe080d30[];
extern Vtx VB_rr_1_0xe081030[];
extern Vtx VB_rr_1_0xe083a60[];
extern Vtx VB_rr_1_0xe08a120[];
extern Vtx VB_castle_grounds_1_0xe03e200[];
extern Vtx VB_castle_grounds_1_0xe03fc00[];
extern Vtx VB_castle_grounds_1_0xe046b00[];
extern Vtx VB_castle_grounds_1_0xe046bf0[];
extern Vtx VB_castle_grounds_1_0xe046ca0[];
extern Vtx VB_castle_grounds_1_0xe047940[];
extern Vtx VB_castle_grounds_1_0xe0814f0[];
extern Vtx VB_castle_grounds_1_0xe047d00[];
extern Vtx VB_castle_grounds_2_0xe0c2590[];
// extern Vtx VB_castle_grounds_2_0xe0eb450[];
// extern Vtx VB_castle_grounds_2_0xe0e9dd0[];
// extern Vtx VB_castle_grounds_2_0xe0da260[];
extern Vtx VB_bitdw_1_0xe089130[];
extern Vtx VB_bitdw_1_0xe089740[];
extern Vtx VB_vcutm_1_0xe0718a0[];
extern Vtx VB_bitfs_1_0xe0471d0[];
extern Vtx VB_bitfs_1_0xe058660[];
extern Vtx VB_bitfs_1_0xe05bb20[];
extern Vtx VB_bitfs_1_0xe05dd60[];
extern Vtx VB_bitfs_1_0xe05e4c0[];
extern Vtx VB_bitfs_1_0xe064890[];
extern Vtx VB_bitfs_1_0xe06af10[];
extern Vtx VB_bitfs_1_0xe06afb0[];
extern Vtx VB_bitfs_1_0xe06b060[];
extern Vtx VB_bitfs_1_0xe06b4e0[];
extern Vtx VB_bitfs_1_0xe06b770[];
extern Vtx VB_sa_1_0xe07c780[];
extern Vtx VB_sa_1_0xe07ca90[];
extern Vtx VB_bits_1_0xe05a5b0[];
extern Vtx VB_bits_1_0xe05a690[];
extern Vtx VB_bits_1_0xe0623f0[];
extern Vtx VB_bits_1_0xe090800[];
extern Vtx VB_bits_1_0xe090a80[];
extern Vtx VB_bits_1_0xe090e90[];
extern Vtx VB_bits_1_0xe091c10[];
extern Vtx VB_bits_1_0xe0a4dd0[];
extern Vtx VB_bits_1_0xe0a8550[];
extern Vtx VB_bits_1_0xe0a8600[];
extern Vtx VB_bits_1_0xe0a89a0[];
extern Vtx VB_bits_1_0xe0aa460[];
extern Vtx VB_bits_1_0xe0aa780[];
extern Vtx VB_lll_1_0xe063910[];
extern Vtx VB_lll_1_0xe068460[];
extern Vtx VB_lll_1_0xe068980[];
extern Vtx VB_lll_1_0xe0bb750[];
extern Vtx VB_ddd_1_0xe074ba0[];
extern Vtx VB_ddd_1_0xe074ee0[];
extern Vtx VB_ddd_1_0xe07d670[];
extern Vtx VB_ddd_1_0xe0966e0[];
extern Vtx VB_wf_1_0xe02f630[];
extern Vtx VB_ending_1_0xe098610[];
extern Vtx VB_ending_1_0xe09b490[];
extern Vtx VB_ending_1_0xe09c150[];
extern Vtx VB_castle_courtyard_1_0xe070be0[];
extern Vtx VB_castle_courtyard_1_0xe07fe70[];
extern Vtx VB_castle_courtyard_1_0xe0831e0[];
extern Vtx VB_castle_courtyard_1_0xe0887c0[];
extern Vtx VB_castle_courtyard_1_0xe0888e0[];
extern Vtx VB_castle_courtyard_1_0xe08f9b0[];
extern Vtx VB_castle_courtyard_1_0xe08fa30[];
extern Vtx VB_castle_courtyard_1_0xe099c60[];
extern Vtx VB_castle_courtyard_1_0xe099d10[];
extern Vtx VB_castle_courtyard_1_0xe099f70[];
extern Vtx VB_castle_courtyard_1_0xe09a560[];
extern Vtx VB_castle_courtyard_1_0xe09c500[];
extern Vtx VB_castle_courtyard_1_0xe09c6d0[];
extern Vtx VB_castle_courtyard_1_0xe09ca50[];
extern Vtx VB_pss_1_0xe085c70[];
extern Vtx VB_pss_1_0xe087410[];
extern Vtx VB_pss_1_0xe089650[];
extern Vtx VB_pss_1_0xe089770[];
extern Vtx VB_pss_1_0xe089890[];
extern Vtx VB_pss_1_0xe0899b0[];
extern Vtx VB_pss_1_0xe089ad0[];
extern Vtx VB_pss_1_0xe089bf0[];
extern Vtx VB_pss_1_0xe08b3d0[];
extern Vtx VB_pss_1_0xe08cb70[];
extern Vtx VB_pss_1_0xe08cc50[];
extern Vtx VB_pss_1_0xe08d8c0[];
extern Vtx VB_cotmc_1_0xe065d80[];
extern Vtx VB_cotmc_1_0xe06cfd0[];
extern Vtx VB_cotmc_1_0xe076ce0[];
extern Vtx VB_cotmc_1_0xe079750[];
extern Vtx VB_cotmc_1_0xe07a3f0[];
extern Vtx VB_totwc_1_0xe03b4d0[];
extern Vtx VB_totwc_1_0xe072460[];
extern Vtx VB_totwc_1_0xe0877d0[];
extern Vtx VB_totwc_1_0xe088410[];
extern Vtx VB_totwc_1_0xe096c00[];
extern Vtx VB_bowser_1_1_0xe028670[];
extern Vtx VB_bowser_1_1_0xe028730[];
extern Vtx VB_wmotr_1_0xe0984b0[];
extern Vtx VB_bowser_2_1_0xe023e30[];
extern Vtx VB_bowser_2_1_0xe022b70[];
extern Vtx VB_bowser_2_1_0xe0218b0[];
extern Vtx VB_bowser_2_1_0xe0205f0[];
extern Vtx VB_bowser_2_1_0xe01f330[];
extern Vtx VB_bowser_2_1_0xe01e070[];
extern Vtx VB_bowser_2_1_0xe01cdb0[];
extern Vtx VB_bowser_2_1_0xe01baf0[];
extern Vtx VB_bowser_2_1_0xe012f40[];
extern Vtx VB_bowser_3_1_0xe028810[];
extern Vtx VB_ttm_1_0xe084e80[];
extern Vtx VB_ttm_1_0xe0854d0[];
extern Vtx VB_ttm_1_0xe0a75a0[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe06b830[0],
 &VB_castle_inside_1_0xe070d30[0],
 &VB_castle_inside_1_0xe0767f0[0],
 &VB_castle_inside_1_0xe0779a0[0],
 &VB_castle_inside_1_0xe07dd90[0],
 &VB_castle_inside_1_0xe082290[0],
 &VB_castle_inside_1_0xe082320[0],
 &VB_castle_inside_1_0xe082410[0],
 &VB_castle_inside_1_0xe0824c0[0],
 &VB_castle_inside_1_0xe082900[0],
 &VB_castle_inside_1_0xe082ac0[0],
 &VB_castle_inside_1_0xe083520[0],
 &VB_bbh_1_0xe074d00[0],
 &VB_bbh_1_0xe07a940[0],
 &VB_bbh_1_0xe07bb30[0],
 &VB_bbh_1_0xe088c90[0],
 &VB_ccm_1_0xe073b20[0],
 &VB_ccm_1_0xe07ef40[0],
 &VB_hmc_1_0xe0b4560[0],
 &VB_ssl_1_0xe054480[0],
 &VB_ssl_1_0xe06dfc0[0],
 &VB_ssl_1_0xe06f310[0],
 &VB_ssl_1_0xe073f20[0],
 &VB_bob_1_0xe0919a0[0],
 &VB_sl_1_0xe044d30[0],
 &VB_sl_1_0xe08c440[0],
 &VB_sl_1_0xe08cf10[0],
 &VB_sl_1_0xe08d930[0],
 &VB_wdw_1_0xe084730[0],
 &VB_jrb_1_0xe0753d0[0],
 &VB_jrb_1_0xe0842a0[0],
 &VB_thi_1_0xe09d620[0],
 &VB_thi_1_0xe09f310[0],
 &VB_thi_1_0xe09fa00[0],
 &VB_thi_1_0xe0a1910[0],
 &VB_ttc_1_0xe07dd10[0],
 &VB_ttc_1_0xe07e950[0],
 &VB_rr_1_0xe067390[0],
 &VB_rr_1_0xe067530[0],
 &VB_rr_1_0xe067800[0],
 &VB_rr_1_0xe080d30[0],
 &VB_rr_1_0xe081030[0],
 &VB_rr_1_0xe083a60[0],
 &VB_rr_1_0xe08a120[0],
 &VB_castle_grounds_1_0xe03e200[0],
 &VB_castle_grounds_1_0xe03fc00[0],
 &VB_castle_grounds_1_0xe046b00[0],
 &VB_castle_grounds_1_0xe046bf0[0],
 &VB_castle_grounds_1_0xe046ca0[0],
 &VB_castle_grounds_1_0xe047940[0],
 &VB_castle_grounds_1_0xe0814f0[0],
 &VB_castle_grounds_1_0xe047d00[0],
 // &VB_castle_grounds_2_0xe0eb450[255],
 // &VB_castle_grounds_2_0xe0e9dd0[255],
 // &VB_castle_grounds_2_0xe0da260[255],
 // must be an object ptr that was blooped in
 &VB_castle_grounds_2_0xe0c2590[255],
 &VB_castle_grounds_2_0xe0c2590[255],
 &VB_castle_grounds_2_0xe0c2590[255],
 &VB_bitdw_1_0xe089130[0],
 &VB_bitdw_1_0xe089740[0],
 &VB_vcutm_1_0xe0718a0[0],
 &VB_bitfs_1_0xe0471d0[0],
 &VB_bitfs_1_0xe058660[0],
 &VB_bitfs_1_0xe05bb20[0],
 &VB_bitfs_1_0xe05dd60[0],
 &VB_bitfs_1_0xe05e4c0[0],
 &VB_bitfs_1_0xe064890[0],
 &VB_bitfs_1_0xe06af10[0],
 &VB_bitfs_1_0xe06afb0[0],
 &VB_bitfs_1_0xe06b060[0],
 &VB_bitfs_1_0xe06b4e0[0],
 &VB_bitfs_1_0xe06b770[0],
 &VB_sa_1_0xe07c780[0],
 &VB_sa_1_0xe07ca90[0],
 &VB_bits_1_0xe05a5b0[0],
 &VB_bits_1_0xe05a690[0],
 &VB_bits_1_0xe0623f0[0],
 &VB_bits_1_0xe090800[0],
 &VB_bits_1_0xe090a80[0],
 &VB_bits_1_0xe090e90[0],
 &VB_bits_1_0xe091c10[0],
 &VB_bits_1_0xe0a4dd0[0],
 &VB_bits_1_0xe0a8550[0],
 &VB_bits_1_0xe0a8600[0],
 &VB_bits_1_0xe0a89a0[0],
 &VB_bits_1_0xe0aa460[0],
 &VB_bits_1_0xe0aa780[0],
 &VB_lll_1_0xe063910[0],
 &VB_lll_1_0xe068460[0],
 &VB_lll_1_0xe068980[0],
 &VB_lll_1_0xe0bb750[0],
 &VB_ddd_1_0xe074ba0[0],
 &VB_ddd_1_0xe074ee0[0],
 &VB_ddd_1_0xe07d670[0],
 &VB_ddd_1_0xe0966e0[0],
 &VB_wf_1_0xe02f630[0],
 &VB_ending_1_0xe098610[0],
 &VB_ending_1_0xe09b490[0],
 &VB_ending_1_0xe09c150[0],
 &VB_castle_courtyard_1_0xe070be0[0],
 &VB_castle_courtyard_1_0xe07fe70[0],
 &VB_castle_courtyard_1_0xe0831e0[0],
 &VB_castle_courtyard_1_0xe0887c0[0],
 &VB_castle_courtyard_1_0xe0888e0[0],
 &VB_castle_courtyard_1_0xe08f9b0[0],
 &VB_castle_courtyard_1_0xe08fa30[0],
 &VB_castle_courtyard_1_0xe099c60[0],
 &VB_castle_courtyard_1_0xe099d10[0],
 &VB_castle_courtyard_1_0xe099f70[0],
 &VB_castle_courtyard_1_0xe09a560[0],
 &VB_castle_courtyard_1_0xe09c500[0],
 &VB_castle_courtyard_1_0xe09c6d0[0],
 &VB_castle_courtyard_1_0xe09ca50[0],
 &VB_pss_1_0xe085c70[0],
 &VB_pss_1_0xe087410[0],
 &VB_pss_1_0xe089650[0],
 &VB_pss_1_0xe089770[0],
 &VB_pss_1_0xe089890[0],
 &VB_pss_1_0xe0899b0[0],
 &VB_pss_1_0xe089ad0[0],
 &VB_pss_1_0xe089bf0[0],
 &VB_pss_1_0xe08b3d0[0],
 &VB_pss_1_0xe08cb70[0],
 &VB_pss_1_0xe08cc50[0],
 &VB_pss_1_0xe08d8c0[0],
 &VB_cotmc_1_0xe065d80[0],
 &VB_cotmc_1_0xe06cfd0[0],
 &VB_cotmc_1_0xe076ce0[0],
 &VB_cotmc_1_0xe079750[0],
 &VB_cotmc_1_0xe07a3f0[0],
 &VB_totwc_1_0xe03b4d0[0],
 &VB_totwc_1_0xe072460[0],
 &VB_totwc_1_0xe0877d0[0],
 &VB_totwc_1_0xe088410[0],
 &VB_totwc_1_0xe096c00[0],
 &VB_bowser_1_1_0xe028670[0],
 &VB_bowser_1_1_0xe028730[0],
 &VB_wmotr_1_0xe0984b0[0],
 &VB_bowser_2_1_0xe023e30[0],
 &VB_bowser_2_1_0xe022b70[0],
 &VB_bowser_2_1_0xe0218b0[0],
 &VB_bowser_2_1_0xe0205f0[0],
 &VB_bowser_2_1_0xe01f330[0],
 &VB_bowser_2_1_0xe01e070[0],
 &VB_bowser_2_1_0xe01cdb0[0],
 &VB_bowser_2_1_0xe01baf0[0],
 &VB_bowser_2_1_0xe012f40[9],
 &VB_bowser_3_1_0xe028810[0],
 &VB_ttm_1_0xe084e80[0],
 &VB_ttm_1_0xe0854d0[0],
 &VB_ttm_1_0xe0a75a0[0],
};