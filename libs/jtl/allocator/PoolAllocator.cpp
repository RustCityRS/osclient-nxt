// libs/jtl/allocator/PoolAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

namespace jag {
    class PoolAllocator {
    public:
        PoolAllocator(unsigned long arg1, unsigned long arg2, unsigned long arg3);
        void Clear();
        ~PoolAllocator();
        void Reserve(unsigned long arg1);
        void* Alloc(unsigned int* arg1);
        void Free(void* arg1);

    private:
        unsigned long field_0;
        long field_8;
        unsigned long field_16;
        unsigned long field_24;
        void* field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100cbc5a0
    PoolAllocator::PoolAllocator(unsigned long arg1, unsigned long arg2, unsigned long arg3)
        : field_0(arg1), field_8(0), field_16(arg3) {
        char* this_00;

        unsigned long uVar2 = (arg2 + arg3) - 1;
        uVar2 = uVar2 - uVar2 % arg3;
        field_24 = uVar2;
        field_32 = (void*)aligned_malloc(uVar2 * arg1, arg3);
        new (&field_40) eastl::vector<unsigned int>(arg1, local_30);
        if (field_32 == nullptr) {
            this_00 = "m_memoryBuffer != nullptr";
            LogFatalError(
                "m_memoryBuffer != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                16, 0, "Failed to allocate %zu bytes", arg1 * field_24);
            this_00->~OptionStore();
        }
        Clear();
    }

    // 0x100cbc680
    void PoolAllocator::Clear() {
        int* piVar1;
        unsigned long arg1_00;
        int iVar2;

        unsigned long arg1 = field_0;
        field_8 = 0;
        field_40.resize(arg1);
        if (arg1 != 0) {
            iVar2 = (int)arg1;
            arg1_00 = 0;
            do {
                iVar2 = iVar2 - 1;
                piVar1 = (int*)field_40[arg1_00];
                *piVar1 = iVar2;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != arg1);
        }
    }

    // 0x100cbc700
    PoolAllocator::~PoolAllocator() {
        _free(field_32);
        field_40.~vector();
    }

    // 0x100cbc740
    void PoolAllocator::Reserve(unsigned long arg1) {
        char* this_00;

        field_0 = arg1;
        _free(field_32);
        auto pvVar1 = aligned_malloc(field_24 * arg1, field_16);
        field_32 = pvVar1;
        if (pvVar1 == nullptr) {
            this_00 = "m_memoryBuffer != nullptr";
            LogFatalError(
                "m_memoryBuffer != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                31, 0, "Failed to allocate %zu bytes", arg1 * field_24);
            this_00->~OptionStore();
        }
        field_40.resize(arg1);
        Clear();
    }

    // 0x100cbc810
    void* PoolAllocator::Alloc(unsigned int* arg1) {
        unsigned int uVar1;
        unsigned int* puVar3;
        void* pvVar4;

        uint8_t* this_00 = &field_40;
        if (this_00->empty() == '\0') {
            puVar3 = (unsigned int*)this_00->back();
            uVar1 = *puVar3;
            this_00->pop_back();
            field_8 = field_8 + 1;
            if (arg1 != nullptr) {
                *arg1 = uVar1;
            }
            pvVar4 = (void*)(field_24 * (unsigned long)uVar1 + (long)field_32);
        } else {
            pvVar4 = nullptr;
        }
        return pvVar4;
    }

    // 0x100cbc8e0
    void PoolAllocator::Free(void* arg1) {
        if (arg1 < field_32) {
            LogAssert(
                "ptr >= m_memoryBuffer",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                59, nullptr);
        }
        if ((unsigned long)arg1 % field_16 != 0) {
            LogAssert(
                "reinterpret_cast<ptrdiff_t>(ptr) % m_alignment == 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                60, nullptr);
        }
        if (field_8 == 0) {
            LogAssert(
                "m_size > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                61, nullptr);
        }
        unsigned long uVar1 = (unsigned long)((long)arg1 - (long)field_32) / field_24;
        if (field_0 <= uVar1) {
            LogAssert(
                "index < m_capacity",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                63, nullptr);
        }
        field_8 = field_8 - 1;
        field_40.push_back((unsigned int)uVar1);
    }

} // namespace jag
