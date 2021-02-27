#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include "sm64.h"
#include "macros.h"
#include "surface_terrains.h"
#include "types.h"
#include "make_const_nonconst.h"

#include "mist/model.inc.c"
UNUSED static const u64 binid_0 = 0;

#include "explosion/model.inc.c"
UNUSED static const u64 binid_1 = 1;

#include "butterfly/model.inc.c"
#include "butterfly/anims/data.inc.c"
#include "butterfly/anims/table.inc.c"
UNUSED static const u64 binid_2 = 2;

#include "coin/model.inc.c"
UNUSED static const u64 binid_3 = 3;

#include "warp_pipe/model.inc.c"
#include "warp_pipe/collision.inc.c"
UNUSED static const u64 binid_4 = 4;

#include "door/custom.model.inc.h"
#include "door/custom.model.inc.c"
#include "door/model.inc.c"
#include "door/textureNew.inc.c"
#include "door/anims/data.inc.c"
#include "door/anims/table.inc.c"
UNUSED static const u64 binid_5 = 5;

#include "bowser_key/model.inc.c"
#include "bowser_key/anims/data.inc.c"
#include "bowser_key/anims/table.inc.c"
UNUSED static const u64 binid_6 = 6;

#include "flame/model.inc.c"
UNUSED static const u64 binid_7 = 7;

#include "blue_fish/model.inc.c"
#include "blue_fish/anims/data.inc.c"
#include "blue_fish/anims/table.inc.c"
UNUSED static const u64 binid_8 = 8;

#include "pebble/model.inc.c"
UNUSED static const u64 binid_9 = 9;

#include "leaves/model.inc.c"
UNUSED static const u64 binid_10 = 10;

// this is still weird...
#include "warp_collision/collision.inc.c"
UNUSED static const u64 binid_11 = 11;

#include "mario_cap/model.inc.c"
UNUSED static const u64 binid_12 = 12;

#include "power_meter/model.inc.c"
UNUSED static const u64 binid_13 = 13;

UNUSED static const u64 binid_14 = 14;

#include "mushroom_1up/model.inc.c"
UNUSED static const u64 binid_15 = 15;

#include "star/model.inc.c"
UNUSED static const u64 binid_16 = 16;

#include "sand/model.inc.c"
UNUSED static const u64 binid_17 = 17;

#include "dirt/model.inc.c"
UNUSED static const u64 binid_18 = 18;

#include "transparent_star/model.inc.c"
UNUSED static const u64 binid_19 = 19;

#include "white_particle/model.inc.c"
UNUSED static const u64 binid_20 = 20;

#include "wooden_signpost/model.inc.c"
#include "wooden_signpost/collision.inc.c"
UNUSED static const u64 binid_21 = 21;

#include "tree/model.inc.c"
UNUSED static const u64 binid_22 = 22;

#if INCLUDE_MOP
#include "Noteblock_MOP/model.inc.h"
#include "Noteblock_MOP/model.inc.c"
#include "Noteblock_MOP/collision.inc.c"
#include "Noteblock_MOP/texture.inc.c"

#include "Checkpoint_Flag_MOP/model.inc.h"
#include "Checkpoint_Flag_MOP/model.inc.c"
#include "Checkpoint_Flag_MOP/texture.inc.c"

#include "FlipBlock_MOP/model.inc.h"
#include "FlipBlock_MOP/model.inc.c"
#include "FlipBlock_MOP/collision.inc.c"
#include "FlipBlock_MOP/texture.inc.c"

#include "Flipswap_Platform_MOP/model.inc.h"
#include "Flipswap_Platform_MOP/collision.inc.c"
#include "Flipswap_Platform_MOP/model.inc.c"
#include "Flipswap_Platform_MOP/texture.inc.c"
#include "Flipswap_Platform_Border_MOP/model.inc.h"
#include "Flipswap_Platform_Border_MOP/model.inc.c"
#include "Flipswap_Platform_Border_MOP/texture.inc.c"


#include "Flipswitch_Panel_MOP/model.inc.h"
#include "Flipswitch_Panel_MOP/model.inc.c"
#include "Flipswitch_Panel_MOP/collision.inc.c"
#include "Flipswitch_Panel_MOP/texture.inc.c"

#include "Green_Switchboard_MOP/model.inc.h"
#include "Green_Switchboard_MOP/model.inc.c"
#include "Green_Switchboard_MOP/collision.inc.c"
#include "Green_Switchboard_MOP/texture.inc.c"
#include "Green_Switchboard_Gears_MOP/model.inc.h"
#include "Green_Switchboard_Gears_MOP/model.inc.c"
#include "Green_Switchboard_Gears_MOP/texture.inc.c"

#include "Moving_Rotating_Block_MOP/model.inc.h"
#include "Moving_Rotating_Block_MOP/collision.inc.c"
#include "Moving_Rotating_Block_MOP/model.inc.c"
#include "Moving_Rotating_Block_MOP/texture.inc.c"

#include "SandBlock_MOP/model.inc.h"
#include "SandBlock_MOP/model.inc.c"
#include "SandBlock_MOP/collision.inc.c"
#include "SandBlock_MOP/texture.inc.c"

#include "Shell_1_MOP/model.inc.h"
#include "Shell_1_MOP/model.inc.c"
#include "Shell_1_MOP/texture.inc.c"

#include "Shell_2_MOP/model.inc.h"
#include "Shell_2_MOP/model.inc.c"
#include "Shell_2_MOP/texture.inc.c"

#include "Shrink_Platform_MOP/model.inc.h"
#include "Shrink_Platform_MOP/model.inc.c"
#include "Shrink_Platform_MOP/collision.inc.c"
#include "Shrink_Platform_MOP/texture.inc.c"
#include "Shrink_Platform_Border_MOP/model.inc.h"
#include "Shrink_Platform_Border_MOP/model.inc.c"
#include "Shrink_Platform_Border_MOP/texture.inc.c"


#include "Spring_MOP/model.inc.h"
#include "Spring_MOP/model.inc.c"
#include "Spring_MOP/texture.inc.c"

#include "Switchblock_MOP/model.inc.h"
#include "Switchblock_MOP/model.inc.c"
#include "Switchblock_MOP/collision.inc.c"
#include "Switchblock_MOP/texture.inc.c"

#include "Switchblock_Switch_MOP/model.inc.h"
#include "Switchblock_Switch_MOP/model.inc.c"
#include "Switchblock_Switch_MOP/collision.inc.c"
#include "Switchblock_Switch_MOP/texture.inc.c"

#endif