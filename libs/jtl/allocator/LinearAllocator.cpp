// libs/jtl/allocator/LinearAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "LinearAllocator.h"

namespace jag {
    // 0x100cbc460, 80 bytes, base-object constructor, placed by class name and debug map
    // LinearAllocator::LinearAllocator(unsigned long, unsigned long)
    void LinearAllocator::LinearAllocator(ulong param_1, ulong param_2) {
        long lVar1;

        new (this) Allocator(param_2);
        field_0 = &PTR__LinearAllocator_100f2a270;
        new (&field_48, param_1) Array<unsigned char, eastl::allocator>();
        lVar1 = (&field_48)->data();
        field_72 = lVar1;
    }

    // 0x100cbc4b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // LinearAllocator::LinearAllocator(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100cbc4c0, 144 bytes, placed by class name and debug map
    // LinearAllocator::AllocImpl(unsigned long, unsigned long)
    long LinearAllocator::AllocImpl(ulong param_1, ulong param_2) {
        long lVar1;
        long lVar2;
        long lVar3;
        long lVar4;

        lVar1 = aligned_size(field_72, param_2);
        lVar2 = aligned_size(param_1, param_2);
        field_72 = lVar2 + lVar1;
        lVar3 = (&field_48)->data();
        lVar4 = (&field_48)->end();
        if ((ulong)(lVar4 + lVar3) < (ulong)(lVar2 + lVar1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Pointer <= m_Buffer.data() + m_Buffer.max_size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "LinearAllocator.cpp",
                      19, (char*)0);
        }
        return lVar1;
    }

    // 0x100cbc570, 48 bytes, placed by class name and debug map
    // LinearAllocator::FreeImpl(void*, unsigned long)
    void LinearAllocator::FreeImpl(void* param_1, ulong param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/LinearAllocator.cpp",
            25, "You may not free from a LinearAllocator");
    }

} // namespace jag

// 0x100cbc550, 32 bytes, inline, placed by debug map only (low confidence)
// aligned_size(unsigned long, unsigned long)
ulong aligned_size(ulong param_1, ulong param_2) {
    return (param_1 + param_2) - 1 & -param_2;
}
