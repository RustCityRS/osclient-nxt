// libs/hal/file/Filename_nonWindows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.file

#include "Filename.h"

namespace jag {
    // 0x100cb3f80
    bool Filename::IsDirectory() const {
        uint8_t local_98[5];
        uint8_t local_93;

        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if ((_stat_INODE64(uVar2, local_98) != 0) || (uVar2 = 1, (local_93 & 64) == 0)) {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag
