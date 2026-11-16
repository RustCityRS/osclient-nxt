// libs/hal/audio/AudioFormat.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioFormat.h"

// 0x100ba39a0
void ___cxx_global_var_init_58(void) {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::hal::audio::AudioRenderer::m_audioMutex, 4294967296);
}

// 0x100ba39c0
void ___cxx_global_var_init_59(void) {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::hal::audio::AudioRenderer::m_voiceInstanceGuardMutex, 4294967296);
}

// 0x100ba3a20
void ___cxx_global_var_init_93(void) {
    new ((Array<std::unique_ptr<jag::hal::audio::AudioBuffer>>*)&jag::hal::audio::AudioRenderer::m_outputBuffers)
        jag::Array<std::unique_ptr<jag::hal::audio::AudioBuffer>>(3);
    ___cxa_atexit(PTR__Array_100ee67c0, &jag::hal::audio::AudioRenderer::m_outputBuffers, 4294967296);
}

// 0x100ba3a60
void ___cxx_global_var_init_113(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100ba3aa0
void ___cxx_global_var_init_114(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100ba3ae0
void ___cxx_global_var_init_115(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3b20
void ___cxx_global_var_init_116(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3b60
void ___cxx_global_var_init_117(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4530;
    if (*PTR_m_mutex_100ee4530 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e20, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3ba0
void ___cxx_global_var_init_118(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4528;
    if (*PTR_m_mutex_100ee4528 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3be0
void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_33();
    ___cxx_global_var_init_35();
    ___cxx_global_var_init_37();
    ___cxx_global_var_init_39();
    ___cxx_global_var_init_41();
    ___cxx_global_var_init_43();
    ___cxx_global_var_init_45();
    ___cxx_global_var_init_47();
    ___cxx_global_var_init_49();
    ___cxx_global_var_init_51();
    ___cxx_global_var_init_53();
    ___cxx_global_var_init_55();
    ___cxx_global_var_init_58();
    ___cxx_global_var_init_59();
    ___cxx_global_var_init_62();
    ___cxx_global_var_init_93();
    _objc_autoreleasePoolPop(uVar1);
}
