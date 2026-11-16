// libs/hal/render/utils/OGL/Query_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/utils/Query.h"

namespace jag::render {
    class DurationQuery {
    public:
        long FetchResult();
        long GetResult() const;

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[8];
    };

    // 0x103bd9e50
    int64_t Query::m_simulatedEndDelayMs;

    // 0x100bce7c0
    void Query::Begin() {
        __16 local_d8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        Query* this_00 = this;
        KeepAlive();
        auto pRVar2 = this_00->Instance();
        uint8_t uVar1 = pRVar2->ShouldDefer();
        pRVar2 = (RenderDevice*)pRVar2->Instance();
        local_d8.field_0 = this;
        local_d8._8_1_ = uVar1;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Query::Begin()::__16, void>(local_c8, &local_d8);
        pRVar2->RunOnRenderThread(*local_c8);
    }

    // 0x100bce8d0
    void Query::End() {
        __17 local_d8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        Query* this_00 = this;
        KeepAlive();
        auto pRVar2 = this_00->Instance();
        uint8_t uVar1 = pRVar2->ShouldDefer();
        pRVar2 = (RenderDevice*)pRVar2->Instance();
        local_d8.field_0 = (RenderContext*)this;
        local_d8._8_1_ = uVar1;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Query::End()::__17, void>(local_c8, &local_d8);
        pRVar2->RunOnRenderThread(*local_c8);
    }

    // 0x100bce990
    long DurationQuery::FetchResult() {
        Query* pQVar1 = (Query*)(*this).operator->();
        unsigned long uVar2 = pQVar1->FetchResult64();
        pQVar1 = (Query*)field_16.operator->();
        unsigned long uVar3 = pQVar1->FetchResult64();
        long lVar4 = uVar3 - uVar2;
        if (uVar3 < uVar2) {
            lVar4 = 0;
        }
        return lVar4;
    }

    // 0x100bce9d0
    uint64_t Query::FetchResult64() {
        __19 local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        Query* this_00 = this;
        KeepAlive();
        auto pRVar1 = this_00->Instance();
        char local_c9 = pRVar1->ShouldDefer();
        pRVar1 = (RenderDevice*)pRVar1->Instance();
        local_e0.field_0 = &local_c9;
        local_e0.field_8 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Query::FetchResult64()::__19, void>(local_c8,
                                                                                                         &local_e0);
        pRVar1->RunSynchronouslyOnRenderThread(*local_c8, true);
        return *(uint64_t*)&field_104;
    }

    // 0x100bceaa0
    long DurationQuery::GetResult() const {
        Query* pQVar1 = (Query*)(*this).operator->();
        unsigned long uVar2 = pQVar1->GetResult64();
        pQVar1 = (Query*)field_16.operator->();
        unsigned long uVar3 = pQVar1->GetResult64();
        long lVar4 = uVar3 - uVar2;
        if (uVar3 < uVar2) {
            lVar4 = 0;
        }
        return lVar4;
    }

