// libs/oldscape/rs2lib/util/CoordMapSquare.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib {
    class CoordMapSquare {
    public:
        bool IsSource() const;
        unsigned int GetZ() const;
        unsigned int GetX() const;
        CoordMapSquare();
        CoordMapSquare(int arg1, int arg2);
        uint32_t operator==(const CoordMapSquare& point) const;
        CoordMapSquare(const CoordZoneSource& coordZoneSource);
        CoordMapSquare(const CoordGrid& coordGrid);
        static int32_t CoordMapSquareNull[8]; // = { -1, -1, 0, 1, 2, 3, 4, 5 }

    private:
        unsigned int m_x;
        unsigned int m_z;
        uint8_t _unknown_8[4];
    };

    // 0x100015930
    bool CoordMapSquare::IsSource() const {
        if (m_x < 100) {
            return m_z < 256;
        }
        return false;
    }

    // 0x1000e5b50
    uint32_t CoordMapSquare::operator==(const CoordMapSquare& point) const {
        if (field_0 == *(int*)point) {
            return field_4 == *(int*)(point + 4);
        }
        return 0;
    }

    // 0x10012d620
    CoordMapSquare::CoordMapSquare() : field_0(18446744073709551615) {}

} // namespace jag::oldscape::rs2lib

namespace jag::ui {
    // 0x1000e53d0: ServerActiveProperties::ServerActiveProperties(unsigned int, int) has the same machine code as oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int)

    // 0x1000e53d0: ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, ComponentMultiValueMixin::ValueChangeEvent::Type) has the same machine code as oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int)

    // 0x1000e53d0: ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, bool) has the same machine code as oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int)

} // namespace jag::ui

namespace jag {
    // 0x1000e53d0: DebugDataBasic::DebugDataBasic(unsigned int, unsigned int) has the same machine code as oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int)

} // namespace jag

namespace jag::oldscape::sidebars {
    // 0x1000e53d0: SideBarData::SideBarData(int, int) has the same machine code as rs2lib::CoordMapSquare::CoordMapSquare(int, int)

} // namespace jag::oldscape::sidebars

namespace jag::game {
    // 0x10012d620: PlayerModelWearSlot::PlayerModelWearSlot() has the same machine code as oldscape::rs2lib::CoordMapSquare::CoordMapSquare()

} // namespace jag::game
