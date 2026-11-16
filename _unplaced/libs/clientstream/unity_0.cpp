// _unplaced/libs/clientstream/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.clientstream

// 0x100b0d340, 32 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::ClientStream::m_connectionPingMutex, 4294967296);
}

// 0x100b0d3a0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.5
void ___cxx_global_var_init_5() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100b0d3e0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.6
void ___cxx_global_var_init_6() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100b0d420, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.7
void ___cxx_global_var_init_7() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100b0d460, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.8
void ___cxx_global_var_init_8() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100b0d4a0, 39 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_1();
    _objc_autoreleasePoolPop(uVar1);
}
