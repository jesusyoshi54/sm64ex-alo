#This keyboard is required for Text Engine usage. Do not delete
TE_KEYBOARD_lower = ["[ShadedBGBox(0x20,0x120,0x18,0x78,0x20,0x20,0x20,0x80)][ShadedBGBox(0x32,0x110,0x98,0xb8,0x20,0x20,0x20,0x80)][ScaleText(2,1.2)][this is a test comment][SetOrigin(32,96)] 0 1 2 3 4 5 6 7 8 9[ScaleText(2.2,1.2)]\n",
#You can also put comments in with a '#'. 
#Just make sure to end the string before hand.
"  q w e r t y u i o p\n\
 a s d f g h j k l :\n\
  z x c v b n m","[ScaleText(2.0,1.2)] & ? !\n\
  ^  SPACE   END  < [F*][TransAbs(0x38,0x9c)]","[StartKeyboard(0)][Pad()][Pad()][StartKeyboard(0)]"]
TE_KEYBOARD_upper = ["[ShadedBGBox(0x20,0x120,0x18,0x78,0x20,0x20,0x20,0x80)]","[ShadedBGBox(0x32,0x110,0x98,0xb8,0x20,0x20,0x20,0x80)][ScaleText(2.0,1.2)]","[SetOrigin(32,96)] 0 1 2 3 4 5 6 7 8 9\n\
  Q W E R T Y U I O P\n\
 A S D F G H J K L :\n\
  Z X C V B N M & ? !\n\
  ^  SPACE   END  < [F*][TransAbs(0x38,0x9c)]","[StartKeyboard(0)]","[Pad()][Pad()][StartKeyboard(0)]"]

te_test = ["Test Function[CallLoop(0,'is_anim_at_end',2,('&gMarioStates[0]','3'))][DisplayMatchReturn(0,0)]123[DialogResponseGenericText()][end]"]