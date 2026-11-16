// libs/hal/render/context/RenderContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderContext.h"

namespace jag::render {
    // 0x1000b9950: RenderContext::GetImmediateContextUnsafe() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100c13810
    bool RenderContext::IsLocked() const {
        if (ShouldDefer() != '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1614, nullptr);
        }
        return GetImmediateContext()->IsLocked();
    }

    // 0x100c193b0
    void DeferredFrameData::Clear() {
        uint8_t* this_00 = &field_112;
        long lVar1 = this_00->HeapBeginPtr();
        long lVar2 = this_00->end();
        do {
            if (lVar1 == lVar2) {
                field_152.clear();
                field_192.clear();
                field_232.clear();
                field_272.clear();
                field_80.clear();
                field_312.clear();
                field_368.clear();
                Clear();
                this_00->clear();
                return;
            }
            if (*(int*)(lVar1 + 16) == 1) {
                if (*(long*)(lVar1 + 8) == 0) {
                    LogAssert("scratchAlloc.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              47, nullptr);
                }
                aligned_dealloc(*(void**)(lVar1 + 8));
            }
            lVar1 = lVar1 + 24;
        } while (true);
    }

    // 0x100c19670
    RenderContext::RenderContext() : RenderDeviceCallback(false, 0) {
        allocator* allocator;

        new (m_immediateContext) ImmediateRenderContext();
        field_3184.unique_ptr<true, void>();
        new (&field_3192) std::atomic<bool>(true);
        field_3193 = 1;
        field_3194 = '\0';
        new (&field_3195) std::atomic<bool>(false);
        new (field_3200) Fence();
        new (field_3320) Fence();
        new (m_destroyRenderThreadFence) Fence();
        field_3560.unique_ptr<true, void>();
        field_3568 = nullptr;
        field_3576 = 0;
        new (&field_3584) eastl::vector<DeferredRenderFunction>();
        allocator = &local_40;
        new (&field_3616) eastl::hash_set<KeepAliveSharedPtrAndOwner>(*allocator);
        new (&field_3672) eastl::vector<void const*>();
        new (&field_3704)
            std::atomic<fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const*>(
                allocator);
        new (field_3712) Fence();
        field_3832 = 0;
        field_3836 = 0;
        new (&field_3837) std::atomic<bool>(false);
        new (&field_3840) eastl::hash_map<RenderResource const*, signed char>(local_40);
        new (&field_3896) std::mutex();
        field_3960 = 0;
        field_3964 = 0;
        new (&field_3968) eastl::vector<RenderResource const*>();
        new (&field_4000) std::mutex();
        new (&m_pCurrentState) RenderState();
        field_4144.unique_ptr<true, void>();
        field_4152 = 0;
        field_4153 = 0;
    }

    // 0x100c19a30
    RenderContext::~RenderContext() {
        long lVar2 = GetDesc();
        if (*(char*)(lVar2 + 10) == '\0') {
            if ((&field_3560)->operator_cast_to_bool()) {
                LogAssert("GetDesc().m_SecondaryContext || !m_deferredFrames",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          72, nullptr);
            }
        }
        lVar2 = GetDesc();
        if (*(char*)(lVar2 + 11) == '\0') {
            if ((&field_3184)->operator_cast_to_bool()) {
                LogAssert("!m_renderThread",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          84, nullptr);
            }
            m_immediateContext->Destroy();
        } else {
            StopRenderThread();
            if ((&field_3184)->operator_cast_to_bool()) {
                field_3184.operator->();
                std::thread::join();
            }
        }
        field_4144.~unique_ptr();
        (&field_4000)->~mutex();
        field_3968.~vector();
        (&field_3896)->~mutex();
        field_3840.~hash_map();
        field_3712->~Fence();
        field_3672.~vector();
        field_3616.~hash_set();
        field_3584.~vector();
        field_3560.~unique_ptr();
        m_destroyRenderThreadFence->~Fence();
        field_3320->~Fence();
        field_3200->~Fence();
        field_3184.~unique_ptr();
        m_immediateContext->~ImmediateRenderContext();
    }

    // 0x100c19cb0
    void RenderContext::StopRenderThread() {
        long lVar2;
        long* plVar3;

        uint8_t* this_00 = &field_3560;
        if (this_00->operator_cast_to_bool() != '\0') {
            lVar2 = GetDesc();
            if (*(char*)(lVar2 + 11) == '\0') {
                LogAssert("GetDesc().m_DeferredContext",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          115, nullptr);
            }
            field_3192 = false;
            plVar3 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar3 + 80))(plVar3);
            field_3200->Wait();
            this_00->reset(nullptr);
            field_3320->Signal();
        }
    }

    // 0x100c19dc0
    void RenderContext::Shutdown() {
        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 10) != '\0') {
            LogAssert("!GetDesc().m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      92, nullptr);
        }
        uint8_t* this_00 = &field_3837;
        Singleton<RenderDevice>* this_02 = (Singleton<RenderDevice>*)this_00;
        *this_00 = true;
        ((RenderDevice*)this_02->Instance())->TriggerDeviceLoss();
        lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) == '\0') {
            m_immediateContext->DestroyRenderingResources();
        } else {
            StopRenderThread();
        }
        *this_00 = false;
    }

    // 0x100c1a230
    bool RenderContext::Init(const RenderContextDesc& renderContextDesc) {
        char cVar1;
        type* arg2;
        bool bVar2;
        ReturnValue local_48;
        RenderContextDesc* local_40;
        ReturnValue local_38;

        if (*(char*)((long)&renderContextDesc.field_8 + 3) == '\0') {
            ((RenderDevice*)Instance())->OnContextPreCreate(*this);
            m_immediateContext->Create(renderContextDesc);
            PostInit(renderContextDesc);
            bVar2 = true;
        } else {
            cVar1 = this_thread::IsMainThread();
            if (!cVar1) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          133, nullptr);
            }
            local_48 = std::make_unique<SwappingDoubleBuffer<DeferredFrameData>>();
            (&field_3560)->operator=(&local_48);
            local_48 = (ReturnValue)this;
            local_40 = renderContextDesc;
            std::make_unique<std::thread, (RenderContextDesc const&)->Init()::__2>(&local_38, (__2*)&local_48);
            field_3184 = local_38;
            cVar1 = (&field_3195)->operator_cast_to_bool();
            if (!cVar1) {
                do {
                    BaseApp::GetAppInstance()->ExecuteMainThreadEvents();
                    local_38._0_4_ = 500;
                    local_48.duration<int>(local_38, arg2);
                    std::this_thread::sleep_for((duration*)&local_48);
                    cVar1 = (&field_3195)->operator_cast_to_bool();
                } while (!cVar1);
            }
            cVar1 = field_3194;
            if (cVar1) {
                PostInit(renderContextDesc);
            }
            bVar2 = cVar1;
            field_3194 = cVar1;
        }
        return bVar2;
    }

    // 0x100c1a600
    void RenderContext::RunSynchronouslyOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback,
        bool arg2) {
        int iVar2;
        Logger* pLVar3;
        char* local_188;
        SyncFence* local_180;
        function<void_(RenderContext&), _128ul, _16ul, _(fixedfunction::Methods) 0>* local_178;
        RenderContext* local_170;
        SyncFence* local_168;
        SyncFence local_160;
        SyncFence local_158;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_148[160];
        Fence local_a8;
        long local_30;

        char local_149 = arg2;
        if (!(ShouldDefer())) {
            new (local_148) lock_guard<RenderContext>(*this);
            fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
            operator()((
                function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)callback);
        } else {
            if (!(this_thread::IsMainThread())) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          162, nullptr);
            }
            if (!((&field_3560)->operator_cast_to_bool())) {
                pLVar3 = logger::default_logger();
                pLVar3->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            221,
                            "m_deferredFrames was null during RunSynchronouslyOnRenderThread - function discarded. "
                            "This is ok during shutdown");
            } else {
                local_a8 = Fence();
                local_160 = SyncFence();
                local_158 = SyncFence();
                iVar2 = GetReadyState();
                if (iVar2 == 1) {
                    local_149 = '\0';
                }
                if (local_149 != '\0') {
                    if (!(local_160.Create())) {
                        pLVar3 = logger::default_logger();
                        pLVar3->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/RenderContext.cpp",
                                    186,
                                    "Failed to create sync fence for main thread side of synchronous render function");
                    }
                }
                local_188 = &local_149;
                local_180 = &local_160;
                local_178 = callback;
                local_170 = this;
                local_168 = &local_158;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderContext::RunSynchronouslyOnRenderThread(
                        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&,
                        bool)::__3,
                    void>(local_148, (__3*)&local_188);
                RunImmediatelyOnRenderThread(*local_148);
                field_3712->Wait();
                if (local_149 != '\0') {
                    if (local_158.IsCreated()) {
                        local_158.WaitServer();
                    }
                }
            }
        }
    }

    // 0x100c1a8d0
    void RenderContext::RunImmediatelyOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        long* plVar3;
        memory_order memory_order;

        if (!(ShouldDefer())) {
            fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
            operator()((
                function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)callback);
        } else {
            if (!(this_thread::IsMainThread())) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          236, nullptr);
            }
            field_3712->Reset();
            if (field_3704.exchange(callback, memory_order) != 0) {
                LogAssert("pPreviousFunction == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          242, nullptr);
            }
            plVar3 = (long*)field_3560.operator->();
            (**(void (**)(...))(*plVar3 + 56))(plVar3);
        }
    }

    // 0x100c1a9b0
    auto RenderContext::AllocateScratch(unsigned long arg1, unsigned long arg2) {
        auto result;
        Logger* pLVar4;

        if (ShouldDefer() == '\0') {
            pLVar4 = logger::default_logger();
            pLVar4->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                "RenderContext.cpp",
                285,
                "RenderContext::AllocateScratch: Allocating scratch is only allowed from deferred render contexts.");
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      286, nullptr);
        }
        if (field_3568 == nullptr) {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        278, "RenderContext::AllocateScratch: Allocating scratch is only allowed during begin/end");
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      279, nullptr);
        }
        ReturnValue* pRVar2 = (ReturnValue*)((vector<Scratch>*)&field_3568[2].field_16)->push_back();
        *pRVar2 = (ReturnValue)arg1;
        ReturnValue RVar3 = (ReturnValue)field_3568->AlignedAlloc(arg1, arg2, 0);
        pRVar2[1] = RVar3;
        *(uint32_t*)(pRVar2 + 2) = 0;
        if (RVar3 == (ReturnValue)0) {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        268,
                        "RenderContext::AllocateScratch: Out of scratch memory for alloc of %zu bytes. Falling back to "
                        "global heap allocation.",
                        arg1);
            RVar3 = (ReturnValue)aligned_alloc(arg1, arg2);
            pRVar2[1] = RVar3;
            *(uint32_t*)(pRVar2 + 2) = 1;
            RVar3 = pRVar2[1];
        } else {
            RVar3 = pRVar2[1];
        }
        if (RVar3 == (ReturnValue)0) {
            LogAssert("scratch.m_data != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      273, nullptr);
        }
        &result[2] = pRVar2[2];
        RVar3 = pRVar2[1];
        result = *pRVar2;
        &result[1] = RVar3;
        return result;
    }

    // 0x100c1abe0
    void RenderContext::RunOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        vector<DeferredRenderFunction>* this_00;

        if (!(ShouldDefer())) {
            fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
            operator()((
                function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)callback);
        } else {
            if (!(this_thread::IsMainThread())) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          295, nullptr);
            }
            if (field_3568 == nullptr) {
                this_00 = (vector<DeferredRenderFunction>*)&field_3584;
            } else {
                this_00 = (vector<DeferredRenderFunction>*)&field_3568[1].field_32;
            }
            this_00->emplace_back<
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&>(callback);
        }
    }

    // 0x100c1acd0
    void RenderContext::RunImmediateRenderFunction(bool arg1) {
        function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>* this_01;
        memory_order memory_order;
        lock_guard<ImmediateRenderContext> local_28;

        auto this_00 = Instance();
        if (!(this_00->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      314, nullptr);
        }
        this_01 = (function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
                      field_3704.exchange(0, memory_order);
        if (this_01 !=
            (function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)0) {
            local_28 = lock_guard<ImmediateRenderContext>(*m_immediateContext);
            fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::operator()(this_01);
            field_3836 = 1;
            field_3712->Signal();
        }
        if (!arg1) {
            UnlockDeadObjectsMutex();
        }
    }

    // 0x100c1ad90
    void RenderContext::UnlockDeadObjectsMutex() const {
        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) == '\0') {
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1550, nullptr);
        }
        if (field_3960 != '\0') {
            std::mutex::unlock();
            field_3960 = 0;
        }
    }

    // 0x100c1adf0
    void RenderContext::RenderThread(const RenderContextDesc& renderContextDesc) {
        unsigned int arg1;

        this_thread::SetThreadName("Deferred Render");
        auto local_48 = threading::GetNumCoresByAffinity();
        int* piVar1 = &local_48[1];
        if (*piVar1 == 1) {
            piVar1 = &local_48[2];
            arg1 = 2;
            if (*piVar1 != 0)
                goto LAB_100c1ae4c;
        }
        arg1 = 1;
    LAB_100c1ae4c:
        this_thread::SetAffinity(arg1);
        if (*(char*)((long)&renderContextDesc.field_8 + 3) == '\0') {
            LogAssert("desc.m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      352, nullptr);
        }
        BucketManager::Init(16, 0);
        BucketManager::CreateBucket(4, 4, 4);
        BucketManager::CreateBucket(8, 4, 8);
        BucketManager::CreateBucket(16, 4, 16);
        BucketManager::CreateBucket(32, 4, 32);
        BucketManager::CreateBucket(48, 4, 16);
        BucketManager::CreateBucket(64, 4, 64);
        BucketManager::CreateBucket(96, 4, 32);
        BucketManager::CreateBucket(128, 4, 64);
        BucketManager::CreateBucket(512, 4, 64);
        BucketManager::CreateBucket(1024, 4, 64);
        BucketManager::CreateBucket(2048, 4, 64);
        BucketManager::CreateBucket(4096, 12, 64);
        ((RenderDevice*)4096->Instance())->OnContextPreCreate(*this);
        uint8_t* this_00 = m_immediateContext;
        this_00->Create(renderContextDesc);
        field_3194 = '\x01';
        field_3195 = true;
        auto local_30 = std::make_unique<FPSCounter>();
        field_4144 = local_30;
        RenderThreadMainLoop();
        ResetKeepAliveSharedPtrs(0);
        this_00->DestroyRenderingResources();
        field_3200->Signal();
        field_3320->Wait();
        this_00->Destroy();
        BucketManager::PrintMetrics();
        m_destroyRenderThreadFence->Signal();
    }

    // 0x100c1b0c0
    void RenderContext::RenderThreadMainLoop() {
        long* plVar2;
        long lVar3;
        Logger* this_01;
        function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>* this_02;
        function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>* pfVar4;
        Layout* this_03;
        lock_guard<ImmediateRenderContext> local_38;

        uint8_t* this_00 = &field_3192;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (cVar1) {
            do {
                if (field_3960 != '\0') {
                    LogAssert("!m_isDeadObjectsMutexLocked",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              403, nullptr);
                }
                RunImmediateRenderFunction(false);
                field_3576 = 0;
                do {
                    cVar1 = this_00->operator_cast_to_bool();
                    if (!cVar1)
                        break;
                    if (field_3960 != '\0') {
                        LogAssert("!m_isDeadObjectsMutexLocked",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/RenderContext.cpp",
                                  411, nullptr);
                    }
                    plVar2 = (long*)field_3560.operator->();
                    lVar3 = (**(void (**)(...))(*plVar2 + 24))(plVar2);
                    field_3576 = lVar3;
                    if ((lVar3 == 0) && (cVar1 = this_00->operator_cast_to_bool(), cVar1)) {
                        RunImmediateRenderFunction(false);
                    }
                } while (field_3576 == 0);
                cVar1 = this_00->operator_cast_to_bool();
                if (!cVar1) {
                    return;
                }
                if (field_3576 == 0) {
                    LogAssert("m_readFrame",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              425, nullptr);
                }
                local_38 = lock_guard<ImmediateRenderContext>(*m_immediateContext);
                cVar1 = ((field_3576 + 144))->IsCreated();
                if (!cVar1) {
                    this_01 = logger::default_logger();
                    this_01->Log(false, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/RenderContext.cpp",
                                 442, "readFrame->m_syncFence not created, discarding frame.");
                } else {
                    ((field_3576 + 144))->WaitServer();
                    ((field_3576 + 144))->Destroy();
                    cVar1 = this_00->operator_cast_to_bool();
                    if (!cVar1) {
                    LAB_100c1b37b:
                        return;
                    }
                    this_03 = (Layout*)(field_3576 + 80);
                    this_02 =
                        (function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
                            this_03->HeapBeginPtr();
                    pfVar4 =
                        (function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
                            this_03->end();
                    while ((this_02 != pfVar4 && (cVar1 = this_00->operator_cast_to_bool(), cVar1))) {
                        RunImmediateRenderFunction(true);
                        cVar1 = this_00->operator_cast_to_bool();
                        if (!cVar1)
                            break;
                        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                                (fixedfunction::Methods)0>::operator()(this_02);
                        this_02 = this_02 + 160;
                    }
                    UnlockDeadObjectsMutex();
                    cVar1 = this_00->operator_cast_to_bool();
                    if (!cVar1)
                        goto LAB_100c1b37b;
                    if (field_3193 != '\0') {
                        m_immediateContext->Present();
                    }
                }
                field_3576 = 0;
                plVar2 = (long*)field_3560.operator->();
                (**(void (**)(...))(*plVar2 + 32))(plVar2);
                UnlockDeadObjectsMutex();
                cVar1 = this_00->operator_cast_to_bool();
            } while (cVar1);
        }
    }

    // 0x100c1b3b0
    void RenderContext::ResetKeepAliveSharedPtrs(OwnerThread ownerThread) {
        unsigned long uVar3;
        unsigned long uVar4;

        uint8_t* this_00 = &field_3560;
        long* plVar1 = (long*)(*this_00).operator->();
        long lVar2 = (**(void (**)(...))(*plVar1 + 64))(plVar1);
        if (lVar2 != 0) {
            uVar4 = 0;
            do {
                plVar1 = (long*)(*this_00).operator->();
                lVar2 = (**(void (**)(...))(*plVar1 + 72))(plVar1, uVar4);
                eastl::erase_if<KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                                eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false,
                                (OwnerThread)->ResetKeepAliveSharedPtrs()::__92>(
                    (hash_set<KeepAliveSharedPtrAndOwner>*)(lVar2 + 312), (__92*)(unsigned long)ownerThread);
                uVar4 = uVar4 + 1;
                plVar1 = (long*)(*this_00).operator->();
                uVar3 = (**(void (**)(...))(*plVar1 + 64))(plVar1);
            } while (uVar4 < uVar3);
        }
        eastl::erase_if<KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                        eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false,
                        (OwnerThread)->ResetKeepAliveSharedPtrs()::__93>(
            (hash_set<KeepAliveSharedPtrAndOwner>*)&field_3616, (__93*)(unsigned long)ownerThread);
    }

    // 0x100c1b440
    void RenderContext::Begin() {
        BeginInternal(false);
    }

    // 0x100c1b450
    uint64_t RenderContext::BeginInternal(bool arg1) {
        uint8_t* puVar1;
        int iVar3;
        long lVar4;
        long* plVar5;
        Allocator* pAVar6;
        shared_ptr* this_00;
        DeferredRenderFunction* deferredRenderFunction1;
        DeferredRenderFunction* deferredRenderFunction2;
        back_insert_iterator<eastl::vector<DeferredRenderFunction> _>* back_insert_iterator;
        shared_ptr<void const>* arg1_01;
        uint64_t* puVar7;
        uint64_t* puVar8;
        uint64_t uVar9;
        uint8_t auVar10[16];
        uint8_t local_68[16];
        uint8_t local_58[16];
        KeepAliveSharedPtrAndOwner local_48;

        bool cVar2 = this_thread::IsMainThread();
        if (!cVar2) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      504, nullptr);
        }
        if (field_4140 != '\0') {
            LogAssert("!m_currentState.m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      505, nullptr);
        }
        if ((arg1) || (iVar3 = m_immediateContext->GetReadyState(), iVar3 == 0)) {
            lVar4 = GetDesc();
            if (*(char*)(lVar4 + 11) != '\0') {
                plVar5 = (long*)field_3560.operator->();
                pAVar6 = (Allocator*)(**(void (**)(...))(*plVar5 + 40))(plVar5);
                field_3568 = pAVar6;
                local_58 = pAVar6[6].field_24.begin();
                local_68 = pAVar6[6].field_24.end();
                cVar2 = *local_58 != *local_68;
                if (cVar2) {
                    do {
                        this_00 = (shared_ptr*)local_58->HeapBeginPtr();
                        cVar2 = shared_ptr::operator_cast_to_bool(this_00);
                        if ((cVar2) && (*(int*)(this_00 + 1) == 0)) {
                            eastl::hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                                             eastl::use_self<KeepAliveSharedPtrAndOwner>,
                                             eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                                             eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                                             true>::insert(local_48);
                        }
                        ++*local_58;
                        cVar2 = *local_58 != *local_68;
                    } while (cVar2);
                }
                field_3568->Clear();
                cVar2 = ShouldDefer();
                if (!cVar2) {
                    field_3193 = 1;
                    field_4152 = 0;
                    field_4153 = 0;
                } else if (field_3568 == nullptr) {
                    local_48._0_8_ = this;
                    (&field_3584)->emplace_back<RenderContext::BeginInternal(bool)::__5>(&local_48);
                } else {
                    local_48._0_8_ = this;
                    (&field_3568[1].field_32)->emplace_back<RenderContext::BeginInternal(bool)::__4>(&local_48);
                }
            }
            cVar2 = ShouldDefer();
            if (!cVar2) {
                m_immediateContext->Begin();
            } else if (field_3568 == nullptr) {
                local_48._0_8_ = this;
                (&field_3584)->emplace_back<RenderContext::BeginInternal(bool)::__7>(&local_48);
            } else {
                local_48._0_8_ = this;
                (&field_3568[1].field_32)->emplace_back<RenderContext::BeginInternal(bool)::__6>(&local_48);
            }
            lVar4 = GetDesc();
            if (*(char*)(lVar4 + 11) != '\0') {
                cVar2 = ShouldDefer();
                if (!cVar2) {
                    ((FPSCounter*)field_4144.operator->())
                        ->RecordDrawStartTime(SystemTimer::GetTimeNS<std::chrono::steady_clock>());
                } else if (field_3568 == nullptr) {
                    local_48._0_8_ = this;
                    (&field_3584)->emplace_back<RenderContext::BeginInternal(bool)::__9>(&local_48);
                } else {
                    local_48._0_8_ = this;
                    (&field_3568[1].field_32)->emplace_back<RenderContext::BeginInternal(bool)::__8>(&local_48);
                }
                cVar2 = ShouldDefer();
                if (!cVar2) {
                    CleanUpDeadObjects();
                    pAVar6 = field_3568;
                } else if (field_3568 == nullptr) {
                    local_48._0_8_ = this;
                    (&field_3584)->emplace_back<RenderContext::BeginInternal(bool)::__11>(&local_48);
                    pAVar6 = field_3568;
                } else {
                    local_48._0_8_ = this;
                    (&field_3568[1].field_32)->emplace_back<RenderContext::BeginInternal(bool)::__10>(&local_48);
                    pAVar6 = field_3568;
                }
                if (pAVar6 == nullptr) {
                    LogAssert("m_writeFrame",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              543, nullptr);
                }
                puVar1 = &field_3584;
                deferredRenderFunction1 = (DeferredRenderFunction*)puVar1->HeapBeginPtr();
                deferredRenderFunction2 = (DeferredRenderFunction*)puVar1->end();
                back_insert_iterator =
                    (back_insert_iterator<eastl::vector<DeferredRenderFunction>
                                              _>*)((rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                                           eastl::less<eastl::string>, eastl::allocator,
                                                           eastl::use_first<eastl::pair<eastl::stringconst, bool>>,
                                                           true, true>*)&field_3568[1]
                                                       .field_32)
                        ->end();
                eastl::copy<DeferredRenderFunction*,
                            eastl::back_insert_iterator<eastl::vector<DeferredRenderFunction>>>(
                    deferredRenderFunction1, deferredRenderFunction2, back_insert_iterator);
                puVar1->clear();
                puVar1 = &field_3616;
                local_48._0_16_ = puVar1->begin();
                auVar10 = puVar1->end();
                local_58 = auVar10;
                cVar2 = local_48 != *local_58;
                if (cVar2) {
                    do {
                        arg1_01 = (shared_ptr<void const>*)local_48.HeapBeginPtr();
                        KeepAliveSharedPtr(*arg1_01, *(OwnerThread*)(arg1_01 + 16));
                        ++local_48;
                        cVar2 = local_48 != *local_58;
                    } while (cVar2);
                }
                puVar1->clear();
                puVar1 = &field_3672;
                puVar7 = (uint64_t*)puVar1->HeapBeginPtr();
                puVar8 = (uint64_t*)puVar1->end();
                for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
                    AddAliveObject(*puVar7);
                }
                puVar1->clear();
            }
            field_4140 = 1;
            uVar9 = 1;
        } else {
            uVar9 = 0;
        }
        return uVar9;
    }

    // 0x100c1bea0
    void RenderContext::CleanUpDeadObjects() {
        unsigned int uVar2;
        Logger* this_02;
        __12* in_RSI;

        if (!(((RenderDevice*)Instance())->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      573, nullptr);
        }
        long lVar3 = GetDesc();
        if (*(char*)(lVar3 + 11) == '\0') {
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      574, nullptr);
        }
        LockDeadObjectsMutex();
        uint8_t* this_00 = &field_3840;
        if (!(this_00->empty())) {
            uVar2 = field_3964 + 1;
            field_3964 = uVar2;
            if (1000 < uVar2) {
                this_02 = logger::default_logger();
                in_RSI = nullptr;
                this_02->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "RenderContext.cpp",
                             581,
                             "Dead objects are being recorded every frame. This will significantly diminish the "
                             "performance benefits of deferred rendering. See RenderResource.h");
            }
            eastl::erase_if<RenderResource const*, signed char, eastl::hash<RenderResource const*>,
                            eastl::equal_to<RenderResource const*>, eastl::allocator, false,
                            RenderContext::CleanUpDeadObjects()::__12>(
                (hash_map<RenderResource const*, signed char>*)this_00, in_RSI);
        } else {
            field_3964 = 0;
        }
        scoped_lock<std::mutex> local_30(field_4000);
        uint8_t* this_03 = &field_3968;
        auto arg1 = this_03->HeapBeginPtr();
        auto plVar4 = this_03->end();
        for (; arg1 != plVar4; arg1 = arg1 + 1) {
            this_00->erase(*arg1);
        }
        this_03->clear();
    }

    // 0x100c1c050
    void RenderContext::KeepAliveSharedPtr(const shared_ptr<void const>& arg1, OwnerThread ownerThread) {
        Allocator* pAVar1;
        ReturnValue local_58;
        KeepAliveSharedPtrAndOwner local_40;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1441, nullptr);
        }
        if (!(arg1.operator_cast_to_bool())) {
            LogAssert("sharedPtr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1442, nullptr);
        }
        long lVar3 = GetDesc();
        if (*(char*)(lVar3 + 11) != '\0') {
            if ((&field_3192)->operator_cast_to_bool()) {
                AddAliveObject((void*)arg1.end());
                pAVar1 = field_3568;
                local_40.field_16 = ownerThread;
                if (pAVar1 == nullptr) {
                    local_40 = shared_ptr(arg1);
                    local_58 = field_3616.insert(local_40);
                } else {
                    local_40 = shared_ptr(arg1);
                    local_58 = pAVar1[6].field_24.insert(local_40);
                }
            }
        }
    }

    // 0x100c1c180
    void RenderContext::AddAliveObject(const void* arg1) {
        void* local_30[3];

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1426, nullptr);
        }
        if (arg1 == nullptr) {
            LogAssert("pAlive",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1427, nullptr);
        }
        if (field_3568 == nullptr) {
            field_3672.push_back(arg1);
        } else {
            eastl::hashtable<void const*, void const*, BucketAllocatorEASTL, eastl::use_self<void const*>,
                             eastl::equal_to<void const*>, eastl::hash<void const*>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                             true>::insert(*local_30);
        }
    }

    // 0x100c1c220
    void RenderContext::LockDeadObjectsMutex() const {
        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) == '\0') {
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1538, nullptr);
        }
        if (field_3960 == '\0') {
            std::mutex::lock();
            field_3960 = 1;
        }
    }

    // 0x100c1c350
    void RenderContext::End() {
        if (field_4140 == '\0') {
            LogAssert("m_currentState.m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      603, nullptr);
        }
        uint64_t local_38 = 0;
        uint64_t uStack_30 = 0;
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        uint64_t local_68 = 0;
        uint64_t uStack_60 = 0;
        uint64_t local_78 = 0;
        uint64_t uStack_70 = 0;
        uint64_t local_88 = 0;
        uint64_t uStack_80 = 0;
        uint64_t local_98 = 0;
        uint64_t uStack_90 = 0;
        uint64_t local_a8 = 0;
        uint64_t uStack_a0 = 0;
        uint64_t local_b8 = 0;
        uint64_t uStack_b0 = 0;
        uint64_t local_c8 = 0;
        uint64_t uStack_c0 = 0;
        new (&local_c8) math::Vector2T();
        EndInternal(local_c8);
    }

    // 0x100c1c430
    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        Allocator* pAVar1;
        unsigned int uVar3;
        FPSCounter* pFVar5;
        __17* arg2;
        long* plVar6;
        RenderContext* local_30;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      609, nullptr);
        }
        field_4140 = 0;
        if (!(ShouldDefer())) {
            m_immediateContext->End();
        } else if (field_3568 == nullptr) {
            local_30 = this;
            (&field_3584)
                ->emplace_back<RenderContext::EndInternal(
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__14>(&local_30);
        } else {
            local_30 = this;
            (&field_3568[1].field_32)
                ->emplace_back<RenderContext::EndInternal(
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__13>(&local_30);
        }
        long lVar4 = GetDesc();
        if (*(char*)(lVar4 + 11) == '\0') {
            if (callback.operator_cast_to_bool()) {
                fixedfunction::function<
                    void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                    (fixedfunction::Methods)0>::operator()((function<void(graphicutils::TextureAtlasSlot const&), 64ul,
                                                                     16ul, (fixedfunction::Methods)0>*)callback);
            }
        } else {
            if (!(ShouldDefer())) {
                pFVar5 = (FPSCounter*)field_4144.operator->();
                arg2 = (__17*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                pFVar5->RecordDrawEndTime((unsigned long long)arg2);
                pFVar5 = (FPSCounter*)field_4144.operator->();
                pFVar5->UpdateFPSCounter();
                eastl::erase_if<
                    KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                    eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false,
                    (fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
                        ->EndInternal()::__17>((hash_set<KeepAliveSharedPtrAndOwner>*)(field_3576 + 312), arg2);
            } else if (field_3568 == nullptr) {
                local_30 = this;
                (&field_3584)
                    ->emplace_back<RenderContext::EndInternal(
                        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                                (fixedfunction::Methods)0> const&)::__16>(&local_30);
            } else {
                local_30 = this;
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::EndInternal(
                        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                                (fixedfunction::Methods)0> const&)::__15>(&local_30);
            }
            if (callback.operator_cast_to_bool()) {
                RunOnRenderThread(callback);
            }
            if (field_3836 == '\0') {
                field_3832 = 0;
                pAVar1 = field_3568;
            } else {
                field_3836 = 0;
                uVar3 = field_3832 + 1;
                field_3832 = uVar3;
                if (1000 < uVar3) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              633,
                              "Immediate render functions are being submitted every frame. This will significantly "
                              "diminish the performance benefits of deferred rendering.");
                }
                pAVar1 = field_3568;
            }
            if (pAVar1 == nullptr) {
                LogAssert("m_writeFrame",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          640, nullptr);
            }
            ((field_3568 + 3))->Create();
            field_3568 = nullptr;
            plVar6 = (long*)field_3560.operator->();
            (**(void (**)(...))(*plVar6 + 48))(plVar6);
        }
    }

    // 0x100c1ca00
    void RenderContext::Present() {
        __18 local_18;

        long lVar2 = GetDesc();
        if ((*(char*)(lVar2 + 11) == '\0') || (field_3568 != nullptr)) {
            if (ShouldDefer() == '\0') {
                m_immediateContext->Present();
            } else {
                local_18.field_0 = (long)this;
                if (field_3568 == nullptr) {
                    (&field_3584)->emplace_back<RenderContext::Present()::__19>(&local_18);
                } else {
                    (&field_3568[1].field_32)->emplace_back<RenderContext::Present()::__18>(&local_18);
                }
            }
        }
    }

    // 0x100c1cc00
    void RenderContext::SetInputAssemblerState(const InputAssemblerState* inputAssemblerState) {
        RenderContext* local_18;

        if (inputAssemblerState != nullptr) {
            LogAssert("pIAState == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      668,
                      "InputAssemblerStates should be used via DrawCallState - only SetInputAssemblerState(nullptr) is "
                      "allowed");
        }
        if (ShouldDefer() == '\0') {
            m_immediateContext->SetInputAssemblerState(nullptr);
        } else {
            local_18 = this;
            if (field_3568 == nullptr) {
                (&field_3584)
                    ->emplace_back<RenderContext::SetInputAssemblerState(InputAssemblerState const*)::__21>(&local_18);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetInputAssemblerState(InputAssemblerState const*)::__20>(&local_18);
            }
        }
    }

    // 0x100c1ce10
    void RenderContext::BindDrawCallState(DrawCallState& drawCallState) {
        Allocator* pAVar1;
        uint64_t uVar2;
        int arg2;
        int arg3;
        int arg4;
        OutputMergerState* pOVar4;
        long lVar5;
        vector<Viewport, eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true>>* this_01;
        uint64_t* puVar6;
        uint64_t* puVar7;
        LoginManager* pLVar8;
        vector<math::Rect<unsigned int>, eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true>>* this_03;
        Minimap* this_04;
        InputAssemblerState* pIVar10;
        RenderPipelineState* pRVar11;
        DrawCallState local_a0;
        int local_6c;
        uint8_t local_68[8];
        DrawCallState DStack_60;

        if (!(ShouldDefer())) {
            m_immediateContext->BindDrawCallState(drawCallState);
        } else {
            if (!(drawCallState.HaveManager())) {
                LogAssert("drawCallState.HasOutputMergerState()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          677, nullptr);
            }
            pOVar4 = drawCallState.GetOutputMergerState();
            lVar5 =
                ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)pOVar4->SSOBeginPtr())->size();
            if (lVar5 == 0) {
                DStack_60.field_24._0_8_ = 0;
                DStack_60.field_24._8_8_ = 0;
                DStack_60.m_pRenderPipelineState = nullptr;
                DStack_60.m_pOutputMergerState = nullptr;
                local_68 = (uint8_t[8])0;
                DStack_60.m_pInputAssemblerState = nullptr;
                lVar5 = 0;
                do {
                    new ((local_68 + lVar5)) Viewport(0, 0, 0, 0, 0.0, 1.0);
                    lVar5 = lVar5 + 24;
                } while (lVar5 != 48);
                field_4104 = DStack_60.field_24._0_8_;
                field_4112 = DStack_60.field_24._8_8_;
                field_4088 = DStack_60.m_pRenderPipelineState;
                field_4096 = DStack_60.m_pOutputMergerState;
                field_4072 = local_68;
                field_4080 = DStack_60.m_pInputAssemblerState;
            } else {
                pOVar4 = drawCallState.GetOutputMergerState();
                this_01 =
                    (vector<Viewport, eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true>>*)pOVar4->SSOBeginPtr();
                puVar6 = (uint64_t*)this_01->front();
                puVar7 = &field_4072[0];
                uVar2 = puVar6[1];
                *puVar7 = *puVar6;
                puVar7[1] = uVar2;
                puVar7[2] = puVar6[2];
            }
            pLVar8 = (LoginManager*)drawCallState.GetOutputMergerState();
            lVar5 = ((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         pLVar8->GetDevCredentialsOutputDirectory())
                        ->size();
            if (lVar5 == 0) {
                field_4120 = false;
                new (local_68) shared_ptr();
            } else {
                field_4120 = true;
                pLVar8 = (LoginManager*)drawCallState.GetOutputMergerState();
                this_03 = (vector<math::Rect<unsigned int>, eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true>>*)
                              pLVar8->GetDevCredentialsOutputDirectory();
                this_04 = (Minimap*)this_03->front();
                local_6c = this_04->GetX();
                arg2 = this_04->GetZ();
                arg3 = this_04->GetPos();
                arg4 = this_04->GetLevel();
                new (local_68) oldscape::dash3d::GridRect(local_6c, arg2, arg3, arg4);
            }
            field_4124 = *local_68;
            pOVar4 = drawCallState.GetOutputMergerState();
            m_pCurrentState = pOVar4->GetRenderTargets();
            if (drawCallState.operator_cast_to_bool()) {
                pIVar10 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
                pIVar10->OnBind();
            }
            if (!(IsContextThread())) {
                local_a0 = DrawCallState();
                if (drawCallState.operator_cast_to_bool()) {
                    pAVar1 = field_3568;
                    pIVar10 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
                    pIVar10 = pAVar1[3].field_8.Create<InputAssemblerState&>(*pIVar10);
                    local_a0.SetInputAssemblerState(pIVar10);
                }
                if (drawCallState.operator_cast_to_bool()) {
                    pAVar1 = field_3568;
                    pRVar11 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
                    pRVar11 = ((pAVar1 + 4))->Create<RenderPipelineState&>(*pRVar11);
                    local_a0.SetRenderPipelineState(pRVar11);
                }
                pAVar1 = field_3568;
                pOVar4 = drawCallState.GetOutputMergerState();
                pOVar4 = pAVar1[5].field_32.Create<OutputMergerState&>(*pOVar4);
                local_a0.SetOutputMergerState(pOVar4);
                if (!(ShouldDefer())) {
                    BindDrawCallStateInternal(local_a0);
                } else {
                    pAVar1 = field_3568;
                    if (pAVar1 == nullptr) {
                        local_68 = (uint8_t[8])this;
                        DStack_60 = DrawCallState(local_a0);
                        (&field_3584)->emplace_back<RenderContext::BindDrawCallState(DrawCallState&)::__25>(local_68);
                        BindDrawCallState(DrawCallState&)::$_25::~__25((__25*)local_68);
                    } else {
                        local_68 = (uint8_t[8])this;
                        DStack_60 = DrawCallState(local_a0);
                        pAVar1[1].field_32.emplace_back<RenderContext::BindDrawCallState(DrawCallState&)::__24>(
                            local_68);
                        BindDrawCallState(DrawCallState&)::$_24::~__24((__24*)local_68);
                    }
                }
            } else {
                if (!(ShouldDefer())) {
                    BindDrawCallStateInternal(drawCallState);
                } else {
                    pAVar1 = field_3568;
                    if (pAVar1 == nullptr) {
                        local_68 = (uint8_t[8])this;
                        DStack_60 = DrawCallState(drawCallState);
                        (&field_3584)->emplace_back<RenderContext::BindDrawCallState(DrawCallState&)::__23>(local_68);
                        BindDrawCallState(DrawCallState&)::$_23::~__23((__23*)local_68);
                    } else {
                        local_68 = (uint8_t[8])this;
                        DStack_60 = DrawCallState(drawCallState);
                        pAVar1[1].field_32.emplace_back<RenderContext::BindDrawCallState(DrawCallState&)::__22>(
                            local_68);
                        BindDrawCallState(DrawCallState&)::$_22::~__22((__22*)local_68);
                    }
                }
            }
            pOVar4 = drawCallState.GetOutputMergerState();
            pOVar4->SetClearColours(nullptr, 0);
            pOVar4->SetDepthStencilClear(1.0, '\0');
            pOVar4->SetClearFlags(0);
        }
    }

    // 0x100c1d530
    void RenderContext::BindDrawCallStateInternal(const DrawCallState& drawCallState) {
        InputAssemblerState* pIVar5;
        RenderResource* pRVar6;
        NXTPixToolkit* pNVar7;
        vector<eastl::pair<int, int>>* pvVar8;
        unsigned long uVar9;
        vector<VertexBuffer const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true>>* this_02;
        uint64_t* puVar10;
        array<unsigned int, 8ul>* this_03;
        int* piVar11;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar12;
        Layout* pLVar13;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        unsigned int uVar18;
        unsigned long arg1;
        bool bVar19;

        char cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      749, nullptr);
        }
        long lVar4 = GetDesc();
        if (*(char*)(lVar4 + 11) == '\0') {
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      750, nullptr);
        }
        int iVar3 = GetReadyState();
        cVar1 = iVar3 == 0;
        if (!cVar1)
            goto LAB_100c1d96f;
        bool cVar2 = drawCallState.operator_cast_to_bool();
        if (cVar2) {
            pIVar5 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
            pRVar6 = (RenderResource*)pIVar5->GetIndexBuffer();
            cVar1 = IsObjectAlive(pRVar6);
            if (!cVar1) {
                bVar19 = false;
            } else {
                pIVar5 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
                lVar4 = pIVar5->GetIndexBuffer();
                if (lVar4 == 0) {
                    bVar19 = true;
                } else {
                    iVar3 = ((AnimationParameters*)drawCallState.GetInputAssemblerState())->GetCurrentIndex();
                    bVar19 = iVar3 != 0;
                }
            }
            pNVar7 = (NXTPixToolkit*)drawCallState.GetInputAssemblerState();
            pvVar8 = (vector<eastl::pair<int, int>>*)pNVar7->GetScreen();
            lVar4 = pvVar8->size();
            if (lVar4 != 0) {
                uVar18 = 1;
                arg1 = 0;
                do {
                    pNVar7 = (NXTPixToolkit*)drawCallState.GetInputAssemblerState();
                    this_02 = (vector<VertexBuffer const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true>>*)
                                  pNVar7->GetScreen();
                    puVar10 = (uint64_t*)(*this_02)[arg1];
                    if ((RenderResource*)*puVar10 != nullptr) {
                        if ((bVar19) && (cVar1 = IsObjectAlive(*puVar10), cVar1)) {
                            pIVar5 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
                            this_03 = (array<unsigned int, 8ul>*)pIVar5->GetGLVertexBuffers();
                            piVar11 = (int*)(*this_03)[arg1];
                            bVar19 = *piVar11 != 0;
                        } else {
                            bVar19 = false;
                        }
                    }
                    arg1 = (unsigned long)uVar18;
                    pNVar7 = (NXTPixToolkit*)drawCallState.GetInputAssemblerState();
                    pvVar8 = (vector<eastl::pair<int, int>>*)pNVar7->GetScreen();
                    uVar9 = pvVar8->size();
                    uVar18 = uVar18 + 1;
                } while (arg1 < uVar9);
            }
            if (bVar19) {
                pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              drawCallState.GetInputAssemblerState();
                pRVar6 = (RenderResource*)pvVar14->end();
                cVar1 = IsObjectAlive(pRVar6);
            } else {
                cVar1 = '\0';
            }
        }
        cVar2 = drawCallState.operator_cast_to_bool();
        if (!cVar2)
            goto LAB_100c1d96f;
        if (!cVar1) {
        LAB_100c1d7cb:
            cVar1 = '\0';
        } else {
            phVar12 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)drawCallState.GetRenderPipelineState();
            lVar4 = phVar12->size();
            pRVar6 = (RenderResource*)(lVar4 + 12);
            if (lVar4 == 0) {
                pRVar6 = nullptr;
            }
            cVar1 = IsObjectAlive(pRVar6);
            if (!cVar1)
                goto LAB_100c1d7cb;
            phVar12 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)drawCallState.GetRenderPipelineState();
            lVar4 = phVar12->size();
            if (lVar4 != 0) {
                phVar12 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)drawCallState.GetRenderPipelineState();
                iVar3 = ((ShaderProgram*)phVar12->size())->GetNativeShaderProgram();
                if (iVar3 == 0)
                    goto LAB_100c1d7cb;
            }
            pLVar13 = (Layout*)drawCallState.GetRenderPipelineState();
            pRVar6 = (RenderResource*)pLVar13->HeapBeginPtr();
            cVar1 = IsObjectAlive(pRVar6);
            if (!cVar1)
                goto LAB_100c1d7cb;
            this_05 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)drawCallState.GetRenderPipelineState();
            pRVar6 = (RenderResource*)this_05->data();
            cVar1 = IsObjectAlive(pRVar6);
            if (!cVar1)
                goto LAB_100c1d7cb;
            pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                          drawCallState.GetRenderPipelineState();
            pRVar6 = (RenderResource*)pvVar14->end();
            cVar1 = IsObjectAlive(pRVar6);
        }
        auto this_06 = drawCallState.GetRenderPipelineState();
        pLVar13 = (Layout*)this_06->GetPSTextureSamplerPairs();
        auto plVar15 = pLVar13->HeapBeginPtr();
        auto plVar16 = pLVar13->end();
        for (; plVar15 != plVar16; plVar15 = plVar15 + 4) {
            if (!cVar1) {
            LAB_100c1d800:
                cVar1 = '\0';
            } else {
                pRVar6 = (RenderResource*)(*plVar15 + 8);
                if (*plVar15 == 0) {
                    pRVar6 = nullptr;
                }
                cVar1 = IsObjectAlive(pRVar6);
                if (!cVar1)
                    goto LAB_100c1d800;
                cVar1 = (*plVar15)->IsCreated();
            }
        }
        auto this_07 = drawCallState.GetRenderPipelineState();
        pLVar13 = (Layout*)this_07->GetMapSquarePointLights();
        plVar15 = (long*)pLVar13->HeapBeginPtr();
        plVar16 = (long*)pLVar13->end();
        for (; plVar15 != plVar16; plVar15 = plVar15 + 4) {
            if (!cVar1) {
            LAB_100c1d870:
                cVar1 = '\0';
            } else {
                pRVar6 = (RenderResource*)(*plVar15 + 8);
                if (*plVar15 == 0) {
                    pRVar6 = nullptr;
                }
                cVar1 = IsObjectAlive(pRVar6);
                if (!cVar1)
                    goto LAB_100c1d870;
                cVar1 = (*plVar15)->IsCreated();
            }
        }
        auto this_08 = drawCallState.GetRenderPipelineState();
        pLVar13 = (Layout*)this_08->GetModel();
        lVar4 = pLVar13->HeapBeginPtr();
        long lVar17 = pLVar13->end();
        for (; lVar4 != lVar17; lVar4 = lVar4 + 16) {
            if ((!cVar1) || (cVar1 = IsObjectAlive(*(RenderResource**)(lVar4 + 8)), !cVar1)) {
                cVar1 = '\0';
            } else {
                cVar1 = (*(BufferInterface**)(lVar4 + 8))->IsCreated();
            }
        }
        auto this_09 = drawCallState.GetRenderPipelineState();
        pLVar13 = (Layout*)this_09->GetDefaultValue();
        lVar4 = pLVar13->HeapBeginPtr();
        lVar17 = pLVar13->end();
        for (; lVar4 != lVar17; lVar4 = lVar4 + 16) {
            if ((!cVar1) || (cVar1 = IsObjectAlive(*(RenderResource**)(lVar4 + 8)), !cVar1)) {
                cVar1 = '\0';
            } else {
                cVar1 = (*(BufferInterface**)(lVar4 + 8))->IsCreated();
            }
        }
    LAB_100c1d96f:
        if (!cVar1) {
            SkipCurrentDrawCall();
        } else {
            m_immediateContext->BindDrawCallState(drawCallState);
        }
    }

    // 0x100c1db50
    unsigned long RenderContext::IsObjectAlive(const RenderResource* renderResource) const {
        unsigned int uVar2;
        uint64_t unaff_R14;
        uint8_t auVar5[16];
        RenderResource* local_50;
        eastl local_48;
        obj_iterator local_38;

        if (!(((RenderDevice*)Instance())->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1480, nullptr);
        }
        long lVar3 = GetDesc();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (((*(char*)(lVar3 + 11) != '\0') && (renderResource != nullptr)) && (field_3576 != 0)) {
            LockDeadObjectsMutex();
            &local_48 = (eastl[16])field_3840.find(renderResource);
            &local_38 = (obj_iterator[16])field_3840.end();
            if (!(local_48 == local_38)) {
                local_50 = renderResource;
                auVar5 = ((field_3576 + 368))->find(local_50);
                &local_48 = (eastl[16])auVar5;
                auVar5 = ((field_3576 + 368))->end();
                &local_38 = (obj_iterator[16])auVar5;
                uVar2 = local_48 != local_38;
                uVar4 = (unsigned long)uVar2;
            } else {
                if (renderResource->field_0 == 0) {
                    LogAssert("pDead->m_livenessMethod != RenderResourceLivenessMethod::INVALID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              1489, nullptr);
                }
                if (renderResource->field_0 == 2) {
                    local_50 = renderResource;
                    auVar5 = ((field_3576 + 368))->find(local_50);
                    &local_48 = (eastl[16])auVar5;
                    auVar5 = ((field_3576 + 368))->end();
                    &local_38 = (obj_iterator[16])auVar5;
                    if (!(local_48 != local_38)) {
                        LogAssert("pDead->m_livenessMethod != RenderResourceLivenessMethod::KEEP_ALIVE_SHARED_PTR || "
                                  "m_readFrame->m_alivePtrs.find(pDead) != m_readFrame->m_alivePtrs.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/RenderContext.cpp",
                                  1491, nullptr);
                    }
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100c1dd70
    void RenderContext::BindDispatchCallState(DispatchCallState& dispatchCallState) {
        Allocator* pAVar1;
        ComputePipelineState* pCVar4;
        DispatchCallState local_58;
        __26 local_40;

        long lVar3 = GetDesc();
        if (*(char*)(lVar3 + 11) == '\0') {
            m_immediateContext->BindDispatchCallState(dispatchCallState);
        } else {
            if (!(IsContextThread())) {
                local_58 = DispatchCallState();
                if (dispatchCallState.operator_cast_to_bool()) {
                    pAVar1 = field_3568;
                    pCVar4 = dispatchCallState.GetComputePipelineState();
                    pCVar4 = pAVar1[4].field_40.Create<ComputePipelineState&>(*pCVar4);
                    local_58.SetComputePipelineState(pCVar4);
                }
                if (!(ShouldDefer())) {
                    BindDispatchCallStateInternal(local_58);
                } else {
                    pAVar1 = field_3568;
                    if (pAVar1 == nullptr) {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(local_58);
                        (&field_3584)
                            ->emplace_back<RenderContext::BindDispatchCallState(DispatchCallState&)::__29>(&local_40);
                        BindDispatchCallState(DispatchCallState&)::$_29::~__29((__29*)&local_40);
                    } else {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(local_58);
                        pAVar1[1].field_32.emplace_back<RenderContext::BindDispatchCallState(DispatchCallState&)::__28>(
                            &local_40);
                        BindDispatchCallState(DispatchCallState&)::$_28::~__28((__28*)&local_40);
                    }
                }
            } else {
                if (!(ShouldDefer())) {
                    BindDispatchCallStateInternal(dispatchCallState);
                } else {
                    pAVar1 = field_3568;
                    if (pAVar1 == nullptr) {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(dispatchCallState);
                        (&field_3584)
                            ->emplace_back<RenderContext::BindDispatchCallState(DispatchCallState&)::__27>(&local_40);
                        BindDispatchCallState(DispatchCallState&)::$_27::~__27((__27*)&local_40);
                    } else {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(dispatchCallState);
                        pAVar1[1].field_32.emplace_back<RenderContext::BindDispatchCallState(DispatchCallState&)::__26>(
                            &local_40);
                        BindDispatchCallState(DispatchCallState&)::$_26::~__26(&local_40);
                    }
                }
            }
        }
    }

    // 0x100c1e110
    void RenderContext::BindDispatchCallStateInternal(const DispatchCallState& dispatchCallState) {
        bool cVar2;
        ComputePipelineState* pCVar5;
        ShaderProgram* pSVar6;
        GeometryBatch* this_01;
        Layout* pLVar7;
        long* plVar8;
        long* plVar9;
        long lVar10;
        PagedLayer* this_02;
        RenderResource* pRVar11;

        char cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      845, nullptr);
        }
        long lVar4 = GetDesc();
        if (*(char*)(lVar4 + 11) == '\0') {
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      846, nullptr);
        }
        int iVar3 = GetReadyState();
        cVar1 = iVar3 == 0;
        if (((bool)cVar1) && (cVar2 = dispatchCallState.operator_cast_to_bool(), cVar2)) {
            pCVar5 = dispatchCallState.GetComputePipelineState();
            pSVar6 = pCVar5->GetShaderProgram();
            pRVar11 = (RenderResource*)&pSVar6->field_12;
            if (pSVar6 == nullptr) {
                pRVar11 = nullptr;
            }
            cVar1 = IsObjectAlive(pRVar11);
            if (!cVar1) {
                cVar1 = false;
            } else {
                pCVar5 = dispatchCallState.GetComputePipelineState();
                pSVar6 = pCVar5->GetShaderProgram();
                if (pSVar6 == nullptr) {
                    cVar1 = true;
                } else {
                    pCVar5 = dispatchCallState.GetComputePipelineState();
                    pSVar6 = pCVar5->GetShaderProgram();
                    iVar3 = pSVar6->GetNativeShaderProgram();
                    cVar1 = iVar3 != 0;
                }
            }
            this_01 = (GeometryBatch*)dispatchCallState.GetComputePipelineState();
            pLVar7 = (Layout*)this_01->GetJointIDMap();
            plVar8 = (long*)pLVar7->HeapBeginPtr();
            plVar9 = (long*)pLVar7->end();
            for (; plVar8 != plVar9; plVar8 = plVar8 + 4) {
                if (!cVar1) {
                LAB_100c1e240:
                    cVar1 = '\0';
                } else {
                    pRVar11 = (RenderResource*)(*plVar8 + 8);
                    if (*plVar8 == 0) {
                        pRVar11 = nullptr;
                    }
                    cVar1 = IsObjectAlive(pRVar11);
                    if (!cVar1)
                        goto LAB_100c1e240;
                    cVar1 = (*plVar8)->IsCreated();
                }
            }
            pCVar5 = dispatchCallState.GetComputePipelineState();
            pLVar7 = (Layout*)pCVar5->SSOBeginPtr();
            lVar4 = pLVar7->HeapBeginPtr();
            lVar10 = pLVar7->end();
            for (; lVar4 != lVar10; lVar4 = lVar4 + 16) {
                if ((!cVar1) || (cVar1 = IsObjectAlive(*(RenderResource**)(lVar4 + 8)), !cVar1)) {
                    cVar1 = '\0';
                } else {
                    cVar1 = (*(BufferInterface**)(lVar4 + 8))->IsCreated();
                }
            }
            this_02 = (PagedLayer*)dispatchCallState.GetComputePipelineState();
            pLVar7 = (Layout*)this_02->GetDynamicChildren();
            plVar8 = (long*)pLVar7->HeapBeginPtr();
            plVar9 = (long*)pLVar7->end();
            for (; plVar8 != plVar9; plVar8 = plVar8 + 2) {
                if (!cVar1) {
                LAB_100c1e310:
                    cVar1 = '\0';
                } else {
                    pRVar11 = (RenderResource*)(*plVar8 + 8);
                    if (*plVar8 == 0) {
                        pRVar11 = nullptr;
                    }
                    cVar1 = IsObjectAlive(pRVar11);
                    if (!cVar1)
                        goto LAB_100c1e310;
                    cVar1 = (*plVar8)->IsCreated();
                }
            }
        }
        if (!cVar1) {
            SkipCurrentDispatchCall();
        } else {
            m_immediateContext->BindDispatchCallState(dispatchCallState);
        }
    }

    // 0x100c1e550
    void RenderContext::SetViewports(const Viewport* viewport, unsigned long arg2) {
        Allocator* pAVar1;
        uint64_t uVar2;
        uint64_t* puVar4;
        Viewport* pVVar5;
        unsigned long arg1;
        WrapArray<math::Matrix22T<float> const> local_68;
        RenderContext* local_58;
        WrapArray<math::Matrix44T<float> const> local_50;
        unsigned long local_40;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      890, nullptr);
        }
        if (arg2 == 0) {
            LogAssert("numViewports > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      891, nullptr);
        }
        if (2 < arg2) {
            LogAssert("numViewports <= MAX_RENDER_TARGET_TEXTURES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      892, nullptr);
        }
        if (arg2 != 0) {
            arg1 = 0;
            pVVar5 = viewport;
            do {
                puVar4 = &field_4072[arg1];
                uVar2 = *(uint64_t*)&pVVar5->field_8;
                *puVar4 = *(uint64_t*)pVVar5;
                puVar4[1] = uVar2;
                puVar4[2] = *(uint64_t*)&pVVar5->field_16;
                arg1 = arg1 + 1;
                pVVar5 = (Viewport*)&pVVar5->field_24;
            } while (arg2 != arg1);
        }
        AllocateScratchArrayAndCopy<Viewport>(&local_68, (Viewport*)this, (unsigned long)viewport);
        if (!(ShouldDefer())) {
            pVVar5 = (Viewport*)local_68.end();
            m_immediateContext->SetViewports(pVVar5, arg2);
        } else {
            pAVar1 = field_3568;
            local_58 = this;
            local_40 = arg2;
            if (pAVar1 == nullptr) {
                local_50 = WrapArray(local_68);
                (&field_3584)
                    ->emplace_back<RenderContext::SetViewports(Viewport const*, unsigned long)::__31>(&local_58);
            } else {
                local_50 = WrapArray(local_68);
                pAVar1[1].field_32.emplace_back<RenderContext::SetViewports(Viewport const*, unsigned long)::__30>(
                    &local_58);
            }
        }
    }

    // 0x100c1eaf0
    void RenderContext::SetScissorRectangle(bool arg1, int arg2, int arg3, int arg4, int arg5) {
        uint64_t in_register_00000031;
        int local_4c;
        int local_48;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      903, nullptr);
        }
        field_4120 = arg1;
        uint32_t local_38 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        GridRect local_60(arg2, arg3, arg4, arg5);
        field_4124 = local_60;
        if (!(ShouldDefer())) {
            m_immediateContext->SetScissorRectangle(local_38._0_1_, arg2, arg3, arg4, arg5);
        } else {
            local_60._0_8_ = this;
            local_60.field_12 = arg2;
            local_60._16_4_ = arg3;
            if (field_3568 == nullptr) {
                local_60.field_8._0_1_ = local_38._0_1_;
                local_4c = arg4;
                local_48 = arg5;
                (&field_3584)
                    ->emplace_back<RenderContext::SetScissorRectangle(bool, int, int, int, int)::__33>(&local_60);
            } else {
                local_60.field_8._0_1_ = local_38._0_1_;
                local_4c = arg4;
                local_48 = arg5;
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetScissorRectangle(bool, int, int, int, int)::__32>(&local_60);
            }
        }
    }

    // 0x100c1ef20
    void RenderContext::SetRenderTargets(const RenderTargets* renderTargets) {
        RenderTargets* local_28;
        RenderContext* local_20;

        if (renderTargets == nullptr) {
            LogAssert("pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      911, nullptr);
        }
        if (!(this_thread::IsMainThread())) {
            if (!(((RenderDevice*)Instance())->IsRenderThread())) {
                LogAssert("RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          925, nullptr);
            }
        } else {
            m_pCurrentState = renderTargets;
            if (renderTargets != nullptr) {
                renderTargets->KeepAlive();
            }
        }
        if (!(ShouldDefer())) {
            if (!(renderTargets->CheckTexturesAlive(*this))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                936, nullptr);
            }
            m_immediateContext->SetRenderTargets(renderTargets);
        } else {
            local_28 = renderTargets;
            local_20 = this;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::SetRenderTargets(RenderTargets const*)::__35>(&local_28);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetRenderTargets(RenderTargets const*)::__34>(&local_28);
            }
        }
    }

    // 0x100c1f1b0
    void RenderContext::ClearRenderTargets(const RenderTargets* renderTargets, const math::Vector4T<float>* vector4,
                                           unsigned long arg3) {
        RenderTargets* local_68;
        RenderContext* local_60;
        uint64_t local_58;
        uint64_t uStack_50;
        unsigned long local_48;

        if (renderTargets == nullptr) {
            LogAssert("pDstColourTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      943, nullptr);
        }
        renderTargets->KeepAlive();
        if (!(ShouldDefer())) {
            if (!(renderTargets->CheckTexturesAlive(*this))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                954, nullptr);
            }
            ((RenderTargets*)m_immediateContext)->ClearRenderTargets(renderTargets, (unsigned long)vector4);
        } else {
            local_68 = renderTargets;
            local_60 = this;
            local_48 = arg3;
            if (field_3568 == nullptr) {
                local_58 = *(uint64_t*)vector4;
                uStack_50 = *(uint64_t*)(vector4 + 8);
                (&field_3584)
                    ->emplace_back<RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*,
                                                                     unsigned long)::__37>(&local_68);
            } else {
                local_58 = *(uint64_t*)vector4;
                uStack_50 = *(uint64_t*)(vector4 + 8);
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*,
                                                                     unsigned long)::__36>(&local_68);
            }
        }
    }

    // 0x100c1f450
    void RenderContext::ClearDepthStencilTarget(float arg1, unsigned int arg2, unsigned int arg3) {
        RenderContext* local_50;
        RenderTargets* local_48;
        float local_40;
        unsigned int local_3c;
        unsigned int local_38;

        RenderTargets* this_00 = m_pCurrentState;
        if (this_00 == nullptr) {
            LogAssert("currentRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      962, nullptr);
        }
        this_00->KeepAlive();
        if (!(ShouldDefer())) {
            if (!(IsCurrentRenderTargetAlive(this_00))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                972, nullptr);
            }
            m_immediateContext->ClearDepthStencilTarget(arg1, arg2, arg3);
        } else {
            local_50 = this;
            local_48 = this_00;
            local_3c = arg2;
            local_38 = arg3;
            if (field_3568 == nullptr) {
                local_40 = arg1;
                (&field_3584)
                    ->emplace_back<RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::__39>(
                        &local_50);
            } else {
                local_40 = arg1;
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::__38>(
                        &local_50);
            }
        }
    }

    // 0x100c1f7a0
    void RenderContext::ClearDepthStencilTarget(const RenderTargets* renderTargets, float arg2, unsigned int arg3,
                                                unsigned int arg4) {
        RenderTargets* local_50;
        RenderContext* local_48;
        float local_40;
        unsigned int local_3c;
        unsigned int local_38;

        renderTargets->KeepAlive();
        if (!(ShouldDefer())) {
            if (!(renderTargets->CheckTexturesAlive(*this))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                988, nullptr);
            }
            m_immediateContext->ClearDepthStencilTarget(renderTargets, arg2, arg3, arg4);
        } else {
            local_50 = renderTargets;
            local_48 = this;
            local_3c = arg3;
            local_38 = arg4;
            if (field_3568 == nullptr) {
                local_40 = arg2;
                (&field_3584)
                    ->emplace_back<RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int,
                                                                          unsigned int)::__41>(&local_50);
            } else {
                local_40 = arg2;
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int,
                                                                          unsigned int)::__40>(&local_50);
            }
        }
    }

    // 0x100c1fa10
    void RenderContext::SetShaders(const ShaderProgram* shaderProgram) {
        long lVar2;
        RenderResource* renderResource;
        RenderContext* local_28;
        ShaderProgram* local_20;

        if (!(ShouldDefer())) {
            lVar2 = GetDesc();
            if (*(char*)(lVar2 + 11) != '\0') {
                renderResource = (RenderResource*)&shaderProgram->field_12;
                if (shaderProgram == nullptr) {
                    renderResource = nullptr;
                }
                if (!(IsObjectAlive(renderResource))) {
                    SkipCurrentDrawCall();
                    return;
                }
            }
            m_immediateContext->SetShaders(shaderProgram);
        } else {
            local_28 = this;
            local_20 = shaderProgram;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::SetShaders(ShaderProgram const*)::__43>(&local_28);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetShaders(ShaderProgram const*)::__42>(&local_28);
            }
        }
    }

    // 0x100c1fd40
    void RenderContext::SetVertexBuffers(unsigned int arg1, VertexBuffer const* const* arg2, const unsigned int* arg3,
                                         const unsigned int* arg4) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        1007, nullptr);
    }

    // 0x100c1fff0
    void RenderContext::SetVertexBuffer(const VertexBuffer* vertexBuffer, unsigned int arg2, unsigned int arg3) {
        long lVar2;

        bool cVar1 = ShouldDefer();
        if (!cVar1) {
            lVar2 = GetDesc();
            if ((*(char*)(lVar2 + 11) == '\0') ||
                ((cVar1 = IsObjectAlive(vertexBuffer), cVar1 && (cVar1 = vertexBuffer->IsCreated(), cVar1)))) {
                m_immediateContext->SetVertexBuffer(vertexBuffer, arg2, arg3);
            } else {
                SkipCurrentDrawCall();
            }
            return;
        }
        RenderContext* local_40 = this;
        VertexBuffer* local_38 = vertexBuffer;
        unsigned int local_30 = arg2;
        unsigned int local_2c = arg3;
        if (field_3568 == nullptr) {
            (&field_3584)
                ->emplace_back<RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int)::__47>(
                    &local_40);
            return;
        }
        (&field_3568[1].field_32)
            ->emplace_back<RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int)::__46>(
                &local_40);
    }

    // 0x100c20240
    void RenderContext::SetIndexBuffer(const IndexBuffer* indexBuffer, unsigned int arg2) {
        long lVar2;

        bool cVar1 = ShouldDefer();
        if (!cVar1) {
            lVar2 = GetDesc();
            if ((*(char*)(lVar2 + 11) == '\0') ||
                ((cVar1 = IsObjectAlive(indexBuffer), cVar1 && (cVar1 = indexBuffer->IsCreated(), cVar1)))) {
                ImmediateRenderContext::SetIndexBuffer(m_immediateContext, (unsigned int)indexBuffer);
            } else {
                SkipCurrentDrawCall();
            }
            return;
        }
        RenderContext* local_38 = this;
        IndexBuffer* local_30 = indexBuffer;
        unsigned int local_28 = arg2;
        if (field_3568 == nullptr) {
            (&field_3584)
                ->emplace_back<RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned int)::__49>(&local_38);
            return;
        }
        (&field_3568[1].field_32)
            ->emplace_back<RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned int)::__48>(&local_38);
    }

    // 0x100c20560
    void RenderContext::SetVertexDeclaration(const VertexDeclaration* vertexDeclaration) {
        long lVar2;
        RenderContext* local_28;
        VertexDeclaration* local_20;

        bool cVar1 = ShouldDefer();
        if (!cVar1) {
            lVar2 = GetDesc();
            if ((*(char*)(lVar2 + 11) != '\0') && (cVar1 = IsObjectAlive(vertexDeclaration), !cVar1)) {
                SkipCurrentDrawCall();
                return;
            }
            m_immediateContext->SetVertexDeclaration(vertexDeclaration);
        } else {
            local_28 = this;
            local_20 = vertexDeclaration;
            if (field_3568 == nullptr) {
                (&field_3584)
                    ->emplace_back<RenderContext::SetVertexDeclaration(VertexDeclaration const*)::__51>(&local_28);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetVertexDeclaration(VertexDeclaration const*)::__50>(&local_28);
            }
        }
    }

    // 0x100c20b70
    void RenderContext::SetVSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                                const SamplerState* samplerState, bool arg5) {
        Texture* texture_00;
        uint64_t in_register_00000089;
        RenderContext* local_68;
        unsigned int local_60;
        Texture* local_58;
        unsigned int local_50;
        SamplerState* local_48;
        uint8_t local_40;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        if (ShouldDefer() == '\0') {
            SetVSTextureSamplerPair(arg1, texture_00, arg3, samplerState, false);
        } else {
            local_40 = (uint8_t)local_34;
            local_68 = this;
            local_60 = arg1;
            local_58 = texture;
            local_50 = arg3;
            local_48 = samplerState;
            if (field_3568 == nullptr) {
                (&field_3584)
                    ->emplace_back<RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int,
                                                                          SamplerState const*, bool)::__53>(&local_68);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int,
                                                                          SamplerState const*, bool)::__52>(&local_68);
            }
        }
    }

    // 0x100c20da0
    void RenderContext::SetPSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                                const SamplerState* samplerState, bool arg5) {
        RenderContext* local_68;
        unsigned int local_60;
        Texture* local_58;
        int local_50;
        SamplerState* local_48;
        uint8_t local_40;

        if (ShouldDefer() == '\0') {
            m_immediateContext->SetPSTextureSamplerPair(arg1, texture, arg3, samplerState, arg5);
        } else {
            local_68 = this;
            local_60 = arg1;
            local_58 = texture;
            local_50 = arg3;
            local_40 = arg5;
            if (field_3568 == nullptr) {
                local_48 = samplerState;
                (&field_3584)
                    ->emplace_back<RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int,
                                                                          SamplerState const*, bool)::__55>(&local_68);
            } else {
                local_48 = samplerState;
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int,
                                                                          SamplerState const*, bool)::__54>(&local_68);
            }
        }
    }

    // 0x100c20fe0
    void RenderContext::SetVSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        long lVar2;

        bool cVar1 = ShouldDefer();
        if (!cVar1) {
            lVar2 = GetDesc();
            if ((*(char*)(lVar2 + 11) == '\0') || ((cVar1 = IsObjectAlive(shaderConstBuffer),
                                                    cVar1 && (cVar1 = shaderConstBuffer->IsCreated(), cVar1)))) {
                m_immediateContext->SetVSShaderConstBuffer(arg1, shaderConstBuffer);
            } else {
                SkipCurrentDrawCall();
            }
            return;
        }
        RenderContext* local_38 = this;
        ShaderConstBuffer* local_30 = shaderConstBuffer;
        unsigned int local_28 = arg1;
        if (field_3568 == nullptr) {
            (&field_3584)
                ->emplace_back<RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::__57>(
                    &local_38);
            return;
        }
        (&field_3568[1].field_32)
            ->emplace_back<RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::__56>(
                &local_38);
    }

    // 0x100c21220
    void RenderContext::SetPSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        long lVar2;

        bool cVar1 = ShouldDefer();
        if (!cVar1) {
            lVar2 = GetDesc();
            if ((*(char*)(lVar2 + 11) == '\0') || ((cVar1 = IsObjectAlive(shaderConstBuffer),
                                                    cVar1 && (cVar1 = shaderConstBuffer->IsCreated(), cVar1)))) {
                m_immediateContext->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
            } else {
                SkipCurrentDrawCall();
            }
            return;
        }
        RenderContext* local_38 = this;
        ShaderConstBuffer* local_30 = shaderConstBuffer;
        unsigned int local_28 = arg1;
        if (field_3568 == nullptr) {
            (&field_3584)
                ->emplace_back<RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::__59>(
                    &local_38);
            return;
        }
        (&field_3568[1].field_32)
            ->emplace_back<RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::__58>(
                &local_38);
    }

    // 0x100c21460
    void RenderContext::SetDepthStencilState(const DepthStencilState* depthStencilState) {
        uint8_t local_68[72];

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1103, nullptr);
        }
        auto desc = depthStencilState->second();
        if (!(ShouldDefer())) {
            new (local_68) DepthStencilState();
            local_68->Create(*desc);
            m_immediateContext->SetDepthStencilState(local_68);
        } else {
            local_68._56_8_ = this;
            if (field_3568 == nullptr) {
                local_68._48_4_ = *(uint32_t*)(desc->field_36 + 12);
                local_68._0_8_ = *(uint64_t*)desc;
                local_68._8_4_ = desc->field_8;
                local_68._12_4_ = desc->field_12;
                local_68[16] = desc->field_16;
                local_68[17] = desc->field_17;
                local_68[18] = desc->field_18;
                local_68._19_5_ = *(uint64_t*)&desc->field_19;
                local_68._24_8_ = *(uint64_t*)&desc->field_24;
                local_68._32_8_ = *(uint64_t*)&desc->field_32;
                local_68._40_8_ = *(uint64_t*)(desc->field_36 + 4);
                (&field_3584)
                    ->emplace_back<RenderContext::SetDepthStencilState(DepthStencilState const*)::__61>(local_68);
            } else {
                local_68._48_4_ = *(uint32_t*)(desc->field_36 + 12);
                local_68._0_8_ = *(uint64_t*)desc;
                local_68._8_4_ = desc->field_8;
                local_68._12_4_ = desc->field_12;
                local_68[16] = desc->field_16;
                local_68[17] = desc->field_17;
                local_68[18] = desc->field_18;
                local_68._19_5_ = *(uint64_t*)&desc->field_19;
                local_68._24_8_ = *(uint64_t*)&desc->field_24;
                local_68._32_8_ = *(uint64_t*)&desc->field_32;
                local_68._40_8_ = *(uint64_t*)(desc->field_36 + 4);
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetDepthStencilState(DepthStencilState const*)::__60>(local_68);
            }
        }
    }

    // 0x100c21700
    void RenderContext::SetRasteriserState(const RasteriserState* rasteriserState) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint8_t local_48[40];

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1115, nullptr);
        }
        auto desc = rasteriserState->second();
        if (!(ShouldDefer())) {
            new (local_48) RasteriserState();
            local_48->Create(*desc);
            m_immediateContext->SetRasteriserState(local_48);
        } else {
            local_48._32_8_ = this;
            if (field_3568 == nullptr) {
                local_48._0_8_ = *(uint64_t*)desc;
                uVar2._0_4_ = desc->field_8;
                uVar2._4_4_ = desc->field_12;
                local_48._17_8_ = *(uint64_t*)((long)&desc->field_16 + 1);
                local_48[16] = (uint8_t)((unsigned long)*(uint64_t*)((long)&desc->field_8 + 1) >> 56);
                local_48[8] = (uint8_t)(uint32_t)uVar2;
                local_48._9_7_ = (uint64_t)((unsigned long)uVar2 >> 8);
                (&field_3584)->emplace_back<RenderContext::SetRasteriserState(RasteriserState const*)::__63>(local_48);
            } else {
                local_48._0_8_ = *(uint64_t*)desc;
                uVar1._0_4_ = desc->field_8;
                uVar1._4_4_ = desc->field_12;
                local_48._17_8_ = *(uint64_t*)((long)&desc->field_16 + 1);
                local_48[16] = (uint8_t)((unsigned long)*(uint64_t*)((long)&desc->field_8 + 1) >> 56);
                local_48[8] = (uint8_t)(uint32_t)uVar1;
                local_48._9_7_ = (uint64_t)((unsigned long)uVar1 >> 8);
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetRasteriserState(RasteriserState const*)::__62>(local_48);
            }
        }
    }

    // 0x100c21980
    void RenderContext::SetBlendState(const BlendState* blendState) {
        uint8_t local_78[88];

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1127, nullptr);
        }
        auto desc = blendState->second();
        if (!(ShouldDefer())) {
            new (local_78) BlendState();
            local_78->Create(*desc);
            m_immediateContext->SetBlendState(local_78);
        } else {
            local_78._72_8_ = this;
            if (field_3568 == nullptr) {
                local_78._64_4_ = *(uint32_t*)&desc[5].field_4;
                local_78._0_8_ = *(uint64_t*)desc;
                local_78._8_8_ = *(uint64_t*)&desc->field_8;
                local_78._16_8_ = *(uint64_t*)&desc[1].field_4;
                local_78[24] = desc[2].field_0;
                local_78[25] = desc[2].field_1;
                local_78._26_6_ = *(uint64_t*)&desc[2].field_2;
                local_78._32_8_ = *(uint64_t*)&desc[2].field_8;
                local_78._40_8_ = *(uint64_t*)&desc[3].field_4;
                local_78[48] = desc[4].field_0;
                local_78[49] = desc[4].field_1;
                local_78._50_6_ = *(uint64_t*)&desc[4].field_2;
                local_78._56_8_ = *(uint64_t*)&desc[4].field_8;
                (&field_3584)->emplace_back<RenderContext::SetBlendState(BlendState const*)::__65>(local_78);
            } else {
                local_78._64_4_ = *(uint32_t*)&desc[5].field_4;
                local_78._0_8_ = *(uint64_t*)desc;
                local_78._8_8_ = *(uint64_t*)&desc->field_8;
                local_78._16_8_ = *(uint64_t*)&desc[1].field_4;
                local_78[24] = desc[2].field_0;
                local_78[25] = desc[2].field_1;
                local_78._26_6_ = *(uint64_t*)&desc[2].field_2;
                local_78._32_8_ = *(uint64_t*)&desc[2].field_8;
                local_78._40_8_ = *(uint64_t*)&desc[3].field_4;
                local_78[48] = desc[4].field_0;
                local_78[49] = desc[4].field_1;
                local_78._50_6_ = *(uint64_t*)&desc[4].field_2;
                local_78._56_8_ = *(uint64_t*)&desc[4].field_8;
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::SetBlendState(BlendState const*)::__64>(local_78);
            }
        }
    }

    // 0x100c21c30
    void RenderContext::DrawPrimitives(PrimitiveType primitiveType, int arg2, int arg3) {
        RenderContext* local_40;
        PrimitiveType local_38;
        int local_34;
        int local_30;

        if (!(ShouldDefer())) {
            if (PreDrawCall()) {
                m_immediateContext->DrawPrimitives(primitiveType, arg2, arg3);
            }
            PostDrawCall();
        } else {
            local_40 = this;
            local_38 = primitiveType;
            local_34 = arg2;
            local_30 = arg3;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::DrawPrimitives(PrimitiveType, int, int)::__67>(&local_40);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::DrawPrimitives(PrimitiveType, int, int)::__66>(&local_40);
            }
        }
    }

    // 0x100c21e60
    bool RenderContext::PreDrawCall() {
        return field_4152 == '\0';
    }

    // 0x100c21e70
    void RenderContext::PostDrawCall() {
        field_4152 = 0;
        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) != '\0') {
            UnlockDeadObjectsMutex();
        }
    }

    // 0x100c21ea0
    void RenderContext::DrawPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, int arg3, int arg4) {
        BindDrawCallState(drawCallState);
        DrawPrimitives(primitiveType, arg3, arg4);
    }

    // 0x100c21ee0
    void RenderContext::DrawMultiPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3,
                                            const int* arg4) {
        Allocator* pAVar1;
        int* arg3_00;
        int* arg4_00;
        WrapArray<math::Matrix22T<float> const> local_80;
        WrapArray<math::Matrix22T<float> const> local_70;
        RenderContext* local_60;
        PrimitiveType local_58;
        unsigned int local_54;
        WrapArray<math::Matrix44T<float> const> local_50;
        WrapArray<math::Matrix44T<float> const> local_40;

        AllocateScratchArrayAndCopy<int>(&local_80, (int*)this, (unsigned long)arg3);
        AllocateScratchArrayAndCopy<int>(&local_70, (int*)this, (unsigned long)arg4);
        if (!(ShouldDefer())) {
            if (PreDrawCall()) {
                arg3_00 = (int*)local_80.end();
                arg4_00 = (int*)local_70.end();
                m_immediateContext->DrawMultiPrimitives(primitiveType, arg2, arg3_00, arg4_00);
            }
            PostDrawCall();
        } else {
            pAVar1 = field_3568;
            local_60 = this;
            local_58 = primitiveType;
            local_54 = arg2;
            if (pAVar1 == nullptr) {
                local_50 = WrapArray(local_80);
                local_40 = WrapArray(local_70);
                (&field_3584)
                    ->emplace_back<RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                                                      int const*)::__69>(&local_60);
            } else {
                local_50 = WrapArray(local_80);
                local_40 = WrapArray(local_70);
                pAVar1[1]
                    .field_32.emplace_back<RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                                                              int const*)::__68>(&local_60);
            }
        }
    }

    // 0x100c22230
    void RenderContext::DrawMultiPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType,
                                            unsigned int arg3, const int* arg4, const int* arg5) {
        BindDrawCallState(drawCallState);
        DrawMultiPrimitives(primitiveType, arg3, arg4, arg5);
    }

    // 0x100c22280
    void RenderContext::DrawIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2, unsigned int arg3,
                                              IndexType indexType) {
        RenderContext* local_48;
        PrimitiveType local_40;
        unsigned int local_3c;
        unsigned int local_38;
        IndexType local_34;

        if (!(ShouldDefer())) {
            if (PreDrawCall()) {
                m_immediateContext->DrawIndexedPrimitives(primitiveType, arg2, arg3, indexType);
            }
            PostDrawCall();
        } else {
            local_48 = this;
            local_40 = primitiveType;
            local_3c = arg2;
            local_38 = arg3;
            local_34 = indexType;
            if (field_3568 == nullptr) {
                (&field_3584)
                    ->emplace_back<RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int,
                                                                        IndexType)::__71>(&local_48);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int,
                                                                        IndexType)::__70>(&local_48);
            }
        }
    }

    // 0x100c224c0
    void RenderContext::DrawIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType,
                                              unsigned int arg3, unsigned int arg4) {
        auto pIVar1 = drawCallState.GetInputAssemblerState();
        if (pIVar1->GetIndexBuffer() == 0) {
            LogAssert("drawCallState.GetInputAssemblerState().GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1168, nullptr);
        }
        BindDrawCallState(drawCallState);
        pIVar1 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
        IndexType indexType = ((Component*)pIVar1->GetIndexBuffer())->GetCurrentX();
        DrawIndexedPrimitives(primitiveType, arg3, arg4, indexType);
    }

    // 0x100c22560
    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3,
                                                   void const* const* arg4, IndexType indexType) {
        Allocator* pAVar1;
        int* arg3_00;
        void** arg4_00;
        WrapArray<math::Matrix22T<float> const> local_90;
        WrapArray<math::Matrix22T<float> const> local_80;
        RenderContext* local_70;
        PrimitiveType local_68;
        unsigned int local_64;
        WrapArray<math::Matrix44T<float> const> local_60;
        WrapArray<math::Matrix44T<float> const> local_50;
        IndexType local_40;

        AllocateScratchArrayAndCopy<int>(&local_90, (int*)this, (unsigned long)arg3);
        AllocateScratchArrayAndCopy<void const*>(&local_80, &this->_vptr, (unsigned long)arg4);
        if (!(ShouldDefer())) {
            if (PreDrawCall()) {
                arg3_00 = (int*)local_90.end();
                arg4_00 = (void**)local_80.end();
                m_immediateContext->DrawMultiIndexedPrimitives(primitiveType, arg2, arg3_00, arg4_00, indexType);
            }
            PostDrawCall();
        } else {
            pAVar1 = field_3568;
            local_70 = this;
            local_68 = primitiveType;
            local_64 = arg2;
            if (pAVar1 == nullptr) {
                local_60 = WrapArray(local_90);
                local_50 = WrapArray(local_80);
                local_40 = indexType;
                (&field_3584)
                    ->emplace_back<RenderContext::DrawMultiIndexedPrimitives(
                        PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::__73>(&local_70);
            } else {
                local_60 = WrapArray(local_90);
                local_50 = WrapArray(local_80);
                local_40 = indexType;
                pAVar1[1]
                    .field_32.emplace_back<RenderContext::DrawMultiIndexedPrimitives(
                        PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::__72>(&local_70);
            }
        }
    }

    // 0x100c228e0
    void RenderContext::DrawMultiIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType,
                                                   unsigned int arg3, const int* arg4, void const* const* arg5) {
        auto pIVar1 = drawCallState.GetInputAssemblerState();
        if (pIVar1->GetIndexBuffer() == 0) {
            LogAssert("drawCallState.GetInputAssemblerState().GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1184, nullptr);
        }
        BindDrawCallState(drawCallState);
        pIVar1 = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
        IndexType indexType = ((Component*)pIVar1->GetIndexBuffer())->GetCurrentX();
        DrawMultiIndexedPrimitives(primitiveType, arg3, arg4, arg5, indexType);
    }

    // 0x100c22980
    void RenderContext::DispatchCompute(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        RenderContext* local_40;
        unsigned int local_38;
        unsigned int local_34;
        unsigned int local_30;

        if (!(ShouldDefer())) {
            if (PreDispatchCall()) {
                m_immediateContext->DispatchCompute(arg1, arg2, arg3);
            }
            PostDispatchCall();
        } else {
            local_40 = this;
            local_38 = arg1;
            local_34 = arg2;
            local_30 = arg3;
            if (field_3568 == nullptr) {
                (&field_3584)
                    ->emplace_back<RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::__75>(
                        &local_40);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::__74>(
                        &local_40);
            }
        }
    }

    // 0x100c22bb0
    bool RenderContext::PreDispatchCall() {
        return field_4153 == '\0';
    }

    // 0x100c22bc0
    void RenderContext::PostDispatchCall() {
        field_4153 = 0;
        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) != '\0') {
            UnlockDeadObjectsMutex();
        }
    }

    // 0x100c22bf0
    void RenderContext::DispatchCompute(DispatchCallState& dispatchCallState, unsigned int arg2, unsigned int arg3,
                                        unsigned int arg4) {
        BindDispatchCallState(dispatchCallState);
        DispatchCompute(arg2, arg3, arg4);
    }

    // 0x100c22c30
    void RenderContext::MemoryBarrier(unsigned int arg1) {
        RenderContext* local_28;
        unsigned int local_20;

        if (ShouldDefer() == '\0') {
            m_immediateContext->MemoryBarrier(arg1);
        } else {
            local_28 = this;
            local_20 = arg1;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::MemoryBarrier(unsigned int)::__77>(&local_28);
            } else {
                (&field_3568[1].field_32)->emplace_back<RenderContext::MemoryBarrier(unsigned int)::__76>(&local_28);
            }
        }
    }

    // 0x100c22e80
    void RenderContext::FinishRendering() {
        uint8_t* this_00;
        long* plVar3;
        unsigned long uVar4;
        Logger* this_01;
        unsigned long uVar5;
        __79 local_150;
        Fence local_140;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        long lVar2 = GetDesc();
        if (*(char*)(lVar2 + 10) == '\0') {
            if (!(this_thread::IsMainThread())) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1210, nullptr);
            }
            local_140._0_8_ = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderContext::FinishRendering()::__78, void>(local_c8, (__78*)&local_140);
            RunSynchronouslyOnRenderThread(*local_c8, false);
            lVar2 = GetDesc();
            if (*(char*)(lVar2 + 11) != '\0') {
                if (!((&field_3560)->operator_cast_to_bool())) {
                    this_01 = logger::default_logger();
                    this_01->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/RenderContext.cpp",
                                 1242, "Attempting to finish rendering with no deferred frames.");
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/RenderContext.cpp",
                                    1243, nullptr);
                }
            }
            if (!(IsInsideBeginEnd())) {
                BeginInternal(true);
            }
            local_140 = Fence();
            local_150.field_0 = (long)this;
            local_150.field_8 = &local_140;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderContext::FinishRendering()::__79, void>(local_c8, &local_150);
            EndInternal(*local_c8);
            local_140.Wait();
            if (field_3568 != nullptr) {
                LogAssert("!m_writeFrame",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1246, nullptr);
            }
            if (!(field_3584.empty())) {
                LogAssert("m_outsideBeginEndDeferredFunctions.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1247, nullptr);
            }
            if (IsInsideBeginEnd()) {
                LogAssert("!IsInsideBeginEnd()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1248, nullptr);
            }
        }
        local_140._0_8_ = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderContext::FinishRendering()::__80, void>(local_c8, (__80*)&local_140);
        RunSynchronouslyOnRenderThread(*local_c8, false);
        lVar2 = GetDesc();
        if (*(char*)(lVar2 + 10) == '\0') {
            this_00 = &field_3560;
            if (this_00->operator_cast_to_bool()) {
                ResetKeepAliveSharedPtrs(1);
                plVar3 = (long*)(*this_00).operator->();
                lVar2 = (**(void (**)(...))(*plVar3 + 64))(plVar3);
                if (lVar2 != 0) {
                    uVar5 = 0;
                    do {
                        plVar3 = (long*)(*this_00).operator->();
                        lVar2 = (**(void (**)(...))(*plVar3 + 72))(plVar3, uVar5);
                        ((lVar2 + 368))->clear();
                        uVar5 = uVar5 + 1;
                        plVar3 = (long*)(*this_00).operator->();
                        uVar4 = (**(void (**)(...))(*plVar3 + 64))(plVar3);
                    } while (uVar5 < uVar4);
                }
            }
        }
    }

    // 0x100c231f0
    void RenderContext::CopyColourTargetData(const Texture* texture, unsigned int arg2, unsigned int arg3,
                                             unsigned int arg4, unsigned int arg5, unsigned int arg6, unsigned int arg7,
                                             unsigned int arg8, unsigned int arg9, CubeFace cubeFace) {
        unsigned int arg2_00;
        RenderResource* renderResource;
        RenderContext* local_78;
        Texture* local_70;
        RenderTargets* local_68;
        unsigned int local_60;
        unsigned int local_5c;
        unsigned int local_58;
        unsigned int local_54;
        unsigned int local_50;
        unsigned int local_4c;
        unsigned int local_48;
        unsigned int local_44;
        CubeFace local_40;

        RenderTargets* this_00 = m_pCurrentState;
        this_00->KeepAlive();
        bool cVar1 = ShouldDefer();
        if (cVar1) {
            local_78 = this;
            local_70 = texture;
            local_68 = this_00;
            local_60 = arg2;
            local_5c = arg3;
            if (field_3568 == nullptr) {
                local_58 = arg4;
                local_54 = arg5;
                local_50 = arg6;
                local_4c = arg7;
                local_48 = arg8;
                local_44 = arg9;
                local_40 = cubeFace;
                (&field_3584)
                    ->emplace_back<RenderContext::CopyColourTargetData(
                        Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                        unsigned int, unsigned int, unsigned int, CubeFace)::__82>(&local_78);
                return;
            }
            local_58 = arg4;
            local_54 = arg5;
            local_50 = arg6;
            local_4c = arg7;
            local_48 = arg8;
            local_44 = arg9;
            local_40 = cubeFace;
            (&field_3568[1].field_32)
                ->emplace_back<RenderContext::CopyColourTargetData(
                    Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                    unsigned int, unsigned int, CubeFace)::__81>(&local_78);
            return;
        }
        long lVar2 = GetDesc();
        if (*(char*)(lVar2 + 11) != '\0') {
            renderResource = (RenderResource*)&texture->field_8;
            if (texture == nullptr) {
                renderResource = nullptr;
            }
            cVar1 = IsObjectAlive(renderResource);
            if ((!cVar1) || (cVar1 = texture->IsCreated(), !cVar1)) {
                SkipCurrentDrawCall();
                return;
            }
        }
        cVar1 = IsCurrentRenderTargetAlive(this_00);
        if (!cVar1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1304, nullptr);
        }
        m_immediateContext->CopyColourTargetData(texture, arg2_00, arg3, arg4, arg5, arg6, arg7, arg8, arg9, cubeFace);
    }

    // 0x100c23940
    void RenderContext::ResolveColourTargetData(const RenderTargets* renderTargets, unsigned int arg2,
                                                const math::Rect<unsigned int>& rect1,
                                                const math::Rect<unsigned int>& rect2) {
        Allocator* pAVar1;
        RenderContext* local_80;
        RenderTargets* local_78;
        RenderTargets* local_70;
        unsigned int local_68;
        Rect<unsigned int> local_64;
        Rect<unsigned int> local_54;

        RenderTargets* this_00 = m_pCurrentState;
        this_00->KeepAlive();
        renderTargets->KeepAlive();
        bool cVar2 = ShouldDefer();
        if (cVar2) {
            pAVar1 = field_3568;
            local_80 = this;
            local_78 = this_00;
            local_70 = renderTargets;
            local_68 = arg2;
            if (pAVar1 == nullptr) {
                local_64 = math::Rect(rect1);
                local_54 = math::Rect(rect2);
                (&field_3584)
                    ->emplace_back<RenderContext::ResolveColourTargetData(
                        RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                        math::Rect<unsigned int> const&)::__84>(&local_80);
            } else {
                local_64 = math::Rect(rect1);
                local_54 = math::Rect(rect2);
                pAVar1[1]
                    .field_32.emplace_back<RenderContext::ResolveColourTargetData(
                        RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                        math::Rect<unsigned int> const&)::__83>(&local_80);
            }
            return;
        }
        cVar2 = IsCurrentRenderTargetAlive(this_00);
        if ((!cVar2) || (cVar2 = renderTargets->CheckTexturesAlive(*this), !cVar2)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1323, nullptr);
        }
        m_immediateContext->ResolveColourTargetData(renderTargets, arg2, rect1, rect2);
    }

    // 0x100c24600
    void RenderContext::ReadColourTargetData(const RenderTargets* renderTargets, void* arg2, Format format,
                                             unsigned int arg4, unsigned int arg5, unsigned int arg6, unsigned int arg7,
                                             unsigned int arg8, unsigned int arg9) {

        if (ShouldDefer()) {
            LogAssert("!ShouldDefer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1340, nullptr);
        }
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                 renderTargets->GetColourTargetTextures())
                ->empty()) {
            LogAssert("!pSrcRenderTarget->GetColourTargetTextures().empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1341, nullptr);
        }
        m_immediateContext->SetRenderTargets(renderTargets);
        m_immediateContext->ReadColourTargetData(arg2, format, format, arg4, arg6, arg7, arg8, arg9);
    }

    // 0x100c247f0
    void RenderContext::FlushTextureCache() {
        __85 local_18;

        if (ShouldDefer() == '\0') {
            m_immediateContext->FlushTextureCache();
        } else {
            local_18.field_0 = (long)this;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::FlushTextureCache()::__86>(&local_18);
            } else {
                (&field_3568[1].field_32)->emplace_back<RenderContext::FlushTextureCache()::__85>(&local_18);
            }
        }
    }

    // 0x100c24a60
    uint32_t RenderContext::SetView(const shared_ptr<OpenGLView>& openGLView) {
        Allocator* pAVar1;
        RenderContext* local_40;
        shared_ptr<oldscape::dash3d::Decor> local_38;

        RenderContext* pRVar4 = this;
        uint32_t uVar3 = ShouldDefer();
        if ((char)uVar3 == '\0') {
            pRVar4->SetView(openGLView);
        } else {
            pRVar4 = this;
            if (ShouldDefer() == '\0') {
                pRVar4->SetView(openGLView);
                LogAssert("result",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1366, nullptr);
            }
            pAVar1 = field_3568;
            local_40 = this;
            if (pAVar1 == nullptr) {
                local_38 = shared_ptr(openGLView);
                (&field_3584)->emplace_back<RenderContext::SetView(shared_ptr<OpenGLView> const&)::__88>(&local_40);
                SetView(shared_ptr<OpenGLView> const&)::$_88::~__88((__88*)&local_40);
            } else {
                local_38 = shared_ptr(openGLView);
                pAVar1[1].field_32.emplace_back<RenderContext::SetView(shared_ptr<OpenGLView> const&)::__87>(&local_40);
                SetView(shared_ptr<OpenGLView> const&)::$_87::~__87((__87*)&local_40);
            }
        }
        return uVar3;
    }

    // 0x100c24d20
    void RenderContext::OnDeviceLost() {
        __89 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        if (IsInsideBeginEnd()) {
            LogAssert("!IsInsideBeginEnd()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1380, nullptr);
        }
        local_d0.field_0 = (long)this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderContext::OnDeviceLost()::__89, void>(local_c8, &local_d0);
        RunSynchronouslyOnRenderThread(*local_c8, false);
    }

    // 0x100c24df0
    void RenderContext::SetVSyncMode(VSyncMode vSyncMode) {
        __90 local_28;

        if (ShouldDefer() == '\0') {
            m_immediateContext->SetVSyncMode(vSyncMode);
        } else {
            local_28.field_0 = (long)this;
            local_28.field_8 = vSyncMode;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::SetVSyncMode(VSyncMode)::__91>(&local_28);
            } else {
                (&field_3568[1].field_32)->emplace_back<RenderContext::SetVSyncMode(VSyncMode)::__90>(&local_28);
            }
        }
    }

    // 0x100c24ff0
    void RenderContext::AddDeadObject(const RenderResource* renderResource) {
        RenderResource** ppRVar3;
        RenderResource** ppRVar4;
        uint8_t* puVar5;
        scoped_lock<std::mutex> local_28;

        if (IsContextThread() != '\0') {
            LogAssert("!IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1395, nullptr);
        }
        if (renderResource == nullptr) {
            LogAssert("pDead",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1396, nullptr);
        }
        long lVar2 = GetDesc();
        if (*(char*)(lVar2 + 11) != '\0') {
            local_28 = std::scoped_lock(field_4000);
            puVar5 = &field_3968;
            ppRVar3 = (RenderResource**)puVar5->HeapBeginPtr();
            ppRVar4 = (RenderResource**)puVar5->end();
            ppRVar3 = eastl::remove<RenderResource const**, RenderResource const*>(ppRVar3, ppRVar4, renderResource);
            ppRVar4 = (RenderResource**)puVar5->end();
            puVar5->erase(ppRVar3, ppRVar4);
            local_28 = std::scoped_lock(field_3896);
            puVar5 = &field_3840[renderResource];
            *puVar5 = 3;
        }
    }

    // 0x100c25200
    void RenderContext::RemoveDeadObject(const RenderResource* renderResource) {
        scoped_lock<std::mutex> local_18;

        if (renderResource == nullptr) {
            LogAssert("pDead",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1415, nullptr);
        }
        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) != '\0') {
            local_18 = std::scoped_lock(field_4000);
            field_3968.push_back(renderResource);
        }
    }

    // 0x100c25380
    void RenderContext::IsKeepAliveSharedPtrInternal(const void* arg1) const {
        eastl local_38;
        obj_iterator local_28;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1461, nullptr);
        }
        if (arg1 == nullptr) {
            LogAssert("ptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1462, nullptr);
        }
        hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                  eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                  eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* this_00 =
            (hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                       eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                       eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, false, true>*)&field_3616;
        if (field_3568 != nullptr) {
            this_00 =
                (hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                           eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                           eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing,
                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>*)&field_3568[6]
                    .field_24;
        }
        &local_38 = (eastl[16])this_00->find_as<void const*>(arg1);
        &local_28 = (obj_iterator[16])this_00->end();
        local_38 != local_28;
    }

    // 0x100c256e0
    uint32_t RenderContext::LockContext() {

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1561, nullptr);
        }
        if (ShouldDefer()) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1565, nullptr);
        }
        return m_immediateContext->LockContext();
    }

    // 0x100c257c0
    void RenderContext::UnlockContext() {

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1576, nullptr);
        }
        if (ShouldDefer()) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1579, nullptr);
        }
        m_immediateContext->UnlockContext();
    }

    // 0x100c258c0
    void RenderContext::ResetDeferredFrames() {
        __94 local_e0;
        __95 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) != '\0') {
            local_d0.field_0._0_1_ = 0;
            local_e0.field_8 = &local_d0;
            local_e0.field_0 = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderContext::ResetDeferredFrames()::__94, void>(local_c8, &local_e0);
            RunImmediatelyOnRenderThread(*local_c8);
            WaitWithMainThreadEventLoop<RenderContext::ResetDeferredFrames()::__95>(&local_d0);
            field_3712->Wait();
        }
    }

    // 0x100c32bf0
    RenderContext::BindDrawCallState(DrawCallState&)::$_22::~$_22() {
        field_8->~DrawCallState();
    }

    // 0x100c32c00
    RenderContext::BindDrawCallState(DrawCallState&)::$_23::~$_23() {
        field_8->~DrawCallState();
    }

    // 0x100c32c30
    RenderContext::BindDrawCallState(DrawCallState&)::$_24::~$_24() {
        field_8->~DrawCallState();
    }

    // 0x100c32c40
    RenderContext::BindDrawCallState(DrawCallState&)::$_25::~$_25() {
        field_8->~DrawCallState();
    }

    // 0x100c32c50
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::~$_26() {
        field_8->~DispatchCallState();
    }

    // 0x100c32c60
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::~$_27() {
        field_8->~DispatchCallState();
    }

    // 0x100c32c90
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::~$_28() {
        field_8->~DispatchCallState();
    }

    // 0x100c32ca0
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::~$_29() {
        field_8->~DispatchCallState();
    }

    // 0x100c3b2a0: PixelUnpackBuffer::operator=(PixelUnpackBuffer&&) has the same machine code as VertexBuffer::operator=(VertexBuffer&&)

    // 0x100c3f350
    void RenderContext::Init(RenderContextDesc const&)::$_2::operator()() const {
        RenderThread(field_0, field_8);
    }

    // 0x100c3f960: DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction&&) has the same machine code as DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)

    // 0x100c3f960: DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction const&) has the same machine code as DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)

    // 0x100c40160
    void RenderContext::BeginInternal(bool)::$_4::operator()(RenderContext& renderContext) const {
        long lVar1 = field_0;
        *(uint8_t*)(lVar1 + 3193) = 1;
        *(uint16_t*)(lVar1 + 4152) = 0;
    }

    // 0x100c40370
    void RenderContext::BeginInternal(bool)::$_5::operator()(RenderContext& renderContext) const {
        long lVar1 = field_0;
        *(uint8_t*)(lVar1 + 3193) = 1;
        *(uint16_t*)(lVar1 + 4152) = 0;
    }

    // 0x100c40580
    void RenderContext::BeginInternal(bool)::$_6::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->Begin();
    }

    // 0x100c40790
    void RenderContext::BeginInternal(bool)::$_7::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->Begin();
    }

    // 0x100c40aa0
    void RenderContext::BeginInternal(bool)::$_8::operator()(RenderContext& renderContext) const {
        ((FPSCounter*)(*((field_0 + 4144))).operator->())
            ->RecordDrawStartTime(SystemTimer::GetTimeNS<std::chrono::steady_clock>());
    }

    // 0x100c40cc0
    void RenderContext::BeginInternal(bool)::$_9::operator()(RenderContext& renderContext) const {
        ((FPSCounter*)(*((field_0 + 4144))).operator->())
            ->RecordDrawStartTime(SystemTimer::GetTimeNS<std::chrono::steady_clock>());
    }

    // 0x100c40ee0
    void RenderContext::BeginInternal(bool)::$_10::operator()(RenderContext& renderContext) const {
        CleanUpDeadObjects(field_0);
    }

    // 0x100c410e0
    void RenderContext::BeginInternal(bool)::$_11::operator()(RenderContext& renderContext) const {
        CleanUpDeadObjects(field_0);
    }

    // 0x100c41f00
    void RenderContext::Present()::$_18::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->Present();
    }

    // 0x100c42110
    void RenderContext::Present()::$_19::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->Present();
    }

    // 0x100c42320
    void RenderContext::SetInputAssemblerState(InputAssemblerState const*)::$_20::operator()(
        RenderContext& renderContext) const {
        ((field_0 + 16))->SetInputAssemblerState(nullptr);
    }

    // 0x100c42530
    void RenderContext::SetInputAssemblerState(InputAssemblerState const*)::$_21::operator()(
        RenderContext& renderContext) const {
        ((field_0 + 16))->SetInputAssemblerState(nullptr);
    }

    // 0x100c42720
    RenderContext::BindDrawCallState(DrawCallState&)::$_22::$_22($_22&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c42780
    RenderContext::BindDrawCallState(DrawCallState&)::$_22::$_22(const $_22& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c427c0
    void RenderContext::BindDrawCallState(DrawCallState&)::$_22::operator()(RenderContext& renderContext) const {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c429c0
    RenderContext::BindDrawCallState(DrawCallState&)::$_23::$_23($_23&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c42a20
    RenderContext::BindDrawCallState(DrawCallState&)::$_23::$_23(const $_23& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c42a60
    void RenderContext::BindDrawCallState(DrawCallState&)::$_23::operator()(RenderContext& renderContext) const {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c44bf0
    RenderContext::BindDrawCallState(DrawCallState&)::$_24::$_24($_24&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c44c50
    RenderContext::BindDrawCallState(DrawCallState&)::$_24::$_24(const $_24& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c44c90
    void RenderContext::BindDrawCallState(DrawCallState&)::$_24::operator()(RenderContext& renderContext) const {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c44e90
    RenderContext::BindDrawCallState(DrawCallState&)::$_25::$_25($_25&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c44ef0
    RenderContext::BindDrawCallState(DrawCallState&)::$_25::$_25(const $_25& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DrawCallState(*((arg1 + 8)));
    }

    // 0x100c44f30
    void RenderContext::BindDrawCallState(DrawCallState&)::$_25::operator()(RenderContext& renderContext) const {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c45130
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::$_26($_26&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c45190
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::$_26(const $_26& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c451d0
    void
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::operator()(RenderContext& renderContext) const {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c453d0
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::$_27($_27&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c45430
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::$_27(const $_27& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c45470
    void
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::operator()(RenderContext& renderContext) const {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c45d50
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::$_28($_28&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c45db0
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::$_28(const $_28& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c45df0
    void
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::operator()(RenderContext& renderContext) const {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c45ff0
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::$_29($_29&& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c46050
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::$_29(const $_29& arg1) {
        field_0 = *(RenderContext**)arg1;
        new (field_8) DispatchCallState(*((arg1 + 8)));
    }

    // 0x100c46090
    void
    RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::operator()(RenderContext& renderContext) const {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c46290
    RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::$_30($_30&& arg1) {
        field_0 = *(long*)arg1;
        new (&field_8) WrapArray(*((arg1 + 8)));
        field_24 = *(uint64_t*)(arg1 + 24);
    }

    // 0x100c46300
    RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::$_30(const $_30& arg1) {
        field_0 = *(long*)arg1;
        new (&field_8) WrapArray(*((arg1 + 8)));
        field_24 = *(uint64_t*)(arg1 + 24);
    }

    // 0x100c46350
    void RenderContext::SetViewports(Viewport const*,
                                     unsigned long)::$_30::operator()(RenderContext& renderContext) const {
        long lVar1 = field_0;
        auto viewport = field_8.end();
        ((lVar1 + 16))->SetViewports(viewport, field_24);
    }

    // 0x100c46550
    RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::$_31($_31&& arg1) {
        field_0 = *(long*)arg1;
        new (&field_8) WrapArray(*((arg1 + 8)));
        field_24 = *(uint64_t*)(arg1 + 24);
    }

    // 0x100c465c0
    RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::$_31(const $_31& arg1) {
        field_0 = *(long*)arg1;
        new (&field_8) WrapArray(*((arg1 + 8)));
        field_24 = *(uint64_t*)(arg1 + 24);
    }

    // 0x100c46610
    void RenderContext::SetViewports(Viewport const*,
                                     unsigned long)::$_31::operator()(RenderContext& renderContext) const {
        long lVar1 = field_0;
        auto viewport = field_8.end();
        ((lVar1 + 16))->SetViewports(viewport, field_24);
    }

    // 0x100c46850
    void RenderContext::SetScissorRectangle(bool, int, int, int,
                                            int)::$_32::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->SetScissorRectangle((bool)field_8, field_12, field_16, field_20, field_24);
    }

    // 0x100c46a90
    void RenderContext::SetScissorRectangle(bool, int, int, int,
                                            int)::$_33::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->SetScissorRectangle((bool)field_8, field_12, field_16, field_20, field_24);
    }

    // 0x100c46cb0
    void RenderContext::SetRenderTargets(RenderTargets const*)::$_34::operator()(RenderContext& renderContext) const {
        RenderContext* renderContext_00 = field_8;
        if (field_0->CheckTexturesAlive(*renderContext_00) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            936, nullptr);
        }
        renderContext_00->m_immediateContext->SetRenderTargets(field_0);
    }

    // 0x100c46ef0
    void RenderContext::SetRenderTargets(RenderTargets const*)::$_35::operator()(RenderContext& renderContext) const {
        RenderContext* renderContext_00 = field_8;
        if (field_0->CheckTexturesAlive(*renderContext_00) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            936, nullptr);
        }
        renderContext_00->m_immediateContext->SetRenderTargets(field_0);
    }

    // 0x100c47630
    void RenderContext::ClearDepthStencilTarget(float, unsigned int,
                                                unsigned int)::$_38::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (IsCurrentRenderTargetAlive(this_00, field_8) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            972, nullptr);
        }
        this_00->m_immediateContext->ClearDepthStencilTarget(field_16, field_20, field_24);
    }

    // 0x100c478a0
    void RenderContext::ClearDepthStencilTarget(float, unsigned int,
                                                unsigned int)::$_39::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (IsCurrentRenderTargetAlive(this_00, field_8) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            972, nullptr);
        }
        this_00->m_immediateContext->ClearDepthStencilTarget(field_16, field_20, field_24);
    }

    // 0x100c47b10
    void RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int,
                                                unsigned int)::$_40::operator()(RenderContext& renderContext) const {
        RenderContext* renderContext_00 = field_8;
        if (field_0->CheckTexturesAlive(*renderContext_00) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            988, nullptr);
        }
        renderContext_00->m_immediateContext->ClearDepthStencilTarget(field_0, field_16, field_20, field_24);
    }

    // 0x100c47d80
    void RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int,
                                                unsigned int)::$_41::operator()(RenderContext& renderContext) const {
        RenderContext* renderContext_00 = field_8;
        if (field_0->CheckTexturesAlive(*renderContext_00) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            988, nullptr);
        }
        renderContext_00->m_immediateContext->ClearDepthStencilTarget(field_0, field_16, field_20, field_24);
    }

    // 0x100c47fd0
    void RenderContext::SetShaders(ShaderProgram const*)::$_42::operator()(RenderContext& renderContext) const {
        RenderResource* renderResource;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            renderResource = (RenderResource*)&field_8->field_12;
            if (field_8 == nullptr) {
                renderResource = nullptr;
            }
            if (IsObjectAlive(this_00, renderResource) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        this_00->m_immediateContext->SetShaders(field_8);
    }

    // 0x100c48220
    void RenderContext::SetShaders(ShaderProgram const*)::$_43::operator()(RenderContext& renderContext) const {
        RenderResource* renderResource;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            renderResource = (RenderResource*)&field_8->field_12;
            if (field_8 == nullptr) {
                renderResource = nullptr;
            }
            if (IsObjectAlive(this_00, renderResource) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        this_00->m_immediateContext->SetShaders(field_8);
    }

    // 0x100c48490
    void RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*,
                                         unsigned int const*)::$_44::operator()(RenderContext& renderContext) const {
        bool cVar1;
        unsigned int* in_RCX;
        unsigned long uVar3;
        unsigned int* in_R8;
        bool bVar4;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if ((*(char*)(lVar2 + 11) != '\0') && (field_8 != 0)) {
            cVar1 = IsObjectAlive(this_00, (RenderResource*)*field_16);
            bVar4 = true;
            if (cVar1) {
                uVar3 = 1;
                do {
                    bVar4 = uVar3 < field_8;
                    if (!bVar4)
                        goto LAB_100c48514;
                    cVar1 = IsObjectAlive(this_00, (RenderResource*)field_16[uVar3]);
                    uVar3 = uVar3 + 1;
                } while (cVar1);
            }
            if (bVar4) {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
    LAB_100c48514:
        this_00->m_immediateContext->SetVertexBuffers(field_8, field_16, in_RCX, in_R8);
    }

    // 0x100c48750
    void RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*,
                                         unsigned int const*)::$_45::operator()(RenderContext& renderContext) const {
        bool cVar1;
        unsigned int* in_RCX;
        unsigned long uVar3;
        unsigned int* in_R8;
        bool bVar4;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if ((*(char*)(lVar2 + 11) != '\0') && (field_8 != 0)) {
            cVar1 = IsObjectAlive(this_00, (RenderResource*)*field_16);
            bVar4 = true;
            if (cVar1) {
                uVar3 = 1;
                do {
                    bVar4 = uVar3 < field_8;
                    if (!bVar4)
                        goto LAB_100c487d4;
                    cVar1 = IsObjectAlive(this_00, (RenderResource*)field_16[uVar3]);
                    uVar3 = uVar3 + 1;
                } while (cVar1);
            }
            if (bVar4) {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
    LAB_100c487d4:
        this_00->m_immediateContext->SetVertexBuffers(field_8, field_16, in_RCX, in_R8);
    }

    // 0x100c48a10
    void RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int,
                                        unsigned int)::$_46::operator()(RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c48a48:
            this_00->m_immediateContext->SetVertexBuffer(field_8, field_16, field_20);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c48a48;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c48c80
    void RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int,
                                        unsigned int)::$_47::operator()(RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c48cb8:
            this_00->m_immediateContext->SetVertexBuffer(field_8, field_16, field_20);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c48cb8;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c48ef0
    void RenderContext::SetIndexBuffer(IndexBuffer const*,
                                       unsigned int)::$_48::operator()(RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c48f28:
            ImmediateRenderContext::SetIndexBuffer(this_00->m_immediateContext, (unsigned int)field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c48f28;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c49160
    void RenderContext::SetIndexBuffer(IndexBuffer const*,
                                       unsigned int)::$_49::operator()(RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c49198:
            ImmediateRenderContext::SetIndexBuffer(this_00->m_immediateContext, (unsigned int)field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c49198;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c493b0
    void RenderContext::SetVertexDeclaration(VertexDeclaration const*)::$_50::operator()(
        RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if ((*(char*)(lVar1 + 11) == '\0') || (cVar2 = IsObjectAlive(this_00, field_8), cVar2)) {
            this_00->m_immediateContext->SetVertexDeclaration(field_8);
            return;
        }
        SkipCurrentDrawCall(this_00);
    }

    // 0x100c495f0
    void RenderContext::SetVertexDeclaration(VertexDeclaration const*)::$_51::operator()(
        RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if ((*(char*)(lVar1 + 11) == '\0') || (cVar2 = IsObjectAlive(this_00, field_8), cVar2)) {
            this_00->m_immediateContext->SetVertexDeclaration(field_8);
            return;
        }
        SkipCurrentDrawCall(this_00);
    }

    // 0x100c49850
    void RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*,
                                                bool)::$_52::operator()(RenderContext& renderContext) const {
        unsigned int in_ECX;
        Texture* in_RDX;
        SamplerState* in_R8;

        SetVSTextureSamplerPair((unsigned int)renderContext, in_RDX, in_ECX, in_R8, false);
    }

    // 0x100c49a70
    void RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*,
                                                bool)::$_53::operator()(RenderContext& renderContext) const {
        unsigned int in_ECX;
        Texture* in_RDX;
        SamplerState* in_R8;

        SetVSTextureSamplerPair((unsigned int)renderContext, in_RDX, in_ECX, in_R8, false);
    }

    // 0x100c49c90
    void RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*,
                                                bool)::$_54::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->SetPSTextureSamplerPair(field_8, field_16, field_24, field_32, (bool)field_40);
    }

    // 0x100c49ed0
    void RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*,
                                                bool)::$_55::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->SetPSTextureSamplerPair(field_8, field_16, field_24, field_32, (bool)field_40);
    }

    // 0x100c4a110
    void RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_56::operator()(
        RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a148:
            this_00->m_immediateContext->SetVSShaderConstBuffer(field_16, field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c4a148;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4a380
    void RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_57::operator()(
        RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a3b8:
            this_00->m_immediateContext->SetVSShaderConstBuffer(field_16, field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c4a3b8;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4a5f0
    void RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_58::operator()(
        RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a628:
            this_00->m_immediateContext->SetPSShaderConstBuffer(field_16, field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c4a628;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4a860
    void RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_59::operator()(
        RenderContext& renderContext) const {
        bool cVar2;

        RenderContext* this_00 = field_0;
        long lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a898:
            this_00->m_immediateContext->SetPSShaderConstBuffer(field_16, field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2) {
                cVar2 = field_8->IsCreated();
                if (cVar2)
                    goto LAB_100c4a898;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4aaf0
    void RenderContext::SetDepthStencilState(DepthStencilState const*)::$_60::operator()(
        RenderContext& renderContext) const {
        long lVar1 = field_56;
        DepthStencilState local_60;
        local_60.Create(*this);
        ((lVar1 + 16))->SetDepthStencilState(&local_60);
    }

    // 0x100c4ad90
    void RenderContext::SetDepthStencilState(DepthStencilState const*)::$_61::operator()(
        RenderContext& renderContext) const {
        long lVar1 = field_56;
        DepthStencilState local_60;
        local_60.Create(*this);
        ((lVar1 + 16))->SetDepthStencilState(&local_60);
    }

    // 0x100c4b010
    void
    RenderContext::SetRasteriserState(RasteriserState const*)::$_62::operator()(RenderContext& renderContext) const {
        long lVar1 = field_32;
        RasteriserState local_48;
        local_48.Create(*this);
        ((lVar1 + 16))->SetRasteriserState(&local_48);
    }

    // 0x100c4b290
    void
    RenderContext::SetRasteriserState(RasteriserState const*)::$_63::operator()(RenderContext& renderContext) const {
        long lVar1 = field_32;
        RasteriserState local_48;
        local_48.Create(*this);
        ((lVar1 + 16))->SetRasteriserState(&local_48);
    }

    // 0x100c4b530
    void RenderContext::SetBlendState(BlendState const*)::$_64::operator()(RenderContext& renderContext) const {
        long lVar1 = field_72;
        BlendState local_70;
        local_70.Create(*this);
        ((lVar1 + 16))->SetBlendState(&local_70);
    }

    // 0x100c4b7d0
    void RenderContext::SetBlendState(BlendState const*)::$_65::operator()(RenderContext& renderContext) const {
        long lVar1 = field_72;
        BlendState local_70;
        local_70.Create(*this);
        ((lVar1 + 16))->SetBlendState(&local_70);
    }

    // 0x100c4ba50
    void RenderContext::DrawPrimitives(PrimitiveType, int, int)::$_66::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            this_00->m_immediateContext->DrawPrimitives(field_8, field_12, field_16);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4bca0
    void RenderContext::DrawPrimitives(PrimitiveType, int, int)::$_67::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            this_00->m_immediateContext->DrawPrimitives(field_8, field_12, field_16);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4beb0
    RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_68::$_68($_68&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
    }

    // 0x100c4bf30
    RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                       int const*)::$_68::$_68(const $_68& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
    }

    // 0x100c4bf90
    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_68::operator()(RenderContext& renderContext) const {
        PrimitiveType primitiveType;
        unsigned int arg2;
        int* arg3;
        int* arg4;

        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            primitiveType = field_8;
            arg2 = field_12;
            arg3 = (int*)field_16.end();
            arg4 = (int*)field_32.end();
            this_00->m_immediateContext->DrawMultiPrimitives(primitiveType, arg2, arg3, arg4);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c1e0
    RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_69::$_69($_69&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
    }

    // 0x100c4c260
    RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                       int const*)::$_69::$_69(const $_69& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
    }

    // 0x100c4c2c0
    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_69::operator()(RenderContext& renderContext) const {
        PrimitiveType primitiveType;
        unsigned int arg2;
        int* arg3;
        int* arg4;

        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            primitiveType = field_8;
            arg2 = field_12;
            arg3 = (int*)field_16.end();
            arg4 = (int*)field_32.end();
            this_00->m_immediateContext->DrawMultiPrimitives(primitiveType, arg2, arg3, arg4);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c550
    void RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int,
                                              IndexType)::$_70::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            this_00->m_immediateContext->DrawIndexedPrimitives(field_8, field_12, field_16, field_20);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c7a0
    void RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int,
                                              IndexType)::$_71::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            this_00->m_immediateContext->DrawIndexedPrimitives(field_8, field_12, field_16, field_20);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c9b0
    RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*,
                                              IndexType)::$_72::$_72($_72&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
        field_48 = *(uint32_t*)(arg1 + 48);
    }

    // 0x100c4ca30
    RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*,
                                              IndexType)::$_72::$_72(const $_72& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
        field_48 = *(uint32_t*)(arg1 + 48);
    }

    // 0x100c4ca90
    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*,
                                                   IndexType)::$_72::operator()(RenderContext& renderContext) const {
        PrimitiveType primitiveType;
        unsigned int arg2;
        int* arg3;
        void** arg4;

        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            primitiveType = field_8;
            arg2 = field_12;
            arg3 = (int*)field_16.end();
            arg4 = (void**)field_32.end();
            this_00->m_immediateContext->DrawMultiIndexedPrimitives(primitiveType, arg2, arg3, arg4, field_48);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4cce0
    RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*,
                                              IndexType)::$_73::$_73($_73&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
        field_48 = *(uint32_t*)(arg1 + 48);
    }

    // 0x100c4cd60
    RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*,
                                              IndexType)::$_73::$_73(const $_73& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(RenderContext**)arg1;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_16) WrapArray(*((arg1 + 16)));
        new (&field_32) WrapArray(*((arg1 + 32)));
        field_48 = *(uint32_t*)(arg1 + 48);
    }

    // 0x100c4cdc0
    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*,
                                                   IndexType)::$_73::operator()(RenderContext& renderContext) const {
        PrimitiveType primitiveType;
        unsigned int arg2;
        int* arg3;
        void** arg4;

        RenderContext* this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            primitiveType = field_8;
            arg2 = field_12;
            arg3 = (int*)field_16.end();
            arg4 = (void**)field_32.end();
            this_00->m_immediateContext->DrawMultiIndexedPrimitives(primitiveType, arg2, arg3, arg4, field_48);
        }
        PostDrawCall(this_00);
    }

    // 0x100c4d050
    void RenderContext::DispatchCompute(unsigned int, unsigned int,
                                        unsigned int)::$_74::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (PreDispatchCall(this_00) != '\0') {
            this_00->m_immediateContext->DispatchCompute(field_8, field_12, field_16);
        }
        PostDispatchCall(this_00);
    }

    // 0x100c4d2a0
    void RenderContext::DispatchCompute(unsigned int, unsigned int,
                                        unsigned int)::$_75::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (PreDispatchCall(this_00) != '\0') {
            this_00->m_immediateContext->DispatchCompute(field_8, field_12, field_16);
        }
        PostDispatchCall(this_00);
    }

    // 0x100c4d4d0
    void RenderContext::MemoryBarrier(unsigned int)::$_76::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->MemoryBarrier(field_8);
    }

    // 0x100c4d6e0
    void RenderContext::MemoryBarrier(unsigned int)::$_77::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->MemoryBarrier(field_8);
    }

    // 0x100c4d790
    void RenderContext::FinishRendering()::$_78::operator()(RenderContext& renderContext) const {
        *(uint8_t*)(field_0 + 3193) = 0;
    }

    // 0x100c4d830
    void RenderContext::FinishRendering()::$_79::operator()(RenderContext& renderContext) const {
        *(uint8_t*)(field_0 + 3193) = 0;
        field_8->Signal();
    }

    // 0x100c4d8e0
    void RenderContext::FinishRendering()::$_80::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = field_0;
        if (GetImmediateContext(renderContext)->ShowSkybox() != '\0') {
            LogAssert("!renderContext.GetImmediateContext().IsInsideBeginEnd()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1253, nullptr);
        }
        long lVar2 = GetDesc(this_00);
        if ((*(char*)(lVar2 + 10) == '\0') && (this_00->field_3193 != '\0')) {
            LogAssert("GetDesc().m_SecondaryContext || !m_enablePresent",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1254, nullptr);
        }
        ImmediateRenderContext::FinishRendering();
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                  "RenderContext.cpp",
                  1258, "Finished rendering");
    }

    // 0x100c4dc00
    void RenderContext::CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                             CubeFace)::$_81::operator()(RenderContext& renderContext) const {
        bool cVar1;
        RenderResource* renderResource;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) == '\0') {
        LAB_100c4dc43:
            cVar1 = IsCurrentRenderTargetAlive(this_00, field_16);
            if (!cVar1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                1304, nullptr);
            }
            this_00->m_immediateContext->CopyColourTargetData(field_8, field_52, field_28, field_32, field_36, field_40,
                                                              field_44, field_48, field_52, field_56);
        } else {
            renderResource = (RenderResource*)&field_8->field_8;
            if (field_8 == nullptr) {
                renderResource = nullptr;
            }
            cVar1 = IsObjectAlive(this_00, renderResource);
            if (cVar1) {
                cVar1 = field_8->IsCreated();
                if (cVar1)
                    goto LAB_100c4dc43;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4def0
    void RenderContext::CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                             CubeFace)::$_82::operator()(RenderContext& renderContext) const {
        bool cVar1;
        RenderResource* renderResource;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) == '\0') {
        LAB_100c4df33:
            cVar1 = IsCurrentRenderTargetAlive(this_00, field_16);
            if (!cVar1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                1304, nullptr);
            }
            this_00->m_immediateContext->CopyColourTargetData(field_8, field_52, field_28, field_32, field_36, field_40,
                                                              field_44, field_48, field_52, field_56);
        } else {
            renderResource = (RenderResource*)&field_8->field_8;
            if (field_8 == nullptr) {
                renderResource = nullptr;
            }
            cVar1 = IsObjectAlive(this_00, renderResource);
            if (cVar1) {
                cVar1 = field_8->IsCreated();
                if (cVar1)
                    goto LAB_100c4df33;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4e7e0
    void RenderContext::FlushTextureCache()::$_85::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->FlushTextureCache();
    }

    // 0x100c4e9f0
    void RenderContext::FlushTextureCache()::$_86::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->FlushTextureCache();
    }

    // 0x100c4f000
    void RenderContext::OnDeviceLost()::$_89::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->OnDeviceLost();
    }

    // 0x100c4f210
    void RenderContext::SetVSyncMode(VSyncMode)::$_90::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->SetVSyncMode(field_8);
    }

    // 0x100c4f420
    void RenderContext::SetVSyncMode(VSyncMode)::$_91::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->SetVSyncMode(field_8);
    }

    // 0x100c50130
    void RenderContext::ResetDeferredFrames()::$_94::operator()(RenderContext& renderContext) const {
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        uint64_t uVar1 = field_0;
        auto this_00 = BaseApp::GetAppInstance();
        uint64_t local_d0 = field_8;
        uint64_t local_d8 = uVar1;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            local_c8, (_lambda_jag__BaseApp___1_*)&local_d8);
        this_00->RunSynchronousMainThreadEvent(*local_c8);
    }

    // 0x100c50270
    void RenderContext::ResetDeferredFrames()::$_94::operator()(RenderContext&) const ::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * baseApp) const {
        long lVar1 = *(long*)this;
        auto local_28 = std::make_unique<SwappingDoubleBuffer<DeferredFrameData>>();
        ((lVar1 + 3560))->operator=(&local_28);
        (*(*(atomic<bool>**)(this + 8))) = true;
    }

    // 0x100c502e0
    void RenderContext::ResetDeferredFrames()::$_95::operator()() const {
        memory_order in_ESI;

        field_0->load(in_ESI);
    }

    // 0x100c51ba0
    void RenderContext::PostInit(RenderContextDesc const&)::$_97::operator()(RenderContext& renderContext) const {
        ((field_0 + 16))->UpdateBackBuffer(*field_8, *field_16);
    }

    // 0x100c51de0
    void RenderContext::BindImageTexture(unsigned int, Texture const*, int,
                                         LockType)::$_98::operator()(RenderContext& renderContext) const {
        RenderResource* renderResource;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            renderResource = (RenderResource*)&field_8->field_8;
            if (field_8 == nullptr) {
                renderResource = nullptr;
            }
            if (IsObjectAlive(this_00, renderResource) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        this_00->m_immediateContext->BindImageTexture(field_16, field_8, field_20, field_24);
    }

    // 0x100c52050
    void RenderContext::BindImageTexture(unsigned int, Texture const*, int,
                                         LockType)::$_99::operator()(RenderContext& renderContext) const {
        RenderResource* renderResource;

        RenderContext* this_00 = field_0;
        long lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            renderResource = (RenderResource*)&field_8->field_8;
            if (field_8 == nullptr) {
                renderResource = nullptr;
            }
            if (IsObjectAlive(this_00, renderResource) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        this_00->m_immediateContext->BindImageTexture(field_16, field_8, field_20, field_24);
    }

    // 0x100c522a0
    void RenderContext::SetTexturesFromStateCache()::$_100::operator()(RenderContext& renderContext) const {
        (((field_0 + 16))->GetStateCache())->SetTextures();
    }

    // 0x100c524b0
    void RenderContext::SetTexturesFromStateCache()::$_101::operator()(RenderContext& renderContext) const {
        (((field_0 + 16))->GetStateCache())->SetTextures();
    }

} // namespace jag::render
