// projects/osclient/OverlayPos.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class HiddenEntityInfo {
    public:
        HiddenEntityInfo(ClientEntityID&&, ClientEntityID&&);

        // data members, from how the methods use this: 20 bytes
        undefined2 field_0;     // offset 0
        undefined2 field_2;     // offset 2
        int field_4;            // offset 4
        ClientEntityID field_8; // offset 8
    };

    class OverlayPos {
    public:
        OverlayPos();

        // data members, from how the methods use this: 25 bytes
        char _unknown_0[24];
        undefined1 field_24; // offset 24
    };

    // 0x1001103f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OverlayPos::OverlayPos(): jumps straight to the base-object constructor

    // 0x100110780, 16 bytes, inline, placed by debug map only (low confidence)
    // ClientEntityID::IsValid() const
    bool ClientEntityID::IsValid() {
        return -1 < m_slotID;
    }

    // 0x100110790, 16 bytes, inline, placed by debug map only (low confidence)
    // ClientEntityID::IsPlayer() const
    bool ClientEntityID::IsPlayer() {
        return field_0 != 0;
    }

    // 0x1001107d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // HiddenEntityInfo::HiddenEntityInfo(ClientEntityID&&, ClientEntityID&&): jumps straight to the base-object constructor

    // 0x10012e220, 16 bytes, base-object constructor, inline, placed by class name
    // OverlayPos::OverlayPos()
    void OverlayPos::OverlayPos() {
        field_24 = 0;
    }

} // namespace jag::oldscape
