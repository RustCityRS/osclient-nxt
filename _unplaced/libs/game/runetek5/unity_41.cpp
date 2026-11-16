// _unplaced/libs/game/runetek5/unity_41.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag {
    // 0x100f38550, 4 bytes, __data
    PlayerEntityListProperties::PLAYER_MODEL_PERSIST_TIME_MS = 1000;

    // 0x100f38554, 4 bytes, __data
    PlayerEntityListProperties::MAX_NUM_LOADED_PLAYER_MODELS = 5;

    // 0x100f38558, 1 bytes, __data
    PlayerEntityListProperties::ENABLE_SELECTIVE_PLAYER_MODEL_LOADING = 1;

    // 0x100f38559, 1 bytes, __data
    PlayerEntityListProperties::ALLOW_SELECTIVE_PLAYER_MODEL_LOADING = 1;

    // 0x1039b4cc0, 144 bytes, __common; set at startup by ___cxx_global_var_init.21
    logger::LogStream LOGGER_PATHINGENTITY;

    // 0x1039b4d58, 144 bytes, __common; set at startup by ___cxx_global_var_init.39
    logger::LogStream LOGGER_SPOTANIM;

    // 0x10040acf0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10040ad50, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10040ad70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10040add0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10040ae30, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10040ae90, 208 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.21
    void ___cxx_global_var_init_21() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "PathingEntity");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_PATHINGENTITY) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x10040af60, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        ___cxa_atexit(std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::~unique_ptr,
                      &PathingEntity::NullSpotAnimation, 4294967296);
    }

    // 0x10040af80, 208 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "SpotAnims");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_SPOTANIM) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x10040b050, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x10040b0b0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x10040b130, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b170, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b1b0, 64 bytes, placed by nothing (unplaced)
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

    // 0x10040b1f0, 64 bytes, placed by nothing (unplaced)
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

    // 0x10040b230, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b260, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b2a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b2e0, 64 bytes, placed by nothing (unplaced)
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

    // 0x10040b320, 64 bytes, placed by nothing (unplaced)
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

    // 0x10040b360, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b3a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b3e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b420, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b460, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b4a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b4e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager,
                                          std::default_delete<graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b520, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b580, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b5c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b600, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.79
    void ___cxx_global_var_init_79() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b660, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.80
    void ___cxx_global_var_init_80() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b6a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.81
    void ___cxx_global_var_init_81() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b6e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b720, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.83
    void ___cxx_global_var_init_83() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b760, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.84
    void ___cxx_global_var_init_84(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x10040b7a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x10040b7e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.86
    void ___cxx_global_var_init_86() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b820, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.87
    void ___cxx_global_var_init_87() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4448;
        if (*PTR_m_mutex_100ee4448 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b860, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4408;
        if (*PTR_m_mutex_100ee4408 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bd8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b8a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.89
    void ___cxx_global_var_init_89() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b8e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.90
    void ___cxx_global_var_init_90() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b910, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.91
    void ___cxx_global_var_init_91() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10040b950, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee42e0;
        if (*PTR_m_mutex_100ee42e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59a8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b9d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.94
    void ___cxx_global_var_init_94() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040ba10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.95
    void ___cxx_global_var_init_95() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49e8;
        if (*PTR_m_pSingleton_100ee49e8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::ModelUpdateManager,
                                          std::default_delete<graphics::ModelUpdateManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c58, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040ba50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040ba90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.97
    void ___cxx_global_var_init_97(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x10040bad0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bb10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.99
    void ___cxx_global_var_init_99() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bb90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.101
    void ___cxx_global_var_init_101() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4608;
        if (*PTR_m_mutex_100ee4608 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bc50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43b8;
        if (*PTR_m_mutex_100ee43b8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bc90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4560;
        if (*PTR_m_mutex_100ee4560 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bd10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43d0;
        if (*PTR_m_mutex_100ee43d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bd50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.108
    void ___cxx_global_var_init_108() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bd90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.109
    void ___cxx_global_var_init_109() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43e0;
        if (*PTR_m_mutex_100ee43e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bdd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4400;
        if (*PTR_m_mutex_100ee4400 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bc8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040be10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.111
    void ___cxx_global_var_init_111() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040be50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040be90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4620;
        if (*PTR_m_mutex_100ee4620 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6000, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bed0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee65a8;
        puVar1 = PTR_NullConfigType_100ee4750;
        if (*PTR_NullConfigType_100ee4750 == '\0') {
            new (PTR_NullConfigType_100ee65a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bf10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.115
    void ___cxx_global_var_init_115() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4538;
        if (*PTR_m_mutex_100ee4538 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bf50, 54 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_41_cxx.cxx
    void __GLOBAL__sub_I_unity_41_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_21();
        ___cxx_global_var_init_25();
        ___cxx_global_var_init_39();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x10422aba0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422abe0, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics
