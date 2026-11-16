// libs/hal/audio/AudioFormat.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioFormat.h"

// 0x100ba39a0, 32 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.58
void ___cxx_global_var_init_58() {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::hal::audio::AudioRenderer::m_audioMutex, 4294967296);
}

// 0x100ba39c0, 32 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.59
void ___cxx_global_var_init_59() {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::hal::audio::AudioRenderer::m_voiceInstanceGuardMutex, 4294967296);
}

// 0x100ba3a20, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.93
void ___cxx_global_var_init_93() {
    new (&jag::hal::audio::AudioRenderer::m_outputBuffers)
        jag::Array<std::unique_ptr<jag::hal::audio::AudioBuffer, std::default_delete<jag::hal::audio::AudioBuffer>>,
                   eastl::allocator>(3);
    ___cxa_atexit(PTR__Array_100ee67c0, &jag::hal::audio::AudioRenderer::m_outputBuffers, 4294967296);
}

// 0x100ba3a60, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.113
void ___cxx_global_var_init_113() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100ba3aa0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.114
void ___cxx_global_var_init_114() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100ba3ae0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.115
void ___cxx_global_var_init_115() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3b20, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.116
void ___cxx_global_var_init_116() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3b60, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.117
void ___cxx_global_var_init_117() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4530;
    if (*PTR_m_mutex_100ee4530 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e20, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3ba0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.118
void ___cxx_global_var_init_118() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4528;
    if (*PTR_m_mutex_100ee4528 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba3be0, 114 bytes, placed by debug map only (low confidence)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
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
