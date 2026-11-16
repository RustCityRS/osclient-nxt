// libs/graphics/postprocess/shaders/ShaderVariables.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "ShaderVariables.h"

namespace jag::postprocess {
    // 0x103bc1068, set at startup by ___cxx_global_var_init
    render::ShaderProgramVariable _shaderVariables[48] = {
        /* [0] */ ShaderProgramVariable("sSceneHDRTex", 9, false, 14),
        /* [1] */ ShaderProgramVariable("sAvgLumTex", 9, false, 14),
        /* [2] */ ShaderProgramVariable("sSourceTex", 9, false, 14),
        /* [3] */ ShaderProgramVariable("sSourceDepthTex", 9, false, 14),
        /* [4] */ ShaderProgramVariable("sDepthTex", 9, false, 14),
        /* [5] */ ShaderProgramVariable("uMinBlackLum", 0, false, 14),
        /* [6] */ ShaderProgramVariable("uMaxWhiteLum", 0, false, 14),
        /* [7] */ ShaderProgramVariable("uMaxLum", 0, false, 14),
        /* [8] */ ShaderProgramVariable("uExposureKey", 0, false, 14),
        /* [9] */ ShaderProgramVariable("uMinAutoExposure", 0, false, 14),
        /* [10] */ ShaderProgramVariable("uMaxAutoExposure", 0, false, 14),
        /* [11] */ ShaderProgramVariable("uZBufferParams", 3, false, 14),
        /* [12] */ ShaderProgramVariable("uViewportLookupScale", 3, false, 14),
        /* [13] */ ShaderProgramVariable("uSampleOffsets3x3", 3, false, 14),
        /* [14] */ ShaderProgramVariable("uSampleOffsets2x2", 3, false, 14),
        /* [15] */ ShaderProgramVariable("uSampleOffsets4x4", 3, false, 14),
        /* [16] */ ShaderProgramVariable("sLogLumTex", 9, false, 14),
        /* [17] */ ShaderProgramVariable("uTimeDelta", 0, false, 14),
        /* [18] */ ShaderProgramVariable("uExposureSpeedMul", 0, false, 14),
        /* [19] */ ShaderProgramVariable("sPrevAdaptedLumTex", 9, false, 14),
        /* [20] */ ShaderProgramVariable("uBrightnessThreshold", 0, false, 14),
        /* [21] */ ShaderProgramVariable("uSampleOffsetsWeights", 3, false, 14),
        /* [22] */ ShaderProgramVariable("uSourceTexSlice", 0, false, 14),
        /* [23] */ ShaderProgramVariable("uSamplePixelSizeAndIteration", 2, false, 14),
        /* [24] */ ShaderProgramVariable("uSamplePixelAndHalfPixelSizes", 3, false, 14),
        /* [25] */ ShaderProgramVariable("uBlueShiftCoef", 0, false, 14),
        /* [26] */ ShaderProgramVariable("uBloomScale", 0, false, 14),
        /* [27] */ ShaderProgramVariable("sBloomTex", 9, false, 14),
        /* [28] */ ShaderProgramVariable("uFxaaQualityRcpFrame", 1, false, 14),
        /* [29] */ ShaderProgramVariable("uFxaaQualitySubpix", 0, false, 14),
        /* [30] */ ShaderProgramVariable("uFxaaQualityEdgeThreshold", 0, false, 14),
        /* [31] */ ShaderProgramVariable("uFxaaQualityEdgeThresholdMin", 0, false, 14),
        /* [32] */ ShaderProgramVariable("uColourRemapWeightings", 3, false, 14),
        /* [33] */ ShaderProgramVariable("sColourRemapTex1", 9, false, 14),
        /* [34] */ ShaderProgramVariable("sColourRemapTex2", 9, false, 14),
        /* [35] */ ShaderProgramVariable("sColourRemapTex3", 9, false, 14),
        /* [36] */ ShaderProgramVariable("uOutlineAndShadowRcpFrame", 1, false, 14),
        /* [37] */ ShaderProgramVariable("uOutlineAndShadowColour", 3, false, 14),
        /* [38] */ ShaderProgramVariable("uOutlineAndShadowSwitch", 9, false, 14),
        /* [39] */ ShaderProgramVariable("uOutlineAndShadowClampSwitch", 9, false, 14),
        /* [40] */ ShaderProgramVariable("sCubeMap", 9, false, 14),
        /* [41] */ ShaderProgramVariable("uDofFocalPoint", 0, false, 14),
        /* [42] */ ShaderProgramVariable("uDofParams", 3, false, 14),
        /* [43] */ ShaderProgramVariable("uBokehParams", 3, false, 14),
        /* [44] */ ShaderProgramVariable("uFocusSize", 1, false, 14),
        /* [45] */ ShaderProgramVariable("sBlurNearTex", 9, false, 14),
        /* [46] */ ShaderProgramVariable("sBlurFarTex", 9, false, 14),
        /* [47] */ ShaderProgramVariable("sFocusTex", 9, false, 14),
    };

    // 0x1009a9950
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a9990
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a99d0
    void ___cxx_global_var_init_57(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9a10
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9a50
    void ___cxx_global_var_init_59(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a9a80
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9ac0
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a9b00
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9b40
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a9b80
    void __GLOBAL__sub_I_unity_1_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::postprocess
