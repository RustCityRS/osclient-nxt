// libs/graphics/runetek7/effects/irradiance/LightProbeRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LightProbeRenderer {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeRenderer();
        void GetNumFreeLightProbeResources() const;
        unsigned long InitialiseLightProbe(LightProbe& lightProbe);
        void GetVertexDecl();
        LightProbeRenderer(unsigned long arg1);
        void Destroy();
        void Initialise(RT7Core& rt7Core);
        uint8_t CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseVertexDeclaration();
        void InitialiseSphereVertices();
        uint32_t InitialiseLightProbeResources(shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets);
        uint32_t GetProbeEnvMapRes() const;
        void Render(const LightProbe_DE& lightProbe_DE, render::RenderContext& renderContext,
                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                    RenderPassType renderPassType, EffectManager& effectManager);
        void RecycleRenderingResources(LightProbe& lightProbe);
        static render::VertexDeclaration m_vertexDecl; // = VertexDeclaration()
        static bool m_enableResourceRecycling;

    private:
        uint8_t _unknown_8[192];
        unsigned int field_200;
        unsigned int field_204;
        uint8_t _unknown_208[48];
        uint32_t m_probeEnvMapRes;
        uint8_t _unknown_260[1044];
    };

    // 0x1004797a0
    void LightProbeRenderer::GetNumFreeLightProbeResources() const {
        field_1296.size();
    }

    // 0x10092fc20
    void LightProbeRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

    // 0x100930be0
    uint32_t LightProbeRenderer::GetProbeEnvMapRes() const {
        return m_font12pxBoldID;
    }

} // namespace jag::graphics
