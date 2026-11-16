// _unplaced/libs/graphics/graphicutils/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

// 0x100bc0b20, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.72
void ___cxx_global_var_init_72() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100bc0b60, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.73
void ___cxx_global_var_init_73() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bc0ba0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.74
void ___cxx_global_var_init_74() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0be0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.75
void ___cxx_global_var_init_75() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0c20, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.76
void ___cxx_global_var_init_76() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bc0c50, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.77
void ___cxx_global_var_init_77() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0c90, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.78
void ___cxx_global_var_init_78() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bc0cd0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.79
void ___cxx_global_var_init_79() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0d10, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.80
void ___cxx_global_var_init_80() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0d50, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.81
void ___cxx_global_var_init_81() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::RenderDevice, std::default_delete<jag::render::RenderDevice>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0d90, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.82
void ___cxx_global_var_init_82() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a8;
    if (*PTR_m_pSingleton_100ee49a8 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::BuiltinStates, std::default_delete<jag::render::BuiltinStates>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c18, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0dd0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.83
void ___cxx_global_var_init_83() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4978;
    if (*PTR_m_pSingleton_100ee4978 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::PrimitiveShaderFamily, std::default_delete<jag::PrimitiveShaderFamily>>::~unique_ptr,
            PTR_m_pSingleton_100ee6be8, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bc0e10, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.84
void ___cxx_global_var_init_84() {
    undefined* puVar1;

    puVar1 = PTR_IDENTITY_100ee4828;
    if (*PTR_IDENTITY_100ee4828 == '\0') {
        new (PTR_IDENTITY_100ee6730)
            jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100bc0e70, 44 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_58();
    ___cxx_global_var_init_64();
    _objc_autoreleasePoolPop(uVar1);
}
