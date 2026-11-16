// _unplaced/libs/graphics/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x104232e90, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232ed0, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1009a6fa0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1009a7000, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1009a70a0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1009a7100, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1009a7160, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1009a73e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
        (&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS)->GetIdentityBillboardTransforms();
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS, 4294967296);
    }

    // 0x1009a7420, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.103
    void ___cxx_global_var_init_103(__3* param_1) {
        AnimationManager::$_3::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee6768, &AnimationManager::IDENTITY_STATE_BONES, 4294967296);
    }

    // 0x1009a7450, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104(__4* param_1) {
        AnimationManager::$_4::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationManager::IDENTITY_STATE_LABELS, 4294967296);
    }

    // 0x1009a7480, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105(__5* param_1) {
        AnimationManager::$_5::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS, 4294967296);
    }

    // 0x1009a74b0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106(__6* param_1) {
        AnimationManager::$_6::operator()(param_1);
        ___cxa_atexit(PTR__Array_100ee67f8, &AnimationManager::IDENTITY_SKIP_TWEENBONE, 4294967296);
    }

    // 0x1009a74e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107() {
        make_shared<Animation>((jag*)&AnimationManager::IDENTITY_ANIMATION);
        ___cxa_atexit(PTR__shared_ptr_100ee53a8, &AnimationManager::IDENTITY_ANIMATION, 4294967296);
    }

    // 0x1009a75a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a75e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7620, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7660, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a76a0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a76d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7710, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7750, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7790, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.134
    void ___cxx_global_var_init_134() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a77d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7830, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7870, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d0;
        if (*PTR_m_mutex_100ee45d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a78b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a78f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4550;
        if (*PTR_m_mutex_100ee4550 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7930, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4580;
        if (*PTR_m_mutex_100ee4580 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ec0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7970, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a79b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a79f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7a30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7a70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7ab0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7b10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7b50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7b90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7bd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7c10, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7c40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7c80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7cc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.154
    void ___cxx_global_var_init_154() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7d00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.155
    void ___cxx_global_var_init_155() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7d40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.156
    void ___cxx_global_var_init_156() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4598;
        if (*PTR_m_mutex_100ee4598 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ef0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7d80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.157
    void ___cxx_global_var_init_157() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4578;
        if (*PTR_m_mutex_100ee4578 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5eb0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7dc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.158
    void ___cxx_global_var_init_158() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4588;
        if (*PTR_m_mutex_100ee4588 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ed0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7e00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.159
    void ___cxx_global_var_init_159() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7e40, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.160
    void ___cxx_global_var_init_160() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009a7ea0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.161
    void ___cxx_global_var_init_161() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4560;
        if (*PTR_m_mutex_100ee4560 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009a7ee0, 119 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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
    // 0x100d4fbd0, 184 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = {
        16,         1,          2,          0,          64,          128,       256,       512, 1024,       0,
        9,          9,          3,          1,          3,           0,         1,         2,   3,          4,
        5,          6,          7,          8,          0,           1,         2,         3,   4,          5,
        0,          16908802,   50528513,   117901059,  84017666,    134809865, 168429576, 10,  1053573674, 1075866777,
        1065353224, 1061158912, 1042938855, 1034590513, -1048576000, 0,
    };

} // namespace jag::threading
