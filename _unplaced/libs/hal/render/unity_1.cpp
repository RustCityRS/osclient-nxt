// _unplaced/libs/hal/render/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::threading {
    // 0x100d99728
    int32_t MAX_HARDWARE_THREAD_LIMIT[30] = {
        16,   1069966950, 897581056, 1051260355, 0,    0,    73,  72, 5, 8,     65793, 0, 1065353216, 513, 6914,
        1028, 0,          0,         7680,       7680, 7680, 519, 1,  0, 32774, 1,     0, 0,          1,   0,
    };

    // 0x100c0c350
    void ___cxx_global_var_init_52(void) {
        new ((fixed_set<render::RenderTargets const*, 64ul>*)&render::RenderTargets::m_renderTargetsToInvalidate)
            eastl::fixed_set<render::RenderTargets const*, 64ul>();
        ___cxa_atexit(PTR__fixed_map_100ee6e40, &render::RenderTargets::m_renderTargetsToInvalidate, 4294967296);
    }

    // 0x100c0c390
    void ___cxx_global_var_init_53(void) {
        ___cxa_atexit(PTR__mutex_100ee6ef8, &render::RenderTargets::m_renderTargetsToInvalidateMutex, 4294967296);
    }

    // 0x100c0c570
    void ___cxx_global_var_init_435(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c0c5b0
    void ___cxx_global_var_init_436(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c0c5f0
    void ___cxx_global_var_init_437(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c630
    void ___cxx_global_var_init_438(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c670
    void ___cxx_global_var_init_439(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c0c6a0
    void ___cxx_global_var_init_440(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c6e0
    void ___cxx_global_var_init_441(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c0c720
    void ___cxx_global_var_init_442(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c760
    void ___cxx_global_var_init_443(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c7a0
    void ___cxx_global_var_init_444(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c7e0
    void ___cxx_global_var_init_445(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c820
    void ___cxx_global_var_init_446(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49b8;
        if (*PTR_m_pSingleton_100ee49b8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderManager<render::VertexShader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c860
    void ___cxx_global_var_init_447(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49b0;
        if (*PTR_m_pSingleton_100ee49b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderManager<render::PixelShader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c8a0
    void ___cxx_global_var_init_448(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c0;
        if (*PTR_m_pSingleton_100ee49c0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderManager<render::ComputeShader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c8e0
    void ___cxx_global_var_init_449(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4998;
        if (*PTR_m_pSingleton_100ee4998 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VAOManager>::~unique_ptr, PTR_m_pSingleton_100ee6c08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c0c920
    void __GLOBAL__sub_I_unity_1_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_52();
        ___cxx_global_var_init_53();
        ___cxx_global_var_init_101();
        ___cxx_global_var_init_102();
        ___cxx_global_var_init_103();
        ___cxx_global_var_init_104();
        ___cxx_global_var_init_105();
        ___cxx_global_var_init_106();
        ___cxx_global_var_init_107();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::threading
