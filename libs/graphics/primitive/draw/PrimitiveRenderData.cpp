// libs/graphics/primitive/draw/PrimitiveRenderData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.draw

#include "PrimitiveRenderData.h"

namespace jag {
    // 0x103bd9aa0, 48 bytes, __common; set at startup by ___cxx_global_var_init
    render::VertexElementDesc PrimVertUV::m_VertexElemDescs = VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);

    // 0x103bd9ad0, 48 bytes, __common; set at startup by ___cxx_global_var_init.1
    render::VertexElementDesc PrimVertPos::m_VertexElemDescs = VertexElementDesc(0, "aPos", 2, 0, 0, 0);

    // 0x103bd9b50, 80 bytes, __common; set at startup by ___cxx_global_var_init.5
    render::VertexElementDesc PrimVertPosUV::m_VertexElemDescs[2] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, 0, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0),
    };

    // 0x103bd9c20, 280 bytes, __common; set at startup by ___cxx_global_var_init.7
    render::VertexElementDesc PrimVertPosNormUV4Col::m_VertexElemDescs[7] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, 0, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord0", 1, 0, 5, 0),
        /* [2] */ VertexElementDesc(0, "aTexCoord1", 1, 0, 5, 1),
        /* [3] */ VertexElementDesc(0, "aTexCoord2", 1, 0, 5, 2),
        /* [4] */ VertexElementDesc(0, "aTexCoord3", 1, 0, 5, 3),
        /* [5] */ VertexElementDesc(0, "aTexBlendWeights", 3, 0, 14, 0),
        /* [6] */ VertexElementDesc(0, "aColour", 3, 0, 10, 0),
    };

    // 0x100bc3d40, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&PrimVertUV::m_VertexElemDescs) render::VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);
    }

    // 0x100bc3d80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&PrimVertPos::m_VertexElemDescs) render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
    }

    // 0x100bc3e20, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5() {
        new (&PrimVertPosUV::m_VertexElemDescs) render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
        new (&DAT_103bd9b78) render::VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);
    }

    // 0x100bc3f10, 320 bytes, placed by the data it initialises
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7() {
        new (&PrimVertPosNormUV4Col::m_VertexElemDescs) render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
        new (&DAT_103bd9c48) render::VertexElementDesc(0, "aTexCoord0", 1, 0, 5, 0);
        new (&DAT_103bd9c70) render::VertexElementDesc(0, "aTexCoord1", 1, 0, 5, 1);
        new (&DAT_103bd9c98) render::VertexElementDesc(0, "aTexCoord2", 1, 0, 5, 2);
        new (&DAT_103bd9cc0) render::VertexElementDesc(0, "aTexCoord3", 1, 0, 5, 3);
        new (&DAT_103bd9ce8) render::VertexElementDesc(0, "aTexBlendWeights", 3, 0, 14, 0);
        new (&DAT_103bd9d10) render::VertexElementDesc(0, "aColour", 3, 0, 10, 0);
    }

    // 0x100bc4050, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc4090, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc40d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4110, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4150, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc4180, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc41c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc4200, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4240, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4280, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4978;
        if (*PTR_m_pSingleton_100ee4978 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<PrimitiveShaderFamily, std::default_delete<PrimitiveShaderFamily>>::~unique_ptr,
                PTR_m_pSingleton_100ee6be8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc42c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4300, 59 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_5();
        ___cxx_global_var_init_6();
        ___cxx_global_var_init_7();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag
