// libs/hal/render/utils/OGL/Query_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/utils/Query.h"

namespace jag::render {
    class DurationQuery {
    public:
        long FetchResult();
        long GetResult() const;

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x103bd9e50, 8 bytes, __common; zero-initialised
    Query::m_simulatedEndDelayMs;

    // 0x100bce7c0, 192 bytes, placed by class name and debug map
    // Query::Begin()
    void Query::Begin() {
        undefined1 uVar1;
        RenderDevice* pRVar2;
        __16 local_d8;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        pRVar2 = (RenderDevice*)((Query*)this)->Instance();
        uVar1 = pRVar2->ShouldDefer();
        pRVar2 = (RenderDevice*)pRVar2->Instance();
        local_d8.field_0 = this;
        local_d8._8_1_ = uVar1;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Query::Begin()::__16, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d8);
        pRVar2->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bce8d0, 192 bytes, placed by class name and debug map
    // Query::End()
    void Query::End() {
        undefined1 uVar1;
        RenderDevice* pRVar2;
        __17 local_d8;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        pRVar2 = (RenderDevice*)((Query*)this)->Instance();
        uVar1 = pRVar2->ShouldDefer();
        pRVar2 = (RenderDevice*)pRVar2->Instance();
        local_d8.field_0 = (RenderContext*)this;
        local_d8._8_1_ = uVar1;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Query::End()::__17, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d8);
        pRVar2->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bce990, 64 bytes, placed by neighbouring functions
    // DurationQuery::FetchResult()
    long DurationQuery::FetchResult() {
        Query* pQVar1;
        ulong uVar2;
        ulong uVar3;
        long lVar4;

        pQVar1 = (Query*)shared_ptr<Query>::operator->((shared_ptr<Query>*)this);
        uVar2 = pQVar1->FetchResult64();
        pQVar1 = (Query*)shared_ptr<Query>::operator->((shared_ptr<Query>*)&field_16);
        uVar3 = pQVar1->FetchResult64();
        lVar4 = uVar3 - uVar2;
        if (uVar3 < uVar2) {
            lVar4 = 0;
        }
        return lVar4;
    }

    // 0x100bce9d0, 208 bytes, placed by class name and debug map
    // Query::FetchResult64()
    undefined8 Query::FetchResult64() {
        RenderDevice* pRVar1;
        __19 local_e0;
        char local_c9;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        pRVar1 = (RenderDevice*)((Query*)this)->Instance();
        local_c9 = pRVar1->ShouldDefer();
        pRVar1 = (RenderDevice*)pRVar1->Instance();
        local_e0.field_0 = &local_c9;
        local_e0.field_8 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Query::FetchResult64()::__19, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_e0);
        pRVar1->RunSynchronouslyOnRenderThread(&local_c8, true);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return *(undefined8*)&field_104;
    }

    // 0x100bceaa0, 64 bytes, placed by neighbouring functions
    // DurationQuery::GetResult() const
    long DurationQuery::GetResult() {
        Query* pQVar1;
        ulong uVar2;
        ulong uVar3;
        long lVar4;

        pQVar1 = (Query*)shared_ptr<Query>::operator->((shared_ptr<Query>*)this);
        uVar2 = pQVar1->GetResult64();
        pQVar1 = (Query*)shared_ptr<Query>::operator->((shared_ptr<Query>*)&field_16);
        uVar3 = pQVar1->GetResult64();
        lVar4 = uVar3 - uVar2;
        if (uVar3 < uVar2) {
            lVar4 = 0;
        }
        return lVar4;
    }

