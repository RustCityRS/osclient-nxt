// libs/oldscape/jagex3/CoordinateType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    // 0x1000f0f30
    bool CoordType<UICoordSpecializer>::operator==(CoordType<UICoordSpecializer> coordType) const {
        return *(int*)this == (int)coordType;
    }

} // namespace jag::oldscape
