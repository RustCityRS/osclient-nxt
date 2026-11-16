// _unplaced/libs/game/runetek5/unity_39.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422ac40
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422ac80
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x10043a2e0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10043a340
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10043a360
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10043a3c0
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10043a420
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10043a480
    void ___cxx_global_var_init_23(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x10043a4e0
    void ___cxx_global_var_init_24(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x10043a5a0
    void ___cxx_global_var_init_69(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a5e0
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a620
    void ___cxx_global_var_init_71(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a660
    void ___cxx_global_var_init_72(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a6a0
    void ___cxx_global_var_init_73(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a6d0
    void ___cxx_global_var_init_74(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a710
    void ___cxx_global_var_init_75(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a750
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a790
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a7d0
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a810
    void ___cxx_global_var_init_79(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a850
    void ___cxx_global_var_init_80(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a890
    void ___cxx_global_var_init_81(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a8d0
    void ___cxx_global_var_init_82(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a930
    void ___cxx_global_var_init_83(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043a970
    void ___cxx_global_var_init_84(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10043a9d0
    void ___cxx_global_var_init_85(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043aa10
    void ___cxx_global_var_init_86(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043aa50
    void ___cxx_global_var_init_87(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043aa90
    void ___cxx_global_var_init_88(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043aad0
    void ___cxx_global_var_init_89(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ab10
    void ___cxx_global_var_init_90(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4380;
        if (*PTR_m_mutex_100ee4380 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ac8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043abd0
    void ___cxx_global_var_init_93(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ac10
    void ___cxx_global_var_init_94(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68c0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4870;
        if (*PTR_NullCacheObj_100ee4870 == '\0') {
            new (PTR_NullCacheObj_100ee68c0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ac50
    void ___cxx_global_var_init_95(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6508;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46b0;
        if (*PTR_NullConfigType_100ee46b0 == '\0') {
            new (PTR_NullConfigType_100ee6508) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ac90
    void ___cxx_global_var_init_96(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043acd0
    void ___cxx_global_var_init_97(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4448;
        if (*PTR_m_mutex_100ee4448 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ad10
    void ___cxx_global_var_init_98(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4408;
        if (*PTR_m_mutex_100ee4408 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bd8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ad50
    void ___cxx_global_var_init_99(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10043ad90
    void ___cxx_global_var_init_100(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10043adc0
    void ___cxx_global_var_init_101(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10043ae00
    void ___cxx_global_var_init_102(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ae40
    void ___cxx_global_var_init_103(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4390;
        if (*PTR_m_mutex_100ee4390 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ae8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ae80
    void ___cxx_global_var_init_104(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043aec0
    void ___cxx_global_var_init_105(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6570;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043af00
    void ___cxx_global_var_init_106(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4438;
        if (*PTR_m_mutex_100ee4438 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043af40
    void ___cxx_global_var_init_107(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043af80
    void ___cxx_global_var_init_108(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043afc0
    void ___cxx_global_var_init_109(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10043b000
    void ___cxx_global_var_init_110(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043b040
    void ___cxx_global_var_init_111(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44e0;
        if (*PTR_m_mutex_100ee44e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043b080
    void ___cxx_global_var_init_112(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6550;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46f8;
        if (*PTR_NullConfigType_100ee46f8 == '\0') {
            new (PTR_NullConfigType_100ee6550) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5278, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043b0c0
    void ___cxx_global_var_init_113(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49e8;
        if (*PTR_m_pSingleton_100ee49e8 == '\0') {
            ___cxa_atexit(std::unique_ptr<ModelUpdateManager>::~unique_ptr, PTR_m_pSingleton_100ee6c58, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043b100
    void __GLOBAL__sub_I_unity_39_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_25();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
