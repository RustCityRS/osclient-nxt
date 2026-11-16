// _unplaced/libs/game/runetek5/unity_14.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b270, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422b2b0, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1005f6100, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1005f6160, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1005f6180, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1005f61e0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x1005f6260, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.27
    void ___cxx_global_var_init_27() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f62a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f62e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.29
    void ___cxx_global_var_init_29() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6320, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6360, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6390, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f63d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6410, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6450, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6490, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f64d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6510, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6590, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6538;
        puVar1 = PTR_NullConfigType_100ee46e0;
        if (*PTR_NullConfigType_100ee46e0 == '\0') {
            new (PTR_NullConfigType_100ee6538) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5260, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f65d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4358;
        if (*PTR_m_mutex_100ee4358 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a78, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6690, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6750, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.47
    void ___cxx_global_var_init_47() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6810, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43b8;
        if (*PTR_m_mutex_100ee43b8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6850, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68c8;
        puVar1 = PTR_NullCacheObj_100ee4878;
        if (*PTR_NullCacheObj_100ee4878 == '\0') {
            new (PTR_NullCacheObj_100ee68c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6890, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6510;
        puVar1 = PTR_NullConfigType_100ee46b8;
        if (*PTR_NullConfigType_100ee46b8 == '\0') {
            new (PTR_NullConfigType_100ee6510) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f68d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6950, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6580;
        puVar1 = PTR_NullConfigType_100ee4728;
        if (*PTR_NullConfigType_100ee4728 == '\0') {
            new (PTR_NullConfigType_100ee6580) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6990, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43e0;
        if (*PTR_m_mutex_100ee43e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6a50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4400;
        if (*PTR_m_mutex_100ee4400 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bc8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6b10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4380;
        if (*PTR_m_mutex_100ee4380 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ac8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6b50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68a8;
        puVar1 = PTR_NullCacheObj_100ee4858;
        if (*PTR_NullCacheObj_100ee4858 == '\0') {
            new (PTR_NullCacheObj_100ee68a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6b90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64f0;
        puVar1 = PTR_NullConfigType_100ee4698;
        if (*PTR_NullConfigType_100ee4698 == '\0') {
            new (PTR_NullConfigType_100ee64f0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6bd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55d8;
        puVar1 = PTR_NullCacheObj_100ee40a0;
        if (*PTR_NullCacheObj_100ee40a0 == '\0') {
            new (PTR_NullCacheObj_100ee55d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6c10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68b0;
        puVar1 = PTR_NullCacheObj_100ee4860;
        if (*PTR_NullCacheObj_100ee4860 == '\0') {
            new (PTR_NullCacheObj_100ee68b0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6c50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64f8;
        puVar1 = PTR_NullConfigType_100ee46a0;
        if (*PTR_NullConfigType_100ee46a0 == '\0') {
            new (PTR_NullConfigType_100ee64f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6c90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4388;
        if (*PTR_m_mutex_100ee4388 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ad8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6cd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6d10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6d50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6d90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6dd0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6e30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6e70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6ed0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6f10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6f50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4490;
        if (*PTR_m_mutex_100ee4490 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ce0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6fd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.80
    void ___cxx_global_var_init_80(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6540;
        puVar1 = PTR_NullConfigType_100ee46e8;
        if (*PTR_NullConfigType_100ee46e8 == '\0') {
            new (PTR_NullConfigType_100ee6540) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5268, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7010, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.81
    void ___cxx_global_var_init_81() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4498;
        if (*PTR_m_mutex_100ee4498 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cf0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7090, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.83
    void ___cxx_global_var_init_83(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6548;
        puVar1 = PTR_NullConfigType_100ee46f0;
        if (*PTR_NullConfigType_100ee46f0 == '\0') {
            new (PTR_NullConfigType_100ee6548) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5270, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f70d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.84
    void ___cxx_global_var_init_84() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4508;
        if (*PTR_m_mutex_100ee4508 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7110, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6968;
        puVar1 = PTR_NullCacheObj_100ee4918;
        if (*PTR_NullCacheObj_100ee4918 == '\0') {
            new (PTR_NullCacheObj_100ee6968) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7150, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.86
    void ___cxx_global_var_init_86(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee65a0;
        puVar1 = PTR_NullConfigType_100ee4748;
        if (*PTR_NullConfigType_100ee4748 == '\0') {
            new (PTR_NullConfigType_100ee65a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7190, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.87
    void ___cxx_global_var_init_87() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43c8;
        if (*PTR_m_mutex_100ee43c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b58, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f71d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68d8;
        puVar1 = PTR_NullCacheObj_100ee4888;
        if (*PTR_NullCacheObj_100ee4888 == '\0') {
            new (PTR_NullCacheObj_100ee68d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7210, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.89
    void ___cxx_global_var_init_89(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6520;
        puVar1 = PTR_NullConfigType_100ee46c8;
        if (*PTR_NullConfigType_100ee46c8 == '\0') {
            new (PTR_NullConfigType_100ee6520) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7250, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.90
    void ___cxx_global_var_init_90() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7290, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.91
    void ___cxx_global_var_init_91() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f72d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f7310, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44f0;
        if (*PTR_m_mutex_100ee44f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5da0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7390, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.95
    void ___cxx_global_var_init_95(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6590;
        puVar1 = PTR_NullConfigType_100ee4738;
        if (*PTR_NullConfigType_100ee4738 == '\0') {
            new (PTR_NullConfigType_100ee6590) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52c8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f73d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43c0;
        if (*PTR_m_mutex_100ee43c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7410, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.97
    void ___cxx_global_var_init_97() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4610;
        if (*PTR_m_mutex_100ee4610 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fe0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7450, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68d0;
        puVar1 = PTR_NullCacheObj_100ee4880;
        if (*PTR_NullCacheObj_100ee4880 == '\0') {
            new (PTR_NullCacheObj_100ee68d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7490, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.99
    void ___cxx_global_var_init_99(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6518;
        puVar1 = PTR_NullConfigType_100ee46c0;
        if (*PTR_NullConfigType_100ee46c0 == '\0') {
            new (PTR_NullConfigType_100ee6518) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f74d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55c8;
        puVar1 = PTR_NullCacheObj_100ee4090;
        if (*PTR_NullCacheObj_100ee4090 == '\0') {
            new (PTR_NullCacheObj_100ee55c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7510, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.101
    void ___cxx_global_var_init_101() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44b0;
        if (*PTR_m_mutex_100ee44b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7550, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6920;
        puVar1 = PTR_NullCacheObj_100ee48d0;
        if (*PTR_NullCacheObj_100ee48d0 == '\0') {
            new (PTR_NullCacheObj_100ee6920) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7590, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.103
    void ___cxx_global_var_init_103(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6558;
        puVar1 = PTR_NullConfigType_100ee4700;
        if (*PTR_NullConfigType_100ee4700 == '\0') {
            new (PTR_NullConfigType_100ee6558) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f75d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55d0;
        puVar1 = PTR_NullCacheObj_100ee4098;
        if (*PTR_NullCacheObj_100ee4098 == '\0') {
            new (PTR_NullCacheObj_100ee55d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7650, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x1005f7690, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43e8;
        if (*PTR_m_mutex_100ee43e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b98, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f76d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.108
    void ___cxx_global_var_init_108() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4420;
        if (*PTR_m_mutex_100ee4420 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7710, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.109
    void ___cxx_global_var_init_109() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43a8;
        if (*PTR_m_mutex_100ee43a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7750, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68b8;
        puVar1 = PTR_NullCacheObj_100ee4868;
        if (*PTR_NullCacheObj_100ee4868 == '\0') {
            new (PTR_NullCacheObj_100ee68b8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7790, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.111
    void ___cxx_global_var_init_111(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6500;
        puVar1 = PTR_NullConfigType_100ee46a8;
        if (*PTR_NullConfigType_100ee46a8 == '\0') {
            new (PTR_NullConfigType_100ee6500) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f77d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7810, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7850, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6888;
        puVar1 = PTR_NullCacheObj_100ee4838;
        if (*PTR_NullCacheObj_100ee4838 == '\0') {
            new (PTR_NullCacheObj_100ee6888) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7890, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.115
    void ___cxx_global_var_init_115(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64d0;
        puVar1 = PTR_NullConfigType_100ee4678;
        if (*PTR_NullConfigType_100ee4678 == '\0') {
            new (PTR_NullConfigType_100ee64d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f78d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.116
    void ___cxx_global_var_init_116() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4368;
        if (*PTR_m_mutex_100ee4368 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a98, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7990, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.119
    void ___cxx_global_var_init_119(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6898;
        puVar1 = PTR_NullCacheObj_100ee4848;
        if (*PTR_NullCacheObj_100ee4848 == '\0') {
            new (PTR_NullCacheObj_100ee6898) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f79d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.120
    void ___cxx_global_var_init_120(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64e0;
        puVar1 = PTR_NullConfigType_100ee4688;
        if (*PTR_NullConfigType_100ee4688 == '\0') {
            new (PTR_NullConfigType_100ee64e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7a10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.121
    void ___cxx_global_var_init_121() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4370;
        if (*PTR_m_mutex_100ee4370 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5aa8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7a50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.122
    void ___cxx_global_var_init_122() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f7a90, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.123
    void ___cxx_global_var_init_123() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f7b00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.125
    void ___cxx_global_var_init_125(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x1005f7b40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4510;
        if (*PTR_m_mutex_100ee4510 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5de0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7b80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7bc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x1005f7c00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x1005f7c40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4990;
        if (*PTR_m_pSingleton_100ee4990 == '\0') {
            ___cxa_atexit(std::unique_ptr<game::ServerSyncing, std::default_delete<game::ServerSyncing>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7c80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49e0;
        if (*PTR_m_pSingleton_100ee49e0 == '\0') {
            ___cxa_atexit(std::unique_ptr<VectorFontLoader, std::default_delete<VectorFontLoader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7cc0, 39 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_14_cxx.cxx
    void __GLOBAL__sub_I_unity_14_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
