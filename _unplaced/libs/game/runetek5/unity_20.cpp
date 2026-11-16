// _unplaced/libs/game/runetek5/unity_20.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b120, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422b160, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100542ff0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x100543050, 128 bytes, placed by nothing (unplaced)
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

    // 0x1005430d0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullInterfaceShared_100ee4668 == '\0') {
            if (___cxa_guard_acquire(PTR_NullInterfaceShared_100ee4668) != 0) {
                new (PTR_NullInterfaceShared_100ee64a0)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5180, PTR_NullInterfaceShared_100ee64a0, 4294967296);
                ___cxa_guard_release(PTR_NullInterfaceShared_100ee4668);
            }
        }
    }

    // 0x100543150, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1005431b0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1005431d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100543230, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100543290, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1005433d0, 144 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
        undefined* puVar1;
        undefined8* puVar3;
        ColourHSL local_20;

        if (*PTR_m_lightDirection_100ee4768 == '\0') {
            if (___cxa_guard_acquire(PTR_m_lightDirection_100ee4768) != 0) {
                new (&local_20) math::ColourHSL(50.0, -10.0, 50.0);
                puVar3 = (undefined8*)local_20.Normalize();
                puVar1 = PTR_m_lightDirection_100ee6610;
                *(undefined4*)(PTR_m_lightDirection_100ee6610 + 8) = *(undefined4*)(puVar3 + 1);
                *(undefined8*)puVar1 = *puVar3;
                ___cxa_guard_release(PTR_m_lightDirection_100ee4768);
            }
        }
    }

    // 0x1005434d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100543510, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100543550, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543590, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005435d0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100543600, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543640, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100543680, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005436c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543700, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543740, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543780, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005437c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543800, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543840, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543880, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005438c0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100543920, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543960, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005439c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543a00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543a40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100543a80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4348;
        if (*PTR_m_mutex_100ee4348 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543ac0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543b00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x100543b40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100543b80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543bc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543c00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6568;
        puVar1 = PTR_NullConfigType_100ee4710;
        if (*PTR_NullConfigType_100ee4710 == '\0') {
            new (PTR_NullConfigType_100ee6568) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5298, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100543c40, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100543c90, 39 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_20_cxx.cxx
    void __GLOBAL__sub_I_unity_20_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_4();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
