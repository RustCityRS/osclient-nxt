// libs/graphics/runetek7/materials/shaders/ShaderVariable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShaderVariable.h"

namespace jag::graphics {
    // 0x103bbe1d0, 8704 bytes, __common; set at startup by ___cxx_global_var_init.85
    render::ShaderProgramVariable _shaderVariables[272] = {
        /* [0] */ ShaderProgramVariable("uModelMatrix", 30, 0, 14),
        /* [1] */ ShaderProgramVariable("uWorldMatrix", 30, 0, 14),
        /* [2] */ ShaderProgramVariable("uViewMatrix", 30, 0, 14),
        /* [3] */ ShaderProgramVariable("uInvViewMatrix", 30, 0, 14),
        /* [4] */ ShaderProgramVariable("uProjectionMatrix", 30, 0, 14),
        /* [5] */ ShaderProgramVariable("uInvProjectionMatrix", 30, 0, 14),
        /* [6] */ ShaderProgramVariable("uViewProjMatrix", 30, 0, 14),
        /* [7] */ ShaderProgramVariable("uInvViewProjMatrix", 30, 0, 14),
        /* [8] */ ShaderProgramVariable("uZBufferParams", 2, 0, 14),
        /* [9] */ ShaderProgramVariable("uSceneProjectionMatrix", 30, 0, 14),
        /* [10] */ ShaderProgramVariable("uSceneInvViewMatrix", 30, 0, 14),
        /* [11] */ ShaderProgramVariable("uSceneInvProjMatrix", 30, 0, 14),
        /* [12] */ ShaderProgramVariable("uSceneInvViewProjMatrix", 30, 0, 14),
        /* [13] */ ShaderProgramVariable("uInvSunDirection", 2, 0, 14),
        /* [14] */ ShaderProgramVariable("uSunColour", 2, 0, 14),
        /* [15] */ ShaderProgramVariable("uAntiSunColour", 2, 0, 14),
        /* [16] */ ShaderProgramVariable("uAmbientColour", 2, 0, 14),
        /* [17] */ ShaderProgramVariable("uSpecularFactor", 0, 0, 14),
        /* [18] */ ShaderProgramVariable("uDiffuseMap", 9, 0, 14),
        /* [19] */ ShaderProgramVariable("uMaskMap", 9, 0, 14),
        /* [20] */ ShaderProgramVariable("uGlobalEnvironmentMap", 9, 0, 14),
        /* [21] */ ShaderProgramVariable("uAtlasMeta", 3, 0, 14),
        /* [22] */ ShaderProgramVariable("uTextureAtlas", 9, 0, 14),
        /* [23] */ ShaderProgramVariable("uTextureAtlasSettings", 9, 0, 14),
        /* [24] */ ShaderProgramVariable("uTextureAnimationTime", 0, 0, 14),
        /* [25] */ ShaderProgramVariable("uAlphaTestThreshold", 0, 0, 14),
        /* [26] */ ShaderProgramVariable("uSmoothSkinning", 0, 0, 14),
        /* [27] */ ShaderProgramVariable("uBoneTransforms", 3, 0, 14),
        /* [28] */ ShaderProgramVariable("uLabelDeltas", 3, 0, 14),
        /* [29] */ ShaderProgramVariable("uBillboardLabelTransforms", 3, 0, 14),
        /* [30] */ ShaderProgramVariable("uSunlightViewMatrix", 30, 0, 14),
        /* [31] */ ShaderProgramVariable("uCascadeFrustumViewDepths", 3, 0, 14),
        /* [32] */ ShaderProgramVariable("uMappingParams", 3, 0, 14),
        /* [33] */ ShaderProgramVariable("uSunlightFadeAttenParams", 3, 0, 14),
        /* [34] */ ShaderProgramVariable("uSunlightProjTexMatScale", 3, 0, 14),
        /* [35] */ ShaderProgramVariable("uSunlightProjTexMatOffset", 3, 0, 14),
        /* [36] */ ShaderProgramVariable("uSunlightViewProjTexMatrix", 30, 0, 14),
        /* [37] */ ShaderProgramVariable("uCascadeWorldBoundingSpheres", 3, 0, 14),
        /* [38] */ ShaderProgramVariable("uCascadeMinAtlasExtents", 3, 0, 14),
        /* [39] */ ShaderProgramVariable("uCascadeMaxAtlasExtents", 3, 0, 14),
        /* [40] */ ShaderProgramVariable("uCascadeSplitSelectionFlags", 3, 0, 14),
        /* [41] */ ShaderProgramVariable("uLowShadowQualityDepth", 0, 0, 14),
        /* [42] */ ShaderProgramVariable("uShadowQuality", 0, 0, 14),
        /* [43] */ ShaderProgramVariable("uCascadeViewportScale", 0, 0, 14),
        /* [44] */ ShaderProgramVariable("uSunlightShadowMap", 9, 0, 14),
        /* [45] */ ShaderProgramVariable("uSunlightShadowTranslucencyMap", 9, 0, 14),
        /* [46] */ ShaderProgramVariable("uShadowBuffer", 9, 0, 14),
        /* [47] */ ShaderProgramVariable("uPointLightShadowMap", 9, 0, 14),
        /* [48] */ ShaderProgramVariable("uPointLightPositions", 3, 0, 14),
        /* [49] */ ShaderProgramVariable("uPointLightColours", 3, 0, 14),
        /* [50] */ ShaderProgramVariable("uPointLightCount", 0, 0, 14),
        /* [51] */ ShaderProgramVariable("uFogColour", 3, 0, 14),
        /* [52] */ ShaderProgramVariable("uFogParams", 3, 0, 14),
        /* [53] */ ShaderProgramVariable("uGlobalEnvironmentMappingParams", 3, 0, 14),
        /* [54] */ ShaderProgramVariable("uHorizonColourFalloff", 3, 0, 14),
        /* [55] */ ShaderProgramVariable("uBetaDashR", 2, 0, 14),
        /* [56] */ ShaderProgramVariable("uBetaDashM", 2, 0, 14),
        /* [57] */ ShaderProgramVariable("uExtinctionC", 2, 0, 14),
        /* [58] */ ShaderProgramVariable("uMieGCoefficients", 3, 0, 14),
        /* [59] */ ShaderProgramVariable("uOutscatteringAmount", 2, 0, 14),
        /* [60] */ ShaderProgramVariable("uInscatteringAmount", 2, 0, 14),
        /* [61] */ ShaderProgramVariable("uScatteringTintColour", 2, 0, 14),
        /* [62] */ ShaderProgramVariable("uScatteringParameters", 3, 0, 14),
        /* [63] */ ShaderProgramVariable("uScatteringBoundary", 3, 0, 14),
        /* [64] */ ShaderProgramVariable("uIrradianceSHCoefs", 3, 0, 14),
        /* [65] */ ShaderProgramVariable("uReflectionMap", 9, 0, 14),
        /* [66] */ ShaderProgramVariable("uRefractionMap", 9, 0, 14),
        /* [67] */ ShaderProgramVariable("uRefractionDepth", 9, 0, 14),
        /* [68] */ ShaderProgramVariable("uRefractionParams", 3, 0, 14),
        /* [69] */ ShaderProgramVariable("uRefractionViewportLookupScale", 3, 0, 14),
        /* [70] */ ShaderProgramVariable("uCausticsMap", 9, 0, 14),
        /* [71] */ ShaderProgramVariable("uCausticsMapSize", 1, 0, 14),
        /* [72] */ ShaderProgramVariable("uCausticsComputeResolution", 1, 0, 14),
        /* [73] */ ShaderProgramVariable("uCausticsPlaneHeight", 0, 0, 14),
        /* [74] */ ShaderProgramVariable("uCausticsViewProjMatrix", 30, 0, 14),
        /* [75] */ ShaderProgramVariable("uCausticsScale", 0, 0, 14),
        /* [76] */ ShaderProgramVariable("uCausticsRefractionScale", 0, 0, 14),
        /* [77] */ ShaderProgramVariable("uCausticsFade", 3, 0, 14),
        /* [78] */ ShaderProgramVariable("uCausticsOverWaterFade", 1, 0, 14),
        /* [79] */ ShaderProgramVariable("uViewportLookupScale", 3, 0, 14),
        /* [80] */ ShaderProgramVariable("uViewportOffsetScale", 3, 0, 14),
        /* [81] */ ShaderProgramVariable("uFullScreenLookupScale", 3, 0, 14),
        /* [82] */ ShaderProgramVariable("uViewportMapTextureSize", 1, 0, 14),
        /* [83] */ ShaderProgramVariable("uTexelSize", 1, 0, 14),
        /* [84] */ ShaderProgramVariable("uCoordOffset", 1, 0, 14),
        /* [85] */ ShaderProgramVariable("uCoordScale", 1, 0, 14),
        /* [86] */ ShaderProgramVariable("uReproject", 0, 0, 14),
        /* [87] */ ShaderProgramVariable("uClipPlane", 3, 0, 14),
        /* [88] */ ShaderProgramVariable("uPointLightIndicesMap", 9, 0, 14),
        /* [89] */ ShaderProgramVariable("uPointLightIndicesLevel", 0, 0, 14),
        /* [90] */ ShaderProgramVariable("uPointLightIndicesClampLimits", 3, 0, 14),
        /* [91] */ ShaderProgramVariable("uPointLightData", 3, 0, 14),
        /* [92] */ ShaderProgramVariable("uSkyBoxMap1", 9, 0, 14),
        /* [93] */ ShaderProgramVariable("uSkyBoxMap2", 9, 0, 14),
        /* [94] */ ShaderProgramVariable("uSkyBoxInterpolant", 0, 0, 14),
        /* [95] */ ShaderProgramVariable("uSkyBoxUseFirst", 9, 0, 14),
        /* [96] */ ShaderProgramVariable("uSkyBoxUseSecond", 9, 0, 14),
        /* [97] */ ShaderProgramVariable("uExposure", 0, 0, 14),
        /* [98] */ ShaderProgramVariable("uViewportMap", 9, 0, 14),
        /* [99] */ ShaderProgramVariable("uParams", 3, 0, 14),
        /* [100] */ ShaderProgramVariable("uZFar", 0, 0, 14),
        /* [101] */ ShaderProgramVariable("uMinSamples", 0, 0, 14),
        /* [102] */ ShaderProgramVariable("uBaseSamples", 0, 0, 14),
        /* [103] */ ShaderProgramVariable("uSSAOMap", 9, 0, 14),
        /* [104] */ ShaderProgramVariable("uGeometryAwareBlurParams", 1, 0, 14),
        /* [105] */ ShaderProgramVariable("uColorTexture", 9, 0, 14),
        /* [106] */ ShaderProgramVariable("uNormalTexture", 9, 0, 14),
        /* [107] */ ShaderProgramVariable("uDepthTexture", 9, 0, 14),
        /* [108] */ ShaderProgramVariable("uNoiseTexture", 9, 0, 14),
        /* [109] */ ShaderProgramVariable("uInverseNoiseTexSize", 1, 0, 14),
        /* [110] */ ShaderProgramVariable("uSSAOTexture", 9, 0, 14),
        /* [111] */ ShaderProgramVariable("uCameraPosition", 2, 0, 14),
        /* [112] */ ShaderProgramVariable("uTick", 0, 0, 14),
        /* [113] */ ShaderProgramVariable("uTextureStep", 1, 0, 14),
        /* [114] */ ShaderProgramVariable("uTint", 3, 0, 14),
        /* [115] */ ShaderProgramVariable("uHighlightScale", 0, 0, 14),
        /* [116] */ ShaderProgramVariable("uFade", 0, 0, 14),
        /* [117] */ ShaderProgramVariable("uGridSize", 0, 0, 14),
        /* [118] */ ShaderProgramVariable("uVertexScale", 0, 0, 14),
        /* [119] */ ShaderProgramVariable("sTexture", 9, 0, 14),
        /* [120] */ ShaderProgramVariable("uWaterFeatureFlags", 3, 0, 14),
        /* [121] */ ShaderProgramVariable("uWaterTickFade", 1, 0, 14),
        /* [122] */ ShaderProgramVariable("uWaterFoamScaleFoamDepth", 1, 0, 14),
        /* [123] */ ShaderProgramVariable("uWaterRotMatrix", 29, 0, 14),
        /* [124] */ ShaderProgramVariable("uWaterUVRotationMatrix", 29, 0, 14),
        /* [125] */ ShaderProgramVariable("uWaterFlow_FlowSpeedInv_YTranslate", 3, 0, 14),
        /* [126] */ ShaderProgramVariable("uWaterColour", 3, 0, 14),
        /* [127] */ ShaderProgramVariable("uWaterWaveHeight_WaveLengthInv_GridRes_EdgeFadeSize", 3, 0, 14),
        /* [128] */ ShaderProgramVariable("uWaterNormalMapTextureScales_FlowNoiseScale", 3, 0, 14),
        /* [129] */ ShaderProgramVariable("uWaterDepthFadeAlphaInv_FadeWaveHeightInv_Offset", 2, 0, 14),
        /* [130] */ ShaderProgramVariable("uWaterReflectionStrength", 0, 0, 14),
        /* [131] */ ShaderProgramVariable("uWaterNormalBRDFParams", 3, 0, 14),
        /* [132] */ ShaderProgramVariable("uWaterSpecularColour", 2, 0, 14),
        /* [133] */ ShaderProgramVariable("uWaterMaskStrength", 0, 0, 14),
        /* [134] */ ShaderProgramVariable("uWaterReflectionMapContribution", 0, 0, 14),
        /* [135] */ ShaderProgramVariable("uWaterTextureFoam", 9, 0, 14),
        /* [136] */ ShaderProgramVariable("uWaterExtinctionRGBDepthMetres", 2, 0, 14),
        /* [137] */ ShaderProgramVariable("uWaterExtinctionOpaqueWaterColour", 2, 0, 14),
        /* [138] */ ShaderProgramVariable("uWaterExtinctionVisibilityMetres", 0, 0, 14),
        /* [139] */ ShaderProgramVariable("uWaterNormalMapTexture0", 3, 0, 14),
        /* [140] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].flowSpeed_spareyzw", 3, 0, 14),
        /* [141] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].uvScale_uvOffset", 3, 0, 14),
        /* [142] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].uvRotation", 28, 0, 14),
        /* [143] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].flowRotation", 28, 0, 14),
        /* [144] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].flowSpeed_spareyzw", 3, 0, 14),
        /* [145] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].uvScale_uvOffset", 3, 0, 14),
        /* [146] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].uvRotation", 28, 0, 14),
        /* [147] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].flowRotation", 28, 0, 14),
        /* [148] */ ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[0]", 3, 0, 14),
        /* [149] */ ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[0]", 3, 0, 14),
        /* [150] */ ShaderProgramVariable("uWaterNormalMapTexture1", 3, 0, 14),
        /* [151] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].flowSpeed_spareyzw", 3, 0, 14),
        /* [152] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].uvScale_uvOffset", 3, 0, 14),
        /* [153] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].uvRotation", 28, 0, 14),
        /* [154] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].flowRotation", 28, 0, 14),
        /* [155] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].flowSpeed_spareyzw", 3, 0, 14),
        /* [156] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].uvScale_uvOffset", 3, 0, 14),
        /* [157] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].uvRotation", 28, 0, 14),
        /* [158] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].flowRotation", 28, 0, 14),
        /* [159] */ ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[1]", 3, 0, 14),
        /* [160] */ ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[1]", 3, 0, 14),
        /* [161] */ ShaderProgramVariable("uWaterNormalMapTexture2", 3, 0, 14),
        /* [162] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].flowSpeed_spareyzw", 3, 0, 14),
        /* [163] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].uvScale_uvOffset", 3, 0, 14),
        /* [164] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].uvRotation", 28, 0, 14),
        /* [165] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].flowRotation", 28, 0, 14),
        /* [166] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].flowSpeed_spareyzw", 3, 0, 14),
        /* [167] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].uvScale_uvOffset", 3, 0, 14),
        /* [168] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].uvRotation", 28, 0, 14),
        /* [169] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].flowRotation", 28, 0, 14),
        /* [170] */ ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[2]", 3, 0, 14),
        /* [171] */ ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[2]", 3, 0, 14),
        /* [172] */ ShaderProgramVariable("uWaterStillWaterNormalStrength_spareyzw", 3, 0, 14),
        /* [173] */ ShaderProgramVariable("uWaterEmissiveMapTexture", 3, 0, 14),
        /* [174] */ ShaderProgramVariable("uWaterEmissiveColourEmissiveSource", 3, 0, 14),
        /* [175] */
        ShaderProgramVariable("uEmissiveScale_MapRefractionDepth_EmissiveMapMode_EmissiveMapExists", 3, 0, 14),
        /* [176] */ ShaderProgramVariable("uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale", 3, 0, 14),
        /* [177] */ ShaderProgramVariable("uEmissiveMapScale_EmissiveUVMode", 1, 0, 14),
        /* [178] */ ShaderProgramVariable("uEmissiveBlend", 0, 0, 14),
        /* [179] */ ShaderProgramVariable("sDepthTex", 9, 0, 14),
        /* [180] */ ShaderProgramVariable("sDitherTex", 9, 0, 14),
        /* [181] */ ShaderProgramVariable("sNoiseTex", 9, 0, 14),
        /* [182] */ ShaderProgramVariable("uMieG", 3, 0, 14),
        /* [183] */ ShaderProgramVariable("uMieGSky", 3, 0, 14),
        /* [184] */ ShaderProgramVariable("uVolumetricScatteringParameters", 3, 0, 14),
        /* [185] */ ShaderProgramVariable("uSampleCount", 9, 0, 14),
        /* [186] */ ShaderProgramVariable("uTime", 0, 0, 14),
        /* [187] */ ShaderProgramVariable("uVolumetricLitFogColour", 2, 0, 14),
        /* [188] */ ShaderProgramVariable("uVolumetricUnlitFogColour", 2, 0, 14),
        /* [189] */ ShaderProgramVariable("uVolumetricDitherMat", 30, 0, 14),
        /* [190] */ ShaderProgramVariable("uGroundFogHeight_Falloff", 3, 0, 14),
        /* [191] */ ShaderProgramVariable("u3DNoiseFrequency_Strength", 3, 0, 14),
        /* [192] */ ShaderProgramVariable("u3DNoiseWind_Power", 3, 0, 14),
        /* [193] */ ShaderProgramVariable("uZBufferParams", 3, 0, 14),
        /* [194] */ ShaderProgramVariable("uBilateralBlurDirectionAndDepthFalloff", 3, 0, 14),
        /* [195] */ ShaderProgramVariable("sHalfResSourceTex", 9, 0, 14),
        /* [196] */ ShaderProgramVariable("sHalfResDepthTex", 9, 0, 14),
        /* [197] */ ShaderProgramVariable("uParticleInvSoftScale", 0, 0, 14),
        /* [198] */ ShaderProgramVariable("uDebugReturn", 0, 0, 14),
        /* [199] */ ShaderProgramVariable("uDebugInstanceColour", 3, 0, 14),
        /* [200] */ ShaderProgramVariable("uDebugTexelDensity", 3, 0, 14),
        /* [201] */ ShaderProgramVariable("uDebugEmissiveScale", 0, 0, 14),
        /* [202] */ ShaderProgramVariable("uDebugEmissiveMaskMultiplier", 0, 0, 14),
        /* [203] */ ShaderProgramVariable("uDebugTerrainSpecular", 3, 0, 14),
        /* [204] */ ShaderProgramVariable("uDebugMaterialHighlight", 0, 0, 14),
        /* [205] */ ShaderProgramVariable("uStippleTransparencyClipParams", 3, 0, 14),
        /* [206] */ ShaderProgramVariable("uStippleCutoutPosDepthVisibility", 3, 0, 14),
        /* [207] */ ShaderProgramVariable("uStippleCutoutStartRangeAndMinAlpha", 3, 0, 14),
        /* [208] */ ShaderProgramVariable("aVertexPosition2D", 14, 0, 0),
        /* [209] */ ShaderProgramVariable("aVertexPosition", 15, 0, 0),
        /* [210] */ ShaderProgramVariable("aVertexPosition", 7, 0, 0),
        /* [211] */ ShaderProgramVariable("aVertexPosition", 16, 0, 0),
        /* [212] */ ShaderProgramVariable("aVertexPositionDepthOffset", 16, 0, 0),
        /* [213] */ ShaderProgramVariable("aVertexPosition2D", 1, 0, 0),
        /* [214] */ ShaderProgramVariable("aVertexPosition", 2, 0, 0),
        /* [215] */ ShaderProgramVariable("aVertexPosition", 3, 0, 0),
        /* [216] */ ShaderProgramVariable("aVertexPositionDepthOffset", 3, 0, 0),
        /* [217] */ ShaderProgramVariable("aVertexPosition_BoneLabel", 16, 0, 0),
        /* [218] */ ShaderProgramVariable("aVertexSkinBones", 12, 0, 0),
        /* [219] */ ShaderProgramVariable("aVertexSkinWeights", 12, 1, 0),
        /* [220] */ ShaderProgramVariable("aVertexPosition_Size", 3, 0, 0),
        /* [221] */ ShaderProgramVariable("aVertexNormal", 2, 0, 3),
        /* [222] */ ShaderProgramVariable("aVertexNormal", 15, 1, 3),
        /* [223] */ ShaderProgramVariable("aVertexNormal", 7, 1, 3),
        /* [224] */ ShaderProgramVariable("aVertexNormal_FogProportion", 3, 0, 3),
        /* [225] */ ShaderProgramVariable("aVertexNormal_FogProportion", 8, 1, 3),
        /* [226] */ ShaderProgramVariable("aVertexNormal_BatchFlags", 8, 1, 3),
        /* [227] */ ShaderProgramVariable("aVertexTangent", 8, 1, 6),
        /* [228] */ ShaderProgramVariable("aSpecularFactor", 17, 0, 14),
        /* [229] */ ShaderProgramVariable("aSpecular_NormalScale", 18, 0, 14),
        /* [230] */ ShaderProgramVariable("aMaterialSettingsSlotXY3", 18, 0, 14),
        /* [231] */ ShaderProgramVariable("aMaterialSettingsSlotXY_UV", 12, 0, 14),
        /* [232] */ ShaderProgramVariable("aMaterialSettingsSlotXY_Rotation", 12, 0, 14),
        /* [233] */ ShaderProgramVariable("aMaterialSettingsSlotXY_TilePositionXZ", 12, 0, 14),
        /* [234] */ ShaderProgramVariable("aMaterialSettingsSlotXY_MaterialSettingsSlotXY2", 12, 0, 14),
        /* [235] */ ShaderProgramVariable("aVertexColour", 12, 1, 10),
        /* [236] */ ShaderProgramVariable("aVertexColourUnwhitenedRGB_TilePositionLevel", 12, 1, 10),
        /* [237] */ ShaderProgramVariable("aTextureUV", 1, 0, 5),
        /* [238] */ ShaderProgramVariable("aTextureUV", 26, 0, 5),
        /* [239] */ ShaderProgramVariable("aTextureUVAtlasMin", 1, 0, 5),
        /* [240] */ ShaderProgramVariable("aTextureUVAtlasExtents", 1, 0, 5),
        /* [241] */ ShaderProgramVariable("aTextureSlot", 20, 0, 14),
        /* [242] */ ShaderProgramVariable("aTextureScale", 12, 0, 14),
        /* [243] */ ShaderProgramVariable("aTextureWeight", 12, 0, 14),
        /* [244] */ ShaderProgramVariable("aTextureUse", 0, 0, 14),
        /* [245] */ ShaderProgramVariable("aSamplerWrap_TilePosition", 12, 0, 14),
        /* [246] */ ShaderProgramVariable("aSamplerWrap_Bone_Label", 12, 0, 14),
        /* [247] */ ShaderProgramVariable("aTilePosition", 11, 0, 14),
        /* [248] */ ShaderProgramVariable("aBone_Label_BatchFlags", 11, 0, 14),
        /* [249] */ ShaderProgramVariable("aBone_Label_BillboardLabel_Joint", 12, 0, 14),
        /* [250] */ ShaderProgramVariable("aRotation_UV", 11, 0, 14),
        /* [251] */ ShaderProgramVariable("aMaterialProperties", 12, 0, 14),
        /* [252] */ ShaderProgramVariable("aBillboardSize", 1, 0, 14),
        /* [253] */ ShaderProgramVariable("aParticleOrigin_CreationTime", 3, 0, 14),
        /* [254] */ ShaderProgramVariable("aParticleOffset", 1, 0, 14),
        /* [255] */ ShaderProgramVariable("aParticleUVAnimationData", 12, 0, 14),
        /* [256] */ ShaderProgramVariable("aParticleVelocity", 2, 0, 14),
        /* [257] */ ShaderProgramVariable("aScatteringViewDirection", 2, 0, 14),
        /* [258] */ ShaderProgramVariable("aWaterPosition_Depth", 16, 0, 0),
        /* [259] */ ShaderProgramVariable("aWaterFlowDataPatchFlow0", 14, 0, 14),
        /* [260] */ ShaderProgramVariable("aWaterFlowDataPatchFlow1", 14, 0, 14),
        /* [261] */ ShaderProgramVariable("aWaterFlowDataPatchFlow2", 14, 0, 14),
        /* [262] */ ShaderProgramVariable("aWaterFlowDataFlowNoise0_FlowNoise1", 8, 0, 14),
        /* [263] */ ShaderProgramVariable("aWaterFlowDataFlowNoise2_FlowIndex_Spare", 8, 0, 14),
        /* [264] */ ShaderProgramVariable("aDummy0", 17, 0, 15),
        /* [265] */ ShaderProgramVariable("aDummy1", 17, 0, 15),
        /* [266] */ ShaderProgramVariable("aDummy2", 17, 0, 15),
        /* [267] */ ShaderProgramVariable("aDummy3", 17, 0, 15),
        /* [268] */ ShaderProgramVariable("aDummy0", 9, 0, 15),
        /* [269] */ ShaderProgramVariable("aDummy1", 9, 0, 15),
        /* [270] */ ShaderProgramVariable("aDummy2", 9, 0, 15),
        /* [271] */ ShaderProgramVariable("aDummy3", 9, 0, 15),
    };

