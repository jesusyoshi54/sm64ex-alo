import struct
import functools
import TE_defs as t
import sys
import importlib as IL
from pathlib import Path
a = lambda s: functools.partial(struct.pack,s)
Types = "bBhHlLf"
for c in Types:
	globals()[c] = a(">%s"%c)
def p(x):
	global Place
	global Ptrs
	Ptrs.append(str(x))
	return H(Place)+H(len(Ptrs)-1)
def Pack(*Bytes):
	return b''.join(*Bytes)
def Ret(Funcs,MSB,*args):
	return Pack([bytes([MSB])]+[l(b) for l,b in zip(Funcs,args)])
def Make(MSB,*Funcs):
	return functools.partial(Ret,[*Funcs],MSB)
def SF(s):
	a = ['0x'+(s[i:i+2]) for i in range(0, len(s), 2)]
	return ','.join(a)
Funcs = {
	'SetSpd':(0x40,h),
	'SetSfx':(0x41,H),
	'SetEnv':(0x42,B,B,B,B),
	'UsrStr':(0x43,B),
	'SetScissor':(0x44,H,H,H,H),
	'SetRainbow':(0x46,H),
	'SetOrigin':(0x47,H,H),
	'JumpStr':(0x48,p),
	'TransOffs':(0x49,H,H),
	'TransAbs':(0x4A,H,H),
	#needs editing
	'TransMoving':(0x4B,H,H),
	'EnAIncSpd':(0x4c,),
	'DisAIncSpd':(0x4D,),
	'ResetKeyboard':(0x4E,),
	'StartKeyboard':(0x4F,B),
	'AutoNextBox':(0x70,),
	'AbtnNextBox':(0x71,),
	'TimeBlank':(0x72,H),
	'BtnBranchOpen':(0x73,H),
	'TimePause':(0x74,H),
	'BtnBranchClose':(0x76,),
	'EnBlip':(0x76,),
	'DisBlip':(0x77,),
	'KeepNewMusic':(0x78,),
	'SetMusic':(0x79,B),
	'ClearBuffer':(0x7A,),
	'AbtnEndStr':(0x7B,),
	'TimeEndStr':(0x7C,),
	'MosaicBGBox':(0x7D,H,H,H,H,p,B,B),
	#needs editing
	'MovingTexBGBox':(0x7E,H,H,H,H,p),
	'ShadedBGBox':(0x7F,H,H,H,H,B,B,B,B),
	'TexBGBox':(0x80,H,H,H,H,p),
	#needs editing
	'MovingShadedBGBox':(0x81,H,H,H,H,B,B,B,B),
	'SetCutscene':(0x82,B),
	'Pad':(0x83,),
	'ScaleText':(0x84,f,f),
	'StartDialogOptions':(0x85,B),
	'BranchDialogResponse':(0x86,B),
	'DialogResponseGenericText':(0x87,),
	'EnScreenShake':(0x88,),
	'DisScreenShake':(0x88,),
	#Camera Cmds
	'TriggerWarp':(0x8F,H,B),
	'StartGenBracket':(0x93,B),
	'EndGenBracket':(0x94,B),
	'StartDialogBracket':(0x95,B),
	'EndDialogBracket':(0x96,B),
	'SetRtrn':(0x97,B),
	'GotoRtrn':(0x98,B),
	'EnDropShadow':(0x99,),
	'DisDropShadow':(0x9A,),
	'EndBoxTransition':(0x9B,B,B,B,B),
	'StartBoxTransition':(0x9C,B,B,B,B),
}
def Write(out,Test,name):
	global Place
	global Ptrs
	E='char %s[] = {\n'%name
	Z = 'u32 %s[] = {\n'%(name+'_ptrlist')
	for cmd in Test:
		try:
			Ecmd=eval(cmd)
			Place+=len(Ecmd)
			E+=SF(Ecmd.hex())+','
		except:
			iter=0
			while(iter<len(cmd)):
				if '[' in cmd[iter]:
					c=cmd.find(']')
					c = cmd[iter:c+1]
					Q=t.Ascii.get(c,'0x9e')+','
					iter+=len(c)
				else:
					Q=t.Ascii.get(cmd[iter],'0x9e')+','
				E+=Q
				Place+=1
				iter+=1
	if E[-1] == ',':
		E = E[:-1]+"\n};\n"
	if Ptrs:
		Z+= ','.join(Ptrs)
		o.write(Z + '\n};\n')
	o.write(E)

if __name__ == "__main__":
	global Place
	global Ptrs
	Ptrs = []
	Place = 0
	f = sys.argv[1]
	q = Path(f).stem
	r = Path(sys.path[0]).parent / Path(f).parent
	sys.path.append(str(r))
	f = IL.import_module(q)
	o = sys.argv[2].replace(".py",".h")
	o = open(o,'w')
	for k,v in Funcs.items():
		globals()[k] = Make(*v)
	s = [a for a in f.__dict__ if type(a) == str and '__' not in a]
	s = [[f.__dict__.get(a),a] for a in s]
	for a in s:
		if a[0]:
			Place = 0
			Ptrs = []
			Write(o,*a)