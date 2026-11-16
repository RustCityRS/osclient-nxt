// libs/graphics/runetek5/BillboardRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardRaw {
    public:
        IsValid() const;
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        BillboardRaw();

        // data members, from how the methods use this: 40 bytes
        undefined1 m_valid; // offset 0
        char _unknown_1[3];
        uint field_4;        // offset 4
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        undefined* field_16; // offset 16
        undefined* field_24; // offset 24
        undefined1 field_32; // offset 32
        undefined1 field_33; // offset 33
        char _unknown_34[6];
    };

    // 0x100998c70, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BillboardRaw::BillboardRaw(): jumps straight to the base-object constructor

    // 0x100998c80, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // BillboardRaw::BillboardRaw()
    void BillboardRaw::BillboardRaw() {
        m_valid = 0;
        field_4 = 4294967295;
        field_8 = 64;
        field_12 = 64;
        field_16 = BlendMode::MULTIPLY;
        field_24 = BlendMode::NORMAL;
        field_32 = 0;
        field_33 = 0;
    }

} // namespace jag::graphics
