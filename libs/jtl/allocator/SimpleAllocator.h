// libs/jtl/allocator/SimpleAllocator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class SimpleAllocator {
    public:
        class AllocatedBlock;
        class FreeListEntry;
        void GetSize() const;
        unsigned long GetSlotSize() const;
        AuthLibWrapper* begin() const;
        uint8_t* GetOverflowList() const;
        void IsAddressAllocated(const void* arg1) const;
        long size() const;
        SimpleAllocator();
        SimpleAllocator(unsigned long arg1, unsigned long arg2, unsigned int arg3, unsigned long arg4);
        ~SimpleAllocator();
        auto Allocate();
        void DeAllocate(void* arg1);
        void DeAllocate(const AllocatedBlock& allocatedBlock);
        uint32_t CheckOverflow(const void* arg1) const;
        void ResetMetrics();
        void PrintMetrics();
        void PrintAllocations(bool arg1);
        void GetTotalSize();
        long New(unsigned long arg1, unsigned long arg2, unsigned int arg3, unsigned long arg4);
        void HeapFree(void* arg1);
        AllocatedBlock Allocate(unsigned long arg1);
        auto SafeAllocate();
        void TrackAllocation(const AllocatedBlock& allocatedBlock);
        AllocatedBlock AllocateInRange(unsigned int& arg1, unsigned long arg2, unsigned long arg3);
        AllocatedBlock AllocateOverflow();
        uint64_t OverflowAlloc();
        bool AddToFreeList(const AllocatedBlock& allocatedBlock, const int* arg2);
        long GetOverflowCount() const;
        void SafeDeAllocate(const AllocatedBlock& allocatedBlock);
        void CheckThreadContention();
        void OverflowFree(void* arg1);
        void MarkUnAllocated(unsigned long arg1);
        void HeapAlloc();
        AllocatedBlock GetBlock(const void* arg1) const;
        void SafeCheckOverflow(const void* arg1) const;
        void ResetThreadContentionTracking();
        AllocatedBlock GetAllocatedBlock(unsigned long arg1);
        bool IsAllocated(const AllocatedBlock& allocatedBlock) const;
        long GetAllocationCountFromFlags();
        static int32_t m_threadLocalAllocators[6];              // = { 0, 0, 0, 0, 231224, 0 }
        static int32_t m_threadLocalAllocatorCount[6];          // = { 0, 0, 0, 0, 237880, 0 }
        static int32_t m_totalSlotSize[6];                      // = { 0, 0, 0, 0, 237888, 0 }
        static int32_t m_totalSize[6];                          // = { 0, 0, 0, 0, 237896, 0 }
        static std::array<SimpleAllocator, 256ul> m_allocators; // = array<SimpleAllocator, 256ul>()
        static int64_t m_allocatorCount;

    private:
        unsigned long field_0;
        unsigned long field_8;
        unsigned long m_slotSize;
        unsigned long field_24;
        long field_32;
        unsigned long field_40;
        unsigned long field_48;
        unsigned long field_56;
        uint8_t _unknown_64[104];
        __thread_id* field_168;
        uint8_t field_176;
        uint8_t _unknown_177[15];
        unsigned int field_192;
        uint8_t _unknown_196[4];
        unsigned long field_200;
    };

    class SimpleAllocator::AllocatedBlock {
    public:
        AllocatedBlock(BlockState blockState, void* arg2, unsigned long arg3);
        AllocatedBlock();

    private:
        BlockState field_0;
        uint8_t _unknown_4[4];
        void* field_8;
        unsigned long field_16;
    };

    class SimpleAllocator::FreeListEntry {
    public:
        FreeListEntry(const AllocatedBlock& allocatedBlock, const int* arg2);

    private:
        uint64_t field_0;
        void* field_8;
        unsigned long field_16;
        int* field_24;
    };

    // 0x1008d5570
    void SimpleAllocator::IsAddressAllocated(const void* arg1) const {
        AllocatedBlock local_30;

        GetBlock(&local_30, this, arg1);
        IsAllocated(local_30);
    }

    // 0x1008dc670
    graphics::SpriteAtlasReference*
    placement_new<graphics::SpriteAtlasReference, shared_ptr<graphics::SpriteAtlas> const&, int, long long&>(
        void* arg1, const shared_ptr<graphics::SpriteAtlas>& spriteAtlas, int&& arg3, long long& arg4) {
        new (arg1) graphics::SpriteAtlasReference(spriteAtlas, arg3, arg4);
        return arg1;
    }

    // 0x1008dc690
    MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048>>*
    placement_new<
        MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048>>,
        MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData*&, graphics::SpriteAtlasReference*>(
        void* arg1, MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData*& arg2,
        graphics::SpriteAtlasReference*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                            MakeSharedPool<graphics::SpriteAtlasReference, 2048>>(arg2, arg3);
        return arg1;
    }

    // 0x1008dcd40
    MakeSharedPoolRefCounter<graphics::SpriteAtlasReference, MakeSharedPool<graphics::SpriteAtlasReference, 2048>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::SpriteAtlasReference* spriteAtlasReference)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bf8 + 16;
        *(void**)(this + 16) = arg1;
        *(SpriteAtlasReference**)(this + 24) = spriteAtlasReference;
    }

    // 0x1008dcd80
    void MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                  MakeSharedPool<graphics::SpriteAtlasReference, 2048>>::DeleteData() {
        if (this[3]._vptr != nullptr) {
            this[3]._vptr->~pair();
            this[3]._vptr = nullptr;
        }
    }

    // 0x1008dcdb0
    void MakeSharedPoolRefCounter<graphics::SpriteAtlasReference,
                                  MakeSharedPool<graphics::SpriteAtlasReference, 2048>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::SpriteAtlasReference, 2048>::deallocate(arg1);
    }

    // 0x1008dd190
    graphics::SpriteAtlasReference* placement_new<graphics::SpriteAtlasReference, decltype(nullptr), int, long long&>(
        void* arg1, decltype(nullptr)&& arg2, int&& arg3, long long& arg4) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        new (arg1) graphics::SpriteAtlasReference(local_38, arg3, arg4);
        return arg1;
    }

    // 0x1008dd2c0
    graphics::SpriteAtlas* placement_new<graphics::SpriteAtlas, graphics::TextureManager*&, int&, unsigned int,
                                         graphics::SpriteAtlasUsageType&, int&>(
        void* arg1, graphics::TextureManager*& arg2, int& arg3, unsigned int&& arg4,
        graphics::SpriteAtlasUsageType& spriteAtlasUsageType, int& arg6) {
        new (arg1) graphics::SpriteAtlas(arg2, arg3, arg4, spriteAtlasUsageType, arg6);
        return arg1;
    }

    // 0x1008dd2f0
    MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>*
    placement_new<MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>,
                  MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData*&, graphics::SpriteAtlas*>(
        void* arg1, MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData*& arg2,
        graphics::SpriteAtlas*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x1008dd380
    MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::SpriteAtlas* spriteAtlas)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ba0 + 16;
        *(void**)(this + 16) = arg1;
        *(SpriteAtlas**)(this + 24) = spriteAtlas;
    }

    // 0x1008dd3c0
    void MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>::DeleteData() {
        if (*(SpriteAtlas**)(this + 24) != nullptr) {
            (*(SpriteAtlas**)(this + 24))->~SpriteAtlas();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1008dd3f0
    void MakeSharedPoolRefCounter<graphics::SpriteAtlas, MakeSharedPool<graphics::SpriteAtlas, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::SpriteAtlas, 64>::deallocate(arg1);
    }

    // 0x100cbad80
    long SimpleAllocator::size() const {
        unsigned long uVar1 = field_0;
        return field_112.size() + uVar1;
    }

    // 0x100cbbf80
    void SimpleAllocator::GetTotalSize() {
        uint64_t* puVar1 = (uint64_t*)(*(void (*)(...))m_totalSize)();
        return *puVar1;
    }

    // 0x100cbd800
    AllocatedBlock SimpleAllocator::AllocateInRange(unsigned int& arg1, unsigned long arg2, unsigned long arg3) {
        unsigned long* puVar2;
        unsigned long uVar3;

        AllocatedBlock result;
        unsigned int uVar1 = arg1;
        if (uVar1 != 4294967295) {
            if (field_8 < arg3 + arg2) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                                "SimpleAllocator.cpp",
                                294, nullptr);
            }
            if (arg3 != 0) {
                uVar3 = 0;
                do {
                    if ((uVar1 >> ((unsigned int)uVar3 & 31) & 1) == 0) {
                        arg1 = 1 << ((uint8_t)uVar3 & 31) | uVar1;
                        &result[2] = (ReturnValue)(arg2 + uVar3);
                        result = 1;
                        &result[1] = (ReturnValue)((arg2 + uVar3) * m_slotSize + field_48);
                        field_0 = field_0 + 1;
                        puVar2 = std::max<unsigned long>(field_0, field_24);
                        field_24 = *puVar2;
                        return result;
                    }
                    uVar3 = uVar3 + 1;
                } while (arg3 != uVar3);
            }
        }
        return result;
    }

    // 0x100cbdac0
    long SimpleAllocator::GetOverflowCount() const {
        auto puVar1 = std::max<unsigned long>(field_8, field_24);
        return *puVar1 - field_8;
    }

    // 0x100cbde50
    void SimpleAllocator::SafeCheckOverflow(const void* arg1) const {
        eastl local_38;
        obj_iterator local_28;

        &local_38 = (eastl[16])field_112.find(arg1);
        &local_28 = (obj_iterator[16])field_112.end();
        local_38 != local_28;
    }

    // 0x100cbf7c0
    SimpleAllocator::AllocatedBlock::AllocatedBlock(SimpleAllocator::AllocatedBlock::BlockState blockState, void* arg2,
                                                    unsigned long arg3)
        : field_0(blockState), field_8(arg2), field_16(arg3) {}

    // 0x100cbf830
    SimpleAllocator::AllocatedBlock::AllocatedBlock() : field_0(0), field_8(nullptr), field_16(0) {}

    // 0x100cbf850
    SimpleAllocator::FreeListEntry::FreeListEntry(const SimpleAllocator::AllocatedBlock& allocatedBlock,
                                                  const int* arg2)
        : field_16(allocatedBlock.field_16) {
        void* pvVar1 = allocatedBlock.field_8;
        field_0 = *(uint64_t*)allocatedBlock;
        field_8 = pvVar1;
        field_24 = arg2;
    }

} // namespace jag

