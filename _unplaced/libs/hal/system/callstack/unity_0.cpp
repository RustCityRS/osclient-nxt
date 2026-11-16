// _unplaced/libs/hal/system/callstack/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.callstack

// 0x100cb36b0
void ___cxx_global_var_init(void) {
    new (
        (vector<std::function<void(jag::callstack::CallstackResolved&)>>*)&jag::callstack::CallstackResolved::m_filters)
        eastl::vector<std::function<void(jag::callstack::CallstackResolved&)>>();
    ___cxa_atexit(PTR__vector_100ee6d60, &jag::callstack::CallstackResolved::m_filters, 4294967296);
}

// 0x100cb36f0
void ___cxx_global_var_init_12(void) {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::callstack::CrashHandler::m_mutex, 4294967296);
}

// 0x100cb3710
void ___cxx_global_var_init_28(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100cb3750
void ___cxx_global_var_init_29(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100cb3790
void ___cxx_global_var_init_30(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100cb37d0
void ___cxx_global_var_init_31(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100cb3810
void ___cxx_global_array_dtor(void) {
    uint8_t* puVar1 = PTR_REPLACE_PATTERNS_100ee9580;
    long lVar2 = 8384;
    do {
        ((puVar1 + lVar2))->~pair();
        lVar2 = lVar2 - 2096;
    } while (lVar2 != -2096);
}

// 0x100cb3850
void ___cxx_global_array_dtor_71(void) {
    uint8_t* puVar1 = PTR_REPLACE_PATTERNS_100ee9588;
    long lVar2 = 8384;
    do {
        ((puVar1 + lVar2))->~pair();
        lVar2 = lVar2 - 2096;
    } while (lVar2 != -2096);
}

// 0x100cb3890
void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_12();
    _objc_autoreleasePoolPop(uVar1);
}
