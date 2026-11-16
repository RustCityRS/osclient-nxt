// libs/graphics/runetek5/BillboardRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardRaw {
    public:
        bool IsValid() const;
        void Decode(PacketT<Array<unsigned char>>& arg1);
        BillboardRaw();

    private:
        uint8_t m_valid;
        uint8_t _unknown_1[3];
        unsigned int field_4;
        unsigned int field_8;
        unsigned int field_12;
        uint8_t* field_16;
        uint8_t* field_24;
        uint8_t field_32;
        uint8_t field_33;
        uint8_t _unknown_34[6];
    };

    // 0x100998c80
    BillboardRaw::BillboardRaw() : m_valid(0), field_4(4294967295), field_8(64), field_12(64) {
        field_16 = BlendMode::MULTIPLY;
        field_24 = BlendMode::NORMAL;
        field_32 = 0;
        field_33 = 0;
    }

} // namespace jag::graphics
