// _unplaced/libs/game/runetek5/unity_42.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "libs/framework/sysinitparams/SystemInitParams.h"

namespace jag {
    // 0x1039b4b18, 144 bytes, __common; set at startup by ___cxx_global_var_init.3
    logger::LogStream LOGGER_ROUTE;

    // 0x1003ec170: the linker folded this into void eastl::swap<EntityWaypoint, eastl::allocator>(eastl::vector<EntityWaypoint, eastl::allocator>&, eastl::vector<EntityWaypoint, eastl::allocator>&), which has identical code
    Args::swap(Args&);

    // 0x1003ec6b0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1003ec710, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1003ec730, 208 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "Routing");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_ROUTE) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x1003eca70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecab0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecaf0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecb30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecb70, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecba0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.27
    void ___cxx_global_var_init_27() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecbe0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecc20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.29
    void ___cxx_global_var_init_29() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecc60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecca0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecce0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecd20, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecd80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecdc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ece00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ece40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager,
                                          std::default_delete<graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ece80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x1003ecec0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ecf20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecf60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecfa0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ecfe0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ed020, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ed060, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4608;
        if (*PTR_m_mutex_100ee4608 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003ed0a0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003ed0d0, 54 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_42_cxx.cxx
    void __GLOBAL__sub_I_unity_42_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_18();
        ___cxx_global_var_init_19();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x10422ab50, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422ab90, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics
