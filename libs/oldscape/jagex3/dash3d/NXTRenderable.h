// libs/oldscape/jagex3/dash3d/NXTRenderable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class NXTRenderable {
    public:
        NXTRenderable();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x10031af20, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // NXTRenderable::NXTRenderable()
    void NXTRenderable::NXTRenderable() {
        field_0 = PTR_vtable_100ee8988 + 16;
    }

} // namespace jag::oldscape::dash3d
