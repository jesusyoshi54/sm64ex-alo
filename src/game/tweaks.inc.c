//This is a series of defines to edit commonly changed parameters in romhacks
//These are commonly referred to as tweaks

#define MARIO_START_LIVES 4
#define INFINITE_LIVES 0
#define START_LEVEL LEVEL_CASTLE_GROUNDS
#define COINS_REQ_COINSTAR 100
//level, area, warp ID
#define EXIT_COURSE LEVEL_CASTLE, 1, 0x1F
#define FALL_DAMAGE 1
#define REDS_REQ 8
//whether coins are 3d or not. Changes bhv scripts and pause menu reds rendering
#define USE3DCOINS 0
#define INCLUDE_MOP 0
//an array
#define STAR_MILESTONES  1, 3, 8, 30, 50, 70
#define SHOW_STAR_MILESTONES 1

#define KING_BOMB_FVEL 3.0f
#define KING_BOMB_YAWVEL 0x100
#define KING_BOMB_HEALTH 3
#define KING_WHOMP_HEALTH 3
#define KOOPA_SPEED_RACE_END 8.0f
#define KOOPA_SPEED_BOB 4.0f
#define KOOPA_SPEED_THI 6.0f

#define MIPS1_STAR_REQ 15
#define MIPS2_STAR_REQ 50

//these already existed in the repo so I just moved them here
#define TOAD_STAR_1_REQUIREMENT 12
#define TOAD_STAR_2_REQUIREMENT 25
#define TOAD_STAR_3_REQUIREMENT 35

#define TOAD_STAR_1_DIALOG DIALOG_082
#define TOAD_STAR_2_DIALOG DIALOG_076
#define TOAD_STAR_3_DIALOG DIALOG_083

#define TOAD_STAR_1_DIALOG_AFTER DIALOG_154
#define TOAD_STAR_2_DIALOG_AFTER DIALOG_155
#define TOAD_STAR_3_DIALOG_AFTER DIALOG_156

//possibly too short?
#define SLIDE_TIME 630

#define MC_TIME 1200
#define WC_TIME 3600
#define VC_TIME 1200

//level entry times are different than cap box times
#define MC_LEVEL_TIME 1200
#define WC_LEVEL_TIME 2400
#define VC_LEVEL_TIME 1200


#define HUD_LIVES_MARIO_X GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(22)
#define HUD_LIVES_MARIO_Y 209

#define HUD_LIVES_CROSS_X GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(38)
#define HUD_LIVES_CROSS_Y 209

#define HUD_LIVES_NUM_X GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(54)
#define HUD_LIVES_NUM_Y 209

#define HUD_COINS_X 168
#define HUD_COINS_Y 209

#define HUD_COINS_CROSS_X 184
#define HUD_COINS_CROSS_Y 209

#define HUD_COINS_NUM_X 198
#define HUD_COINS_NUM_Y 209

// X dimension - num, or 320-78 = 242

#define HUD_STARS_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(94)
#define HUD_STARS_Y 209

#define HUD_STARS_CROSS_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(78)
#define HUD_STARS_CROSS_Y 209

#define HUD_STARS_NUM_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(62)
#define HUD_STARS_NUM_Y 209

#define HUD_TIME_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(150)
#define HUD_TIME_Y 185

//use the same Y value for all the times, aprostrophes are rep'd by A

#define HUD_TIME_MIN_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(91)
#define HUD_TIME_MIN_A_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(81)
#define HUD_TIME_SEC_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(71)
#define HUD_TIME_SEC_AA_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(461)
#define HUD_TIME_FSEC_X GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(37)
#define HUD_TIME_A_Y 32

//I'll do camera later

#define POWER_X 140
#define POWER_Y 166

#define SHOW_STARS 1
#define SHOW_COINS 1
#define SHOW_LIVES 1
#define SHOW_CAM 1
#define SHOW_TIME 1
