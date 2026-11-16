// libs/graphics/runetek7/terrain/TerrainOverlayShape.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~TerrainOverlayShape();
        GetID() const;
        TerrainOverlayShape(TerrainOverlayShapeType);
        void GetShape(TerrainOverlayShapeType);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[15];
    };

    // 0x10062dc60, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // TerrainOverlayShape::GetID() const
    /* TextProperties::GetHorizontalAlignment() const */

    undefined1 TextProperties::GetHorizontalAlignment() {
        return m_horizontalAlignment;
    }

} // namespace jag::graphics
