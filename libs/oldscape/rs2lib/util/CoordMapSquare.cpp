// libs/oldscape/rs2lib/util/CoordMapSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "CoordMapSquare.h"

namespace jag::oldscape::rs2lib {
    // 0x100d3fc70, 32 bytes, __const
    CoordMapSquare::CoordMapSquareNull = {-1, -1, 0, 1, 2, 3, 4, 5};

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    uint CoordMapSquare::GetZ() const;

    // 0x1000b9960: the linker folded this into ScriptVarType::GetID() const, which has identical code
    uint CoordMapSquare::GetX() const;

    // 0x10012cae0: the linker folded this into sidebars::SideBarData::SideBarData(int, int), which has identical code
    CoordMapSquare::CoordMapSquare(int, int);

    // 0x1001fc290, 48 bytes, base-object constructor, placed by class name and debug map
    // CoordMapSquare::CoordMapSquare(CoordZoneSource const&)
    void CoordMapSquare::CoordMapSquare(CoordZoneSource* param_1) {
        uint uVar1;

        uVar1 = param_1->GetMapSquareX();
        m_x = uVar1;
        uVar1 = param_1->GetMapSquareZ();
        m_z = uVar1;
    }

    // 0x1001fc2c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordMapSquare::CoordMapSquare(CoordZoneSource const&): jumps straight to the base-object constructor

    // 0x1001fc2d0, 48 bytes, base-object constructor, placed by class name and debug map
    // CoordMapSquare::CoordMapSquare(CoordGrid const&)
    void CoordMapSquare::CoordMapSquare(CoordGrid* param_1) {
        uint uVar1;

        uVar1 = param_1->GetMapSquareX();
        m_x = uVar1;
        uVar1 = param_1->GetMapSquareZ();
        m_z = uVar1;
    }

    // 0x1001fc320, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordMapSquare::CoordMapSquare(CoordGrid const&): jumps straight to the base-object constructor

} // namespace jag::oldscape::rs2lib