namespace jag::math {
    // 0x1008d5700
    Vector3T<double>::Vector3T(double arg1, double arg2, double arg3) {
        *(double*)this = arg1;
        *(double*)(this + 8) = arg2;
        *(double*)(this + 16) = arg3;
    }

    // 0x1008d5720
    Vector3T<double>::Vector3T<float>(const Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        *(double*)this = (double)*pfVar1;
        pfVar1 = (float*)vector3.y();
        *(double*)(this + 8) = (double)*pfVar1;
        pfVar1 = (float*)vector3.second();
        *(double*)(this + 16) = (double)*pfVar1;
    }

    // 0x1008d5780
    Vector4T<double>::Vector4T(const Vector3T<double>& vector3, double arg2) {
        auto puVar1 = vector3.SSOBeginPtr();
        *(uint64_t*)this = *puVar1;
        puVar1 = (uint64_t*)vector3.second();
        *(uint64_t*)(this + 8) = *puVar1;
        puVar1 = (uint64_t*)vector3.GetScreen();
        *(uint64_t*)(this + 16) = *puVar1;
        *(double*)(this + 24) = arg2;
    }

    // 0x1008d57e0
    Vector3T<double> operator- <double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        double* in_RDX;

        new (vector31) Vector3T(*(double*)vector32 - *in_RDX, *(double*)(vector32 + 8) - in_RDX[1],
                                *(double*)(vector32 + 16) - in_RDX[2]);
        return vector31;
    }

    // 0x1008d5820
    auto Vector3T<double>::Normalize() {
        auto result;

        double arg1 = (double)InvLength(&result);
        operator*=(&result, arg1);
        return result;
    }

    // 0x1008d5840
    Vector3T<double> Vector3Cross<double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        double* in_RDX;

        new (vector31) Vector3T(in_RDX[2] * *(double*)(vector32 + 8) - in_RDX[1] * *(double*)(vector32 + 16),
                                *(double*)(vector32 + 16) * *in_RDX - in_RDX[2] * *(double*)vector32,
                                *(double*)vector32 * in_RDX[1] - *in_RDX * *(double*)(vector32 + 8));
        return vector31;
    }

    // 0x1008d58a0
    double Vector3T<double>::InvLength() const {
        double dVar1 = (double)Length(this);
        double dVar2 = 0.0;
        if (dVar1 != 0.0) {
            dVar2 = 1.0 / dVar1;
        }
        return dVar2;
    }

    // 0x1008d58d0
    Vector3T<double>* Vector3T<double>::operator*=(double arg1) {
        *(double*)this = *(double*)this * arg1;
        *(double*)(this + 8) = *(double*)(this + 8) * arg1;
        *(double*)(this + 16) = arg1 * *(double*)(this + 16);
        return this;
    }

    // 0x1008d5900
    double Vector3T<double>::Length() const {
        double dVar1 = (double)LengthSq(this);
        return SQRT(dVar1);
    }

    // 0x1008d5910
    void Vector3T<double>::LengthSq() const {
        Vector3Dot<double>(this, this);
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1008d90e0
    SpriteAtlasMapping::SpriteAtlasMapping(SpriteAtlasMapping&& spriteAtlasMapping)
        : field_0(spriteAtlasMapping.field_0), field_8(spriteAtlasMapping.field_8),
          field_64(spriteAtlasMapping.field_64), field_72(spriteAtlasMapping.field_72),
          field_88(spriteAtlasMapping.field_88), field_104(spriteAtlasMapping.field_104) {}

    // 0x1008d9410
    SpriteAtlasMapping::SpriteAtlasMapping(const SpriteAtlasMapping& spriteAtlasMapping)
        : field_0(spriteAtlasMapping.field_0), field_8(spriteAtlasMapping.field_8),
          field_64(spriteAtlasMapping.field_64), field_72(spriteAtlasMapping.field_72),
          field_88(spriteAtlasMapping.field_88), field_104(spriteAtlasMapping.field_104) {}

    // 0x1008da4e0
    SpriteAtlasMappingExtended::~SpriteAtlasMappingExtended() {
        field_128.~shared_ptr();
    }

    // 0x1008da750
    SpriteAtlasMappingExtended::SpriteAtlasMappingExtended(SpriteAtlasMappingExtended&& spriteAtlasMappingExtended)
        : SpriteAtlasMapping(spriteAtlasMappingExtended) {
        uint64_t uVar1 = spriteAtlasMappingExtended.field_120;
        field_112 = spriteAtlasMappingExtended.field_112;
        field_120 = uVar1;
        field_128.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(spriteAtlasMappingExtended.field_128);
    }

    // 0x1008da930
    SpriteAtlasMappingExtended::SpriteAtlasMappingExtended() : SpriteAtlasMapping() {
        new (&field_128) shared_ptr();
    }

} // namespace jag::graphics

// 0x1008d5610
void tan(float arg1) {
    _tanf();
}

// 0x1008d6a30
void round(float arg1) {
    _roundf();
}
