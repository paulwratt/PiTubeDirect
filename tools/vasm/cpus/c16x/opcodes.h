"add",OP_GPR,OP_GPR,0,1,0x0000,0x0000,0xff00,2,CPU_ALL,
"add",OP_GPR,OP_REG03IND,0,1,0x0800,0x0808,0xf704,4,CPU_ALL,
"add",OP_GPR,OP_POSTINC03,0,1,0x0800,0x080c,0xf700,5,CPU_ALL,
"add",OP_GPR,OP_IMM3,0,1,0x0800,0x0800,0xf708,6,CPU_ALL,
"add",OP_SFR,OP_IMM16,0,2,0x0600,0x0600,0xf900,7,CPU_ALL,
"add",OP_SFR,OP_ABS,0,2,0x0200,0x0200,0xfd00,8,CPU_ALL,
"add",OP_ABS,OP_SFR,0,2,0x0400,0x0400,0xfb00,29,CPU_ALL,
"addb",OP_BGPR,OP_BGPR,0,1,0x0100,0x0100,0xfe00,2,CPU_ALL,
"addb",OP_BGPR,OP_REG03IND,0,1,0x0900,0x0908,0xf604,4,CPU_ALL,
"addb",OP_BGPR,OP_POSTINC03,0,1,0x0900,0x090c,0xf600,5,CPU_ALL,
"addb",OP_BGPR,OP_IMM3,0,1,0x0900,0x0900,0xf608,6,CPU_ALL,
"addb",OP_BSFR,OP_IMM16,0,2,0x0700,0x0700,0xf800,7,CPU_ALL,
"addb",OP_BSFR,OP_BABS,0,2,0x0300,0x0300,0xfc00,8,CPU_ALL,
"addb",OP_BABS,OP_BSFR,0,2,0x0500,0x0500,0xfa00,29,CPU_ALL,
"addc",OP_GPR,OP_GPR,0,1,0x1000,0x1000,0xef00,2,CPU_ALL,
"addc",OP_GPR,OP_REG03IND,0,1,0x1800,0x1808,0xe704,4,CPU_ALL,
"addc",OP_GPR,OP_POSTINC03,0,1,0x1800,0x180c,0xe700,5,CPU_ALL,
"addc",OP_GPR,OP_IMM3,0,1,0x1800,0x1800,0xe708,6,CPU_ALL,
"addc",OP_SFR,OP_IMM16,0,2,0x1600,0x1600,0xe900,7,CPU_ALL,
"addc",OP_SFR,OP_ABS,0,2,0x1200,0x1200,0xed00,8,CPU_ALL,
"addc",OP_ABS,OP_SFR,0,2,0x1400,0x1400,0xeb00,29,CPU_ALL,
"addcb",OP_BGPR,OP_BGPR,0,1,0x1100,0x1100,0xee00,2,CPU_ALL,
"addcb",OP_BGPR,OP_REG03IND,0,1,0x1900,0x1908,0xe604,4,CPU_ALL,
"addcb",OP_BGPR,OP_POSTINC03,0,1,0x1900,0x190c,0xe600,5,CPU_ALL,
"addcb",OP_BGPR,OP_IMM3,0,1,0x1900,0x1900,0xe608,6,CPU_ALL,
"addcb",OP_BSFR,OP_IMM16,0,2,0x1700,0x1700,0xe800,7,CPU_ALL,
"addcb",OP_BSFR,OP_BABS,0,2,0x1300,0x1300,0xec00,8,CPU_ALL,
"addcb",OP_BABS,OP_BSFR,0,2,0x1500,0x1500,0xea00,29,CPU_ALL,
"and",OP_GPR,OP_GPR,0,1,0x6000,0x6000,0x9f00,2,CPU_ALL,
"and",OP_GPR,OP_REG03IND,0,1,0x6800,0x6808,0x9704,4,CPU_ALL,
"and",OP_GPR,OP_POSTINC03,0,1,0x6800,0x680c,0x9700,5,CPU_ALL,
"and",OP_GPR,OP_IMM3,0,1,0x6800,0x6800,0x9708,6,CPU_ALL,
"and",OP_SFR,OP_IMM16,0,2,0x6600,0x6600,0x9900,7,CPU_ALL,
"and",OP_SFR,OP_ABS,0,2,0x6200,0x6200,0x9d00,8,CPU_ALL,
"and",OP_ABS,OP_SFR,0,2,0x6400,0x6400,0x9b00,29,CPU_ALL,
"andb",OP_BGPR,OP_BGPR,0,1,0x6100,0x6100,0x9e00,2,CPU_ALL,
"andb",OP_BGPR,OP_REG03IND,0,1,0x6900,0x6908,0x9604,4,CPU_ALL,
"andb",OP_BGPR,OP_POSTINC03,0,1,0x6900,0x690c,0x9600,5,CPU_ALL,
"andb",OP_BGPR,OP_IMM3,0,1,0x6900,0x6900,0x9608,6,CPU_ALL,
"andb",OP_BSFR,OP_IMM16,0,2,0x6700,0x6700,0x9800,7,CPU_ALL,
"andb",OP_BSFR,OP_BABS,0,2,0x6300,0x6300,0x9c00,8,CPU_ALL,
"andb",OP_BABS,OP_BSFR,0,2,0x6500,0x6500,0x9a00,29,CPU_ALL,
"ashr",OP_GPR,OP_GPR,0,1,0xac00,0xac00,0x5300,2,CPU_ALL,
"ashr",OP_GPR,OP_IMM4,0,1,0xbc00,0xbc00,0x4300,9,CPU_ALL,
"atomic",OP_IMM3,0,0,1,0xd100,0xd100,0x2ecf,31,CPU_C167,
"band",OP_BADDR,OP_BADDR,0,2,0x6a00,0x6a00,0x9500,10,CPU_ALL,
"bclr",OP_BADDR,0,0,1,0x0e00,0x0e00,0x0100,11,CPU_ALL,
"bcmp",OP_BADDR,OP_BADDR,0,2,0x2a00,0x2a00,0xd500,10,CPU_ALL,
"bfldh",OP_BWORD,OP_IMM8,OP_IMM8,2,0x1a00,0x1a00,0xe500,12,CPU_ALL,
"bfldl",OP_BWORD,OP_IMM8,OP_IMM8,2,0x0a00,0x0a00,0xf500,13,CPU_ALL,
"bmov",OP_BADDR,OP_BADDR,0,2,0x4a00,0x4a00,0xb500,10,CPU_ALL,
"bmovn",OP_BADDR,OP_BADDR,0,2,0x3a00,0x3a00,0xc500,10,CPU_ALL,
"bor",OP_BADDR,OP_BADDR,0,2,0x5a00,0x5a00,0xa500,10,CPU_ALL,
"bset",OP_BADDR,0,0,1,0x0f00,0x0f00,0x0000,11,CPU_ALL,
"bxor",OP_BADDR,OP_BADDR,0,2,0x7a00,0x7a00,0x8500,10,CPU_ALL,
"call",OP_REL,0,0,1,0xbb00,0xbb00,0x4400,16,CPU_ALL,
"calla",OP_CC,OP_JADDR,0,2,0xca00,0xca00,0x350f,14,CPU_ALL,
"calli",OP_CC,OP_REGIND,0,1,0xab00,0xab00,0x5400,15,CPU_ALL,
"callr",OP_REL,0,0,1,0xbb00,0xbb00,0x4400,16,CPU_ALL,
"calls",OP_JADDR,0,0,2,0xda00,0xda00,0x2500,17,CPU_ALL,
"cmp",OP_GPR,OP_GPR,0,1,0x4000,0x4000,0xbf00,2,CPU_ALL,
"cmp",OP_GPR,OP_REG03IND,0,1,0x4800,0x4808,0xb704,4,CPU_ALL,
"cmp",OP_GPR,OP_POSTINC03,0,1,0x4800,0x480c,0xb700,5,CPU_ALL,
"cmp",OP_GPR,OP_IMM3,0,1,0x4800,0x4800,0xb708,6,CPU_ALL,
"cmp",OP_SFR,OP_IMM16,0,2,0x4600,0x4600,0xb900,7,CPU_ALL,
"cmp",OP_SFR,OP_ABS,0,2,0x4200,0x4200,0xbd00,8,CPU_ALL,
"cmpb",OP_BGPR,OP_BGPR,0,1,0x4100,0x4100,0xbe00,2,CPU_ALL,
"cmpb",OP_BGPR,OP_REG03IND,0,1,0x4900,0x4908,0xb604,4,CPU_ALL,
"cmpb",OP_BGPR,OP_POSTINC03,0,1,0x4900,0x490c,0xb600,5,CPU_ALL,
"cmpb",OP_BGPR,OP_IMM3,0,1,0x4900,0x4900,0xb608,6,CPU_ALL,
"cmpb",OP_BSFR,OP_IMM16,0,2,0x4700,0x4700,0xb800,7,CPU_ALL,
"cmpb",OP_BSFR,OP_BABS,0,2,0x4300,0x4300,0xbc00,8,CPU_ALL,
"cmpd1",OP_GPR,OP_IMM4,0,1,0xa000,0xa000,0x5f00,9,CPU_ALL,
"cmpd1",OP_GPR,OP_IMM16,0,2,0xa600,0xa6f0,0x5900,18,CPU_ALL,
"cmpd1",OP_GPR,OP_ABS,0,2,0xa200,0xa2f0,0x5d00,19,CPU_ALL,
"cmpd2",OP_GPR,OP_IMM4,0,1,0xb000,0xb000,0x4f00,9,CPU_ALL,
"cmpd2",OP_GPR,OP_IMM16,0,2,0xb600,0xb6f0,0x4900,18,CPU_ALL,
"cmpd2",OP_GPR,OP_ABS,0,2,0xb200,0xb2f0,0x4d00,19,CPU_ALL,
"cmpi1",OP_GPR,OP_IMM4,0,1,0x8000,0x8000,0x7f00,9,CPU_ALL,
"cmpi1",OP_GPR,OP_IMM16,0,2,0x8600,0x86f0,0x7900,18,CPU_ALL,
"cmpi1",OP_GPR,OP_ABS,0,2,0x8200,0x82f0,0x7d00,19,CPU_ALL,
"cmpi2",OP_GPR,OP_IMM4,0,1,0x9000,0x9000,0x6f00,9,CPU_ALL,
"cmpi2",OP_GPR,OP_IMM16,0,2,0x9600,0x96f0,0x6900,18,CPU_ALL,
"cmpi2",OP_GPR,OP_ABS,0,2,0x9200,0x92f0,0x6d00,19,CPU_ALL,
"cpl",OP_GPR,0,0,1,0x9100,0x9100,0x6e0f,20,CPU_ALL,
"cplb",OP_BGPR,0,0,1,0xb100,0xb100,0x4e0f,20,CPU_ALL,
"diswdt",OP_PROTECTED,0,0,2,0xa55a,0xa55a,0x5aa5,0,CPU_ALL,
"div",OP_GPR,0,0,1,0x4b00,0x4b00,0xb400,21,CPU_ALL,
"divl",OP_GPR,0,0,1,0x6b00,0x6b00,0x9400,21,CPU_ALL,
"divlu",OP_GPR,0,0,1,0x7b00,0x7b00,0x8400,21,CPU_ALL,
"divu",OP_GPR,0,0,1,0x5b00,0x5b00,0xa400,21,CPU_ALL,
"einit",OP_PROTECTED,0,0,2,0xb54a,0xb54a,0x4ab5,0,CPU_ALL,

