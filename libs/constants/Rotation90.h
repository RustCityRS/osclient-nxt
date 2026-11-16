// libs/constants/Rotation90.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10042ff90
    char const* ToText<16, true>(eastl::fixed_string<char, 16>& str, Rotation90 rotation90) {
        if ((uint8_t)rotation90 < 4) {
            str = ((&PTR_DAT_100f001e8)[(char)(uint8_t)rotation90]);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
