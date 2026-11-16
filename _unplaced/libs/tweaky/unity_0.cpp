// _unplaced/libs/tweaky/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

// 0x100a68970
void ___cxx_global_var_init(void) {
    Matrix33T<float> local_50;

    jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
    Vector3T<int> local_28;
    new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
}

// 0x100a689d0
void ___cxx_global_var_init_1(void) {
    new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
}

// 0x100a689f0
void ___cxx_global_var_init_3(void) {
    if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
        if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
            new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) jag::HashedString("LUMINANCE_ADAPTED");
            ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
        }
    }
}

// 0x100a68a50
void ___cxx_global_var_init_4(void) {
    if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
        if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
            new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) jag::HashedString("LUMINANCE_ADAPTED_PREVIOUS");
            ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
        }
    }
}

// 0x100a68ab0
void ___cxx_global_var_init_6(void) {
    if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
        if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
            new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) jag::HashedString("VIEWRT_LUMINANCE_AVERAGE");
            ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
        }
    }
}

// 0x100a68cd0
void ___cxx_global_var_init_66(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100a68d10
void ___cxx_global_var_init_67(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a68d50
void ___cxx_global_var_init_68(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68d90
void ___cxx_global_var_init_69(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68dd0
void ___cxx_global_var_init_70(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a68e00
void ___cxx_global_var_init_71(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68e40
void ___cxx_global_var_init_72(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a68e80
void ___cxx_global_var_init_73(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68ec0
void ___cxx_global_var_init_74(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68f00
void ___cxx_global_var_init_75(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68f40
void ___cxx_global_var_init_76(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
    if (*PTR_m_pSingleton_100ee49d8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68f80
void ___cxx_global_var_init_77(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
    if (*PTR_m_mutex_100ee45b0 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a68fc0
void ___cxx_global_var_init_78(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee47e0;
    if (*PTR_ZERO_100ee47e0 == '\0') {
        new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a69000
void ___cxx_global_var_init_79(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4820;
    if (*PTR_ZERO_100ee4820 == '\0') {
        new (PTR_ZERO_100ee6728)
            jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a69060
void ___cxx_global_var_init_80(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
    if (*PTR_m_mutex_100ee45d8 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a690a0
void ___cxx_global_var_init_81(void) {
    uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
    if (*PTR_IDENTITY_100ee4828 == '\0') {
        new (PTR_IDENTITY_100ee6730)
            jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100a69100
void ___cxx_global_var_init_82(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4590;
    if (*PTR_m_mutex_100ee4590 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100a69140
void ___cxx_global_var_init_83(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
    if (*PTR_m_pSingleton_100ee4290 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100a69180
void ___cxx_global_var_init_84(void) {
    uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
    if (*PTR_RIGHT_100ee47e8 == '\0') {
        new (PTR_RIGHT_100ee66f0) jag::math::ColourHSL(1.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100a691c0
void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
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
