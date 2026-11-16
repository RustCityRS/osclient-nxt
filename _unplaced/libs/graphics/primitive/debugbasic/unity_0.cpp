// _unplaced/libs/graphics/primitive/debugbasic/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

// 0x1009db130, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    new (&jag::DebugPrimitiveCollectorBasic::m_GlobalCollectors)
        eastl::fixed_map<eastl::fixed_string<char, 64, true, eastl::allocator>, jag::DebugPrimitiveCollectorBasic*,
                         16ul, true, eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>,
                         eastl::allocator>();
    ___cxa_atexit(PTR__fixed_map_100ee6e20, &jag::DebugPrimitiveCollectorBasic::m_GlobalCollectors, 4294967296);
}

// 0x1009db170, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.30
void ___cxx_global_var_init_30() {
    std::function<void(jag::render::DrawCallState_const&, jag::math::Vector4T<float> const&, char const*,
                       unsigned int)>::function();
    ___cxa_atexit(PTR__function_100ee6f30, &jag::DebugText2DRender::m_debugText2DRenderCallback, 4294967296);
}

// 0x1009db1a0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.31
void ___cxx_global_var_init_31() {
    std::function<void()>::function((function<void()>*)&jag::DebugText2DRender::m_debugText2DRenderGuiRenderCallback);
    ___cxa_atexit(PTR__function_100ee6f38, &jag::DebugText2DRender::m_debugText2DRenderGuiRenderCallback, 4294967296);
}

// 0x1009db1e0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.32
void ___cxx_global_var_init_32() {
    std::function<void(jag::render::DrawCallState, jag::math::Vector4T<float> const&, char const*,
                       unsigned int)>::function();
    ___cxa_atexit(PTR__function_100ee6f20, &jag::DebugTextRender::m_debugTextRenderCallback, 4294967296);
}

// 0x1009db210, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.33
void ___cxx_global_var_init_33() {
    std::function<void()>::function((function<void()>*)&jag::DebugTextRender::m_debugTextRenderGuiRenderCallback);
    ___cxa_atexit(PTR__function_100ee6f38, &jag::DebugTextRender::m_debugTextRenderGuiRenderCallback, 4294967296);
}

// 0x1009db250, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.34
void ___cxx_global_var_init_34() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1009db290, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.35
void ___cxx_global_var_init_35() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db2d0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.36
void ___cxx_global_var_init_36() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db310, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.37
void ___cxx_global_var_init_37() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db350, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.38
void ___cxx_global_var_init_38() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db380, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.39
void ___cxx_global_var_init_39() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db3c0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.40
void ___cxx_global_var_init_40() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db400, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.41
void ___cxx_global_var_init_41() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db440, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.42
void ___cxx_global_var_init_42() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db480, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.43
void ___cxx_global_var_init_43() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4978;
    if (*PTR_m_pSingleton_100ee4978 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::PrimitiveShaderFamily, std::default_delete<jag::PrimitiveShaderFamily>>::~unique_ptr,
            PTR_m_pSingleton_100ee6be8, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db4c0, 96 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.44
void ___cxx_global_var_init_44() {
    undefined* puVar1;

    puVar1 = PTR_IDENTITY_100ee4828;
    if (*PTR_IDENTITY_100ee4828 == '\0') {
        new (PTR_IDENTITY_100ee6730)
            jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1009db520, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.45
void ___cxx_global_var_init_45() {
    undefined* puVar1;

    puVar1 = PTR_RIGHT_100ee47e8;
    if (*PTR_RIGHT_100ee47e8 == '\0') {
        new (PTR_RIGHT_100ee66f0) jag::math::ColourHSL(1.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1009db560, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.46
void ___cxx_global_var_init_46() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4980;
    if (*PTR_m_pSingleton_100ee4980 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::DebugPrimitiveRendererBasic,
                                      std::default_delete<jag::DebugPrimitiveRendererBasic>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6bf0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db5a0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.47
void ___cxx_global_var_init_47() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a8;
    if (*PTR_m_pSingleton_100ee49a8 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::BuiltinStates, std::default_delete<jag::render::BuiltinStates>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c18, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1009db5e0, 54 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_30();
    ___cxx_global_var_init_31();
    ___cxx_global_var_init_32();
    ___cxx_global_var_init_33();
    _objc_autoreleasePoolPop(uVar1);
}
