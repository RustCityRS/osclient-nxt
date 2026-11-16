// _unplaced/libs/hal/system/systemdetails/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.systemdetails

// 0x1003abd20
void ___cxx_global_var_init(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1003abd60
void ___cxx_global_var_init_14(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1003abda0
void ___cxx_global_var_init_15(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1003abde0
void ___cxx_global_var_init_16(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}
