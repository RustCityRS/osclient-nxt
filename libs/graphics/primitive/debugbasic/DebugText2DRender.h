// libs/graphics/primitive/debugbasic/DebugText2DRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugText2DRender {
    public:
        DebugText2DRender();
        ~DebugText2DRender();
        void OnEndFrame();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
                    eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>> const& pairs, bool arg6);
        void DestroyRenderingResources();
        static uint8_t m_debugText2DRenderCallback[48];
        static uint8_t m_debugText2DRenderGuiRenderCallback[48];

        uint8_t _unknown_0[96];
    };

    // 0x1009ccde0
    DebugText2DRender::~DebugText2DRender() {
        field_88.~IndexBuffer();
    }

} // namespace jag
