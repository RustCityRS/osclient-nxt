// libs/game/runetek5/config/defaults/WorldMapDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WorldMapDefaults {
    public:
        GetF2POutlineColourRGBA() const;
        GetF2PLayerColourRGBA() const;
        GetF2PLayerMapID() const;
        GetDropShadowColourRGBA() const;
        WorldMapDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);
        GetFontID(int, int) const;

        // data members, from how the methods use this: 32 bytes
        undefined4 field_0;  // offset 0
        uint field_4;        // offset 4
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        uint field_16;       // offset 16
        undefined4 field_20; // offset 20
        uint field_24;       // offset 24
        char _unknown_28[4];
    };

    // 0x1003cf2a0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WorldMapDefaults::GetDropShadowColourRGBA() const
    /* option::Option<option::EnumBrightness>::GetValue() const */

    undefined4 option::Option<option::EnumBrightness>::GetValue() {
        return *(undefined4*)(this + 24);
    }

    // 0x1003cfcd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OpObjValue::OpObjValue(): jumps straight to the base-object constructor

    // 0x1003cfce0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // OpObjValue::~OpObjValue(): jumps straight to the base-object destructor

} // namespace jag::game
