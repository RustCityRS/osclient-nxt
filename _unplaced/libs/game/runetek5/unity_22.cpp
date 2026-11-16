// _unplaced/libs/game/runetek5/unity_22.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422b080
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422b0c0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x100521b30
    void ___cxx_global_var_init(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x100521b90
    void ___cxx_global_var_init_1(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x100521c10
    void ___cxx_global_var_init_2(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100521c70
    void ___cxx_global_var_init_3(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100521c90
    void ___cxx_global_var_init_7(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100521cf0
    void ___cxx_global_var_init_9(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100521d50
    void ___cxx_global_var_init_11(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100521df0
    void ___cxx_global_var_init_24(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100521e30
    void ___cxx_global_var_init_25(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100521e70
    void ___cxx_global_var_init_26(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100521eb0
    void ___cxx_global_var_init_27(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100521ef0
    void ___cxx_global_var_init_28(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100521f20
    void ___cxx_global_var_init_29(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100521f60
    void ___cxx_global_var_init_30(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100521fa0
    void ___cxx_global_var_init_31(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100521fe0
    void ___cxx_global_var_init_32(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522020
    void ___cxx_global_var_init_33(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522060
    void ___cxx_global_var_init_34(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005220a0
    void ___cxx_global_var_init_35(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005220e0
    void ___cxx_global_var_init_36(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522120
    void ___cxx_global_var_init_37(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522160
    void ___cxx_global_var_init_38(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005221a0
    void ___cxx_global_var_init_39(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005221e0
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522220
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100522280
    void ___cxx_global_var_init_42(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005222c0
    void ___cxx_global_var_init_43(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100522320
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522360
    void ___cxx_global_var_init_45(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005223a0
    void ___cxx_global_var_init_46(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005223e0
    void ___cxx_global_var_init_47(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100522460
    void ___cxx_global_var_init_49(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6550;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46f8;
        if (*PTR_NullConfigType_100ee46f8 == '\0') {
            new (PTR_NullConfigType_100ee6550) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5278, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005224a0
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a8;
        if (*PTR_m_mutex_100ee44a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005224e0
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44f0;
        if (*PTR_m_mutex_100ee44f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5da0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522520
    void ___cxx_global_var_init_52(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43c0;
        if (*PTR_m_mutex_100ee43c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522560
    void ___cxx_global_var_init_53(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4610;
        if (*PTR_m_mutex_100ee4610 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fe0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005225e0
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6518;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46c0;
        if (*PTR_NullConfigType_100ee46c0 == '\0') {
            new (PTR_NullConfigType_100ee6518) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522660
    void ___cxx_global_var_init_57(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1005226a0
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44b0;
        if (*PTR_m_mutex_100ee44b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522720
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6558;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4700;
        if (*PTR_NullConfigType_100ee4700 == '\0') {
            new (PTR_NullConfigType_100ee6558) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005227a0
    void __GLOBAL__sub_I_unity_22_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_13();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
