// libs/jtl/allocator/BucketAllocator.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    // 0x10019bde0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorEASTL::deallocate(void*, unsigned long)
    /* BucketAllocatorEASTL::deallocate(void*, unsigned long) */

    void BucketAllocatorEASTL::deallocate(void* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2);
    }

    // 0x10019bde0: the linker folded this into SafeBucketAllocatorEASTL::deallocate(void*, unsigned long), which has identical code
    BucketAllocatorEASTL::deallocate(void*, unsigned long);

} // namespace jag
