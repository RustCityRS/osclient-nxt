// _unplaced/libs/game/runetek5/unity_15.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

// 0x100563ce0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.107
void ___cxx_global_var_init_107() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100563d20, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.108
void ___cxx_global_var_init_108() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100563d60, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.109
void ___cxx_global_var_init_109() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563da0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.110
void ___cxx_global_var_init_110() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563de0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.111
void ___cxx_global_var_init_111() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100563e10, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.112
void ___cxx_global_var_init_112() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563e50, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.113
void ___cxx_global_var_init_113() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100563e90, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.114
void ___cxx_global_var_init_114() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563ed0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.115
void ___cxx_global_var_init_115() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563f10, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.116
void ___cxx_global_var_init_116() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4520;
    if (*PTR_m_mutex_100ee4520 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563f50, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.117
void ___cxx_global_var_init_117() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4500;
    if (*PTR_m_mutex_100ee4500 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563f90, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.118
void ___cxx_global_var_init_118() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::RenderDevice, std::default_delete<jag::render::RenderDevice>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563fd0, 34 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_15_cxx.cxx
void __GLOBAL__sub_I_unity_15_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    _objc_autoreleasePoolPop(uVar1);
}
