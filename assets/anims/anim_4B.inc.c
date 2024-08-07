static const struct Animation anim_4B[] = {
	0x0001, // flags ANIM_FLAG_NOLOOP
	189, // animYTransDivisor
	0, // startFrame
	0, // loopStart
	18, // loopEnd
	ANIMINDEX_NUMPARTS(anim_4B_indices), // unusedBoneCount
	anim_4B_values, // values
	anim_4B_indices, // index
	0 // length
};


// 126
static const u16 anim_4B_indices[] = {
	0x0001, 0x0000, 0x0011, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0012, 0x0001, 0x0000, 0x0001, 
	0x0000, 0x0001, 0x0000, 0x0011, 0x0013, 0x0010, 0x0024, 
	0x0011, 0x0034, 0x0011, 0x0045, 0x0011, 0x0056, 0x0011, 
	0x0067, 0x0011, 0x0078, 0x0001, 0x0044, 0x0001, 0x0089, 
	0x000f, 0x008a, 0x0011, 0x0099, 0x0011, 0x00aa, 0x0011, 
	0x00bb, 0x0001, 0x0000, 0x0001, 0x0000, 0x0011, 0x00cc, 
	0x000d, 0x00dd, 0x0011, 0x00ea, 0x0011, 0x00fb, 0x0001, 
	0x0044, 0x0001, 0x0089, 0x000f, 0x010c, 0x0011, 0x011b, 
	0x0011, 0x012c, 0x0011, 0x013d, 0x0001, 0x0000, 0x0001, 
	0x0000, 0x0011, 0x014e, 0x0011, 0x015f, 0x0011, 0x0170, 
	0x0011, 0x0181, 0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 
	0x0192, 0x0011, 0x0196, 0x0011, 0x01a7, 0x0011, 0x01b8, 
	0x0001, 0x0000, 0x0001, 0x0000, 0x0010, 0x01c9, 0x0011, 
	0x01d9, 0x0011, 0x01ea, 0x0011, 0x01fb, 0x0001, 0x0000, 
	0x0001, 0x0000, 0x0001, 0x0194, 0x0011, 0x020c, 0x0011, 
	0x021d, 0x0011, 0x022e, 0x0001, 0x0000, 0x0001, 0x0000, 
	0x0011, 0x023f, 0x0011, 0x0250, 0x0011, 0x0261, 0x0011, 
	0x0272, 
};

