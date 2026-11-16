// _unplaced/libs/graphics/unity_9.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x100d4ad20, 32 bytes, __const
    sBBxInd = {1, 0, 0, 1, 1, 1, 0, 0};

    // 0x100d4ad40, 32 bytes, __const
    sBByInd = {1, 1, 1, 1, 0, 0, 0, 0};

    // 0x100d4ad60, 32 bytes, __const
    sBBzInd = {1, 1, 0, 0, 0, 1, 1, 0};

    // 0x100d4ad80, 156 bytes, __const
    sBBIndexList = {
        1, 3, 2, 0, 3, 1, 5, 7, 4, 6, 7, 5, 1, 7, 6, 2, 7, 1, 3, 5,
        4, 0, 5, 3, 2, 4, 7, 3, 4, 2, 0, 6, 5, 1, 6, 0, 1, 2, 0,
    };

    // 0x103bbd520, 4 bytes, __common; zero-initialised
    g_numSetToAllZeroes;

    // 0x103bbd524, 4 bytes, __common; zero-initialised
    g_numAreaRejected;

    // 0x103bbd528, 4 bytes, __common; zero-initialised
    g_numScreenClippedRejected;

    // 0x103bbd52c, 4 bytes, __common; zero-initialised
    g_behindNearClipRejected;

    // 0x103bbd530, 4 bytes, __common; zero-initialised
    g_numTrisPreBinning;

    // 0x103bbd534, 4 bytes, __common; zero-initialised
    g_test;

    // 0x103bbd538, 4 bytes, __common; zero-initialised
    g_numTimesBinCalled;

    // 0x1042325b0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x1042325f0, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100852300, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100852360, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100852380, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008523e0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100852440, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008525e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.203
    void ___cxx_global_var_init_203() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100852620, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.204
    void ___cxx_global_var_init_204() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852660, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.205
    void ___cxx_global_var_init_205() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008526a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.206
    void ___cxx_global_var_init_206() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008526e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.207
    void ___cxx_global_var_init_207() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852710, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.208
    void ___cxx_global_var_init_208() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852750, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.209
    void ___cxx_global_var_init_209() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852790, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.210
    void ___cxx_global_var_init_210() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008527d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.211
    void ___cxx_global_var_init_211() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852810, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.212
    void ___cxx_global_var_init_212() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852850, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.213
    void ___cxx_global_var_init_213() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852890, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.214
    void ___cxx_global_var_init_214() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008528d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.215
    void ___cxx_global_var_init_215() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852910, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.216
    void ___cxx_global_var_init_216() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852970, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.217
    void ___cxx_global_var_init_217() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008529b0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.218
    void ___cxx_global_var_init_218() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100852a10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.219
    void ___cxx_global_var_init_219() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852a50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.220
    void ___cxx_global_var_init_220() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852a90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.221
    void ___cxx_global_var_init_221() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4558;
        if (*PTR_m_mutex_100ee4558 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852ad0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.222
    void ___cxx_global_var_init_222() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852b10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.223
    void ___cxx_global_var_init_223() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4630;
        if (*PTR_m_mutex_100ee4630 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6020, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852b50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.224
    void ___cxx_global_var_init_224() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852b90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.225
    void ___cxx_global_var_init_225() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45c0;
        if (*PTR_m_mutex_100ee45c0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852bd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4278;
        if (*PTR_m_pSingleton_100ee4278 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<graphicutils::BatchDestroyHelper<shared_ptr<TextureAtlasReference>>,
                                std::default_delete<
                                    graphicutils::BatchDestroyHelper<shared_ptr<TextureAtlasReference>>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5928, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852c10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.227
    void ___cxx_global_var_init_227() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4280;
        if (*PTR_m_pSingleton_100ee4280 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<
                    graphicutils::BatchDestroyHelper<std::unique_ptr<
                        GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>,
                    std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                        GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>::
                    ~unique_ptr,
                PTR_m_pSingleton_100ee5930, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852c50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4638;
        if (*PTR_m_mutex_100ee4638 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6030, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852c90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4288;
        if (*PTR_m_pSingleton_100ee4288 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<
                    graphicutils::BatchDestroyHelper<std::unique_ptr<
                        BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>,
                    std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                        BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>>>::
                    ~unique_ptr,
                PTR_m_pSingleton_100ee5938, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852cd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45a0;
        if (*PTR_m_mutex_100ee45a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852d10, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.231
    void ___cxx_global_var_init_231() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100852d70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.232
    void ___cxx_global_var_init_232() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4648;
        if (*PTR_m_mutex_100ee4648 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6050, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100852db0, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.233
    void ___cxx_global_var_init_233() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100852e00, 64 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_9_cxx.cxx
    void __GLOBAL__sub_I_unity_9_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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
    // 0x100d4ae20, 4 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = 16;

} // namespace jag::threading
