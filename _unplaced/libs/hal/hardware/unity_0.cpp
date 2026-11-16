// _unplaced/libs/hal/hardware/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.hardware

// 0x100c60cb0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100c60cf0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.17
void ___cxx_global_var_init_17() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100c60d30, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.18
void ___cxx_global_var_init_18() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100c60d70, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.19
void ___cxx_global_var_init_19() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100c60db0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.20
void ___cxx_global_var_init_20() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100c60de0, 54 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.21
void ___cxx_global_var_init_21() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49f0;
    if (*PTR_m_pSingleton_100ee49f0 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::hardware::HardwareInfo, std::default_delete<jag::hardware::HardwareInfo>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c60, 4294967296);
        *puVar1 = 1;
    }
}
