// _unplaced/libs/graphics/unity_3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x104232c20
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232c60
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x100929cb0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100929d10
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100929d30
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100929d90
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100929df0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100929e90
    void ___cxx_global_var_init_70(void) {
        _DAT_103bc0504 = *(uint32_t*)(PTR_ONE_100ee66d8 + 8);
        m_emissiveColourOverride = *(uint64_t*)PTR_ONE_100ee66d8;
    }

    // 0x100929f20
    void ___cxx_global_var_init_74(__12* param_1) {
        WaterParameters::$_12::operator()(param_1);
    }

    // 0x100929f30
    void ___cxx_global_var_init_75(__13* param_1) {
        WaterParameters::$_13::operator()(param_1);
    }

    // 0x100929f70
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100929fb0
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100929ff0
    void ___cxx_global_var_init_79(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a030
    void ___cxx_global_var_init_80(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a070
    void ___cxx_global_var_init_81(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a0a0
    void ___cxx_global_var_init_82(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a0e0
    void ___cxx_global_var_init_83(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a120
    void ___cxx_global_var_init_84(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a160
    void ___cxx_global_var_init_85(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a1a0
    void ___cxx_global_var_init_86(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a1e0
    void ___cxx_global_var_init_87(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a220
    void ___cxx_global_var_init_88(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a260
    void ___cxx_global_var_init_89(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a2a0
    void ___cxx_global_var_init_90(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a300
    void ___cxx_global_var_init_91(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a340
    void ___cxx_global_var_init_92(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a3a0
    void ___cxx_global_var_init_93(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a3e0
    void ___cxx_global_var_init_94(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a420
    void ___cxx_global_var_init_95(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a460
    void ___cxx_global_var_init_96(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a4a0
    void ___cxx_global_var_init_97(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45c8;
        if (*PTR_m_mutex_100ee45c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10092a4e0
    void ___cxx_global_var_init_98(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a520
    void ___cxx_global_var_init_99(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a550
    void ___cxx_global_var_init_100(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a590
    void ___cxx_global_var_init_101(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10092a5d0
    void __GLOBAL__sub_I_unity_3_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_48();
        ___cxx_global_var_init_70();
        ___cxx_global_var_init_71();
        ___cxx_global_var_init_72();
        ___cxx_global_var_init_73();
        ___cxx_global_var_init_74();
        ___cxx_global_var_init_75();
        ___cxx_global_var_init_76();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
