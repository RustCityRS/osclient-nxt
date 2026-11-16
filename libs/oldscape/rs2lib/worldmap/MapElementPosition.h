// libs/oldscape/rs2lib/worldmap/MapElementPosition.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class MapElementPosition {
    public:
        MapElementPosition(int, CoordGrid const&, CoordGrid const&);
        MapElementPosition(MapElementPosition const&);
        MapElementPosition();

        // data members, from how the methods use this: 24 bytes
        int field_0; // offset 0
        char _unknown_4[20];
    };

    // 0x100026c00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MapElementPosition::MapElementPosition(int, CoordGrid const&, CoordGrid const&): jumps straight to the base-object constructor

    // 0x10002ec00, 48 bytes, base-object constructor, inline, placed by class name
    // MapElementPosition::MapElementPosition(int, CoordGrid const&, CoordGrid const&)
    void MapElementPosition::MapElementPosition(int param_1, CoordGrid* param_2, CoordGrid* param_3) {
        field_0 = param_1;
        new (&field_4, param_2) rs2lib::CoordGrid();
        new (&field_16, param_3) rs2lib::CoordGrid();
    }

    // 0x10002ec80, 16 bytes, complete-object constructor, inline, placed by class name
    // MapElementPosition::MapElementPosition(MapElementPosition const&): jumps straight to the base-object constructor

    // 0x10002ec90, 64 bytes, base-object constructor, inline, placed by class name
    // MapElementPosition::MapElementPosition(MapElementPosition const&)
    void MapElementPosition::MapElementPosition(MapElementPosition* param_1) {
        field_0 = param_1->field_0;
        new (&field_4, (CoordGrid*)&param_1->field_4) rs2lib::CoordGrid();
        new (&field_16, (CoordGrid*)&param_1->field_16) rs2lib::CoordGrid();
    }

    // 0x1001a2ba0, 16 bytes, complete-object constructor, inline, placed by class name
    // MapElementPosition::MapElementPosition(): jumps straight to the base-object constructor

    // 0x1001a2fa0, 64 bytes, base-object constructor, inline, placed by class name
    // MapElementPosition::MapElementPosition()
    void MapElementPosition::MapElementPosition() {
        field_0 = -1;
        new (&field_4, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull) rs2lib::CoordGrid();
        new (&field_16, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull) rs2lib::CoordGrid();
    }

} // namespace jag::oldscape::rs2lib::worldmap
