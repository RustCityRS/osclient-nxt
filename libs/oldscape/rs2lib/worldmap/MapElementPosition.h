// libs/oldscape/rs2lib/worldmap/MapElementPosition.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class MapElementPosition {
    public:
        MapElementPosition(int arg1, const CoordGrid& coordGrid1, const CoordGrid& coordGrid2);
        MapElementPosition(const MapElementPosition& mapElementPosition);
        MapElementPosition();

    private:
        int field_0;
        uint8_t _unknown_4[20];
    };

    // 0x10002ec00
    MapElementPosition::MapElementPosition(int arg1, const CoordGrid& coordGrid1, const CoordGrid& coordGrid2)
        : field_0(arg1), field_4(coordGrid1), field_16(coordGrid2) {}

    // 0x10002ec90
    MapElementPosition::MapElementPosition(const MapElementPosition& mapElementPosition)
        : field_0(mapElementPosition.field_0), field_4(&mapElementPosition.field_4),
          field_16(&mapElementPosition.field_16) {}

    // 0x1001a2fa0
    MapElementPosition::MapElementPosition()
        : field_0(-1), field_4((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull),
          field_16((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull) {}

} // namespace jag::oldscape::rs2lib::worldmap
