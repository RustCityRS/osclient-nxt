// libs/hal/render/utils/Query.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::render {
    class Query {
    public:
        void GetResult() const;
        Query();
        void Begin();
        void End();
        uint64_t FetchResult64();
        uint64_t GetResult64() const;
        Query(bool arg1);
        ~Query();
        void Destroy();
        bool Create(QueryType queryType);
        void KeepAlive() const;
        void GetNativeQueryType(QueryType queryType);
        unsigned long IsValid() const;
        unsigned long IsActive() const;
        uint32_t FetchResult();
        void PrepareResult();
        void PrepareResult64();
        unsigned long IsResultReady() const;
        uint32_t AdvanceWriteQuery();
        uint32_t GetReadQuery() const;
        static int64_t m_simulatedEndDelayMs;

    private:
        uint32_t field_0;
        RenderResource field_4;
        uint8_t _unknown_5[19];
        uint8_t field_24;
        uint8_t _unknown_25[3];
        int field_28;
        uint8_t _unknown_32[64];
        unsigned int field_96;
        uint8_t _unknown_100[4];
        uint32_t field_104;
        uint8_t _unknown_108[4];
        char field_112;
        char field_113;
        uint8_t _unknown_114[14];
    };

    class QueryView {
    public:
        unsigned int GetSubQueryCount() const;
        QueryView();
        QueryView(shared_ptr<Query>* fastPool, unsigned int arg2);
        bool IsValid() const;
        bool HasSubQueries() const;
        void Begin(unsigned int arg1);
        void End(unsigned int arg1);

    private:
        long field_0;
        unsigned int m_subQueryCount;
        uint8_t _unknown_12[4];
    };

    // 0x100815450
    bool QueryView::IsValid() const {
        return m_nativeBuffer != 0;
    }

    // 0x100815460
    bool QueryView::HasSubQueries() const {
        return 1 < m_subQueryCount;
    }

    // 0x1008159a0
    void Query::GetResult() const {
        GetResult64();
    }

    // 0x100bdb1a0
    uint32_t Query::GetReadQuery() const {
        unsigned long uVar3 = (unsigned long)(field_96 + 1);
        unsigned long uVar1 = field_40.size();
        unsigned long arg1 = 0;
        if (uVar3 < uVar1) {
            arg1 = uVar3;
        }
        uint32_t* puVar2 = &field_40[arg1];
        return *puVar2;
    }

} // namespace jag::render

// 0x100815470
void ceil(float arg1) {
    _ceilf();
}

namespace jag {
    // 0x1008157b0
    shared_ptr_if_not_array<render::Query>::type make_shared<render::Query>() {
        ref_counter_base* ref_counter_base;
        int local_2c;
        Query* local_28[2];

        auto arg1 = aligned_alloc(216, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<render::Query>::type result;
        } else {
            local_28[0] = placement_new<render::Query>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<render::Query>, int, render::Query*&>(
                    arg1, &local_2c, local_28);
            shared_ptr_do_enable_shared_from_this<render::Query>(ref_counter_base, local_28[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
