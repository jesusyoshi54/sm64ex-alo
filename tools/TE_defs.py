Ascii={}
for x in range(10):
	Ascii[str(x)]=hex(x)
def char_range(c1,c2):
	for c in range(ord(c1),ord(c2)+1):
		yield chr(c)
for x in char_range('A','Z'):
	Ascii[x]=hex(ord(x)-55)
for x in char_range('a','z'):
	Ascii[x]=hex(ord(x)-61)
Ascii.update({
'^':hex(0x50),
'|':hex(0x51),
'<':hex(0x52),
'>':hex(0x53),
'[A]':hex(0x54),
'[B]':hex(0x55),
'[C]':hex(0x56),
'[Z]':hex(0x57),
'[R]':hex(0x58),
',':hex(0x6f),
'/':hex(0xd0),
'[the]':hex(0xd1),
'[you]':hex(0xd2),
' ':hex(0x9e),
'-':hex(0x9f),
'$':hex(0xf9),
'(':hex(0xe1),
')':hex(0xe3),
'+':hex(0xe4),
'&':hex(0xe5),
':':hex(0xe6),
'!':hex(0xf2),
'”':hex(0xf5),
'?':hex(0xf4),
'“':hex(0xf6),
'~':hex(0xf7),
'[Cur*]':hex(0xE0),
'[x]':hex(0xfb),
'[·]':hex(0xfc),
'[F*]':hex(0xfd),
'[H*]':hex(0xfa),
'\n':hex(0xfe),
'.':hex(0x3f),
"'":hex(0x3e),
'[end]':hex(0xff)
})