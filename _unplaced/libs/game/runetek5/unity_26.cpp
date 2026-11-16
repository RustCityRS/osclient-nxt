// _unplaced/libs/game/runetek5/unity_26.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    // 0x1039bbbc8, set at startup by ___cxx_global_var_init.4
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NullVarType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1004dca30
    void ___cxx_global_var_init(void) {

        new ((hash_map<unsigned int, ScriptVarType*>*)&ScriptVarType::LOOKUP_MAP)
            eastl::hash_map<unsigned int, ScriptVarType*>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6db8, &ScriptVarType::LOOKUP_MAP, 4294967296);
    }

    // 0x1004dca80
    void ___cxx_global_var_init_1(void) {

        new ((hash_map<unsigned char, ScriptVarType*>*)&ScriptVarType::CHAR_LOOKUP_MAP)
            eastl::hash_map<unsigned char, ScriptVarType*>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6d88, &ScriptVarType::CHAR_LOOKUP_MAP, 4294967296);
    }

    // 0x1004dcb10
    void ___cxx_global_var_init_9(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dcb50
    void ___cxx_global_var_init_10(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dcb90
    void ___cxx_global_var_init_11(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcbd0
    void ___cxx_global_var_init_12(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcc10
    void ___cxx_global_var_init_13(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dcc40
    void ___cxx_global_var_init_14(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcc80
    void ___cxx_global_var_init_15(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dccc0
    void ___cxx_global_var_init_16(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcd00
    void ___cxx_global_var_init_17(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcd40
    void ___cxx_global_var_init_18(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcd80
    void ___cxx_global_var_init_19(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcdc0
    void ___cxx_global_var_init_20(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4508;
        if (*PTR_m_mutex_100ee4508 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dce80
    void ___cxx_global_var_init_23(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d0;
        if (*PTR_m_mutex_100ee44d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcf40
    void __GLOBAL__sub_I_unity_26_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_4();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::game
