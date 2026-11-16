// libs/jtl/allocator/BucketAllocator.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    // 0x10019bde0
    void SafeBucketAllocatorEASTL::deallocate(void* arg1, unsigned long arg2) {
        arg1->DeAllocate(arg2, arg2);
    }

    // 0x10019bde0: BucketAllocatorEASTL::deallocate(void*, unsigned long) has the same machine code as SafeBucketAllocatorEASTL::deallocate(void*, unsigned long)

} // namespace jag
