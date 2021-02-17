This file will contain instructions on how to import RM2C data into the sm64ex-alo repo.
First you should always copy the exported folders (/src,/levels,/sound,/text,/textures,/actors) into your repo.
Then make sure you set RM2C inside the makefile to 1
Then to build for PC use this input to terminal: "make clean && make -j4 TARGET_N64=0 TARGET_ARCH=native WINDOWS_BUILD=1 TARGET_GAME_CONSOLE=0 DEBUG=1 NODRAWINGDISTANCE=1"
Then to build for N64 use this input to terminal: "make clean && make -j4"
By default, due to their high variability and unique names, no actor data will be included from RM2C output, you must
go per actor and either copy data from a custom.model.inc.c file to the model.inc.c file, or change the includes in group files.

Level specific models will go into a folder inside of /actors/ with the name of the level they belong to. You must copy these folders
over to their level folders. The directory should match the target level dir, and not overwrite any files. Textures should be pre written
to the target level directories.

Below are some warnings generated by RM2C during extraction.
It is expected to have many warnings for editor files and for roms with lots of custom content.

******************************************************************************************

Objects without references must have behaviors created for them, be given an existing behavior, or be commented out.
 Level bbh Area 1 has object  Bhv_Custom_0x130002a0 with no known label.
 Level ssl Area 1 has object  Bhv_Custom_0x130002a0 with no known label.
 Level sl Area 1 has object  Bhv_Custom_0x130002a0 with no known label.
 Level rr Area 1 has object  Bhv_Custom_0x130002a0 with no known label.
 Level wf Area 1 has object  Bhv_Custom_0x130002a0 with no known label.
******************************************************************************************

Levels with fog in sm64 editor and likely early versions of Rom Manager are completely broken and destroy the levels graphics and most non opaque objects.
I attempt to auto fix these, if there is any issue in these levels check fog first.

 Level ccm Display List DL_ccm_1_0xe066970 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ccm Display List DL_ccm_1_0xe0843a8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_hmc_1_0xe055b10 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_hmc_1_0xe0715e8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ssl Display List DL_ssl_1_0xe051750 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bob Display List DL_bob_1_0xe052b70 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bob Display List DL_bob_1_0xe06ba50 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level sl Display List DL_sl_1_0xe072d00 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level sl Display List DL_sl_1_0xe0940f0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level wdw Display List DL_wdw_1_0xe05cce0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level jrb Display List DL_jrb_1_0xe04e7a0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level thi Display List DL_thi_1_0xe04f760 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level thi Display List DL_thi_1_0xe067c70 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ttc Display List DL_ttc_1_0xe035eb0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level castle_grounds Display List DL_castle_grounds_1_0xe063100 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level castle_grounds Display List DL_castle_grounds_1_0xe07f0c8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_bitdw_1_0xe037a90 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_bitdw_1_0xe048808 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitfs Display List DL_bitfs_1_0xe05d4b0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitfs Display List DL_bitfs_1_0xe07b360 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bits Display List DL_bits_1_0xe03aae0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bits Display List DL_bits_1_0xe04c1f0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level lll Display List DL_lll_1_0xe052920 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level lll Display List DL_lll_1_0xe06b608 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ddd Display List DL_ddd_1_0xe0536d0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ddd Display List DL_ddd_1_0xe06f840 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level castle_courtyard Display List DL_castle_courtyard_1_0xe063820 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bowser_2 Display List DL_bowser_2_1_0xe0181b0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bowser_2 Display List DL_bowser_2_1_0xe01fae8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ttm Display List DL_ttm_1_0xe05a5a0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ttm Display List DL_ttm_1_0xe077b28 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_swoop_geo_0x6006880 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_swoop_geo_0x6006758 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_swoop_geo_0x6006a88 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_swoop_geo_0x6006bd0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_swoop_geo_0x6006d00 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600cfd0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600c8b8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600c468 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600baf8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600dfa8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600c030 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600d440 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600d6d8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600de38 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600da88 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600dc60 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level hmc Display List DL_dorrie_geo_0x600d8b0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_0005A0_0x7022da0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_0005B8_0x7023090 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_0005D0_0x7022aa0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_000548_0x7023bc8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_000570_0x7023e10 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_000588_0x7024110 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_hmc_geo_000530_0x701fff8 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
******************************************************************************************

