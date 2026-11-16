// _unplaced/libs/game/runetek5/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b6e0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422b720
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x100661dd0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100661e30
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100661e50
    void ___cxx_global_var_init_4(void) {
        uint8_t* puVar1;
        int iVar2;

        if (*PTR_m_basAnimTypeNames_100ee4940 == '\0') {
            iVar2 = ___cxa_guard_acquire(PTR_m_basAnimTypeNames_100ee4940);
            puVar1 = PTR_m_basAnimTypeNames_100ee6a08;
            if (iVar2 != 0) {
                PTR_m_basAnimTypeNames_100ee6a08->StringView<6ul>("Ready");
                ((puVar1 + 16))->StringView<14ul>("ReadyTurnLeft");
                ((puVar1 + 32))->StringView<15ul>("ReadyTurnRight");
                ((puVar1 + 48))->StringView<12ul>("WalkForward");
                ((puVar1 + 64))->StringView<13ul>("WalkBackward");
                ((puVar1 + 80))->StringView<9ul>("WalkLeft");
                ((puVar1 + 96))->StringView<10ul>("WalkRight");
                ((puVar1 + 112))->StringView<13ul>("WalkTurnLeft");
                ((puVar1 + 128))->StringView<14ul>("WalkTurnRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 144))->StringView<11ul>("RunForward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 160))->StringView<12ul>("RunBackward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 176))->StringView<8ul>("RunLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 192))->StringView<9ul>("RunRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 208))->StringView<12ul>("RunTurnLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 224))->StringView<13ul>("RunTurnRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 240))->StringView<13ul>("CrawlForward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 256))->StringView<14ul>("CrawlBackward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 272))->StringView<10ul>("CrawlLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 288))->StringView<11ul>("CrawlRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 304))->StringView<14ul>("CrawlTurnLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 320))->StringView<15ul>("CrawlTurnRight");
                ___cxa_guard_release(PTR_m_basAnimTypeNames_100ee4940);
            }
        }
    }

    // 0x100662060
    void ___cxx_global_var_init_37(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1006620c0
    void ___cxx_global_var_init_38(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x100662140
    void ___cxx_global_var_init_39(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100662180
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006621c0
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662200
    void ___cxx_global_var_init_42(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662240
    void ___cxx_global_var_init_43(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662270
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006622b0
    void ___cxx_global_var_init_45(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006622f0
    void ___cxx_global_var_init_46(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662330
    void ___cxx_global_var_init_47(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662370
    void ___cxx_global_var_init_48(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006623b0
    void ___cxx_global_var_init_49(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006623f0
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662450
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662490
    void ___cxx_global_var_init_52(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006624d0
    void ___cxx_global_var_init_53(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662510
    void ___cxx_global_var_init_54(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662550
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6570;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662590
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43a8;
        if (*PTR_m_mutex_100ee43a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006625d0
    void ___cxx_global_var_init_57(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43d0;
        if (*PTR_m_mutex_100ee43d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662610
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662650
    void ___cxx_global_var_init_59(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662690
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006626d0
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662710
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100662770
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006627b0
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006627f0
    void ___cxx_global_var_init_65(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662830
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662870
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006628b0
    void ___cxx_global_var_init_68(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006628f0
    void ___cxx_global_var_init_69(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662930
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662970
    void ___cxx_global_var_init_71(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4480;
        if (*PTR_m_mutex_100ee4480 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006629b0
    void ___cxx_global_var_init_72(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006629f0
    void ___cxx_global_var_init_73(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100662a20
    void ___cxx_global_var_init_74(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100662a60
    void ___cxx_global_var_init_75(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43e0;
        if (*PTR_m_mutex_100ee43e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662aa0
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4400;
        if (*PTR_m_mutex_100ee4400 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bc8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662ae0
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4460;
        if (*PTR_m_mutex_100ee4460 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100662b20
    void __GLOBAL__sub_I_unity_1_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
