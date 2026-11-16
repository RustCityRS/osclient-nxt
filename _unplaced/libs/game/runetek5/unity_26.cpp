// _unplaced/libs/game/runetek5/unity_26.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    // 0x1039bbbc8, 16 bytes, __common; set at startup by ___cxx_global_var_init.4
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NullVarType;

    // 0x1004dca30, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&ScriptVarType::LOOKUP_MAP)
            eastl::hash_map<unsigned int, ScriptVarType*, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                            eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6db8, &ScriptVarType::LOOKUP_MAP, 4294967296);
    }

    // 0x1004dca80, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&ScriptVarType::CHAR_LOOKUP_MAP)
            eastl::hash_map<unsigned char, ScriptVarType*, eastl::hash<unsigned char>, eastl::equal_to<unsigned char>,
                            eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6d88, &ScriptVarType::CHAR_LOOKUP_MAP, 4294967296);
    }

    // 0x1004dcad0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&NullVarType) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee52a8, &NullVarType, 4294967296);
    }

    // 0x1004dcb10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dcb50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dcb90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.11
    void ___cxx_global_var_init_11() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcbd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcc10, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dcc40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcc80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.15
    void ___cxx_global_var_init_15() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004dccc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcd00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.17
    void ___cxx_global_var_init_17() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcd40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcd80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcdc0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.20
    void ___cxx_global_var_init_20() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4508;
        if (*PTR_m_mutex_100ee4508 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dce80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44d0;
        if (*PTR_m_mutex_100ee44d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcf40, 44 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_26_cxx.cxx
    void __GLOBAL__sub_I_unity_26_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_4();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::game
