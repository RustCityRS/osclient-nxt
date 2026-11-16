// libs/graphics/runetek7/materials/shaders/ShaderVariable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShaderVariable.h"

namespace jag::graphics {
    // 0x103bbe1d0, set at startup by ___cxx_global_var_init.85
    render::ShaderProgramVariable _shaderVariables[272] = {
        /* [0] */ ShaderProgramVariable("uModelMatrix", 30, false, 14),
        /* [1] */ ShaderProgramVariable("uWorldMatrix", 30, false, 14),
        /* [2] */ ShaderProgramVariable("uViewMatrix", 30, false, 14),
        /* [3] */ ShaderProgramVariable("uInvViewMatrix", 30, false, 14),
        /* [4] */ ShaderProgramVariable("uProjectionMatrix", 30, false, 14),
        /* [5] */ ShaderProgramVariable("uInvProjectionMatrix", 30, false, 14),
        /* [6] */ ShaderProgramVariable("uViewProjMatrix", 30, false, 14),
        /* [7] */ ShaderProgramVariable("uInvViewProjMatrix", 30, false, 14),
        /* [8] */ ShaderProgramVariable("uZBufferParams", 2, false, 14),
        /* [9] */ ShaderProgramVariable("uSceneProjectionMatrix", 30, false, 14),
        /* [10] */ ShaderProgramVariable("uSceneInvViewMatrix", 30, false, 14),
        /* [11] */ ShaderProgramVariable("uSceneInvProjMatrix", 30, false, 14),
        /* [12] */ ShaderProgramVariable("uSceneInvViewProjMatrix", 30, false, 14),
        /* [13] */ ShaderProgramVariable("uInvSunDirection", 2, false, 14),
        /* [14] */ ShaderProgramVariable("uSunColour", 2, false, 14),
        /* [15] */ ShaderProgramVariable("uAntiSunColour", 2, false, 14),
        /* [16] */ ShaderProgramVariable("uAmbientColour", 2, false, 14),
        /* [17] */ ShaderProgramVariable("uSpecularFactor", 0, false, 14),
        /* [18] */ ShaderProgramVariable("uDiffuseMap", 9, false, 14),
        /* [19] */ ShaderProgramVariable("uMaskMap", 9, false, 14),
        /* [20] */ ShaderProgramVariable("uGlobalEnvironmentMap", 9, false, 14),
        /* [21] */ ShaderProgramVariable("uAtlasMeta", 3, false, 14),
        /* [22] */ ShaderProgramVariable("uTextureAtlas", 9, false, 14),
        /* [23] */ ShaderProgramVariable("uTextureAtlasSettings", 9, false, 14),
        /* [24] */ ShaderProgramVariable("uTextureAnimationTime", 0, false, 14),
        /* [25] */ ShaderProgramVariable("uAlphaTestThreshold", 0, false, 14),
        /* [26] */ ShaderProgramVariable("uSmoothSkinning", 0, false, 14),
        /* [27] */ ShaderProgramVariable("uBoneTransforms", 3, false, 14),
        /* [28] */ ShaderProgramVariable("uLabelDeltas", 3, false, 14),
        /* [29] */ ShaderProgramVariable("uBillboardLabelTransforms", 3, false, 14),
        /* [30] */ ShaderProgramVariable("uSunlightViewMatrix", 30, false, 14),
        /* [31] */ ShaderProgramVariable("uCascadeFrustumViewDepths", 3, false, 14),
        /* [32] */ ShaderProgramVariable("uMappingParams", 3, false, 14),
        /* [33] */ ShaderProgramVariable("uSunlightFadeAttenParams", 3, false, 14),
        /* [34] */ ShaderProgramVariable("uSunlightProjTexMatScale", 3, false, 14),
        /* [35] */ ShaderProgramVariable("uSunlightProjTexMatOffset", 3, false, 14),
        /* [36] */ ShaderProgramVariable("uSunlightViewProjTexMatrix", 30, false, 14),
        /* [37] */ ShaderProgramVariable("uCascadeWorldBoundingSpheres", 3, false, 14),
        /* [38] */ ShaderProgramVariable("uCascadeMinAtlasExtents", 3, false, 14),
        /* [39] */ ShaderProgramVariable("uCascadeMaxAtlasExtents", 3, false, 14),
        /* [40] */ ShaderProgramVariable("uCascadeSplitSelectionFlags", 3, false, 14),
        /* [41] */ ShaderProgramVariable("uLowShadowQualityDepth", 0, false, 14),
        /* [42] */ ShaderProgramVariable("uShadowQuality", 0, false, 14),
        /* [43] */ ShaderProgramVariable("uCascadeViewportScale", 0, false, 14),
        /* [44] */ ShaderProgramVariable("uSunlightShadowMap", 9, false, 14),
        /* [45] */ ShaderProgramVariable("uSunlightShadowTranslucencyMap", 9, false, 14),
        /* [46] */ ShaderProgramVariable("uShadowBuffer", 9, false, 14),
        /* [47] */ ShaderProgramVariable("uPointLightShadowMap", 9, false, 14),
        /* [48] */ ShaderProgramVariable("uPointLightPositions", 3, false, 14),
        /* [49] */ ShaderProgramVariable("uPointLightColours", 3, false, 14),
        /* [50] */ ShaderProgramVariable("uPointLightCount", 0, false, 14),
        /* [51] */ ShaderProgramVariable("uFogColour", 3, false, 14),
        /* [52] */ ShaderProgramVariable("uFogParams", 3, false, 14),
        /* [53] */ ShaderProgramVariable("uGlobalEnvironmentMappingParams", 3, false, 14),
        /* [54] */ ShaderProgramVariable("uHorizonColourFalloff", 3, false, 14),
        /* [55] */ ShaderProgramVariable("uBetaDashR", 2, false, 14),
        /* [56] */ ShaderProgramVariable("uBetaDashM", 2, false, 14),
        /* [57] */ ShaderProgramVariable("uExtinctionC", 2, false, 14),
        /* [58] */ ShaderProgramVariable("uMieGCoefficients", 3, false, 14),
        /* [59] */ ShaderProgramVariable("uOutscatteringAmount", 2, false, 14),
        /* [60] */ ShaderProgramVariable("uInscatteringAmount", 2, false, 14),
        /* [61] */ ShaderProgramVariable("uScatteringTintColour", 2, false, 14),
        /* [62] */ ShaderProgramVariable("uScatteringParameters", 3, false, 14),
        /* [63] */ ShaderProgramVariable("uScatteringBoundary", 3, false, 14),
        /* [64] */ ShaderProgramVariable("uIrradianceSHCoefs", 3, false, 14),
        /* [65] */ ShaderProgramVariable("uReflectionMap", 9, false, 14),
        /* [66] */ ShaderProgramVariable("uRefractionMap", 9, false, 14),
        /* [67] */ ShaderProgramVariable("uRefractionDepth", 9, false, 14),
        /* [68] */ ShaderProgramVariable("uRefractionParams", 3, false, 14),
        /* [69] */ ShaderProgramVariable("uRefractionViewportLookupScale", 3, false, 14),
        /* [70] */ ShaderProgramVariable("uCausticsMap", 9, false, 14),
        /* [71] */ ShaderProgramVariable("uCausticsMapSize", 1, false, 14),
        /* [72] */ ShaderProgramVariable("uCausticsComputeResolution", 1, false, 14),
        /* [73] */ ShaderProgramVariable("uCausticsPlaneHeight", 0, false, 14),
        /* [74] */ ShaderProgramVariable("uCausticsViewProjMatrix", 30, false, 14),
        /* [75] */ ShaderProgramVariable("uCausticsScale", 0, false, 14),
        /* [76] */ ShaderProgramVariable("uCausticsRefractionScale", 0, false, 14),
        /* [77] */ ShaderProgramVariable("uCausticsFade", 3, false, 14),
        /* [78] */ ShaderProgramVariable("uCausticsOverWaterFade", 1, false, 14),
        /* [79] */ ShaderProgramVariable("uViewportLookupScale", 3, false, 14),
        /* [80] */ ShaderProgramVariable("uViewportOffsetScale", 3, false, 14),
        /* [81] */ ShaderProgramVariable("uFullScreenLookupScale", 3, false, 14),
        /* [82] */ ShaderProgramVariable("uViewportMapTextureSize", 1, false, 14),
        /* [83] */ ShaderProgramVariable("uTexelSize", 1, false, 14),
        /* [84] */ ShaderProgramVariable("uCoordOffset", 1, false, 14),
        /* [85] */ ShaderProgramVariable("uCoordScale", 1, false, 14),
        /* [86] */ ShaderProgramVariable("uReproject", 0, false, 14),
        /* [87] */ ShaderProgramVariable("uClipPlane", 3, false, 14),
        /* [88] */ ShaderProgramVariable("uPointLightIndicesMap", 9, false, 14),
        /* [89] */ ShaderProgramVariable("uPointLightIndicesLevel", 0, false, 14),
        /* [90] */ ShaderProgramVariable("uPointLightIndicesClampLimits", 3, false, 14),
        /* [91] */ ShaderProgramVariable("uPointLightData", 3, false, 14),
        /* [92] */ ShaderProgramVariable("uSkyBoxMap1", 9, false, 14),
        /* [93] */ ShaderProgramVariable("uSkyBoxMap2", 9, false, 14),
        /* [94] */ ShaderProgramVariable("uSkyBoxInterpolant", 0, false, 14),
        /* [95] */ ShaderProgramVariable("uSkyBoxUseFirst", 9, false, 14),
        /* [96] */ ShaderProgramVariable("uSkyBoxUseSecond", 9, false, 14),
        /* [97] */ ShaderProgramVariable("uExposure", 0, false, 14),
        /* [98] */ ShaderProgramVariable("uViewportMap", 9, false, 14),
        /* [99] */ ShaderProgramVariable("uParams", 3, false, 14),
        /* [100] */ ShaderProgramVariable("uZFar", 0, false, 14),
        /* [101] */ ShaderProgramVariable("uMinSamples", 0, false, 14),
        /* [102] */ ShaderProgramVariable("uBaseSamples", 0, false, 14),
        /* [103] */ ShaderProgramVariable("uSSAOMap", 9, false, 14),
        /* [104] */ ShaderProgramVariable("uGeometryAwareBlurParams", 1, false, 14),
        /* [105] */ ShaderProgramVariable("uColorTexture", 9, false, 14),
        /* [106] */ ShaderProgramVariable("uNormalTexture", 9, false, 14),
        /* [107] */ ShaderProgramVariable("uDepthTexture", 9, false, 14),
        /* [108] */ ShaderProgramVariable("uNoiseTexture", 9, false, 14),
        /* [109] */ ShaderProgramVariable("uInverseNoiseTexSize", 1, false, 14),
        /* [110] */ ShaderProgramVariable("uSSAOTexture", 9, false, 14),
        /* [111] */ ShaderProgramVariable("uCameraPosition", 2, false, 14),
        /* [112] */ ShaderProgramVariable("uTick", 0, false, 14),
        /* [113] */ ShaderProgramVariable("uTextureStep", 1, false, 14),
        /* [114] */ ShaderProgramVariable("uTint", 3, false, 14),
        /* [115] */ ShaderProgramVariable("uHighlightScale", 0, false, 14),
        /* [116] */ ShaderProgramVariable("uFade", 0, false, 14),
        /* [117] */ ShaderProgramVariable("uGridSize", 0, false, 14),
        /* [118] */ ShaderProgramVariable("uVertexScale", 0, false, 14),
        /* [119] */ ShaderProgramVariable("sTexture", 9, false, 14),
        /* [120] */ ShaderProgramVariable("uWaterFeatureFlags", 3, false, 14),
        /* [121] */ ShaderProgramVariable("uWaterTickFade", 1, false, 14),
        /* [122] */ ShaderProgramVariable("uWaterFoamScaleFoamDepth", 1, false, 14),
        /* [123] */ ShaderProgramVariable("uWaterRotMatrix", 29, false, 14),
        /* [124] */ ShaderProgramVariable("uWaterUVRotationMatrix", 29, false, 14),
        /* [125] */ ShaderProgramVariable("uWaterFlow_FlowSpeedInv_YTranslate", 3, false, 14),
        /* [126] */ ShaderProgramVariable("uWaterColour", 3, false, 14),
        /* [127] */ ShaderProgramVariable("uWaterWaveHeight_WaveLengthInv_GridRes_EdgeFadeSize", 3, false, 14),
        /* [128] */ ShaderProgramVariable("uWaterNormalMapTextureScales_FlowNoiseScale", 3, false, 14),
        /* [129] */ ShaderProgramVariable("uWaterDepthFadeAlphaInv_FadeWaveHeightInv_Offset", 2, false, 14),
        /* [130] */ ShaderProgramVariable("uWaterReflectionStrength", 0, false, 14),
        /* [131] */ ShaderProgramVariable("uWaterNormalBRDFParams", 3, false, 14),
        /* [132] */ ShaderProgramVariable("uWaterSpecularColour", 2, false, 14),
        /* [133] */ ShaderProgramVariable("uWaterMaskStrength", 0, false, 14),
        /* [134] */ ShaderProgramVariable("uWaterReflectionMapContribution", 0, false, 14),
        /* [135] */ ShaderProgramVariable("uWaterTextureFoam", 9, false, 14),
        /* [136] */ ShaderProgramVariable("uWaterExtinctionRGBDepthMetres", 2, false, 14),
        /* [137] */ ShaderProgramVariable("uWaterExtinctionOpaqueWaterColour", 2, false, 14),
        /* [138] */ ShaderProgramVariable("uWaterExtinctionVisibilityMetres", 0, false, 14),
        /* [139] */ ShaderProgramVariable("uWaterNormalMapTexture0", 3, false, 14),
        /* [140] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].flowSpeed_spareyzw", 3, false, 14),
        /* [141] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].uvScale_uvOffset", 3, false, 14),
        /* [142] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].uvRotation", 28, false, 14),
        /* [143] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[0].flowRotation", 28, false, 14),
        /* [144] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].flowSpeed_spareyzw", 3, false, 14),
        /* [145] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].uvScale_uvOffset", 3, false, 14),
        /* [146] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].uvRotation", 28, false, 14),
        /* [147] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[0].flowRotation", 28, false, 14),
        /* [148] */ ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[0]", 3, false, 14),
        /* [149] */ ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[0]", 3, false, 14),
        /* [150] */ ShaderProgramVariable("uWaterNormalMapTexture1", 3, false, 14),
        /* [151] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].flowSpeed_spareyzw", 3, false, 14),
        /* [152] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].uvScale_uvOffset", 3, false, 14),
        /* [153] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].uvRotation", 28, false, 14),
        /* [154] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[1].flowRotation", 28, false, 14),
        /* [155] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].flowSpeed_spareyzw", 3, false, 14),
        /* [156] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].uvScale_uvOffset", 3, false, 14),
        /* [157] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].uvRotation", 28, false, 14),
        /* [158] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[1].flowRotation", 28, false, 14),
        /* [159] */ ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[1]", 3, false, 14),
        /* [160] */ ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[1]", 3, false, 14),
        /* [161] */ ShaderProgramVariable("uWaterNormalMapTexture2", 3, false, 14),
        /* [162] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].flowSpeed_spareyzw", 3, false, 14),
        /* [163] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].uvScale_uvOffset", 3, false, 14),
        /* [164] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].uvRotation", 28, false, 14),
        /* [165] */ ShaderProgramVariable("uWaterNormalMapTexCoordParams[2].flowRotation", 28, false, 14),
        /* [166] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].flowSpeed_spareyzw", 3, false, 14),
        /* [167] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].uvScale_uvOffset", 3, false, 14),
        /* [168] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].uvRotation", 28, false, 14),
        /* [169] */ ShaderProgramVariable("uWaterNormalMapMacroTexCoordParams[2].flowRotation", 28, false, 14),
        /* [170] */ ShaderProgramVariable("uSampleWeight_uvDistortion_sparezw[2]", 3, false, 14),
        /* [171] */ ShaderProgramVariable("uMacroSampleWeight_uvDistortion_sparezw[2]", 3, false, 14),
        /* [172] */ ShaderProgramVariable("uWaterStillWaterNormalStrength_spareyzw", 3, false, 14),
        /* [173] */ ShaderProgramVariable("uWaterEmissiveMapTexture", 3, false, 14),
        /* [174] */ ShaderProgramVariable("uWaterEmissiveColourEmissiveSource", 3, false, 14),
        /* [175] */
        ShaderProgramVariable("uEmissiveScale_MapRefractionDepth_EmissiveMapMode_EmissiveMapExists", 3, false, 14),
        /* [176] */ ShaderProgramVariable("uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale", 3, false, 14),
        /* [177] */ ShaderProgramVariable("uEmissiveMapScale_EmissiveUVMode", 1, false, 14),
        /* [178] */ ShaderProgramVariable("uEmissiveBlend", 0, false, 14),
        /* [179] */ ShaderProgramVariable("sDepthTex", 9, false, 14),
        /* [180] */ ShaderProgramVariable("sDitherTex", 9, false, 14),
        /* [181] */ ShaderProgramVariable("sNoiseTex", 9, false, 14),
        /* [182] */ ShaderProgramVariable("uMieG", 3, false, 14),
        /* [183] */ ShaderProgramVariable("uMieGSky", 3, false, 14),
        /* [184] */ ShaderProgramVariable("uVolumetricScatteringParameters", 3, false, 14),
        /* [185] */ ShaderProgramVariable("uSampleCount", 9, false, 14),
        /* [186] */ ShaderProgramVariable("uTime", 0, false, 14),
        /* [187] */ ShaderProgramVariable("uVolumetricLitFogColour", 2, false, 14),
        /* [188] */ ShaderProgramVariable("uVolumetricUnlitFogColour", 2, false, 14),
        /* [189] */ ShaderProgramVariable("uVolumetricDitherMat", 30, false, 14),
        /* [190] */ ShaderProgramVariable("uGroundFogHeight_Falloff", 3, false, 14),
        /* [191] */ ShaderProgramVariable("u3DNoiseFrequency_Strength", 3, false, 14),
        /* [192] */ ShaderProgramVariable("u3DNoiseWind_Power", 3, false, 14),
        /* [193] */ ShaderProgramVariable("uZBufferParams", 3, false, 14),
        /* [194] */ ShaderProgramVariable("uBilateralBlurDirectionAndDepthFalloff", 3, false, 14),
        /* [195] */ ShaderProgramVariable("sHalfResSourceTex", 9, false, 14),
        /* [196] */ ShaderProgramVariable("sHalfResDepthTex", 9, false, 14),
        /* [197] */ ShaderProgramVariable("uParticleInvSoftScale", 0, false, 14),
        /* [198] */ ShaderProgramVariable("uDebugReturn", 0, false, 14),
        /* [199] */ ShaderProgramVariable("uDebugInstanceColour", 3, false, 14),
        /* [200] */ ShaderProgramVariable("uDebugTexelDensity", 3, false, 14),
        /* [201] */ ShaderProgramVariable("uDebugEmissiveScale", 0, false, 14),
        /* [202] */ ShaderProgramVariable("uDebugEmissiveMaskMultiplier", 0, false, 14),
        /* [203] */ ShaderProgramVariable("uDebugTerrainSpecular", 3, false, 14),
        /* [204] */ ShaderProgramVariable("uDebugMaterialHighlight", 0, false, 14),
        /* [205] */ ShaderProgramVariable("uStippleTransparencyClipParams", 3, false, 14),
        /* [206] */ ShaderProgramVariable("uStippleCutoutPosDepthVisibility", 3, false, 14),
        /* [207] */ ShaderProgramVariable("uStippleCutoutStartRangeAndMinAlpha", 3, false, 14),
        /* [208] */ ShaderProgramVariable("aVertexPosition2D", 14, false, 0),
        /* [209] */ ShaderProgramVariable("aVertexPosition", 15, false, 0),
        /* [210] */ ShaderProgramVariable("aVertexPosition", 7, false, 0),
        /* [211] */ ShaderProgramVariable("aVertexPosition", 16, false, 0),
        /* [212] */ ShaderProgramVariable("aVertexPositionDepthOffset", 16, false, 0),
        /* [213] */ ShaderProgramVariable("aVertexPosition2D", 1, false, 0),
        /* [214] */ ShaderProgramVariable("aVertexPosition", 2, false, 0),
        /* [215] */ ShaderProgramVariable("aVertexPosition", 3, false, 0),
        /* [216] */ ShaderProgramVariable("aVertexPositionDepthOffset", 3, false, 0),
        /* [217] */ ShaderProgramVariable("aVertexPosition_BoneLabel", 16, false, 0),
        /* [218] */ ShaderProgramVariable("aVertexSkinBones", 12, false, 0),
        /* [219] */ ShaderProgramVariable("aVertexSkinWeights", 12, true, 0),
        /* [220] */ ShaderProgramVariable("aVertexPosition_Size", 3, false, 0),
        /* [221] */ ShaderProgramVariable("aVertexNormal", 2, false, 3),
        /* [222] */ ShaderProgramVariable("aVertexNormal", 15, true, 3),
        /* [223] */ ShaderProgramVariable("aVertexNormal", 7, true, 3),
        /* [224] */ ShaderProgramVariable("aVertexNormal_FogProportion", 3, false, 3),
        /* [225] */ ShaderProgramVariable("aVertexNormal_FogProportion", 8, true, 3),
        /* [226] */ ShaderProgramVariable("aVertexNormal_BatchFlags", 8, true, 3),
        /* [227] */ ShaderProgramVariable("aVertexTangent", 8, true, 6),
        /* [228] */ ShaderProgramVariable("aSpecularFactor", 17, false, 14),
        /* [229] */ ShaderProgramVariable("aSpecular_NormalScale", 18, false, 14),
        /* [230] */ ShaderProgramVariable("aMaterialSettingsSlotXY3", 18, false, 14),
        /* [231] */ ShaderProgramVariable("aMaterialSettingsSlotXY_UV", 12, false, 14),
        /* [232] */ ShaderProgramVariable("aMaterialSettingsSlotXY_Rotation", 12, false, 14),
        /* [233] */ ShaderProgramVariable("aMaterialSettingsSlotXY_TilePositionXZ", 12, false, 14),
        /* [234] */ ShaderProgramVariable("aMaterialSettingsSlotXY_MaterialSettingsSlotXY2", 12, false, 14),
        /* [235] */ ShaderProgramVariable("aVertexColour", 12, true, 10),
        /* [236] */ ShaderProgramVariable("aVertexColourUnwhitenedRGB_TilePositionLevel", 12, true, 10),
        /* [237] */ ShaderProgramVariable("aTextureUV", 1, false, 5),
        /* [238] */ ShaderProgramVariable("aTextureUV", 26, false, 5),
        /* [239] */ ShaderProgramVariable("aTextureUVAtlasMin", 1, false, 5),
        /* [240] */ ShaderProgramVariable("aTextureUVAtlasExtents", 1, false, 5),
        /* [241] */ ShaderProgramVariable("aTextureSlot", 20, false, 14),
        /* [242] */ ShaderProgramVariable("aTextureScale", 12, false, 14),
        /* [243] */ ShaderProgramVariable("aTextureWeight", 12, false, 14),
        /* [244] */ ShaderProgramVariable("aTextureUse", 0, false, 14),
        /* [245] */ ShaderProgramVariable("aSamplerWrap_TilePosition", 12, false, 14),
        /* [246] */ ShaderProgramVariable("aSamplerWrap_Bone_Label", 12, false, 14),
        /* [247] */ ShaderProgramVariable("aTilePosition", 11, false, 14),
        /* [248] */ ShaderProgramVariable("aBone_Label_BatchFlags", 11, false, 14),
        /* [249] */ ShaderProgramVariable("aBone_Label_BillboardLabel_Joint", 12, false, 14),
        /* [250] */ ShaderProgramVariable("aRotation_UV", 11, false, 14),
        /* [251] */ ShaderProgramVariable("aMaterialProperties", 12, false, 14),
        /* [252] */ ShaderProgramVariable("aBillboardSize", 1, false, 14),
        /* [253] */ ShaderProgramVariable("aParticleOrigin_CreationTime", 3, false, 14),
        /* [254] */ ShaderProgramVariable("aParticleOffset", 1, false, 14),
        /* [255] */ ShaderProgramVariable("aParticleUVAnimationData", 12, false, 14),
        /* [256] */ ShaderProgramVariable("aParticleVelocity", 2, false, 14),
        /* [257] */ ShaderProgramVariable("aScatteringViewDirection", 2, false, 14),
        /* [258] */ ShaderProgramVariable("aWaterPosition_Depth", 16, false, 0),
        /* [259] */ ShaderProgramVariable("aWaterFlowDataPatchFlow0", 14, false, 14),
        /* [260] */ ShaderProgramVariable("aWaterFlowDataPatchFlow1", 14, false, 14),
        /* [261] */ ShaderProgramVariable("aWaterFlowDataPatchFlow2", 14, false, 14),
        /* [262] */ ShaderProgramVariable("aWaterFlowDataFlowNoise0_FlowNoise1", 8, false, 14),
        /* [263] */ ShaderProgramVariable("aWaterFlowDataFlowNoise2_FlowIndex_Spare", 8, false, 14),
        /* [264] */ ShaderProgramVariable("aDummy0", 17, false, 15),
        /* [265] */ ShaderProgramVariable("aDummy1", 17, false, 15),
        /* [266] */ ShaderProgramVariable("aDummy2", 17, false, 15),
        /* [267] */ ShaderProgramVariable("aDummy3", 17, false, 15),
        /* [268] */ ShaderProgramVariable("aDummy0", 9, false, 15),
        /* [269] */ ShaderProgramVariable("aDummy1", 9, false, 15),
        /* [270] */ ShaderProgramVariable("aDummy2", 9, false, 15),
        /* [271] */ ShaderProgramVariable("aDummy3", 9, false, 15),
    };