"extp",OP_GPR,OP_IMM3,0,1,0xdc40,0xdc40,0x2380,32,CPU_C167,
"extp",OP_IMM16,OP_IMM3,0,2,0xd740,0xd740,0x288f,33,CPU_C167,
"extr",OP_IMM3,0,0,1,0xd180,0xd180,0x2e4f,31,CPU_C167,
"extpr",OP_GPR,OP_IMM3,0,1,0xdcc0,0xdcc0,0x2300,32,CPU_C167,
"extpr",OP_IMM16,OP_IMM3,0,2,0xd7c0,0xd7c0,0x280f,33,CPU_C167,
"exts",OP_GPR,OP_IMM3,0,1,0xdc00,0xdc00,0x23c0,32,CPU_C167,
"exts",OP_IMM8,OP_IMM3,0,2,0xd700,0xd700,0x28cf,34,CPU_C167,
"extsr",OP_GPR,OP_IMM3,0,1,0xdc80,0xdc80,0x2340,32,CPU_C167,
"extsr",OP_IMM8,OP_IMM3,0,2,0xd780,0xd780,0x284f,34,CPU_C167,
"idle",OP_PROTECTED,0,0,2,0x8778,0x8778,0x7887,0,CPU_ALL,
"jb",OP_BADDR,OP_REL,0,2,0x8a00,0x8a00,0x7500,22,CPU_ALL,
"jbc",OP_BADDR,OP_REL,0,2,0xaa00,0xaa00,0x5500,22,CPU_ALL,
"jmp",OP_CC,OP_REL,0,1,0x0d00,0x0d00,0x0200,23,CPU_ALL,
"jmpa",OP_CC,OP_JADDR,0,2,0xea00,0xea00,0x150f,14,CPU_ALL,
"jmpi",OP_CC,OP_REGIND,0,1,0x9c00,0x9c00,0x6300,15,CPU_ALL,
"jmpr",OP_CC,OP_REL,0,1,0x0d00,0x0d00,0x0200,23,CPU_ALL,
"jmps",OP_JADDR,0,0,2,0xfa00,0xfa00,0x0500,17,CPU_ALL,
"jnb",OP_BADDR,OP_REL,0,2,0x9a00,0x9a00,0x6500,22,CPU_ALL,
"jnbs",OP_BADDR,OP_REL,0,2,0xba00,0xba00,0x4500,22,CPU_ALL,
"mov",OP_GPR,OP_GPR,0,1,0xf000,0xf000,0x0f00,2,CPU_ALL,
"mov",OP_GPR,OP_IMM4,0,1,0xe000,0xe000,0x1f00,9,CPU_ALL,
"mov",OP_SFR,OP_IMM16,0,2,0xe600,0xe600,0x1900,7,CPU_ALL,
"mov",OP_GPR,OP_REGIND,0,1,0xa800,0xa800,0x5700,2,CPU_ALL,
"mov",OP_GPR,OP_POSTINC,0,1,0x9800,0x9800,0x6700,2,CPU_ALL,
"mov",OP_REGIND,OP_GPR,0,1,0xb800,0xb800,0x4700,3,CPU_ALL,
"mov",OP_PREDEC,OP_GPR,0,1,0x8800,0x8800,0x7700,3,CPU_ALL,
"mov",OP_REGIND,OP_REGIND,0,1,0xc800,0xc800,0x3700,2,CPU_ALL,
"mov",OP_POSTINC,OP_REGIND,0,1,0xd800,0xd800,0x2700,2,CPU_ALL,
"mov",OP_REGIND,OP_POSTINC,0,1,0xe800,0xe800,0x1700,2,CPU_ALL,
"mov",OP_GPR,OP_REGDISP,0,2,0xd400,0xd400,0x2b00,24,CPU_ALL,
"mov",OP_REGDISP,OP_GPR,0,2,0xc400,0xc400,0x3b00,28,CPU_ALL,
"mov",OP_REGIND,OP_ABS,0,2,0x8400,0x8400,0x7bf0,25,CPU_ALL,
"mov",OP_ABS,OP_REGIND,0,2,0x9400,0x9400,0x6bf0,30,CPU_ALL,
"mov",OP_SFR,OP_ABS,0,2,0xf200,0xf200,0x0d00,8,CPU_ALL,
"mov",OP_ABS,OP_SFR,0,2,0xf600,0xf600,0x0900,29,CPU_ALL,
"movb",OP_BGPR,OP_BGPR,0,1,0xf100,0xf100,0x0e00,2,CPU_ALL,
"movb",OP_BGPR,OP_IMM4,0,1,0xe100,0xe100,0x1e00,9,CPU_ALL,
"movb",OP_BSFR,OP_IMM16,0,2,0xe700,0xe700,0x1800,7,CPU_ALL,
"movb",OP_BGPR,OP_REGIND,0,1,0xa900,0xa900,0x5600,2,CPU_ALL,
"movb",OP_BGPR,OP_POSTINC,0,1,0x9900,0x9900,0x6600,2,CPU_ALL,
"movb",OP_REGIND,OP_BGPR,0,1,0xb900,0xb900,0x4600,3,CPU_ALL,
"movb",OP_PREDEC,OP_BGPR,0,1,0x8900,0x8900,0x7600,3,CPU_ALL,
"movb",OP_REGIND,OP_REGIND,0,1,0xc900,0xc900,0x3600,2,CPU_ALL,
"movb",OP_POSTINC,OP_REGIND,0,1,0xd900,0xd900,0x2600,2,CPU_ALL,
"movb",OP_REGIND,OP_POSTINC,0,1,0xe900,0xe900,0x1600,2,CPU_ALL,
"movb",OP_BGPR,OP_REGDISP,0,2,0xf400,0xf400,0x0b00,24,CPU_ALL,
"movb",OP_REGDISP,OP_BGPR,0,2,0xe400,0xe400,0x1b00,28,CPU_ALL,
"movb",OP_REGIND,OP_BABS,0,2,0xa400,0xa400,0x5bf0,25,CPU_ALL,
"movb",OP_BABS,OP_REGIND,0,2,0xb400,0xb400,0x4bf0,30,CPU_ALL,
"movb",OP_BSFR,OP_BABS,0,2,0xf300,0xf300,0x0c00,8,CPU_ALL,
"movb",OP_BABS,OP_BSFR,0,2,0xf700,0xf700,0x0800,29,CPU_ALL,
"movbs",OP_GPR,OP_BGPR,0,1,0xd000,0xd000,0x2f00,3,CPU_ALL,
"movbs",OP_SFR,OP_BABS,0,2,0xd200,0xd200,0x2d00,8,CPU_ALL,
"movbs",OP_ABS,OP_BSFR,0,2,0xd500,0xd500,0x2a00,29,CPU_ALL,
"movbz",OP_GPR,OP_BGPR,0,1,0xc000,0xc000,0x3f00,3,CPU_ALL,
"movbz",OP_SFR,OP_BABS,0,2,0xc200,0xc200,0x3d00,8,CPU_ALL,
"movbz",OP_ABS,OP_BSFR,0,2,0xc500,0xc500,0x3a00,29,CPU_ALL,
"mul",OP_GPR,OP_GPR,0,1,0x0b00,0x0b00,0xf400,2,CPU_ALL,
"mulu",OP_GPR,OP_GPR,0,1,0x1b00,0x1b00,0xe400,2,CPU_ALL,
"neg",OP_GPR,0,0,1,0x8100,0x8100,0x7e0f,20,CPU_ALL,
"negb",OP_BGPR,0,0,1,0xa100,0xa100,0x5e0f,20,CPU_ALL,
"nop",0,0,0,1,0xcc00,0xcc00,0x33ff,1,CPU_ALL,
"or",OP_GPR,OP_GPR,0,1,0x7000,0x7000,0x8f00,2,CPU_ALL,
"or",OP_GPR,OP_REG03IND,0,1,0x7800,0x7808,0x8704,4,CPU_ALL,
"or",OP_GPR,OP_POSTINC03,0,1,0x7800,0x780c,0x8700,5,CPU_ALL,
"or",OP_GPR,OP_IMM3,0,1,0x7800,0x7800,0x8708,6,CPU_ALL,
"or",OP_SFR,OP_IMM16,0,2,0x7600,0x7600,0x8900,7,CPU_ALL,
"or",OP_SFR,OP_ABS,0,2,0x7200,0x7200,0x8d00,8,CPU_ALL,
"or",OP_ABS,OP_SFR,0,2,0x7400,0x7400,0x8b00,29,CPU_ALL,
"orb",OP_BGPR,OP_BGPR,0,1,0x7100,0x7100,0x8e00,2,CPU_ALL,
"orb",OP_BGPR,OP_REG03IND,0,1,0x7900,0x7908,0x8604,4,CPU_ALL,
"orb",OP_BGPR,OP_POSTINC03,0,1,0x7900,0x790c,0x8600,5,CPU_ALL,
"orb",OP_BGPR,OP_IMM3,0,1,0x7900,0x7900,0x8608,6,CPU_ALL,
"orb",OP_BSFR,OP_IMM16,0,2,0x7700,0x7700,0x8800,7,CPU_ALL,
"orb",OP_BSFR,OP_BABS,0,2,0x7300,0x7300,0x8c00,8,CPU_ALL,
"orb",OP_BABS,OP_BSFR,0,2,0x7500,0x7500,0x8a00,29,CPU_ALL,
"pcall",OP_SFR,OP_JADDR,0,2,0xe200,0xe200,0x1d00,8,CPU_ALL,
"pop",OP_SFR,0,0,1,0xfc00,0xfc00,0x0300,26,CPU_ALL,
"prior",OP_GPR,OP_GPR,0,1,0x2b00,0x2b00,0xd400,2,CPU_ALL,
"push",OP_SFR,0,0,1,0xec00,0xec00,0x1300,26,CPU_ALL,
"pwrdn",OP_PROTECTED,0,0,2,0x9768,0x9768,0x6897,0,CPU_ALL,
"ret",0,0,0,1,0xcb00,0xcb00,0x34ff,1,CPU_ALL,
"reti",0,0,0,1,0xfb88,0xfb88,0x0477,1,CPU_ALL,
"retp",OP_SFR,0,0,1,0xeb00,0xeb00,0x1400,26,CPU_ALL,
"rets",0,0,0,1,0xdb00,0xdb00,0x24ff,1,CPU_ALL,
"rol",OP_GPR,OP_GPR,0,1,0x0c00,0x0c00,0xf300,2,CPU_ALL,
"rol",OP_GPR,OP_IMM4,0,1,0x1c00,0x1c00,0xe300,9,CPU_ALL,
"ror",OP_GPR,OP_GPR,0,1,0x2c00,0x2c00,0xd300,2,CPU_ALL,
"ror",OP_GPR,OP_IMM4,0,1,0x3c00,0x3c00,0xc300,9,CPU_ALL,
"scxt",OP_SFR,OP_IMM16,0,2,0xc600,0xc600,0x3900,7,CPU_ALL,
"scxt",OP_SFR,OP_ABS,0,2,0xd600,0xd600,0x2900,8,CPU_ALL,
"shl",OP_GPR,OP_GPR,0,1,0x4c00,0x4c00,0xb300,2,CPU_ALL,
"shl",OP_GPR,OP_IMM4,0,1,0x5c00,0x5c00,0xa300,9,CPU_ALL,
"shr",OP_GPR,OP_GPR,0,1,0x6c00,0x6c00,0x9300,2,CPU_ALL,
"shr",OP_GPR,OP_IMM4,0,1,0x7c00,0x7c00,0x8300,9,CPU_ALL,
"srst",OP_PROTECTED,0,0,2,0xb748,0xb748,0x48b7,0,CPU_ALL,
"srvwdt",OP_PROTECTED,0,0,2,0xa758,0xa758,0x58a7,0,CPU_ALL,
"sub",OP_GPR,OP_GPR,0,1,0x2000,0x2000,0xdf00,2,CPU_ALL,
"sub",OP_GPR,OP_REG03IND,0,1,0x2800,0x2808,0xd704,4,CPU_ALL,
"sub",OP_GPR,OP_POSTINC03,0,1,0x2800,0x280c,0xd700,5,CPU_ALL,
"sub",OP_GPR,OP_IMM3,0,1,0x2800,0x2800,0xd708,6,CPU_ALL,
"sub",OP_SFR,OP_IMM16,0,2,0x2600,0x2600,0xd900,7,CPU_ALL,
"sub",OP_SFR,OP_ABS,0,2,0x2200,0x2200,0xdd00,8,CPU_ALL,
"sub",OP_ABS,OP_SFR,0,2,0x2400,0x2400,0xdb00,29,CPU_ALL,
"subb",OP_BGPR,OP_BGPR,0,1,0x2100,0x2100,0xde00,2,CPU_ALL,
"subb",OP_BGPR,OP_REG03IND,0,1,0x2900,0x2908,0xd604,4,CPU_ALL,
"subb",OP_BGPR,OP_POSTINC03,0,1,0x2900,0x290c,0xd600,5,CPU_ALL,
"subb",OP_BGPR,OP_IMM3,0,1,0x2900,0x2900,0xd608,6,CPU_ALL,
"subb",OP_BSFR,OP_IMM16,0,2,0x2700,0x2700,0xd800,7,CPU_ALL,
"subb",OP_BSFR,OP_BABS,0,2,0x2300,0x2300,0xdc00,8,CPU_ALL,
"subb",OP_BABS,OP_BSFR,0,2,0x2500,0x2500,0xda00,29,CPU_ALL,
"subc",OP_GPR,OP_GPR,0,1,0x3000,0x3000,0xcf00,2,CPU_ALL,
"subc",OP_GPR,OP_REG03IND,0,1,0x3800,0x3808,0xc704,4,CPU_ALL,
"subc",OP_GPR,OP_POSTINC03,0,1,0x3800,0x380c,0xc700,5,CPU_ALL,
"subc",OP_GPR,OP_IMM3,0,1,0x3800,0x3800,0xc708,6,CPU_ALL,
"subc",OP_SFR,OP_IMM16,0,2,0x3600,0x3600,0xc900,7,CPU_ALL,
"subc",OP_SFR,OP_ABS,0,2,0x3200,0x3200,0xcd00,8,CPU_ALL,
"subc",OP_ABS,OP_SFR,0,2,0x3400,0x3400,0xcb00,29,CPU_ALL,
"subcb",OP_BGPR,OP_BGPR,0,1,0x3100,0x3100,0xce00,2,CPU_ALL,
"subcb",OP_BGPR,OP_REG03IND,0,1,0x3900,0x3908,0xc604,4,CPU_ALL,
"subcb",OP_BGPR,OP_POSTINC03,0,1,0x3900,0x390c,0xc600,5,CPU_ALL,
"subcb",OP_BGPR,OP_IMM3,0,1,0x3900,0x3900,0xc608,6,CPU_ALL,
"subcb",OP_BSFR,OP_IMM16,0,2,0x3700,0x3700,0xc800,7,CPU_ALL,
"subcb",OP_BSFR,OP_BABS,0,2,0x3300,0x3300,0xcc00,8,CPU_ALL,
"subcb",OP_BABS,OP_BSFR,0,2,0x3500,0x3500,0xca00,29,CPU_ALL,
"trap",OP_IMM7,0,0,1,0x9b00,0x9b00,0x6401,27,CPU_ALL,
"xor",OP_GPR,OP_GPR,0,1,0x5000,0x5000,0xaf00,2,CPU_ALL,
"xor",OP_GPR,OP_REG03IND,0,1,0x5800,0x5808,0xa704,4,CPU_ALL,
"xor",OP_GPR,OP_POSTINC03,0,1,0x5800,0x580c,0xa700,5,CPU_ALL,
"xor",OP_GPR,OP_IMM3,0,1,0x5800,0x5800,0xa708,6,CPU_ALL,
"xor",OP_SFR,OP_IMM16,0,2,0x5600,0x5600,0xa900,7,CPU_ALL,
"xor",OP_SFR,OP_ABS,0,2,0x5200,0x5200,0xad00,8,CPU_ALL,
"xor",OP_ABS,OP_SFR,0,2,0x5400,0x5400,0xab00,29,CPU_ALL,
"xorb",OP_BGPR,OP_BGPR,0,1,0x5100,0x5100,0xae00,2,CPU_ALL,
"xorb",OP_BGPR,OP_REG03IND,0,1,0x5900,0x5908,0xa604,4,CPU_ALL,
"xorb",OP_BGPR,OP_POSTINC03,0,1,0x5900,0x590c,0xa600,5,CPU_ALL,
"xorb",OP_BGPR,OP_IMM3,0,1,0x5900,0x5900,0xa608,6,CPU_ALL,
"xorb",OP_BSFR,OP_IMM16,0,2,0x5700,0x5700,0xa800,7,CPU_ALL,
"xorb",OP_BSFR,OP_BABS,0,2,0x5300,0x5300,0xac00,8,CPU_ALL,
"xorb",OP_BABS,OP_BSFR,0,2,0x5500,0x5500,0xaa00,29,CPU_ALL,