    // 0x1008a3ca0, 8576 bytes, placed by the data it initialises
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
        new (&_shaderVariables) render::ShaderProgramVariable("uModelMatrix", 30, 0, 14);
        new (&DAT_103bbe1f0) render::ShaderProgramVariable("uWorldMatrix", 30, 0, 14);
        new (&DAT_103bbe210) render::ShaderProgramVariable("uViewMatrix", 30, 0, 14);
        new (&DAT_103bbe230) render::ShaderProgramVariable("uInvViewMatrix", 30, 0, 14);
        new (&DAT_103bbe250) render::ShaderProgramVariable("uProjectionMatrix", 30, 0, 14);
        new (&DAT_103bbe270) render::ShaderProgramVariable("uInvProjectionMatrix", 30, 0, 14);
        new (&DAT_103bbe290) render::ShaderProgramVariable("uViewProjMatrix", 30, 0, 14);
        new (&DAT_103bbe2b0) render::ShaderProgramVariable("uInvViewProjMatrix", 30, 0, 14);
        new (&DAT_103bbe2d0) render::ShaderProgramVariable("uZBufferParams", 2, 0, 14);
        new (&DAT_103bbe2f0) render::ShaderProgramVariable("uSceneProjectionMatrix", 30, 0, 14);
        new (&DAT_103bbe310) render::ShaderProgramVariable("uSceneInvViewMatrix", 30, 0, 14);
        new (&DAT_103bbe330) render::ShaderProgramVariable("uSceneInvProjMatrix", 30, 0, 14);
        new (&DAT_103bbe350) render::ShaderProgramVariable("uSceneInvViewProjMatrix", 30, 0, 14);
        new (&DAT_103bbe370) render::ShaderProgramVariable("uInvSunDirection", 2, 0, 14);
        new (&DAT_103bbe390) render::ShaderProgramVariable("uSunColour", 2, 0, 14);
        new (&DAT_103bbe3b0) render::ShaderProgramVariable("uAntiSunColour", 2, 0, 14);
        new (&DAT_103bbe3d0) render::ShaderProgramVariable("uAmbientColour", 2, 0, 14);
        new (&DAT_103bbe3f0) render::ShaderProgramVariable("uSpecularFactor", 0, 0, 14);
        new (&DAT_103bbe410) render::ShaderProgramVariable("uDiffuseMap", 9, 0, 14);
        new (&DAT_103bbe430) render::ShaderProgramVariable("uMaskMap", 9, 0, 14);
        new (&DAT_103bbe450) render::ShaderProgramVariable("uGlobalEnvironmentMap", 9, 0, 14);
        new (&DAT_103bbe470) render::ShaderProgramVariable("uAtlasMeta", 3, 0, 14);
        new (&DAT_103bbe490) render::ShaderProgramVariable("uTextureAtlas", 9, 0, 14);
        new (&DAT_103bbe4b0) render::ShaderProgramVariable("uTextureAtlasSettings", 9, 0, 14);
        new (&DAT_103bbe4d0) render::ShaderProgramVariable("uTextureAnimationTime", 0, 0, 14);
        new (&DAT_103bbe4f0) render::ShaderProgramVariable("uAlphaTestThreshold", 0, 0, 14);
        new (&DAT_103bbe510) render::ShaderProgramVariable("uSmoothSkinning", 0, 0, 14);
        new (&DAT_103bbe530) render::ShaderProgramVariable("uBoneTransforms", 3, 0, 14);
        new (&DAT_103bbe550) render::ShaderProgramVariable("uLabelDeltas", 3, 0, 14);
        new (&DAT_103bbe570) render::ShaderProgramVariable("uBillboardLabelTransforms", 3, 0, 14);
        new (&DAT_103bbe590) render::ShaderProgramVariable("uSunlightViewMatrix", 30, 0, 14);
        new (&DAT_103bbe5b0) render::ShaderProgramVariable("uCascadeFrustumViewDepths", 3, 0, 14);
        new (&DAT_103bbe5d0) render::ShaderProgramVariable("uMappingParams", 3, 0, 14);
        new (&DAT_103bbe5f0) render::ShaderProgramVariable("uSunlightFadeAttenParams", 3, 0, 14);
        new (&DAT_103bbe610) render::ShaderProgramVariable("uSunlightProjTexMatScale", 3, 0, 14);
        new (&DAT_103bbe630) render::ShaderProgramVariable("uSunlightProjTexMatOffset", 3, 0, 14);
        new (&DAT_103bbe650) render::ShaderProgramVariable("uSunlightViewProjTexMatrix", 30, 0, 14);
        new (&DAT_103bbe670) render::ShaderProgramVariable("uCascadeWorldBoundingSpheres", 3, 0, 14);
        new (&DAT_103bbe690) render::ShaderProgramVariable("uCascadeMinAtlasExtents", 3, 0, 14);
        new (&DAT_103bbe6b0) render::ShaderProgramVariable("uCascadeMaxAtlasExtents", 3, 0, 14);
        new (&DAT_103bbe6d0) render::ShaderProgramVariable("uCascadeSplitSelectionFlags", 3, 0, 14);
        new (&DAT_103bbe6f0) render::ShaderProgramVariable("uLowShadowQualityDepth", 0, 0, 14);
        new (&DAT_103bbe710) render::ShaderProgramVariable("uShadowQuality", 0, 0, 14);
        new (&DAT_103bbe730) render::ShaderProgramVariable("uCascadeViewportScale", 0, 0, 14);
        new (&DAT_103bbe750) render::ShaderProgramVariable("uSunlightShadowMap", 9, 0, 14);
        new (&DAT_103bbe770) render::ShaderProgramVariable("uSunlightShadowTranslucencyMap", 9, 0, 14);
        new (&DAT_103bbe790) render::ShaderProgramVariable("uShadowBuffer", 9, 0, 14);
        new (&DAT_103bbe7b0) render::ShaderProgramVariable("uPointLightShadowMap", 9, 0, 14);
        new (&DAT_103bbe7d0) render::ShaderProgramVariable("uPointLightPositions", 3, 0, 14);
        new (&DAT_103bbe7f0) render::ShaderProgramVariable("uPointLightColours", 3, 0, 14);
        new (&DAT_103bbe810) render::ShaderProgramVariable("uPointLightCount", 0, 0, 14);
        new (&DAT_103bbe830) render::ShaderProgramVariable("uFogColour", 3, 0, 14);
        new (&DAT_103bbe850) render::ShaderProgramVariable("uFogParams", 3, 0, 14);
        new (&DAT_103bbe870) render::ShaderProgramVariable("uGlobalEnvironmentMappingParams", 3, 0, 14);
        new (&DAT_103bbe890) render::ShaderProgramVariable("uHorizonColourFalloff", 3, 0, 14);
        new (&DAT_103bbe8b0) render::ShaderProgramVariable("uBetaDashR", 2, 0, 14);
        new (&DAT_103bbe8d0) render::ShaderProgramVariable("uBetaDashM", 2, 0, 14);
        new (&DAT_103bbe8f0) render::ShaderProgramVariable("uExtinctionC", 2, 0, 14);
        new (&DAT_103bbe910) render::ShaderProgramVariable("uMieGCoefficients", 3, 0, 14);
        new (&DAT_103bbe930) render::ShaderProgramVariable("uOutscatteringAmount", 2, 0, 14);
        new (&DAT_103bbe950) render::ShaderProgramVariable("uInscatteringAmount", 2, 0, 14);
        new (&DAT_103bbe970) render::ShaderProgramVariable("uScatteringTintColour", 2, 0, 14);
        new (&DAT_103bbe990) render::ShaderProgramVariable("uScatteringParameters", 3, 0, 14);
        new (&DAT_103bbe9b0) render::ShaderProgramVariable("uScatteringBoundary", 3, 0, 14);
        new (&DAT_103bbe9d0) render::ShaderProgramVariable("uIrradianceSHCoefs", 3, 0, 14);
        new (&DAT_103bbe9f0) render::ShaderProgramVariable("uReflectionMap", 9, 0, 14);
        new (&DAT_103bbea10) render::ShaderProgramVariable("uRefractionMap", 9, 0, 14);
        new (&DAT_103bbea30) render::ShaderProgramVariable("uRefractionDepth", 9, 0, 14);
        new (&DAT_103bbea50) render::ShaderProgramVariable("uRefractionParams", 3, 0, 14);
        new (&DAT_103bbea70) render::ShaderProgramVariable("uRefractionViewportLookupScale", 3, 0, 14);
        new (&DAT_103bbea90) render::ShaderProgramVariable("uCausticsMap", 9, 0, 14);
        new (&DAT_103bbeab0) render::ShaderProgramVariable("uCausticsMapSize", 1, 0, 14);
        new (&DAT_103bbead0) render::ShaderProgramVariable("uCausticsComputeResolution", 1, 0, 14);
        new (&DAT_103bbeaf0) render::ShaderProgramVariable("uCausticsPlaneHeight", 0, 0, 14);
        new (&DAT_103bbeb10) render::ShaderProgramVariable("uCausticsViewProjMatrix", 30, 0, 14);
        new (&DAT_103bbeb30) render::ShaderProgramVariable("uCausticsScale", 0, 0, 14);
        new (&DAT_103bbeb50) render::ShaderProgramVariable("uCausticsRefractionScale", 0, 0, 14);
        new (&DAT_103bbeb70) render::ShaderProgramVariable("uCausticsFade", 3, 0, 14);
        new (&DAT_103bbeb90) render::ShaderProgramVariable("uCausticsOverWaterFade", 1, 0, 14);
        new (&DAT_103bbebb0) render::ShaderProgramVariable("uViewportLookupScale", 3, 0, 14);
        new (&DAT_103bbebd0) render::ShaderProgramVariable("uViewportOffsetScale", 3, 0, 14);
        new (&DAT_103bbebf0) render::ShaderProgramVariable("uFullScreenLookupScale", 3, 0, 14);
        new (&DAT_103bbec10) render::ShaderProgramVariable("uViewportMapTextureSize", 1, 0, 14);
        new (&DAT_103bbec30) render::ShaderProgramVariable("uTexelSize", 1, 0, 14);
        new (&DAT_103bbec50) render::ShaderProgramVariable("uCoordOffset", 1, 0, 14);
        new (&DAT_103bbec70) render::ShaderProgramVariable("uCoordScale", 1, 0, 14);
        new (&DAT_103bbec90) render::ShaderProgramVariable("uReproject", 0, 0, 14);
        new (&DAT_103bbecb0) render::ShaderProgramVariable("uClipPlane", 3, 0, 14);
        new (&DAT_103bbecd0) render::ShaderProgramVariable("uPointLightIndicesMap", 9, 0, 14);
        new (&DAT_103bbecf0) render::ShaderProgramVariable("uPointLightIndicesLevel", 0, 0, 14);
        new (&DAT_103bbed10) render::ShaderProgramVariable("uPointLightIndicesClampLimits", 3, 0, 14);
        new (&DAT_103bbed30) render::ShaderProgramVariable("uPointLightData", 3, 0, 14);
        new (&DAT_103bbed50) render::ShaderProgramVariable("uSkyBoxMap1", 9, 0, 14);
        new (&DAT_103bbed70) render::ShaderProgramVariable("uSkyBoxMap2", 9, 0, 14);
        new (&DAT_103bbed90) render::ShaderProgramVariable("uSkyBoxInterpolant", 0, 0, 14);
        new (&DAT_103bbedb0) render::ShaderProgramVariable("uSkyBoxUseFirst", 9, 0, 14);
        new (&DAT_103bbedd0) render::ShaderProgramVariable("uSkyBoxUseSecond", 9, 0, 14);
        new (&DAT_103bbedf0) render::ShaderProgramVariable("uExposure", 0, 0, 14);
        new (&DAT_103bbee10) render::ShaderProgramVariable("uViewportMap", 9, 0, 14);
        new (&DAT_103bbee30) render::ShaderProgramVariable("uParams", 3, 0, 14);
        new (&DAT_103bbee50) render::ShaderProgramVariable("uZFar", 0, 0, 14);
        new (&DAT_103bbee70) render::ShaderProgramVariable("uMinSamples", 0, 0, 14);
        new (&DAT_103bbee90) render::ShaderProgramVariable("uBaseSamples", 0, 0, 14);
        new (&DAT_103bbeeb0) render::ShaderProgramVariable("uSSAOMap", 9, 0, 14);
        new (&DAT_103bbeed0) render::ShaderProgramVariable("uGeometryAwareBlurParams", 1, 0, 14);
        new (&DAT_103bbeef0) render::ShaderProgramVariable("uColorTexture", 9, 0, 14);
        new (&DAT_103bbef10) render::ShaderProgramVariable("uNormalTexture", 9, 0, 14);
        new (&DAT_103bbef30) render::ShaderProgramVariable("uDepthTexture", 9, 0, 14);
        new (&DAT_103bbef50) render::ShaderProgramVariable("uNoiseTexture", 9, 0, 14);
        new (&DAT_103bbef70) render::ShaderProgramVariable("uInverseNoiseTexSize", 1, 0, 14);
        new (&DAT_103bbef90) render::ShaderProgramVariable("uSSAOTexture", 9, 0, 14);
        new (&DAT_103bbefb0) render::ShaderProgramVariable("uCameraPosition", 2, 0, 14);
        new (&DAT_103bbefd0) render::ShaderProgramVariable("uTick", 0, 0, 14);
        new (&DAT_103bbeff0) render::ShaderProgramVariable("uTextureStep", 1, 0, 14);
        new (&DAT_103bbf010) render::ShaderProgramVariable("uTint", 3, 0, 14);
        new (&DAT_103bbf030) render::ShaderProgramVariable("uHighlightScale", 0, 0, 14);
        new (&DAT_103bbf050) render::ShaderProgramVariable("uFade", 0, 0, 14);
        new (&DAT_103bbf070) render::ShaderProgramVariable("uGridSize", 0, 0, 14);
        new (&DAT_103bbf090) render::ShaderProgramVariable("uVertexScale", 0, 0, 14);
        new (&DAT_103bbf0b0) render::ShaderProgramVariable("sTexture", 9, 0, 14);
        new (&DAT_103bbf0d0) render::ShaderProgramVariable("uWaterFeatureFlags", 3, 0, 14);
        new (&DAT_103bbf0f0) render::ShaderProgramVariable("uWaterTickFade", 1, 0, 14);
        new (&DAT_103bbf110) render::ShaderProgramVariable("uWaterFoamScaleFoamDepth", 1, 0, 14);
        new (&DAT_103bbf130) render::ShaderProgramVariable("uWaterRotMatrix", 29, 0, 14);
        new (&DAT_103bbf150) render::ShaderProgramVariable("uWaterUVRotationMatrix", 29, 0, 14);
        new (&DAT_103bbf170) render::ShaderProgramVariable("uWaterFlow_FlowSpeedInv_YTranslate", 3, 0, 14);
        new (&DAT_103bbf190) render::ShaderProgramVariable("uWaterColour", 3, 0, 14);
        new (&DAT_103bbf1b0)
            render::ShaderProgramVariable("uWaterWaveHeight_WaveLengthInv_GridRes_EdgeFadeSize", 3, 0, 14);
        new (&DAT_103bbf1d0) render::ShaderProgramVariable("uWaterNormalMapTextureScales_FlowNoiseScale", 3, 0, 14);
        new (&DAT_103bbf1f0)
            render::ShaderProgramVariable("uWaterDepthFadeAlphaInv_FadeWaveHeightInv_Offset", 2, 0, 14);
        new (&DAT_103bbf210) render::ShaderProgramVariable("uWaterReflectionStrength", 0, 0, 14);
        new (&DAT_103bbf230) render::ShaderProgramVariable("uWaterNormalBRDFParams", 3, 0, 14);
        new (&DAT_103bbf250) render::ShaderProgramVariable("uWaterSpecularColour", 2, 0, 14);
        new (&DAT_103bbf270) render::ShaderProgramVariable("uWaterMaskStrength", 0, 0, 14);
        new (&DAT_103bbf290) render::ShaderProgramVariable("uWaterReflectionMapContribution", 0, 0, 14);
        new (&DAT_103bbf2b0) render::ShaderProgramVariable("uWaterTextureFoam", 9, 0, 14);
        new (&DAT_103bbf2d0) render::ShaderProgramVariable("uWaterExtinctionRGBDepthMetres", 2, 0, 14);
        new (&DAT_103bbf2f0) render::ShaderProgramVariable("uWaterExtinctionOpaqueWaterColour", 2, 0, 14);
        new (&DAT_103bbf310) render::ShaderProgramVariable("uWaterExtinctionVisibilityMetres", 0, 0, 14);
        new (&DAT_103bbf330) render::ShaderProgramVariable("uWaterNormalMapTexture0", 3, 0, 14);
        new (&DAT_103bbf350)
            render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].flowSpeed_spareyzw", 3, 0, 14);
        new (&DAT_103bbf370)
            render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].uvScale_uvOffset", 3, 0, 14);
        new (&DAT_103bbf390) render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].uvRotation", 28, 0, 14);
        new (&DAT_103bbf3b0) render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].flowRotation", 28, 0, 14);
        new (&DAT_103bbf3d0)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].flowSpeed_spareyzw", 3, 0, 14);
        new (&DAT_103bbf3f0)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].uvScale_uvOffset", 3, 0, 14);
        new (&DAT_103bbf410)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].uvRotation", 28, 0, 14);
        new (&DAT_103bbf430)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].flowRotation", 28, 0, 14);
        new (&DAT_103bbf450) render::ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[0]", 3, 0, 14);
        new (&DAT_103bbf470) render::ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[0]", 3, 0, 14);
        new (&DAT_103bbf490) render::ShaderProgramVariable("uWaterNormalMapTexture1", 3, 0, 14);
        new (&DAT_103bbf4b0)
            render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].flowSpeed_spareyzw", 3, 0, 14);
        new (&DAT_103bbf4d0)
            render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].uvScale_uvOffset", 3, 0, 14);
        new (&DAT_103bbf4f0) render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].uvRotation", 28, 0, 14);
        new (&DAT_103bbf510) render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].flowRotation", 28, 0, 14);
        new (&DAT_103bbf530)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].flowSpeed_spareyzw", 3, 0, 14);
        new (&DAT_103bbf550)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].uvScale_uvOffset", 3, 0, 14);
        new (&DAT_103bbf570)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].uvRotation", 28, 0, 14);
        new (&DAT_103bbf590)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].flowRotation", 28, 0, 14);
        new (&DAT_103bbf5b0) render::ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[1]", 3, 0, 14);
        new (&DAT_103bbf5d0) render::ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[1]", 3, 0, 14);
        new (&DAT_103bbf5f0) render::ShaderProgramVariable("uWaterNormalMapTexture2", 3, 0, 14);
        new (&DAT_103bbf610)
            render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].flowSpeed_spareyzw", 3, 0, 14);
        new (&DAT_103bbf630)
            render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].uvScale_uvOffset", 3, 0, 14);
        new (&DAT_103bbf650) render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].uvRotation", 28, 0, 14);
        new (&DAT_103bbf670) render::ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].flowRotation", 28, 0, 14);
        new (&DAT_103bbf690)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].flowSpeed_spareyzw", 3, 0, 14);
        new (&DAT_103bbf6b0)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].uvScale_uvOffset", 3, 0, 14);
        new (&DAT_103bbf6d0)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].uvRotation", 28, 0, 14);
        new (&DAT_103bbf6f0)
            render::ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].flowRotation", 28, 0, 14);
        new (&DAT_103bbf710) render::ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[2]", 3, 0, 14);
        new (&DAT_103bbf730) render::ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[2]", 3, 0, 14);
        new (&DAT_103bbf750) render::ShaderProgramVariable("uWaterStillWaterNormalStrength_spareyzw", 3, 0, 14);
        new (&DAT_103bbf770) render::ShaderProgramVariable("uWaterEmissiveMapTexture", 3, 0, 14);
        new (&DAT_103bbf790) render::ShaderProgramVariable("uWaterEmissiveColourEmissiveSource", 3, 0, 14);
        new (&DAT_103bbf7b0) render::ShaderProgramVariable(
            "uEmissiveScale_MapRefractionDepth_EmissiveMapMode_EmissiveMapExists", 3, 0, 14);
        new (&DAT_103bbf7d0)
            render::ShaderProgramVariable("uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale", 3, 0, 14);
        new (&DAT_103bbf7f0) render::ShaderProgramVariable("uEmissiveMapScale_EmissiveUVMode", 1, 0, 14);
        new (&DAT_103bbf810) render::ShaderProgramVariable("uEmissiveBlend", 0, 0, 14);
        new (&DAT_103bbf830) render::ShaderProgramVariable("sDepthTex", 9, 0, 14);
        new (&DAT_103bbf850) render::ShaderProgramVariable("sDitherTex", 9, 0, 14);
        new (&DAT_103bbf870) render::ShaderProgramVariable("sNoiseTex", 9, 0, 14);
        new (&DAT_103bbf890) render::ShaderProgramVariable("uMieG", 3, 0, 14);
        new (&DAT_103bbf8b0) render::ShaderProgramVariable("uMieGSky", 3, 0, 14);
        new (&DAT_103bbf8d0) render::ShaderProgramVariable("uVolumetricScatteringParameters", 3, 0, 14);
        new (&DAT_103bbf8f0) render::ShaderProgramVariable("uSampleCount", 9, 0, 14);
        new (&DAT_103bbf910) render::ShaderProgramVariable("uTime", 0, 0, 14);
        new (&DAT_103bbf930) render::ShaderProgramVariable("uVolumetricLitFogColour", 2, 0, 14);
        new (&DAT_103bbf950) render::ShaderProgramVariable("uVolumetricUnlitFogColour", 2, 0, 14);
        new (&DAT_103bbf970) render::ShaderProgramVariable("uVolumetricDitherMat", 30, 0, 14);
        new (&DAT_103bbf990) render::ShaderProgramVariable("uGroundFogHeight_Falloff", 3, 0, 14);
        new (&DAT_103bbf9b0) render::ShaderProgramVariable("u3DNoiseFrequency_Strength", 3, 0, 14);
        new (&DAT_103bbf9d0) render::ShaderProgramVariable("u3DNoiseWind_Power", 3, 0, 14);
        new (&DAT_103bbf9f0) render::ShaderProgramVariable("uZBufferParams", 3, 0, 14);
        new (&DAT_103bbfa10) render::ShaderProgramVariable("uBilateralBlurDirectionAndDepthFalloff", 3, 0, 14);
        new (&DAT_103bbfa30) render::ShaderProgramVariable("sHalfResSourceTex", 9, 0, 14);
        new (&DAT_103bbfa50) render::ShaderProgramVariable("sHalfResDepthTex", 9, 0, 14);
        new (&DAT_103bbfa70) render::ShaderProgramVariable("uParticleInvSoftScale", 0, 0, 14);
        new (&DAT_103bbfa90) render::ShaderProgramVariable("uDebugReturn", 0, 0, 14);
        new (&DAT_103bbfab0) render::ShaderProgramVariable("uDebugInstanceColour", 3, 0, 14);
        new (&DAT_103bbfad0) render::ShaderProgramVariable("uDebugTexelDensity", 3, 0, 14);
        new (&DAT_103bbfaf0) render::ShaderProgramVariable("uDebugEmissiveScale", 0, 0, 14);
        new (&DAT_103bbfb10) render::ShaderProgramVariable("uDebugEmissiveMaskMultiplier", 0, 0, 14);
        new (&DAT_103bbfb30) render::ShaderProgramVariable("uDebugTerrainSpecular", 3, 0, 14);
        new (&DAT_103bbfb50) render::ShaderProgramVariable("uDebugMaterialHighlight", 0, 0, 14);
        new (&DAT_103bbfb70) render::ShaderProgramVariable("uStippleTransparencyClipParams", 3, 0, 14);
        new (&DAT_103bbfb90) render::ShaderProgramVariable("uStippleCutoutPosDepthVisibility", 3, 0, 14);
        new (&DAT_103bbfbb0) render::ShaderProgramVariable("uStippleCutoutStartRangeAndMinAlpha", 3, 0, 14);
        new (&DAT_103bbfbd0) render::ShaderProgramVariable("aVertexPosition2D", 14, 0, 0);
        new (&DAT_103bbfbf0) render::ShaderProgramVariable("aVertexPosition", 15, 0, 0);
        new (&DAT_103bbfc10) render::ShaderProgramVariable("aVertexPosition", 7, 0, 0);
        new (&DAT_103bbfc30) render::ShaderProgramVariable("aVertexPosition", 16, 0, 0);
        new (&DAT_103bbfc50) render::ShaderProgramVariable("aVertexPositionDepthOffset", 16, 0, 0);
        new (&DAT_103bbfc70) render::ShaderProgramVariable("aVertexPosition2D", 1, 0, 0);
        new (&DAT_103bbfc90) render::ShaderProgramVariable("aVertexPosition", 2, 0, 0);
        new (&DAT_103bbfcb0) render::ShaderProgramVariable("aVertexPosition", 3, 0, 0);
        new (&DAT_103bbfcd0) render::ShaderProgramVariable("aVertexPositionDepthOffset", 3, 0, 0);
        new (&DAT_103bbfcf0) render::ShaderProgramVariable("aVertexPosition_BoneLabel", 16, 0, 0);
        new (&DAT_103bbfd10) render::ShaderProgramVariable("aVertexSkinBones", 12, 0, 0);
        new (&DAT_103bbfd30) render::ShaderProgramVariable("aVertexSkinWeights", 12, 1, 0);
        new (&DAT_103bbfd50) render::ShaderProgramVariable("aVertexPosition_Size", 3, 0, 0);
        new (&DAT_103bbfd70) render::ShaderProgramVariable("aVertexNormal", 2, 0, 3);
        new (&DAT_103bbfd90) render::ShaderProgramVariable("aVertexNormal", 15, 1, 3);
        new (&DAT_103bbfdb0) render::ShaderProgramVariable("aVertexNormal", 7, 1, 3);
        new (&DAT_103bbfdd0) render::ShaderProgramVariable("aVertexNormal_FogProportion", 3, 0, 3);
        new (&DAT_103bbfdf0) render::ShaderProgramVariable("aVertexNormal_FogProportion", 8, 1, 3);
        new (&DAT_103bbfe10) render::ShaderProgramVariable("aVertexNormal_BatchFlags", 8, 1, 3);
        new (&DAT_103bbfe30) render::ShaderProgramVariable("aVertexTangent", 8, 1, 6);
        new (&DAT_103bbfe50) render::ShaderProgramVariable("aSpecularFactor", 17, 0, 14);
        new (&DAT_103bbfe70) render::ShaderProgramVariable("aSpecular_NormalScale", 18, 0, 14);
        new (&DAT_103bbfe90) render::ShaderProgramVariable("aMaterialSettingsSlotXY3", 18, 0, 14);
        new (&DAT_103bbfeb0) render::ShaderProgramVariable("aMaterialSettingsSlotXY_UV", 12, 0, 14);
        new (&DAT_103bbfed0) render::ShaderProgramVariable("aMaterialSettingsSlotXY_Rotation", 12, 0, 14);
        new (&DAT_103bbfef0) render::ShaderProgramVariable("aMaterialSettingsSlotXY_TilePositionXZ", 12, 0, 14);
        new (&DAT_103bbff10)
            render::ShaderProgramVariable("aMaterialSettingsSlotXY_MaterialSettingsSlotXY2", 12, 0, 14);
        new (&DAT_103bbff30) render::ShaderProgramVariable("aVertexColour", 12, 1, 10);
        new (&DAT_103bbff50) render::ShaderProgramVariable("aVertexColourUnwhitenedRGB_TilePositionLevel", 12, 1, 10);
        new (&DAT_103bbff70) render::ShaderProgramVariable("aTextureUV", 1, 0, 5);
        new (&DAT_103bbff90) render::ShaderProgramVariable("aTextureUV", 26, 0, 5);
        new (&DAT_103bbffb0) render::ShaderProgramVariable("aTextureUVAtlasMin", 1, 0, 5);
        new (&DAT_103bbffd0) render::ShaderProgramVariable("aTextureUVAtlasExtents", 1, 0, 5);
        new (&DAT_103bbfff0) render::ShaderProgramVariable("aTextureSlot", 20, 0, 14);
        new (&DAT_103bc0010) render::ShaderProgramVariable("aTextureScale", 12, 0, 14);
        new (&DAT_103bc0030) render::ShaderProgramVariable("aTextureWeight", 12, 0, 14);
        new (&DAT_103bc0050) render::ShaderProgramVariable("aTextureUse", 0, 0, 14);
        new (&DAT_103bc0070) render::ShaderProgramVariable("aSamplerWrap_TilePosition", 12, 0, 14);
        new (&DAT_103bc0090) render::ShaderProgramVariable("aSamplerWrap_Bone_Label", 12, 0, 14);
        new (&DAT_103bc00b0) render::ShaderProgramVariable("aTilePosition", 11, 0, 14);
        new (&DAT_103bc00d0) render::ShaderProgramVariable("aBone_Label_BatchFlags", 11, 0, 14);
        new (&DAT_103bc00f0) render::ShaderProgramVariable("aBone_Label_BillboardLabel_Joint", 12, 0, 14);
        new (&DAT_103bc0110) render::ShaderProgramVariable("aRotation_UV", 11, 0, 14);
        new (&DAT_103bc0130) render::ShaderProgramVariable("aMaterialProperties", 12, 0, 14);
        new (&DAT_103bc0150) render::ShaderProgramVariable("aBillboardSize", 1, 0, 14);
        new (&DAT_103bc0170) render::ShaderProgramVariable("aParticleOrigin_CreationTime", 3, 0, 14);
        new (&DAT_103bc0190) render::ShaderProgramVariable("aParticleOffset", 1, 0, 14);
        new (&DAT_103bc01b0) render::ShaderProgramVariable("aParticleUVAnimationData", 12, 0, 14);
        new (&DAT_103bc01d0) render::ShaderProgramVariable("aParticleVelocity", 2, 0, 14);
        new (&DAT_103bc01f0) render::ShaderProgramVariable("aScatteringViewDirection", 2, 0, 14);
        new (&DAT_103bc0210) render::ShaderProgramVariable("aWaterPosition_Depth", 16, 0, 0);
        new (&DAT_103bc0230) render::ShaderProgramVariable("aWaterFlowDataPatchFlow0", 14, 0, 14);
        new (&DAT_103bc0250) render::ShaderProgramVariable("aWaterFlowDataPatchFlow1", 14, 0, 14);
        new (&DAT_103bc0270) render::ShaderProgramVariable("aWaterFlowDataPatchFlow2", 14, 0, 14);
        new (&DAT_103bc0290) render::ShaderProgramVariable("aWaterFlowDataFlowNoise0_FlowNoise1", 8, 0, 14);
        new (&DAT_103bc02b0) render::ShaderProgramVariable("aWaterFlowDataFlowNoise2_FlowIndex_Spare", 8, 0, 14);
        new (&DAT_103bc02d0) render::ShaderProgramVariable("aDummy0", 17, 0, 15);
        new (&DAT_103bc02f0) render::ShaderProgramVariable("aDummy1", 17, 0, 15);
        new (&DAT_103bc0310) render::ShaderProgramVariable("aDummy2", 17, 0, 15);
        new (&DAT_103bc0330) render::ShaderProgramVariable("aDummy3", 17, 0, 15);
        new (&DAT_103bc0350) render::ShaderProgramVariable("aDummy0", 9, 0, 15);
        new (&DAT_103bc0370) render::ShaderProgramVariable("aDummy1", 9, 0, 15);
        new (&DAT_103bc0390) render::ShaderProgramVariable("aDummy2", 9, 0, 15);
        new (&DAT_103bc03b0) render::ShaderProgramVariable("aDummy3", 9, 0, 15);
    }

    // 0x1008a5e20, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.475
    void ___cxx_global_var_init_475() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5e60, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.476
    void ___cxx_global_var_init_476() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5ea0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.477
    void ___cxx_global_var_init_477() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a5ee0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.478
    void ___cxx_global_var_init_478() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a5f20, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.479
    void ___cxx_global_var_init_479() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5f50, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.480
    void ___cxx_global_var_init_480() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a5f90, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.481
    void ___cxx_global_var_init_481() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5fd0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.482
    void ___cxx_global_var_init_482() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6010, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.483
    void ___cxx_global_var_init_483() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6050, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.484
    void ___cxx_global_var_init_484() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6090, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.485
    void ___cxx_global_var_init_485() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a60d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.486
    void ___cxx_global_var_init_486() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6110, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.487
    void ___cxx_global_var_init_487() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a6150, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.488
    void ___cxx_global_var_init_488() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a61b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.489
    void ___cxx_global_var_init_489() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a61f0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.490
    void ___cxx_global_var_init_490() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a6250, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.491
    void ___cxx_global_var_init_491() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6290, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.492
    void ___cxx_global_var_init_492() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a62d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.493
    void ___cxx_global_var_init_493() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a6310, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.494
    void ___cxx_global_var_init_494() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45a8;
        if (*PTR_m_mutex_100ee45a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6350, 59 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_6_cxx.cxx
    void __GLOBAL__sub_I_unity_6_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_12();
        ___cxx_global_var_init_55();
        ___cxx_global_var_init_85();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
