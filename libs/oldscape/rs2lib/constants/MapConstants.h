// libs/oldscape/rs2lib/constants/MapConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::constants {
    class MapConstants {
    public:
        bool IsRegionCoord(int arg1);
    };

    // 0x10012d990
    bool MapConstants::IsRegionCoord(int arg1) {
        return 6399 < arg1;
    }

} // namespace jag::oldscape::constants
