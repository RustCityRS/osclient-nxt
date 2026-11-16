// _unplaced/libs/testframework/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

// 0x100bb21d0
void ___cxx_global_var_init(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100bb2210
void ___cxx_global_var_init_127(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bb2250
void ___cxx_global_var_init_128(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb2290
void ___cxx_global_var_init_129(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb22d0
void ___cxx_global_var_init_130(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb2310
void ___cxx_global_var_init_131(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bb2350
void ___cxx_global_var_init_132(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bb2380
void ___cxx_global_var_init_133(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb23c0
void ___cxx_global_var_init_134(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb2400
void ___cxx_global_var_init_135(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb2440
void ___cxx_global_var_init_136(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4970;
    if (*PTR_m_pSingleton_100ee4970 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::testframework::TestRunner>::~unique_ptr, PTR_m_pSingleton_100ee6be0,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bb2480
void ___cxx_global_var_init_137(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4968;
    if (*PTR_m_pSingleton_100ee4968 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::graphicutils::Screengrabber>::~unique_ptr, PTR_m_pSingleton_100ee6bd8,
                      4294967296);
        *puVar1 = 1;
    }
}
