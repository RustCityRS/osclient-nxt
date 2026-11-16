// _unplaced/libs/game/runetek5/unity_23.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b030, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422b070, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100514e40, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x100514ea0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x100514f20, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100514f80, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100514fe0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100515020, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100515060, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005150a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005150e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.27
    void ___cxx_global_var_init_27() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100515110, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515150, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.29
    void ___cxx_global_var_init_29() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100515190, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005151d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515210, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515250, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515290, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005152d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515310, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515350, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100515390, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005153d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100515430, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515470, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005154d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515510, 64 bytes, placed by nothing (unplaced)
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

    // 0x100515550, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515590, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005155d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44b8;
        if (*PTR_m_mutex_100ee44b8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515690, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005156d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515710, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x100515790, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6560;
        puVar1 = PTR_NullConfigType_100ee4708;
        if (*PTR_NullConfigType_100ee4708 == '\0') {
            new (PTR_NullConfigType_100ee6560) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5290, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005157d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c0;
        if (*PTR_m_mutex_100ee44c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515890, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6598;
        puVar1 = PTR_NullConfigType_100ee4740;
        if (*PTR_NullConfigType_100ee4740 == '\0') {
            new (PTR_NullConfigType_100ee6598) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005158d0, 44 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_23_cxx.cxx
    void __GLOBAL__sub_I_unity_23_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_5();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
