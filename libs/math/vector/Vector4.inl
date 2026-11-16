// libs/math/vector/Vector4.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

// 0x10005a0b0
void ___cxx_global_var_init_216(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x10005a0f0
void ___cxx_global_var_init_217(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x10005a130
void ___cxx_global_var_init_218(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
    if (*PTR_m_pSingleton_100ee49f0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x10005a1b0
void ___cxx_global_var_init_220(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10005a1f0
void ___cxx_global_var_init_221(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
    if (*PTR_m_mutex_100ee45b0 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
        *puVar1 = 1;
    }
}

// 0x10005a230
void ___cxx_global_var_init_222(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
    if (*PTR_m_pSingleton_100ee49d8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecbb0
void ___cxx_global_var_init_234(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1002ecbf0
void ___cxx_global_var_init_235(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecc30
void ___cxx_global_var_init_236(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecc70
void ___cxx_global_var_init_237(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4520;
    if (*PTR_m_mutex_100ee4520 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1002eccb0
void ___cxx_global_var_init_238(void) {
    uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
    if (*PTR_IDENTITY_100ee4778 == '\0') {
        new (PTR_IDENTITY_100ee6678) jag::math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1002eccf0
void ___cxx_global_var_init_239(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee47e0;
    if (*PTR_ZERO_100ee47e0 == '\0') {
        new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1002ecd70
void ___cxx_global_var_init_241(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
    if (*PTR_m_pSingleton_100ee49f0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecdb0
void ___cxx_global_var_init_242(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecdf0
void ___cxx_global_var_init_243(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
    if (*PTR_m_mutex_100ee45b0 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ece30
void ___cxx_global_var_init_244(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
    if (*PTR_m_pSingleton_100ee49d8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ece70
void ___cxx_global_var_init_245(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
    if (*PTR_m_mutex_100ee45d8 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1002eceb0
void ___cxx_global_var_init_246(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4590;
    if (*PTR_m_mutex_100ee4590 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecef0
void ___cxx_global_var_init_247(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
    if (*PTR_m_pSingleton_100ee4290 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecf30
void ___cxx_global_var_init_248(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4500;
    if (*PTR_m_mutex_100ee4500 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1002ecf70
void __GLOBAL__sub_I_unity_2_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_165();
    ___cxx_global_var_init_166();
    ___cxx_global_var_init_167();
    ___cxx_global_var_init_168();
    ___cxx_global_var_init_174();
    ___cxx_global_var_init_175();
    ___cxx_global_var_init_183();
    ___cxx_global_var_init_184();
    ___cxx_global_var_init_185();
    ___cxx_global_var_init_196();
    ___cxx_global_var_init_197();
    ___cxx_global_var_init_198();
    ___cxx_global_var_init_199();
    ___cxx_global_var_init_200();
    _objc_autoreleasePoolPop(uVar1);
}
