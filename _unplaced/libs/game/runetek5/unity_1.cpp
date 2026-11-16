// _unplaced/libs/game/runetek5/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b6e0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422b720, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100661dd0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100661e30, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100661e50, 528 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        undefined* puVar1;
        int iVar2;

        if (*PTR_m_basAnimTypeNames_100ee4940 == '\0') {
            iVar2 = ___cxa_guard_acquire(PTR_m_basAnimTypeNames_100ee4940);
            puVar1 = PTR_m_basAnimTypeNames_100ee6a08;
            if (iVar2 != 0) {
                StringView::StringView<6ul>((StringView*)PTR_m_basAnimTypeNames_100ee6a08, "Ready");
                StringView::StringView<14ul>((StringView*)(puVar1 + 16), "ReadyTurnLeft");
                StringView::StringView<15ul>((StringView*)(puVar1 + 32), "ReadyTurnRight");
                StringView::StringView<12ul>((StringView*)(puVar1 + 48), "WalkForward");
                StringView::StringView<13ul>((StringView*)(puVar1 + 64), "WalkBackward");
                StringView::StringView<9ul>((StringView*)(puVar1 + 80), "WalkLeft");
                StringView::StringView<10ul>((StringView*)(puVar1 + 96), "WalkRight");
                StringView::StringView<13ul>((StringView*)(puVar1 + 112), "WalkTurnLeft");
                StringView::StringView<14ul>((StringView*)(puVar1 + 128), "WalkTurnRight");
                StringView::StringView<11ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 144), "RunForward");
                StringView::StringView<12ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 160), "RunBackward");
                StringView::StringView<8ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 176), "RunLeft");
                StringView::StringView<9ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 192), "RunRight");
                StringView::StringView<12ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 208), "RunTurnLeft");
                StringView::StringView<13ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 224), "RunTurnRight");
                StringView::StringView<13ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 240), "CrawlForward");
                StringView::StringView<14ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 256), "CrawlBackward");
                StringView::StringView<10ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 272), "CrawlLeft");
                StringView::StringView<11ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 288), "CrawlRight");
                StringView::StringView<14ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 304), "CrawlTurnLeft");
                StringView::StringView<15ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 320), "CrawlTurnRight");
                ___cxa_guard_release(PTR_m_basAnimTypeNames_100ee4940);
            }
        }
    }

    // 0x100662060, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1006620c0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x100662140, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100662180, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006621c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662200, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662240, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662270, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006622b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006622f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662330, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.47
    void ___cxx_global_var_init_47() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662370, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006623b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006623f0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662450, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662490, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006624d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662510, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662550, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55(undefined8 param_1, _func_decltype_nullptr* param_2) {
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

    // 0x100662590, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43a8;
        if (*PTR_m_mutex_100ee43a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006625d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43d0;
        if (*PTR_m_mutex_100ee43d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662610, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662650, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662690, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006626d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662710, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100662770, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006627b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006627f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662830, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662870, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006628b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006628f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662930, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662970, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4480;
        if (*PTR_m_mutex_100ee4480 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006629b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006629f0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662a20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100662a60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43e0;
        if (*PTR_m_mutex_100ee43e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662aa0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4400;
        if (*PTR_m_mutex_100ee4400 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bc8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662ae0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4460;
        if (*PTR_m_mutex_100ee4460 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662b20, 39 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_1_cxx.cxx
    void __GLOBAL__sub_I_unity_1_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
