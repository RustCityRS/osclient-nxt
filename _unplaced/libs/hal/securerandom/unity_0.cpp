// _unplaced/libs/hal/securerandom/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.securerandom

// 0x1003ab490
void ___cxx_global_var_init(void) {
    uint64_t uVar1 = (*(void (*)(...))jag::SecureRandom::m_threadLocal)();
    __tlv_atexit(std::unique_ptr<jag::internal::SecureRandomThreadLocal>::~unique_ptr, uVar1, 4294967296);
}

// 0x1003ab4c0
void ___cxx_global_var_init_3(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1003ab500
void ___cxx_global_var_init_4(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1003ab540
void ___cxx_global_var_init_5(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1003ab580
void ___cxx_global_var_init_6(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1003ab5c0
void ___cxx_global_var_init_7(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4960;
    if (*PTR_m_pSingleton_100ee4960 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::SecureRandom>::~unique_ptr, PTR_m_pSingleton_100ee6bd0, 4294967296);
        *puVar1 = 1;
    }
}
