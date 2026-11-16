// _unplaced/libs/graphics/unity_7.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x1042329c0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232a00, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x10088f060, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10088f0c0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10088f0e0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10088f140, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10088f1a0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10088f200, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.122
    void ___cxx_global_var_init_122() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f240, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.123
    void ___cxx_global_var_init_123() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f280, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.124
    void ___cxx_global_var_init_124() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f2c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.125
    void ___cxx_global_var_init_125() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f300, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f330, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f370, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f3b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f3f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f430, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f470, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f4b0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f4e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.134
    void ___cxx_global_var_init_134() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f520, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f560, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f5a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f5e0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f640, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f680, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f6e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f720, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10088f760, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10088f7a0, 39 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_7_cxx.cxx
    void __GLOBAL__sub_I_unity_7_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_100();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
