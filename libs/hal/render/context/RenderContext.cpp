// libs/hal/render/context/RenderContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderContext.h"

namespace jag::render {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    RenderContext::GetImmediateContextUnsafe() const;

    // 0x100c13810, 80 bytes, placed by class name and debug map
    // RenderContext::IsLocked() const
    undefined4 RenderContext::IsLocked() {
        ImmediateRenderContext* this_00;

        if (ShouldDefer(this) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1614, (char*)0);
        }
        this_00 = (ImmediateRenderContext*)GetImmediateContext(this);
        return this_00->IsLocked();
    }

    // 0x100c193b0, 256 bytes, placed by __FILE__ string
    // DeferredFrameData::Clear()
    void DeferredFrameData::Clear() {
        long lVar1;
        long lVar2;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined1* this_00;

        this_00 = &field_112;
        lVar1 = this_00->HeapBeginPtr();
        lVar2 = this_00->end();
        do {
            if (lVar1 == lVar2) {
                (&field_152)->clear();
                (&field_192)->clear();
                (&field_232)->clear();
                (&field_272)->clear();
                (&field_80)->clear();
                (&field_312)->clear();
                (&field_368)->clear();
                Clear();
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                return;
            }
            if (*(int*)(lVar1 + 16) == 1) {
                if (*(long*)(lVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("scratchAlloc.m_data != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              47, (char*)0, in_R8, in_R9, this_00);
                }
                aligned_dealloc(*(void**)(lVar1 + 8));
            }
            lVar1 = lVar1 + 24;
        } while (true);
    }

    // 0x100c19670, 688 bytes, base-object constructor, placed by class name
    // RenderContext::RenderContext()
    void RenderContext::RenderContext() {
        allocator local_40[16];

        new (this) RenderDeviceCallback(false, 0);
        field_0 = &PTR__RenderContext_100f29040;
        new (m_immediateContext) ImmediateRenderContext();
        std::unique_ptr<std::thread, std::default_delete<std::thread>>::unique_ptr<true, void>(
            (unique_ptr<std::thread, std::default_delete<std::thread>>*)&field_3184);
        new (&field_3192, true) std::atomic<bool>();
        field_3193 = 1;
        field_3194 = '\0';
        new (&field_3195, false) std::atomic<bool>();
        new (field_3200) Fence();
        new (field_3320) Fence();
        new (m_destroyRenderThreadFence) Fence();
        std::unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>::
            unique_ptr<true, void>((unique_ptr<MultiBuffer<DeferredFrameData>,
                                               std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560);
        field_3568 = (DeferredFrameData*)0;
        field_3576 = 0;
        new (&field_3584) eastl::vector<DeferredRenderFunction, eastl::allocator>();
        eastl::allocator::allocator(local_40, "EASTL hash_set");
        new (&field_3616, local_40)
            eastl::hash_set<KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                            eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false>();
        new (&field_3672) eastl::vector<void_const*, eastl::allocator>();
        std::atomic<fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const*>::atomic((function*)field_3704);
        new ((field_3704 + 8)) Fence();
        *(undefined4*)(field_3704 + 128) = 0;
        field_3704[132] = 0;
        new ((field_3704 + 133), false) std::atomic<bool>();
        eastl::allocator::allocator(local_40, "EASTL hash_map");
        new ((field_3704 + 136), local_40)
            eastl::hash_map<RenderResource_const*, signed char, eastl::hash<RenderResource_const*>,
                            eastl::equal_to<RenderResource_const*>, eastl::allocator, false>();
        new (&field_3896) std::mutex();
        field_3960 = 0;
        field_3964 = 0;
        new (&field_3968) eastl::vector<RenderResource_const*, eastl::allocator>();
        new (&field_4000) std::mutex();
        new (&m_pCurrentState) RenderState();
        std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::unique_ptr<true, void>(
            (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)&field_4144);
        field_4152 = 0;
        field_4153 = 0;
    }

    // 0x100c19a20, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::RenderContext(): jumps straight to the base-object constructor

    // 0x100c19a30, 592 bytes, base-object destructor, placed by class name
    // RenderContext::~RenderContext()
    void RenderContext::~RenderContext() {
        bool bVar1;
        long lVar2;

        field_0 = &PTR__RenderContext_100f29040;
        lVar2 = GetDesc(this);
        if (*(char*)(lVar2 + 10) == '\0') {
            bVar1 = (&field_3560)->operator_cast_to_bool();
            if (bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetDesc().m_SecondaryContext || !m_deferredFrames",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          72, (char*)0);
            }
        }
        lVar2 = GetDesc(this);
        if (*(char*)(lVar2 + 11) == '\0') {
            bVar1 = (&field_3184)->operator_cast_to_bool();
            if (bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_renderThread",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          84, (char*)0);
            }
            m_immediateContext->Destroy();
        } else {
            StopRenderThread(this);
            bVar1 = (&field_3184)->operator_cast_to_bool();
            if (bVar1) {
                std::unique_ptr<std::thread, std::default_delete<std::thread>>::operator->(
                    (unique_ptr<std::thread, std::default_delete<std::thread>>*)&field_3184);
                std::thread::join();
            }
        }
        (&field_4144)->~unique_ptr();
        (&field_4000)->~mutex();
        (&field_3968)->~vector();
        (&field_3896)->~mutex();
        ((field_3704 + 136))->~hash_map();
        ((field_3704 + 8))->~Fence();
        (&field_3672)->~vector();
        (&field_3616)->~hash_set();
        (&field_3584)->~vector();
        (&field_3560)->~unique_ptr();
        m_destroyRenderThreadFence->~Fence();
        field_3320->~Fence();
        field_3200->~Fence();
        (&field_3184)->~unique_ptr();
        m_immediateContext->~ImmediateRenderContext();
        ~RenderDeviceCallback();
    }

    // 0x100c19cb0, 160 bytes, placed by class name
    // RenderContext::StopRenderThread()
    void RenderContext::StopRenderThread() {
        undefined1* this_00;
        long lVar2;
        long* plVar3;

        this_00 = &field_3560;
        if (this_00->operator_cast_to_bool()) {
            lVar2 = GetDesc(this);
            if (*(char*)(lVar2 + 11) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("GetDesc().m_DeferredContext",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          115, (char*)0);
            }
            std::atomic<bool>::operator=((atomic<bool>*)&field_3192, false);
            plVar3 =
                (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                       std::default_delete<MultiBuffer<DeferredFrameData>>>::
                operator->(
                    (unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>*)
                        this_00);
            (**(code**)(*plVar3 + 80))(plVar3);
            field_3200->Wait();
            this_00->reset(0);
            field_3320->Signal();
        }
    }

    // 0x100c19d90, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::~RenderContext(): jumps straight to the base-object destructor

    // 0x100c19da0, 32 bytes, deleting destructor, placed by class name
    // RenderContext::~RenderContext()
    void RenderContext::~RenderContext() {
        ~RenderContext(this);
        operator_delete(this);
    }

    // 0x100c19dc0, 144 bytes, placed by class name
    // RenderContext::Shutdown()
    void RenderContext::Shutdown() {
        atomic<bool>* this_00;
        long lVar1;
        RenderDevice* this_01;
        atomic<bool>* this_02;

        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 10) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!GetDesc().m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      92, (char*)0);
        }
        this_00 = (atomic<bool>*)(field_3704 + 133);
        this_02 = this_00;
        std::atomic<bool>::operator=(this_00, true);
        this_01 = (RenderDevice*)this_02->Instance();
        this_01->TriggerDeviceLoss();
        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) == '\0') {
            m_immediateContext->DestroyRenderingResources();
        } else {
            StopRenderThread(this);
        }
        std::atomic<bool>::operator=(this_00, false);
    }

    // 0x100c1a230, 336 bytes, placed by class name
    // RenderContext::Init(RenderContextDesc const&)
    bool RenderContext::Init(RenderContextDesc* param_1) {
        char cVar1;
        bool bVar2;
        BaseApp* this_00;
        RenderDevice* this_01;
        RenderContext* local_48;
        RenderContextDesc* local_40;
        undefined4 local_38[2];

        if (*(char*)((long)&param_1->field_8 + 3) == '\0') {
            this_01 = (RenderDevice*)Instance();
            this_01->OnContextPreCreate(this);
            (m_immediateContext, param_1)->Create();
            PostInit(this, param_1);
            bVar2 = true;
        } else {
            cVar1 = this_thread::IsMainThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          133, (char*)0);
            }
            std::make_unique<SwappingDoubleBuffer<DeferredFrameData>>();
            std::unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>::
            operator=((unique_ptr<MultiBuffer<DeferredFrameData>,
                                  std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560,
                      (unique_ptr*)&local_48);
            local_48.~unique_ptr();
            local_48 = this;
            local_40 = param_1;
            std::make_unique<std::thread, (RenderContextDesc_const&)->Init()::__2>((__2*)local_38);
            std::unique_ptr<std::thread, std::default_delete<std::thread>>::operator=(
                (unique_ptr<std::thread, std::default_delete<std::thread>>*)&field_3184, (unique_ptr*)local_38);
            local_38->~unique_ptr();
            bVar2 = (&field_3195)->operator_cast_to_bool();
            if (!bVar2) {
                do {
                    this_00 = (BaseApp*)BaseApp::GetAppInstance();
                    this_00->ExecuteMainThreadEvents();
                    local_38[0] = 500;
                    std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)&local_48,
                                                                                                 (type*)local_38);
                    std::this_thread::sleep_for((duration*)&local_48);
                    bVar2 = (&field_3195)->operator_cast_to_bool();
                } while (!bVar2);
            }
            cVar1 = field_3194;
            if (cVar1 != '\0') {
                PostInit(this, param_1);
            }
            bVar2 = cVar1 != '\0';
            field_3194 = cVar1;
        }
        return bVar2;
    }

    // 0x100c1a600, 640 bytes, placed by class name
    // RenderContext::RunSynchronouslyOnRenderThread(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&, bool)
    void RenderContext::RunSynchronouslyOnRenderThread(function* param_1, bool param_2) {
        char cVar1;
        undefined8 uVar4;
        char* local_188;
        SyncFence* local_180;
        function* local_178;
        RenderContext* local_170;
        SyncFence* local_168;
        SyncFence local_160;
        SyncFence local_158;
        char local_149;
        function local_148;
        Fence local_a8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_149 = param_2;
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            new (&local_148) lock_guard<RenderContext>(this);
            fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
            operator()(
                (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)param_1,
                (TextureAtlasSlot*)this);
            local_148.~lock_guard();
        } else {
            cVar1 = this_thread::IsMainThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          162, (char*)0);
            }
            if ((&field_3560)->operator_cast_to_bool()) {
                new (&local_a8) Fence();
                new (&local_160) SyncFence();
                new (&local_158) SyncFence();
                if (GetReadyState(this) == 1) {
                    local_149 = '\0';
                }
                if (local_149 != '\0') {
                    cVar1 = local_160.Create();
                    if (cVar1 == '\0') {
                        uVar4 = logger::default_logger();
                        logger::Logger::Log(
                            uVar4, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            186, "Failed to create sync fence for main thread side of synchronous render function");
                    }
                }
                local_188 = &local_149;
                local_180 = &local_160;
                local_178 = param_1;
                local_170 = this;
                local_168 = &local_158;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderContext::RunSynchronouslyOnRenderThread(
                        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&,
                        bool)::__3,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_148,
                          (__3*)&local_188);
                RunImmediatelyOnRenderThread(this, &local_148);
                ((field_3704 + 8))->Wait();
                if (local_149 != '\0') {
                    cVar1 = local_158.IsCreated();
                    if (cVar1 != '\0') {
                        local_158.WaitServer();
                    }
                }
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_148);
                local_158.~SyncFence();
                local_160.~SyncFence();
                local_a8.~Fence();
            } else {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/RenderContext.cpp",
                                    221,
                                    "m_deferredFrames was null during RunSynchronouslyOnRenderThread - function "
                                    "discarded. This is ok during shutdown");
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c1a8d0, 176 bytes, placed by class name
    // RenderContext::RunImmediatelyOnRenderThread(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void RenderContext::RunImmediatelyOnRenderThread(function* param_1) {
        char cVar1;
        long* plVar3;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
            operator()(
                (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)param_1,
                (TextureAtlasSlot*)this);
        } else {
            cVar1 = this_thread::IsMainThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          236, (char*)0);
            }
            ((field_3704 + 8))->Reset();
            if (std::__atomic_base<
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const*,
                    false>::exchange(field_3704, param_1) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pPreviousFunction == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          242, (char*)0);
            }
            plVar3 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                            std::default_delete<MultiBuffer<DeferredFrameData>>>::
                     operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                            std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560);
            (**(code**)(*plVar3 + 56))(plVar3);
        }
    }

    // 0x100c1a9b0, 448 bytes, placed by class name
    // RenderContext::AllocateScratch(unsigned long, unsigned long)
    RenderContext* RenderContext::AllocateScratch(ulong param_1, ulong param_2) {
        ulong* puVar2;
        ulong uVar3;
        undefined8 uVar4;
        ulong in_RCX;

        if (ShouldDefer((RenderContext*)param_1) == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                "RenderContext.cpp",
                285,
                "RenderContext::AllocateScratch: Allocating scratch is only allowed from deferred render contexts.");
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      286, (char*)0);
        }
        if (*(long*)(param_1 + 3568) == 0) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                278,
                                "RenderContext::AllocateScratch: Allocating scratch is only allowed during begin/end");
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      279, (char*)0);
        }
        puVar2 = (ulong*)((*(long*)(param_1 + 3568) + 112))->push_back();
        *puVar2 = param_2;
        uVar3 = Allocator::AlignedAlloc(*(ulong*)(param_1 + 3568), param_2, (uint)in_RCX);
        puVar2[1] = uVar3;
        *(undefined4*)(puVar2 + 2) = 0;
        if (uVar3 == 0) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                268,
                                "RenderContext::AllocateScratch: Out of scratch memory for alloc of %zu bytes. Falling "
                                "back to global heap allocation.",
                                param_2);
            uVar3 = aligned_alloc(param_2, in_RCX);
            puVar2[1] = uVar3;
            *(undefined4*)(puVar2 + 2) = 1;
            uVar3 = puVar2[1];
        } else {
            uVar3 = puVar2[1];
        }
        if (uVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("scratch.m_data != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      273, (char*)0);
        }
        *(ulong*)m_immediateContext = puVar2[2];
        uVar3 = puVar2[1];
        field_0 = (undefined**)*puVar2;
        field_8 = (char)uVar3;
        field_9 = (int3)(uVar3 >> 8);
        field_12 = (int)(uVar3 >> 32);
        return this;
    }

    // 0x100c1abe0, 128 bytes, placed by class name
    // RenderContext::RunOnRenderThread(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void RenderContext::RunOnRenderThread(function* param_1) {
        char cVar1;
        vector<DeferredRenderFunction, eastl::allocator>* this_00;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::
            operator()(
                (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)param_1,
                (TextureAtlasSlot*)this);
        } else {
            cVar1 = this_thread::IsMainThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          295, (char*)0);
            }
            if (field_3568 == (DeferredFrameData*)0) {
                this_00 = (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584;
            } else {
                this_00 = (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80;
            }
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&>(this_00,
                                                                                                              param_1);
        }
    }

    // 0x100c1acd0, 192 bytes, placed by class name
    // RenderContext::RunImmediateRenderFunction(bool)
    void RenderContext::RunImmediateRenderFunction(bool param_1) {
        char cVar1;
        RenderDevice* this_00;
        function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>* this_01;
        lock_guard<ImmediateRenderContext> local_28[8];

        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      314, (char*)0);
        }
        this_01 = (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
            std::__atomic_base<
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const*,
                false>::exchange(field_3704, 0);
        if (this_01 !=
            (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)0) {
            lock_guard<ImmediateRenderContext>::lock_guard(local_28, (ImmediateRenderContext*)m_immediateContext);
            fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                    (fixedfunction::Methods)0>::operator()(this_01, (TextureAtlasSlot*)this);
            field_3704[132] = 1;
            ((field_3704 + 8))->Signal();
            local_28->~lock_guard();
        }
        if (!param_1) {
            UnlockDeadObjectsMutex(this);
        }
    }

    // 0x100c1ad90, 96 bytes, placed by class name
    // RenderContext::UnlockDeadObjectsMutex() const
    void RenderContext::UnlockDeadObjectsMutex() {
        long lVar1;

        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1550, (char*)0);
        }
        if (field_3960 != '\0') {
            std::mutex::unlock();
            field_3960 = 0;
        }
    }

    // 0x100c1adf0, 576 bytes, placed by class name
    // RenderContext::RenderThread(RenderContextDesc const&)
    void RenderContext::RenderThread(RenderContextDesc* param_1) {
        undefined1* this_00;
        int* piVar1;
        RenderDevice* this_01;
        uint uVar2;
        threading local_48;
        unique_ptr local_30[8];

        this_thread::SetThreadName("Deferred Render");
        local_48.GetNumCoresByAffinity();
        piVar1 = (int*)std::array<unsigned int, 5ul>::operator[]((array<unsigned int, 5ul>*)&local_48, 1);
        if (*piVar1 == 1) {
            piVar1 = (int*)std::array<unsigned int, 5ul>::operator[]((array<unsigned int, 5ul>*)&local_48, 2);
            uVar2 = 2;
            if (*piVar1 != 0)
                goto LAB_100c1ae4c;
        }
        uVar2 = 1;
    LAB_100c1ae4c:
        this_thread::SetAffinity(uVar2);
        if (*(char*)((long)&param_1->field_8 + 3) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("desc.m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      352, (char*)0);
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
        this_01 = (RenderDevice*)4096->Instance();
        this_01->OnContextPreCreate(this);
        this_00 = m_immediateContext;
        this_00->Create(param_1);
        field_3194 = '\x01';
        std::atomic<bool>::operator=((atomic<bool>*)&field_3195, true);
        std::make_unique<FPSCounter>();
        std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator=(
            (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)&field_4144, local_30);
        local_30->~unique_ptr();
        RenderThreadMainLoop(this);
        ResetKeepAliveSharedPtrs(this, 0);
        this_00->DestroyRenderingResources();
        field_3200->Signal();
        field_3320->Wait();
        this_00->Destroy();
        BucketManager::PrintMetrics();
        m_destroyRenderThreadFence->Signal();
    }

    // 0x100c1b0c0, 752 bytes, placed by class name
    // RenderContext::RenderThreadMainLoop()
    void RenderContext::RenderThreadMainLoop() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long* plVar3;
        long lVar4;
        undefined8 uVar5;
        function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>* this_01;
        function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>* pfVar6;
        Layout* this_02;
        lock_guard<ImmediateRenderContext> local_38[8];

        this_00 = &field_3192;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            do {
                if (field_3960 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_isDeadObjectsMutexLocked",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              403, (char*)0);
                }
                RunImmediateRenderFunction(this, false);
                field_3576 = 0;
                do {
                    bVar1 = this_00->operator_cast_to_bool();
                    if (!bVar1)
                        break;
                    if (field_3960 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!m_isDeadObjectsMutexLocked",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/RenderContext.cpp",
                                  411, (char*)0);
                    }
                    plVar3 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                    std::default_delete<MultiBuffer<DeferredFrameData>>>::
                             operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                    std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560);
                    lVar4 = (**(code**)(*plVar3 + 24))(plVar3);
                    field_3576 = lVar4;
                    if ((lVar4 == 0) && (bVar1 = this_00->operator_cast_to_bool(), bVar1)) {
                        RunImmediateRenderFunction(this, false);
                    }
                } while (field_3576 == 0);
                bVar1 = this_00->operator_cast_to_bool();
                if (!bVar1) {
                    return;
                }
                if (field_3576 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_readFrame",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              425, (char*)0);
                }
                lock_guard<ImmediateRenderContext>::lock_guard(local_38, (ImmediateRenderContext*)m_immediateContext);
                cVar2 = ((field_3576 + 144))->IsCreated();
                if (cVar2 == '\0') {
                    uVar5 = logger::default_logger();
                    logger::Logger::Log(uVar5, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/context/RenderContext.cpp",
                                        442, "readFrame->m_syncFence not created, discarding frame.");
                } else {
                    ((field_3576 + 144))->WaitServer();
                    ((field_3576 + 144))->Destroy();
                    bVar1 = this_00->operator_cast_to_bool();
                    if (!bVar1) {
                    LAB_100c1b37b:
                        local_38->~lock_guard();
                        return;
                    }
                    this_02 = (Layout*)(field_3576 + 80);
                    this_01 =
                        (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                    pfVar6 =
                        (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)
                            this_02->end();
                    while ((this_01 != pfVar6 && (bVar1 = this_00->operator_cast_to_bool(), bVar1))) {
                        RunImmediateRenderFunction(this, true);
                        bVar1 = this_00->operator_cast_to_bool();
                        if (!bVar1)
                            break;
                        fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                                (fixedfunction::Methods)0>::operator()(this_01,
                                                                                       (TextureAtlasSlot*)this);
                        this_01 = this_01 + 160;
                    }
                    UnlockDeadObjectsMutex(this);
                    bVar1 = this_00->operator_cast_to_bool();
                    if (!bVar1)
                        goto LAB_100c1b37b;
                    if (field_3193 != '\0') {
                        m_immediateContext->Present();
                    }
                }
                local_38->~lock_guard();
                field_3576 = 0;
                plVar3 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>::
                         operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560);
                (**(code**)(*plVar3 + 32))(plVar3);
                UnlockDeadObjectsMutex(this);
                bVar1 = this_00->operator_cast_to_bool();
            } while (bVar1);
        }
    }

    // 0x100c1b3b0, 144 bytes, placed by class name
    // RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)
    void RenderContext::ResetKeepAliveSharedPtrs(undefined4 param_2) {
        undefined1* this_00;
        long* plVar1;
        long lVar2;
        ulong uVar3;
        ulong uVar4;

        this_00 = &field_3560;
        plVar1 =
            (long*)
                std::unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>::
                operator->(
                    (unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>*)
                        this_00);
        lVar2 = (**(code**)(*plVar1 + 64))(plVar1);
        if (lVar2 != 0) {
            uVar4 = 0;
            do {
                plVar1 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>::
                         operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>*)this_00);
                lVar2 = (**(code**)(*plVar1 + 72))(plVar1, uVar4);
                eastl::erase_if<KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                                eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false,
                                (OwnerThread)->ResetKeepAliveSharedPtrs()::__92>(lVar2 + 312, param_2);
                uVar4 = uVar4 + 1;
                plVar1 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>::
                         operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>*)this_00);
                uVar3 = (**(code**)(*plVar1 + 64))(plVar1);
            } while (uVar4 < uVar3);
        }
        eastl::erase_if<KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                        eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false,
                        (OwnerThread)->ResetKeepAliveSharedPtrs()::__93>(&field_3616, param_2);
    }

    // 0x100c1b440, 16 bytes, placed by class name
    // RenderContext::Begin()
    void RenderContext::Begin() {
        BeginInternal(this, false);
    }

    // 0x100c1b450, 1040 bytes, placed by class name
    // RenderContext::BeginInternal(bool)
    undefined8 RenderContext::BeginInternal(bool param_1) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        long* plVar5;
        DeferredFrameData* pDVar6;
        shared_ptr* this_01;
        FPSCounter* this_02;
        ulonglong uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8* puVar11;
        undefined8* puVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        SystemTimer* this_03;
        undefined1 auVar13[16];
        undefined1 local_68[16];
        undefined1 local_58[16];
        KeepAliveSharedPtrAndOwner local_48;

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      504, (char*)0);
        }
        if (field_4140 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_currentState.m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      505, (char*)0);
        }
        if ((param_1) || (iVar3 = m_immediateContext->GetReadyState(), iVar3 == 0)) {
            lVar4 = GetDesc(this);
            if (*(char*)(lVar4 + 11) != '\0') {
                plVar5 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>::
                         operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560);
                pDVar6 = (DeferredFrameData*)(**(code**)(*plVar5 + 40))(plVar5);
                field_3568 = pDVar6;
                local_58 =
                    eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
                local_68 = (&pDVar6->field_312)->end();
                bVar2 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68, local_68._8_8_);
                if (bVar2) {
                    do {
                        this_01 = (shared_ptr*)local_58->HeapBeginPtr();
                        bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                        if ((bVar2) && (*(int*)(this_01 + 1) == 0)) {
                            eastl::hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                                             eastl::use_self<KeepAliveSharedPtrAndOwner>,
                                             eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                                             eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                                             true>::insert(&local_48);
                        }
                        eastl::hashtable_iterator<
                            eastl::pair<int const,
                                        shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                            true, false>::
                        operator++((hashtable_iterator<
                                    eastl::pair<int const,
                                                shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)local_58);
                        bVar2 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68, extraout_RDX);
                    } while (bVar2);
                }
                field_3568->Clear();
                cVar1 = ShouldDefer(this);
                if (cVar1 == '\0') {
                    field_3193 = 1;
                    field_4152 = 0;
                    field_4153 = 0;
                } else if (field_3568 == (DeferredFrameData*)0) {
                    local_48._0_8_ = this;
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                        bool)::__5>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__5*)&local_48);
                } else {
                    local_48._0_8_ = this;
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                        bool)::__4>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                    (__4*)&local_48);
                }
            }
            cVar1 = ShouldDefer(this);
            if (cVar1 == '\0') {
                m_immediateContext->Begin();
            } else if (field_3568 == (DeferredFrameData*)0) {
                local_48._0_8_ = this;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                    bool)::__7>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__7*)&local_48);
            } else {
                local_48._0_8_ = this;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                    bool)::__6>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                (__6*)&local_48);
            }
            lVar4 = GetDesc(this);
            if (*(char*)(lVar4 + 11) != '\0') {
                cVar1 = ShouldDefer(this);
                if (cVar1 == '\0') {
                    this_03 = (SystemTimer*)&field_4144;
                    this_02 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(
                        (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)this_03);
                    uVar7 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(this_03);
                    this_02->RecordDrawStartTime(uVar7);
                } else if (field_3568 == (DeferredFrameData*)0) {
                    local_48._0_8_ = this;
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                        bool)::__9>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__9*)&local_48);
                } else {
                    local_48._0_8_ = this;
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                        bool)::__8>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                    (__8*)&local_48);
                }
                cVar1 = ShouldDefer(this);
                if (cVar1 == '\0') {
                    CleanUpDeadObjects(this);
                    pDVar6 = field_3568;
                } else if (field_3568 == (DeferredFrameData*)0) {
                    local_48._0_8_ = this;
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                        bool)::__11>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__11*)&local_48);
                    pDVar6 = field_3568;
                } else {
                    local_48._0_8_ = this;
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BeginInternal(
                        bool)::__10>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                     (__10*)&local_48);
                    pDVar6 = field_3568;
                }
                if (pDVar6 == (DeferredFrameData*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_writeFrame",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              543, (char*)0);
                }
                this_00 = &field_3584;
                uVar8 = this_00->HeapBeginPtr();
                uVar9 = this_00->end();
                uVar10 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                       eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                       true>::end();
                eastl::copy<DeferredRenderFunction*,
                            eastl::back_insert_iterator<eastl::vector<DeferredRenderFunction, eastl::allocator>>>(
                    uVar8, uVar9, uVar10);
                this_00->clear();
                local_48._0_16_ =
                    eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
                auVar13 = (&field_3616)->end();
                local_58 = auVar13;
                bVar2 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)local_58, auVar13._8_8_);
                if (bVar2) {
                    do {
                        lVar4 = local_48.HeapBeginPtr();
                        KeepAliveSharedPtr(this, lVar4, *(undefined4*)(lVar4 + 16));
                        eastl::hashtable_iterator<
                            eastl::pair<int const,
                                        shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                            true, false>::
                        operator++((hashtable_iterator<
                                    eastl::pair<int const,
                                                shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)&local_48);
                        bVar2 =
                            eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)local_58, extraout_RDX_00);
                    } while (bVar2);
                }
                (&field_3616)->clear();
                puVar11 = (undefined8*)(&field_3672)->HeapBeginPtr();
                puVar12 = (undefined8*)(&field_3672)->end();
                for (; puVar11 != puVar12; puVar11 = puVar11 + 1) {
                    AddAliveObject(this, (void*)*puVar11);
                }
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
            field_4140 = 1;
            uVar8 = 1;
        } else {
            uVar8 = 0;
        }
        return uVar8;
    }

    // 0x100c1bea0, 368 bytes, placed by class name
    // RenderContext::CleanUpDeadObjects()
    void RenderContext::CleanUpDeadObjects() {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        char cVar1;
        uint uVar2;
        RenderDevice* this_01;
        long lVar3;
        undefined8 uVar4;
        ulonglong* puVar5;
        ulonglong* puVar6;
        scoped_lock<std::mutex> local_30[8];

        this_01 = (RenderDevice*)Instance();
        cVar1 = this_01->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      573, (char*)0);
        }
        lVar3 = GetDesc(this);
        if (*(char*)(lVar3 + 11) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      574, (char*)0);
        }
        LockDeadObjectsMutex(this);
        this_00 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(field_3704 + 136);
        cVar1 = eastl::hashtable<
            eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
            eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::empty(this_00);
        if (cVar1 == '\0') {
            uVar2 = field_3964 + 1;
            field_3964 = uVar2;
            if (1000 < uVar2) {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/RenderContext.cpp",
                                    581,
                                    "Dead objects are being recorded every frame. This will significantly diminish the "
                                    "performance benefits of deferred rendering. See RenderResource.h");
            }
            eastl::erase_if<RenderResource_const*, signed char, eastl::hash<RenderResource_const*>,
                            eastl::equal_to<RenderResource_const*>, eastl::allocator, false,
                            RenderContext::CleanUpDeadObjects()::__12>(this_00);
        } else {
            field_3964 = 0;
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_4000);
        puVar5 = (ulonglong*)(&field_3968)->HeapBeginPtr();
        puVar6 = (ulonglong*)(&field_3968)->end();
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
            this_00->erase(puVar5);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100c1c050, 304 bytes, placed by class name
    // RenderContext::KeepAliveSharedPtr(shared_ptr<void const> const&, OwnerThread)
    void RenderContext::KeepAliveSharedPtr(shared_ptr* param_1, undefined4 param_3) {
        bool bVar2;
        long lVar3;
        void* pvVar4;
        KeepAliveSharedPtrAndOwner local_58;
        shared_ptr<oldscape::dash3d::Decor> local_40[16];
        undefined4 local_30;

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1441, (char*)0);
        }
        bVar2 = shared_ptr::operator_cast_to_bool(param_1);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("sharedPtr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1442, (char*)0);
        }
        lVar3 = GetDesc(this);
        if (*(char*)(lVar3 + 11) != '\0') {
            bVar2 = (&field_3192)->operator_cast_to_bool();
            if (bVar2) {
                pvVar4 = (void*)param_1->end();
                AddAliveObject(this, pvVar4);
                local_30 = param_3;
                if (field_3568 == (DeferredFrameData*)0) {
                    shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_40, param_1);
                    eastl::hashtable<
                        KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                        eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                        eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, false, true>::insert(&local_58);
                } else {
                    shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_40, param_1);
                    eastl::hashtable<
                        KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                        eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                        eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, false, true>::insert(&local_58);
                }
                local_40->~LRUHashCacheWrapper();
            }
        }
    }

    // 0x100c1c180, 160 bytes, placed by class name
    // RenderContext::AddAliveObject(void const*)
    void RenderContext::AddAliveObject(void* param_1) {
        void* local_30[3];
        void* local_18;

        local_18 = param_1;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1426, (char*)0);
        }
        if (local_18 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pAlive",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1427, (char*)0);
        }
        if (field_3568 == (DeferredFrameData*)0) {
            (&field_3672, &local_18)->push_back();
        } else {
            eastl::hashtable<void_const*, void_const*, BucketAllocatorEASTL, eastl::use_self<void_const*>,
                             eastl::equal_to<void_const*>, eastl::hash<void_const*>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                             true>::insert(local_30);
        }
    }

    // 0x100c1c220, 96 bytes, placed by class name
    // RenderContext::LockDeadObjectsMutex() const
    void RenderContext::LockDeadObjectsMutex() {
        long lVar1;

        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1538, (char*)0);
        }
        if (field_3960 == '\0') {
            std::mutex::lock();
            field_3960 = 1;
        }
    }

    // 0x100c1c350, 224 bytes, placed by class name
    // RenderContext::End()
    void RenderContext::End() {
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_4140 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_currentState.m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      603, (char*)0);
        }
        local_c8._144_8_ = 0;
        local_c8._152_8_ = 0;
        local_c8._128_8_ = 0;
        local_c8._136_8_ = 0;
        local_c8._112_8_ = 0;
        local_c8._120_8_ = 0;
        local_c8._96_8_ = 0;
        local_c8._104_8_ = 0;
        local_c8._80_8_ = 0;
        local_c8._88_8_ = 0;
        local_c8._64_8_ = 0;
        local_c8._72_8_ = 0;
        local_c8._48_8_ = 0;
        local_c8._56_8_ = 0;
        local_c8._32_8_ = 0;
        local_c8._40_8_ = 0;
        local_c8._16_8_ = 0;
        local_c8._24_8_ = 0;
        local_c8.field_0 = 0;
        local_c8._8_8_ = 0;
        new (&local_c8) math::Vector2T<int>();
        EndInternal(this, &local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c1c430, 560 bytes, placed by class name
    // RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void RenderContext::EndInternal(function* param_1) {
        undefined1* this_00;
        DeferredFrameData* pDVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        long lVar5;
        FPSCounter* pFVar6;
        ulonglong uVar7;
        undefined8 uVar8;
        long* plVar9;
        SystemTimer* this_01;
        RenderContext* local_30;

        cVar2 = this_thread::IsMainThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      609, (char*)0);
        }
        field_4140 = 0;
        cVar2 = ShouldDefer(this);
        if (cVar2 == '\0') {
            m_immediateContext->End();
        } else if (field_3568 == (DeferredFrameData*)0) {
            local_30 = this;
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::EndInternal(
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__14>(
                (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__14*)&local_30);
        } else {
            local_30 = this;
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::EndInternal(
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__13>(
                (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, (__13*)&local_30);
        }
        lVar5 = GetDesc(this);
        if (*(char*)(lVar5 + 11) == '\0') {
            bVar3 = fixedfunction::function::operator_cast_to_bool(param_1);
            if (bVar3) {
                fixedfunction::function<
                    void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                    (fixedfunction::Methods)0>::operator()((function<void(graphicutils::TextureAtlasSlot_const&), 64ul,
                                                                     16ul, (fixedfunction::Methods)0>*)param_1,
                                                           (TextureAtlasSlot*)this);
            }
        } else {
            cVar2 = ShouldDefer(this);
            if (cVar2 == '\0') {
                this_00 = &field_4144;
                this_01 = (SystemTimer*)this_00;
                pFVar6 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(
                    (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)this_00);
                uVar7 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(this_01);
                pFVar6->RecordDrawEndTime(uVar7);
                pFVar6 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(
                    (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)this_00);
                pFVar6->UpdateFPSCounter();
                eastl::erase_if<
                    KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                    eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false,
                    (fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
                        ->EndInternal()::__17>(field_3576 + 312);
            } else if (field_3568 == (DeferredFrameData*)0) {
                local_30 = this;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::EndInternal(
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__16>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__16*)&local_30);
            } else {
                local_30 = this;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::EndInternal(
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__15>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, (__15*)&local_30);
            }
            bVar3 = fixedfunction::function::operator_cast_to_bool(param_1);
            if (bVar3) {
                RunOnRenderThread(this, param_1);
            }
            if (field_3704[132] == '\0') {
                *(undefined4*)(field_3704 + 128) = 0;
                pDVar1 = field_3568;
            } else {
                field_3704[132] = 0;
                uVar4 = *(int*)(field_3704 + 128) + 1;
                *(uint*)(field_3704 + 128) = uVar4;
                if (1000 < uVar4) {
                    uVar8 = logger::default_logger();
                    logger::Logger::Log(uVar8, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/context/RenderContext.cpp",
                                        633,
                                        "Immediate render functions are being submitted every frame. This will "
                                        "significantly diminish the performance benefits of deferred rendering.");
                }
                pDVar1 = field_3568;
            }
            if (pDVar1 == (DeferredFrameData*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_writeFrame",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          640, (char*)0);
            }
            field_3568->field_144->Create();
            field_3568 = (DeferredFrameData*)0;
            plVar9 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                            std::default_delete<MultiBuffer<DeferredFrameData>>>::
                     operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                            std::default_delete<MultiBuffer<DeferredFrameData>>>*)&field_3560);
            (**(code**)(*plVar9 + 48))(plVar9);
        }
    }

    // 0x100c1ca00, 128 bytes, placed by class name
    // RenderContext::Present()
    void RenderContext::Present() {
        long lVar2;
        __18 local_18;

        lVar2 = GetDesc(this);
        if ((*(char*)(lVar2 + 11) == '\0') || (field_3568 != (DeferredFrameData*)0)) {
            if (ShouldDefer(this) == '\0') {
                m_immediateContext->Present();
            } else {
                local_18.field_0 = (long)this;
                if (field_3568 == (DeferredFrameData*)0) {
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                        RenderContext::Present()::__19>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                                        (__19*)&local_18);
                } else {
                    eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                        RenderContext::Present()::__18>(
                        (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_18);
                }
            }
        }
    }

    // 0x100c1cc00, 144 bytes, placed by class name
    // RenderContext::SetInputAssemblerState(InputAssemblerState const*)
    void RenderContext::SetInputAssemblerState(InputAssemblerState* param_1) {
        __20 local_18;

        if (param_1 != (InputAssemblerState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIAState == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      668,
                      "InputAssemblerStates should be used via DrawCallState - only SetInputAssemblerState(nullptr) is "
                      "allowed");
        }
        if (ShouldDefer(this) == '\0') {
            (m_immediateContext, (InputAssemblerState*)0)->SetInputAssemblerState();
        } else {
            local_18.field_0 = (long)this;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetInputAssemblerState(InputAssemblerState_const*)::__21>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__21*)&local_18);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetInputAssemblerState(InputAssemblerState_const*)::__20>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_18);
            }
        }
    }

    // 0x100c1ce10, 1168 bytes, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)
    void RenderContext::BindDrawCallState(DrawCallState* param_1) {
        DeferredFrameData* pDVar1;
        undefined8 uVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        Layout* pLVar8;
        vector* pvVar9;
        long lVar10;
        undefined8* puVar11;
        undefined8* puVar12;
        LoginManager* pLVar13;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        vector<math::Rect<unsigned int>, eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*
            this_01;
        Minimap* this_02;
        OutputMergerState* pOVar14;
        RenderTargets* pRVar15;
        InputAssemblerState* pIVar16;
        RenderPipelineState* pRVar17;
        DrawCallState* pDVar18;
        _func_decltype_nullptr* p_Var19;
        DrawCallState local_a0;
        int local_6c;
        undefined1 local_68[8];
        DrawCallState DStack_60;

        pDVar18 = param_1;
        cVar3 = ShouldDefer(this);
        if (cVar3 == '\0') {
            (m_immediateContext, param_1)->BindDrawCallState();
        } else {
            cVar3 = eastl::internal::function_detail<16, void()>::HaveManager((function_detail<16, void()>*)param_1);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("drawCallState.HasOutputMergerState()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          677, (char*)0);
            }
            pLVar8 = (Layout*)param_1->GetOutputMergerState();
            pvVar9 = eastl::string::Layout::SSOBeginPtr(pLVar8, (type*)pDVar18);
            lVar10 = pvVar9->size();
            if (lVar10 == 0) {
                DStack_60.field_24._0_8_ = 0;
                DStack_60.field_24._8_8_ = 0;
                DStack_60.m_pRenderPipelineState = (RenderPipelineState*)0;
                DStack_60.m_pOutputMergerState = (OutputMergerState*)0;
                local_68 = (undefined1[8])0;
                DStack_60.m_pInputAssemblerState = (InputAssemblerState*)0;
                lVar10 = 0;
                do {
                    p_Var19 = (_func_decltype_nullptr*)0;
                    new ((local_68 + lVar10)) Viewport(0, 0, 0, 0, 0.0, 1.0);
                    lVar10 = lVar10 + 24;
                } while (lVar10 != 48);
                field_4104 = DStack_60.field_24._0_8_;
                field_4112 = DStack_60.field_24._8_8_;
                field_4088 = DStack_60.m_pRenderPipelineState;
                field_4096 = DStack_60.m_pOutputMergerState;
                field_4072 = local_68;
                field_4080 = DStack_60.m_pInputAssemblerState;
            } else {
                pLVar8 = (Layout*)param_1->GetOutputMergerState();
                pvVar9 = eastl::string::Layout::SSOBeginPtr(pLVar8, (type*)pDVar18);
                puVar11 = (undefined8*)pvVar9->front();
                p_Var19 = (_func_decltype_nullptr*)0;
                puVar12 = (undefined8*)std::array<Viewport, 2ul>::operator[]((array<Viewport, 2ul>*)&field_4072, 0);
                uVar2 = puVar11[1];
                *puVar12 = *puVar11;
                puVar12[1] = uVar2;
                puVar12[2] = puVar11[2];
            }
            pLVar13 = (LoginManager*)param_1->GetOutputMergerState();
            this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                          pLVar13->GetDevCredentialsOutputDirectory();
            lVar10 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
            if (lVar10 == 0) {
                field_4120 = false;
                new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var19);
            } else {
                field_4120 = true;
                pLVar13 = (LoginManager*)param_1->GetOutputMergerState();
                this_01 = (vector<math::Rect<unsigned int>,
                                  eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)
                              pLVar13->GetDevCredentialsOutputDirectory();
                this_02 = (Minimap*)eastl::vector<
                    math::Rect<unsigned int>,
                    eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::front(this_01);
                local_6c = this_02->GetX();
                iVar5 = this_02->GetZ();
                iVar6 = this_02->GetPos();
                iVar7 = this_02->GetLevel();
                new (local_68) oldscape::dash3d::GridRect(local_6c, iVar5, iVar6, iVar7);
            }
            math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_4124, (Rect*)local_68);
            pOVar14 = (OutputMergerState*)param_1->GetOutputMergerState();
            pRVar15 = (RenderTargets*)pOVar14->GetRenderTargets();
            m_pCurrentState = pRVar15;
            bVar4 = param_1->operator_cast_to_bool();
            if (bVar4) {
                pIVar16 = (InputAssemblerState*)param_1->GetInputAssemblerState();
                pIVar16->OnBind();
            }
            cVar3 = IsContextThread(this);
            if (cVar3 == '\0') {
                new (&local_a0) DrawCallState();
                bVar4 = param_1->operator_cast_to_bool();
                if (bVar4) {
                    pDVar1 = field_3568;
                    pIVar16 = (InputAssemblerState*)param_1->GetInputAssemblerState();
                    pIVar16 = VectorFastPool<InputAssemblerState>::Create<InputAssemblerState&>(
                        (VectorFastPool<InputAssemblerState>*)&pDVar1->field_152, pIVar16);
                    local_a0.SetInputAssemblerState(pIVar16);
                }
                bVar4 = param_1->operator_cast_to_bool();
                if (bVar4) {
                    pDVar1 = field_3568;
                    pRVar17 = (RenderPipelineState*)param_1->GetRenderPipelineState();
                    pRVar17 = VectorFastPool<RenderPipelineState>::Create<RenderPipelineState&>(
                        (VectorFastPool<RenderPipelineState>*)&pDVar1->field_192, pRVar17);
                    local_a0.SetRenderPipelineState(pRVar17);
                }
                pDVar1 = field_3568;
                pOVar14 = (OutputMergerState*)param_1->GetOutputMergerState();
                pOVar14 = VectorFastPool<OutputMergerState>::Create<OutputMergerState&>(
                    (VectorFastPool<OutputMergerState>*)&pDVar1->field_272, pOVar14);
                local_a0.SetOutputMergerState(pOVar14);
                cVar3 = ShouldDefer(this);
                if (cVar3 == '\0') {
                    BindDrawCallStateInternal(this, &local_a0);
                } else {
                    pDVar1 = field_3568;
                    if (pDVar1 == (DeferredFrameData*)0) {
                        local_68 = (undefined1[8])this;
                        new (&DStack_60) DrawCallState(&local_a0);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDrawCallState(DrawCallState&)::__25>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__25*)local_68);
                        BindDrawCallState(DrawCallState&)::$_25::~__25((__25*)local_68);
                    } else {
                        local_68 = (undefined1[8])this;
                        new (&DStack_60) DrawCallState(&local_a0);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDrawCallState(DrawCallState&)::__24>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__24*)local_68);
                        BindDrawCallState(DrawCallState&)::$_24::~__24((__24*)local_68);
                    }
                }
                local_a0.~DrawCallState();
            } else {
                cVar3 = ShouldDefer(this);
                if (cVar3 == '\0') {
                    BindDrawCallStateInternal(this, param_1);
                } else {
                    pDVar1 = field_3568;
                    if (pDVar1 == (DeferredFrameData*)0) {
                        local_68 = (undefined1[8])this;
                        new (&DStack_60) DrawCallState(param_1);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDrawCallState(DrawCallState&)::__23>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__23*)local_68);
                        BindDrawCallState(DrawCallState&)::$_23::~__23((__23*)local_68);
                    } else {
                        local_68 = (undefined1[8])this;
                        new (&DStack_60) DrawCallState(param_1);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDrawCallState(DrawCallState&)::__22>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__22*)local_68);
                        BindDrawCallState(DrawCallState&)::$_22::~__22((__22*)local_68);
                    }
                }
            }
            pOVar14 = (OutputMergerState*)param_1->GetOutputMergerState();
            OutputMergerState::SetClearColours((Vector4T*)pOVar14, 0);
            pOVar14->SetDepthStencilClear(1.0, '\0');
            pOVar14->SetClearFlags(0);
        }
    }

    // 0x100c1d450, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::~$_22(): jumps straight to the base-object destructor

    // 0x100c1d520, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::~$_23(): jumps straight to the base-object destructor

    // 0x100c1d530, 1136 bytes, placed by class name
    // RenderContext::BindDrawCallStateInternal(DrawCallState const&)
    void RenderContext::BindDrawCallStateInternal(DrawCallState* param_1) {
        char cVar1;
        bool bVar2;
        int iVar3;
        RenderDevice* this_00;
        long lVar4;
        InputAssemblerState* pIVar5;
        RenderResource* pRVar6;
        AnimationParameters* this_01;
        NXTPixToolkit* pNVar7;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar8;
        ulong uVar9;
        vector<VertexBuffer_const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar10;
        array<unsigned int, 8ul>* this_03;
        int* piVar11;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar12;
        ShaderProgram* this_04;
        Layout* pLVar13;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        RenderPipelineState* this_06;
        long* plVar15;
        long* plVar16;
        MapSquare* this_07;
        CombinedLocation* this_08;
        long lVar17;
        Option<float>* this_09;
        uint uVar18;
        ulong uVar19;

        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      749, (char*)0);
        }
        lVar4 = GetDesc(this);
        if (*(char*)(lVar4 + 11) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      750, (char*)0);
        }
        iVar3 = GetReadyState(this);
        cVar1 = iVar3 == 0;
        if (!(bool)cVar1)
            goto LAB_100c1d96f;
        bVar2 = param_1->operator_cast_to_bool();
        if (bVar2) {
            pIVar5 = (InputAssemblerState*)param_1->GetInputAssemblerState();
            pRVar6 = (RenderResource*)pIVar5->GetIndexBuffer();
            cVar1 = IsObjectAlive(this, pRVar6);
            if (cVar1 == '\0') {
                bVar2 = false;
            } else {
                pIVar5 = (InputAssemblerState*)param_1->GetInputAssemblerState();
                lVar4 = pIVar5->GetIndexBuffer();
                if (lVar4 == 0) {
                    bVar2 = true;
                } else {
                    this_01 = (AnimationParameters*)param_1->GetInputAssemblerState();
                    iVar3 = this_01->GetCurrentIndex();
                    bVar2 = iVar3 != 0;
                }
            }
            pNVar7 = (NXTPixToolkit*)param_1->GetInputAssemblerState();
            pvVar8 = (vector<eastl::pair<int, int>, eastl::allocator>*)pNVar7->GetScreen();
            lVar4 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar8);
            if (lVar4 != 0) {
                uVar18 = 1;
                uVar19 = 0;
                do {
                    pNVar7 = (NXTPixToolkit*)param_1->GetInputAssemblerState();
                    this_02 = (vector<VertexBuffer_const*,
                                      eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pNVar7->GetScreen();
                    puVar10 = (undefined8*)eastl::vector<
                        VertexBuffer_const*,
                        eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_02,
                                                                                                               uVar19);
                    if ((RenderResource*)*puVar10 != (RenderResource*)0) {
                        if ((bVar2) && (cVar1 = IsObjectAlive(this, (RenderResource*)*puVar10), cVar1 != '\0')) {
                            pIVar5 = (InputAssemblerState*)param_1->GetInputAssemblerState();
                            this_03 = (array<unsigned int, 8ul>*)pIVar5->GetGLVertexBuffers();
                            piVar11 = (int*)std::array<unsigned int, 8ul>::operator[](this_03, uVar19);
                            bVar2 = *piVar11 != 0;
                        } else {
                            bVar2 = false;
                        }
                    }
                    uVar19 = (ulong)uVar18;
                    pNVar7 = (NXTPixToolkit*)param_1->GetInputAssemblerState();
                    pvVar8 = (vector<eastl::pair<int, int>, eastl::allocator>*)pNVar7->GetScreen();
                    uVar9 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar8);
                    uVar18 = uVar18 + 1;
                } while (uVar19 < uVar9);
            }
            if (bVar2) {
                pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              param_1->GetInputAssemblerState();
                pRVar6 = (RenderResource*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar14);
                cVar1 = IsObjectAlive(this, pRVar6);
            } else {
                cVar1 = '\0';
            }
        }
        bVar2 = param_1->operator_cast_to_bool();
        if (!bVar2)
            goto LAB_100c1d96f;
        if (cVar1 == '\0') {
        LAB_100c1d7cb:
            cVar1 = '\0';
        } else {
            phVar12 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)param_1->GetRenderPipelineState();
            lVar4 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar12);
            pRVar6 = (RenderResource*)(lVar4 + 12);
            if (lVar4 == 0) {
                pRVar6 = (RenderResource*)0;
            }
            cVar1 = IsObjectAlive(this, pRVar6);
            if (cVar1 == '\0')
                goto LAB_100c1d7cb;
            phVar12 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)param_1->GetRenderPipelineState();
            lVar4 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar12);
            if (lVar4 != 0) {
                phVar12 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)param_1->GetRenderPipelineState();
                this_04 = (ShaderProgram*)eastl::hashtable<
                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                    eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                iVar3 = this_04->GetNativeShaderProgram();
                if (iVar3 == 0)
                    goto LAB_100c1d7cb;
            }
            pLVar13 = (Layout*)param_1->GetRenderPipelineState();
            pRVar6 = (RenderResource*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar13);
            cVar1 = IsObjectAlive(this, pRVar6);
            if (cVar1 == '\0')
                goto LAB_100c1d7cb;
            this_05 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)param_1->GetRenderPipelineState();
            pRVar6 = (RenderResource*)this_05->data();
            cVar1 = IsObjectAlive(this, pRVar6);
            if (cVar1 == '\0')
                goto LAB_100c1d7cb;
            pvVar14 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1->GetRenderPipelineState();
            pRVar6 =
                (RenderResource*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
            cVar1 = IsObjectAlive(this, pRVar6);
        }
        this_06 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        pLVar13 = (Layout*)this_06->GetPSTextureSamplerPairs();
        plVar15 = (long*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar13);
        plVar16 = (long*)pLVar13->end();
        for (; plVar15 != plVar16; plVar15 = plVar15 + 4) {
            if (cVar1 == '\0') {
            LAB_100c1d800:
                cVar1 = '\0';
            } else {
                pRVar6 = (RenderResource*)(*plVar15 + 8);
                if (*plVar15 == 0) {
                    pRVar6 = (RenderResource*)0;
                }
                cVar1 = IsObjectAlive(this, pRVar6);
                if (cVar1 == '\0')
                    goto LAB_100c1d800;
                cVar1 = (*plVar15)->IsCreated();
            }
        }
        this_07 = (MapSquare*)param_1->GetRenderPipelineState();
        pLVar13 = (Layout*)this_07->GetMapSquarePointLights();
        plVar15 = (long*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar13);
        plVar16 = (long*)pLVar13->end();
        for (; plVar15 != plVar16; plVar15 = plVar15 + 4) {
            if (cVar1 == '\0') {
            LAB_100c1d870:
                cVar1 = '\0';
            } else {
                pRVar6 = (RenderResource*)(*plVar15 + 8);
                if (*plVar15 == 0) {
                    pRVar6 = (RenderResource*)0;
                }
                cVar1 = IsObjectAlive(this, pRVar6);
                if (cVar1 == '\0')
                    goto LAB_100c1d870;
                cVar1 = (*plVar15)->IsCreated();
            }
        }
        this_08 = (CombinedLocation*)param_1->GetRenderPipelineState();
        pLVar13 = (Layout*)this_08->GetModel();
        lVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar13);
        lVar17 = pLVar13->end();
        for (; lVar4 != lVar17; lVar4 = lVar4 + 16) {
            if ((cVar1 == '\0') || (cVar1 = IsObjectAlive(this, *(RenderResource**)(lVar4 + 8)), cVar1 == '\0')) {
                cVar1 = '\0';
            } else {
                cVar1 = (*(BufferInterface**)(lVar4 + 8))->IsCreated();
            }
        }
        this_09 = (Option<float>*)param_1->GetRenderPipelineState();
        pLVar13 = (Layout*)this_09->GetDefaultValue();
        lVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar13);
        lVar17 = pLVar13->end();
        for (; lVar4 != lVar17; lVar4 = lVar4 + 16) {
            if ((cVar1 == '\0') || (cVar1 = IsObjectAlive(this, *(RenderResource**)(lVar4 + 8)), cVar1 == '\0')) {
                cVar1 = '\0';
            } else {
                cVar1 = (*(BufferInterface**)(lVar4 + 8))->IsCreated();
            }
        }
    LAB_100c1d96f:
        if (cVar1 == '\0') {
            SkipCurrentDrawCall(this);
        } else {
            (m_immediateContext, param_1)->BindDrawCallState();
        }
    }

    // 0x100c1da70, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::~$_24(): jumps straight to the base-object destructor

    // 0x100c1db40, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::~$_25(): jumps straight to the base-object destructor

    // 0x100c1db50, 448 bytes, placed by class name
    // RenderContext::IsObjectAlive(RenderResource const*) const
    ulong RenderContext::IsObjectAlive(RenderResource* param_1) {
        bool bVar2;
        RenderDevice* this_00;
        long lVar3;
        undefined7 extraout_var;
        undefined8 unaff_R14;
        ulong uVar4;
        undefined1 auVar5[16];
        RenderDeviceCallback* local_50;
        eastl local_48[16];
        hashtable_iterator_base local_38[16];
        RenderDeviceCallback* local_28;

        local_28 = (RenderDeviceCallback*)param_1;
        this_00 = (RenderDevice*)Instance();
        if (this_00->IsRenderThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1480, (char*)0);
        }
        lVar3 = GetDesc(this);
        uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (((*(char*)(lVar3 + 11) != '\0') && (local_28 != (RenderDeviceCallback*)0)) && (field_3576 != 0)) {
            LockDeadObjectsMutex(this);
            local_48 = (eastl[16])((field_3704 + 136), (RenderResource**)&local_28)->find();
            local_38 = (hashtable_iterator_base[16])((field_3704 + 136))->end();
            bVar2 = eastl::operator==(local_48, local_38, local_38._8_8_);
            if (bVar2) {
                if (*(int*)&local_28->field_0 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pDead->m_livenessMethod != RenderResourceLivenessMethod::INVALID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              1489, (char*)0);
                }
                if (*(int*)&local_28->field_0 == 2) {
                    local_50 = local_28;
                    auVar5 = ((field_3576 + 368), &local_50)->find();
                    local_48 = (eastl[16])auVar5;
                    auVar5 = ((field_3576 + 368))->end();
                    local_38 = (hashtable_iterator_base[16])auVar5;
                    bVar2 = eastl::operator!=(local_48, local_38, auVar5._8_8_);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pDead->m_livenessMethod != RenderResourceLivenessMethod::KEEP_ALIVE_SHARED_PTR || "
                                  "m_readFrame->m_alivePtrs.find(pDead) != m_readFrame->m_alivePtrs.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/RenderContext.cpp",
                                  1491, (char*)0);
                    }
                }
            } else {
                local_50 = local_28;
                auVar5 = ((field_3576 + 368), &local_50)->find();
                local_48 = (eastl[16])auVar5;
                auVar5 = ((field_3576 + 368))->end();
                local_38 = (hashtable_iterator_base[16])auVar5;
                bVar2 = eastl::operator!=(local_48, local_38, auVar5._8_8_);
                uVar4 = CONCAT71(extraout_var, bVar2) & 4294967295;
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100c1dd70, 512 bytes, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)
    void RenderContext::BindDispatchCallState(DispatchCallState* param_1) {
        DeferredFrameData* pDVar1;
        char cVar2;
        long lVar4;
        ComputePipelineState* pCVar5;
        DispatchCallState local_58;
        __26 local_40;

        lVar4 = GetDesc(this);
        if (*(char*)(lVar4 + 11) == '\0') {
            (m_immediateContext, param_1)->BindDispatchCallState();
        } else {
            cVar2 = IsContextThread(this);
            if (cVar2 == '\0') {
                new (&local_58) DispatchCallState();
                if (param_1->operator_cast_to_bool()) {
                    pDVar1 = field_3568;
                    pCVar5 = (ComputePipelineState*)param_1->GetComputePipelineState();
                    pCVar5 = VectorFastPool<ComputePipelineState>::Create<ComputePipelineState&>(
                        (VectorFastPool<ComputePipelineState>*)&pDVar1->field_232, pCVar5);
                    local_58.SetComputePipelineState(pCVar5);
                }
                cVar2 = ShouldDefer(this);
                if (cVar2 == '\0') {
                    BindDispatchCallStateInternal(this, &local_58);
                } else {
                    pDVar1 = field_3568;
                    if (pDVar1 == (DeferredFrameData*)0) {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(&local_58);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDispatchCallState(DispatchCallState&)::__29>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__29*)&local_40);
                        BindDispatchCallState(DispatchCallState&)::$_29::~__29((__29*)&local_40);
                    } else {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(&local_58);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDispatchCallState(DispatchCallState&)::__28>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__28*)&local_40);
                        BindDispatchCallState(DispatchCallState&)::$_28::~__28((__28*)&local_40);
                    }
                }
                local_58.~DispatchCallState();
            } else {
                cVar2 = ShouldDefer(this);
                if (cVar2 == '\0') {
                    BindDispatchCallStateInternal(this, param_1);
                } else {
                    pDVar1 = field_3568;
                    if (pDVar1 == (DeferredFrameData*)0) {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(param_1);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDispatchCallState(DispatchCallState&)::__27>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__27*)&local_40);
                        BindDispatchCallState(DispatchCallState&)::$_27::~__27((__27*)&local_40);
                    } else {
                        local_40.field_0 = this;
                        new (local_40.field_8) DispatchCallState(param_1);
                        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                            RenderContext::BindDispatchCallState(DispatchCallState&)::__26>(
                            (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, &local_40);
                        BindDispatchCallState(DispatchCallState&)::$_26::~__26(&local_40);
                    }
                }
            }
        }
    }

    // 0x100c1e030, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::~$_26(): jumps straight to the base-object destructor

    // 0x100c1e100, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::~$_27(): jumps straight to the base-object destructor

    // 0x100c1e110, 624 bytes, placed by class name
    // RenderContext::BindDispatchCallStateInternal(DispatchCallState const&)
    void RenderContext::BindDispatchCallStateInternal(DispatchCallState* param_1) {
        char cVar1;
        bool bVar2;
        int iVar3;
        RenderDevice* this_00;
        long lVar4;
        ComputePipelineState* pCVar5;
        ShaderProgram* this_01;
        GeometryBatch* this_02;
        Layout* pLVar6;
        long* plVar7;
        long* plVar8;
        Layout* this_03;
        vector* this_04;
        long lVar9;
        PagedLayer* this_05;
        RenderResource* pRVar10;

        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      845, (char*)0);
        }
        lVar4 = GetDesc(this);
        if (*(char*)(lVar4 + 11) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      846, (char*)0);
        }
        iVar3 = GetReadyState(this);
        cVar1 = iVar3 == 0;
        if (((bool)cVar1) && (bVar2 = param_1->operator_cast_to_bool(), bVar2)) {
            pCVar5 = (ComputePipelineState*)param_1->GetComputePipelineState();
            lVar4 = pCVar5->GetShaderProgram();
            pRVar10 = (RenderResource*)(lVar4 + 12);
            if (lVar4 == 0) {
                pRVar10 = (RenderResource*)0;
            }
            cVar1 = IsObjectAlive(this, pRVar10);
            if (cVar1 == '\0') {
                cVar1 = false;
            } else {
                pCVar5 = (ComputePipelineState*)param_1->GetComputePipelineState();
                lVar4 = pCVar5->GetShaderProgram();
                if (lVar4 == 0) {
                    cVar1 = true;
                } else {
                    pCVar5 = (ComputePipelineState*)param_1->GetComputePipelineState();
                    this_01 = (ShaderProgram*)pCVar5->GetShaderProgram();
                    iVar3 = this_01->GetNativeShaderProgram();
                    cVar1 = iVar3 != 0;
                }
            }
            this_02 = (GeometryBatch*)param_1->GetComputePipelineState();
            pLVar6 = (Layout*)this_02->GetJointIDMap();
            plVar7 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar6);
            plVar8 = (long*)pLVar6->end();
            for (; plVar7 != plVar8; plVar7 = plVar7 + 4) {
                if (cVar1 == '\0') {
                LAB_100c1e240:
                    cVar1 = '\0';
                } else {
                    pRVar10 = (RenderResource*)(*plVar7 + 8);
                    if (*plVar7 == 0) {
                        pRVar10 = (RenderResource*)0;
                    }
                    cVar1 = IsObjectAlive(this, pRVar10);
                    if (cVar1 == '\0')
                        goto LAB_100c1e240;
                    cVar1 = (*plVar7)->IsCreated();
                }
            }
            this_03 = (Layout*)param_1->GetComputePipelineState();
            this_04 = eastl::string::Layout::SSOBeginPtr(this_03, (type*)pRVar10);
            lVar4 = this_04->HeapBeginPtr();
            lVar9 = this_04->end();
            for (; lVar4 != lVar9; lVar4 = lVar4 + 16) {
                if ((cVar1 == '\0') || (cVar1 = IsObjectAlive(this, *(RenderResource**)(lVar4 + 8)), cVar1 == '\0')) {
                    cVar1 = '\0';
                } else {
                    cVar1 = (*(BufferInterface**)(lVar4 + 8))->IsCreated();
                }
            }
            this_05 = (PagedLayer*)param_1->GetComputePipelineState();
            pLVar6 = (Layout*)this_05->GetDynamicChildren();
            plVar7 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar6);
            plVar8 = (long*)pLVar6->end();
            for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
                if (cVar1 == '\0') {
                LAB_100c1e310:
                    cVar1 = '\0';
                } else {
                    pRVar10 = (RenderResource*)(*plVar7 + 8);
                    if (*plVar7 == 0) {
                        pRVar10 = (RenderResource*)0;
                    }
                    cVar1 = IsObjectAlive(this, pRVar10);
                    if (cVar1 == '\0')
                        goto LAB_100c1e310;
                    cVar1 = (*plVar7)->IsCreated();
                }
            }
        }
        if (cVar1 == '\0') {
            SkipCurrentDispatchCall(this);
        } else {
            (m_immediateContext, param_1)->BindDispatchCallState();
        }
    }

    // 0x100c1e450, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::~$_28(): jumps straight to the base-object destructor

    // 0x100c1e520, 16 bytes, complete-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::~$_29(): jumps straight to the base-object destructor

    // 0x100c1e550, 384 bytes, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)
    void RenderContext::SetViewports(Viewport* param_1, ulong param_2) {
        DeferredFrameData* pDVar1;
        undefined8 uVar2;
        char cVar3;
        undefined8* puVar4;
        Viewport* pVVar5;
        ulong uVar6;
        render local_68;
        undefined1 local_58[24];
        ulong local_40;

        cVar3 = this_thread::IsMainThread();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      890, (char*)0);
        }
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("numViewports > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      891, (char*)0);
        }
        if (2 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("numViewports <= MAX_RENDER_TARGET_TEXTURES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      892, (char*)0);
        }
        if (param_2 != 0) {
            uVar6 = 0;
            pVVar5 = param_1;
            do {
                puVar4 = (undefined8*)std::array<Viewport, 2ul>::operator[]((array<Viewport, 2ul>*)&field_4072, uVar6);
                uVar2 = *(undefined8*)&pVVar5->field_8;
                *puVar4 = *(undefined8*)pVVar5;
                puVar4[1] = uVar2;
                puVar4[2] = *(undefined8*)&pVVar5->field_16;
                uVar6 = uVar6 + 1;
                pVVar5 = (Viewport*)&pVVar5->field_24;
            } while (param_2 != uVar6);
        }
        AllocateScratchArrayAndCopy<Viewport>(&local_68, this, param_1, param_2);
        cVar3 = ShouldDefer(this);
        if (cVar3 == '\0') {
            pVVar5 = (Viewport*)local_68.end();
            (m_immediateContext, pVVar5, param_2)->SetViewports();
        } else {
            pDVar1 = field_3568;
            local_58._0_8_ = this;
            local_40 = param_2;
            if (pDVar1 == (DeferredFrameData*)0) {
                new ((local_58 + 8)) WrapArray<math::Matrix44T<float> const>((WrapArray*)&local_68);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetViewports(
                    Viewport_const*, unsigned long)::__31>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__31*)local_58);
            } else {
                new ((local_58 + 8)) WrapArray<math::Matrix44T<float> const>((WrapArray*)&local_68);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetViewports(
                    Viewport_const*, unsigned long)::__30>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__30*)local_58);
            }
        }
    }

    // 0x100c1eaf0, 304 bytes, placed by class name
    // RenderContext::SetScissorRectangle(bool, int, int, int, int)
    void RenderContext::SetScissorRectangle(bool param_1, int param_2, int param_3, int param_4, int param_5) {
        char cVar2;
        undefined7 in_register_00000031;
        __32 local_60;
        undefined4 local_38;

        cVar2 = this_thread::IsMainThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      903, (char*)0);
        }
        field_4120 = param_1;
        local_38 = (undefined4)CONCAT71(in_register_00000031, param_1);
        new (&local_60) oldscape::dash3d::GridRect(param_2, param_3, param_4, param_5);
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_4124, (Rect*)&local_60);
        cVar2 = ShouldDefer(this);
        if (cVar2 == '\0') {
            (m_immediateContext, local_38._0_1_, param_2, param_3, param_4, param_5)->SetScissorRectangle();
        } else {
            local_60.field_0 = (long)this;
            local_60.field_12 = param_2;
            local_60.field_16 = param_3;
            if (field_3568 == (DeferredFrameData*)0) {
                local_60._8_1_ = local_38._0_1_;
                local_60.field_20 = param_4;
                local_60.field_24 = param_5;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetScissorRectangle(bool, int, int, int, int)::__33>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__33*)&local_60);
            } else {
                local_60._8_1_ = local_38._0_1_;
                local_60.field_20 = param_4;
                local_60.field_24 = param_5;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetScissorRectangle(bool, int, int, int, int)::__32>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_60);
            }
        }
    }

    // 0x100c1ef20, 272 bytes, placed by class name
    // RenderContext::SetRenderTargets(RenderTargets const*)
    void RenderContext::SetRenderTargets(RenderTargets* param_1) {
        char cVar1;
        RenderDevice* this_00;
        __34 local_28;

        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      911, (char*)0);
        }
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            this_00 = (RenderDevice*)((RenderContext*)this)->Instance();
            cVar1 = this_00->IsRenderThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          925, (char*)0);
            }
        } else {
            m_pCurrentState = param_1;
            if (param_1 != (RenderTargets*)0) {
                param_1->KeepAlive();
            }
        }
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = param_1->CheckTexturesAlive(this);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                936, (char*)0);
            }
            (m_immediateContext, param_1)->SetRenderTargets();
        } else {
            local_28.field_0 = param_1;
            local_28.field_8 = this;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetRenderTargets(
                    RenderTargets_const*)::__35>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                                 (__35*)&local_28);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetRenderTargets(
                    RenderTargets_const*)::__34>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_28);
            }
        }
    }

    // 0x100c1f1b0, 288 bytes, placed by class name
    // RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*, unsigned long)
    void RenderContext::ClearRenderTargets(RenderTargets* param_1, Vector4T* param_2, ulong param_3) {
        char cVar1;
        RenderTargets* local_68;
        RenderContext* local_60;
        undefined8 local_58;
        undefined8 uStack_50;
        ulong local_48;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDstColourTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      943, (char*)0);
        }
        param_1->KeepAlive();
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = param_1->CheckTexturesAlive(this);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                954, (char*)0);
            }
            ((RenderTargets*)m_immediateContext, (Vector4T*)param_1, (ulong)param_2)->ClearRenderTargets();
        } else {
            local_68 = param_1;
            local_60 = this;
            local_48 = param_3;
            if (field_3568 == (DeferredFrameData*)0) {
                local_58 = *(undefined8*)param_2;
                uStack_50 = *(undefined8*)(param_2 + 8);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::ClearRenderTargets(
                    RenderTargets_const*, math::Vector4T<float> const*, unsigned long)::__37>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__37*)&local_68);
            } else {
                local_58 = *(undefined8*)param_2;
                uStack_50 = *(undefined8*)(param_2 + 8);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::ClearRenderTargets(
                    RenderTargets_const*, math::Vector4T<float> const*, unsigned long)::__36>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, (__36*)&local_68);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c1f450, 272 bytes, placed by class name
    // RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)
    void RenderContext::ClearDepthStencilTarget(float param_1, uint param_2, uint param_3) {
        RenderTargets* this_00;
        char cVar1;
        __38 local_50;

        this_00 = m_pCurrentState;
        if (this_00 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      962, (char*)0);
        }
        this_00->KeepAlive();
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = IsCurrentRenderTargetAlive(this, this_00);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                972, (char*)0);
            }
            (m_immediateContext, param_1, param_2, param_3)->ClearDepthStencilTarget();
        } else {
            local_50.field_0 = this;
            local_50.field_8 = this_00;
            local_50.field_20 = param_2;
            local_50.field_24 = param_3;
            if (field_3568 == (DeferredFrameData*)0) {
                local_50.field_16 = param_1;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::__39>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__39*)&local_50);
            } else {
                local_50.field_16 = param_1;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::__38>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_50);
            }
        }
    }

    // 0x100c1f7a0, 240 bytes, placed by class name
    // RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int, unsigned int)
    void RenderContext::ClearDepthStencilTarget(RenderTargets* param_1, float param_2, uint param_3, uint param_4) {
        char cVar1;
        __40 local_50;

        param_1->KeepAlive();
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = param_1->CheckTexturesAlive(this);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                988, (char*)0);
            }
            (m_immediateContext, param_1, param_2, param_3, param_4)->ClearDepthStencilTarget();
        } else {
            local_50.field_0 = param_1;
            local_50.field_8 = this;
            local_50.field_20 = param_3;
            local_50.field_24 = param_4;
            if (field_3568 == (DeferredFrameData*)0) {
                local_50.field_16 = param_2;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::ClearDepthStencilTarget(RenderTargets_const*, float, unsigned int,
                                                           unsigned int)::__41>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__41*)&local_50);
            } else {
                local_50.field_16 = param_2;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::ClearDepthStencilTarget(RenderTargets_const*, float, unsigned int,
                                                           unsigned int)::__40>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_50);
            }
        }
    }

    // 0x100c1fa10, 176 bytes, placed by class name
    // RenderContext::SetShaders(ShaderProgram const*)
    void RenderContext::SetShaders(ShaderProgram* param_1) {
        char cVar1;
        long lVar2;
        RenderResource* pRVar3;
        __42 local_28;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if (*(char*)(lVar2 + 11) != '\0') {
                pRVar3 = (RenderResource*)&param_1->field_12;
                if (param_1 == (ShaderProgram*)0) {
                    pRVar3 = (RenderResource*)0;
                }
                cVar1 = IsObjectAlive(this, pRVar3);
                if (cVar1 == '\0') {
                    SkipCurrentDrawCall(this);
                    return;
                }
            }
            (m_immediateContext, param_1)->SetShaders();
        } else {
            local_28.field_0 = this;
            local_28.field_8 = param_1;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetShaders(
                    ShaderProgram_const*)::__43>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                                 (__43*)&local_28);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetShaders(
                    ShaderProgram_const*)::__42>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_28);
            }
        }
    }

    // 0x100c1fd40, 304 bytes, placed by class name
    // RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*)
    void RenderContext::SetVertexBuffers(uint param_1, VertexBuffer** param_2, uint* param_3, uint* param_4) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        1007, (char*)0);
    }

    // 0x100c1fff0, 208 bytes, placed by class name
    // RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int)
    void RenderContext::SetVertexBuffer(VertexBuffer* param_1, uint param_2, uint param_3) {
        char cVar1;
        long lVar2;
        __46 local_40;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if ((*(char*)(lVar2 + 11) == '\0') || ((cVar1 = IsObjectAlive(this, (RenderResource*)param_1),
                                                    cVar1 != '\0' && (cVar1 = param_1->IsCreated(), cVar1 != '\0')))) {
                (m_immediateContext, param_1, param_2, param_3)->SetVertexBuffer();
            } else {
                SkipCurrentDrawCall(this);
            }
            return;
        }
        local_40.field_0 = this;
        local_40.field_8 = (RenderResource*)param_1;
        local_40.field_16 = param_2;
        local_40.field_20 = param_3;
        if (field_3568 == (DeferredFrameData*)0) {
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetVertexBuffer(
                VertexBuffer_const*, unsigned int, unsigned int)::__47>(
                (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__47*)&local_40);
            return;
        }
        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetVertexBuffer(
            VertexBuffer_const*, unsigned int, unsigned int)::__46>(
            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_40);
    }

    // 0x100c20240, 192 bytes, placed by class name
    // RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned int)
    void RenderContext::SetIndexBuffer(IndexBuffer* param_1, uint param_2) {
        char cVar1;
        long lVar2;
        __48 local_38;
        uint local_28;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if ((*(char*)(lVar2 + 11) == '\0') || ((cVar1 = IsObjectAlive(this, (RenderResource*)param_1),
                                                    cVar1 != '\0' && (cVar1 = param_1->IsCreated(), cVar1 != '\0')))) {
                ImmediateRenderContext::SetIndexBuffer((IndexBuffer*)m_immediateContext, (uint)param_1);
            } else {
                SkipCurrentDrawCall(this);
            }
            return;
        }
        local_38.field_0 = this;
        local_38.field_8 = (RenderResource*)param_1;
        local_28 = param_2;
        if (field_3568 == (DeferredFrameData*)0) {
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetIndexBuffer(
                IndexBuffer_const*, unsigned int)::__49>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                                         (__49*)&local_38);
            return;
        }
        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetIndexBuffer(
            IndexBuffer_const*, unsigned int)::__48>(
            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_38);
    }

    // 0x100c20560, 160 bytes, placed by class name
    // RenderContext::SetVertexDeclaration(VertexDeclaration const*)
    void RenderContext::SetVertexDeclaration(VertexDeclaration* param_1) {
        char cVar1;
        long lVar2;
        __50 local_28;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if ((*(char*)(lVar2 + 11) != '\0') &&
                (cVar1 = IsObjectAlive(this, (RenderResource*)param_1), cVar1 == '\0')) {
                SkipCurrentDrawCall(this);
                return;
            }
            (m_immediateContext, param_1)->SetVertexDeclaration();
        } else {
            local_28.field_0 = this;
            local_28.field_8 = (RenderResource*)param_1;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetVertexDeclaration(VertexDeclaration_const*)::__51>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__51*)&local_28);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetVertexDeclaration(VertexDeclaration_const*)::__50>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_28);
            }
        }
    }

    // 0x100c20b70, 176 bytes, placed by class name
    // RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool)
    void RenderContext::SetVSTextureSamplerPair(uint param_1, Texture* param_2, uint param_3, SamplerState* param_4,
                                                bool param_5) {
        undefined4 in_register_0000000c;
        uint extraout_EDX;
        undefined4 in_register_00000034;
        Texture* pTVar3;
        undefined1 uVar5;
        undefined7 in_register_00000089;
        RenderContext* local_68;
        uint local_60;
        Texture* local_58;
        uint local_50;
        SamplerState* local_48;
        undefined1 local_40;
        undefined4 local_34;

        uVar5 = SUB81(param_4, 0);
        pTVar3 = (Texture*)CONCAT44(in_register_00000034, param_1);
        local_34 = (undefined4)CONCAT71(in_register_00000089, param_5);
        if (ShouldDefer(this) == '\0') {
            ImmediateRenderContext::SetVSTextureSamplerPair((uint)(RenderContext*)this, pTVar3, extraout_EDX,
                                                            (SamplerState*)CONCAT44(in_register_0000000c, param_3),
                                                            (bool)uVar5);
        } else {
            local_40 = (undefined1)local_34;
            local_68 = this;
            local_60 = param_1;
            local_58 = param_2;
            local_50 = param_3;
            local_48 = param_4;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetVSTextureSamplerPair(unsigned int, Texture_const*, unsigned int,
                                                           SamplerState_const*, bool)::__53>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__53*)&local_68);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetVSTextureSamplerPair(unsigned int, Texture_const*, unsigned int,
                                                           SamplerState_const*, bool)::__52>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, (__52*)&local_68);
            }
        }
    }

    // 0x100c20da0, 192 bytes, placed by class name
    // RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool)
    void RenderContext::SetPSTextureSamplerPair(uint param_1, Texture* param_2, int param_3, SamplerState* param_4,
                                                bool param_5) {
        __54 local_68;

        if (ShouldDefer(this) == '\0') {
            (m_immediateContext, param_1, param_2, param_3, param_4, param_5)->SetPSTextureSamplerPair();
        } else {
            local_68.field_0 = (long)this;
            local_68.field_8 = param_1;
            local_68.field_16 = param_2;
            local_68.field_24 = param_3;
            local_68._40_1_ = param_5;
            if (field_3568 == (DeferredFrameData*)0) {
                local_68.field_32 = param_4;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetPSTextureSamplerPair(unsigned int, Texture_const*, int, SamplerState_const*,
                                                           bool)::__55>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__55*)&local_68);
            } else {
                local_68.field_32 = param_4;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetPSTextureSamplerPair(unsigned int, Texture_const*, int, SamplerState_const*,
                                                           bool)::__54>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_68);
            }
        }
    }

    // 0x100c20fe0, 192 bytes, placed by class name
    // RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void RenderContext::SetVSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        char cVar1;
        long lVar2;
        __56 local_38;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if ((*(char*)(lVar2 + 11) == '\0') || ((cVar1 = IsObjectAlive(this, (RenderResource*)param_2),
                                                    cVar1 != '\0' && (cVar1 = param_2->IsCreated(), cVar1 != '\0')))) {
                (m_immediateContext, param_1, param_2)->SetVSShaderConstBuffer();
            } else {
                SkipCurrentDrawCall(this);
            }
            return;
        }
        local_38.field_0 = this;
        local_38.field_8 = (RenderResource*)param_2;
        local_38.field_16 = param_1;
        if (field_3568 == (DeferredFrameData*)0) {
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetVSShaderConstBuffer(
                unsigned int, ShaderConstBuffer_const*)::__57>(
                (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__57*)&local_38);
            return;
        }
        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetVSShaderConstBuffer(
            unsigned int, ShaderConstBuffer_const*)::__56>(
            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_38);
    }

    // 0x100c21220, 192 bytes, placed by class name
    // RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void RenderContext::SetPSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        char cVar1;
        long lVar2;
        __58 local_38;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if ((*(char*)(lVar2 + 11) == '\0') || ((cVar1 = IsObjectAlive(this, (RenderResource*)param_2),
                                                    cVar1 != '\0' && (cVar1 = param_2->IsCreated(), cVar1 != '\0')))) {
                (m_immediateContext, param_1, param_2)->SetPSShaderConstBuffer();
            } else {
                SkipCurrentDrawCall(this);
            }
            return;
        }
        local_38.field_0 = this;
        local_38.field_8 = (RenderResource*)param_2;
        local_38.field_16 = param_1;
        if (field_3568 == (DeferredFrameData*)0) {
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetPSShaderConstBuffer(
                unsigned int, ShaderConstBuffer_const*)::__59>(
                (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__59*)&local_38);
            return;
        }
        eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetPSShaderConstBuffer(
            unsigned int, ShaderConstBuffer_const*)::__58>(
            (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_38);
    }

    // 0x100c21460, 288 bytes, placed by class name
    // RenderContext::SetDepthStencilState(DepthStencilState const*)
    void RenderContext::SetDepthStencilState(DepthStencilState* param_1) {
        char cVar1;
        Desc* pDVar2;
        undefined1 local_68[56];
        RenderContext* local_30;

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1103, (char*)0);
        }
        pDVar2 = (Desc*)param_1->second();
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            new (local_68) DepthStencilState();
            local_68->Create(pDVar2);
            (m_immediateContext, (DepthStencilState*)local_68)->SetDepthStencilState();
            local_68->~DepthStencilState();
        } else {
            local_30 = this;
            if (field_3568 == (DeferredFrameData*)0) {
                local_68._48_4_ = pDVar2[1].field_4;
                local_68._0_8_ = *(undefined8*)pDVar2;
                local_68._8_4_ = pDVar2->field_8;
                local_68._12_4_ = pDVar2->field_12;
                local_68[16] = pDVar2->field_16;
                local_68[17] = pDVar2->field_17;
                local_68[18] = pDVar2->field_18;
                local_68._19_5_ = *(undefined5*)&pDVar2->field_19;
                local_68._24_8_ = *(undefined8*)&pDVar2->field_24;
                local_68._32_8_ = *(undefined8*)&pDVar2->field_32;
                local_68._40_8_ = *(undefined8*)&pDVar2->field_40;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetDepthStencilState(DepthStencilState_const*)::__61>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__61*)local_68);
            } else {
                local_68._48_4_ = pDVar2[1].field_4;
                local_68._0_8_ = *(undefined8*)pDVar2;
                local_68._8_4_ = pDVar2->field_8;
                local_68._12_4_ = pDVar2->field_12;
                local_68[16] = pDVar2->field_16;
                local_68[17] = pDVar2->field_17;
                local_68[18] = pDVar2->field_18;
                local_68._19_5_ = *(undefined5*)&pDVar2->field_19;
                local_68._24_8_ = *(undefined8*)&pDVar2->field_24;
                local_68._32_8_ = *(undefined8*)&pDVar2->field_32;
                local_68._40_8_ = *(undefined8*)&pDVar2->field_40;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetDepthStencilState(DepthStencilState_const*)::__60>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, (__60*)local_68);
            }
        }
    }

    // 0x100c21700, 256 bytes, placed by class name
    // RenderContext::SetRasteriserState(RasteriserState const*)
    void RenderContext::SetRasteriserState(RasteriserState* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        char cVar3;
        Desc* pDVar4;
        __62 local_48;

        cVar3 = this_thread::IsMainThread();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1115, (char*)0);
        }
        pDVar4 = (Desc*)param_1->second();
        cVar3 = ShouldDefer(this);
        if (cVar3 == '\0') {
            new (&local_48) RasteriserState();
            local_48.Create(pDVar4);
            (m_immediateContext, (RasteriserState*)&local_48)->SetRasteriserState();
            local_48.~RasteriserState();
        } else {
            local_48.field_32 = (long)this;
            if (field_3568 == (DeferredFrameData*)0) {
                local_48.field_0._0_4_ = pDVar4->field_0;
                local_48.field_0._4_4_ = pDVar4->field_4;
                uVar2._0_4_ = pDVar4->field_8;
                uVar2._4_4_ = pDVar4->field_12;
                local_48.field_17 = *(undefined8*)((long)&pDVar4->field_16 + 1);
                local_48._16_1_ = SUB81((ulong) * (undefined8*)((long)&pDVar4->field_8 + 1) >> 56, 0);
                local_48.field_8._0_1_ = (undefined1)(undefined4)uVar2;
                local_48.field_8._1_7_ = (undefined7)((ulong)uVar2 >> 8);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetRasteriserState(
                    RasteriserState_const*)::__63>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                                   (__63*)&local_48);
            } else {
                local_48.field_0._0_4_ = pDVar4->field_0;
                local_48.field_0._4_4_ = pDVar4->field_4;
                uVar1._0_4_ = pDVar4->field_8;
                uVar1._4_4_ = pDVar4->field_12;
                local_48.field_17 = *(undefined8*)((long)&pDVar4->field_16 + 1);
                local_48._16_1_ = SUB81((ulong) * (undefined8*)((long)&pDVar4->field_8 + 1) >> 56, 0);
                local_48.field_8._0_1_ = (undefined1)(undefined4)uVar1;
                local_48.field_8._1_7_ = (undefined7)((ulong)uVar1 >> 8);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetRasteriserState(
                    RasteriserState_const*)::__62>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_48);
            }
        }
    }

    // 0x100c21980, 304 bytes, placed by class name
    // RenderContext::SetBlendState(BlendState const*)
    void RenderContext::SetBlendState(BlendState* param_1) {
        char cVar1;
        Desc* pDVar2;
        undefined1 local_78[88];

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1127, (char*)0);
        }
        pDVar2 = (Desc*)param_1->second();
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            new (local_78) BlendState();
            local_78->Create(pDVar2);
            (m_immediateContext, (BlendState*)local_78)->SetBlendState();
            local_78->~BlendState();
        } else {
            local_78._72_8_ = this;
            if (field_3568 == (DeferredFrameData*)0) {
                local_78._64_4_ = *(undefined4*)&pDVar2[5].field_4;
                local_78._0_8_ = *(undefined8*)pDVar2;
                local_78._8_8_ = *(undefined8*)&pDVar2->field_8;
                local_78._16_8_ = *(undefined8*)&pDVar2[1].field_4;
                local_78[24] = pDVar2[2].field_0;
                local_78[25] = pDVar2[2].field_1;
                local_78._26_6_ = *(undefined6*)&pDVar2[2].field_2;
                local_78._32_8_ = *(undefined8*)&pDVar2[2].field_8;
                local_78._40_8_ = *(undefined8*)&pDVar2[3].field_4;
                local_78[48] = pDVar2[4].field_0;
                local_78[49] = pDVar2[4].field_1;
                local_78._50_6_ = *(undefined6*)&pDVar2[4].field_2;
                local_78._56_8_ = *(undefined8*)&pDVar2[4].field_8;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetBlendState(
                    BlendState_const*)::__65>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                              (__65*)local_78);
            } else {
                local_78._64_4_ = *(undefined4*)&pDVar2[5].field_4;
                local_78._0_8_ = *(undefined8*)pDVar2;
                local_78._8_8_ = *(undefined8*)&pDVar2->field_8;
                local_78._16_8_ = *(undefined8*)&pDVar2[1].field_4;
                local_78[24] = pDVar2[2].field_0;
                local_78[25] = pDVar2[2].field_1;
                local_78._26_6_ = *(undefined6*)&pDVar2[2].field_2;
                local_78._32_8_ = *(undefined8*)&pDVar2[2].field_8;
                local_78._40_8_ = *(undefined8*)&pDVar2[3].field_4;
                local_78[48] = pDVar2[4].field_0;
                local_78[49] = pDVar2[4].field_1;
                local_78._50_6_ = *(undefined6*)&pDVar2[4].field_2;
                local_78._56_8_ = *(undefined8*)&pDVar2[4].field_8;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetBlendState(
                    BlendState_const*)::__64>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                              (__64*)local_78);
            }
        }
    }

    // 0x100c21c30, 176 bytes, placed by class name
    // RenderContext::DrawPrimitives(PrimitiveType, int, int)
    void RenderContext::DrawPrimitives(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
        char cVar1;
        __66 local_40;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = PreDrawCall(this);
            if (cVar1 != '\0') {
                (m_immediateContext, param_2, param_3, param_4)->DrawPrimitives();
            }
            PostDrawCall(this);
        } else {
            local_40.field_0 = this;
            local_40.field_8 = param_2;
            local_40.field_12 = param_3;
            local_40.field_16 = param_4;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::DrawPrimitives(
                    PrimitiveType, int, int)::__67>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                                    (__67*)&local_40);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::DrawPrimitives(
                    PrimitiveType, int, int)::__66>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_40);
            }
        }
    }

    // 0x100c21e60, 16 bytes, placed by class name
    // RenderContext::PreDrawCall()
    bool RenderContext::PreDrawCall() {
        return field_4152 == '\0';
    }

    // 0x100c21e70, 48 bytes, placed by class name
    // RenderContext::PostDrawCall()
    void RenderContext::PostDrawCall() {
        long lVar1;

        field_4152 = 0;
        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) != '\0') {
            UnlockDeadObjectsMutex(this);
        }
    }

    // 0x100c21ea0, 64 bytes, placed by class name
    // RenderContext::DrawPrimitives(DrawCallState&, PrimitiveType, int, int)
    void RenderContext::DrawPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                       undefined4 param_5) {
        BindDrawCallState(this, param_1);
        DrawPrimitives(this, param_3, param_4, param_5);
    }

    // 0x100c21ee0, 288 bytes, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)
    void RenderContext::DrawMultiPrimitives(undefined4 param_2, uint param_3, int* param_4, int* param_5) {
        DeferredFrameData* pDVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        render local_80;
        render local_70;
        undefined1 local_60[32];
        WrapArray<math::Matrix44T<float> const> local_40[16];

        AllocateScratchArrayAndCopy<int>(&local_80, this, param_4, (ulong)param_3);
        AllocateScratchArrayAndCopy<int>(&local_70, this, param_5, (ulong)param_3);
        cVar2 = ShouldDefer(this);
        if (cVar2 == '\0') {
            cVar2 = PreDrawCall(this);
            if (cVar2 != '\0') {
                uVar3 = local_80.end();
                uVar4 = local_70.end();
                (m_immediateContext, param_2, param_3, uVar3, uVar4)->DrawMultiPrimitives();
            }
            PostDrawCall(this);
        } else {
            pDVar1 = field_3568;
            local_60._0_8_ = this;
            local_60._8_4_ = param_2;
            local_60._12_4_ = param_3;
            if (pDVar1 == (DeferredFrameData*)0) {
                new ((local_60 + 16)) WrapArray<math::Matrix44T<float> const>((WrapArray*)&local_80);
                WrapArray<math::Matrix44T<float> const>::WrapArray(local_40, (WrapArray*)&local_70);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::__69>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__69*)local_60);
            } else {
                new ((local_60 + 16)) WrapArray<math::Matrix44T<float> const>((WrapArray*)&local_80);
                WrapArray<math::Matrix44T<float> const>::WrapArray(local_40, (WrapArray*)&local_70);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::__68>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__68*)local_60);
            }
        }
    }

    // 0x100c22230, 80 bytes, placed by class name
    // RenderContext::DrawMultiPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, int const*)
    void RenderContext::DrawMultiPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                            undefined8 param_5, undefined8 param_6) {
        BindDrawCallState(this, param_1);
        DrawMultiPrimitives(this, param_3, param_4, param_5, param_6);
    }

    // 0x100c22280, 192 bytes, placed by class name
    // RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType)
    void RenderContext::DrawIndexedPrimitives(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                              undefined4 param_5) {
        char cVar1;
        __70 local_48;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = PreDrawCall(this);
            if (cVar1 != '\0') {
                (m_immediateContext, param_2, param_3, param_4, param_5)->DrawIndexedPrimitives();
            }
            PostDrawCall(this);
        } else {
            local_48.field_0 = this;
            local_48.field_8 = param_2;
            local_48.field_12 = param_3;
            local_48.field_16 = param_4;
            local_48.field_20 = param_5;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType)::__71>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__71*)&local_48);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType)::__70>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_48);
            }
        }
    }

    // 0x100c224c0, 160 bytes, placed by class name
    // RenderContext::DrawIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, unsigned int)
    void RenderContext::DrawIndexedPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                              undefined4 param_5) {
        undefined4 uVar1;
        InputAssemblerState* pIVar2;
        Component* this_00;

        pIVar2 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        if (pIVar2->GetIndexBuffer() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawCallState.GetInputAssemblerState().GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1168, (char*)0);
        }
        BindDrawCallState(this, param_1);
        pIVar2 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        this_00 = (Component*)pIVar2->GetIndexBuffer();
        uVar1 = this_00->GetCurrentX();
        DrawIndexedPrimitives(this, param_3, param_4, param_5, uVar1);
    }

    // 0x100c22560, 336 bytes, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)
    void RenderContext::DrawMultiIndexedPrimitives(undefined4 param_2, uint param_3, int* param_4, void** param_5,
                                                   undefined4 param_6) {
        DeferredFrameData* pDVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        render local_90;
        render local_80;
        undefined1 local_70[32];
        WrapArray<math::Matrix44T<float> const> local_50[16];
        undefined4 local_40;

        AllocateScratchArrayAndCopy<int>(&local_90, this, param_4, (ulong)param_3);
        AllocateScratchArrayAndCopy<void_const*>(&local_80, this, param_5, (ulong)param_3);
        cVar2 = ShouldDefer(this);
        if (cVar2 == '\0') {
            cVar2 = PreDrawCall(this);
            if (cVar2 != '\0') {
                uVar3 = local_90.end();
                uVar4 = local_80.end();
                (m_immediateContext, param_2, param_3, uVar3, uVar4, param_6)->DrawMultiIndexedPrimitives();
            }
            PostDrawCall(this);
        } else {
            pDVar1 = field_3568;
            local_70._0_8_ = this;
            local_70._8_4_ = param_2;
            local_70._12_4_ = param_3;
            if (pDVar1 == (DeferredFrameData*)0) {
                new ((local_70 + 16)) WrapArray<math::Matrix44T<float> const>((WrapArray*)&local_90);
                WrapArray<math::Matrix44T<float> const>::WrapArray(local_50, (WrapArray*)&local_80);
                local_40 = param_6;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*,
                                                              void_const* const*, IndexType)::__73>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__73*)local_70);
            } else {
                new ((local_70 + 16)) WrapArray<math::Matrix44T<float> const>((WrapArray*)&local_90);
                WrapArray<math::Matrix44T<float> const>::WrapArray(local_50, (WrapArray*)&local_80);
                local_40 = param_6;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*,
                                                              void_const* const*, IndexType)::__72>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__72*)local_70);
            }
        }
    }

    // 0x100c228e0, 160 bytes, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, void const* const*)
    void RenderContext::DrawMultiIndexedPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                                   undefined8 param_5, undefined8 param_6) {
        undefined4 uVar1;
        InputAssemblerState* pIVar2;
        Component* this_00;

        pIVar2 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        if (pIVar2->GetIndexBuffer() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawCallState.GetInputAssemblerState().GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1184, (char*)0);
        }
        BindDrawCallState(this, param_1);
        pIVar2 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        this_00 = (Component*)pIVar2->GetIndexBuffer();
        uVar1 = this_00->GetCurrentX();
        DrawMultiIndexedPrimitives(this, param_3, param_4, param_5, param_6, uVar1);
    }

    // 0x100c22980, 176 bytes, placed by class name
    // RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)
    void RenderContext::DispatchCompute(uint param_1, uint param_2, uint param_3) {
        char cVar1;
        __74 local_40;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = PreDispatchCall(this);
            if (cVar1 != '\0') {
                (m_immediateContext, param_1, param_2, param_3)->DispatchCompute();
            }
            PostDispatchCall(this);
        } else {
            local_40.field_0 = this;
            local_40.field_8 = param_1;
            local_40.field_12 = param_2;
            local_40.field_16 = param_3;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::DispatchCompute(
                    unsigned int, unsigned int, unsigned int)::__75>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__75*)&local_40);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::DispatchCompute(
                    unsigned int, unsigned int, unsigned int)::__74>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_40);
            }
        }
    }

    // 0x100c22bb0, 16 bytes, placed by class name
    // RenderContext::PreDispatchCall()
    bool RenderContext::PreDispatchCall() {
        return field_4153 == '\0';
    }

    // 0x100c22bc0, 48 bytes, placed by class name
    // RenderContext::PostDispatchCall()
    void RenderContext::PostDispatchCall() {
        long lVar1;

        field_4153 = 0;
        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) != '\0') {
            UnlockDeadObjectsMutex(this);
        }
    }

    // 0x100c22bf0, 64 bytes, placed by class name
    // RenderContext::DispatchCompute(DispatchCallState&, unsigned int, unsigned int, unsigned int)
    void RenderContext::DispatchCompute(DispatchCallState* param_1, uint param_2, uint param_3, uint param_4) {
        BindDispatchCallState(this, param_1);
        DispatchCompute(this, param_2, param_3, param_4);
    }

    // 0x100c22c30, 128 bytes, placed by class name
    // RenderContext::MemoryBarrier(unsigned int)
    void RenderContext::MemoryBarrier(uint param_1) {
        __76 local_28;

        if (ShouldDefer(this) == '\0') {
            (m_immediateContext, param_1)->MemoryBarrier();
        } else {
            local_28.field_0 = (long)this;
            local_28.field_8 = param_1;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::MemoryBarrier(
                    unsigned int)::__77>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584,
                                         (__77*)&local_28);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::MemoryBarrier(
                    unsigned int)::__76>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                         &local_28);
            }
        }
    }

    // 0x100c22e80, 816 bytes, placed by class name
    // RenderContext::FinishRendering()
    void RenderContext::FinishRendering() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        long lVar3;
        long* plVar4;
        ulong uVar5;
        undefined8 uVar6;
        ulong uVar7;
        __79 local_150;
        Fence local_140;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar3 = GetDesc(this);
        if (*(char*)(lVar3 + 10) == '\0') {
            cVar1 = this_thread::IsMainThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1210, (char*)0);
            }
            local_140._0_8_ = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderContext::FinishRendering()::__78, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, (__78*)&local_140);
            RunSynchronouslyOnRenderThread(this, &local_c8, false);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            lVar3 = GetDesc(this);
            if (*(char*)(lVar3 + 11) != '\0') {
                bVar2 = (&field_3560)->operator_cast_to_bool();
                if (!bVar2) {
                    uVar6 = logger::default_logger();
                    logger::Logger::Log(uVar6, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/context/RenderContext.cpp",
                                        1242, "Attempting to finish rendering with no deferred frames.");
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/RenderContext.cpp",
                                    1243, (char*)0);
                }
            }
            cVar1 = IsInsideBeginEnd(this);
            if (cVar1 == '\0') {
                BeginInternal(this, true);
            }
            new (&local_140) Fence();
            local_150.field_0 = (long)this;
            local_150.field_8 = &local_140;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderContext::FinishRendering()::__79, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_150);
            EndInternal(this, &local_c8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            local_140.Wait();
            local_140.~Fence();
            if (field_3568 != (DeferredFrameData*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_writeFrame",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1246, (char*)0);
            }
            cVar1 = (&field_3584)->empty();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_outsideBeginEndDeferredFunctions.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1247, (char*)0);
            }
            cVar1 = IsInsideBeginEnd(this);
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!IsInsideBeginEnd()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1248, (char*)0);
            }
        }
        local_140._0_8_ = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderContext::FinishRendering()::__80, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, (__80*)&local_140);
        RunSynchronouslyOnRenderThread(this, &local_c8, false);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        lVar3 = GetDesc(this);
        if (*(char*)(lVar3 + 10) == '\0') {
            this_00 = &field_3560;
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                ResetKeepAliveSharedPtrs(this, 1);
                plVar4 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>::
                         operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                std::default_delete<MultiBuffer<DeferredFrameData>>>*)this_00);
                lVar3 = (**(code**)(*plVar4 + 64))(plVar4);
                if (lVar3 != 0) {
                    uVar7 = 0;
                    do {
                        plVar4 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                        std::default_delete<MultiBuffer<DeferredFrameData>>>::
                                 operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                        std::default_delete<MultiBuffer<DeferredFrameData>>>*)this_00);
                        lVar3 = (**(code**)(*plVar4 + 72))(plVar4, uVar7);
                        ((lVar3 + 368))->clear();
                        uVar7 = uVar7 + 1;
                        plVar4 = (long*)std::unique_ptr<MultiBuffer<DeferredFrameData>,
                                                        std::default_delete<MultiBuffer<DeferredFrameData>>>::
                                 operator->((unique_ptr<MultiBuffer<DeferredFrameData>,
                                                        std::default_delete<MultiBuffer<DeferredFrameData>>>*)this_00);
                        uVar5 = (**(code**)(*plVar4 + 64))(plVar4);
                    } while (uVar7 < uVar5);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c231f0, 416 bytes, placed by class name
    // RenderContext::CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CubeFace)
    void RenderContext::CopyColourTargetData(Texture* param_1, undefined4 param_2, undefined4 param_3,
                                             undefined4 param_4, undefined4 param_5, undefined4 param_6,
                                             undefined4 param_7, undefined4 param_8, undefined4 param_9,
                                             undefined4 param_11) {
        RenderTargets* this_00;
        char cVar1;
        long lVar2;
        undefined8 extraout_RDX;
        RenderResource* pRVar3;
        __81 local_78;

        this_00 = m_pCurrentState;
        this_00->KeepAlive();
        cVar1 = ShouldDefer(this);
        if (cVar1 != '\0') {
            local_78.field_0 = this;
            local_78.field_8 = param_1;
            local_78.field_16 = this_00;
            local_78._24_4_ = param_2;
            local_78.field_28 = param_3;
            if (field_3568 == (DeferredFrameData*)0) {
                local_78.field_32 = param_4;
                local_78.field_36 = param_5;
                local_78.field_40 = param_6;
                local_78.field_44 = param_7;
                local_78.field_48 = param_8;
                local_78.field_52 = param_9;
                local_78.field_56 = param_11;
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::CopyColourTargetData(Texture_const*, unsigned int, unsigned int, unsigned int,
                                                        unsigned int, unsigned int, unsigned int, unsigned int,
                                                        unsigned int, CubeFace)::__82>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__82*)&local_78);
                return;
            }
            local_78.field_32 = param_4;
            local_78.field_36 = param_5;
            local_78.field_40 = param_6;
            local_78.field_44 = param_7;
            local_78.field_48 = param_8;
            local_78.field_52 = param_9;
            local_78.field_56 = param_11;
            eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::CopyColourTargetData(
                Texture_const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                unsigned int, unsigned int, CubeFace)::__81>(
                (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_78);
            return;
        }
        lVar2 = GetDesc(this);
        if (*(char*)(lVar2 + 11) != '\0') {
            pRVar3 = (RenderResource*)&param_1->field_8;
            if (param_1 == (Texture*)0) {
                pRVar3 = (RenderResource*)0;
            }
            cVar1 = IsObjectAlive(this, pRVar3);
            if ((cVar1 == '\0') || (cVar1 = param_1->IsCreated(), cVar1 == '\0')) {
                SkipCurrentDrawCall(this);
                return;
            }
        }
        cVar1 = IsCurrentRenderTargetAlive(this, this_00);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1304, (char*)0);
        }
        (m_immediateContext, param_1, extraout_RDX, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
         param_11)
            ->CopyColourTargetData();
    }

    // 0x100c23940, 320 bytes, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)
    void RenderContext::ResolveColourTargetData(RenderTargets* param_1, uint param_2, Rect* param_3, Rect* param_4) {
        RenderTargets* this_00;
        DeferredFrameData* pDVar1;
        char cVar2;
        RenderContext* local_80;
        RenderTargets* local_78;
        RenderTargets* local_70;
        uint local_68;
        Rect<unsigned int> local_64[16];
        Rect<unsigned int> local_54[20];

        this_00 = m_pCurrentState;
        this_00->KeepAlive();
        param_1->KeepAlive();
        cVar2 = ShouldDefer(this);
        if (cVar2 != '\0') {
            pDVar1 = field_3568;
            local_80 = this;
            local_78 = this_00;
            local_70 = param_1;
            local_68 = param_2;
            if (pDVar1 == (DeferredFrameData*)0) {
                math::Rect<unsigned int>::Rect(local_64, param_3);
                math::Rect<unsigned int>::Rect(local_54, param_4);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int,
                                                           math::Rect<unsigned int> const&,
                                                           math::Rect<unsigned int> const&)::__84>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__84*)&local_80);
            } else {
                math::Rect<unsigned int>::Rect(local_64, param_3);
                math::Rect<unsigned int>::Rect(local_54, param_4);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int,
                                                           math::Rect<unsigned int> const&,
                                                           math::Rect<unsigned int> const&)::__83>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__83*)&local_80);
            }
            return;
        }
        cVar2 = IsCurrentRenderTargetAlive(this, this_00);
        if ((cVar2 == '\0') || (cVar2 = param_1->CheckTexturesAlive(this), cVar2 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1323, (char*)0);
        }
        (m_immediateContext, param_1, param_2, param_3, param_4)->ResolveColourTargetData();
    }

    // 0x100c24600, 192 bytes, placed by class name
    // RenderContext::ReadColourTargetData(RenderTargets const*, void*, Format, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    void RenderContext::ReadColourTargetData(RenderContext* param_1, RenderTargets* param_2, undefined8 param_3,
                                             undefined4 param_4) {
        char cVar1;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;

        cVar1 = ShouldDefer(param_1);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!ShouldDefer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1340, (char*)0);
        }
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                   param_2->GetColourTargetTextures();
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!pSrcRenderTarget->GetColourTargetTextures().empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1341, (char*)0);
        }
        (param_1->m_immediateContext, param_2)->SetRenderTargets();
        (param_1->m_immediateContext, param_3, param_4)->ReadColourTargetData();
    }

    // 0x100c247f0, 96 bytes, placed by class name
    // RenderContext::FlushTextureCache()
    void RenderContext::FlushTextureCache() {
        __85 local_18;

        if (ShouldDefer(this) == '\0') {
            m_immediateContext->FlushTextureCache();
        } else {
            local_18.field_0 = (long)this;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::FlushTextureCache()::__86>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__86*)&local_18);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::FlushTextureCache()::__85>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_18);
            }
        }
    }

    // 0x100c24a60, 256 bytes, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)
    undefined4 RenderContext::SetView(shared_ptr* param_1) {
        DeferredFrameData* pDVar1;
        undefined4 uVar3;
        RenderContext* pRVar4;
        RenderContext* local_40;
        shared_ptr<oldscape::dash3d::Decor> local_38[16];

        pRVar4 = this;
        uVar3 = ShouldDefer(this);
        if ((char)uVar3 == '\0') {
            ImmediateRenderContext::SetView((shared_ptr*)pRVar4);
        } else {
            pRVar4 = this;
            if (ShouldDefer(this) == '\0') {
                ImmediateRenderContext::SetView((shared_ptr*)pRVar4);
                /* WARNING: Subroutine does not return */
                LogAssert("result",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContext.cpp",
                          1366, (char*)0);
            }
            pDVar1 = field_3568;
            local_40 = this;
            if (pDVar1 == (DeferredFrameData*)0) {
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_38, param_1);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetView(
                    shared_ptr<OpenGLView> const&)::__88>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__88*)&local_40);
                SetView(shared_ptr<OpenGLView> const&)::$_88::~__88((__88*)&local_40);
            } else {
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_38, param_1);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetView(
                    shared_ptr<OpenGLView> const&)::__87>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&pDVar1->field_80, (__87*)&local_40);
                SetView(shared_ptr<OpenGLView> const&)::$_87::~__87((__87*)&local_40);
            }
        }
        return uVar3;
    }

    // 0x100c24d20, 192 bytes, placed by class name
    // RenderContext::OnDeviceLost()
    void RenderContext::OnDeviceLost() {
        __89 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (IsInsideBeginEnd(this) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsInsideBeginEnd()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1380, (char*)0);
        }
        local_d0.field_0 = (long)this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderContext::OnDeviceLost()::__89, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        RunSynchronouslyOnRenderThread(this, &local_c8, false);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c24df0, 128 bytes, placed by class name
    // RenderContext::SetVSyncMode(VSyncMode)
    void RenderContext::SetVSyncMode(undefined4 param_2) {
        __90 local_28;

        if (ShouldDefer(this) == '\0') {
            (m_immediateContext, param_2)->SetVSyncMode();
        } else {
            local_28.field_0 = (long)this;
            local_28.field_8 = param_2;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetVSyncMode(
                    VSyncMode)::__91>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__91*)&local_28);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::SetVSyncMode(
                    VSyncMode)::__90>((vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80,
                                      &local_28);
            }
        }
    }

    // 0x100c24ff0, 288 bytes, placed by class name
    // RenderContext::AddDeadObject(RenderResource const*)
    void RenderContext::AddDeadObject(RenderResource* param_1) {
        long lVar2;
        RenderResource** ppRVar3;
        RenderResource** ppRVar4;
        undefined1* puVar5;
        RenderResource* local_30;
        scoped_lock<std::mutex> local_28[8];

        local_30 = param_1;
        if (IsContextThread(this) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1395, (char*)0);
        }
        if (local_30 == (RenderResource*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDead",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1396, (char*)0);
        }
        lVar2 = GetDesc(this);
        if (*(char*)(lVar2 + 11) != '\0') {
            std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_4000);
            puVar5 = &field_3968;
            ppRVar3 = (RenderResource**)puVar5->HeapBeginPtr();
            ppRVar4 = (RenderResource**)puVar5->end();
            ppRVar3 = eastl::remove<RenderResource_const**, RenderResource_const*>(ppRVar3, ppRVar4, &local_30);
            ppRVar4 = (RenderResource**)puVar5->end();
            puVar5->erase(ppRVar3, ppRVar4);
            std::scoped_lock<std::mutex>::~scoped_lock(local_28);
            std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_3896);
            puVar5 =
                (undefined1*)eastl::hash_map<RenderResource_const*, signed char, eastl::hash<RenderResource_const*>,
                                             eastl::equal_to<RenderResource_const*>, eastl::allocator, false>::
                operator[](
                    (hash_map<RenderResource_const*, signed char, eastl::hash<RenderResource_const*>,
                              eastl::equal_to<RenderResource_const*>, eastl::allocator, false>*)(field_3704 + 136),
                    &local_30);
            *puVar5 = 3;
            std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        }
    }

    // 0x100c25200, 144 bytes, placed by class name
    // RenderContext::RemoveDeadObject(RenderResource const*)
    void RenderContext::RemoveDeadObject(RenderResource* param_1) {
        long lVar1;
        RenderResource* local_20;
        scoped_lock<std::mutex> local_18[8];

        local_20 = param_1;
        if (param_1 == (RenderResource*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDead",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1415, (char*)0);
        }
        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) != '\0') {
            std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_4000);
            (&field_3968, &local_20)->push_back();
            std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        }
    }

    // 0x100c25380, 176 bytes, placed by class name
    // RenderContext::IsKeepAliveSharedPtrInternal(void const*) const
    void RenderContext::IsKeepAliveSharedPtrInternal(void* param_1) {
        char cVar1;
        hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                  eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                  eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* this_00;
        eastl local_38[16];
        hashtable_iterator_base local_28[16];
        void* local_18;

        local_18 = param_1;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1461, (char*)0);
        }
        if (local_18 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("ptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1462, (char*)0);
        }
        this_00 = (hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                             eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                             eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>*)&field_3616;
        if (field_3568 != (DeferredFrameData*)0) {
            this_00 =
                (hashtable<KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
                           eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
                           eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing,
                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>*)&field_3568
                    ->field_312;
        }
        local_38 = (eastl[16])eastl::hashtable<
            KeepAliveSharedPtrAndOwner, KeepAliveSharedPtrAndOwner, eastl::allocator,
            eastl::use_self<KeepAliveSharedPtrAndOwner>, eastl::equal_to<KeepAliveSharedPtrAndOwner>,
            eastl::hash<KeepAliveSharedPtrAndOwner>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, false, true>::find_as<void_const*>(this_00, &local_18);
        local_28 = (hashtable_iterator_base[16])this_00->end();
        eastl::operator!=(local_38, local_28, local_28._8_8_);
    }

    // 0x100c256e0, 112 bytes, placed by class name
    // RenderContext::LockContext()
    undefined4 RenderContext::LockContext() {
        char cVar1;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1561, (char*)0);
        }
        cVar1 = ShouldDefer(this);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1565, (char*)0);
        }
        return m_immediateContext->LockContext();
    }

    // 0x100c257c0, 112 bytes, placed by class name
    // RenderContext::UnlockContext()
    void RenderContext::UnlockContext() {
        char cVar1;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1576, (char*)0);
        }
        cVar1 = ShouldDefer(this);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1579, (char*)0);
        }
        m_immediateContext->UnlockContext();
    }

    // 0x100c258c0, 208 bytes, placed by class name
    // RenderContext::ResetDeferredFrames()
    void RenderContext::ResetDeferredFrames() {
        long lVar1;
        __94 local_e0;
        undefined1 local_d0[8];
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) != '\0') {
            local_d0[0] = 0;
            local_e0.field_8 = local_d0;
            local_e0.field_0 = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderContext::ResetDeferredFrames()::__94, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_e0);
            RunImmediatelyOnRenderThread(this, &local_c8);
            WaitWithMainThreadEventLoop<RenderContext::ResetDeferredFrames()::__95>(local_d0);
            ((field_3704 + 8))->Wait();
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c32bf0, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::~$_22()
    /* ~$_22() */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_22::~__22() {
        field_8->~DrawCallState();
    }

    // 0x100c32c00, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::~$_23()
    /* ~$_23() */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_23::~__23() {
        field_8->~DrawCallState();
    }

    // 0x100c32c30, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::~$_24()
    /* ~$_24() */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_24::~__24() {
        field_8->~DrawCallState();
    }

    // 0x100c32c40, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::~$_25()
    /* ~$_25() */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_25::~__25() {
        field_8->~DrawCallState();
    }

    // 0x100c32c50, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::~$_26()
    /* ~$_26() */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::~__26() {
        field_8->~DispatchCallState();
    }

    // 0x100c32c60, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::~$_27()
    /* ~$_27() */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::~__27() {
        field_8->~DispatchCallState();
    }

    // 0x100c32c90, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::~$_28()
    /* ~$_28() */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::~__28() {
        field_8->~DispatchCallState();
    }

    // 0x100c32ca0, 16 bytes, base-object destructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::~$_29()
    /* ~$_29() */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::~__29() {
        field_8->~DispatchCallState();
    }

    // 0x100c3b2a0: the linker folded this into VertexBuffer::operator=(VertexBuffer&&), which has identical code
    PixelUnpackBuffer::operator=(PixelUnpackBuffer&&);

    // 0x100c3f350, 32 bytes, placed by class name
    // RenderContext::Init(RenderContextDesc const&)::$_2::operator()() const
    /* RenderContext::Init(RenderContextDesc
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    void RenderContext::Init(RenderContextDesc_const&)::$_2::operator()() {
        RenderThread(field_0, field_8);
    }

    // 0x100c3f830: the linker folded this into DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&), which has identical code
    DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction&&);

    // 0x100c3f830: the linker folded this into DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&), which has identical code
    DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction const&);

    // 0x100c3f960: the linker folded this into DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&), which has identical code
    DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction&&);

    // 0x100c3f960: the linker folded this into DeferredRenderFunction::DeferredRenderFunction(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&), which has identical code
    DeferredRenderFunction::DeferredRenderFunction(DeferredRenderFunction const&);

    // 0x100c40160, 32 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_4::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_4::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_4::operator()(RenderContext* param_1) {
        long lVar1;

        lVar1 = field_0;
        *(undefined1*)(lVar1 + 3193) = 1;
        *(undefined2*)(lVar1 + 4152) = 0;
    }

    // 0x100c40370, 32 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_5::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_5::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_5::operator()(RenderContext* param_1) {
        long lVar1;

        lVar1 = field_0;
        *(undefined1*)(lVar1 + 3193) = 1;
        *(undefined2*)(lVar1 + 4152) = 0;
    }

    // 0x100c40580, 32 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_6::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_6::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_6::operator()(RenderContext* param_1) {
        ((field_0 + 16))->Begin();
    }

    // 0x100c40790, 32 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_7::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_7::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_7::operator()(RenderContext* param_1) {
        ((field_0 + 16))->Begin();
    }

    // 0x100c40aa0, 48 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_8::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_8::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_8::operator()(RenderContext* param_1) {
        unique_ptr<FPSCounter, std::default_delete<FPSCounter>>* this_00;
        FPSCounter* this_01;
        ulonglong uVar1;

        this_00 = (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)(field_0 + 4144);
        this_01 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(this_00);
        uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_00);
        this_01->RecordDrawStartTime(uVar1);
    }

    // 0x100c40cc0, 48 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_9::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_9::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_9::operator()(RenderContext* param_1) {
        unique_ptr<FPSCounter, std::default_delete<FPSCounter>>* this_00;
        FPSCounter* this_01;
        ulonglong uVar1;

        this_00 = (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)(field_0 + 4144);
        this_01 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(this_00);
        uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_00);
        this_01->RecordDrawStartTime(uVar1);
    }

    // 0x100c40ee0, 16 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_10::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_10::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_10::operator()(RenderContext* param_1) {
        CleanUpDeadObjects(field_0);
    }

    // 0x100c410e0, 16 bytes, placed by class name
    // RenderContext::BeginInternal(bool)::$_11::operator()(RenderContext&) const
    /* RenderContext::BeginInternal(bool)::$_11::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BeginInternal(bool)::$_11::operator()(RenderContext* param_1) {
        CleanUpDeadObjects(field_0);
    }

    // 0x100c41f00, 32 bytes, placed by class name
    // RenderContext::Present()::$_18::operator()(RenderContext&) const
    /* RenderContext::Present()::$_18::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::Present()::$_18::operator()(RenderContext* param_1) {
        ((field_0 + 16))->Present();
    }

    // 0x100c42110, 32 bytes, placed by class name
    // RenderContext::Present()::$_19::operator()(RenderContext&) const
    /* RenderContext::Present()::$_19::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::Present()::$_19::operator()(RenderContext* param_1) {
        ((field_0 + 16))->Present();
    }

    // 0x100c42320, 32 bytes, placed by class name
    // RenderContext::SetInputAssemblerState(InputAssemblerState const*)::$_20::operator()(RenderContext&) const
    /* RenderContext::SetInputAssemblerState(InputAssemblerState
   const*)::$_20::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetInputAssemblerState(InputAssemblerState_const*)::$_20::operator()(RenderContext* param_1) {
        ((field_0 + 16), (InputAssemblerState*)0)->SetInputAssemblerState();
    }

    // 0x100c42530, 32 bytes, placed by class name
    // RenderContext::SetInputAssemblerState(InputAssemblerState const*)::$_21::operator()(RenderContext&) const
    /* RenderContext::SetInputAssemblerState(InputAssemblerState
   const*)::$_21::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetInputAssemblerState(InputAssemblerState_const*)::$_21::operator()(RenderContext* param_1) {
        ((field_0 + 16), (InputAssemblerState*)0)->SetInputAssemblerState();
    }

    // 0x100c42710, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::$_22($_22&&): jumps straight to the base-object constructor

    // 0x100c42720, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::$_22($_22&&)
    /* $_22($_22&&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_22::__22(__22* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c42770, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::$_22($_22 const&): jumps straight to the base-object constructor

    // 0x100c42780, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::$_22($_22 const&)
    /* $_22($_22 const&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_22::__22(__22* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c427c0, 32 bytes, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_22::operator()(RenderContext&) const
    /* RenderContext::BindDrawCallState(DrawCallState&)::$_22::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_22::operator()(RenderContext* param_1) {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c429b0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::$_23($_23&&): jumps straight to the base-object constructor

    // 0x100c429c0, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::$_23($_23&&)
    /* $_23($_23&&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_23::__23(__23* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c42a10, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::$_23($_23 const&): jumps straight to the base-object constructor

    // 0x100c42a20, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::$_23($_23 const&)
    /* $_23($_23 const&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_23::__23(__23* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c42a60, 32 bytes, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_23::operator()(RenderContext&) const
    /* RenderContext::BindDrawCallState(DrawCallState&)::$_23::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_23::operator()(RenderContext* param_1) {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c44be0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::$_24($_24&&): jumps straight to the base-object constructor

    // 0x100c44bf0, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::$_24($_24&&)
    /* $_24($_24&&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_24::__24(__24* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c44c40, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::$_24($_24 const&): jumps straight to the base-object constructor

    // 0x100c44c50, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::$_24($_24 const&)
    /* $_24($_24 const&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_24::__24(__24* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c44c90, 32 bytes, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_24::operator()(RenderContext&) const
    /* RenderContext::BindDrawCallState(DrawCallState&)::$_24::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_24::operator()(RenderContext* param_1) {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c44e80, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::$_25($_25&&): jumps straight to the base-object constructor

    // 0x100c44e90, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::$_25($_25&&)
    /* $_25($_25&&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_25::__25(__25* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c44ee0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::$_25($_25 const&): jumps straight to the base-object constructor

    // 0x100c44ef0, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::$_25($_25 const&)
    /* $_25($_25 const&) */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_25::__25(__25* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DrawCallState*)(param_1 + 8)) DrawCallState();
    }

    // 0x100c44f30, 32 bytes, placed by class name
    // RenderContext::BindDrawCallState(DrawCallState&)::$_25::operator()(RenderContext&) const
    /* RenderContext::BindDrawCallState(DrawCallState&)::$_25::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDrawCallState(DrawCallState&)::$_25::operator()(RenderContext* param_1) {
        BindDrawCallStateInternal(field_0, (DrawCallState*)field_8);
    }

    // 0x100c45120, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::$_26($_26&&): jumps straight to the base-object constructor

    // 0x100c45130, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::$_26($_26&&)
    /* $_26($_26&&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::__26(__26* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c45180, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::$_26($_26 const&): jumps straight to the base-object constructor

    // 0x100c45190, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::$_26($_26 const&)
    /* $_26($_26 const&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::__26(__26* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c451d0, 32 bytes, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::operator()(RenderContext&) const
    /* RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_26::operator()(RenderContext* param_1) {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c453c0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::$_27($_27&&): jumps straight to the base-object constructor

    // 0x100c453d0, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::$_27($_27&&)
    /* $_27($_27&&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::__27(__27* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c45420, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::$_27($_27 const&): jumps straight to the base-object constructor

    // 0x100c45430, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::$_27($_27 const&)
    /* $_27($_27 const&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::__27(__27* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c45470, 32 bytes, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::operator()(RenderContext&) const
    /* RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_27::operator()(RenderContext* param_1) {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c45d40, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::$_28($_28&&): jumps straight to the base-object constructor

    // 0x100c45d50, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::$_28($_28&&)
    /* $_28($_28&&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::__28(__28* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c45da0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::$_28($_28 const&): jumps straight to the base-object constructor

    // 0x100c45db0, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::$_28($_28 const&)
    /* $_28($_28 const&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::__28(__28* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c45df0, 32 bytes, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::operator()(RenderContext&) const
    /* RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_28::operator()(RenderContext* param_1) {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c45fe0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::$_29($_29&&): jumps straight to the base-object constructor

    // 0x100c45ff0, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::$_29($_29&&)
    /* $_29($_29&&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::__29(__29* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c46040, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::$_29($_29 const&): jumps straight to the base-object constructor

    // 0x100c46050, 32 bytes, base-object constructor, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::$_29($_29 const&)
    /* $_29($_29 const&) */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::__29(__29* param_1) {
        field_0 = *(RenderContext**)param_1;
        new (field_8, (DispatchCallState*)(param_1 + 8)) DispatchCallState();
    }

    // 0x100c46090, 32 bytes, placed by class name
    // RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::operator()(RenderContext&) const
    /* RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::BindDispatchCallState(DispatchCallState&)::$_29::operator()(RenderContext* param_1) {
        BindDispatchCallStateInternal(field_0, (DispatchCallState*)field_8);
    }

    // 0x100c46280, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::$_30($_30&&): jumps straight to the base-object constructor

    // 0x100c46290, 48 bytes, base-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::$_30($_30&&)
    /* $_30($_30&&) */

    void RenderContext::SetViewports(Viewport_const*, unsigned long)::$_30::__30(__30* param_1) {
        field_0 = *(long*)param_1;
        new (&field_8, param_1 + 8) WrapArray<math::Matrix44T<float> const>();
        field_24 = *(undefined8*)(param_1 + 24);
    }

    // 0x100c462f0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::$_30($_30 const&): jumps straight to the base-object constructor

    // 0x100c46300, 48 bytes, base-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::$_30($_30 const&)
    /* $_30($_30 const&) */

    void RenderContext::SetViewports(Viewport_const*, unsigned long)::$_30::__30(__30* param_1) {
        field_0 = *(long*)param_1;
        new (&field_8, param_1 + 8) WrapArray<math::Matrix44T<float> const>();
        field_24 = *(undefined8*)(param_1 + 24);
    }

    // 0x100c46350, 48 bytes, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_30::operator()(RenderContext&) const
    /* RenderContext::SetViewports(Viewport const*, unsigned
   long)::$_30::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetViewports(Viewport_const*, unsigned long)::$_30::operator()(RenderContext* param_1) {
        long lVar1;
        Viewport* pVVar2;

        lVar1 = field_0;
        pVVar2 = (Viewport*)(&field_8)->end();
        ((lVar1 + 16))->SetViewports(pVVar2, field_24);
    }

    // 0x100c46540, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::$_31($_31&&): jumps straight to the base-object constructor

    // 0x100c46550, 48 bytes, base-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::$_31($_31&&)
    /* $_31($_31&&) */

    void RenderContext::SetViewports(Viewport_const*, unsigned long)::$_31::__31(__31* param_1) {
        field_0 = *(long*)param_1;
        new (&field_8, param_1 + 8) WrapArray<math::Matrix44T<float> const>();
        field_24 = *(undefined8*)(param_1 + 24);
    }

    // 0x100c465b0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::$_31($_31 const&): jumps straight to the base-object constructor

    // 0x100c465c0, 48 bytes, base-object constructor, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::$_31($_31 const&)
    /* $_31($_31 const&) */

    void RenderContext::SetViewports(Viewport_const*, unsigned long)::$_31::__31(__31* param_1) {
        field_0 = *(long*)param_1;
        new (&field_8, param_1 + 8) WrapArray<math::Matrix44T<float> const>();
        field_24 = *(undefined8*)(param_1 + 24);
    }

    // 0x100c46610, 48 bytes, placed by class name
    // RenderContext::SetViewports(Viewport const*, unsigned long)::$_31::operator()(RenderContext&) const
    /* RenderContext::SetViewports(Viewport const*, unsigned
   long)::$_31::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetViewports(Viewport_const*, unsigned long)::$_31::operator()(RenderContext* param_1) {
        long lVar1;
        Viewport* pVVar2;

        lVar1 = field_0;
        pVVar2 = (Viewport*)(&field_8)->end();
        ((lVar1 + 16))->SetViewports(pVVar2, field_24);
    }

    // 0x100c46850, 48 bytes, placed by class name
    // RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32::operator()(RenderContext&) const
    /* RenderContext::SetScissorRectangle(bool, int, int, int,
   int)::$_32::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_32::operator()(RenderContext* param_1) {
        ((field_0 + 16), (bool)field_8, field_12, field_16, field_20, field_24)->SetScissorRectangle();
    }

    // 0x100c46a90, 48 bytes, placed by class name
    // RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33::operator()(RenderContext&) const
    /* RenderContext::SetScissorRectangle(bool, int, int, int,
   int)::$_33::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetScissorRectangle(bool, int, int, int, int)::$_33::operator()(RenderContext* param_1) {
        ((field_0 + 16), (bool)field_8, field_12, field_16, field_20, field_24)->SetScissorRectangle();
    }

    // 0x100c46cb0, 80 bytes, placed by class name
    // RenderContext::SetRenderTargets(RenderTargets const*)::$_34::operator()(RenderContext&) const
    /* RenderContext::SetRenderTargets(RenderTargets
   const*)::$_34::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetRenderTargets(RenderTargets_const*)::$_34::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;

        pRVar1 = field_8;
        if ((field_0, pRVar1)->CheckTexturesAlive() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            936, (char*)0);
        }
        (pRVar1->m_immediateContext, field_0)->SetRenderTargets();
    }

    // 0x100c46ef0, 80 bytes, placed by class name
    // RenderContext::SetRenderTargets(RenderTargets const*)::$_35::operator()(RenderContext&) const
    /* RenderContext::SetRenderTargets(RenderTargets
   const*)::$_35::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetRenderTargets(RenderTargets_const*)::$_35::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;

        pRVar1 = field_8;
        if ((field_0, pRVar1)->CheckTexturesAlive() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            936, (char*)0);
        }
        (pRVar1->m_immediateContext, field_0)->SetRenderTargets();
    }

    // 0x100c47630, 96 bytes, placed by class name
    // RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_38::operator()(RenderContext&) const
    /* RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned
   int)::$_38::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearDepthStencilTarget(float, unsigned int,
                                                unsigned int)::$_38::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (IsCurrentRenderTargetAlive(this_00, field_8) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            972, (char*)0);
        }
        (this_00->m_immediateContext, field_16, field_20, field_24)->ClearDepthStencilTarget();
    }

    // 0x100c478a0, 96 bytes, placed by class name
    // RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int)::$_39::operator()(RenderContext&) const
    /* RenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned
   int)::$_39::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearDepthStencilTarget(float, unsigned int,
                                                unsigned int)::$_39::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (IsCurrentRenderTargetAlive(this_00, field_8) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            972, (char*)0);
        }
        (this_00->m_immediateContext, field_16, field_20, field_24)->ClearDepthStencilTarget();
    }

    // 0x100c47b10, 96 bytes, placed by class name
    // RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int, unsigned int)::$_40::operator()(RenderContext&) const
    /* RenderContext::ClearDepthStencilTarget(RenderTargets const*, float,
   unsigned int, unsigned int)::$_40::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearDepthStencilTarget(RenderTargets_const*, float, unsigned int,
                                                unsigned int)::$_40::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;

        pRVar1 = field_8;
        if ((field_0, pRVar1)->CheckTexturesAlive() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            988, (char*)0);
        }
        (pRVar1->m_immediateContext, field_0, field_16, field_20, field_24)->ClearDepthStencilTarget();
    }

    // 0x100c47d80, 96 bytes, placed by class name
    // RenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int, unsigned int)::$_41::operator()(RenderContext&) const
    /* RenderContext::ClearDepthStencilTarget(RenderTargets const*, float,
   unsigned int, unsigned int)::$_41::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearDepthStencilTarget(RenderTargets_const*, float, unsigned int,
                                                unsigned int)::$_41::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;

        pRVar1 = field_8;
        if ((field_0, pRVar1)->CheckTexturesAlive() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            988, (char*)0);
        }
        (pRVar1->m_immediateContext, field_0, field_16, field_20, field_24)->ClearDepthStencilTarget();
    }

    // 0x100c47fd0, 96 bytes, placed by class name
    // RenderContext::SetShaders(ShaderProgram const*)::$_42::operator()(RenderContext&) const
    /* RenderContext::SetShaders(ShaderProgram
   const*)::$_42::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetShaders(ShaderProgram_const*)::$_42::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar2;
        RenderResource* pRVar3;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            pRVar3 = (RenderResource*)&field_8->field_12;
            if (field_8 == (ShaderProgram*)0) {
                pRVar3 = (RenderResource*)0;
            }
            if (IsObjectAlive(this_00, pRVar3) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        (this_00->m_immediateContext, field_8)->SetShaders();
    }

    // 0x100c48220, 96 bytes, placed by class name
    // RenderContext::SetShaders(ShaderProgram const*)::$_43::operator()(RenderContext&) const
    /* RenderContext::SetShaders(ShaderProgram
   const*)::$_43::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetShaders(ShaderProgram_const*)::$_43::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar2;
        RenderResource* pRVar3;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            pRVar3 = (RenderResource*)&field_8->field_12;
            if (field_8 == (ShaderProgram*)0) {
                pRVar3 = (RenderResource*)0;
            }
            if (IsObjectAlive(this_00, pRVar3) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        (this_00->m_immediateContext, field_8)->SetShaders();
    }

    // 0x100c48490, 176 bytes, placed by class name
    // RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_44::operator()(RenderContext&) const
    /* RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const*
   const*, unsigned int const*, unsigned int
   const*)::$_44::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVertexBuffers(unsigned int, VertexBuffer_const* const*, unsigned int const*,
                                         unsigned int const*)::$_44::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;
        long lVar2;
        uint* in_RCX;
        ulong uVar3;
        bool bVar4;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if ((*(char*)(lVar2 + 11) != '\0') && (field_8 != 0)) {
            cVar1 = IsObjectAlive(this_00, *(RenderResource**)field_16);
            bVar4 = true;
            if (cVar1 != '\0') {
                uVar3 = 1;
                do {
                    bVar4 = uVar3 < field_8;
                    if (!bVar4)
                        goto LAB_100c48514;
                    cVar1 = IsObjectAlive(this_00, *(RenderResource**)(field_16 + uVar3 * 2));
                    uVar3 = uVar3 + 1;
                } while (cVar1 != '\0');
            }
            if (bVar4) {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
    LAB_100c48514:
        ImmediateRenderContext::SetVertexBuffers((int)this_00 + 16, (VertexBuffer**)(ulong)field_8, field_16, in_RCX);
    }

    // 0x100c48750, 176 bytes, placed by class name
    // RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*)::$_45::operator()(RenderContext&) const
    /* RenderContext::SetVertexBuffers(unsigned int, VertexBuffer const*
   const*, unsigned int const*, unsigned int
   const*)::$_45::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVertexBuffers(unsigned int, VertexBuffer_const* const*, unsigned int const*,
                                         unsigned int const*)::$_45::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;
        long lVar2;
        uint* in_RCX;
        ulong uVar3;
        bool bVar4;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if ((*(char*)(lVar2 + 11) != '\0') && (field_8 != 0)) {
            cVar1 = IsObjectAlive(this_00, *(RenderResource**)field_16);
            bVar4 = true;
            if (cVar1 != '\0') {
                uVar3 = 1;
                do {
                    bVar4 = uVar3 < field_8;
                    if (!bVar4)
                        goto LAB_100c487d4;
                    cVar1 = IsObjectAlive(this_00, *(RenderResource**)(field_16 + uVar3 * 2));
                    uVar3 = uVar3 + 1;
                } while (cVar1 != '\0');
            }
            if (bVar4) {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
    LAB_100c487d4:
        ImmediateRenderContext::SetVertexBuffers((int)this_00 + 16, (VertexBuffer**)(ulong)field_8, field_16, in_RCX);
    }

    // 0x100c48a10, 96 bytes, placed by class name
    // RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int)::$_46::operator()(RenderContext&) const
    /* RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int,
   unsigned int)::$_46::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVertexBuffer(VertexBuffer_const*, unsigned int,
                                        unsigned int)::$_46::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c48a48:
            (this_00->m_immediateContext, (VertexBuffer*)field_8, field_16, field_20)->SetVertexBuffer();
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c48a48;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c48c80, 96 bytes, placed by class name
    // RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int)::$_47::operator()(RenderContext&) const
    /* RenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int,
   unsigned int)::$_47::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVertexBuffer(VertexBuffer_const*, unsigned int,
                                        unsigned int)::$_47::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c48cb8:
            (this_00->m_immediateContext, (VertexBuffer*)field_8, field_16, field_20)->SetVertexBuffer();
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c48cb8;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c48ef0, 96 bytes, placed by class name
    // RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned int)::$_48::operator()(RenderContext&) const
    /* RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned
   int)::$_48::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetIndexBuffer(IndexBuffer_const*, unsigned int)::$_48::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c48f28:
            ImmediateRenderContext::SetIndexBuffer((IndexBuffer*)this_00->m_immediateContext, (uint)field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c48f28;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c49160, 96 bytes, placed by class name
    // RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned int)::$_49::operator()(RenderContext&) const
    /* RenderContext::SetIndexBuffer(IndexBuffer const*, unsigned
   int)::$_49::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetIndexBuffer(IndexBuffer_const*, unsigned int)::$_49::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c49198:
            ImmediateRenderContext::SetIndexBuffer((IndexBuffer*)this_00->m_immediateContext, (uint)field_8);
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c49198;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c493b0, 80 bytes, placed by class name
    // RenderContext::SetVertexDeclaration(VertexDeclaration const*)::$_50::operator()(RenderContext&) const
    /* RenderContext::SetVertexDeclaration(VertexDeclaration
   const*)::$_50::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVertexDeclaration(VertexDeclaration_const*)::$_50::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if ((*(char*)(lVar1 + 11) == '\0') || (cVar2 = IsObjectAlive(this_00, field_8), cVar2 != '\0')) {
            (this_00->m_immediateContext, (VertexDeclaration*)field_8)->SetVertexDeclaration();
            return;
        }
        SkipCurrentDrawCall(this_00);
    }

    // 0x100c495f0, 80 bytes, placed by class name
    // RenderContext::SetVertexDeclaration(VertexDeclaration const*)::$_51::operator()(RenderContext&) const
    /* RenderContext::SetVertexDeclaration(VertexDeclaration
   const*)::$_51::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVertexDeclaration(VertexDeclaration_const*)::$_51::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if ((*(char*)(lVar1 + 11) == '\0') || (cVar2 = IsObjectAlive(this_00, field_8), cVar2 != '\0')) {
            (this_00->m_immediateContext, (VertexDeclaration*)field_8)->SetVertexDeclaration();
            return;
        }
        SkipCurrentDrawCall(this_00);
    }

    // 0x100c49850, 16 bytes, placed by class name
    // RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool)::$_52::operator()(RenderContext&) const
    /* RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*,
   unsigned int, SamplerState const*,
   bool)::$_52::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVSTextureSamplerPair(unsigned int, Texture_const*, unsigned int, SamplerState_const*,
                                                bool)::$_52::operator()(RenderContext* param_1) {
        SamplerState* in_RCX;
        uint in_EDX;
        bool in_R8B;

        ImmediateRenderContext::SetVSTextureSamplerPair((uint)this, (Texture*)param_1, in_EDX, in_RCX, in_R8B);
    }

    // 0x100c49a70, 16 bytes, placed by class name
    // RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool)::$_53::operator()(RenderContext&) const
    /* RenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*,
   unsigned int, SamplerState const*,
   bool)::$_53::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVSTextureSamplerPair(unsigned int, Texture_const*, unsigned int, SamplerState_const*,
                                                bool)::$_53::operator()(RenderContext* param_1) {
        SamplerState* in_RCX;
        uint in_EDX;
        bool in_R8B;

        ImmediateRenderContext::SetVSTextureSamplerPair((uint)this, (Texture*)param_1, in_EDX, in_RCX, in_R8B);
    }

    // 0x100c49c90, 48 bytes, placed by class name
    // RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool)::$_54::operator()(RenderContext&) const
    /* RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*,
   int, SamplerState const*,
   bool)::$_54::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetPSTextureSamplerPair(unsigned int, Texture_const*, int, SamplerState_const*,
                                                bool)::$_54::operator()(RenderContext* param_1) {
        ((field_0 + 16), field_8, field_16, field_24, field_32, (bool)field_40)->SetPSTextureSamplerPair();
    }

    // 0x100c49ed0, 48 bytes, placed by class name
    // RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool)::$_55::operator()(RenderContext&) const
    /* RenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*,
   int, SamplerState const*,
   bool)::$_55::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetPSTextureSamplerPair(unsigned int, Texture_const*, int, SamplerState_const*,
                                                bool)::$_55::operator()(RenderContext* param_1) {
        ((field_0 + 16), field_8, field_16, field_24, field_32, (bool)field_40)->SetPSTextureSamplerPair();
    }

    // 0x100c4a110, 96 bytes, placed by class name
    // RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_56::operator()(RenderContext&) const
    /* RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer
   const*)::$_56::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVSShaderConstBuffer(unsigned int,
                                               ShaderConstBuffer_const*)::$_56::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a148:
            (this_00->m_immediateContext, field_16, (ShaderConstBuffer*)field_8)->SetVSShaderConstBuffer();
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c4a148;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4a380, 96 bytes, placed by class name
    // RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_57::operator()(RenderContext&) const
    /* RenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer
   const*)::$_57::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetVSShaderConstBuffer(unsigned int,
                                               ShaderConstBuffer_const*)::$_57::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a3b8:
            (this_00->m_immediateContext, field_16, (ShaderConstBuffer*)field_8)->SetVSShaderConstBuffer();
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c4a3b8;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4a5f0, 96 bytes, placed by class name
    // RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_58::operator()(RenderContext&) const
    /* RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer
   const*)::$_58::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetPSShaderConstBuffer(unsigned int,
                                               ShaderConstBuffer_const*)::$_58::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a628:
            (this_00->m_immediateContext, field_16, (ShaderConstBuffer*)field_8)->SetPSShaderConstBuffer();
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c4a628;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4a860, 96 bytes, placed by class name
    // RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)::$_59::operator()(RenderContext&) const
    /* RenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer
   const*)::$_59::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetPSShaderConstBuffer(unsigned int,
                                               ShaderConstBuffer_const*)::$_59::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar1;
        char cVar2;

        this_00 = field_0;
        lVar1 = GetDesc(this_00);
        if (*(char*)(lVar1 + 11) == '\0') {
        LAB_100c4a898:
            (this_00->m_immediateContext, field_16, (ShaderConstBuffer*)field_8)->SetPSShaderConstBuffer();
        } else {
            cVar2 = IsObjectAlive(this_00, field_8);
            if (cVar2 != '\0') {
                cVar2 = field_8->IsCreated();
                if (cVar2 != '\0')
                    goto LAB_100c4a898;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4aaf0, 112 bytes, placed by class name
    // RenderContext::SetDepthStencilState(DepthStencilState const*)::$_60::operator()(RenderContext&) const
    /* RenderContext::SetDepthStencilState(DepthStencilState
   const*)::$_60::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetDepthStencilState(DepthStencilState_const*)::$_60::operator()(RenderContext* param_1) {
        long lVar1;
        DepthStencilState local_60;

        lVar1 = field_56;
        new (&local_60) DepthStencilState();
        local_60.Create(this);
        ((lVar1 + 16))->SetDepthStencilState(&local_60);
        local_60.~DepthStencilState();
    }

    // 0x100c4ad90, 112 bytes, placed by class name
    // RenderContext::SetDepthStencilState(DepthStencilState const*)::$_61::operator()(RenderContext&) const
    /* RenderContext::SetDepthStencilState(DepthStencilState
   const*)::$_61::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetDepthStencilState(DepthStencilState_const*)::$_61::operator()(RenderContext* param_1) {
        long lVar1;
        DepthStencilState local_60;

        lVar1 = field_56;
        new (&local_60) DepthStencilState();
        local_60.Create(this);
        ((lVar1 + 16))->SetDepthStencilState(&local_60);
        local_60.~DepthStencilState();
    }

    // 0x100c4b010, 112 bytes, placed by class name
    // RenderContext::SetRasteriserState(RasteriserState const*)::$_62::operator()(RenderContext&) const
    /* RenderContext::SetRasteriserState(RasteriserState
   const*)::$_62::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetRasteriserState(RasteriserState_const*)::$_62::operator()(RenderContext* param_1) {
        long lVar1;
        RasteriserState local_48;

        lVar1 = field_32;
        new (&local_48) RasteriserState();
        local_48.Create(this);
        ((lVar1 + 16))->SetRasteriserState(&local_48);
        local_48.~RasteriserState();
    }

    // 0x100c4b290, 112 bytes, placed by class name
    // RenderContext::SetRasteriserState(RasteriserState const*)::$_63::operator()(RenderContext&) const
    /* RenderContext::SetRasteriserState(RasteriserState
   const*)::$_63::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetRasteriserState(RasteriserState_const*)::$_63::operator()(RenderContext* param_1) {
        long lVar1;
        RasteriserState local_48;

        lVar1 = field_32;
        new (&local_48) RasteriserState();
        local_48.Create(this);
        ((lVar1 + 16))->SetRasteriserState(&local_48);
        local_48.~RasteriserState();
    }

    // 0x100c4b530, 112 bytes, placed by class name
    // RenderContext::SetBlendState(BlendState const*)::$_64::operator()(RenderContext&) const
    /* RenderContext::SetBlendState(BlendState
   const*)::$_64::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetBlendState(BlendState_const*)::$_64::operator()(RenderContext* param_1) {
        long lVar1;
        BlendState local_70;

        lVar1 = field_72;
        new (&local_70) BlendState();
        local_70.Create(this);
        ((lVar1 + 16))->SetBlendState(&local_70);
        local_70.~BlendState();
    }

    // 0x100c4b7d0, 112 bytes, placed by class name
    // RenderContext::SetBlendState(BlendState const*)::$_65::operator()(RenderContext&) const
    /* RenderContext::SetBlendState(BlendState
   const*)::$_65::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetBlendState(BlendState_const*)::$_65::operator()(RenderContext* param_1) {
        long lVar1;
        BlendState local_70;

        lVar1 = field_72;
        new (&local_70) BlendState();
        local_70.Create(this);
        ((lVar1 + 16))->SetBlendState(&local_70);
        local_70.~BlendState();
    }

    // 0x100c4ba50, 64 bytes, placed by class name
    // RenderContext::DrawPrimitives(PrimitiveType, int, int)::$_66::operator()(RenderContext&) const
    /* RenderContext::DrawPrimitives(PrimitiveType, int,
   int)::$_66::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawPrimitives(PrimitiveType, int, int)::$_66::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            (this_00->m_immediateContext, field_8, field_12, field_16)->DrawPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4bca0, 64 bytes, placed by class name
    // RenderContext::DrawPrimitives(PrimitiveType, int, int)::$_67::operator()(RenderContext&) const
    /* RenderContext::DrawPrimitives(PrimitiveType, int,
   int)::$_67::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawPrimitives(PrimitiveType, int, int)::$_67::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            (this_00->m_immediateContext, field_8, field_12, field_16)->DrawPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4bea0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_68::$_68($_68&&): jumps straight to the base-object constructor

    // 0x100c4beb0, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_68::$_68($_68&&)
    /* $_68($_68&&) */

    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_68::__68(__68* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(RenderContext**)param_1;
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, param_1 + 32) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c4bf20, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_68::$_68($_68 const&): jumps straight to the base-object constructor

    // 0x100c4bf30, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_68::$_68($_68 const&)
    /* $_68($_68 const&) */

    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_68::__68(__68* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(RenderContext**)param_1;
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, param_1 + 32) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c4bf90, 128 bytes, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_68::operator()(RenderContext&) const
    /* RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int
   const*, int const*)::$_68::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_68::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        RenderContext* this_00;
        undefined8 uVar4;
        undefined8 uVar5;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            uVar1 = field_8;
            uVar2 = field_12;
            uVar4 = (&field_16)->end();
            uVar5 = (&field_32)->end();
            (this_00->m_immediateContext, uVar1, uVar2, uVar4, uVar5)->DrawMultiPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c1d0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_69::$_69($_69&&): jumps straight to the base-object constructor

    // 0x100c4c1e0, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_69::$_69($_69&&)
    /* $_69($_69&&) */

    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_69::__69(__69* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(RenderContext**)param_1;
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, param_1 + 32) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c4c250, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_69::$_69($_69 const&): jumps straight to the base-object constructor

    // 0x100c4c260, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_69::$_69($_69 const&)
    /* $_69($_69 const&) */

    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_69::__69(__69* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(RenderContext**)param_1;
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, param_1 + 32) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c4c2c0, 128 bytes, placed by class name
    // RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)::$_69::operator()(RenderContext&) const
    /* RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int
   const*, int const*)::$_69::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*,
                                            int const*)::$_69::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        RenderContext* this_00;
        undefined8 uVar4;
        undefined8 uVar5;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            uVar1 = field_8;
            uVar2 = field_12;
            uVar4 = (&field_16)->end();
            uVar5 = (&field_32)->end();
            (this_00->m_immediateContext, uVar1, uVar2, uVar4, uVar5)->DrawMultiPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c550, 64 bytes, placed by class name
    // RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType)::$_70::operator()(RenderContext&) const
    /* RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int,
   unsigned int,
   IndexType)::$_70::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int,
                                              IndexType)::$_70::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            (this_00->m_immediateContext, field_8, field_12, field_16, field_20)->DrawIndexedPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c7a0, 64 bytes, placed by class name
    // RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType)::$_71::operator()(RenderContext&) const
    /* RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int,
   unsigned int,
   IndexType)::$_71::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int,
                                              IndexType)::$_71::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            (this_00->m_immediateContext, field_8, field_12, field_16, field_20)->DrawIndexedPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4c9a0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_72::$_72($_72&&): jumps straight to the base-object constructor

    // 0x100c4c9b0, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_72::$_72($_72&&)
    /* $_72($_72&&) */

    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void_const* const*,
                                                   IndexType)::$_72::__72(__72* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar1 = param_1->field_8;
        uVar2 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_12 = uVar2;
        new (&field_16, &param_1->field_16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, &param_1->field_32) WrapArray<math::Matrix44T<float> const>();
        field_48 = param_1->field_48;
    }

    // 0x100c4ca20, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_72::$_72($_72 const&): jumps straight to the base-object constructor

    // 0x100c4ca30, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_72::$_72($_72 const&)
    /* $_72($_72 const&) */

    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void_const* const*,
                                                   IndexType)::$_72::__72(__72* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar1 = param_1->field_8;
        uVar2 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_12 = uVar2;
        new (&field_16, &param_1->field_16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, &param_1->field_32) WrapArray<math::Matrix44T<float> const>();
        field_48 = param_1->field_48;
    }

    // 0x100c4ca90, 128 bytes, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_72::operator()(RenderContext&) const
    /* RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int,
   int const*, void const* const*,
   IndexType)::$_72::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void_const* const*,
                                                   IndexType)::$_72::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        RenderContext* this_00;
        undefined8 uVar4;
        undefined8 uVar5;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            uVar1 = field_8;
            uVar2 = field_12;
            uVar4 = (&field_16)->end();
            uVar5 = (&field_32)->end();
            (this_00->m_immediateContext, uVar1, uVar2, uVar4, uVar5, field_48)->DrawMultiIndexedPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4ccd0, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_73::$_73($_73&&): jumps straight to the base-object constructor

    // 0x100c4cce0, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_73::$_73($_73&&)
    /* $_73($_73&&) */

    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void_const* const*,
                                                   IndexType)::$_73::__73(__73* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar1 = param_1->field_8;
        uVar2 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_12 = uVar2;
        new (&field_16, &param_1->field_16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, &param_1->field_32) WrapArray<math::Matrix44T<float> const>();
        field_48 = param_1->field_48;
    }

    // 0x100c4cd50, 16 bytes, complete-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_73::$_73($_73 const&): jumps straight to the base-object constructor

    // 0x100c4cd60, 64 bytes, base-object constructor, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_73::$_73($_73 const&)
    /* $_73($_73 const&) */

    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void_const* const*,
                                                   IndexType)::$_73::__73(__73* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar1 = param_1->field_8;
        uVar2 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_12 = uVar2;
        new (&field_16, &param_1->field_16) WrapArray<math::Matrix44T<float> const>();
        new (&field_32, &param_1->field_32) WrapArray<math::Matrix44T<float> const>();
        field_48 = param_1->field_48;
    }

    // 0x100c4cdc0, 128 bytes, placed by class name
    // RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)::$_73::operator()(RenderContext&) const
    /* RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int,
   int const*, void const* const*,
   IndexType)::$_73::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void_const* const*,
                                                   IndexType)::$_73::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        RenderContext* this_00;
        undefined8 uVar4;
        undefined8 uVar5;

        this_00 = field_0;
        if (PreDrawCall(this_00) != '\0') {
            uVar1 = field_8;
            uVar2 = field_12;
            uVar4 = (&field_16)->end();
            uVar5 = (&field_32)->end();
            (this_00->m_immediateContext, uVar1, uVar2, uVar4, uVar5, field_48)->DrawMultiIndexedPrimitives();
        }
        PostDrawCall(this_00);
    }

    // 0x100c4d050, 64 bytes, placed by class name
    // RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_74::operator()(RenderContext&) const
    /* RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned
   int)::$_74::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DispatchCompute(unsigned int, unsigned int,
                                        unsigned int)::$_74::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (PreDispatchCall(this_00) != '\0') {
            (this_00->m_immediateContext, field_8, field_12, field_16)->DispatchCompute();
        }
        PostDispatchCall(this_00);
    }

    // 0x100c4d2a0, 64 bytes, placed by class name
    // RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)::$_75::operator()(RenderContext&) const
    /* RenderContext::DispatchCompute(unsigned int, unsigned int, unsigned
   int)::$_75::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::DispatchCompute(unsigned int, unsigned int,
                                        unsigned int)::$_75::operator()(RenderContext* param_1) {
        RenderContext* this_00;

        this_00 = field_0;
        if (PreDispatchCall(this_00) != '\0') {
            (this_00->m_immediateContext, field_8, field_12, field_16)->DispatchCompute();
        }
        PostDispatchCall(this_00);
    }

    // 0x100c4d4d0, 32 bytes, placed by class name
    // RenderContext::MemoryBarrier(unsigned int)::$_76::operator()(RenderContext&) const
    /* RenderContext::MemoryBarrier(unsigned
   int)::$_76::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::MemoryBarrier(unsigned int)::$_76::operator()(RenderContext* param_1) {
        ((field_0 + 16), field_8)->MemoryBarrier();
    }

    // 0x100c4d6e0, 32 bytes, placed by class name
    // RenderContext::MemoryBarrier(unsigned int)::$_77::operator()(RenderContext&) const
    /* RenderContext::MemoryBarrier(unsigned
   int)::$_77::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::MemoryBarrier(unsigned int)::$_77::operator()(RenderContext* param_1) {
        ((field_0 + 16), field_8)->MemoryBarrier();
    }

    // 0x100c4d790, 16 bytes, placed by class name
    // RenderContext::FinishRendering()::$_78::operator()(RenderContext&) const
    /* RenderContext::FinishRendering()::$_78::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::FinishRendering()::$_78::operator()(RenderContext* param_1) {
        *(undefined1*)(field_0 + 3193) = 0;
    }

    // 0x100c4d830, 32 bytes, placed by class name
    // RenderContext::FinishRendering()::$_79::operator()(RenderContext&) const
    /* RenderContext::FinishRendering()::$_79::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::FinishRendering()::$_79::operator()(RenderContext* param_1) {
        *(undefined1*)(field_0 + 3193) = 0;
        field_8->Signal();
    }

    // 0x100c4d8e0, 176 bytes, placed by class name
    // RenderContext::FinishRendering()::$_80::operator()(RenderContext&) const
    /* RenderContext::FinishRendering()::$_80::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::FinishRendering()::$_80::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        Skybox* this_01;
        long lVar2;
        undefined8 uVar3;

        this_00 = field_0;
        this_01 = (Skybox*)GetImmediateContext(param_1);
        if (this_01->ShowSkybox() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!renderContext.GetImmediateContext().IsInsideBeginEnd()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1253, (char*)0);
        }
        lVar2 = GetDesc(this_00);
        if ((*(char*)(lVar2 + 10) == '\0') && (this_00->field_3193 != '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDesc().m_SecondaryContext || !m_enablePresent",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.cpp",
                      1254, (char*)0);
        }
        ImmediateRenderContext::FinishRendering();
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            1258, "Finished rendering");
    }

    // 0x100c4dc00, 192 bytes, placed by class name
    // RenderContext::CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CubeFace)::$_81::operator()(RenderContext&) const
    /* RenderContext::CopyColourTargetData(Texture const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   CubeFace)::$_81::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::CopyColourTargetData(Texture_const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                             CubeFace)::$_81::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;
        long lVar2;
        RenderResource* pRVar3;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) == '\0') {
        LAB_100c4dc43:
            cVar1 = IsCurrentRenderTargetAlive(this_00, field_16);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                1304, (char*)0);
            }
            (this_00->m_immediateContext, field_8, field_52, field_28, field_32, field_36, field_40, field_44, field_48,
             field_52, field_56)
                ->CopyColourTargetData();
        } else {
            pRVar3 = (RenderResource*)&field_8->field_8;
            if (field_8 == (Texture*)0) {
                pRVar3 = (RenderResource*)0;
            }
            cVar1 = IsObjectAlive(this_00, pRVar3);
            if (cVar1 != '\0') {
                cVar1 = field_8->IsCreated();
                if (cVar1 != '\0')
                    goto LAB_100c4dc43;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4def0, 192 bytes, placed by class name
    // RenderContext::CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CubeFace)::$_82::operator()(RenderContext&) const
    /* RenderContext::CopyColourTargetData(Texture const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   CubeFace)::$_82::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::CopyColourTargetData(Texture_const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                             CubeFace)::$_82::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;
        long lVar2;
        RenderResource* pRVar3;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) == '\0') {
        LAB_100c4df33:
            cVar1 = IsCurrentRenderTargetAlive(this_00, field_16);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/RenderContext.cpp",
                                1304, (char*)0);
            }
            (this_00->m_immediateContext, field_8, field_52, field_28, field_32, field_36, field_40, field_44, field_48,
             field_52, field_56)
                ->CopyColourTargetData();
        } else {
            pRVar3 = (RenderResource*)&field_8->field_8;
            if (field_8 == (Texture*)0) {
                pRVar3 = (RenderResource*)0;
            }
            cVar1 = IsObjectAlive(this_00, pRVar3);
            if (cVar1 != '\0') {
                cVar1 = field_8->IsCreated();
                if (cVar1 != '\0')
                    goto LAB_100c4df33;
            }
            SkipCurrentDrawCall(this_00);
        }
    }

    // 0x100c4e7e0, 32 bytes, placed by class name
    // RenderContext::FlushTextureCache()::$_85::operator()(RenderContext&) const
    /* RenderContext::FlushTextureCache()::$_85::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::FlushTextureCache()::$_85::operator()(RenderContext* param_1) {
        ((field_0 + 16))->FlushTextureCache();
    }

    // 0x100c4e9f0, 32 bytes, placed by class name
    // RenderContext::FlushTextureCache()::$_86::operator()(RenderContext&) const
    /* RenderContext::FlushTextureCache()::$_86::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::FlushTextureCache()::$_86::operator()(RenderContext* param_1) {
        ((field_0 + 16))->FlushTextureCache();
    }

    // 0x100c4f000, 32 bytes, placed by class name
    // RenderContext::OnDeviceLost()::$_89::operator()(RenderContext&) const
    /* RenderContext::OnDeviceLost()::$_89::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::OnDeviceLost()::$_89::operator()(RenderContext* param_1) {
        ((field_0 + 16))->OnDeviceLost();
    }

    // 0x100c4f210, 32 bytes, placed by class name
    // RenderContext::SetVSyncMode(VSyncMode)::$_90::operator()(RenderContext&) const
    /* RenderContext::SetVSyncMode(VSyncMode)::$_90::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::SetVSyncMode(VSyncMode)::$_90::operator()(RenderContext* param_1) {
        ((field_0 + 16), field_8)->SetVSyncMode();
    }

    // 0x100c4f420, 32 bytes, placed by class name
    // RenderContext::SetVSyncMode(VSyncMode)::$_91::operator()(RenderContext&) const
    /* RenderContext::SetVSyncMode(VSyncMode)::$_91::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::SetVSyncMode(VSyncMode)::$_91::operator()(RenderContext* param_1) {
        ((field_0 + 16), field_8)->SetVSyncMode();
    }

    // 0x100c50130, 176 bytes, placed by class name
    // RenderContext::ResetDeferredFrames()::$_94::operator()(RenderContext&) const
    /* RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::ResetDeferredFrames()::$_94::operator()(RenderContext* param_1) {
        undefined8 uVar1;
        BaseApp* this_00;
        undefined8 local_d8;
        undefined8 local_d0;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = field_0;
        this_00 = (BaseApp*)BaseApp::GetAppInstance();
        local_d0 = field_8;
        local_d8 = uVar1;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
            (_lambda_jag__BaseApp___1_*)&local_d8);
        this_00->RunSynchronousMainThreadEvent(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c50270, 80 bytes, placed by class name
    // RenderContext::ResetDeferredFrames()::$_94::operator()(RenderContext&) const::{lambda(BaseApp*)#1}::operator()(BaseApp*) const
    /* RenderContext::ResetDeferredFrames()::$_94::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const::{lambda(BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    _func_TEMPNAMEPLACEHOLDERVALUE_RenderContext_ptr* const ::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * param_1) {
        long lVar1;
        _func_TEMPNAMEPLACEHOLDERVALUE_RenderContext_ptr* p_Var2;
        unique_ptr local_28[8];

        lVar1 = *(long*)this;
        std::make_unique<SwappingDoubleBuffer<DeferredFrameData>>();
        std::unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>::operator=(
            (unique_ptr<MultiBuffer<DeferredFrameData>, std::default_delete<MultiBuffer<DeferredFrameData>>>*)(lVar1 +
                                                                                                               3560),
            local_28);
        local_28->~unique_ptr();
        p_Var2 = (_func_TEMPNAMEPLACEHOLDERVALUE_RenderContext_ptr*)std::atomic<bool>::operator=(
            *(atomic<bool>**)(this + 8), true);
        return p_Var2;
    }

    // 0x100c502e0, 16 bytes, placed by class name
    // RenderContext::ResetDeferredFrames()::$_95::operator()() const
    /* RenderContext::ResetDeferredFrames()::$_95::TEMPNAMEPLACEHOLDERVALUE() const */

    void RenderContext::ResetDeferredFrames()::$_95::operator()() {
        std::__atomic_base<bool, false>::load(*(undefined8*)this);
    }

    // 0x100c51ba0, 48 bytes, placed by class name
    // RenderContext::PostInit(RenderContextDesc const&)::$_97::operator()(RenderContext&) const
    /* RenderContext::PostInit(RenderContextDesc
   const&)::$_97::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::PostInit(RenderContextDesc_const&)::$_97::operator()(RenderContext* param_1) {
        ((field_0 + 16), *field_8, *field_16)->UpdateBackBuffer();
    }

    // 0x100c51de0, 96 bytes, placed by class name
    // RenderContext::BindImageTexture(unsigned int, Texture const*, int, LockType)::$_98::operator()(RenderContext&) const
    /* RenderContext::BindImageTexture(unsigned int, Texture const*, int,
   LockType)::$_98::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::BindImageTexture(unsigned int, Texture_const*, int,
                                         LockType)::$_98::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar2;
        RenderResource* pRVar3;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            pRVar3 = (RenderResource*)(field_8 + 8);
            if (field_8 == 0) {
                pRVar3 = (RenderResource*)0;
            }
            if (IsObjectAlive(this_00, pRVar3) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        (this_00->m_immediateContext, field_16, field_8, field_20, field_24)->BindImageTexture();
    }

    // 0x100c52050, 96 bytes, placed by class name
    // RenderContext::BindImageTexture(unsigned int, Texture const*, int, LockType)::$_99::operator()(RenderContext&) const
    /* RenderContext::BindImageTexture(unsigned int, Texture const*, int,
   LockType)::$_99::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::BindImageTexture(unsigned int, Texture_const*, int,
                                         LockType)::$_99::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar2;
        RenderResource* pRVar3;

        this_00 = field_0;
        lVar2 = GetDesc(this_00);
        if (*(char*)(lVar2 + 11) != '\0') {
            pRVar3 = (RenderResource*)(field_8 + 8);
            if (field_8 == 0) {
                pRVar3 = (RenderResource*)0;
            }
            if (IsObjectAlive(this_00, pRVar3) == '\0') {
                SkipCurrentDrawCall(this_00);
                return;
            }
        }
        (this_00->m_immediateContext, field_16, field_8, field_20, field_24)->BindImageTexture();
    }

    // 0x100c522a0, 32 bytes, placed by class name
    // RenderContext::SetTexturesFromStateCache()::$_100::operator()(RenderContext&) const
    /* RenderContext::SetTexturesFromStateCache()::$_100::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::SetTexturesFromStateCache()::$_100::operator()(RenderContext* param_1) {
        RenderContextStateCache* this_00;

        this_00 = (RenderContextStateCache*)((field_0 + 16))->GetStateCache();
        this_00->SetTextures();
    }

    // 0x100c524b0, 32 bytes, placed by class name
    // RenderContext::SetTexturesFromStateCache()::$_101::operator()(RenderContext&) const
    /* RenderContext::SetTexturesFromStateCache()::$_101::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderContext::SetTexturesFromStateCache()::$_101::operator()(RenderContext* param_1) {
        RenderContextStateCache* this_00;

        this_00 = (RenderContextStateCache*)((field_0 + 16))->GetStateCache();
        this_00->SetTextures();
    }

} // namespace jag::render
