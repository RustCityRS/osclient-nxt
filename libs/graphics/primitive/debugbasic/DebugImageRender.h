// libs/graphics/primitive/debugbasic/DebugImageRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugImageRender {
    public:
        DebugImageRender(int arg1, int arg2, int arg3);
        uint64_t CreateRenderingResources();
        void DestroyRenderingResources();
        void RenderImage2DGroup(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
                                eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>> const& pairs,
                                bool arg6);
        void RenderImageCubeGroup(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                  const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
                                  eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>> const& pairs,
                                  bool arg6);
        void RenderImage3DGroup(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
                                eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>> const& pairs,
                                bool arg6);
        void OnEndFrame();
        ~DebugImageRender();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosUVCol* field_16;
        int field_24;
        uint32_t field_28;
        uint8_t _unknown_32[176];
        InputAssemblerState field_208;
        uint8_t _unknown_400[72];
    };

    // 0x1009cce10
    DebugImageRender::~DebugImageRender() {
        DestroyRenderingResources();
        field_464.~SamplerState();
        field_400.~SamplerState();
        field_208->~InputAssemblerState();
        field_120.~IndexBuffer();
        field_32.~DynamicBuffer();
    }

} // namespace jag
