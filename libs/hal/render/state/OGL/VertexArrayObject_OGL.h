// libs/hal/render/state/OGL/VertexArrayObject_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class VertexArrayObject {
    public:
        GetLastUsageSeconds() const;
        GetNativeVAO() const;
        bool IsValid() const;
        void Create(ImmediateRenderContext&);
        void Bind(ImmediateRenderContext&) const;
        ~VertexArrayObject();
        void Destroy();
        VertexArrayObject();

        // data members, from how the methods use this: 12 bytes
        uint field_0;       // offset 0
        undefined4 field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x100c26b30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexArrayObject::VertexArrayObject(): jumps straight to the base-object constructor

} // namespace jag::render
