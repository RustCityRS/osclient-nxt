// libs/hal/file/Filename_nonWindows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.file

#include "Filename.h"

namespace jag {
    // 0x100cb3f80, 64 bytes, placed by class name and debug map
    // Filename::IsDirectory() const
    undefined8 Filename::IsDirectory() {
        undefined8 uVar2;
        undefined1 local_98[5];
        byte local_93;

        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if ((_stat_INODE64(uVar2, local_98) != 0) || (uVar2 = 1, (local_93 & 64) == 0)) {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag
