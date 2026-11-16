// libs/oldscape/rs2lib/util/CoordMapSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "CoordMapSquare.h"

namespace jag::oldscape::rs2lib {
    // 0x100d3fc70
    int32_t CoordMapSquare::CoordMapSquareNull[8] = {-1, -1, 0, 1, 2, 3, 4, 5};

    // 0x100073980: CoordMapSquare::GetZ() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x1000b9960: CoordMapSquare::GetX() const has the same machine code as ScriptVarType::GetID() const

    // 0x10012cae0: CoordMapSquare::CoordMapSquare(int, int) has the same machine code as sidebars::SideBarData::SideBarData(int, int)

    // 0x1001fc290
    CoordMapSquare::CoordMapSquare(const CoordZoneSource& coordZoneSource) {
        unsigned int uVar1 = coordZoneSource.GetMapSquareX();
        m_x = uVar1;
        uVar1 = coordZoneSource.GetMapSquareZ();
        m_z = uVar1;
    }

    // 0x1001fc2d0
    CoordMapSquare::CoordMapSquare(const CoordGrid& coordGrid) {
        unsigned int uVar1 = coordGrid.GetMapSquareX();
        m_x = uVar1;
        uVar1 = coordGrid.GetMapSquareZ();
        m_z = uVar1;
    }

} // namespace jag::oldscape::rs2lib
