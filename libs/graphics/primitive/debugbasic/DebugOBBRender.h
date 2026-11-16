// libs/graphics/primitive/debugbasic/DebugOBBRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugOBBRender {
    public:
        DebugOBBRender(int);
        ulong CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void OnEndFrame();
        ~DebugOBBRender();

        // data members, from how the methods use this: 672 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        char _unknown_24[264];
        InputAssemblerState field_288; // offset 288
        InputAssemblerState field_480; // offset 480
    };

    // 0x1009c9300, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugOBBRender::~DebugOBBRender(): jumps straight to the base-object destructor

    // 0x1009cd150, 160 bytes, base-object destructor, inline, placed by class name
    // DebugOBBRender::~DebugOBBRender()
    void DebugOBBRender::~DebugOBBRender() {
        DestroyRenderingResources(this);
        field_480->~InputAssemblerState();
        field_288->~InputAssemblerState();
        (&field_200)->~IndexBuffer();
        (&field_112)->~IndexBuffer();
        (&field_24)->~DynamicBuffer();
        ~Array();
    }

} // namespace jag
