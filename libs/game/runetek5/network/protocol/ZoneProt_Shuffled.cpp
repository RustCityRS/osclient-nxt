// libs/game/runetek5/network/protocol/ZoneProt_Shuffled.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

// 0x1004a1ce0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.34
void ___cxx_global_var_init_34() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1004a1d20, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.35
void ___cxx_global_var_init_35() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1004a1d60, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.36
void ___cxx_global_var_init_36() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004a1da0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.37
void ___cxx_global_var_init_37() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004a1de0, 48 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.38
void ___cxx_global_var_init_38() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1004a1e10, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.39
void ___cxx_global_var_init_39() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004a1e50, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.40
void ___cxx_global_var_init_40() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1004a1e90, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.41
void ___cxx_global_var_init_41() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004a1ed0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.42
void ___cxx_global_var_init_42() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004a1f10, 109 bytes, placed by debug map only (low confidence)
// __GLOBAL__sub_I_unity_33_cxx.cxx
void __GLOBAL__sub_I_unity_33_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_1();
    ___cxx_global_var_init_2();
    ___cxx_global_var_init_4();
    ___cxx_global_var_init_6();
    ___cxx_global_var_init_8();
    ___cxx_global_var_init_10();
    ___cxx_global_var_init_12();
    ___cxx_global_var_init_14();
    ___cxx_global_var_init_16();
    ___cxx_global_var_init_18();
    ___cxx_global_var_init_20();
    ___cxx_global_var_init_22();
    ___cxx_global_var_init_24();
    ___cxx_global_var_init_26();
    ___cxx_global_var_init_28();
    _objc_autoreleasePoolPop(uVar1);
}
