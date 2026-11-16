// _unplaced/libs/game/runetek5/unity_14.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b270
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422b2b0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x1005f6100
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1005f6160
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1005f6180
    void ___cxx_global_var_init_3(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1005f61e0
    void ___cxx_global_var_init_4(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x1005f6260
    void ___cxx_global_var_init_27(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f62a0
    void ___cxx_global_var_init_28(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f62e0
    void ___cxx_global_var_init_29(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6320
    void ___cxx_global_var_init_30(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6360
    void ___cxx_global_var_init_31(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6390
    void ___cxx_global_var_init_32(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f63d0
    void ___cxx_global_var_init_33(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6410
    void ___cxx_global_var_init_34(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6450
    void ___cxx_global_var_init_35(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6490
    void ___cxx_global_var_init_36(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f64d0
    void ___cxx_global_var_init_37(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6510
    void ___cxx_global_var_init_38(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6590
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6538;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46e0;
        if (*PTR_NullConfigType_100ee46e0 == '\0') {
            new (PTR_NullConfigType_100ee6538) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5260, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f65d0
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4358;
        if (*PTR_m_mutex_100ee4358 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a78, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6690
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6750
    void ___cxx_global_var_init_47(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6810
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b8;
        if (*PTR_m_mutex_100ee43b8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6850
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68c8;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4878;
        if (*PTR_NullCacheObj_100ee4878 == '\0') {
            new (PTR_NullCacheObj_100ee68c8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6890
    void ___cxx_global_var_init_52(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6510;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46b8;
        if (*PTR_NullConfigType_100ee46b8 == '\0') {
            new (PTR_NullConfigType_100ee6510) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f68d0
    void ___cxx_global_var_init_53(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6950
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6580;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4728;
        if (*PTR_NullConfigType_100ee4728 == '\0') {
            new (PTR_NullConfigType_100ee6580) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6990
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43e0;
        if (*PTR_m_mutex_100ee43e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6a50
    void ___cxx_global_var_init_59(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4400;
        if (*PTR_m_mutex_100ee4400 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bc8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6b10
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4380;
        if (*PTR_m_mutex_100ee4380 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ac8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6b50
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68a8;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4858;
        if (*PTR_NullCacheObj_100ee4858 == '\0') {
            new (PTR_NullCacheObj_100ee68a8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6b90
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee64f0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4698;
        if (*PTR_NullConfigType_100ee4698 == '\0') {
            new (PTR_NullConfigType_100ee64f0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6bd0
    void ___cxx_global_var_init_65(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee55d8;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee40a0;
        if (*PTR_NullCacheObj_100ee40a0 == '\0') {
            new (PTR_NullCacheObj_100ee55d8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6c10
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68b0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4860;
        if (*PTR_NullCacheObj_100ee4860 == '\0') {
            new (PTR_NullCacheObj_100ee68b0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6c50
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee64f8;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46a0;
        if (*PTR_NullConfigType_100ee46a0 == '\0') {
            new (PTR_NullConfigType_100ee64f8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6c90
    void ___cxx_global_var_init_68(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4388;
        if (*PTR_m_mutex_100ee4388 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ad8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6cd0
    void ___cxx_global_var_init_69(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6d10
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6d50
    void ___cxx_global_var_init_71(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6d90
    void ___cxx_global_var_init_72(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6dd0
    void ___cxx_global_var_init_73(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6e30
    void ___cxx_global_var_init_74(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6e70
    void ___cxx_global_var_init_75(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f6ed0
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6f10
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6f50
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4490;
        if (*PTR_m_mutex_100ee4490 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ce0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6fd0
    void ___cxx_global_var_init_80(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6540;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46e8;
        if (*PTR_NullConfigType_100ee46e8 == '\0') {
            new (PTR_NullConfigType_100ee6540) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5268, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7010
    void ___cxx_global_var_init_81(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4498;
        if (*PTR_m_mutex_100ee4498 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cf0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7090
    void ___cxx_global_var_init_83(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6548;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46f0;
        if (*PTR_NullConfigType_100ee46f0 == '\0') {
            new (PTR_NullConfigType_100ee6548) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5270, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f70d0
    void ___cxx_global_var_init_84(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4508;
        if (*PTR_m_mutex_100ee4508 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7110
    void ___cxx_global_var_init_85(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6968;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4918;
        if (*PTR_NullCacheObj_100ee4918 == '\0') {
            new (PTR_NullCacheObj_100ee6968) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7150
    void ___cxx_global_var_init_86(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee65a0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4748;
        if (*PTR_NullConfigType_100ee4748 == '\0') {
            new (PTR_NullConfigType_100ee65a0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7190
    void ___cxx_global_var_init_87(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43c8;
        if (*PTR_m_mutex_100ee43c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b58, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f71d0
    void ___cxx_global_var_init_88(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68d8;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4888;
        if (*PTR_NullCacheObj_100ee4888 == '\0') {
            new (PTR_NullCacheObj_100ee68d8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7210
    void ___cxx_global_var_init_89(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6520;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46c8;
        if (*PTR_NullConfigType_100ee46c8 == '\0') {
            new (PTR_NullConfigType_100ee6520) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7250
    void ___cxx_global_var_init_90(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7290
    void ___cxx_global_var_init_91(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f72d0
    void ___cxx_global_var_init_92(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f7310
    void ___cxx_global_var_init_93(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44f0;
        if (*PTR_m_mutex_100ee44f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5da0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7390
    void ___cxx_global_var_init_95(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6590;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4738;
        if (*PTR_NullConfigType_100ee4738 == '\0') {
            new (PTR_NullConfigType_100ee6590) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52c8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f73d0
    void ___cxx_global_var_init_96(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43c0;
        if (*PTR_m_mutex_100ee43c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7410
    void ___cxx_global_var_init_97(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4610;
        if (*PTR_m_mutex_100ee4610 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fe0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7450
    void ___cxx_global_var_init_98(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68d0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4880;
        if (*PTR_NullCacheObj_100ee4880 == '\0') {
            new (PTR_NullCacheObj_100ee68d0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7490
    void ___cxx_global_var_init_99(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6518;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46c0;
        if (*PTR_NullConfigType_100ee46c0 == '\0') {
            new (PTR_NullConfigType_100ee6518) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f74d0
    void ___cxx_global_var_init_100(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee55c8;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4090;
        if (*PTR_NullCacheObj_100ee4090 == '\0') {
            new (PTR_NullCacheObj_100ee55c8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7510
    void ___cxx_global_var_init_101(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44b0;
        if (*PTR_m_mutex_100ee44b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7550
    void ___cxx_global_var_init_102(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6920;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee48d0;
        if (*PTR_NullCacheObj_100ee48d0 == '\0') {
            new (PTR_NullCacheObj_100ee6920) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7590
    void ___cxx_global_var_init_103(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6558;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4700;
        if (*PTR_NullConfigType_100ee4700 == '\0') {
            new (PTR_NullConfigType_100ee6558) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f75d0
    void ___cxx_global_var_init_104(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee55d0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4098;
        if (*PTR_NullCacheObj_100ee4098 == '\0') {
            new (PTR_NullCacheObj_100ee55d0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7650
    void ___cxx_global_var_init_106(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6598;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4740;
        if (*PTR_NullConfigType_100ee4740 == '\0') {
            new (PTR_NullConfigType_100ee6598) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7690
    void ___cxx_global_var_init_107(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43e8;
        if (*PTR_m_mutex_100ee43e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b98, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f76d0
    void ___cxx_global_var_init_108(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4420;
        if (*PTR_m_mutex_100ee4420 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7710
    void ___cxx_global_var_init_109(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43a8;
        if (*PTR_m_mutex_100ee43a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7750
    void ___cxx_global_var_init_110(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68b8;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4868;
        if (*PTR_NullCacheObj_100ee4868 == '\0') {
            new (PTR_NullCacheObj_100ee68b8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7790
    void ___cxx_global_var_init_111(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6500;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46a8;
        if (*PTR_NullConfigType_100ee46a8 == '\0') {
            new (PTR_NullConfigType_100ee6500) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f77d0
    void ___cxx_global_var_init_112(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7810
    void ___cxx_global_var_init_113(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7850
    void ___cxx_global_var_init_114(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6888;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4838;
        if (*PTR_NullCacheObj_100ee4838 == '\0') {
            new (PTR_NullCacheObj_100ee6888) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7890
    void ___cxx_global_var_init_115(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee64d0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4678;
        if (*PTR_NullConfigType_100ee4678 == '\0') {
            new (PTR_NullConfigType_100ee64d0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f78d0
    void ___cxx_global_var_init_116(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4368;
        if (*PTR_m_mutex_100ee4368 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a98, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7990
    void ___cxx_global_var_init_119(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6898;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4848;
        if (*PTR_NullCacheObj_100ee4848 == '\0') {
            new (PTR_NullCacheObj_100ee6898) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f79d0
    void ___cxx_global_var_init_120(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee64e0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4688;
        if (*PTR_NullConfigType_100ee4688 == '\0') {
            new (PTR_NullConfigType_100ee64e0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7a10
    void ___cxx_global_var_init_121(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4370;
        if (*PTR_m_mutex_100ee4370 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5aa8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7a50
    void ___cxx_global_var_init_122(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f7a90
    void ___cxx_global_var_init_123(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005f7b00
    void ___cxx_global_var_init_125(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee65a8;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4750;
        if (*PTR_NullConfigType_100ee4750 == '\0') {
            new (PTR_NullConfigType_100ee65a8) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7b40
    void ___cxx_global_var_init_126(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4510;
        if (*PTR_m_mutex_100ee4510 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5de0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7b80
    void ___cxx_global_var_init_127(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7bc0
    void ___cxx_global_var_init_128(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68c0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4870;
        if (*PTR_NullCacheObj_100ee4870 == '\0') {
            new (PTR_NullCacheObj_100ee68c0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7c00
    void ___cxx_global_var_init_129(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6508;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46b0;
        if (*PTR_NullConfigType_100ee46b0 == '\0') {
            new (PTR_NullConfigType_100ee6508) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7c40
    void ___cxx_global_var_init_130(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4990;
        if (*PTR_m_pSingleton_100ee4990 == '\0') {
            ___cxa_atexit(std::unique_ptr<game::ServerSyncing>::~unique_ptr, PTR_m_pSingleton_100ee6c00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7c80
    void ___cxx_global_var_init_131(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49e0;
        if (*PTR_m_pSingleton_100ee49e0 == '\0') {
            ___cxa_atexit(std::unique_ptr<VectorFontLoader>::~unique_ptr, PTR_m_pSingleton_100ee6c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7cc0
    void __GLOBAL__sub_I_unity_14_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
