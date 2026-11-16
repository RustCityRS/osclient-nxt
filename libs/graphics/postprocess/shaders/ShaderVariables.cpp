// libs/graphics/postprocess/shaders/ShaderVariables.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "ShaderVariables.h"

namespace jag::postprocess {
    // 0x103bc1068, 1536 bytes, __common; set at startup by ___cxx_global_var_init
    render::ShaderProgramVariable _shaderVariables[48] = {
        /* [0] */ ShaderProgramVariable("sSceneHDRTex", 9, 0, 14),
        /* [1] */ ShaderProgramVariable("sAvgLumTex", 9, 0, 14),
        /* [2] */ ShaderProgramVariable("sSourceTex", 9, 0, 14),
        /* [3] */ ShaderProgramVariable("sSourceDepthTex", 9, 0, 14),
        /* [4] */ ShaderProgramVariable("sDepthTex", 9, 0, 14),
        /* [5] */ ShaderProgramVariable("uMinBlackLum", 0, 0, 14),
        /* [6] */ ShaderProgramVariable("uMaxWhiteLum", 0, 0, 14),
        /* [7] */ ShaderProgramVariable("uMaxLum", 0, 0, 14),
        /* [8] */ ShaderProgramVariable("uExposureKey", 0, 0, 14),
        /* [9] */ ShaderProgramVariable("uMinAutoExposure", 0, 0, 14),
        /* [10] */ ShaderProgramVariable("uMaxAutoExposure", 0, 0, 14),
        /* [11] */ ShaderProgramVariable("uZBufferParams", 3, 0, 14),
        /* [12] */ ShaderProgramVariable("uViewportLookupScale", 3, 0, 14),
        /* [13] */ ShaderProgramVariable("uSampleOffsets3x3", 3, 0, 14),
        /* [14] */ ShaderProgramVariable("uSampleOffsets2x2", 3, 0, 14),
        /* [15] */ ShaderProgramVariable("uSampleOffsets4x4", 3, 0, 14),
        /* [16] */ ShaderProgramVariable("sLogLumTex", 9, 0, 14),
        /* [17] */ ShaderProgramVariable("uTimeDelta", 0, 0, 14),
        /* [18] */ ShaderProgramVariable("uExposureSpeedMul", 0, 0, 14),
        /* [19] */ ShaderProgramVariable("sPrevAdaptedLumTex", 9, 0, 14),
        /* [20] */ ShaderProgramVariable("uBrightnessThreshold", 0, 0, 14),
        /* [21] */ ShaderProgramVariable("uSampleOffsetsWeights", 3, 0, 14),
        /* [22] */ ShaderProgramVariable("uSourceTexSlice", 0, 0, 14),
        /* [23] */ ShaderProgramVariable("uSamplePixelSizeAndIteration", 2, 0, 14),
        /* [24] */ ShaderProgramVariable("uSamplePixelAndHalfPixelSizes", 3, 0, 14),
        /* [25] */ ShaderProgramVariable("uBlueShiftCoef", 0, 0, 14),
        /* [26] */ ShaderProgramVariable("uBloomScale", 0, 0, 14),
        /* [27] */ ShaderProgramVariable("sBloomTex", 9, 0, 14),
        /* [28] */ ShaderProgramVariable("uFxaaQualityRcpFrame", 1, 0, 14),
        /* [29] */ ShaderProgramVariable("uFxaaQualitySubpix", 0, 0, 14),
        /* [30] */ ShaderProgramVariable("uFxaaQualityEdgeThreshold", 0, 0, 14),
        /* [31] */ ShaderProgramVariable("uFxaaQualityEdgeThresholdMin", 0, 0, 14),
        /* [32] */ ShaderProgramVariable("uColourRemapWeightings", 3, 0, 14),
        /* [33] */ ShaderProgramVariable("sColourRemapTex1", 9, 0, 14),
        /* [34] */ ShaderProgramVariable("sColourRemapTex2", 9, 0, 14),
        /* [35] */ ShaderProgramVariable("sColourRemapTex3", 9, 0, 14),
        /* [36] */ ShaderProgramVariable("uOutlineAndShadowRcpFrame", 1, 0, 14),
        /* [37] */ ShaderProgramVariable("uOutlineAndShadowColour", 3, 0, 14),
        /* [38] */ ShaderProgramVariable("uOutlineAndShadowSwitch", 9, 0, 14),
        /* [39] */ ShaderProgramVariable("uOutlineAndShadowClampSwitch", 9, 0, 14),
        /* [40] */ ShaderProgramVariable("sCubeMap", 9, 0, 14),
        /* [41] */ ShaderProgramVariable("uDofFocalPoint", 0, 0, 14),
        /* [42] */ ShaderProgramVariable("uDofParams", 3, 0, 14),
        /* [43] */ ShaderProgramVariable("uBokehParams", 3, 0, 14),
        /* [44] */ ShaderProgramVariable("uFocusSize", 1, 0, 14),
        /* [45] */ ShaderProgramVariable("sBlurNearTex", 9, 0, 14),
        /* [46] */ ShaderProgramVariable("sBlurFarTex", 9, 0, 14),
        /* [47] */ ShaderProgramVariable("sFocusTex", 9, 0, 14),
    };

