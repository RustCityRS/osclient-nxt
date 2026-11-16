// _unplaced/libs/game/runetek5/unity_15.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

// 0x100563ce0
void ___cxx_global_var_init_107(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100563d20
void ___cxx_global_var_init_108(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100563d60
void ___cxx_global_var_init_109(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563da0
void ___cxx_global_var_init_110(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100563de0
void ___cxx_global_var_init_111(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100563e10
void ___cxx_global_var_init_112(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563e50
void ___cxx_global_var_init_113(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100563e90
void ___cxx_global_var_init_114(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100563ed0
void ___cxx_global_var_init_115(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100563f10
void ___cxx_global_var_init_116(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4520;
    if (*PTR_m_mutex_100ee4520 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563f50
void ___cxx_global_var_init_117(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4500;
    if (*PTR_m_mutex_100ee4500 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563f90
void ___cxx_global_var_init_118(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100563fd0
void __GLOBAL__sub_I_unity_15_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    _objc_autoreleasePoolPop(uVar1);
}
