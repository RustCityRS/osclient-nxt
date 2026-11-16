// libs/hal/render/device/RenderDevice.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderDevice.h"

namespace jag::render {
    // 0x100d997c0
    int32_t RenderDevice::MEMORY_PROFILE_CPU_THRESHOLDS[8] = {1024, 1536, 2048, 2048, 3072, 0, 0, 0};

    // 0x100d997e0
    int32_t RenderDevice::MEMORY_PROFILE_GPU_THRESHOLDS[5] = {128, 512, 1024, 1536, 2048};

    // 0x100f48890
    const void* RenderDevice::MEMORY_PROFILE_DEBUG_NAMES[5] = {
        "Low", "Medium", "High", "High + Uncompressed", "Ultra",
    };

    // 0x100f4e380
    int32_t RenderDevice::m_secondaryRenderContext[6] = {0, 0, 0, 0, 1560, 0};

    // 0x100009720: RenderDevice::GetGPUVendor() const has the same machine code as BaseApp::GetExitCode()

    // 0x10005d8c0: RenderDevice::GetDeviceCaps() const has the same machine code as oldscape::OSClientConsoleUI::GetBounds() const

    // 0x1003a2860: RenderDevice::GetPrimaryRenderContext() const has the same machine code as RenderDevice::GetPrimaryRenderContext()

