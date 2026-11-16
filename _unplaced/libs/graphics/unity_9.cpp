// _unplaced/libs/graphics/unity_9.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x100d4ad20
    int32_t sBBxInd[8] = {1, 0, 0, 1, 1, 1, 0, 0};

    // 0x100d4ad40
    int32_t sBByInd[8] = {1, 1, 1, 1, 0, 0, 0, 0};

    // 0x100d4ad60
    int32_t sBBzInd[8] = {1, 1, 0, 0, 0, 1, 1, 0};

    // 0x100d4ad80
    int32_t sBBIndexList[39] = {
        1, 3, 2, 0, 3, 1, 5, 7, 4, 6, 7, 5, 1, 7, 6, 2, 7, 1, 3, 5,
        4, 0, 5, 3, 2, 4, 7, 3, 4, 2, 0, 6, 5, 1, 6, 0, 1, 2, 0,
    };

    // 0x103bbd520
    int32_t g_numSetToAllZeroes;

    // 0x103bbd524
    int32_t g_numAreaRejected;

    // 0x103bbd528
    int32_t g_numScreenClippedRejected;

    // 0x103bbd52c
    int32_t g_behindNearClipRejected;

    // 0x103bbd530
    int32_t g_numTrisPreBinning;

    // 0x103bbd534
    int32_t g_test;

    // 0x103bbd538
    int32_t g_numTimesBinCalled;

    // 0x1042325b0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x1042325f0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x100852300
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100852360
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100852380
    void ___cxx_global_var_init_51(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008523e0
    void ___cxx_global_var_init_53(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100852440
    void ___cxx_global_var_init_55(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008525e0
    void ___cxx_global_var_init_203(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100852620
    void ___cxx_global_var_init_204(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852660
    void ___cxx_global_var_init_205(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008526a0
    void ___cxx_global_var_init_206(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008526e0
    void ___cxx_global_var_init_207(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852710
    void ___cxx_global_var_init_208(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852750
    void ___cxx_global_var_init_209(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852790
    void ___cxx_global_var_init_210(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008527d0
    void ___cxx_global_var_init_211(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852810
    void ___cxx_global_var_init_212(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852850
    void ___cxx_global_var_init_213(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852890
    void ___cxx_global_var_init_214(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008528d0
    void ___cxx_global_var_init_215(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852910
    void ___cxx_global_var_init_216(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852970
    void ___cxx_global_var_init_217(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008529b0
    void ___cxx_global_var_init_218(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100852a10
    void ___cxx_global_var_init_219(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852a50
    void ___cxx_global_var_init_220(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852a90
    void ___cxx_global_var_init_221(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4558;
        if (*PTR_m_mutex_100ee4558 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852ad0
    void ___cxx_global_var_init_222(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852b10
    void ___cxx_global_var_init_223(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4630;
        if (*PTR_m_mutex_100ee4630 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6020, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852b50
    void ___cxx_global_var_init_224(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852b90
    void ___cxx_global_var_init_225(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852bd0
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4278;
        if (*PTR_m_pSingleton_100ee4278 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<graphicutils::BatchDestroyHelper<shared_ptr<TextureAtlasReference>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5928, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852c10
    void ___cxx_global_var_init_227(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4280;
        if (*PTR_m_pSingleton_100ee4280 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyHelper<std::unique_ptr<
                              GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::
                              ~unique_ptr,
                          PTR_m_pSingleton_100ee5930, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852c50
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4638;
        if (*PTR_m_mutex_100ee4638 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6030, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852c90
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4288;
        if (*PTR_m_pSingleton_100ee4288 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyHelper<std::unique_ptr<
                              BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>>::
                              ~unique_ptr,
                          PTR_m_pSingleton_100ee5938, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852cd0
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45a0;
        if (*PTR_m_mutex_100ee45a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852d10
    void ___cxx_global_var_init_231(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852d70
    void ___cxx_global_var_init_232(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4648;
        if (*PTR_m_mutex_100ee4648 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6050, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852db0
    void ___cxx_global_var_init_233(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100852e00
    void __GLOBAL__sub_I_unity_9_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_69();
        ___cxx_global_var_init_70();
        ___cxx_global_var_init_92();
        ___cxx_global_var_init_96();
        ___cxx_global_var_init_135();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d4ae20
    int32_t MAX_HARDWARE_THREAD_LIMIT = 16;

} // namespace jag::threading