// 643
static const s16 anim_4B_values[] = {
	0x0000, 0x00ac, 0x0092, 0x0074, 0x006e, 0x0077, 0x0081, 0x0087, 0x008b, 0x008f, 
	0x0093, 0x0097, 0x009b, 0x009e, 0x00a2, 0x00a5, 0x00a8, 0x00aa, 0x3ffe, 0x4195, 
	0x4669, 0x48fe, 0x48f9, 0x48d9, 0x4882, 0x47fc, 0x4751, 0x468a, 0x45b0, 0x44cc, 
	0x43e9, 0x430f, 0x4248, 0x419d, 0x4117, 0x40c0, 0x004a, 0x0049, 0x0047, 0x0043, 
	0x003f, 0x003a, 0x0034, 0x002e, 0x0028, 0x0021, 0x001b, 0x0015, 0x000f, 0x000a, 
	0x0006, 0x0002, 0xff5e, 0xff60, 0xff65, 0xff6c, 0xff75, 0xff80, 0xff8d, 0xff9a, 
	0xffa8, 0xffb7, 0xffc5, 0xffd2, 0xffdf, 0xffea, 0xfff3, 0xfffa, 0xffff, 0x173d, 
	0x194f, 0x1aeb, 0x1b2e, 0x1a7a, 0x192f, 0x17af, 0x161c, 0x1462, 0x1292, 0x10bb, 
	0x0eee, 0x0d3c, 0x0bb4, 0x0a67, 0x0965, 0x08bf, 0x007f, 0x007a, 0x0074, 0x006c, 
	0x0065, 0x005c, 0x0054, 0x004c, 0x0043, 0x003b, 0x0032, 0x002a, 0x0022, 0x0019, 
	0x0012, 0x000a, 0x0004, 0x01c7, 0x01b8, 0x01a1, 0x0186, 0x016a, 0x014d, 0x012f, 
	0x0111, 0x00f2, 0x00d4, 0x00b5, 0x0097, 0x0079, 0x005c, 0x0040, 0x0025, 0x000e, 
	0x03d5, 0x03fa, 0x045b, 0x058e, 0x0c39, 0x10f4, 0x0fd1, 0x0e52, 0x0ca1, 0x0a71, 
	0x0815, 0x05aa, 0x034e, 0x011e, 0xff38, 0xfdb8, 0xfcbd, 0x0001, 0xc172, 0xc172, 
	0xc171, 0xc171, 0xc172, 0xc172, 0xc172, 0xc172, 0xc171, 0xc172, 0xc171, 0xc172, 
	0xc171, 0xc172, 0xc171, 0xc458, 0xd408, 0xdf60, 0xe17f, 0xdfe4, 0xdf74, 0xe139, 
	0xe3d6, 0xe695, 0xe991, 0xecab, 0xefc2, 0xf2b6, 0xf568, 0xf7b8, 0xf986, 0xfab2, 
	0xe16a, 0xdf54, 0xddd4, 0xddaf, 0xdddd, 0xddae, 0xdd2a, 0xdc61, 0xdb62, 0xda3c, 
	0xd8ff, 0xd7bb, 0xd67e, 0xd558, 0xd459, 0xd390, 0xd30c, 0xf0c9, 0xf3bb, 0xf66e, 
	0xf7aa, 0xf77c, 0xf5f0, 0xf36b, 0xf065, 0xecff, 0xe95f, 0xe5a7, 0xe1fb, 0xde7f, 
	0xdb56, 0xd8a4, 0xd68b, 0xd530, 0xe131, 0xd7c7, 0xd09f, 0xcf37, 0xd054, 0xd0ae, 
	0xd077, 0xd011, 0xcf93, 0xcf05, 0xce6d, 0xcdce, 0xcd2b, 0xcc85, 0xcbe1, 0xcb41, 
	0xcaae, 0xfffb, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffd, 0xfffd, 0xfffd, 0xfffe, 
	0xfffe, 0xffff, 0xffff, 0xffff, 0xfbf5, 0xfa85, 0xf994, 0xf928, 0xf8e9, 0xf8c4, 
	0xf8b0, 0xf8a9, 0xf8ab, 0xf8b4, 0xf8c4, 0xf8d9, 0xf8f1, 0xf90d, 0xf92b, 0xf94b, 
	0xf969, 0xf317, 0xefd9, 0xed55, 0xecc9, 0xed31, 0xed8c, 0xed8c, 0xed8c, 0xed8c, 
	0xed8c, 0xed8c, 0xed8c, 0xed8c, 0xed8c, 0xed8c, 0xed8c, 0xed8d, 0xc172, 0xc172, 
	0xc171, 0xc171, 0xc172, 0xc172, 0xc172, 0xc172, 0xc171, 0xc172, 0xc171, 0xc172, 
	0xc171, 0xc172, 0xc171, 0x110d, 0x3559, 0x42f9, 0x3d40, 0x335c, 0x270c, 0x18b0, 
	0x08b5, 0xf797, 0xe5d7, 0x53fe, 0x4299, 0x323b, 0x238d, 0x1727, 0x0d9b, 0x0777, 
	0x4086, 0x3087, 0x293b, 0x29c6, 0x2b4f, 0x2daf, 0x30c0, 0x3459, 0x3855, 0x3c8d, 
	0x3f28, 0x3af0, 0x36f4, 0x335b, 0x304a, 0x2dea, 0x2c61, 0xcd32, 0xf564, 0x054f, 
	0x006d, 0xf774, 0xebd3, 0xddf4, 0xce50, 0xbd6f, 0xabe5, 0x1a49, 0x0936, 0xf940, 
	0xeaef, 0xdebd, 0xd543, 0xcf26, 0xdbb7, 0xce5f, 0xc6a9, 0xc544, 0xc40d, 0xc347, 
	0xc2e2, 0xc2d1, 0xc306, 0xc372, 0xc406, 0xc4b6, 0xc571, 0xc62a, 0xc6d3, 0xc75e, 
	0xc7bb, 0x0853, 0x0c75, 0x0e41, 0x0e13, 0x0d90, 0x0cc6, 0x0bc1, 0x0a8f, 0x093d, 
	0x07d7, 0x066a, 0x0504, 0x03b2, 0x0280, 0x017b, 0x00b1, 0x002e, 0x01f4, 0x00af, 
	0xffee, 0xff98, 0xff67, 0xff4c, 0xff3f, 0xff3c, 0xff40, 0xff4b, 0xff5a, 0xff6e, 
	0xff84, 0xff9e, 0xffb9, 0xffd4, 0xffef, 0xf19a, 0xf3fa, 0xf570, 0xf617, 0xf675, 
	0xf6aa, 0xf6c4, 0xf6ca, 0xf6c1, 0xf6ac, 0xf68e, 0xf668, 0xf63b, 0xf60a, 0xf5d5, 
	0xf59e, 0xf56b, 0xbfc7, 0xbfeb, 0xbf60, 0xbb4c, 0xf4bb, 0xf67a, 0xf83a, 0xf7cf, 
	0xf749, 0xf1fb, 0xee4d, 0xeb33, 0xe838, 0xe536, 0xe201, 0xdf1c, 0xdc91, 0xda67, 
	0xd8a8, 0xd75e, 0xd691, 0xee98, 0xedfe, 0xed3a, 0xec76, 0xebdc, 0xed16, 0xed16, 
	0xed0e, 0xecfe, 0xece9, 0xecd0, 0xecb4, 0xec99, 0xec7e, 0xec66, 0xec53, 0xec46, 
	0x8dab, 0x8c49, 0x8ae7, 0x8c62, 0x8b9d, 0x94ac, 0x9856, 0x9c08, 0xa01c, 0xa43f, 
	0xa80a, 0xab71, 0xae69, 0xb0ea, 0xb2ec, 0xb466, 0xb54f, 0x4cad, 0x4c39, 0x4c30, 
	0x526e, 0x4928, 0x4998, 0x4663, 0x4269, 0x3e5e, 0x3a10, 0x35b3, 0x3178, 0x2d93, 
	0x2a34, 0x278f, 0x25d5, 0x00cc, 0x00f1, 0x010b, 0x0111, 0x0101, 0x0116, 0x0112, 
	0x010e, 0x0109, 0x0103, 0x00fd, 0x00f6, 0x00f0, 0x00ea, 0x00e5, 0x00e1, 0x00de, 
	0xffb0, 0xffc4, 0xffdb, 0xffe2, 0xffd1, 0xffe8, 0xffe4, 0xffdf, 0xffd9, 0xffd3, 
	0xffcd, 0xffc8, 0xffc3, 0xffbf, 0xffbc, 0xffba, 0xffb9, 0xc3e0, 0xb994, 0xb0ee, 
	0xaeaf, 0xb44a, 0xacb4, 0xadfe, 0xafae, 0xb18b, 0xb3b5, 0xb5df, 0xb7f6, 0xb9e9, 
	0xbba8, 0xbd22, 0xbe44, 0xbeff, 0x0d03, 0x0b26, 0x0915, 0x07bc, 0x075c, 0x0837, 
	0x09e6, 0x0bc7, 0x0dca, 0x0fde, 0x11f3, 0x13f7, 0x15da, 0x178b, 0x18f9, 0x1a13, 
	0x1ac8, 0x0c6d, 0x11db, 0x1680, 0x17e7, 0x17c6, 0x175d, 0x16da, 0x1645, 0x15a1, 
	0x14f5, 0x1448, 0x139e, 0x12ff, 0x126f, 0x11f5, 0x1196, 0x1159, 0xafe6, 0xa39a, 
	0x98e7, 0x94e6, 0x9432, 0x9637, 0x9896, 0x9a90, 0x9cc4, 0x9f19, 0xa17b, 0xa3d4, 
	0xa60c, 0xa80f, 0xa9c5, 0xab1a, 0xabf6, 0x2bc9, 0x3f59, 0x4f71, 0x53e3, 0x4bd2, 
	0x4703, 0x4386, 0x3f8e, 0x3b40, 0x36c3, 0x323e, 0x2dd6, 0x29b4, 0x25fc, 0x22d6, 
	0x2068, 0x1ed7, 0x0803, 0x08c3, 0x09ba, 0x08ff, 0x06cf, 0x09b3, 0x0982, 0x08fb, 
	0x082f, 0x072f, 0x060d, 0x04d9, 0x03a5, 0x0283, 0x0183, 0x00b7, 0x0030, 0x021c, 
	0x0205, 0x01de, 0x01b2, 0x0184, 0x0154, 0x0123, 0x00f1, 0x00bf, 0x008d, 0x005b, 
	0x0029, 0xfff9, 0xffc9, 0xff9b, 0xff6f, 0xff48, 0xb85f, 0xabee, 0xa487, 0xa41a, 
	0xab4f, 0xaf00, 0xb18e, 0xb3f4, 0xb6dc, 0xb9db, 0xbcd8, 0xbfbd, 0xc271, 0xc4dc, 
	0xc6e7, 0xc87a, 0xc97d, 
};

