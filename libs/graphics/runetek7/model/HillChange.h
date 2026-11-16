// libs/graphics/runetek7/model/HillChange.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10042ff50, 64 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<64, true>(eastl::fixed_string<char, 64, true, eastl::allocator>&, graphics::HillChange const&)
    char* ToText<64, true>(fixed_string* param_1, HillChange* param_2) {
        if ((ulong)(long)*(int*)param_2 < 6) {
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)param_1, (&PTR_s_None_100f001b8)[*(int*)param_2]);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