Texture scrolls do not always follow the same format I assume, if this error appears it may have an invalid address which causes a crash.
RM2C will try to find the correct address after noticing the one it has is wrong, if a crash occurs when entering the level check these objects first

 Texture Scroll Object in level sa area 1 at 0xe01c020 has unrecognized address. Object Has been commented out.
******************************************************************************************

New models are detected by comparing the checksums of textures from the specific model.
The comparison models come from an unedited vanilla rom loaded into Rom Manager.
If a model is in this list, it has either an unrecognized ID or a new texture.
If a model is not in this list, it does not guarantee that it is unedited.

 model mario_geo_ in folder mario has a new model or new textures.
 model warp_pipe_geo_ in folder warp_pipe has a new model or new textures.
 model bubbly_tree_geo_ in folder tree has a new model or new textures.
 model wooden_door_geo_ in folder door has a new model or new textures.
 model yellow_coin_geo_ in folder coin has a new model or new textures.
 model star_geo_ in folder star has a new model or new textures.
 model wooden_signpost_geo_ in folder wooden_signpost has a new model or new textures.
 model marios_winged_metal_cap_geo_ in folder mario_cap has a new model or new textures.
 model mushroom_1up_geo_ in folder mushroom_1up has a new model or new textures.
 model number_geo_ in folder number has a new model or new textures.
 model unk_DL_160003a8_ in folder unk_None_160003a8 has a new model or new textures.
 model unk_DL_0c000410_ in folder unk_None_0c000410 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_bbh_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_ccm_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_hmc_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_ssl_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_bob_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_sl_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_wdw_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_jrb_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_thi_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_ttc_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_rr_12000830 has a new model or new textures.
 model unk_DL_0c000410_ in folder unk_castle_grounds_0c000410 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_bitfs_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_sa_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_bits_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_lll_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_ddd_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_wf_12000830 has a new model or new textures.
 model unk_DL_160003a8_ in folder unk_castle_courtyard_160003a8 has a new model or new textures.
 model unk_DL_0c000410_ in folder unk_castle_courtyard_0c000410 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_pss_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_bowser_1_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_wmotr_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_bowser_2_12000830 has a new model or new textures.
 model unk_DL_12000830_ in folder unk_ttm_12000830 has a new model or new textures.
 model Flipswitch_Panel_MOP_ in folder Flipswitch_Panel_MOP has a new model or new textures.
 model Green_Switchboard_MOP_ in folder Green_Switchboard_MOP has a new model or new textures.
 model Green_Switchboard_Gears_MOP_ in folder Green_Switchboard_Gears_MOP has a new model or new textures.
 model Moving_Rotating_Block_MOP_ in folder Moving_Rotating_Block_MOP has a new model or new textures.
 model Checkpoint_Flag_MOP_ in folder Checkpoint_Flag_MOP has a new model or new textures.
 model Flipswap_Platform_MOP_ in folder Flipswap_Platform_MOP has a new model or new textures.
 model Flipswap_Platform_Border_MOP_ in folder Flipswap_Platform_Border_MOP has a new model or new textures.
 model Noteblock_MOP_ in folder Noteblock_MOP has a new model or new textures.
 model Spring_MOP_ in folder Spring_MOP has a new model or new textures.
 model Shrink_Platform_Border_MOP_ in folder Shrink_Platform_Border_MOP has a new model or new textures.
 model Shrink_Platform_MOP_ in folder Shrink_Platform_MOP has a new model or new textures.
 model Sandblock_MOP_ in folder Sandblock_MOP has a new model or new textures.
 model Shell_1_MOP_ in folder Shell_1_MOP has a new model or new textures.
 model Shell_2_MOP_ in folder Shell_2_MOP has a new model or new textures.
 model FlipBlock_MOP_ in folder FlipBlock_MOP has a new model or new textures.
 model Switchblock_MOP_ in folder Switchblock_MOP has a new model or new textures.
 model Switchblock_Switch_MOP_ in folder Switchblock_Switch_MOP has a new model or new textures.
 model castle_geo_000F18_ in folder castle_inside/trap_door has a new model or new textures.
 model castle_geo_001940_ in folder castle_inside/water_level_pillar has a new model or new textures.
 model castle_geo_001530_ in folder castle_inside/clock_minute_hand has a new model or new textures.
 model castle_geo_001548_ in folder castle_inside/clock_hour_hand has a new model or new textures.
 model castle_geo_001518_ in folder castle_inside/areas/2/pendulum has a new model or new textures.
 model toad_geo_ in folder toad has a new model or new textures.
 model heart_geo_ in folder heart has a new model or new textures.
 model breakable_box_geo_ in folder breakable_box has a new model or new textures.
 model breakable_box_small_geo_ in folder breakable_box_small has a new model or new textures.
 model exclamation_box_outline_geo_ in folder exclamation_box_outline has a new model or new textures.
 model exclamation_box_geo_ in folder exclamation_box has a new model or new textures.
 model blue_coin_switch_geo_ in folder blue_coin_switch has a new model or new textures.
 model bowling_ball_geo_ in folder bowling_ball has a new model or new textures.
 model black_bobomb_geo_ in folder bobomb has a new model or new textures.
 model koopa_shell_geo_ in folder koopa_shell has a new model or new textures.
 model goomba_geo_ in folder goomba has a new model or new textures.
 model amp_geo_ in folder amp has a new model or new textures.
 model cannon_lid_seg8_dl_080048E0_ in folder cannon_lid has a new model or new textures.
 model checkerboard_platform_geo_ in folder checkerboard_platform has a new model or new textures.
 model purple_switch_geo_ in folder purple_switch has a new model or new textures.
 model metal_box_geo_ in folder metal_box has a new model or new textures.
 model flyguy_geo_ in folder flyguy has a new model or new textures.
 model chuckya_geo_ in folder chuckya has a new model or new textures.
 model rr_geo_000660_ in folder rr/areas/1/2 has a new model or new textures.
 model rr_geo_000678_ in folder rr/areas/1/3 has a new model or new textures.
 model rr_geo_000690_ in folder rr/areas/1/4 has a new model or new textures.
 model rr_geo_000788_ in folder rr/areas/1/14 has a new model or new textures.
 model rr_geo_0007A0_ in folder rr/areas/1/15 has a new model or new textures.
 model rr_geo_0007E8_ in folder rr/areas/1/18 has a new model or new textures.
 model rr_geo_000800_ in folder rr/areas/1/19 has a new model or new textures.
 model pokey_head_geo_ in folder pokey_head has a new model or new textures.
 model pokey_body_part_geo_ in folder pokey_body_part has a new model or new textures.
 model whomp_geo_ in folder whomp has a new model or new textures.
 model koopa_with_shell_geo_ in folder koopa has a new model or new textures.
 model king_bobomb_geo_ in folder king_bobomb has a new model or new textures.
 model bully_geo_ in folder bully has a new model or new textures.
 model thwomp_geo_ in folder thwomp has a new model or new textures.
 model hmc_geo_0005D0_ in folder hmc/elevator_platform has a new model or new textures.
 model bowser_geo_ in folder bowser has a new model or new textures.
 model bowser_bomb_geo_ in folder bowser_bomb has a new model or new textures.

