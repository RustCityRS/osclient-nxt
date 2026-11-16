// _unplaced/libs/game/runetek5/unity_27.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    // 0x1039bb6f0, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NullVarBitType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1004cd100
    void ___cxx_global_var_init_5(void) {

        new ((hash_map<unsigned int, VarDomainType*>*)&VarDomainType::LOOKUP_MAP)
            eastl::hash_map<unsigned int, VarDomainType*>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6dc0, &VarDomainType::LOOKUP_MAP, 4294967296);
    }

    // 0x1004cd1f0
    void ___cxx_global_var_init_25(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd230
    void ___cxx_global_var_init_26(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd270
    void ___cxx_global_var_init_27(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd2b0
    void ___cxx_global_var_init_28(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd2f0
    void ___cxx_global_var_init_29(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd320
    void ___cxx_global_var_init_30(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd360
    void ___cxx_global_var_init_31(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd3a0
    void ___cxx_global_var_init_32(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd3e0
    void ___cxx_global_var_init_33(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd420
    void ___cxx_global_var_init_34(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd460
    void ___cxx_global_var_init_35(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd4a0
    void ___cxx_global_var_init_36(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee6898;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4848;
        if (*PTR_NullCacheObj_100ee4848 == '\0') {
            new (PTR_NullCacheObj_100ee6898) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd4e0
    void ___cxx_global_var_init_37(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee64e0;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4688;
        if (*PTR_NullConfigType_100ee4688 == '\0') {
            new (PTR_NullConfigType_100ee64e0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd520
    void ___cxx_global_var_init_38(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4370;
        if (*PTR_m_mutex_100ee4370 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5aa8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd560
    void ___cxx_global_var_init_39(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd5a0
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd5d0
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd610
    void ___cxx_global_var_init_42(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004cd650
    void ___cxx_global_var_init_43(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4510;
        if (*PTR_m_mutex_100ee4510 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5de0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd690
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004cd6d0
    void __GLOBAL__sub_I_unity_27_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_5();
        ___cxx_global_var_init_7();
        ___cxx_global_var_init_14();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::game
