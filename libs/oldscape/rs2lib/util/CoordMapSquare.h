// libs/oldscape/rs2lib/util/CoordMapSquare.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib {
    class CoordMapSquare {
    public:
        bool IsSource() const;
        uint GetZ() const;
        uint GetX() const;
        CoordMapSquare();
        CoordMapSquare(int, int);
        operator==(CoordMapSquare const&) const;
        CoordMapSquare(CoordZoneSource const&);
        CoordMapSquare(CoordGrid const&);
        static /* 32 bytes */ CoordMapSquareNull; // = { -1, -1, 0, 1, 2, 3, 4, 5 }

        // data members, from how the methods use this: 12 bytes
        uint m_x; // offset 0
        uint m_z; // offset 4
        char _unknown_8[4];
    };

    // 0x100015930, 32 bytes, inline, placed by class name and debug map
    // CoordMapSquare::IsSource() const
    bool CoordMapSquare::IsSource() {
        if (m_x < 100) {
            return m_z < 256;
        }
        return false;
    }

    // 0x1000e51c0, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordMapSquare::CoordMapSquare(): jumps straight to the base-object constructor

    // 0x1000e53d0, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordMapSquare::CoordMapSquare(int, int): jumps straight to the base-object constructor

    // 0x1000e5b50, 32 bytes, inline, placed by class name
    // CoordMapSquare::operator==(CoordMapSquare const&) const
    /* jagex3::Js5RequestKey::TEMPNAMEPLACEHOLDERVALUE(jagex3::Js5RequestKey
   const&) const */

    undefined4 jagex3::Js5RequestKey::operator==(Js5RequestKey* param_1) {
        if (field_0 == param_1->field_0) {
            return CONCAT31((int3)((uint)field_4 >> 8), field_4 == param_1->field_4);
        }
        return 0;
    }

    // 0x10012d620, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordMapSquare::CoordMapSquare()
    /* game::PlayerModelWearSlot::PlayerModelWearSlot() */

    void game::PlayerModelWearSlot::PlayerModelWearSlot() {
        field_0 = 18446744073709551615;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::ui {
    // 0x1000e53d0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    ServerActiveProperties::ServerActiveProperties(unsigned int, int);

    // 0x1000e53d0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, ComponentMultiValueMixin::ValueChangeEvent::Type);

    // 0x1000e53d0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, bool);

} // namespace jag::ui

namespace jag::game {
    // 0x1000e51c0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(), which has identical code
    PlayerModelWearSlot::PlayerModelWearSlot();

    // 0x10012d620: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(), which has identical code
    PlayerModelWearSlot::PlayerModelWearSlot();

} // namespace jag::game

namespace jag {
    // 0x1000e53d0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    DebugDataBasic::DebugDataBasic(unsigned int, unsigned int);

} // namespace jag

namespace jag::oldscape::sidebars {
    // 0x1000e53d0: the linker folded this into rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    SideBarData::SideBarData(int, int);

} // namespace jag::oldscape::sidebars