Known methods of crashing:
*****************************************************************************
ALL BUILDS
IF CRASH ON BOOT - CHECK SEQUENCES
IF TITLE SCREEN LOOP - CHECK START LEVEL IN TWEAKS.INC.C
IF TEXTURES ARE MESSED UP - ALWAYS CHECK LEVEL FOG FIRST
IF ONLY ALPHA TEXTURES MESSED UP - MOVE FOG GEO LAYOUT TO LAYER 1/4 FROM 4/6
IF CRASH UPON ENTERING A LEVEL, CHECK OBJECTS. IF EDITOR, CHECK SCROLLS FIRST. IF NO OBJECTS BAD CHECK SEQUENCES
*****************************************************************************
N64 BUILD
IF SURFACE NODE POOOL OR SURFACE POOL FULL - ADD MORE TRIS TO EXT BOUNDS.H
IF CRASH ON STAR SELECT - PUSH FORWARD GODDARD SEGMENT IN SEGMENTS.H
*****************************************************************************

MORE ON AUDIO ERRORS:
On N64 build, a lack of proper audio memory allocation will instantly crash the game. If this happens, extend gAudioHeap in buffers.c
If you have issues with certain m64s sounding garbled, extend gAlBankSets in load.c (line 2000 about).
If sound cuts out at certain points, extend values in gAudioSessionPresets.
On all builds, if an out of bounds array access happens (often with high sequence numbers) the game will crash or have audio issues.
