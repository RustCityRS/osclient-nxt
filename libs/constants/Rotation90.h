// libs/constants/Rotation90.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10042ff90, 64 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<16, true>(eastl::fixed_string<char, 16, true, eastl::allocator>&, Rotation90)
    char* ToText<16, true>(fixed_string<char, 16, true, eastl::allocator>* param_1, byte param_2) {
        if (param_2 < 4) {
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(param_1,
                                                                             (&PTR_DAT_100f001e8)[(char)param_2]);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
