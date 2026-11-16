// libs/graphics/runetek7/animation/asm/BlendTreeNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendTreeNode.h"

namespace jag::graphics {
    // 0x100f44b70
    int32_t BlendTreeNode::m_blendTreeNodeBlendModes__[16] = {
        0, 0, 14431077, 1, 1, 0, 14763710, 1, 2, 0, 14764726, 1, 3, 0, 14764738, 1,
    };

    // 0x103bc0e88, set at startup by ___cxx_global_var_init.171
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> BlendTreeNode::NullAnimBase =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bc0e98, set at startup by ___cxx_global_var_init.172
    shared_ptr<oldscape::dash3d::Decor> BlendTreeNode::EmptyBindInfo[1] = {
        /* [0] */ shared_ptr<oldscape::dash3d::Decor>(
            (shared_ptr<oldscape::dash3d::GroundDecor>*)&BlendTreeNode::NullAnimBase),
        /* [1] */ 0,
    };

    // 0x103bc0eb0, set at startup by ___cxx_global_var_init.173
    StringEnum BlendTreeNode::m_blendTreeNodeBlendModes =
        StringEnum((StringEnumEntry*)&BlendTreeNode::m_blendTreeNodeBlendModes__, 4);

    // 0x100009e70: BlendTreeNode::~BlendTreeNode() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100664980: BlendTreeNode::SetDebugDrawPose(bool) has the same machine code as audio::SoundResource::SetStreamed(bool)

    // 0x1009761c0
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100976200
    void ___cxx_global_var_init_227(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100976240
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976280
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009762c0
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009762f0
    void ___cxx_global_var_init_231(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976330
    void ___cxx_global_var_init_232(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100976370
    void ___cxx_global_var_init_233(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009763b0
    void ___cxx_global_var_init_234(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009763f0
    void ___cxx_global_var_init_235(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976430
    void ___cxx_global_var_init_236(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100976490
    void ___cxx_global_var_init_237(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009764d0
    void ___cxx_global_var_init_238(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976510
    void ___cxx_global_var_init_239(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100976570
    void ___cxx_global_var_init_240(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009765d0
    void ___cxx_global_var_init_241(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976610
    void ___cxx_global_var_init_242(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976650
    void ___cxx_global_var_init_243(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976690
    void ___cxx_global_var_init_244(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6570;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009766d0
    void ___cxx_global_var_init_245(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4640;
        if (*PTR_m_mutex_100ee4640 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6040, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976710
    void ___cxx_global_var_init_246(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976750
    void ___cxx_global_var_init_247(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976790
    void ___cxx_global_var_init_248(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009767d0
    void ___cxx_global_var_init_249(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976810
    void ___cxx_global_var_init_250(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976850
    void ___cxx_global_var_init_251(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976890
    void ___cxx_global_var_init_252(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009768d0
    void __GLOBAL__sub_I_unity_1_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_171();
        ___cxx_global_var_init_172();
        ___cxx_global_var_init_173();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
