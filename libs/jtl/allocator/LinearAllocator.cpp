// libs/jtl/allocator/LinearAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "LinearAllocator.h"

namespace jag {
    // 0x100cbc460
    LinearAllocator::LinearAllocator(unsigned long arg1, unsigned long arg2) : Allocator(arg2), field_48(arg1) {
        field_72 = field_48.data();
    }

    // 0x100cbc4c0
    long LinearAllocator::AllocImpl(unsigned long arg1, unsigned long arg2) {
        long lVar1 = aligned_size(field_72, arg2);
        long lVar2 = aligned_size(arg1, arg2);
        field_72 = lVar2 + lVar1;
        long lVar3 = field_48.data();
        long lVar4 = field_48.end();
        if ((unsigned long)(lVar4 + lVar3) < (unsigned long)(lVar2 + lVar1)) {
            LogAssert("m_Pointer <= m_Buffer.data() + m_Buffer.max_size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "LinearAllocator.cpp",
                      19, nullptr);
        }
        return lVar1;
    }

    // 0x100cbc570
    void LinearAllocator::FreeImpl(void* arg1, unsigned long arg2) {
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/LinearAllocator.cpp",
            25, "You may not free from a LinearAllocator");
    }

} // namespace jag

// 0x100cbc550
unsigned long aligned_size(unsigned long arg1, unsigned long arg2) {
    return (arg1 + arg2) - 1 & -arg2;
}
