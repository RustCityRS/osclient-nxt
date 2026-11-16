// libs/oldscape/rs2lib/constants/MapConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::constants {
    class MapConstants {
    public:
        bool IsRegionCoord(int);
    };

    // 0x10012d990, 16 bytes, inline, placed by class name and debug map
    // MapConstants::IsRegionCoord(int)
    bool MapConstants::IsRegionCoord(int param_1) {
        return 6399 < param_1;
    }

} // namespace jag::oldscape::constants
