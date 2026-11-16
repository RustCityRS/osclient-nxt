// _unplaced/libs/graphics/primitive/debugbasic/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

// 0x1009db130
void ___cxx_global_var_init(void) {
    new ((fixed_map<eastl::fixed_string<char, 64>, jag::DebugPrimitiveCollectorBasic*,
                    16ul>*)&jag::DebugPrimitiveCollectorBasic::m_GlobalCollectors)
        eastl::fixed_map<eastl::fixed_string<char, 64>, jag::DebugPrimitiveCollectorBasic*, 16ul>();
    ___cxa_atexit(PTR__fixed_map_100ee6e20, &jag::DebugPrimitiveCollectorBasic::m_GlobalCollectors, 4294967296);
}

// 0x1009db170
void ___cxx_global_var_init_30(function<void(jag::render::DrawCallState const&, jag::math::Vector4T<float> const&,
                                             char const*, unsigned int)>* param_1) {
    new (param_1) std::function<void(jag::render::DrawCallState const&, jag::math::Vector4T<float> const&, char const*,
                                     unsigned int)>();
    ___cxa_atexit(PTR__function_100ee6f30, &jag::DebugText2DRender::m_debugText2DRenderCallback, 4294967296);
}

// 0x1009db1a0
void ___cxx_global_var_init_31(void) {
    new ((function<void()>*)&jag::DebugText2DRender::m_debugText2DRenderGuiRenderCallback) std::function<void()>();
    ___cxa_atexit(PTR__function_100ee6f38, &jag::DebugText2DRender::m_debugText2DRenderGuiRenderCallback, 4294967296);
}

// 0x1009db1e0
void ___cxx_global_var_init_32(
    function<void(jag::render::DrawCallState, jag::math::Vector4T<float> const&, char const*, unsigned int)>* param_1) {
    new (param_1)
        std::function<void(jag::render::DrawCallState, jag::math::Vector4T<float> const&, char const*, unsigned int)>();
    ___cxa_atexit(PTR__function_100ee6f20, &jag::DebugTextRender::m_debugTextRenderCallback, 4294967296);
}

// 0x1009db210
void ___cxx_global_var_init_33(void) {
    new ((function<void()>*)&jag::DebugTextRender::m_debugTextRenderGuiRenderCallback) std::function<void()>();
    ___cxa_atexit(PTR__function_100ee6f38, &jag::DebugTextRender::m_debugTextRenderGuiRenderCallback, 4294967296);
}

// 0x1009db250
void ___cxx_global_var_init_34(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1009db290
void ___cxx_global_var_init_35(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db2d0
void ___cxx_global_var_init_36(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db310
void ___cxx_global_var_init_37(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db350
void ___cxx_global_var_init_38(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db380
void ___cxx_global_var_init_39(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db3c0
void ___cxx_global_var_init_40(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db400
void ___cxx_global_var_init_41(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db440
void ___cxx_global_var_init_42(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db480
void ___cxx_global_var_init_43(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4978;
    if (*PTR_m_pSingleton_100ee4978 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::PrimitiveShaderFamily>::~unique_ptr, PTR_m_pSingleton_100ee6be8, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db4c0
void ___cxx_global_var_init_44(void) {
    uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
    if (*PTR_IDENTITY_100ee4828 == '\0') {
        new (PTR_IDENTITY_100ee6730)
            jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1009db520
void ___cxx_global_var_init_45(void) {
    uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
    if (*PTR_RIGHT_100ee47e8 == '\0') {
        new (PTR_RIGHT_100ee66f0) jag::math::ColourHSL(1.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db560
void ___cxx_global_var_init_46(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4980;
    if (*PTR_m_pSingleton_100ee4980 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::DebugPrimitiveRendererBasic>::~unique_ptr, PTR_m_pSingleton_100ee6bf0,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db5a0
void ___cxx_global_var_init_47(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
    if (*PTR_m_pSingleton_100ee49a8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db5e0
void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_30();
    ___cxx_global_var_init_31();
    ___cxx_global_var_init_32();
    ___cxx_global_var_init_33();
    _objc_autoreleasePoolPop(uVar1);
}
