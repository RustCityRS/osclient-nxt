// _unplaced/libs/game/runetek5/unity_4.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b5f0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422b630, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100642040, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1006420a0, 128 bytes, placed by nothing (unplaced)
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

    // 0x100642120, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100642180, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1006421a0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100642200, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100642260, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1006422f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100642330, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642370, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006423b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006423f0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642420, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642460, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006424a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006424e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642520, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642560, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006425a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006425e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642620, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642660, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006426a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006426e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642720, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.79
    void ___cxx_global_var_init_79() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642780, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.80
    void ___cxx_global_var_init_80() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006427c0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.81
    void ___cxx_global_var_init_81() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100642820, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642860, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.83
    void ___cxx_global_var_init_83() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006428a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.84
    void ___cxx_global_var_init_84() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006428e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642920, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.86
    void ___cxx_global_var_init_86() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642960, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.87
    void ___cxx_global_var_init_87() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006429a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4478;
        if (*PTR_m_mutex_100ee4478 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cb0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006429e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.89
    void ___cxx_global_var_init_89() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100642a20, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.90
    void ___cxx_global_var_init_90() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642a50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.91
    void ___cxx_global_var_init_91() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100642a90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43e0;
        if (*PTR_m_mutex_100ee43e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642ad0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4400;
        if (*PTR_m_mutex_100ee4400 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bc8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642b10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.94
    void ___cxx_global_var_init_94() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642b50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.95
    void ___cxx_global_var_init_95(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6528;
        puVar1 = PTR_NullConfigType_100ee46d0;
        if (*PTR_NullConfigType_100ee46d0 == '\0') {
            new (PTR_NullConfigType_100ee6528) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5208, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642b90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6530;
        puVar1 = PTR_NullConfigType_100ee46d8;
        if (*PTR_NullConfigType_100ee46d8 == '\0') {
            new (PTR_NullConfigType_100ee6530) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5220, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642bd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.97
    void ___cxx_global_var_init_97() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4440;
        if (*PTR_m_mutex_100ee4440 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642c10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4468;
        if (*PTR_m_mutex_100ee4468 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642c50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.99
    void ___cxx_global_var_init_99() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4470;
        if (*PTR_m_mutex_100ee4470 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ca0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642c90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43f8;
        if (*PTR_m_mutex_100ee43f8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bb8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642cd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.101
    void ___cxx_global_var_init_101() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47b8;
        if (*PTR_ZERO_100ee47b8 == '\0') {
            new (PTR_ZERO_100ee66c0) math::Vector3T<double>(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642d10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642d50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.103
    void ___cxx_global_var_init_103(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68c0;
        puVar1 = PTR_NullCacheObj_100ee4870;
        if (*PTR_NullCacheObj_100ee4870 == '\0') {
            new (PTR_NullCacheObj_100ee68c0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642d90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6508;
        puVar1 = PTR_NullConfigType_100ee46b0;
        if (*PTR_NullConfigType_100ee46b0 == '\0') {
            new (PTR_NullConfigType_100ee6508) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642dd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642e10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4448;
        if (*PTR_m_mutex_100ee4448 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642e50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4408;
        if (*PTR_m_mutex_100ee4408 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bd8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100642e90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.108
    void ___cxx_global_var_init_108() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47a8;
        if (*PTR_UP_100ee47a8 == '\0') {
            new (PTR_UP_100ee66b0) math::Vector3T<double>(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100642ed0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.109
    void ___cxx_global_var_init_109() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47b0;
        if (*PTR_LOOK_100ee47b0 == '\0') {
            new (PTR_LOOK_100ee66b8) math::Vector3T<double>(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100642f10, 44 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_4_cxx.cxx
    void __GLOBAL__sub_I_unity_4_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_32();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