    // 0x100bceae0, 176 bytes, placed by class name and debug map
    // Query::GetResult64() const
    undefined8 Query::GetResult64() {
        RenderDevice* this_00;
        undefined8 uVar2;
        scoped_lock<std::mutex>* this_01;
        scoped_lock<std::mutex> local_18[8];

        this_01 = local_18;
        std::scoped_lock<std::mutex>::scoped_lock(this_01, (mutex*)&field_120);
        if (field_24 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      328, (char*)0);
        }
        if (field_113 == '\0') {
            uVar2 = 0;
        } else {
            if (field_112 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                if (this_00->IsDeferredRendering() == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_resultDirty || RenderDevice::Instance().IsDeferredRendering()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/Query_OGL.cpp",
                              336, (char*)0);
                }
            }
            uVar2 = *(undefined8*)&field_104;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return uVar2;
    }

    // 0x100bd0920, 192 bytes, base-object constructor, placed by class name and neighbouring functions
    // Query::Query(bool)
    void Query::Query(bool param_1) {
        new (this) RenderResource();
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_24 = 0;
        *(undefined8*)&field_28 = 4;
        new (&field_40) eastl::fixed_vector<unsigned int, 4ul, true, eastl::allocator>();
        field_96 = 0;
        *(undefined8*)&field_104 = 0;
        field_112 = '\0';
        field_113 = '\0';
        new (&field_120) std::mutex();
        eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)&field_40);
        field_0 = 2;
    }

    // 0x100bd0a50, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Query::Query(bool): jumps straight to the base-object constructor

    // 0x100bd0a60, 224 bytes, base-object destructor, placed by __FILE__ string
    // Query::~Query()
    void Query::~Query() {
        RenderDevice* this_00;
        scoped_lock<std::mutex>* this_01;
        scoped_lock<std::mutex> local_28[8];

        this_01 = local_28;
        std::scoped_lock<std::mutex>::scoped_lock(this_01, (mutex*)&field_120);
        if ((field_0 != 0) && (field_28 != 4)) {
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                this_00 = (RenderDevice*)this_01->Instance();
                if (this_00->IsRenderThread() == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::INVALID || (m_queryType == "
                              "QueryType::UNSPECIFIED) || !RenderDevice::InstancePtr() || "
                              "RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/Query_OGL.cpp",
                              28, (char*)0);
                }
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        Destroy(this);
        (&field_120)->~mutex();
        (&field_40)->~fixed_vector();
        (&field_8)->~enable_shared_from_this();
        ~RenderResource();
    }

    // 0x100bd0b40, 464 bytes, placed by __FILE__ string
    // Query::Destroy()
    void Query::Destroy() {
        code* pcVar1;
        undefined4 uVar3;
        long lVar4;
        RenderDevice* pRVar5;
        int* piVar6;
        undefined8 uVar7;
        uint* puVar8;
        uint* puVar9;
        undefined1* this_00;
        scoped_lock<std::mutex>* this_01;
        __15 local_d8;
        scoped_lock<std::mutex> local_d0[8];
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_01 = local_d0;
        std::scoped_lock<std::mutex>::scoped_lock(this_01, (mutex*)&field_120);
        if (field_28 != 4) {
            lVar4 = Singleton<RenderDevice>::InstancePtr();
            if (lVar4 != 0) {
                pRVar5 = (RenderDevice*)this_01->Instance();
                if (pRVar5->IsRenderThread() != '\0') {
                    if (field_24 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!m_beginCalled",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "utils/OGL/Query_OGL.cpp",
                                  99, (char*)0);
                    }
                    field_113 = '\0';
                    field_28 = 4;
                    this_00 = &field_40;
                    piVar6 =
                        (int*)eastl::vector<unsigned int,
                                            eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<unsigned int,
                                    eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00,
                            0);
                    pcVar1 = ___glewDeleteQueries;
                    if (*piVar6 != 0) {
                        uVar3 = this_00->size();
                        uVar7 = this_00->HeapBeginPtr();
                        (*pcVar1)(uVar3, uVar7);
                        CheckGlErrorInternal("glDeleteQueries",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/utils/OGL/Query_OGL.cpp",
                                             107);
                        puVar8 = (uint*)this_00->HeapBeginPtr();
                        puVar9 = (uint*)this_00->end();
                        eastl::fill<unsigned int>(puVar8, puVar9, 0);
                    }
                    goto LAB_100bd0cb2;
                }
            }
            lVar4 = Singleton<RenderDevice>::InstancePtr();
            if (lVar4 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("RenderDevice::InstancePtr()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          113, (char*)0);
            }
            KeepAlive(this);
            pRVar5 = (RenderDevice*)((Query*)this)->Instance();
            local_d8.field_0 = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Query::Destroy()::__15, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d8);
            pRVar5->RunOnRenderThread(&local_c8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
    LAB_100bd0cb2:
        std::scoped_lock<std::mutex>::~scoped_lock(local_d0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bd0d10, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // Query::~Query(): jumps straight to the base-object destructor

    // 0x100bd0d20, 480 bytes, placed by __FILE__ string
    // Query::Create(QueryType)
    bool Query::Create(uint param_2) {
        undefined1 uVar1;
        int iVar2;
        MapArea* pMVar3;
        long lVar4;
        RenderDevice* pRVar5;
        undefined8 uVar6;
        Singleton<RenderDevice>* this_00;
        __14 local_f0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pMVar3 = (MapArea*)Instance();
        lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 171) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("render::RenderDevice::Instance().GetDeviceCaps().m_HardwareQueries",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      36, (char*)0);
        }
        if ((param_2 & 4294967294) == 2) {
            pMVar3 = (MapArea*)pMVar3->Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 172) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("((queryType != QueryType::TIME_ELAPSED) && (queryType != QueryType::TIMESTAMP)) || "
                          "render::RenderDevice::Instance().GetDeviceCaps().m_HardwareTimeQueries",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          37, (char*)0);
            }
        }
        KeepAlive(this);
        new (&local_d8) std::scoped_lock<std::mutex>((mutex*)&field_120);
        if (field_24 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      44, (char*)0);
        }
        local_d8.~scoped_lock();
        this_00 = (Singleton<RenderDevice>*)(ulong)param_2;
        iVar2 = GetNativeQueryType();
        if (iVar2 == 0) {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/Query_OGL.cpp",
                                52, "Invalid/unsupported query type (%u)", param_2);
        } else {
            pRVar5 = (RenderDevice*)this_00->Instance();
            uVar1 = pRVar5->ShouldDefer();
            pRVar5 = (RenderDevice*)pRVar5->Instance();
            local_f0.field_0 = (RenderResource*)this;
            local_f0.field_8 = param_2;
            local_f0.field_12 = iVar2;
            local_f0._16_1_ = uVar1;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Query::Create(QueryType)::__14, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f0);
            pRVar5->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar2 != 0;
    }

    // 0x100bd0f00, 192 bytes, placed by __FILE__ string
    // Query::KeepAlive() const
    void Query::KeepAlive() {
        RenderDevice* pRVar3;
        shared_ptr local_38;
        shared_ptr<oldscape::dash3d::Decor> local_28[16];

        pRVar3 = (RenderDevice*)Instance();
        if (pRVar3->IsRenderThread() == '\0') {
            local_38.shared_from_this();
            if (!shared_ptr::operator_cast_to_bool(&local_38)) {
                /* WARNING: Subroutine does not return */
                LogAssert("sharedThis",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          384, (char*)0);
            }
            pRVar3 = (RenderDevice*)local_38.Instance();
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_28, &local_38);
            pRVar3->KeepAliveSharedPtr(local_28, 0);
            local_28->~shared_ptr();
            local_38.~shared_ptr();
        }
    }

    // 0x100bd0fc0, 80 bytes, placed by __FILE__ string
    // Query::GetNativeQueryType(QueryType)
    undefined4 Query::GetNativeQueryType(uint param_1) {
        undefined8 uVar1;
        undefined4 uVar2;

        if (param_1 < 4) {
            uVar2 = *(undefined4*)(&DAT_100d99450 + (long)(int)param_1 * 4);
        } else {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/Query_OGL.cpp",
                                373, "Invalid query type specified");
        }
        return uVar2;
    }

    // 0x100bd1090, 64 bytes, placed by class name and neighbouring functions
    // Query::IsValid() const
    ulong Query::IsValid() {
        int iVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_120);
        iVar1 = field_28;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return CONCAT71((int7)((ulong)this >> 8), iVar1 != 4) & 4294967295;
    }

    // 0x100bd10d0, 80 bytes, placed by class name and neighbouring functions
    // Query::IsActive() const
    ulong Query::IsActive() {
        undefined8 unaff_R14;
        undefined7 uVar2;
        ulong uVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_120);
        uVar2 = (undefined7)((ulong)unaff_R14 >> 8);
        uVar1 = CONCAT71(uVar2, 1);
        if (field_96 == 0) {
            uVar1 = CONCAT71(uVar2, field_113 != '\0');
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar1 & 4294967295;
    }

    // 0x100bd1120, 208 bytes, placed by class name and neighbouring functions
    // Query::FetchResult()
    undefined4 Query::FetchResult() {
        RenderDevice* pRVar1;
        __18 local_e0;
        char local_c9;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        pRVar1 = (RenderDevice*)((Query*)this)->Instance();
        local_c9 = pRVar1->ShouldDefer();
        pRVar1 = (RenderDevice*)pRVar1->Instance();
        local_e0.field_0 = &local_c9;
        local_e0.field_8 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Query::FetchResult()::__18, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_e0);
        pRVar1->RunSynchronouslyOnRenderThread(&local_c8, true);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return field_104;
    }

    // 0x100bd1210, 160 bytes, placed by class name and neighbouring functions
    // Query::PrepareResult()
    void Query::PrepareResult() {
        RenderDevice* this_00;
        __20 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        this_00 = (RenderDevice*)((Query*)this)->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Query::PrepareResult()::__20, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bd12c0, 160 bytes, placed by class name and neighbouring functions
    // Query::PrepareResult64()
    void Query::PrepareResult64() {
        RenderDevice* this_00;
        __21 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        this_00 = (RenderDevice*)((Query*)this)->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Query::PrepareResult64()::__21, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bd1370, 128 bytes, placed by __FILE__ string
    // Query::IsResultReady() const
    ulong Query::IsResultReady() {
        ulong uVar1;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_120);
        if (field_24 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      350, (char*)0);
        }
        if (field_113 == '\0') {
            uVar1 = 0;
        } else {
            uVar1 = CONCAT71((int7)((ulong)this >> 8), field_112 == '\0');
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return uVar1 & 4294967295;
    }

    // 0x100bda570, 368 bytes, placed by __FILE__ string
    // Query::Create(QueryType)::$_14::operator()(RenderContext&) const
    /* Query::Create(QueryType)::$_14::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void Query::Create(QueryType)::$_14::operator()(RenderContext* param_1) {
        RenderResource* this_00;
        RenderResource* pRVar1;
        code* pcVar2;
        undefined4 uVar4;
        undefined8 uVar5;
        int* piVar6;
        scoped_lock<std::mutex> local_38[8];

        pRVar1 = field_0;
        if (field_16 != '\0') {
            if (param_1->IsObjectAlive(pRVar1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          61, (char*)0);
            }
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)(pRVar1 + 24));
        pcVar2 = ___glewGenQueries;
        if (pRVar1[4].field_4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      66, (char*)0);
        }
        this_00 = pRVar1 + 8;
        uVar4 = this_00->size();
        uVar5 = this_00->HeapBeginPtr();
        (*pcVar2)(uVar4, uVar5);
        CheckGlErrorInternal(
            "glGenQueries",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/Query_OGL.cpp",
            69);
        piVar6 = (int*)eastl::
            vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                0);
        if (*piVar6 == 0) {
            uVar5 = logger::default_logger();
            uVar4 = 0;
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/Query_OGL.cpp",
                                81, "Could not create query objects");
            *(undefined4*)((long)&pRVar1[5].field_0 + 3) = 4;
        } else {
            piVar6 = (int*)this_00->back();
            if (*piVar6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_queries.back() != INVALID_QUERY_ID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          74, (char*)0);
            }
            *(undefined4*)((long)&pRVar1[5].field_0 + 3) = field_8;
            uVar4 = field_12;
        }
        *(undefined4*)((long)&pRVar1[6].field_0 + 2) = uVar4;
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100bda7b0, 80 bytes, placed by __FILE__ string
    // Query::Destroy()::$_15::operator()(RenderContext&) const
    /* Query::Destroy()::$_15::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const
    */

    void Query::Destroy()::$_15::operator()(RenderContext* param_1) {
        Query* this_00;

        this_00 = field_0;
        if (param_1->IsObjectAlive(this_00) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("renderContext.IsObjectAlive(this)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      119, (char*)0);
        }
        this_00->Destroy();
    }

    // 0x100bda890, 272 bytes, placed by __FILE__ string
    // Query::Begin()::$_16::operator()(RenderContext&) const
    /* Query::Begin()::$_16::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void Query::Begin()::$_16::operator()(RenderContext* param_1) {
        Query* this_00;
        undefined4 uVar2;
        undefined8 uVar3;
        int iVar4;
        char* pcVar5;

        this_00 = field_0;
        if (field_8 != '\0') {
            if (param_1->IsObjectAlive(this_00) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          133, (char*)0);
            }
        }
        std::mutex::lock();
        if (this_00->field_24 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      139, (char*)0);
        }
        this_00->field_24 = 1;
        if (this_00->field_28 == 4) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/Query_OGL.cpp",
                                172,
                                "Calling Begin on an invalid query (either query object creation failed or we\'re "
                                "calling Begin prior to Create)");
        } else {
            uVar2 = AdvanceWriteQuery(this_00);
            if (*(int*)&this_00->field_32 == 36392) {
                (*___glewQueryCounter)(uVar2, 36392);
                pcVar5 = "glQueryCounter";
                iVar4 = 151;
            } else {
                (*___glewBeginQuery)(*(int*)&this_00->field_32, uVar2);
                pcVar5 = "glBeginQuery";
                iVar4 = 167;
            }
            CheckGlErrorInternal(pcVar5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/Query_OGL.cpp",
                                 iVar4);
        }
    }

    // 0x100bdaab0, 256 bytes, placed by __FILE__ string
    // Query::End()::$_17::operator()(RenderContext&) const
    /* Query::End()::$_17::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void Query::End()::$_17::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;
        undefined8 uVar3;
        RenderContext* pRVar4;
        duration local_20[8];

        pRVar1 = field_0;
        pRVar4 = param_1;
        if (field_8 != '\0') {
            pRVar4 = pRVar1;
            if (param_1->IsObjectAlive(pRVar1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          184, (char*)0);
            }
        }
        if (m_simulatedEndDelayMs != 0) {
            std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_20, (type*)pRVar4);
            std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_20);
        }
        if (pRVar1->m_immediateContext[8] == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      194, (char*)0);
        }
        pRVar1->m_immediateContext[8] = 0;
        if (*(int*)(pRVar1->m_immediateContext + 12) == 4) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/Query_OGL.cpp",
                                210,
                                "Calling Begin on an invalid query (either query object creation failed or we\'re "
                                "calling End prior to Create)");
        } else {
            if (*(int*)(pRVar1->m_immediateContext + 16) != 36392) {
                (*___glewEndQuery)();
                CheckGlErrorInternal("glEndQuery",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/Query_OGL.cpp",
                                     203);
            }
            pRVar1->m_immediateContext[96] = 1;
        }
        std::mutex::unlock();
    }

    // 0x100bdb0a0, 256 bytes, placed by __FILE__ string
    // Query::FetchResult()::$_18::operator()(RenderContext&) const
    /* Query::FetchResult()::$_18::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void Query::FetchResult()::$_18::operator()(RenderContext* param_1) {
        Query* this_00;
        code* pcVar1;
        undefined4 uVar3;
        scoped_lock<std::mutex> local_28[12];
        uint local_1c;

        this_00 = field_8;
        if (*field_0 != '\0') {
            if (param_1->IsObjectAlive(this_00) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          236, (char*)0);
            }
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&this_00->field_120);
        pcVar1 = ___glewGetQueryObjectuiv;
        if (this_00->field_24 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      240, (char*)0);
        }
        if ((this_00->field_112 != '\0') && (this_00->field_113 != '\0')) {
            local_1c = 0;
            uVar3 = GetReadQuery(this_00);
            (*pcVar1)(uVar3, 34918, &local_1c);
            CheckGlErrorInternal("glGetQueryObjectuiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/Query_OGL.cpp",
                                 247);
            this_00->field_112 = '\0';
            *(ulong*)&this_00->field_104 = (ulong)local_1c;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100bdb2b0, 256 bytes, placed by __FILE__ string
    // Query::FetchResult64()::$_19::operator()(RenderContext&) const
    /* Query::FetchResult64()::$_19::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void Query::FetchResult64()::$_19::operator()(RenderContext* param_1) {
        Query* this_00;
        code* pcVar1;
        undefined4 uVar3;
        scoped_lock<std::mutex> local_28[8];
        undefined8 local_20;

        this_00 = field_8;
        if (*field_0 != '\0') {
            if (param_1->IsObjectAlive(this_00) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          265, (char*)0);
            }
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&this_00->field_120);
        pcVar1 = ___glewGetQueryObjectui64v;
        if (this_00->field_24 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      269, (char*)0);
        }
        if ((this_00->field_112 != '\0') && (this_00->field_113 != '\0')) {
            local_20 = 0;
            uVar3 = GetReadQuery(this_00);
            (*pcVar1)(uVar3, 34918, &local_20);
            CheckGlErrorInternal("glGetQueryObjectui64v",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/Query_OGL.cpp",
                                 278);
            this_00->field_112 = '\0';
            *(undefined8*)&this_00->field_104 = local_20;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100bdb440, 16 bytes, placed by class name and neighbouring functions
    // Query::PrepareResult()::$_20::operator()(RenderContext&) const
    /* Query::PrepareResult()::$_20::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void Query::PrepareResult()::$_20::operator()(RenderContext* param_1) {
        FetchResult(field_0);
    }

    // 0x100bdb4e0, 16 bytes, placed by class name and neighbouring functions
    // Query::PrepareResult64()::$_21::operator()(RenderContext&) const
    /* Query::PrepareResult64()::$_21::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void Query::PrepareResult64()::$_21::operator()(RenderContext* param_1) {
        FetchResult64(field_0);
    }

} // namespace jag::render
