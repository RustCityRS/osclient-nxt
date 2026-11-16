// _unplaced/libs/game/runetek5/unity_17.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

// 0x100552fa0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100552fe0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.10
void ___cxx_global_var_init_10() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100553020, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.11
void ___cxx_global_var_init_11() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100553060, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.12
void ___cxx_global_var_init_12() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1005530a0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.13
void ___cxx_global_var_init_13() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1005530d0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.14
void ___cxx_global_var_init_14() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100553110, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.15
void ___cxx_global_var_init_15() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100553150, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.16
void ___cxx_global_var_init_16() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100553190, 54 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.17
void ___cxx_global_var_init_17() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}
