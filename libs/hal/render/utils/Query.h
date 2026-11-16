// libs/hal/render/utils/Query.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::render {
    class Query {
    public:
        void GetResult() const;
        Query();
        void Begin();
        void End();
        FetchResult64();
        GetResult64() const;
        Query(bool);
        ~Query();
        void Destroy();
        bool Create(QueryType);
        void KeepAlive() const;
        GetNativeQueryType(QueryType);
        ulong IsValid() const;
        ulong IsActive() const;
        FetchResult();
        void PrepareResult();
        void PrepareResult64();
        ulong IsResultReady() const;
        AdvanceWriteQuery();
        GetReadQuery() const;
        static /* 8 bytes */ m_simulatedEndDelayMs;

        // data members, from how the methods use this: 128 bytes
        undefined4 field_0;     // offset 0
        RenderResource field_4; // offset 4
        char _unknown_5[19];
        undefined1 field_24; // offset 24
        char _unknown_25[3];
        int field_28; // offset 28
        char _unknown_32[8];
        undefined1 field_40; // offset 40
        char _unknown_41[55];
        uint field_96; // offset 96
        char _unknown_100[4];
        undefined4 field_104; // offset 104
        char _unknown_108[4];
        char field_112; // offset 112
        char field_113; // offset 113
        char _unknown_114[14];
    };

    class QueryView {
    public:
        uint GetSubQueryCount() const;
        QueryView();
        QueryView(shared_ptr<Query>*, unsigned int);
        IsValid() const;
        bool HasSubQueries() const;
        void Begin(unsigned int);
        void End(unsigned int);

        // data members, from how the methods use this: 16 bytes
        long field_0;         // offset 0
        uint m_subQueryCount; // offset 8
        char _unknown_12[4];
    };

    // 0x100815450, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // QueryView::IsValid() const
    /* BufferInterface::IsCreated() const */

    bool BufferInterface::IsCreated() {
        return m_nativeBuffer != 0;
    }

    // 0x100815460, 16 bytes, inline, placed by debug map only (low confidence)
    // QueryView::HasSubQueries() const
    bool QueryView::HasSubQueries() {
        return 1 < m_subQueryCount;
    }

    // 0x1008159a0, 16 bytes, inline, placed by class name and debug map
    // Query::GetResult() const
    void Query::GetResult() {
        GetResult64(this);
    }

    // 0x100838b30, 16 bytes, complete-object constructor, inline, placed by class name
    // Query::Query(): jumps straight to the base-object constructor

    // 0x100bdb1a0, 64 bytes, inline, placed by class name
    // Query::GetReadQuery() const
    undefined4 Query::GetReadQuery() {
        ulong uVar1;
        undefined4* puVar2;
        ulong uVar3;
        ulong uVar4;

        uVar4 = (ulong)(field_96 + 1);
        uVar1 = (&field_40)->size();
        uVar3 = 0;
        if (uVar4 < uVar1) {
            uVar3 = uVar4;
        }
        puVar2 = (undefined4*)eastl::vector<unsigned int,
                                            eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_40,
            uVar3);
        return *puVar2;
    }

} // namespace jag::render

// 0x100815470, 16 bytes, placed by debug map only (low confidence)
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

namespace jag {
    // 0x1008157b0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::Query>::type make_shared<render::Query>()
    jag* make_shared<render::Query>() {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_2c;
        Query* local_28[2];

        pvVar1 = (void*)aligned_alloc(216, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<render::Query>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<render::Query>, int, render::Query*&>(
                pvVar1, &local_2c, local_28);
            shared_ptr_do_enable_shared_from_this<render::Query>(prVar2, local_28[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
