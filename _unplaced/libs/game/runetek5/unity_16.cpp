// _unplaced/libs/game/runetek5/unity_16.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    // 0x1039bbc78, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NullDBTableIndex =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100560bf0
    void ___cxx_global_var_init_47(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100560c30
    void ___cxx_global_var_init_48(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100560c70
    void ___cxx_global_var_init_49(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560cb0
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560cf0
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100560d20
    void ___cxx_global_var_init_52(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560d60
    void ___cxx_global_var_init_53(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100560da0
    void ___cxx_global_var_init_54(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560de0
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560e20
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560e60
    void ___cxx_global_var_init_57(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560ea0
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4508;
        if (*PTR_m_mutex_100ee4508 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560ee0
    void ___cxx_global_var_init_59(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6968;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4918;
        if (*PTR_NullCacheObj_100ee4918 == '\0') {
            new (PTR_NullCacheObj_100ee6968) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560f20
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee65a0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4748;
        if (*PTR_NullConfigType_100ee4748 == '\0') {
            new (PTR_NullConfigType_100ee65a0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560f60
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43c8;
        if (*PTR_m_mutex_100ee43c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b58, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100561020
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4488;
        if (*PTR_m_mutex_100ee4488 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5cd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100561060
    void ___cxx_global_var_init_65(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4358;
        if (*PTR_m_mutex_100ee4358 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a78, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005610a0
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43a0;
        if (*PTR_m_mutex_100ee43a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005610e0
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100561120
    void ___cxx_global_var_init_68(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100561160
    void __GLOBAL__sub_I_unity_16_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::game
