// libs/graphics/primitive/debugbasic/DebugLineRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugLineRender {
    public:
        DebugLineRender(int);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void OnEndFrame();
        ~DebugLineRender();

        // data members, from how the methods use this: 304 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        char _unknown_24[88];
        InputAssemblerState field_112; // offset 112
    };

    // 0x1009c9330, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugLineRender::~DebugLineRender(): jumps straight to the base-object destructor

    // 0x1009cd300, 96 bytes, base-object destructor, inline, placed by class name
    // DebugLineRender::~DebugLineRender()
    void DebugLineRender::~DebugLineRender() {
        DestroyRenderingResources(this);
        field_112->~InputAssemblerState();
        (&field_24)->~DynamicBuffer();
        ~Array();
    }

} // namespace jag
