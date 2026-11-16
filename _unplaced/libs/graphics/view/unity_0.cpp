// _unplaced/libs/graphics/view/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

// 0x1009de740, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1009de780, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.1
void ___cxx_global_var_init_1() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009de7c0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.2
void ___cxx_global_var_init_2() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009de800, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.3
void ___cxx_global_var_init_3() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009de840, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.4
void ___cxx_global_var_init_4() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009de870, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.5
void ___cxx_global_var_init_5() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009de8b0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.6
void ___cxx_global_var_init_6() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009de8f0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.7
void ___cxx_global_var_init_7() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009de930, 54 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.8
void ___cxx_global_var_init_8() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}
