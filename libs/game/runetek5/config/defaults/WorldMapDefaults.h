// libs/game/runetek5/config/defaults/WorldMapDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WorldMapDefaults {
    public:
        uint GetF2POutlineColourRGBA() const;
        uint GetF2PLayerColourRGBA() const;
        uint GetF2PLayerMapID() const;
        uint GetDropShadowColourRGBA() const;
        WorldMapDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);
        GetFontID(int, int) const;

        // data members, from how the methods use this: 32 bytes
        uint m_f2PLayerMapID;        // offset 0
        uint m_f2PLayerColourRGBA;   // offset 4
        uint m_f2POutlineColourRGBA; // offset 8
        uint field_12;               // offset 12
        uint field_16;               // offset 16
        undefined4 field_20;         // offset 20
        uint m_dropShadowColourRGBA; // offset 24
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
