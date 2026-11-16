// libs/graphics/runetek7/water/WaterPatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterPatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~WaterPatchRenderer();
        WaterPatchRenderer();
        void Destroy();
        uint64_t Initialise(RT7Core& rt7Core);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseVertexDeclaration();
        void Render(const WaterPatch_DE& waterPatch_DE, render::RenderContext& renderContext,
                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                    RenderPassType renderPassType, EffectManager& effectManager);
        void SetEffectParameters(const RenderPassEffect& renderPassEffect, EffectManager& effectManager,
                                 const WaterParameters& waterParameters, const SceneViewData& sceneViewData);
        void SetPipelineState(const RenderPassEffect& renderPassEffect, render::DrawCallState& drawCallState,
                              RenderPassType renderPassType, bool arg4, const WaterPatch_DE& waterPatch_DE);
        void GetVertexDecl();
        static render::VertexDeclaration m_vertexDeclaration; // = VertexDeclaration()

    private:
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint32_t field_20;
        uint32_t field_24;
        uint32_t field_28;
        uint32_t field_32;
        uint8_t _unknown_36[4];
    };

    // 0x1007baea0
    void WaterPatchRenderer::GetVertexDecl() {
        return &m_vertexDeclaration;
    }

} // namespace jag::graphics
