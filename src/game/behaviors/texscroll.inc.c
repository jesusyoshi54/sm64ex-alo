#include "engine/math_util.h"

/* SCROLLING BHVS */
#define SCROLL_X 0
#define SCROLL_Y 1
#define SCROLL_Z 2
#define SCROLL_UV_X 4
#define SCROLL_UV_Y 5

/* SCROLLING TYPES */
#define MODE_SCROLL_UV 0
#define MODE_SCROLL_SINE 1
#define MODE_SCROLL_JUMP 2

// typedef struct {
// #ifndef GBI_FLOATS
	// short		ob[3];	/* x, y, z */
// #else
	// float		ob[3];	/* x, y, z */
// #endif
	// unsigned short	flag;
	// short		tc[2];	/* texture coord */
	// signed char	n[3];	/* normal */
	// unsigned char   a;      /* alpha  */
// } Vtx_tn;

// typedef union {
    // Vtx_t		v;  /* Use this one for colors  */
    // Vtx_tn              n;  /* Use this one for normals */
    // long long int	force_structure_alignment;
// } Vtx;
extern Vtx *ScrollTargets[];
#ifndef F3DEX_GBI_2E
static void shift_UV_NORMAL(u32 vert, u16 vertcount, s16 speed, u16 bhv) {
    u16 overflownum = 0x1000;
    u32 i;
    Vtx *verts = segmented_to_virtual(ScrollTargets[vert]);
	u16 *Varray;
	s16 correction=0;
	if (verts[0].n.flag * absi(speed) > overflownum) {
		correction = (u16) overflownum * signum_positive(speed);
		verts[0].n.flag = 0;
	}
    for (i = 0; i < vertcount; i++) {
		Varray = &verts[i].n;
		if (correction==0)
			Varray[bhv] += speed;
		else
			Varray[bhv] -= correction;
    }
    verts[0].n.flag++;
}

static void shift_UV_SINE(u32 vert, u16 vertcount, s16 speed, u16 bhv) {
    u32 i;
    Vtx *verts = segmented_to_virtual(ScrollTargets[vert]);
	u16 cycle = o->oFaceAngleRoll*180/ 0x8000;
	u16 *Varray;
    for (i = 0; i < vertcount; i++) {
		Varray = &verts[i].n;
        Varray[bhv] += sins(verts[0].n.flag) * speed;
    }
    verts[0].n.flag += cycle * 0x20;
}

static void shift_uv(u8 scrollbhv, u32 vert, u16 vertcount, s16 spd, u16 scrolltype) {
    switch (scrollbhv) {
        case MODE_SCROLL_UV:
			shift_UV_NORMAL(vert, vertcount, spd, scrolltype);
			break;
        case MODE_SCROLL_SINE:
        case MODE_SCROLL_JUMP:
			shift_UV_SINE(vert, vertcount, spd, scrolltype);
            break;
    }
}
#else

static void shift_UV_NORMAL(u32 vert, u16 vertcount, s16 speed, u16 bhv) {
	u16 overflownum = 0x1000;
    u16 i;
	Vtx *verts = ScrollTargets[vert];
	u16 correction=0;
	u16 offset=o->oFaceAnglePitch*180/ 0x8000;
	vertcount=vertcount+(vertcount-1+offset)/15; // PC has padding between vert arrays that I need to compensate for
	if (verts[0].n.flag * absi(speed) > overflownum) {
		correction = overflownum * signum_positive(speed);
		verts[0].n.flag = 0;
	}
	if (bhv<4){
		for (i = 0; i < vertcount; i++) {
			if (correction==0){
				verts[i].n.ob[bhv] += (float) speed;
			}else
				verts[i].n.ob[bhv] -= (float) correction;
		}
	}
	else{
		for (i = 0; i < vertcount; i++) {
			if (correction==0)
				verts[i].n.tc[bhv-4] += speed;
			else
				verts[i].n.tc[bhv-4] -= correction;
		}
	}
    verts[0].n.flag++;
	
}

static void shift_UV_SINE(u32 vert, u16 vertcount, s16 speed, u16 bhv) {
    u32 i;
    Vtx *verts = ScrollTargets[vert];
	u16 cycle = o->oFaceAngleRoll*180/ 0x8000;
	u16 offset=o->oFaceAnglePitch*180/ 0x8000;
	vertcount=vertcount+(vertcount-1+offset)/15; // PC has padding between vert arrays that I need to compensate for
	//float pos
	if (bhv<4){
		for (i = 0; i < vertcount; i++) {
			verts[i].n.ob[bhv] += (float) (sins(verts[0].n.flag) * speed);
		}
	}else{
		for (i = 0; i < vertcount; i++) {
			verts[i].n.tc[bhv-4] += sins(verts[0].n.flag) * speed;
		}
	}
    verts[0].n.flag += cycle * 0x20;
}


static void shift_uv(u8 scrollbhv, u32 vert, u16 vertcount, s16 spd, u16 scrolltype) {
    switch (scrollbhv) {
        case MODE_SCROLL_UV:
			shift_UV_NORMAL(vert, vertcount, spd, scrolltype);
			break;
        case MODE_SCROLL_SINE:
        case MODE_SCROLL_JUMP:
			shift_UV_SINE(vert, vertcount, spd, scrolltype);
            break;
    }
}
#endif
// format I will use is bparam=addr,z=vert amount,x=spd,y=bhv,ry=type, rz=cycle, rx=offset
void uv_update_scroll() {
	shift_uv(/*scrolling type*/ o->oFaceAngleYaw, /*index in vert ptr arr*/ o->oBehParams, 
	/*number of verts*/ (u16) o->oPosZ, /*speed*/ (s16) o->oPosX, /*type*/ (u16) o->oPosY);
}