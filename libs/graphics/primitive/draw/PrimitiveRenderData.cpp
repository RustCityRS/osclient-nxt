// libs/graphics/primitive/draw/PrimitiveRenderData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.draw

#include "PrimitiveRenderData.h"

namespace jag {
    // 0x103bd9aa0, set at startup by ___cxx_global_var_init
    render::VertexElementDesc PrimVertUV::m_VertexElemDescs = VertexElementDesc(0, "aTexCoord", 1, false, 5, 0);

    // 0x103bd9ad0, set at startup by ___cxx_global_var_init.1
    render::VertexElementDesc PrimVertPos::m_VertexElemDescs = VertexElementDesc(0, "aPos", 2, false, 0, 0);

    // 0x103bd9b50, set at startup by ___cxx_global_var_init.5
    render::VertexElementDesc PrimVertPosUV::m_VertexElemDescs[2] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, false, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord", 1, false, 5, 0),
    };

    // 0x103bd9c20, set at startup by ___cxx_global_var_init.7
    render::VertexElementDesc PrimVertPosNormUV4Col::m_VertexElemDescs[7] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, false, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord0", 1, false, 5, 0),
        /* [2] */ VertexElementDesc(0, "aTexCoord1", 1, false, 5, 1),
        /* [3] */ VertexElementDesc(0, "aTexCoord2", 1, false, 5, 2),
        /* [4] */ VertexElementDesc(0, "aTexCoord3", 1, false, 5, 3),
        /* [5] */ VertexElementDesc(0, "aTexBlendWeights", 3, false, 14, 0),
        /* [6] */ VertexElementDesc(0, "aColour", 3, false, 10, 0),
    };

    // 0x100bc4050
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc4090
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc40d0
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4110
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4150
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc4180
    void ___cxx_global_var_init_65(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc41c0
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100bc4200
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4240
    void ___cxx_global_var_init_68(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4280
    void ___cxx_global_var_init_69(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4978;
        if (*PTR_m_pSingleton_100ee4978 == '\0') {
            ___cxa_atexit(std::unique_ptr<PrimitiveShaderFamily>::~unique_ptr, PTR_m_pSingleton_100ee6be8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc42c0
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100bc4300
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_5();
        ___cxx_global_var_init_6();
        ___cxx_global_var_init_7();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag
