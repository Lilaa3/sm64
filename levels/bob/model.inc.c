Lights1 bob_dl_Area_1_lights = gdSPDefLights1(
	0x0, 0x7F, 0x0,
	0x0, 0xFF, 0x0, 0x49, 0x49, 0x49);

Lights1 bob_dl_Area_2_lights = gdSPDefLights1(
	0x7F, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0x49, 0x49, 0x49);

Lights1 bob_dl_Area_3_lights = gdSPDefLights1(
	0x0, 0x7F, 0x7F,
	0x0, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 bob_dl_Area_4_lights = gdSPDefLights1(
	0x5C, 0x0, 0x7F,
	0xBC, 0x0, 0xFF, 0x49, 0x49, 0x49);

Vtx bob_dl_Level_Mesh_mesh_layer_1_vtx_0[4] = {
	{{ {-500, 0, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, -500}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-500, 0, -500}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Vtx bob_dl_Level_Mesh_2_mesh_layer_1_vtx_0[4] = {
	{{ {-500, 0, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, -500}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-500, 0, -500}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Vtx bob_dl_Level_Mesh_3_mesh_layer_1_vtx_0[4] = {
	{{ {-500, 0, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, -500}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-500, 0, -500}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Vtx bob_dl_Level_Mesh_4_mesh_layer_1_vtx_0[4] = {
	{{ {-500, 0, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {500, 0, -500}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-500, 0, -500}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx bob_dl_Level_Mesh_mesh_layer_1[] = {
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD),
	gsSPSetLights1(bob_dl_Area_1_lights),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 2, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPVertex(bob_dl_Level_Mesh_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_CD_MAGICSQ | G_AD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx bob_dl_Level_Mesh_2_mesh_layer_1[] = {
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD),
	gsSPSetLights1(bob_dl_Area_2_lights),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 2, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPVertex(bob_dl_Level_Mesh_2_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_CD_MAGICSQ | G_AD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx bob_dl_Level_Mesh_3_mesh_layer_1[] = {
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD),
	gsSPSetLights1(bob_dl_Area_3_lights),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 2, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPVertex(bob_dl_Level_Mesh_3_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_CD_MAGICSQ | G_AD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx bob_dl_Level_Mesh_4_mesh_layer_1[] = {
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD),
	gsSPSetLights1(bob_dl_Area_4_lights),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 2, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPVertex(bob_dl_Level_Mesh_4_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 19, G_CD_MAGICSQ | G_AD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_1PRIMITIVE),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