    // 0x1008a5e20
    void ___cxx_global_var_init_475(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5e60
    void ___cxx_global_var_init_476(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5ea0
    void ___cxx_global_var_init_477(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a5ee0
    void ___cxx_global_var_init_478(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a5f20
    void ___cxx_global_var_init_479(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5f50
    void ___cxx_global_var_init_480(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a5f90
    void ___cxx_global_var_init_481(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a5fd0
    void ___cxx_global_var_init_482(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6010
    void ___cxx_global_var_init_483(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6050
    void ___cxx_global_var_init_484(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6090
    void ___cxx_global_var_init_485(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a60d0
    void ___cxx_global_var_init_486(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6110
    void ___cxx_global_var_init_487(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a6150
    void ___cxx_global_var_init_488(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a61b0
    void ___cxx_global_var_init_489(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a61f0
    void ___cxx_global_var_init_490(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a6250
    void ___cxx_global_var_init_491(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6290
    void ___cxx_global_var_init_492(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a62d0
    void ___cxx_global_var_init_493(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008a6310
    void ___cxx_global_var_init_494(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45a8;
        if (*PTR_m_mutex_100ee45a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008a6350
    void __GLOBAL__sub_I_unity_6_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_12();
        ___cxx_global_var_init_55();
        ___cxx_global_var_init_85();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
