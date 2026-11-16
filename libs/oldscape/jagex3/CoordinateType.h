// libs/oldscape/jagex3/CoordinateType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    // 0x1000f0f30, 16 bytes, inline, placed by debug map only (low confidence)
    // CoordType<UICoordSpecializer>::operator==(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    bool CoordType<UICoordSpecializer>::operator==(int param_2) {
        return *(int*)this == param_2;
    }

} // namespace jag::oldscape
