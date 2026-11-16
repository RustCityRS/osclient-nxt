// libs/graphics/runetek7/effects/skybox/SkyBoxRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SkyBoxRenderer {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxRenderer();
        uint8_t* GetDepthStencilState() const;
        void SetNonObliqueProjectionMatrix(const math::Matrix44T<float>& matrix44);
        void GetVertexDecl();
        void Render(const SkyBox_DE& skyBox_DE, render::RenderContext& renderContext,
                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                    RenderPassType renderPassType, EffectManager& effectManager);
        SkyBoxRenderer();
        void Destroy();
        uint8_t Initialise(RT7Core& rt7Core);
        uint64_t CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseVertexDeclaration();
        void UpdateVertexBuffer(int arg1, int arg2, const SceneViewData& sceneViewData);
        static render::VertexDeclaration m_vertexDecl; // = VertexDeclaration()

    private:
        uint8_t _unknown_8[304];
        InputAssemblerState field_312;
    };

    // 0x100468c10
    void SkyBoxRenderer::SetNonObliqueProjectionMatrix(const math::Matrix44T<float>& matrix44) {
        *m_projMatrix = matrix44;
    }

    // 0x10091ba80
    void SkyBoxRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

} // namespace jag::graphics
