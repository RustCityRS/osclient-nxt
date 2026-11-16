// _unplaced/libs/tweaky/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

// 0x100a68970, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    undefined1 local_50[40];
    Vector3T<int> local_28[16];

    jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
    jag::math::Vector3T<int>::Vector3T(local_28);
    new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
}

// 0x100a689d0, 32 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.1
void ___cxx_global_var_init_1() {
    new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
}

// 0x100a689f0, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.3
void ___cxx_global_var_init_3() {
    if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
        if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
            new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) jag::HashedString("LUMINANCE_ADAPTED");
            ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
        }
    }
}

// 0x100a68a50, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.4
void ___cxx_global_var_init_4() {
    if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
        if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
            new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) jag::HashedString("LUMINANCE_ADAPTED_PREVIOUS");
            ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
        }
    }
}

// 0x100a68ab0, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.6
void ___cxx_global_var_init_6() {
    if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
        if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
            new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) jag::HashedString("VIEWRT_LUMINANCE_AVERAGE");
            ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
        }
    }
}

// 0x100a68cd0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.66
void ___cxx_global_var_init_66() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100a68d10, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.67
void ___cxx_global_var_init_67() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a68d50, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.68
void ___cxx_global_var_init_68() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68d90, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.69
void ___cxx_global_var_init_69() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68dd0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.70
void ___cxx_global_var_init_70() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a68e00, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.71
void ___cxx_global_var_init_71() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68e40, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.72
void ___cxx_global_var_init_72() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a68e80, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.73
void ___cxx_global_var_init_73() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68ec0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.74
void ___cxx_global_var_init_74() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68f00, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.75
void ___cxx_global_var_init_75() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::RenderDevice, std::default_delete<jag::render::RenderDevice>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68f40, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.76
void ___cxx_global_var_init_76() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d8;
    if (*PTR_m_pSingleton_100ee49d8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                      std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c48, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68f80, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.77
void ___cxx_global_var_init_77() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee45b0;
    if (*PTR_m_mutex_100ee45b0 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68fc0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.78
void ___cxx_global_var_init_78() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee47e0;
    if (*PTR_ZERO_100ee47e0 == '\0') {
        new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a69000, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.79
void ___cxx_global_var_init_79() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4820;
    if (*PTR_ZERO_100ee4820 == '\0') {
        new (PTR_ZERO_100ee6728)
            jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a69060, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.80
void ___cxx_global_var_init_80() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee45d8;
    if (*PTR_m_mutex_100ee45d8 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a690a0, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.81
void ___cxx_global_var_init_81() {
    undefined* puVar1;

    puVar1 = PTR_IDENTITY_100ee4828;
    if (*PTR_IDENTITY_100ee4828 == '\0') {
        new (PTR_IDENTITY_100ee6730)
            jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100a69100, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.82
void ___cxx_global_var_init_82() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4590;
    if (*PTR_m_mutex_100ee4590 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a69140, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.83
void ___cxx_global_var_init_83() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4290;
    if (*PTR_m_pSingleton_100ee4290 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphicutils::BatchDestroyManager,
                                      std::default_delete<jag::graphicutils::BatchDestroyManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5940, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a69180, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.84
void ___cxx_global_var_init_84() {
    undefined* puVar1;

    puVar1 = PTR_RIGHT_100ee47e8;
    if (*PTR_RIGHT_100ee47e8 == '\0') {
        new (PTR_RIGHT_100ee66f0) jag::math::ColourHSL(1.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a691c0, 69 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_1();
    ___cxx_global_var_init_8();
    ___cxx_global_var_init_38();
    ___cxx_global_var_init_40();
    ___cxx_global_var_init_42();
    ___cxx_global_var_init_60();
    ___cxx_global_var_init_61();
    _objc_autoreleasePoolPop(uVar1);
}
