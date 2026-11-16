// _unplaced/libs/graphics/unity_4.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag {
    // 0x100911640
    DebugOverlayMainFPS* placement_new<DebugOverlayMainFPS, DebugOverlay&>(void* arg1, DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayMainFPS(debugOverlay, true);
        return arg1;
    }

    // 0x100911660
    ref_counter_shared<DebugOverlayMainFPS>*
    placement_new<ref_counter_shared<DebugOverlayMainFPS>, int, DebugOverlayMainFPS*&>(void* arg1, int&& arg2,
                                                                                       DebugOverlayMainFPS*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayMainFPS>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911770
    DebugOverlayRenderFPS* placement_new<DebugOverlayRenderFPS, DebugOverlay&>(void* arg1, DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayRenderFPS(debugOverlay, true);
        return arg1;
    }

    // 0x100911790
    ref_counter_shared<DebugOverlayRenderFPS>*
    placement_new<ref_counter_shared<DebugOverlayRenderFPS>, int, DebugOverlayRenderFPS*&>(
        void* arg1, int&& arg2, DebugOverlayRenderFPS*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayRenderFPS>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911840
    DebugOverlayLPS* placement_new<DebugOverlayLPS, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay,
                                                                         bool&& arg3) {
        new (arg1) DebugOverlayLPS(debugOverlay, arg3);
        return arg1;
    }

    // 0x100911860
    ref_counter_shared<DebugOverlayLPS>*
    placement_new<ref_counter_shared<DebugOverlayLPS>, int, DebugOverlayLPS*&>(void* arg1, int&& arg2,
                                                                               DebugOverlayLPS*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayLPS>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911930
    DebugOverlayParticlesSimulation*
    placement_new<DebugOverlayParticlesSimulation, DebugOverlay&>(void* arg1, DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayParticlesSimulation(debugOverlay, true);
        return arg1;
    }

    // 0x100911950
    ref_counter_shared<DebugOverlayParticlesSimulation>*
    placement_new<ref_counter_shared<DebugOverlayParticlesSimulation>, int, DebugOverlayParticlesSimulation*&>(
        void* arg1, int&& arg2, DebugOverlayParticlesSimulation*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayParticlesSimulation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911a20
    DebugOverlayParticlesRender* placement_new<DebugOverlayParticlesRender, DebugOverlay&>(void* arg1,
                                                                                           DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayParticlesRender(debugOverlay, true);
        return arg1;
    }

    // 0x100911a40
    ref_counter_shared<DebugOverlayParticlesRender>*
    placement_new<ref_counter_shared<DebugOverlayParticlesRender>, int, DebugOverlayParticlesRender*&>(
        void* arg1, int&& arg2, DebugOverlayParticlesRender*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayParticlesRender>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911b10
    DebugOverlayGPU* placement_new<DebugOverlayGPU, DebugOverlay&>(void* arg1, DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayGPU(debugOverlay, true);
        return arg1;
    }

    // 0x100911b30
    ref_counter_shared<DebugOverlayGPU>*
    placement_new<ref_counter_shared<DebugOverlayGPU>, int, DebugOverlayGPU*&>(void* arg1, int&& arg2,
                                                                               DebugOverlayGPU*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayGPU>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911c00
    DebugOverlayRender* placement_new<DebugOverlayRender, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay,
                                                                               bool&& arg3) {
        new (arg1) DebugOverlayRender(debugOverlay, arg3);
        return arg1;
    }

    // 0x100911c20
    ref_counter_shared<DebugOverlayRender>*
    placement_new<ref_counter_shared<DebugOverlayRender>, int, DebugOverlayRender*&>(void* arg1, int&& arg2,
                                                                                     DebugOverlayRender*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayRender>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911c90
    DebugOverlayShaderProfiler*
    placement_new<DebugOverlayShaderProfiler, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay,
                                                                   bool&& arg3) {
        new (arg1) DebugOverlayShaderProfiler(debugOverlay, arg3);
        return arg1;
    }

    // 0x100911cb0
    ref_counter_shared<DebugOverlayShaderProfiler>*
    placement_new<ref_counter_shared<DebugOverlayShaderProfiler>, int, DebugOverlayShaderProfiler*&>(
        void* arg1, int&& arg2, DebugOverlayShaderProfiler*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayShaderProfiler>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911d20
    DebugOverlayTextureAtlas*
    placement_new<DebugOverlayTextureAtlas, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay, bool&& arg3) {
        new (arg1) DebugOverlayTextureAtlas(debugOverlay, arg3);
        return arg1;
    }

    // 0x100911d40
    ref_counter_shared<DebugOverlayTextureAtlas>*
    placement_new<ref_counter_shared<DebugOverlayTextureAtlas>, int, DebugOverlayTextureAtlas*&>(
        void* arg1, int&& arg2, DebugOverlayTextureAtlas*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayTextureAtlas>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911db0
    DebugOverlayGPUStats*
    placement_new<DebugOverlayGPUStats, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay, bool&& arg3) {
        new (arg1) DebugOverlayGPUStats(debugOverlay, arg3);
        return arg1;
    }

    // 0x100911dd0
    ref_counter_shared<DebugOverlayGPUStats>*
    placement_new<ref_counter_shared<DebugOverlayGPUStats>, int, DebugOverlayGPUStats*&>(void* arg1, int&& arg2,
                                                                                         DebugOverlayGPUStats*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayGPUStats>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911e40
    DebugOverlayMemory* placement_new<DebugOverlayMemory, DebugOverlay&>(void* arg1, DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayMemory(debugOverlay, true);
        return arg1;
    }

    // 0x100911e60
    ref_counter_shared<DebugOverlayMemory>*
    placement_new<ref_counter_shared<DebugOverlayMemory>, int, DebugOverlayMemory*&>(void* arg1, int&& arg2,
                                                                                     DebugOverlayMemory*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayMemory>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911f30
    DebugOverlayMemoryCache*
    placement_new<DebugOverlayMemoryCache, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay, bool&& arg3) {
        new (arg1) DebugOverlayMemoryCache(debugOverlay, arg3);
        return arg1;
    }

    // 0x100911f50
    ref_counter_shared<DebugOverlayMemoryCache>*
    placement_new<ref_counter_shared<DebugOverlayMemoryCache>, int, DebugOverlayMemoryCache*&>(
        void* arg1, int&& arg2, DebugOverlayMemoryCache*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayMemoryCache>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100911fc0
    DebugOverlayDiskCache* placement_new<DebugOverlayDiskCache, DebugOverlay&>(void* arg1, DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayDiskCache(debugOverlay, true);
        return arg1;
    }

    // 0x100911fe0
    ref_counter_shared<DebugOverlayDiskCache>*
    placement_new<ref_counter_shared<DebugOverlayDiskCache>, int, DebugOverlayDiskCache*&>(
        void* arg1, int&& arg2, DebugOverlayDiskCache*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayDiskCache>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100912050
    DebugOverlayAllocations* placement_new<DebugOverlayAllocations, DebugOverlay&>(void* arg1,
                                                                                   DebugOverlay& debugOverlay) {
        new (arg1) DebugOverlayAllocations(debugOverlay, true);
        return arg1;
    }

    // 0x100912070
    ref_counter_shared<DebugOverlayAllocations>*
    placement_new<ref_counter_shared<DebugOverlayAllocations>, int, DebugOverlayAllocations*&>(
        void* arg1, int&& arg2, DebugOverlayAllocations*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayAllocations>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100912140
    DebugOverlayPools* placement_new<DebugOverlayPools, DebugOverlay&, bool>(void* arg1, DebugOverlay& debugOverlay,
                                                                             bool&& arg3) {
        new (arg1) DebugOverlayPools(debugOverlay, arg3);
        return arg1;
    }

    // 0x100912160
    ref_counter_shared<DebugOverlayPools>*
    placement_new<ref_counter_shared<DebugOverlayPools>, int, DebugOverlayPools*&>(void* arg1, int&& arg2,
                                                                                   DebugOverlayPools*& arg3) {
        new (arg1) ref_counter_shared<DebugOverlayPools>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100916ba0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100916c00
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100916c20
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100916c80
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100916ce0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100916dc0
    void ___cxx_global_var_init_15(function<bool(graphics::FontHelpers::ModIconReference&, int, int)>* param_1) {
        new (param_1) std::function<bool(graphics::FontHelpers::ModIconReference&, int, int)>();
        ___cxa_atexit(PTR__function_100ee6f18, &graphics::FontHelpers::m_callbackGetSpriteReference, 4294967296);
    }

    // 0x100916eb0
    void ___cxx_global_var_init_151(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x100916f10
    void ___cxx_global_var_init_152(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x100916f90
    void ___cxx_global_var_init_208(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100916fd0
    void ___cxx_global_var_init_209(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100917010
    void ___cxx_global_var_init_210(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917050
    void ___cxx_global_var_init_211(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917090
    void ___cxx_global_var_init_212(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009170c0
    void ___cxx_global_var_init_213(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917100
    void ___cxx_global_var_init_214(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100917140
    void ___cxx_global_var_init_215(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917180
    void ___cxx_global_var_init_216(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009171c0
    void ___cxx_global_var_init_217(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917200
    void ___cxx_global_var_init_218(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917240
    void ___cxx_global_var_init_219(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917280
    void ___cxx_global_var_init_220(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009172c0
    void ___cxx_global_var_init_221(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100917320
    void ___cxx_global_var_init_222(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917360
    void ___cxx_global_var_init_223(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009173c0
    void ___cxx_global_var_init_224(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917400
    void ___cxx_global_var_init_225(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917440
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009174c0
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917500
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917540
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49e0;
        if (*PTR_m_pSingleton_100ee49e0 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::VectorFontLoader>::~unique_ptr, PTR_m_pSingleton_100ee6c50,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917580
    void ___cxx_global_var_init_231(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4540;
        if (*PTR_m_mutex_100ee4540 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917600
    void ___cxx_global_var_init_233(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917640
    void ___cxx_global_var_init_234(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917680
    void ___cxx_global_var_init_235(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009176c0
    void __GLOBAL__sub_I_unity_4_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_14();
        ___cxx_global_var_init_15();
        ___cxx_global_var_init_63();
        ___cxx_global_var_init_91();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x104232bb0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232bf0
    uint8_t WORLD_ORTHOGONAL[16];

} // namespace jag::graphics