    // 0x100c19e50
    void RenderDevice::TriggerDeviceLoss() {
        long lVar3;
        void** arg1;
        void** ppvVar4;
        uint64_t* puVar6;
        uint8_t auVar7[16];
        __114 _Var8;
        uint8_t local_d8[10][16];
        long local_38;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      428, nullptr);
        }
        uint8_t* this_00 = &field_448;
        cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            LogAssert("m_primaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      429, nullptr);
        }
        RenderContext* this_02 = (RenderContext*)(*this_00).operator->();
        cVar1 = this_02->IsInsideBeginEnd();
        if (cVar1) {
            LogAssert("!m_primaryRenderContext->IsInsideBeginEnd()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      432, nullptr);
        }
        FinishRenderingAndLoseDevice();
        cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      436, nullptr);
        }
        field_1144 = 1;
        uint8_t* this_01 = &field_912;
        cVar1 = this_01->empty();
        if (!cVar1) {
            LogAssert("m_removedCallbacks.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      438, nullptr);
        }
        auto pLVar2 = logger::default_logger();
        unsigned long arg1_00 = 0;
        pLVar2->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            440, "Running OnDeviceLost callbacks");
        scoped_lock<std::mutex> local_f0(field_848);
        do {
            lVar3 = field_496[arg1_00];
            arg1 = (void**)((lVar3 + 56))->HeapBeginPtr();
            ppvVar4 = (void**)((lVar3 + 56))->end();
            for (; arg1 != ppvVar4; arg1 = arg1 + 1) {
                auVar7 = this_01->find(*arg1);
                local_d8[0] = auVar7;
                _Var8 = (__114)this_01->end();
                local_e8 = _Var8;
                cVar1 = *local_d8 == local_e8;
                if (cVar1) {
                    (**(void (**)(...))(*(long*)*arg1 + 16))();
                }
            }
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 4);
        long* plVar5 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar5 + 16))(plVar5);
        pLVar2 = logger::default_logger();
        pLVar2->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            459, "Finished running OnDeviceLost callbacks");
        field_1144 = 0;
        auVar7 = this_01->begin();
        local_d8[0] = auVar7;
        _Var8 = (__114)this_01->end();
        __114* arg1_01 = &local_e8;
        __114 local_e8 = _Var8;
        cVar1 = *local_d8 != *arg1_01;
        if (cVar1) {
            do {
                puVar6 = (uint64_t*)local_d8->HeapBeginPtr();
                UnregisterCallback(*puVar6);
                ++*local_d8;
                arg1_01 = &local_e8;
                cVar1 = *local_d8 != local_e8;
            } while (cVar1);
        }
        this_01->clear();
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderDevice::TriggerDeviceLoss()::__114, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, arg1_01);
        RunSynchronouslyOnRenderThread(*local_d8, false);
    }

    // 0x100c1a5e0
    void RenderDevice::OnContextPreCreate(RenderContext& renderContext) {
        field_456.reset(renderContext);
    }

    // 0x100c29220
    void RenderDevice::OnWindowResize(const math::Rect<unsigned int>& rect) {
        long* plVar1;
        long lVar4;
        long* plVar5;
        long* plVar6;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      478, nullptr);
        }
        if (GetReadyState() != 0) {
            LogAssert("GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      479, nullptr);
        }
        scoped_lock<std::mutex> local_38(field_848);
        unsigned long arg1 = 0;
        do {
            lVar4 = field_496[arg1];
            plVar5 = (long*)((lVar4 + 56))->HeapBeginPtr();
            plVar6 = (long*)((lVar4 + 56))->end();
            for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
                plVar1 = (long*)*plVar5;
                if (plVar1 != nullptr) {
                    (**(void (**)(...))(*plVar1 + 24))(plVar1, rect);
                }
            }
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x100c2a380
    void RenderDevice::PushMemoryZone(const char* str) {

        scoped_lock<std::mutex> local_20(field_62238336);
        field_1160.PushZone(str);
    }

    // 0x100c2a3e0
    ScopedGPUMemoryZone::ScopedGPUMemoryZone(const char* str, ...) {
        char in_AL;
        uint64_t in_RCX;
        uint64_t in_RDX;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_2e8[16];
        uint64_t local_2b8;
        uint64_t local_2a8;
        uint64_t local_298;
        uint64_t local_288;
        uint64_t local_278;
        uint64_t local_268;
        uint64_t local_258;
        uint64_t local_248;
        Singleton<RenderDevice> local_238;

        if (in_AL != '\0') {
            local_2b8 = in_XMM0_Qa;
            local_2a8 = in_XMM1_Qa;
            local_298 = in_XMM2_Qa;
            local_288 = in_XMM3_Qa;
            local_278 = in_XMM4_Qa;
            local_268 = in_XMM5_Qa;
            local_258 = in_XMM6_Qa;
            local_248 = in_XMM7_Qa;
        }
        uint8_t* local_28 = local_2e8;
        uint8_t* local_30 = &uStack0000000000000008;
        uint64_t local_38 = 206158430224;
        uint64_t local_2d8 = in_RDX;
        uint64_t local_2d0 = in_RCX;
        uint64_t local_2c8 = in_R8;
        uint64_t local_2c0 = in_R9;
        _vsnprintf(&local_238, 512, str, &local_38);
        ((RenderDevice*)&local_238->Instance())->PushMemoryZone(&local_238);
    }

    // 0x100c2a4c0
    ScopedGPUMemoryZone::~ScopedGPUMemoryZone() {
        ((RenderDevice*)Instance())->PopMemoryZone();
    }

    // 0x100c2a4e0
    void RenderDevice::PopMemoryZone() {

        scoped_lock<std::mutex> local_18(field_62238336);
        field_1160.PopZone();
    }

    // 0x100c2a540
    uint64_t RenderDevice::RegisterObjectGPUMemory(const char* str, unsigned int arg2) {
        long lVar2;
        long* plVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_270;

        if (arg2 == 0) {
            return 0;
        }
        char* str_00 = "Unknown";
        if (str != nullptr) {
            str_00 = str;
        }
        fixed_string<char, 512> local_260(str_00);
        scoped_lock<std::mutex> local_268(field_62238336);
        auto local_278 = field_62199760.rbegin();
        local_270.end();
        while (true) {
            if (local_278 != local_270 == '\0')
                break;
            lVar2 = *local_278;
            plVar3 = (long*)(*(
                *(map<eastl::fixed_string<char, 512>, ZoneObjectMemory, eastl::less<eastl::fixed_string<char, 512>>,
                      eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true>>**)(lVar2 + 552)))[local_260];
            *plVar3 = *plVar3 + (unsigned long)arg2;
            ++local_278;
        }
        m_totalAllocatedGPUMemory = m_totalAllocatedGPUMemory + (unsigned long)arg2;
        auto this_00 = field_1160.GetCurrentZone();
        if (this_00 == nullptr) {
            LogAssert("pCurrentZone != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      719, nullptr);
        }
        this_00->AddMemoryAllocation(local_260, (unsigned long)arg2);
    }

    // 0x100c2a6e0
    void RenderDevice::UnregisterObjectGPUMemory(const char* str, unsigned int arg2,
                                                 GPUMemoryAllocatorZone* gpuMemoryAllocatorZone) {
        rbtree<eastl::fixed_string<char, 512>, eastl::pair<eastl::fixed_string<char, 512> const, ZoneObjectMemory>,
               eastl::less<eastl::fixed_string<char, 512>>, eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<eastl::fixed_string<char, 512> const, ZoneObjectMemory>>, true, true>*
            this_00;
        bool cVar1;
        long lVar2;
        ReturnValue local_290;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_288;
        uint64_t local_280;

        if (arg2 == 0) {
            return;
        }
        char* str_00 = "Unknown";
        if (str != nullptr) {
            str_00 = str;
        }
        fixed_string<char, 512> local_260(str_00);
        scoped_lock<std::mutex> local_268(field_62238336);
        auto local_298 = field_62199760.rbegin();
        local_288.end();
        while (true) {
            cVar1 = local_298 != local_288;
            if (!cVar1)
                break;
            lVar2 = *local_298;
            this_00 = *(rbtree<eastl::fixed_string<char, 512>,
                               eastl::pair<eastl::fixed_string<char, 512> const, ZoneObjectMemory>,
                               eastl::less<eastl::fixed_string<char, 512>>,
                               eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true>,
                               eastl::use_first<eastl::pair<eastl::fixed_string<char, 512> const, ZoneObjectMemory>>,
                               true, true>**)(lVar2 + 552);
            local_290 = this_00->find(local_260);
            local_280 = this_00->end();
            cVar1 = local_290 != local_280;
            if (cVar1) {
                lVar2 = *local_290;
                if (*(unsigned long*)(lVar2 + 552) < (unsigned long)arg2) {
                    LogAssert("objAllocationIt->second.m_size >= size",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                              "RenderDevice.cpp",
                              746, nullptr);
                }
                lVar2 = *local_290;
                *(long*)(lVar2 + 552) = *(long*)(lVar2 + 552) - (unsigned long)arg2;
            }
            ++local_298;
        }
        if (m_totalAllocatedGPUMemory < (unsigned long)arg2) {
            LogAssert("m_TotalAllocatedGPUMemory >= size",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      752, nullptr);
        }
        m_totalAllocatedGPUMemory = m_totalAllocatedGPUMemory - (unsigned long)arg2;
        if (gpuMemoryAllocatorZone == nullptr) {
            LogAssert("memoryZone",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      755, nullptr);
        }
        gpuMemoryAllocatorZone->RemoveMemoryAllocation(local_260, (unsigned long)arg2);
    }

    // 0x100c2a930
    void RenderDevice::PrintMemoryUsageToConsole() {
        GPUMemoryAllocatorZone* gpuMemoryAllocatorZone;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>* pbVar3;
        uint64_t uVar4;
        float fVar5;
        ReturnValue local_58;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_50;
        double local_48;
        ReturnValue local_40;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        gpuMemoryAllocatorZone = (GPUMemoryAllocatorZone*)field_1160.GetRootZone();
        auto pLVar2 = logger::default_logger();
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            809, "\nGPU Memory Report");
        pLVar2 = logger::default_logger();
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            810, "--------------------------------------");
        PrintToConsole(gpuMemoryAllocatorZone, 0);
        bool cVar1 = field_60269944.empty();
        if (!cVar1) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                        "RenderDevice.cpp",
                        817, "\nMemory Recorders:");
            local_40 = field_60269944.rbegin();
            local_50.end();
            cVar1 = local_40 != local_50;
            if (cVar1) {
                do {
                    pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>*)*local_40;
                    pLVar2 = logger::default_logger();
                    uVar4 = pbVar3->begin();
                    pLVar2->Log(false, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                820, "\t<%s>", uVar4);
                    local_58 = ((pbVar3 + 552))->rbegin();
                    local_38.end();
                    cVar1 = local_58 != local_38;
                    while (cVar1) {
                        pbVar3 =
                            (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>*)*local_58;
                        fVar5 = Bytes2Megabytes<unsigned long long>(*(unsigned long long*)(pbVar3 + 552));
                        local_48 = (double)fVar5;
                        pLVar2 = logger::default_logger();
                        uVar4 = pbVar3->begin();
                        pLVar2->Log(false, 7,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "device/RenderDevice.cpp",
                                    824, "\t\t%s Memory: %.2lfMb", local_48, uVar4);
                        ++local_58;
                        cVar1 = local_58 != local_38;
                    }
                    ++local_40;
                    cVar1 = local_40 != local_50;
                } while (cVar1);
            }
        }
        pLVar2 = logger::default_logger();
        pLVar2->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            829, "");
    }

    // 0x100c2b540
    RenderDevice::~RenderDevice() {
        RenderContext* this_02;
        __106 local_20;

        Destroy();
        DestroySecondaryRenderContexts();
        m_secondaryRenderContext();
        unique_ptr* this_00 = (unique_ptr*)(*(void (*)(...))m_secondaryRenderContext)();
        if (std::unique_ptr::operator_cast_to_bool(this_00)) {
            LogAssert("!m_secondaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      37, nullptr);
        }
        auto this_01 = this_00->Instance();
        auto str = this_01->SSOBeginPtr();
        local_20.field_0 = (long)this;
        ThreadPool::RunOnceOnAllThreads<RenderDevice::~RenderDevice()::__106>(str, &local_20);
        if (IsDeferredRendering()) {
            this_02 = (RenderContext*)field_448.operator->();
            ((Fence*)this_02->GetDestroyRenderThreadFence())->Wait();
        }
        (&field_62238336)->~mutex();
        field_62199760.~fixed_map();
        field_60269944.~fixed_map();
        field_1160.~GPUMemoryAllocatorZoneMonitor();
        (&field_1032)->~recursive_mutex();
        field_1000.~vector();
        field_968.~vector();
        field_912.~hash_map();
        (&field_848)->~mutex();
        field_496.~array();
        field_456.~thread_specific_ptr();
        field_448.~unique_ptr();
        field_104.~hash_node();
        field_64.~basic_string();
        field_32.~basic_string();
    }

    // 0x100c2b7a0
    void RenderDevice::DestroySecondaryRenderContexts() {
        __109 local_28;

        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                  "RenderDevice.cpp",
                  243, "Destroying secondary render contexts");
        AutoSingleton<ThreadPoolSingleton>* this_02 = (AutoSingleton<ThreadPoolSingleton>*)&field_1104;
        auto puVar2 = this_02->HeapBeginPtr();
        auto puVar3 = this_02->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
            this_02 = (AutoSingleton<ThreadPoolSingleton>*)*puVar2;
            (**(void (**)(...))(*(long*)this_02 + 24))();
        }
        auto this_01 = this_02->Instance();
        auto str = this_01->SSOBeginPtr();
        local_28.field_0 = this;
        ThreadPool::RunOnceOnAllThreads<RenderDevice::DestroySecondaryRenderContexts()::__109>(str, &local_28);
        if (IsRenderThread() == '\0') {
            DestroySecondaryRenderContext();
        }
    }

    // 0x100c2bbf0
    unsigned long RenderDevice::CreateRenderContexts(const RenderContextDesc& renderContextDesc) {
        Logger* pLVar3;
        default_delete<RenderContext>* this_01;
        unsigned long uVar4;
        RenderContext* renderContext;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      55, nullptr);
        }
        uint8_t* this_00 = &field_448;
        if (this_00->operator_cast_to_bool()) {
            LogAssert("!m_primaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      57, nullptr);
        }
        RenderContextDesc local_48(renderContextDesc);
        if (local_48.field_8._2_1_ != '\0') {
            LogAssert("!deferredDesc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      60, nullptr);
        }
        RenderContextDesc local_68(renderContextDesc);
        local_68.field_8._3_1_ = 0;
        auto local_28 = std::make_unique<RenderContext>();
        *this_00 = local_28;
        RenderContext* pRVar2 = (RenderContext*)(*this_00).operator->();
        if (!(pRVar2->Init(local_68))) {
            pLVar3 = logger::default_logger();
            uVar4 = 0;
            pLVar3->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                        "RenderDevice.cpp",
                        70, "Failed to init non-deferred main thread primary context");
        } else {
            if (local_48.field_8._3_1_ != '\0') {
                if (field_333 == '\0') {
                    pLVar3 = logger::default_logger();
                    pLVar3->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                94, "Deferred rendering disabled due to lack of device support");
                } else {
                    pLVar3 = logger::default_logger();
                    renderContext = nullptr;
                    pLVar3->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                80, "Deferred rendering enabled, creating deferred render context");
                    pRVar2 = (RenderContext*)(*this_00).operator->();
                    pRVar2->Shutdown();
                    this_01 = (default_delete<RenderContext>*)this_00->get();
                    std::default_delete<RenderContext>::operator()(this_01, renderContext);
                    std::unique_ptr<RenderContext>::release();
                    local_28 = std::make_unique<RenderContext>();
                    *this_00 = local_28;
                    pRVar2 = (RenderContext*)(*this_00).operator->();
                    if (!(pRVar2->Init(local_48))) {
                        pLVar3 = logger::default_logger();
                        uVar4 = 0;
                        pLVar3->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "device/RenderDevice.cpp",
                                    88, "Failed to init deferred render thread primary context");
                        goto LAB_100c2be17;
                    }
                }
            }
            uVar4 = (((uint64_t)((int64_t)((unsigned long)&local_28 >> 8)) << 8) | (uint8_t)1);
            if (field_328 != '\0') {
                CreateSecondaryRenderContexts();
            }
        }
    LAB_100c2be17:
        return uVar4 & 4294967295;
    }

    // 0x100c2bf40
    uint8_t RenderDevice::CreateSecondaryRenderContexts() {
        uint8_t bVar2;
        int iVar3;
        int iVar4;
        Layout* pLVar5;
        char* str;
        ThreadPool* pTVar6;
        uint64_t* puVar7;
        uint64_t* puVar8;
        type* arg2;
        __atomic_base* p_Var9;
        __108 local_58;
        uint32_t local_38;

        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                  "RenderDevice.cpp",
                  145, "Initialising secondary render contexts");
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      147, nullptr);
        }
        if (field_328 == '\0') {
            LogAssert("m_DeviceCaps.m_MultiContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      148, nullptr);
        }
        return local_31 = 1;
        RenderDevice* this_02 = this;
        if (IsDeferredRendering()) {
            this_02 = this;
            local_31 = CreateSecondaryRenderContext();
        }
        if (local_31 != 0) {
            local_38 = 0;
            pLVar5 = (Layout*)this_02->Instance();
            str = (char*)pLVar5->SSOBeginPtr();
            local_58.field_8 = &local_31;
            p_Var9 = (__atomic_base*)&local_38;
            local_58.field_0 = this;
            local_58.field_16 = (__atomic_base<int, true>*)p_Var9;
            ThreadPool::RunOnceOnAllThreadsAsync<RenderDevice::CreateSecondaryRenderContexts()::__108>(str, &local_58);
            iVar3 = std::__atomic_base::operator_cast_to_int(p_Var9);
            pLVar5 = (Layout*)p_Var9->Instance();
            pTVar6 = (ThreadPool*)pLVar5->SSOBeginPtr();
            iVar4 = pTVar6->GetNumberOfThreads();
            if (iVar3 < iVar4) {
                do {
                    BaseApp::GetAppInstance()->ExecuteMainThreadEvents();
                    local_58.duration<int>(500, arg2);
                    std::this_thread::sleep_for((duration*)&local_58);
                    p_Var9 = (__atomic_base*)&local_38;
                    iVar3 = local_38.operator_cast_to_int();
                    pLVar5 = (Layout*)p_Var9->Instance();
                    pTVar6 = (ThreadPool*)pLVar5->SSOBeginPtr();
                    iVar4 = pTVar6->GetNumberOfThreads();
                } while (iVar3 < iVar4);
            }
        }
        if (local_31 != 0) {
            puVar7 = (uint64_t*)field_1104.HeapBeginPtr();
            puVar8 = (uint64_t*)field_1104.end();
            for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
                bVar2 = (**(void (**)(...))(*(long*)*puVar7 + 16))();
                local_31 = local_31 & bVar2;
            }
        }
        return local_31;
    }

    // 0x100c2c110
    void RenderDevice::FinishRenderingAndLoseDevice() {
        RenderContext* pRVar4;
        RenderContext* pRVar5;
        __107* arg1;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        RenderDevice* pRVar3 = this;
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      108, nullptr);
        }
        pRVar3 = (RenderDevice*)pRVar3->Instance();
        int iVar2 = GetReadyState(pRVar3);
        if (iVar2 == 0) {
            arg1 = (__107*)&DAT_00000001;
            field_1145 = true;
            pRVar4 = GetCurrentThreadRenderContext();
            if (pRVar4 != nullptr) {
                pRVar4 = GetCurrentThreadRenderContext();
                pRVar5 = (RenderContext*)field_448.get();
                if (pRVar4 != pRVar5) {
                    pRVar4 = GetCurrentThreadRenderContext();
                    pRVar4->FinishRendering();
                }
            }
            pRVar4 = (RenderContext*)field_448.operator->();
            pRVar4->FinishRendering();
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderDevice::FinishRenderingAndLoseDevice()::__107, void>(local_c8, arg1);
            RunSynchronouslyOnRenderThread(*local_c8, false);
            field_1145 = false;
        }
    }

    // 0x100c2c280
    uint32_t RenderDevice::CreateSecondaryRenderContext() {
        if (CreateSecondaryRenderContext()::creationMutex == '\0') {
            if (___cxa_guard_acquire(&CreateSecondaryRenderContext()::creationMutex) != 0) {
                ___cxa_atexit(PTR__mutex_100ee6ef8, &CreateSecondaryRenderContext()::creationMutex, 4294967296);
                ___cxa_guard_release(&CreateSecondaryRenderContext()::creationMutex);
            }
        }
        scoped_lock<std::mutex> local_20(*((mutex*)&CreateSecondaryRenderContext()::creationMutex));
        auto pRVar4 = GetPrimaryRenderContext();
        auto interfaceMouseEvent = pRVar4->GetDesc();
        RenderContextDesc local_48(*interfaceMouseEvent);
        local_48.field_8._2_2_ = 1;
        m_secondaryRenderContext();
        unique_ptr* this_00 = (unique_ptr*)(*(void (*)(...))m_secondaryRenderContext)();
        if (std::unique_ptr::operator_cast_to_bool(this_00) != '\0') {
            LogAssert("!m_secondaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      231, nullptr);
        }
        auto local_28 = std::make_unique<RenderContext>();
        m_secondaryRenderContext();
        unique_ptr<RenderContext>* this_01 = (unique_ptr<RenderContext>*)(*(void (*)(...))m_secondaryRenderContext)();
        *this_01 = local_28;
        m_secondaryRenderContext();
        pRVar4 = (RenderContext*)(*this_01).operator->();
        uint32_t uVar2 = pRVar4->Init(local_48);
        if ((char)uVar2 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      235, "Failed to init secondary RenderContext");
        }
        return uVar2;
    }

    // 0x100c2c820
    void RenderDevice::DestroySecondaryRenderContext() {
        field_456.release();
        m_secondaryRenderContext();
        ((unique_ptr<RenderContext>*)(*(void (*)(...))m_secondaryRenderContext)())->reset(nullptr);
    }

    // 0x100c2c8b0
    void RenderDevice::RunWithThreadPoolRenderContexts(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        function<void_(RenderContext&), _128ul, _16ul, _(fixedfunction::Methods) 0>* local_18;

        auto layout = callback.Instance();
        auto str = layout->SSOBeginPtr();
        local_18 = callback;
        ThreadPool::RunOnceOnAllThreads<RenderDevice::RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__110>(
            str, (__110*)&local_18);
    }

    // 0x100c2cb40
    auto RenderDevice::RunOnThreadPoolRenderContext(
        const char* str,
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        auto result;
        long lVar2;
        Layout* this_00;
        ThreadPool* this_01;
        RenderDevice* pRVar3;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            pRVar3 = this;
            cVar1 = IsRenderThread();
            if (cVar1)
                goto LAB_100c2cb83;
        } else {
        LAB_100c2cb83:
            lVar2 = GetOrigin();
            pRVar3 = this;
            if (*(char*)(lVar2 + 227) != '\0') {
                this_00 = (Layout*)Instance();
                this_01 = (ThreadPool*)this_00->SSOBeginPtr();
                new (local_d8) fixedfunction::function(callback);
                ThreadPool::AddTask<RenderDevice::RunOnThreadPoolRenderContext(
                    char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                                         (fixedfunction::Methods)0> const&)::__111>(
                    &result, this_01, str, (__111*)local_d8);
                RunOnThreadPoolRenderContext(
                    char const*,
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::$_111::~__111((__111*)local_d8);
                goto LAB_100c2cc45;
            }
        }
        pRVar3 = (RenderDevice*)pRVar3->Instance();
        auto pRVar4 = GetCurrentThreadRenderContext(pRVar3);
        if (pRVar4 == nullptr) {
            LogAssert("pRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      292, nullptr);
        }
        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>::
        operator()(
            (function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)callback);
        std::promise<void>::promise();
        std::promise<void>::get_future();
        std::promise<void>::set_value();
    LAB_100c2cc45:
        return result;
    }

    // 0x100c2ced0
    void RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame* renderDeviceOnEndFrame) {
        RenderDeviceOnEndFrame** ppRVar1;
        RenderDeviceOnEndFrame** ppRVar2;
        uint8_t* this_00;
        scoped_lock<std::recursive_mutex> local_28;

        if (renderDeviceOnEndFrame == nullptr) {
            LogAssert("pDeviceOnEndFrame",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      305, nullptr);
        }
        if (renderDeviceOnEndFrame != nullptr) {
            local_28 = std::scoped_lock(field_1032);
            this_00 = &field_968;
            ppRVar1 = (RenderDeviceOnEndFrame**)this_00->HeapBeginPtr();
            ppRVar2 = (RenderDeviceOnEndFrame**)this_00->end();
            ppRVar1 =
                eastl::find_if<RenderDeviceOnEndFrame* const*, (RenderDeviceOnEndFrame*)->RegisterOnEndFrame()::__112>(
                    ppRVar1, ppRVar2, (__112*)renderDeviceOnEndFrame);
            ppRVar2 = (RenderDeviceOnEndFrame**)this_00->end();
            if (ppRVar1 == ppRVar2) {
                this_00->push_back(renderDeviceOnEndFrame);
            }
        }
    }

    // 0x100c2d060
    void RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame* renderDeviceOnEndFrame) {
        RenderDeviceOnEndFrame** ppRVar1;
        RenderDeviceOnEndFrame** ppRVar2;
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        uint8_t* puVar3;
        scoped_lock<std::recursive_mutex> local_30;

        RenderDeviceOnEndFrame* local_28 = renderDeviceOnEndFrame;
        if (renderDeviceOnEndFrame == nullptr) {
            LogAssert("pDeviceOnEndFrame",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      331, nullptr);
        }
        if (renderDeviceOnEndFrame != nullptr) {
            local_30 = std::scoped_lock(field_1032);
            puVar3 = &field_968;
            ppRVar1 = (RenderDeviceOnEndFrame**)puVar3->HeapBeginPtr();
            ppRVar2 = (RenderDeviceOnEndFrame**)puVar3->end();
            ppRVar1 = eastl::find_if<RenderDeviceOnEndFrame* const*,
                                     (RenderDeviceOnEndFrame*)->UnregisterOnEndFrame()::__113>(ppRVar1, ppRVar2,
                                                                                               (__113*)local_28);
            ppRVar2 = (RenderDeviceOnEndFrame**)puVar3->end();
            if ((ppRVar1 != ppRVar2) && (puVar3->erase_unsorted(ppRVar1), field_1096 != '\0')) {
                puVar3 = &field_1000;
                arg1 = (function<bool_(int, int, int, int)>**)puVar3->HeapBeginPtr();
                arg2 = (function<bool_(int, int, int, int)>**)puVar3->end();
                ppRVar1 = (RenderDeviceOnEndFrame**)
                    eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                        arg1, arg2, local_28);
                ppRVar2 = (RenderDeviceOnEndFrame**)puVar3->end();
                if (ppRVar1 != ppRVar2) {
                    puVar3->erase_unsorted(ppRVar1);
                }
            }
        }
    }

    // 0x100c2d220
    void RenderDevice::RegisterSecondaryContext(RenderDeviceSecondaryContext* renderDeviceSecondaryContext) {
        if (renderDeviceSecondaryContext == nullptr) {
            LogAssert("pDeviceSecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      368, nullptr);
        }
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      369, nullptr);
        }
        field_1104.insert<RenderDeviceSecondaryContext*&>(renderDeviceSecondaryContext);
    }

    // 0x100c2d350
    void RenderDevice::UnregisterSecondaryContext(RenderDeviceSecondaryContext* renderDeviceSecondaryContext) {
        uint64_t in_R8;
        uint64_t in_R9;

        if (renderDeviceSecondaryContext == nullptr) {
            LogAssert("pDeviceSecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      376, nullptr, in_R8, in_R9, 0);
        }
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      377, nullptr, in_R8, in_R9, renderDeviceSecondaryContext);
        }
        eastl::vector_set<RenderDeviceSecondaryContext*, eastl::less<RenderDeviceSecondaryContext*>, eastl::allocator,
                          eastl::vector<RenderDeviceSecondaryContext*>>::erase(field_1104);
    }

    // 0x100c2d410
    void RenderDevice::RegisterCallback(RenderDeviceCallback* renderDeviceCallback) {
        hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                  eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                  eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* this_00;
        obj_iterator local_48;
        eastl local_30;
        scoped_lock<std::mutex> local_20;

        if (renderDeviceCallback == nullptr) {
            LogAssert("pDeviceCallback",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      384, nullptr);
        }
        if (field_1144 != '\0') {
            LogAssert("!m_deviceResetInProgress",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      385, "Attempting to change device reset callback list while iterating over it");
        }
        if (renderDeviceCallback != nullptr) {
            local_20 = std::scoped_lock(field_848);
            this_00 = &field_496[(long)renderDeviceCallback->field_12];
            &local_30 = (eastl[16])this_00->find(renderDeviceCallback);
            local_48._0_16_ = this_00->end();
            if (local_30 == local_48 != '\0') {
                eastl::hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                 eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                                 eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                                 true>::insert(local_48);
                ((this_00 + 56))->push_back(renderDeviceCallback);
            }
        }
    }

    // 0x100c2d5a0
    void RenderDevice::UnregisterCallback(RenderDeviceCallback* renderDeviceCallback) {
        Layout* this_00;
        hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                  eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                  eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* this_01;
        hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                  eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                  eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* phVar2;
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        RenderDeviceCallback** arg1_00;
        uint8_t auVar3[16];
        uint8_t local_68[16];
        uint8_t local_58[16];
        scoped_lock<std::mutex> local_40;

        RenderDeviceCallback* local_38 = renderDeviceCallback;
        if (renderDeviceCallback == nullptr) {
            LogAssert("pDeviceCallback",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      401, nullptr);
        }
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      402, nullptr);
        }
        if (local_38 != nullptr) {
            if (field_1144 == '\0') {
                local_40 = std::scoped_lock(field_848);
                this_01 = (hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                     eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                                     eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>*)
                    std::array<DeviceCallbacks, 4ul>::begin();
                phVar2 =
                    (hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                               eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                               eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, false, true>*)std::array<DeviceCallbacks, 4ul>::end();
                if (this_01 != phVar2) {
                    do {
                        auVar3 = this_01->find(local_38);
                        local_58 = auVar3;
                        auVar3 = this_01->end();
                        local_68 = auVar3;
                        if (*local_58 != *local_68) {
                            this_01->erase(local_58._0_8_);
                            this_00 = (Layout*)(this_01 + 56);
                            arg1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
                            arg2 = (function<bool_(int, int, int, int)>**)this_00->end();
                            arg1_00 = (RenderDeviceCallback**)eastl::find<std::function<bool(input::TextCommand)>**,
                                                                          std::function<bool(input::TextCommand)>*>(
                                arg1, arg2, local_38);
                            this_00->erase(arg1_00);
                        }
                        this_01 = this_01 + 88;
                    } while (this_01 != phVar2);
                }
            } else {
                eastl::hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                 eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                                 eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                                 true>::insert(*local_58);
            }
        }
    }

    // 0x100c2d860
    void RenderDevice::OnEndFrame() {
        uint8_t* this_00;
        RenderDeviceOnEndFrame** arg1;
        RenderDeviceOnEndFrame** arg2;
        long* plVar3;
        scoped_lock<std::recursive_mutex> local_30;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      497, nullptr);
        }
        cVar1 = (&field_448)->operator_cast_to_bool();
        if (cVar1) {
            if (GetReadyState() == 0) {
                local_30 = std::scoped_lock(field_1032);
                if (field_1096 != '\0') {
                    LogAssert("!m_isInOnEndFrame",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                              "RenderDevice.cpp",
                              504, nullptr);
                }
                field_1096 = 1;
                this_00 = &field_1000;
                cVar1 = this_00->empty();
                if (!cVar1) {
                    LogAssert("m_OnEndFrameQueue.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                              "RenderDevice.cpp",
                              519, nullptr);
                }
                arg1 = (RenderDeviceOnEndFrame**)field_968.HeapBeginPtr();
                arg2 = (RenderDeviceOnEndFrame**)field_968.end();
                this_00->assign<RenderDeviceOnEndFrame* const*>(arg1, arg2);
                while (true) {
                    cVar1 = this_00->empty();
                    if (cVar1)
                        break;
                    plVar3 = (long*)this_00->back();
                    plVar3 = (long*)*plVar3;
                    this_00->pop_back();
                    if (plVar3 != nullptr) {
                        (**(void (**)(...))(*plVar3 + 16))(plVar3);
                    }
                }
                field_1096 = 0;
            }
        }
    }

    // 0x100c2da50
    unsigned long RenderDevice::IsMobileDesktopGPU() const {
        unsigned long uVar3;
        uint8_t* pbVar4;
        char* pcVar5;
        unsigned long unaff_R14;

        int iVar1 = GetUIHeight();
        if (iVar1 != 0) {
            iVar1 = GetUIHeight();
            unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (iVar1 != 2)
                goto LAB_100c2db37;
        }
        long lVar2 = find("Mobility", 0);
        unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (lVar2 == -1) {
            lVar2 = find(" Go", 0);
            if (lVar2 == -1) {
                uVar3 = find("M", 0);
                if (uVar3 != 18446744073709551615) {
                    pbVar4 = (uint8_t*)at(uVar3 - 1);
                    iVar1 = isdigit((unsigned int)*pbVar4);
                    if (iVar1 != 0)
                        goto LAB_100c2db37;
                }
                iVar1 = GetUIHeight();
                if ((iVar1 == 0) && (uVar3 != 18446744073709551615)) {
                    pcVar5 = (char*)at(uVar3 - 1);
                    if (*pcVar5 == ' ') {
                        lVar2 = size();
                        if (uVar3 < lVar2 - 1U) {
                            pbVar4 = (uint8_t*)at(uVar3 + 1);
                            iVar1 = isdigit((unsigned int)*pbVar4);
                            if (iVar1 != 0)
                                goto LAB_100c2db37;
                        }
                    }
                }
                unaff_R14 = 0;
            }
        }
    LAB_100c2db37:
        return unaff_R14 & 4294967295;
    }

    // 0x100c2dbb0
    void RenderDevice::ValidateMSAATextureSamples(int& arg1) const {
        int iVar1;
        int* piVar2;

        if (field_271 == '\0') {
            iVar1 = 1;
        } else {
            piVar2 = std::min<int>(field_192, field_196);
            piVar2 = std::min<int>(arg1, *piVar2);
            iVar1 = *piVar2;
        }
        arg1 = iVar1;
    }

    // 0x100c2dc10
    uint64_t RenderDevice::GetLowestPrecisionRGBFloatFormat() const {
        uint64_t uVar1 = 6;
        if ((field_261 != '\0') || (uVar1 = 3, field_262 != '\0')) {
            return uVar1;
        }
        uVar1 = 1;
        if (field_263 == '\0') {
            uVar1 = 16;
        }
        return uVar1;
    }

    // 0x100c2dc50
    void RenderDevice::EvaluateDeviceProfiles() {
        auto this_00 = Instance();
        unsigned int uVar2 = this_00->GetWrapMode();
        field_464 = uVar2;
        unsigned long uVar4 = GetTotalGPUMemory();
        uVar2 = (unsigned int)(uVar4 >> 20);
        field_480 = uVar2;
        if (uVar2 == 0) {
            uVar2 = this_00->GetFont12pxBoldID();
            field_480 = uVar2;
        }
        field_468 = field_464;
        field_484 = field_480;
        int iVar3 = GetUIHeight();
        if ((iVar3 == 1) || (field_480 == 0)) {
            uVar2 = (unsigned int)(long)((float)field_468 * 0.33);
            field_484 = uVar2;
            field_468 = field_468 - uVar2;
        }
        field_472 = 4;
        m_gpuMemoryProfile = 4;
        long lVar5 = 0;
        do {
            if (field_468 < (unsigned int)(&DAT_100d997c4)[lVar5]) {
                field_472 = (int)lVar5;
                break;
            }
            lVar5 = lVar5 + 1;
        } while (lVar5 != 4);
        lVar5 = 0;
        do {
            if (field_484 < (unsigned int)(&DAT_100d997e4)[lVar5]) {
                m_gpuMemoryProfile = (int)lVar5;
                break;
            }
            lVar5 = lVar5 + 1;
        } while (lVar5 != 4);
        iVar3 = GetUIHeight();
        if ((iVar3 == 1) && (lVar5 = GetPrimaryRenderContext(), lVar5 != 0)) {
            iVar3 = ((RenderContext*)GetPrimaryRenderContext())->GetGLCoreProfileVerMajor();
            if (iVar3 < 4) {
                m_gpuMemoryProfile = 0;
                field_492 = 1;
            }
        }
        auto pLVar6 = logger::default_logger();
        pLVar6->Log(
            false, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            696,
            "Selected %s/%s CPU/GPU memory profiles with %u/%u Mb adjusted CPU/GPU memory (%u/%u Mb base CPU/GPU "
            "memory).",
            (&MEMORY_PROFILE_DEBUG_NAMES)[field_472], (&MEMORY_PROFILE_DEBUG_NAMES)[m_gpuMemoryProfile],
            (unsigned long)field_468, (unsigned long)field_484, (unsigned long)field_464, (unsigned long)field_480);
        if (render::operator<(m_gpuMemoryProfile, 1) != '\0') {
            pLVar6 = logger::default_logger();
            pLVar6->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                        "RenderDevice.cpp",
                        698, "Detected GPU with memory and/or shader limitations, disabling effects/textures.");
        }
    }

    // 0x100c2deb0
    uint64_t RenderDevice::GetCurrentMemoryZone() {
        scoped_lock<std::mutex> local_18(field_62238336);
        uint64_t uVar1 = field_1160.GetCurrentZone();
        return uVar1;
    }

    // 0x100c2df10
    void RenderDevice::EnableGPUMemoryRecorder(const char* str) {
        if (str == nullptr) {
            LogAssert("pRecorderName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      780, nullptr);
        }
        scoped_lock<std::mutex> local_250(field_62238336);
        fixed_string<char, 512> local_248(str);
        uint64_t uVar1 = field_60269944[local_248];
        uint64_t* puVar2 = &field_62199760[local_248];
        *puVar2 = uVar1;
    }

    // 0x100c2e170
    void RenderDevice::DisableGPUMemoryRecorder(const char* str) {
        ReturnValue local_268;
        rbtree_iterator<
            eastl::pair<eastl::fixed_string<char, _512> const,
                        eastl::fixed_map<eastl::fixed_string<char, _512>, ZoneObjectMemory, _48ul>*>,
            eastl::pair<eastl::fixed_string<char, _512> const,
                        eastl::fixed_map<eastl::fixed_string<char, _512>, ZoneObjectMemory, _48ul>*> const*,
            eastl::pair<eastl::fixed_string<char, _512> const,
                        eastl::fixed_map<eastl::fixed_string<char, _512>, ZoneObjectMemory, _48ul>*> const&>* local_260;

        if (str == nullptr) {
            LogAssert("pRecorderName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      791, nullptr);
        }
        fixed_string<char, 512> local_248(str);
        scoped_lock<std::mutex> local_258(field_62238336);
        auto local_250 = field_62199760.find(local_248);
        local_268.end();
        if (local_250 != local_268 != '\0') {
            new (&local_260) eastl::ListIterator(&local_250);
            local_268 = field_62199760.erase(local_260);
        }
    }

    // 0x100c2e3f0
    void RenderDevice::PrintToConsole(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone, int arg2) {
        if (gpuMemoryAllocatorZone->GetInclusiveAllocations() != 0) {
            gpuMemoryAllocatorZone->PrintToConsole(arg2);
            GPUMemoryAllocatorZone::ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::__115>(
                gpuMemoryAllocatorZone, (__115*)this);
        }
    }

    // 0x100c2e4c0
    void RenderDevice::ClearGPUDeviceMemoryTracking() {}

    // 0x100c56760
    void RenderDevice::~RenderDevice()::$_106::operator()() const {
        if (((field_0 + 456))->operator_cast_to_RenderContext_() != 0) {
            LogAssert("!m_currentThreadRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      41, nullptr);
        }
    }

    // 0x100c58fc0
    void RenderDevice::FinishRenderingAndLoseDevice()::$_107::operator()(RenderContext& renderContext) const {
        GetImmediateContext()->SetReadyState(1);
    }

    // 0x100c59710
    void RenderDevice::CreateSecondaryRenderContexts()::$_108::operator()() const {
        if (CreateSecondaryRenderContext(field_0) == '\0') {
            *field_8 = 0;
        }
        std::__atomic_base<int, true>::operator++();
    }

    // 0x100c5a770
    void RenderDevice::DestroySecondaryRenderContexts()::$_109::operator()() const {
        DestroySecondaryRenderContext(field_0);
    }

    // 0x100c5d590
    bool RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame*)::$_112::operator()(
        RenderDeviceOnEndFrame* renderDeviceOnEndFrame) const {
        return field_0 == renderDeviceOnEndFrame;
    }

    // 0x100c5d6c0
    bool RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame*)::$_113::operator()(
        RenderDeviceOnEndFrame* renderDeviceOnEndFrame) const {
        return field_0 == renderDeviceOnEndFrame;
    }

    // 0x100c5de90
    void RenderDevice::TriggerDeviceLoss()::$_114::operator()(RenderContext& renderContext) const {
        GetImmediateContext()->SetReadyState(1);
    }

    // 0x100c5eec0
    void RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*,
                                      int)::$_115::operator()(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone) const {
        PrintToConsole(*(RenderDevice**)this, gpuMemoryAllocatorZone, **(int**)(this + 8));
    }

} // namespace jag::render

// 0x100c2b850
void jag::render::RenderDevice::m_secondaryRenderContext(void) {
    ___tls_init();
    (*(void (*)(...))m_secondaryRenderContext)();
}