    // 0x100bceae0
    uint64_t Query::GetResult64() const {
        uint64_t uVar2;

        scoped_lock<std::mutex> local_18(field_120);
        if (field_24 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      328, nullptr);
        }
        if (field_113 == '\0') {
            uVar2 = 0;
        } else {
            if (field_112 != '\0') {
                if (((RenderDevice*)&local_18->Instance())->IsDeferredRendering() == '\0') {
                    LogAssert("!m_resultDirty || RenderDevice::Instance().IsDeferredRendering()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/Query_OGL.cpp",
                              336, nullptr);
                }
            }
            uVar2 = *(uint64_t*)&field_104;
        }
        return uVar2;
    }

    // 0x100bd0920
    Query::Query(bool arg1) : RenderResource(), field_24(0) {
        *(uint64_t*)&field_28 = 4;
        new (&field_40) eastl::fixed_vector<unsigned int, 4ul>();
        field_96 = 0;
        *(uint64_t*)&field_104 = 0;
        field_112 = '\0';
        field_113 = '\0';
        new (&field_120) std::mutex();
        field_40.resize((unsigned long)!arg1 * 3 + 1);
        field_0 = 2;
    }

    // 0x100bd0a60
    Query::~Query() {
        RenderDevice* pRVar2;

        scoped_lock<std::mutex> local_28(field_120);
        if ((field_0 != 0) && (field_28 != 4)) {
            pRVar2 = &local_28->InstancePtr();
            if (pRVar2 != nullptr) {
                pRVar2 = (RenderDevice*)&local_28->Instance();
                if (pRVar2->IsRenderThread() == '\0') {
                    LogAssert("m_livenessMethod == RenderResourceLivenessMethod::INVALID || (m_queryType == "
                              "QueryType::UNSPECIFIED) || !RenderDevice::InstancePtr() || "
                              "RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/Query_OGL.cpp",
                              28, nullptr);
                }
            }
        }
        Destroy();
        (&field_120)->~mutex();
        field_40.~fixed_vector();
        field_8.~enable_shared_from_this();
    }

    // 0x100bd0b40
    void Query::Destroy() {
        void* pcVar1;
        uint32_t uVar3;
        RenderDevice* pRVar4;
        int* piVar6;
        uint64_t uVar7;
        unsigned int* arg1;
        unsigned int* arg2;
        uint8_t* this_00;
        Query* this_01;
        __15 local_d8;
        scoped_lock<std::mutex> local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        RenderDevice* pRVar5 = &local_d0;
        new (pRVar5) std::scoped_lock(field_120);
        if (field_28 != 4) {
            pRVar4 = pRVar5->InstancePtr();
            if (pRVar4 != nullptr) {
                pRVar5 = (RenderDevice*)pRVar5->Instance();
                if (pRVar5->IsRenderThread()) {
                    if (field_24 != '\0') {
                        LogAssert("!m_beginCalled",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "utils/OGL/Query_OGL.cpp",
                                  99, nullptr);
                    }
                    field_113 = '\0';
                    field_28 = 4;
                    this_00 = &field_40;
                    piVar6 = (int*)(*this_00)[0];
                    pcVar1 = ___glewDeleteQueries;
                    if (*piVar6 != 0) {
                        uVar3 = this_00->size();
                        uVar7 = this_00->HeapBeginPtr();
                        (*pcVar1)(uVar3, uVar7);
                        CheckGlErrorInternal("glDeleteQueries",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/utils/OGL/Query_OGL.cpp",
                                             107);
                        arg1 = (unsigned int*)this_00->HeapBeginPtr();
                        arg2 = (unsigned int*)this_00->end();
                        eastl::fill<unsigned int>(arg1, arg2, 0);
                    }
                    goto LAB_100bd0cb2;
                }
            }
            pRVar5 = pRVar5->InstancePtr();
            if (pRVar5 == nullptr) {
                LogAssert("RenderDevice::InstancePtr()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          113, nullptr);
            }
            this_01 = this;
            KeepAlive();
            pRVar5 = (RenderDevice*)this_01->Instance();
            local_d8.field_0 = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                    (fixedfunction::Methods)0>::function<Query::Destroy()::__15, void>(local_c8,
                                                                                                       &local_d8);
            pRVar5->RunOnRenderThread(*local_c8);
        }
    LAB_100bd0cb2:
    }

    // 0x100bd0d20
    bool Query::Create(QueryType queryType) {
        uint8_t uVar1;
        RenderDevice* pRVar5;
        __14 local_f0;

        auto pMVar3 = Instance();
        long lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 171) == '\0') {
            LogAssert("render::RenderDevice::Instance().GetDeviceCaps().m_HardwareQueries",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      36, nullptr);
        }
        if ((queryType & 4294967294) == 2) {
            pMVar3 = (MapArea*)pMVar3->Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 172) == '\0') {
                LogAssert("((queryType != QueryType::TIME_ELAPSED) && (queryType != QueryType::TIMESTAMP)) || "
                          "render::RenderDevice::Instance().GetDeviceCaps().m_HardwareTimeQueries",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          37, nullptr);
            }
        }
        KeepAlive();
        scoped_lock<std::mutex> local_d8(field_120);
        if (field_24 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      44, nullptr);
        }
        Singleton<RenderDevice>* this_01 = (Singleton<RenderDevice>*)(unsigned long)queryType;
        int iVar2 = GetNativeQueryType(queryType);
        if (iVar2 == 0) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      52, "Invalid/unsupported query type (%u)", queryType);
        } else {
            pRVar5 = (RenderDevice*)this_01->Instance();
            uVar1 = pRVar5->ShouldDefer();
            pRVar5 = (RenderDevice*)pRVar5->Instance();
            local_f0.field_0 = (RenderResource*)this;
            local_f0.field_8 = queryType;
            local_f0.field_12 = iVar2;
            local_f0._16_1_ = uVar1;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Query::Create(QueryType)::__14, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f0);
            pRVar5->RunOnRenderThread(local_d8);
        }
        return iVar2 != 0;
    }

    // 0x100bd0f00
    void Query::KeepAlive() const {
        shared_ptr local_38;
        shared_ptr<oldscape::dash3d::Decor> local_28;

        auto pRVar2 = Instance();
        if (!(pRVar2->IsRenderThread())) {
            local_38.shared_from_this();
            if (!(shared_ptr::operator_cast_to_bool(&local_38))) {
                LogAssert("sharedThis",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          384, nullptr);
            }
            pRVar2 = (RenderDevice*)local_38.Instance();
            local_28 = shared_ptr(&local_38);
            pRVar2->KeepAliveSharedPtr(local_28, 0);
        }
    }

    // 0x100bd0fc0
    void Query::GetNativeQueryType(QueryType queryType) {
        Logger* logger;
        uint32_t uVar1;

        if (queryType < 4) {
            uVar1 = *(uint32_t*)(&DAT_100d99450 + (long)(int)queryType * 4);
        } else {
            logger = logger::default_logger();
            uVar1 = 0;
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                        "Query_OGL.cpp",
                        373, "Invalid query type specified");
        }
        return uVar1;
    }

    // 0x100bd1090
    unsigned long Query::IsValid() const {
        scoped_lock<std::mutex> local_20(field_120);
        int iVar1 = field_28;
        return iVar1 != 4 & 4294967295;
    }

    // 0x100bd10d0
    unsigned long Query::IsActive() const {
        uint64_t unaff_R14;

        scoped_lock<std::mutex> local_20(field_120);
        uint64_t uVar2 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        unsigned long uVar1 = (((uint64_t)uVar2 << 8) | (uint8_t)1);
        if (field_96 == 0) {
            uVar1 = (((uint64_t)uVar2 << 8) | (uint8_t)(field_113 != '\0'));
        }
        return uVar1 & 4294967295;
    }

    // 0x100bd1120
    uint32_t Query::FetchResult() {
        __18 local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        Query* this_00 = this;
        KeepAlive();
        auto pRVar1 = this_00->Instance();
        char local_c9 = pRVar1->ShouldDefer();
        pRVar1 = (RenderDevice*)pRVar1->Instance();
        local_e0.field_0 = &local_c9;
        local_e0.field_8 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Query::FetchResult()::__18, void>(local_c8,
                                                                                                       &local_e0);
        pRVar1->RunSynchronouslyOnRenderThread(*local_c8, true);
        return field_104;
    }

    // 0x100bd1210
    void Query::PrepareResult() {
        __20 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        Query* this_01 = this;
        KeepAlive();
        auto this_00 = this_01->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Query::PrepareResult()::__20, void>(local_c8,
                                                                                                         &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100bd12c0
    void Query::PrepareResult64() {
        __21 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        Query* this_01 = this;
        KeepAlive();
        auto this_00 = this_01->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Query::PrepareResult64()::__21, void>(local_c8,
                                                                                                           &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100bd1370
    unsigned long Query::IsResultReady() const {
        unsigned long uVar1;

        scoped_lock<std::mutex> local_18(field_120);
        if (field_24 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      350, nullptr);
        }
        if (field_113 == '\0') {
            uVar1 = 0;
        } else {
            uVar1 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)(field_112 == '\0'));
        }
        return uVar1 & 4294967295;
    }

    // 0x100bda570
    void Query::Create(QueryType)::$_14::operator()(RenderContext& renderContext) const {
        Logger* this_01;

        RenderResource* renderResource = field_0;
        if (field_16 != '\0') {
            if (renderContext.IsObjectAlive(renderResource) == '\0') {
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          61, nullptr);
            }
        }
        scoped_lock<std::mutex> local_38(*((renderResource + 24)));
        void* pcVar1 = ___glewGenQueries;
        if (renderResource[4].field_4 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      66, nullptr);
        }
        RenderResource* this_00 = renderResource + 8;
        uint32_t uVar3 = this_00->size();
        uint64_t uVar4 = this_00->HeapBeginPtr();
        (*pcVar1)(uVar3, uVar4);
        CheckGlErrorInternal(
            "glGenQueries",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/Query_OGL.cpp",
            69);
        int* piVar5 = (int*)(*this_00)[0];
        if (*piVar5 == 0) {
            this_01 = logger::default_logger();
            uVar3 = 0;
            this_01->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                         "Query_OGL.cpp",
                         81, "Could not create query objects");
            *(uint32_t*)((long)&renderResource[5].field_0 + 3) = 4;
        } else {
            piVar5 = (int*)this_00->back();
            if (*piVar5 == 0) {
                LogAssert("m_queries.back() != INVALID_QUERY_ID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          74, nullptr);
            }
            *(uint32_t*)((long)&renderResource[5].field_0 + 3) = field_8;
            uVar3 = field_12;
        }
        *(uint32_t*)((long)&renderResource[6].field_0 + 2) = uVar3;
    }

    // 0x100bda7b0
    void Query::Destroy()::$_15::operator()(RenderContext& renderContext) const {
        Query* this_00 = field_0;
        if (renderContext.IsObjectAlive(this_00) == '\0') {
            LogAssert("renderContext.IsObjectAlive(this)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      119, nullptr);
        }
        this_00->Destroy();
    }

    // 0x100bda890
    void Query::Begin()::$_16::operator()(RenderContext& renderContext) const {
        uint32_t uVar2;
        int arg3;
        char* str1;

        Query* this_00 = field_0;
        if (field_8 != '\0') {
            if (renderContext.IsObjectAlive(this_00) == '\0') {
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          133, nullptr);
            }
        }
        std::mutex::lock();
        if (this_00->field_24 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      139, nullptr);
        }
        this_00->field_24 = 1;
        if (this_00->field_28 == 4) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      172,
                      "Calling Begin on an invalid query (either query object creation failed or we\'re calling Begin "
                      "prior to Create)");
        } else {
            uVar2 = AdvanceWriteQuery(this_00);
            if (*(int*)&this_00->field_32 == 36392) {
                (*___glewQueryCounter)(uVar2, 36392);
                str1 = "glQueryCounter";
                arg3 = 151;
            } else {
                (*___glewBeginQuery)(*(int*)&this_00->field_32, uVar2);
                str1 = "glBeginQuery";
                arg3 = 167;
            }
            CheckGlErrorInternal(str1,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/Query_OGL.cpp",
                                 arg3);
        }
    }

    // 0x100bdaab0
    void Query::End()::$_17::operator()(RenderContext& renderContext) const {
        bool cVar1;
        type* in_RDX;
        type* extraout_RDX;
        duration<long long, std::ratio<1l, 1000l>> local_20;

        RenderContext* renderResource = field_0;
        RenderContext* arg1 = renderContext;
        if (field_8 != '\0') {
            arg1 = renderResource;
            cVar1 = renderContext.IsObjectAlive(renderResource);
            in_RDX = extraout_RDX;
            if (!cVar1) {
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          184, nullptr);
            }
        }
        if (m_simulatedEndDelayMs != 0) {
            local_20.duration<int>(*arg1, in_RDX);
            std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_20);
        }
        if (renderResource->m_immediateContext[8] == '\0') {
            LogAssert("m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      194, nullptr);
        }
        renderResource->m_immediateContext[8] = 0;
        if (*(int*)(renderResource->m_immediateContext + 12) == 4) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      210,
                      "Calling Begin on an invalid query (either query object creation failed or we\'re calling End "
                      "prior to Create)");
        } else {
            if (*(int*)(renderResource->m_immediateContext + 16) != 36392) {
                (*___glewEndQuery)();
                CheckGlErrorInternal("glEndQuery",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/Query_OGL.cpp",
                                     203);
            }
            renderResource->m_immediateContext[96] = 1;
        }
        std::mutex::unlock();
    }

    // 0x100bdb0a0
    void Query::FetchResult()::$_18::operator()(RenderContext& renderContext) const {
        uint32_t uVar3;
        unsigned int local_1c;

        Query* this_00 = field_8;
        if (*field_0 != '\0') {
            if (renderContext.IsObjectAlive(this_00) == '\0') {
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          236, nullptr);
            }
        }
        scoped_lock<std::mutex> local_28(this_00->field_120);
        void* pcVar1 = ___glewGetQueryObjectuiv;
        if (this_00->field_24 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      240, nullptr);
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
            *(unsigned long*)&this_00->field_104 = (unsigned long)local_1c;
        }
    }

    // 0x100bdb2b0
    void Query::FetchResult64()::$_19::operator()(RenderContext& renderContext) const {
        uint32_t uVar3;
        uint64_t local_20;

        Query* this_00 = field_8;
        if (*field_0 != '\0') {
            if (renderContext.IsObjectAlive(this_00) == '\0') {
                LogAssert("!shouldDefer || renderContext.IsObjectAlive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "Query_OGL.cpp",
                          265, nullptr);
            }
        }
        scoped_lock<std::mutex> local_28(this_00->field_120);
        void* pcVar1 = ___glewGetQueryObjectui64v;
        if (this_00->field_24 != '\0') {
            LogAssert("!m_beginCalled",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "Query_OGL.cpp",
                      269, nullptr);
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
            *(uint64_t*)&this_00->field_104 = local_20;
        }
    }

    // 0x100bdb440
    void Query::PrepareResult()::$_20::operator()(RenderContext& renderContext) const {
        FetchResult(field_0);
    }

    // 0x100bdb4e0
    void Query::PrepareResult64()::$_21::operator()(RenderContext& renderContext) const {
        FetchResult64(field_0);
    }

} // namespace jag::render
