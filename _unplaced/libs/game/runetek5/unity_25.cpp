// _unplaced/libs/game/runetek5/unity_25.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::graphics {
    // 0x10422af90
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422afd0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x1004f2110
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1004f2170
    void ___cxx_global_var_init_4(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1004f2190
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1004f21f0
    void ___cxx_global_var_init_8(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1004f2250
    void ___cxx_global_var_init_10(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1004f22f0
    void ___cxx_global_var_init_25(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2330
    void ___cxx_global_var_init_26(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2370
    void ___cxx_global_var_init_27(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f23b0
    void ___cxx_global_var_init_28(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f23f0
    void ___cxx_global_var_init_29(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2420
    void ___cxx_global_var_init_30(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2460
    void ___cxx_global_var_init_31(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f24a0
    void ___cxx_global_var_init_32(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f24e0
    void ___cxx_global_var_init_33(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2520
    void ___cxx_global_var_init_34(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2560
    void ___cxx_global_var_init_35(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f25a0
    void ___cxx_global_var_init_36(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4420;
        if (*PTR_m_mutex_100ee4420 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2620
    void ___cxx_global_var_init_38(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43a8;
        if (*PTR_m_mutex_100ee43a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2660
    void ___cxx_global_var_init_39(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f26a0
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2700
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2740
    void ___cxx_global_var_init_42(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2780
    void ___cxx_global_var_init_43(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f27c0
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2880
    void ___cxx_global_var_init_47(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f28c0
    void ___cxx_global_var_init_48(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2900
    void ___cxx_global_var_init_49(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2960
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f29a0
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f29e0
    void ___cxx_global_var_init_52(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2a60
    void ___cxx_global_var_init_54(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4580;
        if (*PTR_m_mutex_100ee4580 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ec0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2ae0
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6570;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2b60
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4550;
        if (*PTR_m_mutex_100ee4550 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2be0
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4578;
        if (*PTR_m_mutex_100ee4578 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5eb0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2c20
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2ca0
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee64d0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4678;
        if (*PTR_NullConfigType_100ee4678 == '\0') {
            new (PTR_NullConfigType_100ee64d0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2ce0
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004f2d60
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2da0
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4368;
        if (*PTR_m_mutex_100ee4368 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a98, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2de0
    void __GLOBAL__sub_I_unity_25_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_4();
        ___cxx_global_var_init_12();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d42f50
    int32_t MAX_HARDWARE_THREAD_LIMIT[36] = {
        16,        0, 0, 0, -1, 0,     6,  6,  9,  -1, -1, 1, 0, 0,   255,        256, 1127546356, -1019937292,
        939523840, 0, 0, 0, 64, 65792, -1, 64, -1, 0,  -1, 0, 0, 255, 1161527296, 0,   1065353216, 0,
    };

} // namespace jag::threading
