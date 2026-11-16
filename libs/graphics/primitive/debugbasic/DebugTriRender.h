// libs/graphics/primitive/debugbasic/DebugTriRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugTriRender {
    public:
        DebugTriRender(int);
        ~DebugTriRender();
        void OnEndFrame();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void DestroyRenderingResources();
        CreateRenderingResources();

        // data members, from how the methods use this: 392 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        char _unknown_24[176];
        InputAssemblerState field_200; // offset 200
    };

    // 0x1009c9320, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugTriRender::~DebugTriRender(): jumps straight to the base-object destructor

    // 0x1009cd290, 112 bytes, base-object destructor, inline, placed by class name
    // DebugTriRender::~DebugTriRender()
    void DebugTriRender::~DebugTriRender() {
        DestroyRenderingResources(this);
        field_200->~InputAssemblerState();
        (&field_112)->~IndexBuffer();
        (&field_24)->~DynamicBuffer();
        ~Array();
    }

} // namespace jag
