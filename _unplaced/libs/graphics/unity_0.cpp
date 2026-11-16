// _unplaced/libs/graphics/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x104232e90
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232ed0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x1009a6fa0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1009a7000
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1009a70a0
    void ___cxx_global_var_init_24(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1009a7100
    void ___cxx_global_var_init_26(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1009a7160
    void ___cxx_global_var_init_28(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1009a73e0
    void ___cxx_global_var_init_93(void) {
        *((ReturnValue*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS) = GetIdentityBillboardTransforms();
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS, 4294967296);
    }

    // 0x1009a7420
    void ___cxx_global_var_init_103(__3* param_1) {
        AnimationManager::$_3::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee6768, &AnimationManager::IDENTITY_STATE_BONES, 4294967296);
    }

    // 0x1009a7450
    void ___cxx_global_var_init_104(__4* param_1) {
        AnimationManager::$_4::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationManager::IDENTITY_STATE_LABELS, 4294967296);
    }

    // 0x1009a7480
    void ___cxx_global_var_init_105(__5* param_1) {
        AnimationManager::$_5::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS, 4294967296);
    }

    // 0x1009a74b0
    void ___cxx_global_var_init_106(__6* param_1) {
        AnimationManager::$_6::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee67f8, &AnimationManager::IDENTITY_SKIP_TWEENBONE, 4294967296);
    }

    // 0x1009a74e0
    void ___cxx_global_var_init_107(void) {
        *((ReturnValue*)&AnimationManager::IDENTITY_ANIMATION) = make_shared<Animation>();
        ___cxa_atexit(PTR__shared_ptr_100ee53a8, &AnimationManager::IDENTITY_ANIMATION, 4294967296);
    }

    // 0x1009a75a0
    void ___cxx_global_var_init_126(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a75e0
    void ___cxx_global_var_init_127(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7620
    void ___cxx_global_var_init_128(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7660
    void ___cxx_global_var_init_129(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a76a0
    void ___cxx_global_var_init_130(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a76d0
    void ___cxx_global_var_init_131(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7710
    void ___cxx_global_var_init_132(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7750
    void ___cxx_global_var_init_133(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7790
    void ___cxx_global_var_init_134(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a77d0
    void ___cxx_global_var_init_135(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7830
    void ___cxx_global_var_init_136(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7870
    void ___cxx_global_var_init_137(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d0;
        if (*PTR_m_mutex_100ee45d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a78b0
    void ___cxx_global_var_init_138(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a78f0
    void ___cxx_global_var_init_139(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4550;
        if (*PTR_m_mutex_100ee4550 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7930
    void ___cxx_global_var_init_140(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4580;
        if (*PTR_m_mutex_100ee4580 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ec0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7970
    void ___cxx_global_var_init_141(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a79b0
    void ___cxx_global_var_init_142(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a79f0
    void ___cxx_global_var_init_143(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7a30
    void ___cxx_global_var_init_144(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7a70
    void ___cxx_global_var_init_145(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7ab0
    void ___cxx_global_var_init_146(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7b10
    void ___cxx_global_var_init_147(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7b50
    void ___cxx_global_var_init_148(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7b90
    void ___cxx_global_var_init_149(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7bd0
    void ___cxx_global_var_init_150(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7c10
    void ___cxx_global_var_init_151(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7c40
    void ___cxx_global_var_init_152(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7c80
    void ___cxx_global_var_init_153(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7cc0
    void ___cxx_global_var_init_154(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7d00
    void ___cxx_global_var_init_155(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7d40
    void ___cxx_global_var_init_156(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4598;
        if (*PTR_m_mutex_100ee4598 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ef0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7d80
    void ___cxx_global_var_init_157(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4578;
        if (*PTR_m_mutex_100ee4578 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5eb0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7dc0
    void ___cxx_global_var_init_158(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4588;
        if (*PTR_m_mutex_100ee4588 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ed0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7e00
    void ___cxx_global_var_init_159(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7e40
    void ___cxx_global_var_init_160(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7ea0
    void ___cxx_global_var_init_161(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4560;
        if (*PTR_m_mutex_100ee4560 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7ee0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_5();
        ___cxx_global_var_init_13();
        ___cxx_global_var_init_45();
        ___cxx_global_var_init_77();
        ___cxx_global_var_init_89();
        ___cxx_global_var_init_90();
        ___cxx_global_var_init_91();
        ___cxx_global_var_init_92();
        ___cxx_global_var_init_93();
        ___cxx_global_var_init_103();
        ___cxx_global_var_init_104();
        ___cxx_global_var_init_105();
        ___cxx_global_var_init_106();
        ___cxx_global_var_init_107();
        ___cxx_global_var_init_108();
        ___cxx_global_var_init_116();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d4fbd0
    int32_t MAX_HARDWARE_THREAD_LIMIT[46] = {
        16,         1,          2,          0,          64,          128,       256,       512, 1024,       0,
        9,          9,          3,          1,          3,           0,         1,         2,   3,          4,
        5,          6,          7,          8,          0,           1,         2,         3,   4,          5,
        0,          16908802,   50528513,   117901059,  84017666,    134809865, 168429576, 10,  1053573674, 1075866777,
        1065353224, 1061158912, 1042938855, 1034590513, -1048576000, 0,
    };

} // namespace jag::threading
