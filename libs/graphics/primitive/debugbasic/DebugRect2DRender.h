// libs/graphics/primitive/debugbasic/DebugRect2DRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugRect2DRender {
    public:
        DebugRect2DRender(int);
        ~DebugRect2DRender();
        void OnEndFrame();
        void RenderRect2DGroup(
            render::RenderContext&, render::DrawCallState const&, unsigned int, unsigned int, render::Viewport const&,
            math::Matrix44T<float> const&,
            eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void DestroyRenderingResources();
        CreateRenderingResources();
        void RenderBatch(render::RenderContext&, render::DrawCallState const&, math::Matrix44T<float> const&,
                         unsigned long);

        // data members, from how the methods use this: 400 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        int field_24;             // offset 24
        int field_28;             // offset 28
        char _unknown_32[176];
        InputAssemblerState field_208; // offset 208
    };

    // 0x1009c9290, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugRect2DRender::~DebugRect2DRender(): jumps straight to the base-object destructor

    // 0x1009ccd70, 112 bytes, base-object destructor, inline, placed by class name
    // DebugRect2DRender::~DebugRect2DRender()
    void DebugRect2DRender::~DebugRect2DRender() {
        DestroyRenderingResources(this);
        field_208->~InputAssemblerState();
        (&field_120)->~IndexBuffer();
        (&field_32)->~DynamicBuffer();
        ~Array();
    }

} // namespace jag
