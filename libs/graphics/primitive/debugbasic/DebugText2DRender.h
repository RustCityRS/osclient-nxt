// libs/graphics/primitive/debugbasic/DebugText2DRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugText2DRender {
    public:
        DebugText2DRender();
        ~DebugText2DRender();
        void OnEndFrame();
        void Render(render::RenderContext&, render::DrawCallState const&, render::Viewport const&,
                    math::Matrix44T<float> const&,
                    eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator> const&,
                    bool);
        void DestroyRenderingResources();
        static /* 48 bytes */ m_debugText2DRenderCallback;
        static /* 48 bytes */ m_debugText2DRenderGuiRenderCallback;

        // data members, from how the methods use this: 96 bytes
        char _unknown_0[96];
    };

    // 0x1009c92a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugText2DRender::~DebugText2DRender(): jumps straight to the base-object destructor

    // 0x1009ccde0, 48 bytes, base-object destructor, inline, placed by class name
    // DebugText2DRender::~DebugText2DRender()
    void DebugText2DRender::~DebugText2DRender() {
        (&field_88)->~IndexBuffer();
        ~DynamicBuffer();
    }

} // namespace jag
