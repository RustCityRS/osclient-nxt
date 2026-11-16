// libs/graphics/primitive/debugbasic/DebugRect2DRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugRect2DRender {
    public:
        DebugRect2DRender(int arg1);
        ~DebugRect2DRender();
        void OnEndFrame();
        void RenderRect2DGroup(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                               unsigned int arg3, unsigned int arg4, const render::Viewport& viewport,
                               const math::Matrix44T<float>& matrix44,
                               eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>> const& pairs,
                               bool arg8);
        void DestroyRenderingResources();
        uint64_t CreateRenderingResources();
        void RenderBatch(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                         const math::Matrix44T<float>& matrix44, unsigned long arg4);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        int field_24;
        int field_28;
        uint8_t _unknown_32[176];
        InputAssemblerState field_208;
    };

    // 0x1009ccd70
    DebugRect2DRender::~DebugRect2DRender() {
        DestroyRenderingResources();
        field_208->~InputAssemblerState();
        field_120.~IndexBuffer();
        field_32.~DynamicBuffer();
    }

} // namespace jag
