// libs/core/utils/Endianness.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.core

#include "Endianness.h"

namespace jag {
    // 0x100cc5bf0, 16 bytes, placed by debug map only (low confidence)
    // IsLittleEndian()
    undefined1 IsLittleEndian() {
        return 1;
    }

    // 0x100cc5c00, 16 bytes, placed by debug map only (low confidence)
    // IsBigEndian()
    undefined8 IsBigEndian() {
        return 0;
    }

} // namespace jag
