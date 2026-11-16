// _unplaced/libs/game/runetek5/unity_38.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422ac90
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422acd0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x10045fcb0
    void ___cxx_global_var_init_6(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10045fd10
    void ___cxx_global_var_init_7(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10045fd30
    void ___cxx_global_var_init_9(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10045fd90
    void ___cxx_global_var_init_11(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10045fdf0
    void ___cxx_global_var_init_13(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10045fe50
    void ___cxx_global_var_init_15(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x10045feb0
    void ___cxx_global_var_init_16(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x10045ffb0
    void ___cxx_global_var_init_84(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10045fff0
    void ___cxx_global_var_init_85(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100460030
    void ___cxx_global_var_init_86(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460070
    void ___cxx_global_var_init_87(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004600b0
    void ___cxx_global_var_init_88(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004600e0
    void ___cxx_global_var_init_89(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460120
    void ___cxx_global_var_init_90(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100460160
    void ___cxx_global_var_init_91(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004601a0
    void ___cxx_global_var_init_92(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004601e0
    void ___cxx_global_var_init_93(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460220
    void ___cxx_global_var_init_94(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460260
    void ___cxx_global_var_init_95(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44f0;
        if (*PTR_m_mutex_100ee44f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5da0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004602a0
    void ___cxx_global_var_init_96(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004602e0
    void ___cxx_global_var_init_97(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43f0;
        if (*PTR_m_mutex_100ee43f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ba8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460360
    void ___cxx_global_var_init_99(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004603a0
    void ___cxx_global_var_init_100(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004603e0
    void ___cxx_global_var_init_101(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460420
    void ___cxx_global_var_init_102(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460460
    void ___cxx_global_var_init_103(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004604c0
    void ___cxx_global_var_init_104(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460500
    void ___cxx_global_var_init_105(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100460560
    void ___cxx_global_var_init_106(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004605a0
    void ___cxx_global_var_init_107(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004605e0
    void ___cxx_global_var_init_108(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460620
    void ___cxx_global_var_init_109(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68c0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4870;
        if (*PTR_NullCacheObj_100ee4870 == '\0') {
            new (PTR_NullCacheObj_100ee68c0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460660
    void ___cxx_global_var_init_110(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6508;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46b0;
        if (*PTR_NullConfigType_100ee46b0 == '\0') {
            new (PTR_NullConfigType_100ee6508) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004606a0
    void ___cxx_global_var_init_111(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004606e0
    void ___cxx_global_var_init_112(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4448;
        if (*PTR_m_mutex_100ee4448 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460720
    void ___cxx_global_var_init_113(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4408;
        if (*PTR_m_mutex_100ee4408 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bd8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460760
    void ___cxx_global_var_init_114(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004607a0
    void ___cxx_global_var_init_115(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004607d0
    void ___cxx_global_var_init_116(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100460810
    void ___cxx_global_var_init_117(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460850
    void ___cxx_global_var_init_118(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460890
    void ___cxx_global_var_init_119(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6570;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004608d0
    void ___cxx_global_var_init_120(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4438;
        if (*PTR_m_mutex_100ee4438 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460910
    void ___cxx_global_var_init_121(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460950
    void ___cxx_global_var_init_122(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460990
    void ___cxx_global_var_init_123(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004609d0
    void ___cxx_global_var_init_124(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460a10
    void ___cxx_global_var_init_125(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4480;
        if (*PTR_m_mutex_100ee4480 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460a50
    void ___cxx_global_var_init_126(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44b0;
        if (*PTR_m_mutex_100ee44b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460a90
    void ___cxx_global_var_init_127(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43c0;
        if (*PTR_m_mutex_100ee43c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460ad0
    void ___cxx_global_var_init_128(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4610;
        if (*PTR_m_mutex_100ee4610 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fe0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460b10
    void ___cxx_global_var_init_129(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4410;
        if (*PTR_m_mutex_100ee4410 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5be8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460b50
    void ___cxx_global_var_init_130(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44f8;
        if (*PTR_m_mutex_100ee44f8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5db0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460b90
    void ___cxx_global_var_init_131(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43d8;
        if (*PTR_m_mutex_100ee43d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b78, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460bd0
    void ___cxx_global_var_init_132(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4458;
        if (*PTR_m_mutex_100ee4458 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460c10
    void ___cxx_global_var_init_133(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49e8;
        if (*PTR_m_pSingleton_100ee49e8 == '\0') {
            ___cxa_atexit(std::unique_ptr<ModelUpdateManager>::~unique_ptr, PTR_m_pSingleton_100ee6c58, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460c50
    void ___cxx_global_var_init_134(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6550;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46f8;
        if (*PTR_NullConfigType_100ee46f8 == '\0') {
            new (PTR_NullConfigType_100ee6550) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5278, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460c90
    void __GLOBAL__sub_I_unity_38_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_6();
        ___cxx_global_var_init_7();
        ___cxx_global_var_init_17();
        ___cxx_global_var_init_77();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag {
    // 0x100f38f3c
    int32_t chatRGBA[9] = {-65281, -16776961, 16711935, 16777215, -16711681, -1, 0, 0, 0};

} // namespace jag
