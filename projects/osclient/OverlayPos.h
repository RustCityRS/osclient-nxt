// projects/osclient/OverlayPos.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class HiddenEntityInfo {
    public:
        HiddenEntityInfo(ClientEntityID&& clientEntityID1, ClientEntityID&& clientEntityID2);

    private:
        uint16_t field_0;
        uint16_t field_2;
        int field_4;
        ClientEntityID field_8;
    };

    class OverlayPos {
    public:
        OverlayPos();

    private:
        uint8_t _unknown_0[24];
        uint8_t field_24;
    };

    // 0x100110780
    bool ClientEntityID::IsValid() const {
        return -1 < m_slotID;
    }

    // 0x100110790
    bool ClientEntityID::IsPlayer() const {
        return field_0 != 0;
    }

    // 0x10012e220
    OverlayPos::OverlayPos() : field_24(0) {}

} // namespace jag::oldscape
