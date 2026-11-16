// _unplaced/libs/graphics/unity_4.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag {
    // 0x100911640, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayMainFPS* placement_new<DebugOverlayMainFPS, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayMainFPS* placement_new<DebugOverlayMainFPS, DebugOverlay&>(void* param_1, DebugOverlay* param_2) {
        DebugOverlayMainFPS::DebugOverlayMainFPS(param_1, param_2, true);
        return param_1;
    }

    // 0x100911660, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayMainFPS>* placement_new<ref_counter_shared<DebugOverlayMainFPS>, int, DebugOverlayMainFPS*&>(void*, int&&, DebugOverlayMainFPS*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<DebugOverlayMainFPS>, int, DebugOverlayMainFPS*&>(void* param_1, int* param_2,
                                                                                       DebugOverlayMainFPS** param_3) {
        ref_counter_shared<DebugOverlayMainFPS>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911770, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayRenderFPS* placement_new<DebugOverlayRenderFPS, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayRenderFPS* placement_new<DebugOverlayRenderFPS, DebugOverlay&>(void* param_1, DebugOverlay* param_2) {
        DebugOverlayRenderFPS::DebugOverlayRenderFPS(param_1, param_2, true);
        return param_1;
    }

    // 0x100911790, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayRenderFPS>* placement_new<ref_counter_shared<DebugOverlayRenderFPS>, int, DebugOverlayRenderFPS*&>(void*, int&&, DebugOverlayRenderFPS*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<DebugOverlayRenderFPS>, int, DebugOverlayRenderFPS*&>(
        void* param_1, int* param_2, DebugOverlayRenderFPS** param_3) {
        ref_counter_shared<DebugOverlayRenderFPS>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911840, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayLPS* placement_new<DebugOverlayLPS, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayLPS* placement_new<DebugOverlayLPS, DebugOverlay&, bool>(void* param_1, DebugOverlay* param_2,
                                                                         bool* param_3) {
        DebugOverlayLPS::DebugOverlayLPS(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100911860, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayLPS>* placement_new<ref_counter_shared<DebugOverlayLPS>, int, DebugOverlayLPS*&>(void*, int&&, DebugOverlayLPS*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<DebugOverlayLPS>, int, DebugOverlayLPS*&>(void* param_1, int* param_2,
                                                                               DebugOverlayLPS** param_3) {
        ref_counter_shared<DebugOverlayLPS>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911930, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayParticlesSimulation* placement_new<DebugOverlayParticlesSimulation, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayParticlesSimulation*
    placement_new<DebugOverlayParticlesSimulation, DebugOverlay&>(void* param_1, DebugOverlay* param_2) {
        DebugOverlayParticlesSimulation::DebugOverlayParticlesSimulation(param_1, param_2, true);
        return param_1;
    }

    // 0x100911950, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayParticlesSimulation>* placement_new<ref_counter_shared<DebugOverlayParticlesSimulation>, int, DebugOverlayParticlesSimulation*&>(void*, int&&, DebugOverlayParticlesSimulation*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<DebugOverlayParticlesSimulation>, int, DebugOverlayParticlesSimulation*&>(
        void* param_1, int* param_2, DebugOverlayParticlesSimulation** param_3) {
        ref_counter_shared<DebugOverlayParticlesSimulation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911a20, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayParticlesRender* placement_new<DebugOverlayParticlesRender, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayParticlesRender* placement_new<DebugOverlayParticlesRender, DebugOverlay&>(void* param_1,
                                                                                           DebugOverlay* param_2) {
        DebugOverlayParticlesRender::DebugOverlayParticlesRender(param_1, param_2, true);
        return param_1;
    }

    // 0x100911a40, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayParticlesRender>* placement_new<ref_counter_shared<DebugOverlayParticlesRender>, int, DebugOverlayParticlesRender*&>(void*, int&&, DebugOverlayParticlesRender*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<DebugOverlayParticlesRender>, int, DebugOverlayParticlesRender*&>(
        void* param_1, int* param_2, DebugOverlayParticlesRender** param_3) {
        ref_counter_shared<DebugOverlayParticlesRender>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911b10, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayGPU* placement_new<DebugOverlayGPU, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayGPU* placement_new<DebugOverlayGPU, DebugOverlay&>(void* param_1, DebugOverlay* param_2) {
        DebugOverlayGPU::DebugOverlayGPU(param_1, param_2, true);
        return param_1;
    }

    // 0x100911b30, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayGPU>* placement_new<ref_counter_shared<DebugOverlayGPU>, int, DebugOverlayGPU*&>(void*, int&&, DebugOverlayGPU*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<DebugOverlayGPU>, int, DebugOverlayGPU*&>(void* param_1, int* param_2,
                                                                               DebugOverlayGPU** param_3) {
        ref_counter_shared<DebugOverlayGPU>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911c00, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayRender* placement_new<DebugOverlayRender, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayRender* placement_new<DebugOverlayRender, DebugOverlay&, bool>(void* param_1, DebugOverlay* param_2,
                                                                               bool* param_3) {
        DebugOverlayRender::DebugOverlayRender(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100911c20, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayRender>* placement_new<ref_counter_shared<DebugOverlayRender>, int, DebugOverlayRender*&>(void*, int&&, DebugOverlayRender*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<DebugOverlayRender>, int, DebugOverlayRender*&>(void* param_1, int* param_2,
                                                                                     DebugOverlayRender** param_3) {
        ref_counter_shared<DebugOverlayRender>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911c90, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayShaderProfiler* placement_new<DebugOverlayShaderProfiler, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayShaderProfiler* placement_new<DebugOverlayShaderProfiler, DebugOverlay&, bool>(void* param_1,
                                                                                               DebugOverlay* param_2,
                                                                                               bool* param_3) {
        DebugOverlayShaderProfiler::DebugOverlayShaderProfiler(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100911cb0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayShaderProfiler>* placement_new<ref_counter_shared<DebugOverlayShaderProfiler>, int, DebugOverlayShaderProfiler*&>(void*, int&&, DebugOverlayShaderProfiler*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<DebugOverlayShaderProfiler>, int, DebugOverlayShaderProfiler*&>(
        void* param_1, int* param_2, DebugOverlayShaderProfiler** param_3) {
        ref_counter_shared<DebugOverlayShaderProfiler>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911d20, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayTextureAtlas* placement_new<DebugOverlayTextureAtlas, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayTextureAtlas*
    placement_new<DebugOverlayTextureAtlas, DebugOverlay&, bool>(void* param_1, DebugOverlay* param_2, bool* param_3) {
        DebugOverlayTextureAtlas::DebugOverlayTextureAtlas(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100911d40, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayTextureAtlas>* placement_new<ref_counter_shared<DebugOverlayTextureAtlas>, int, DebugOverlayTextureAtlas*&>(void*, int&&, DebugOverlayTextureAtlas*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<DebugOverlayTextureAtlas>, int, DebugOverlayTextureAtlas*&>(
        void* param_1, int* param_2, DebugOverlayTextureAtlas** param_3) {
        ref_counter_shared<DebugOverlayTextureAtlas>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911db0, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayGPUStats* placement_new<DebugOverlayGPUStats, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayGPUStats* placement_new<DebugOverlayGPUStats, DebugOverlay&, bool>(void* param_1, DebugOverlay* param_2,
                                                                                   bool* param_3) {
        DebugOverlayGPUStats::DebugOverlayGPUStats(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100911dd0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayGPUStats>* placement_new<ref_counter_shared<DebugOverlayGPUStats>, int, DebugOverlayGPUStats*&>(void*, int&&, DebugOverlayGPUStats*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<DebugOverlayGPUStats>, int, DebugOverlayGPUStats*&>(
        void* param_1, int* param_2, DebugOverlayGPUStats** param_3) {
        ref_counter_shared<DebugOverlayGPUStats>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911e40, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayMemory* placement_new<DebugOverlayMemory, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayMemory* placement_new<DebugOverlayMemory, DebugOverlay&>(void* param_1, DebugOverlay* param_2) {
        DebugOverlayMemory::DebugOverlayMemory(param_1, param_2, true);
        return param_1;
    }

    // 0x100911e60, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayMemory>* placement_new<ref_counter_shared<DebugOverlayMemory>, int, DebugOverlayMemory*&>(void*, int&&, DebugOverlayMemory*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<DebugOverlayMemory>, int, DebugOverlayMemory*&>(void* param_1, int* param_2,
                                                                                     DebugOverlayMemory** param_3) {
        ref_counter_shared<DebugOverlayMemory>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911f30, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayMemoryCache* placement_new<DebugOverlayMemoryCache, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayMemoryCache*
    placement_new<DebugOverlayMemoryCache, DebugOverlay&, bool>(void* param_1, DebugOverlay* param_2, bool* param_3) {
        DebugOverlayMemoryCache::DebugOverlayMemoryCache(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100911f50, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayMemoryCache>* placement_new<ref_counter_shared<DebugOverlayMemoryCache>, int, DebugOverlayMemoryCache*&>(void*, int&&, DebugOverlayMemoryCache*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<DebugOverlayMemoryCache>, int, DebugOverlayMemoryCache*&>(
        void* param_1, int* param_2, DebugOverlayMemoryCache** param_3) {
        ref_counter_shared<DebugOverlayMemoryCache>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100911fc0, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayDiskCache* placement_new<DebugOverlayDiskCache, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayDiskCache* placement_new<DebugOverlayDiskCache, DebugOverlay&>(void* param_1, DebugOverlay* param_2) {
        DebugOverlayDiskCache::DebugOverlayDiskCache(param_1, param_2, true);
        return param_1;
    }

    // 0x100911fe0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayDiskCache>* placement_new<ref_counter_shared<DebugOverlayDiskCache>, int, DebugOverlayDiskCache*&>(void*, int&&, DebugOverlayDiskCache*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<DebugOverlayDiskCache>, int, DebugOverlayDiskCache*&>(
        void* param_1, int* param_2, DebugOverlayDiskCache** param_3) {
        ref_counter_shared<DebugOverlayDiskCache>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100912050, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayAllocations* placement_new<DebugOverlayAllocations, DebugOverlay&>(void*, DebugOverlay&)
    DebugOverlayAllocations* placement_new<DebugOverlayAllocations, DebugOverlay&>(void* param_1,
                                                                                   DebugOverlay* param_2) {
        DebugOverlayAllocations::DebugOverlayAllocations(param_1, param_2, true);
        return param_1;
    }

    // 0x100912070, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayAllocations>* placement_new<ref_counter_shared<DebugOverlayAllocations>, int, DebugOverlayAllocations*&>(void*, int&&, DebugOverlayAllocations*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<DebugOverlayAllocations>, int, DebugOverlayAllocations*&>(
        void* param_1, int* param_2, DebugOverlayAllocations** param_3) {
        ref_counter_shared<DebugOverlayAllocations>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100912140, 32 bytes, inline, placed by nothing (unplaced)
    // DebugOverlayPools* placement_new<DebugOverlayPools, DebugOverlay&, bool>(void*, DebugOverlay&, bool&&)
    DebugOverlayPools* placement_new<DebugOverlayPools, DebugOverlay&, bool>(void* param_1, DebugOverlay* param_2,
                                                                             bool* param_3) {
        DebugOverlayPools::DebugOverlayPools(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100912160, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<DebugOverlayPools>* placement_new<ref_counter_shared<DebugOverlayPools>, int, DebugOverlayPools*&>(void*, int&&, DebugOverlayPools*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<DebugOverlayPools>, int, DebugOverlayPools*&>(void* param_1, int* param_2,
                                                                                   DebugOverlayPools** param_3) {
        ref_counter_shared<DebugOverlayPools>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100916ba0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100916c00, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100916c20, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100916c80, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100916ce0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100916dc0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.15
    void ___cxx_global_var_init_15() {
        std::function<bool(graphics::FontHelpers::ModIconReference&, int, int)>::function();
        ___cxa_atexit(PTR__function_100ee6f18, &graphics::FontHelpers::m_callbackGetSpriteReference, 4294967296);
    }

    // 0x100916eb0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x100916f10, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x100916f90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.208
    void ___cxx_global_var_init_208() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100916fd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.209
    void ___cxx_global_var_init_209() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100917010, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.210
    void ___cxx_global_var_init_210() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917050, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.211
    void ___cxx_global_var_init_211() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917090, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.212
    void ___cxx_global_var_init_212() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009170c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.213
    void ___cxx_global_var_init_213() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917100, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.214
    void ___cxx_global_var_init_214() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100917140, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.215
    void ___cxx_global_var_init_215() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917180, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.216
    void ___cxx_global_var_init_216() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009171c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.217
    void ___cxx_global_var_init_217() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager,
                                          std::default_delete<graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917200, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.218
    void ___cxx_global_var_init_218() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917240, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.219
    void ___cxx_global_var_init_219() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917280, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.220
    void ___cxx_global_var_init_220() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009172c0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.221
    void ___cxx_global_var_init_221() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100917320, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.222
    void ___cxx_global_var_init_222() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917360, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.223
    void ___cxx_global_var_init_223() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009173c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.224
    void ___cxx_global_var_init_224() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917400, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.225
    void ___cxx_global_var_init_225() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917440, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009174c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917500, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917540, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49e0;
        if (*PTR_m_pSingleton_100ee49e0 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::VectorFontLoader,
                                          std::default_delete<graphics::VectorFontLoader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917580, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.231
    void ___cxx_global_var_init_231() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4540;
        if (*PTR_m_mutex_100ee4540 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917600, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.233
    void ___cxx_global_var_init_233() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917640, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.234
    void ___cxx_global_var_init_234() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100917680, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.235
    void ___cxx_global_var_init_235() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009176c0, 64 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_4_cxx.cxx
    void __GLOBAL__sub_I_unity_4_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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
    // 0x104232bb0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232bf0, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics
