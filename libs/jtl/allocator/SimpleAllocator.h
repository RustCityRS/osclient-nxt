// libs/jtl/allocator/SimpleAllocator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class SimpleAllocator {
    public:
        class AllocatedBlock;
        class FreeListEntry;
        GetSize() const;
        ulong GetSlotSize() const;
        begin() const;
        GetOverflowList() const;
        void IsAddressAllocated(void const*) const;
        long size() const;
        SimpleAllocator();
        SimpleAllocator(unsigned long, unsigned long, unsigned int, unsigned long);
        ~SimpleAllocator();
        Allocate();
        void DeAllocate(void*);
        void DeAllocate(AllocatedBlock const&);
        CheckOverflow(void const*) const;
        void ResetMetrics();
        void PrintMetrics();
        void PrintAllocations(bool);
        GetTotalSize();
        long New(unsigned long, unsigned long, unsigned int, unsigned long);
        void HeapFree(void*);
        Allocate(unsigned long);
        SafeAllocate();
        void TrackAllocation(AllocatedBlock const&);
        AllocateInRange(unsigned int&, unsigned long, unsigned long);
        AllocateOverflow();
        OverflowAlloc();
        bool AddToFreeList(AllocatedBlock const&, int const*);
        long GetOverflowCount() const;
        void SafeDeAllocate(AllocatedBlock const&);
        void CheckThreadContention();
        void OverflowFree(void*);
        void MarkUnAllocated(unsigned long);
        void HeapAlloc();
        GetBlock(void const*) const;
        void SafeCheckOverflow(void const*) const;
        void ResetThreadContentionTracking();
        GetAllocatedBlock(unsigned long);
        bool IsAllocated(AllocatedBlock const&) const;
        long GetAllocationCountFromFlags();
        static /* 24 bytes */ m_threadLocalAllocators;                            // = { 0, 0, 0, 0, 231224, 0 }
        static /* 24 bytes */ m_threadLocalAllocatorCount;                        // = { 0, 0, 0, 0, 237880, 0 }
        static /* 24 bytes */ m_totalSlotSize;                                    // = { 0, 0, 0, 0, 237888, 0 }
        static /* 24 bytes */ m_totalSize;                                        // = { 0, 0, 0, 0, 237896, 0 }
        static std::array<SimpleAllocator, 256ul> /* 53248 bytes */ m_allocators; // = array<SimpleAllocator,256ul>()
        static /* 8 bytes */ m_allocatorCount;

        // data members, from how the methods use this: 208 bytes
        long field_0;        // offset 0
        ulong field_8;       // offset 8
        ulong m_slotSize;    // offset 16
        undefined8 field_24; // offset 24
        long field_32;       // offset 32
        undefined8 field_40; // offset 40
        ulong field_48;      // offset 48
        ulong field_56;      // offset 56
        char _unknown_64[104];
        undefined8 field_168; // offset 168
        undefined1 field_176; // offset 176
        char _unknown_177[15];
        uint field_192; // offset 192
        char _unknown_196[4];
        ulong field_200; // offset 200
    };

    class SimpleAllocator::AllocatedBlock {
    public:
        AllocatedBlock(BlockState, void*, unsigned long);
        AllocatedBlock();

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
    };

    class SimpleAllocator::FreeListEntry {
    public:
        FreeListEntry(AllocatedBlock const&, int const*);

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        int* field_24;       // offset 24
    };

    // 0x1008d5570, 64 bytes, inline, placed by class name and debug map
    // SimpleAllocator::IsAddressAllocated(void const*) const
    void SimpleAllocator::IsAddressAllocated(void* param_1) {
        undefined1 local_30[24];

        GetBlock((SimpleAllocator*)local_30, this);
        IsAllocated(this, (AllocatedBlock*)local_30);
    }

    // 0x1008dc670, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::SpriteAtlasReference* placement_new<graphics::SpriteAtlasReference, shared_ptr<graphics::SpriteAtlas> const&, int, long long&>(void*, shared_ptr<graphics::SpriteAtlas> const&, int&&, long long&)
    /* graphics::SpriteAtlasReference* placement_new<graphics::SpriteAtlasReference,
   shared_ptr<graphics::SpriteAtlas>&, int&, long long&>(void*,
   shared_ptr<graphics::SpriteAtlas>&, int&, long long&) */

    SpriteAtlasReference*
    jag::placement_new<graphics::SpriteAtlasReference, shared_ptr<graphics::SpriteAtlas>&, int&, long long&>(
        void* param_1, shared_ptr* param_2, int* param_3, longlong* param_4) {
        graphics::SpriteAtlasReference::SpriteAtlasReference(param_1, param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x1008dc690, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048> >* placement_new<MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048> >, MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData*&, graphics::SpriteAtlasReference*>(void*, MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData*&, graphics::SpriteAtlasReference*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048>>,
        MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData*&, graphics::SpriteAtlasReference*>(
        void* param_1, RefCounterAndData** param_2, SpriteAtlasReference** param_3) {
        MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048>>::
            MakeSharedPoolRefCounter(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1008dcd30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048> >::MakeSharedPoolRefCounter(void*, graphics::SpriteAtlasReference*): jumps straight to the base-object constructor

    // 0x1008dcd40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048> >::MakeSharedPoolRefCounter(void*, graphics::SpriteAtlasReference*)
    void jag::MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                       MakeSharedPool<graphics::SpriteAtlasReference, 2048>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                                          MakeSharedPool<graphics::SpriteAtlasReference, 2048>>* this,
                                 void* param_1, SpriteAtlasReference* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bf8 + 16;
        *(void**)(this + 16) = param_1;
        *(SpriteAtlasReference**)(this + 24) = param_2;
    }

    // 0x1008dcd80, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048> >::DeleteData()
    /* BucketRefCounter<Js5MemoryCacheWrapper>::DeleteData() */

    void BucketRefCounter<Js5MemoryCacheWrapper>::DeleteData() {
        if (*(pair<oldscape::Font_const, shared_ptr<oldscape::jstring::PixfontGeneric>>**)(this + 24) !=
            (pair<oldscape::Font_const, shared_ptr<oldscape::jstring::PixfontGeneric>>*)0) {
            eastl::pair<oldscape::Font_const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair(
                *(pair<oldscape::Font_const, shared_ptr<oldscape::jstring::PixfontGeneric>>**)(this + 24));
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1008dcdb0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                       MakeSharedPool<graphics::SpriteAtlasReference, 2048>>::
        DeleteSelf(MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                            MakeSharedPool<graphics::SpriteAtlasReference, 2048>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::SpriteAtlasReference, 2048>::deallocate(pvVar1);
    }

    // 0x1008dd190, 112 bytes, inline, placed by debug map only (low confidence)
    // graphics::SpriteAtlasReference* placement_new<graphics::SpriteAtlasReference, decltype(nullptr), int, long long&>(void*, decltype(nullptr)&&, int&&, long long&)
    SpriteAtlasReference* placement_new<graphics::SpriteAtlasReference, decltype(nullptr), int, long long&>(
        void* param_1, _func_decltype_nullptr** param_2, int* param_3, longlong* param_4) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        graphics::SpriteAtlasReference::SpriteAtlasReference(param_1, &local_38, *param_3, *param_4);
        local_38.~shared_ptr();
        return param_1;
    }

    // 0x1008dd2c0, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::SpriteAtlas* placement_new<graphics::SpriteAtlas, graphics::TextureManager*&, int&, unsigned int, graphics::SpriteAtlasUsageType&, int&>(void*, graphics::TextureManager*&, int&, unsigned int&&, graphics::SpriteAtlasUsageType&, int&)
    SpriteAtlas* jag::placement_new<graphics::SpriteAtlas, graphics::TextureManager*&, int&, unsigned int,
                                    graphics::SpriteAtlasUsageType&, int&>(void* param_1, TextureManager** param_2,
                                                                           int* param_3, uint* param_4,
                                                                           SpriteAtlasUsageType* param_5,
                                                                           int* param_6) {
        graphics::SpriteAtlas::SpriteAtlas(param_1, *param_2, *param_3, *param_4, *(undefined4*)param_5, *param_6);
        return param_1;
    }

    // 0x1008dd2f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64> >* placement_new<MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64> >, MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData*&, graphics::SpriteAtlas*>(void*, MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData*&, graphics::SpriteAtlas*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>,
                       MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData*&, graphics::SpriteAtlas*>(
        void* param_1, RefCounterAndData** param_2, SpriteAtlas** param_3) {
        MakeSharedPoolRefCounter<graphics::SpriteAtlas,
                                 MakeSharedPool<graphics::SpriteAtlas, 64>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                      *param_3);
        return param_1;
    }

    // 0x1008dd370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64> >::MakeSharedPoolRefCounter(void*, graphics::SpriteAtlas*): jumps straight to the base-object constructor

    // 0x1008dd380, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64> >::MakeSharedPoolRefCounter(void*, graphics::SpriteAtlas*)
    void jag::MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>* this,
            void* param_1, SpriteAtlas* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ba0 + 16;
        *(void**)(this + 16) = param_1;
        *(SpriteAtlas**)(this + 24) = param_2;
    }

    // 0x1008dd3c0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>::DeleteData(
        MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>* this) {
        if (*(SpriteAtlas**)(this + 24) != (SpriteAtlas*)0) {
            (*(SpriteAtlas**)(this + 24))->~SpriteAtlas();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1008dd3f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::SpriteAtlas, 64>::deallocate(pvVar1);
    }

    // 0x100cbad80, 32 bytes, inline, placed by class name
    // SimpleAllocator::size() const
    long SimpleAllocator::size() {
        long lVar1;
        long lVar2;

        lVar1 = field_0;
        lVar2 = (&field_112)->size();
        return lVar2 + lVar1;
    }

    // 0x100cbbf80, 32 bytes, inline, placed by class name
    // SimpleAllocator::GetTotalSize()
    undefined8 SimpleAllocator::GetTotalSize() {
        undefined8* puVar1;

        puVar1 = (undefined8*)(*(code*)m_totalSize)();
        return *puVar1;
    }

    // 0x100cbd470, 16 bytes, complete-object constructor, inline, placed by class name
    // SimpleAllocator::AllocatedBlock::AllocatedBlock(SimpleAllocator::AllocatedBlock::BlockState, void*, unsigned long): jumps straight to the base-object constructor

    // 0x100cbd7f0, 16 bytes, complete-object constructor, inline, placed by class name
    // SimpleAllocator::AllocatedBlock::AllocatedBlock(): jumps straight to the base-object constructor

    // 0x100cbd800, 208 bytes, inline, placed by class name
    // SimpleAllocator::AllocateInRange(unsigned int&, unsigned long, unsigned long)
    SimpleAllocator* SimpleAllocator::AllocateInRange(uint* param_1, ulong param_2, ulong param_3) {
        uint uVar1;
        ulong* puVar2;
        long lVar3;
        long in_R8;

        new (this) AllocatedBlock();
        uVar1 = *(uint*)param_2;
        if (uVar1 != 4294967295) {
            if (*(ulong*)(param_1 + 2) < in_R8 + param_3) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                                "SimpleAllocator.cpp",
                                294, (char*)0);
            }
            if (in_R8 != 0) {
                lVar3 = 0;
                do {
                    if ((uVar1 >> ((uint)lVar3 & 31) & 1) == 0) {
                        *(uint*)param_2 = 1 << ((byte)lVar3 & 31) | uVar1;
                        m_slotSize = param_3 + lVar3;
                        *(undefined4*)&field_0 = 1;
                        field_8 = (param_3 + lVar3) * *(long*)(param_1 + 4) + *(long*)(param_1 + 12);
                        *(long*)param_1 = *(long*)param_1 + 1;
                        puVar2 = std::max<unsigned long>((ulong*)param_1, (ulong*)(param_1 + 6));
                        *(ulong*)(param_1 + 6) = *puVar2;
                        return this;
                    }
                    lVar3 = lVar3 + 1;
                } while (in_R8 != lVar3);
            }
        }
        return this;
    }

    // 0x100cbdab0, 16 bytes, complete-object constructor, inline, placed by class name
    // SimpleAllocator::FreeListEntry::FreeListEntry(SimpleAllocator::AllocatedBlock const&, int const*): jumps straight to the base-object constructor

    // 0x100cbdac0, 48 bytes, inline, placed by class name
    // SimpleAllocator::GetOverflowCount() const
    long SimpleAllocator::GetOverflowCount() {
        ulong* puVar1;

        puVar1 = std::max<unsigned long>(&field_8, &field_24);
        return *puVar1 - field_8;
    }

    // 0x100cbde50, 80 bytes, inline, placed by class name
    // SimpleAllocator::SafeCheckOverflow(void const*) const
    void SimpleAllocator::SafeCheckOverflow(void* param_1) {
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_38;
        undefined8 local_30;
        undefined8 local_28;
        hashtable_iterator_base* local_20;
        RenderDeviceCallback* local_18;

        local_18 = param_1;
        local_38 = (&field_112, &local_18)->find();
        local_30 = extraout_RDX;
        local_28 = (&field_112)->end();
        local_20 = extraout_RDX_00;
        eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_28, extraout_RDX_00);
    }

    // 0x100cbf7c0, 16 bytes, base-object constructor, inline, placed by class name
    // SimpleAllocator::AllocatedBlock::AllocatedBlock(SimpleAllocator::AllocatedBlock::BlockState, void*, unsigned long)
    void SimpleAllocator::AllocatedBlock::AllocatedBlock(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        field_0 = param_2;
        field_8 = param_3;
        field_16 = param_4;
    }

    // 0x100cbf830, 32 bytes, base-object constructor, inline, placed by class name
    // SimpleAllocator::AllocatedBlock::AllocatedBlock()
    void SimpleAllocator::AllocatedBlock::AllocatedBlock() {
        field_0 = 0;
        field_8 = 0;
        field_16 = 0;
    }

    // 0x100cbf850, 32 bytes, base-object constructor, inline, placed by class name
    // SimpleAllocator::FreeListEntry::FreeListEntry(SimpleAllocator::AllocatedBlock const&, int const*)
    void SimpleAllocator::FreeListEntry::FreeListEntry(AllocatedBlock* param_1, int* param_2) {
        undefined8 uVar1;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        field_24 = param_2;
    }

} // namespace jag

namespace jag::math {
    // 0x1008d5700, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<double>::Vector3T(double, double, double)
    void Vector3T<double>::Vector3T(double param_1, double param_2, double param_3) {
        *(double*)this = param_1;
        *(double*)(this + 8) = param_2;
        *(double*)(this + 16) = param_3;
    }

    // 0x1008d5720, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<double>::Vector3T<float>(Vector3T<float> const&)
    void Vector3T<double>::Vector3T<float>(Vector3T* param_1) {
        vector* pvVar1;
        float* pfVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(double*)this = (double)*(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        *(double*)(this + 8) = (double)*pfVar2;
        pfVar2 = (float*)param_1->second();
        *(double*)(this + 16) = (double)*pfVar2;
    }

    // 0x1008d5780, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector4T<double>::Vector4T(Vector3T<double> const&, double)
    void Vector4T<double>::Vector4T(Vector3T* param_1, double param_2) {
        vector* pvVar1;
        undefined8* puVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(undefined8*)this = *(undefined8*)pvVar1;
        puVar2 = (undefined8*)param_1->second();
        *(undefined8*)(this + 8) = *puVar2;
        puVar2 = (undefined8*)param_1->GetScreen();
        *(undefined8*)(this + 16) = *puVar2;
        *(double*)(this + 24) = param_2;
    }

    // 0x1008d57e0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator-<double>(Vector3T<double> const&, Vector3T<double> const&)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, Vector3T<double> const&) */

    math* operator-(Vector3T* param_1, Vector3T* param_2) {
        new (this)
            Vector3T<double>(*(double*)param_1 - *(double*)param_2, *(double*)(param_1 + 8) - *(double*)(param_2 + 8),
                             *(double*)(param_1 + 16) - *(double*)(param_2 + 16));
        return this;
    }

    // 0x1008d5820, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::Normalize()
    Vector3T<double>* Vector3T<double>::Normalize() {
        double dVar1;

        dVar1 = (double)InvLength(this);
        operator*=(this, dVar1);
        return this;
    }

    // 0x1008d5840, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> Vector3Cross<double>(Vector3T<double> const&, Vector3T<double> const&)
    math* Vector3Cross<double>(Vector3T* param_1, Vector3T* param_2) {
        new (this) Vector3T<double>(
            *(double*)(param_2 + 16) * *(double*)(param_1 + 8) - *(double*)(param_2 + 8) * *(double*)(param_1 + 16),
            *(double*)(param_1 + 16) * *(double*)param_2 - *(double*)(param_2 + 16) * *(double*)param_1,
            *(double*)param_1 * *(double*)(param_2 + 8) - *(double*)param_2 * *(double*)(param_1 + 8));
        return this;
    }

    // 0x1008d58a0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::InvLength() const
    double Vector3T<double>::InvLength() {
        double dVar1;
        double dVar2;

        dVar1 = (double)Length(this);
        dVar2 = 0.0;
        if (dVar1 != 0.0) {
            dVar2 = 1.0 / dVar1;
        }
        return dVar2;
    }

    // 0x1008d58d0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::operator*=(double)
    /* Vector3T<double>::TEMPNAMEPLACEHOLDERVALUE(double) */

    Vector3T<double>* Vector3T<double>::operator*=(double param_1) {
        *(double*)this = *(double*)this * param_1;
        *(double*)(this + 8) = *(double*)(this + 8) * param_1;
        *(double*)(this + 16) = param_1 * *(double*)(this + 16);
        return this;
    }

    // 0x1008d5900, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::Length() const
    double Vector3T<double>::Length() {
        double dVar1;

        dVar1 = (double)LengthSq(this);
        return SQRT(dVar1);
    }

    // 0x1008d5910, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::LengthSq() const
    void Vector3T<double>::LengthSq() {
        Vector3Dot<double>((Vector3T*)this, (Vector3T*)this);
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1008d90d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping&&): jumps straight to the base-object constructor

    // 0x1008d90e0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping&&)
    void SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        field_64 = param_1->field_64;
        new (&field_72, (Rect*)&param_1->field_72) math::Rect<unsigned int>();
        new (&field_88, (Vector4T*)&param_1->field_88) math::Float4();
        field_104 = param_1->field_104;
    }

    // 0x1008d9400, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping const&): jumps straight to the base-object constructor

    // 0x1008d9410, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping const&)
    void SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        field_64 = param_1->field_64;
        new (&field_72, (Rect*)&param_1->field_72) math::Rect<unsigned int>();
        new (&field_88, (Vector4T*)&param_1->field_88) math::Float4();
        field_104 = param_1->field_104;
    }

    // 0x1008da4d0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMappingExtended::~SpriteAtlasMappingExtended(): jumps straight to the base-object destructor

    // 0x1008da4e0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMappingExtended::~SpriteAtlasMappingExtended()
    void SpriteAtlasMappingExtended::~SpriteAtlasMappingExtended() {
        (&field_128)->~shared_ptr();
        ~SpriteAtlasMapping();
    }

    // 0x1008da740, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMappingExtended::SpriteAtlasMappingExtended(SpriteAtlasMappingExtended&&): jumps straight to the base-object constructor

    // 0x1008da750, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMappingExtended::SpriteAtlasMappingExtended(SpriteAtlasMappingExtended&&)
    void SpriteAtlasMappingExtended::SpriteAtlasMappingExtended(SpriteAtlasMappingExtended* param_1) {
        undefined8 uVar1;

        new (this) SpriteAtlasMapping(param_1);
        uVar1 = param_1->field_120;
        field_112 = param_1->field_112;
        field_120 = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_128, (shared_ptr*)&param_1->field_128);
    }

    // 0x1008da840, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMappingExtended::SpriteAtlasMappingExtended(): jumps straight to the base-object constructor

    // 0x1008da930, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMappingExtended::SpriteAtlasMappingExtended()
    void SpriteAtlasMappingExtended::SpriteAtlasMappingExtended() {
        _func_decltype_nullptr* in_RSI;

        new (this) SpriteAtlasMapping();
        new (&field_128, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::graphics

// 0x1008d5610, 16 bytes, placed by debug map only (low confidence)
// tan(float)
void tan(float param_1) {
    _tanf();
}

// 0x1008d6a30, 16 bytes, placed by debug map only (low confidence)
// round(float)
void round(float param_1) {
    _roundf();
}
