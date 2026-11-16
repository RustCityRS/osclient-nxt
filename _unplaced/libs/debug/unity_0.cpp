// _unplaced/libs/debug/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.debug

// 0x10072c6b0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x10072c6f0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.29
void ___cxx_global_var_init_29() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x10072c730, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.30
void ___cxx_global_var_init_30() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10072c770, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.31
void ___cxx_global_var_init_31() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10072c7b0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.32
void ___cxx_global_var_init_32() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x10072c7e0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.33
void ___cxx_global_var_init_33() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10072c820, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.34
void ___cxx_global_var_init_34() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x10072c860, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.35
void ___cxx_global_var_init_35() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee47e0;
    if (*PTR_ZERO_100ee47e0 == '\0') {
        new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x10072c8a0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.36
void ___cxx_global_var_init_36() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42b0;
    if (*PTR_m_pSingleton_100ee42b0 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::debug::DebugUIManager, std::default_delete<jag::debug::DebugUIManager>>::~unique_ptr,
            PTR_m_pSingleton_100ee5960, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10072c8e0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.37
void ___cxx_global_var_init_37() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10072c920, 54 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.38
void ___cxx_global_var_init_38() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a8;
    if (*PTR_m_pSingleton_100ee49a8 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::BuiltinStates, std::default_delete<jag::render::BuiltinStates>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c18, 4294967296);
        *puVar1 = 1;
    }
}