    // 0x1009a9370, 1504 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&_shaderVariables) render::ShaderProgramVariable("sSceneHDRTex", 9, 0, 14);
        new (&DAT_103bc1088) render::ShaderProgramVariable("sAvgLumTex", 9, 0, 14);
        new (&DAT_103bc10a8) render::ShaderProgramVariable("sSourceTex", 9, 0, 14);
        new (&DAT_103bc10c8) render::ShaderProgramVariable("sSourceDepthTex", 9, 0, 14);
        new (&DAT_103bc10e8) render::ShaderProgramVariable("sDepthTex", 9, 0, 14);
        new (&DAT_103bc1108) render::ShaderProgramVariable("uMinBlackLum", 0, 0, 14);
        new (&DAT_103bc1128) render::ShaderProgramVariable("uMaxWhiteLum", 0, 0, 14);
        new (&DAT_103bc1148) render::ShaderProgramVariable("uMaxLum", 0, 0, 14);
        new (&DAT_103bc1168) render::ShaderProgramVariable("uExposureKey", 0, 0, 14);
        new (&DAT_103bc1188) render::ShaderProgramVariable("uMinAutoExposure", 0, 0, 14);
        new (&DAT_103bc11a8) render::ShaderProgramVariable("uMaxAutoExposure", 0, 0, 14);
        new (&DAT_103bc11c8) render::ShaderProgramVariable("uZBufferParams", 3, 0, 14);
        new (&DAT_103bc11e8) render::ShaderProgramVariable("uViewportLookupScale", 3, 0, 14);
        new (&DAT_103bc1208) render::ShaderProgramVariable("uSampleOffsets3x3", 3, 0, 14);
        new (&DAT_103bc1228) render::ShaderProgramVariable("uSampleOffsets2x2", 3, 0, 14);
        new (&DAT_103bc1248) render::ShaderProgramVariable("uSampleOffsets4x4", 3, 0, 14);
        new (&DAT_103bc1268) render::ShaderProgramVariable("sLogLumTex", 9, 0, 14);
        new (&DAT_103bc1288) render::ShaderProgramVariable("uTimeDelta", 0, 0, 14);
        new (&DAT_103bc12a8) render::ShaderProgramVariable("uExposureSpeedMul", 0, 0, 14);
        new (&DAT_103bc12c8) render::ShaderProgramVariable("sPrevAdaptedLumTex", 9, 0, 14);
        new (&DAT_103bc12e8) render::ShaderProgramVariable("uBrightnessThreshold", 0, 0, 14);
        new (&DAT_103bc1308) render::ShaderProgramVariable("uSampleOffsetsWeights", 3, 0, 14);
        new (&DAT_103bc1328) render::ShaderProgramVariable("uSourceTexSlice", 0, 0, 14);
        new (&DAT_103bc1348) render::ShaderProgramVariable("uSamplePixelSizeAndIteration", 2, 0, 14);
        new (&DAT_103bc1368) render::ShaderProgramVariable("uSamplePixelAndHalfPixelSizes", 3, 0, 14);
        new (&DAT_103bc1388) render::ShaderProgramVariable("uBlueShiftCoef", 0, 0, 14);
        new (&DAT_103bc13a8) render::ShaderProgramVariable("uBloomScale", 0, 0, 14);
        new (&DAT_103bc13c8) render::ShaderProgramVariable("sBloomTex", 9, 0, 14);
        new (&DAT_103bc13e8) render::ShaderProgramVariable("uFxaaQualityRcpFrame", 1, 0, 14);
        new (&DAT_103bc1408) render::ShaderProgramVariable("uFxaaQualitySubpix", 0, 0, 14);
        new (&DAT_103bc1428) render::ShaderProgramVariable("uFxaaQualityEdgeThreshold", 0, 0, 14);
        new (&DAT_103bc1448) render::ShaderProgramVariable("uFxaaQualityEdgeThresholdMin", 0, 0, 14);
        new (&DAT_103bc1468) render::ShaderProgramVariable("uColourRemapWeightings", 3, 0, 14);
        new (&DAT_103bc1488) render::ShaderProgramVariable("sColourRemapTex1", 9, 0, 14);
        new (&DAT_103bc14a8) render::ShaderProgramVariable("sColourRemapTex2", 9, 0, 14);
        new (&DAT_103bc14c8) render::ShaderProgramVariable("sColourRemapTex3", 9, 0, 14);
        new (&DAT_103bc14e8) render::ShaderProgramVariable("uOutlineAndShadowRcpFrame", 1, 0, 14);
        new (&DAT_103bc1508) render::ShaderProgramVariable("uOutlineAndShadowColour", 3, 0, 14);
        new (&DAT_103bc1528) render::ShaderProgramVariable("uOutlineAndShadowSwitch", 9, 0, 14);
        new (&DAT_103bc1548) render::ShaderProgramVariable("uOutlineAndShadowClampSwitch", 9, 0, 14);
        new (&DAT_103bc1568) render::ShaderProgramVariable("sCubeMap", 9, 0, 14);
        new (&DAT_103bc1588) render::ShaderProgramVariable("uDofFocalPoint", 0, 0, 14);
        new (&DAT_103bc15a8) render::ShaderProgramVariable("uDofParams", 3, 0, 14);
        new (&DAT_103bc15c8) render::ShaderProgramVariable("uBokehParams", 3, 0, 14);
        new (&DAT_103bc15e8) render::ShaderProgramVariable("uFocusSize", 1, 0, 14);
        new (&DAT_103bc1608) render::ShaderProgramVariable("sBlurNearTex", 9, 0, 14);
        new (&DAT_103bc1628) render::ShaderProgramVariable("sBlurFarTex", 9, 0, 14);
        new (&DAT_103bc1648) render::ShaderProgramVariable("sFocusTex", 9, 0, 14);
    }

    // 0x1009a9950, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a9990, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a99d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9a10, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9a50, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a9a80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9ac0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a9b00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9b40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9b80, 34 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_1_cxx.cxx
    void __GLOBAL__sub_I_unity_1_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::postprocess
