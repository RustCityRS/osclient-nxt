// libs/jtl/allocator/PoolAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

namespace jag {
    class PoolAllocator {
    public:
        PoolAllocator(unsigned long, unsigned long, unsigned long);
        void Clear();
        ~PoolAllocator();
        void Reserve(unsigned long);
        void* Alloc(unsigned int*);
        void Free(void*);

        // data members, from how the methods use this: 48 bytes
        ulong field_0;       // offset 0
        long field_8;        // offset 8
        ulong field_16;      // offset 16
        ulong field_24;      // offset 24
        void* field_32;      // offset 32
        undefined1 field_40; // offset 40
        char _unknown_41[7];
    };

    // 0x100cbc5a0, 208 bytes, base-object constructor, placed by class name and debug map
    // PoolAllocator::PoolAllocator(unsigned long, unsigned long, unsigned long)
    void PoolAllocator::PoolAllocator(ulong param_1, ulong param_2, ulong param_3) {
        ulong uVar2;
        char* this_00;
        allocator local_30[8];

        field_0 = param_1;
        field_8 = 0;
        field_16 = param_3;
        uVar2 = (param_2 + param_3) - 1;
        uVar2 = uVar2 - uVar2 % param_3;
        field_24 = uVar2;
        field_32 = (void*)aligned_malloc(uVar2 * param_1, param_3);
        eastl::allocator::allocator(local_30, "EASTL vector");
        new (&field_40, param_1, local_30) eastl::vector<unsigned int, eastl::allocator>();
        if (field_32 == (void*)0) {
            this_00 = "m_memoryBuffer != nullptr";
            LogFatalError(
                "m_memoryBuffer != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                16, 0, "Failed to allocate %zu bytes", param_1 * field_24);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        Clear(this);
    }

    // 0x100cbc680, 112 bytes, placed by class name and debug map
    // PoolAllocator::Clear()
    void PoolAllocator::Clear() {
        ulong uVar1;
        int* piVar2;
        ulong uVar3;
        int iVar4;

        uVar1 = field_0;
        field_8 = 0;
        eastl::vector<unsigned int, eastl::allocator>::resize((ulong)&field_40);
        if (uVar1 != 0) {
            iVar4 = (int)uVar1;
            uVar3 = 0;
            do {
                iVar4 = iVar4 + -1;
                piVar2 = (int*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                    (vector<unsigned int, eastl::allocator>*)&field_40, uVar3);
                *piVar2 = iVar4;
                uVar3 = uVar3 + 1;
            } while (uVar3 != uVar1);
        }
    }

    // 0x100cbc6f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // PoolAllocator::PoolAllocator(unsigned long, unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100cbc700, 48 bytes, base-object destructor, placed by class name and debug map
    // PoolAllocator::~PoolAllocator()
    void PoolAllocator::~PoolAllocator() {
        _free(field_32);
        (&field_40)->~vector();
    }

    // 0x100cbc730, 16 bytes, complete-object destructor, placed by class name and debug map
    // PoolAllocator::~PoolAllocator(): jumps straight to the base-object destructor

    // 0x100cbc740, 128 bytes, placed by class name and debug map
    // PoolAllocator::Reserve(unsigned long)
    void PoolAllocator::Reserve(ulong param_1) {
        void* pvVar1;
        char* this_00;

        field_0 = param_1;
        _free(field_32);
        pvVar1 = (void*)aligned_malloc(field_24 * param_1, field_16);
        field_32 = pvVar1;
        if (pvVar1 == (void*)0) {
            this_00 = "m_memoryBuffer != nullptr";
            LogFatalError(
                "m_memoryBuffer != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                31, 0, "Failed to allocate %zu bytes", param_1 * field_24);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        eastl::vector<unsigned int, eastl::allocator>::resize((ulong)&field_40);
        Clear(this);
    }

    // 0x100cbc810, 96 bytes, placed by class name and debug map
    // PoolAllocator::Alloc(unsigned int*)
    void* PoolAllocator::Alloc(uint* param_1) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        uint* puVar3;
        void* pvVar4;

        this_00 = &field_40;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            puVar3 = (uint*)this_00->back();
            uVar1 = *puVar3;
            this_00->pop_back();
            field_8 = field_8 + 1;
            if (param_1 != (uint*)0) {
                *param_1 = uVar1;
            }
            pvVar4 = (void*)(field_24 * (ulong)uVar1 + (long)field_32);
        } else {
            pvVar4 = (void*)0;
        }
        return pvVar4;
    }

    // 0x100cbc8e0, 224 bytes, placed by class name and debug map
    // PoolAllocator::Free(void*)
    void PoolAllocator::Free(void* param_1) {
        ulong uVar1;
        uint local_1c;

        if (param_1 < field_32) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr >= m_memoryBuffer",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                59, (char*)0);
        }
        if ((ulong)param_1 % field_16 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "reinterpret_cast<ptrdiff_t>(ptr) % m_alignment == 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                60, (char*)0);
        }
        if (field_8 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_size > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                61, (char*)0);
        }
        uVar1 = (ulong)((long)param_1 - (long)field_32) / field_24;
        if (field_0 <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "index < m_capacity",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/PoolAllocator.cpp",
                63, (char*)0);
        }
        field_8 = field_8 + -1;
        local_1c = (uint)uVar1;
        (&field_40, &local_1c)->push_back();
    }

} // namespace jag
