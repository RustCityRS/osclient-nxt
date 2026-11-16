// libs/graphics/runetek7/animation/asm/BlendTreeNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendTreeNode.h"

namespace jag::graphics {
    // 0x100f44b70, 64 bytes, __data
    BlendTreeNode::m_blendTreeNodeBlendModes__ = {
        0, 0, 14431077, 1, 1, 0, 14763710, 1, 2, 0, 14764726, 1, 3, 0, 14764738, 1,
    };

    // 0x103bc0e88, 16 bytes, __common; set at startup by ___cxx_global_var_init.171
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> BlendTreeNode::NullAnimBase =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr*)0);

    // 0x103bc0e98, 24 bytes, __common; set at startup by ___cxx_global_var_init.172
    shared_ptr<oldscape::dash3d::Decor> BlendTreeNode::EmptyBindInfo[1] = {
        /* [0] */ shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&BlendTreeNode::NullAnimBase),
        /* [1] */ 0,
    };

    // 0x103bc0eb0, 16 bytes, __common; set at startup by ___cxx_global_var_init.173
    StringEnum BlendTreeNode::m_blendTreeNodeBlendModes =
        StringEnum((StringEnumEntry*)&BlendTreeNode::m_blendTreeNodeBlendModes__, 4);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BlendTreeNode::~BlendTreeNode();

    // 0x100664980: the linker folded this into audio::SoundResource::SetStreamed(bool), which has identical code
    BlendTreeNode::SetDebugDrawPose(bool);

    // 0x100976100, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.171
    void ___cxx_global_var_init_171() {
        new (&BlendTreeNode::NullAnimBase) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        ___cxa_atexit(PTR__shared_ptr_100ee53a0, &BlendTreeNode::NullAnimBase, 4294967296);
    }

    // 0x100976140, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.172
    void ___cxx_global_var_init_172() {
        new (&BlendTreeNode::EmptyBindInfo)
            shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&BlendTreeNode::NullAnimBase);
        DAT_103bc0ea8 = 0;
        ___cxa_atexit(PTR__LRUHashCacheWrapper_100ee6a48, &BlendTreeNode::EmptyBindInfo, 4294967296);
    }

    // 0x100976180, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.173
    void ___cxx_global_var_init_173() {
        new (&BlendTreeNode::m_blendTreeNodeBlendModes)
            StringEnum((StringEnumEntry*)&BlendTreeNode::m_blendTreeNodeBlendModes__, 4);
        ___cxa_atexit(StringEnum::~StringEnum, &BlendTreeNode::m_blendTreeNodeBlendModes, 4294967296);
    }

    // 0x1009761c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100976200, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.227
    void ___cxx_global_var_init_227() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100976240, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976280, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009762c0, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009762f0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.231
    void ___cxx_global_var_init_231() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976330, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.232
    void ___cxx_global_var_init_232() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100976370, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.233
    void ___cxx_global_var_init_233() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009763b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.234
    void ___cxx_global_var_init_234() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009763f0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.235
    void ___cxx_global_var_init_235() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976430, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.236
    void ___cxx_global_var_init_236() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100976490, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.237
    void ___cxx_global_var_init_237() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009764d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.238
    void ___cxx_global_var_init_238() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976510, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.239
    void ___cxx_global_var_init_239() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100976570, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.240
    void ___cxx_global_var_init_240() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009765d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.241
    void ___cxx_global_var_init_241() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976610, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.242
    void ___cxx_global_var_init_242() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976650, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.243
    void ___cxx_global_var_init_243() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976690, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.244
    void ___cxx_global_var_init_244(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6570;
        puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009766d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.245
    void ___cxx_global_var_init_245() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4640;
        if (*PTR_m_mutex_100ee4640 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6040, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976710, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.246
    void ___cxx_global_var_init_246() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976750, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.247
    void ___cxx_global_var_init_247() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976790, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.248
    void ___cxx_global_var_init_248() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009767d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.249
    void ___cxx_global_var_init_249() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976810, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.250
    void ___cxx_global_var_init_250() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976850, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.251
    void ___cxx_global_var_init_251() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100976890, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.252
    void ___cxx_global_var_init_252() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009768d0, 54 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_1_cxx.cxx
    void __GLOBAL__sub_I_unity_1_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_171();
        ___cxx_global_var_init_172();
        ___cxx_global_var_init_173();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    BlendTreeNode::~BlendTreeNode();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    BlendTreeNode::~BlendTreeNode();

} // namespace jag::graphics
