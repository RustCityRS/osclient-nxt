// libs/graphics/runetek7/model/HillChange.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10042ff50
    char const* ToText<64, true>(eastl::fixed_string<char, 64>& str, const graphics::HillChange& hillChange) {
        if ((unsigned long)(long)*(int*)hillChange < 6) {
            str = ((&PTR_s_None_100f001b8)[*(int*)hillChange]);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
