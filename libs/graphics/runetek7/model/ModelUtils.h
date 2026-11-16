// libs/graphics/runetek7/model/ModelUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SharedVertexSkin {
    public:
        SharedVertexSkin();
    };

    // 0x10080ade0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SharedVertexSkin::SharedVertexSkin(): jumps straight to the base-object constructor

    // 0x10082d9e0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SharedVertexSkin::SharedVertexSkin()
    /* GeometryBatchVertexSkin::GeometryBatchVertexSkin() */

    void GeometryBatchVertexSkin::GeometryBatchVertexSkin() {
        new (this) callstack::Callstack();
        new (field_4) callstack::Callstack();
    }

} // namespace jag::graphics
