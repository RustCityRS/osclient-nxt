// libs/graphics/runetek7/effects/lightscattering/VolumetricScatteringEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class VolumetricScatteringEffect : public Effect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~VolumetricScatteringEffect();
        virtual void Initialise();
        virtual void IsSupported() const;
        virtual void RenderDebug(const render::Viewport& viewport) const;
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual uint64_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager);
        virtual uint64_t OnQualityChange(GraphicsQuality graphicsQuality);
        float* GetParams();
        void GetResolvedRT();
        VolumetricScatteringEffect(RT7Core& rt7Core);
        void Update(const EffectManager& effectManager, const SceneViewData& sceneViewData);
        void UpdateParams();
        unsigned long CreateRenderTargets(render::Texture::Desc desc1, render::Texture::Desc desc2, unsigned int arg3,
                                          unsigned int arg4);
        uint64_t CreateShaders();
        void CreateNoiseTexture();
        void CreateBayesianDitherTexture();
        void DestroyShaders();
        void DestroyRenderTargets();
        void SetParams(const VolumetricScatteringParams& volumetricScatteringParams, long long arg2,
                       unsigned long long arg3);
        unsigned long CreateRaymarchShader(bool arg1, int arg2, bool arg3, GraphicsQuality graphicsQuality);
        void CreateDepthDownsampleShader(bool arg1);
        unsigned long CreateBilateralBlurShader(bool arg1);
        unsigned long CreateBilateralUpsampleShader(bool arg1);
        uint32_t SetDitherTexture(const unsigned char* arg1, int arg2, int arg3);
        void CreateBlueNoiseDitherTexture();
        bool IsReady() const;
        void UsePostProcessShader(render::DrawCallState& drawCallState,
                                  const graphicutils::RenderToTextureHelper& renderToTextureHelper,
                                  const render::ShaderProgram& shaderProgram);
        unsigned long CanSkip(const EffectManager& effectManager) const;
        void Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                    const render::Texture* texture, const render::Viewport& viewport,
                    const graphicutils::RenderToTextureHelper& renderToTextureHelper);
        void SetSharedShaderConstants(render::DrawCallState& drawCallState,
                                      const render::ShaderProgram& shaderProgram) const;
        void RenderDebugImage(const render::Texture* texture, const math::Vector2T<float>& vector2, const char* str,
                              const render::Viewport& viewport, bool arg5) const;

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        bool field_24;
        uint8_t _unknown_25[1];
        bool field_26;
        bool field_27;
        bool field_28;
        bool field_29;
        uint8_t _unknown_30[2];
        uint32_t field_32;
        bool field_36;
        uint8_t field_37;
        uint8_t _unknown_38[2];
        uint32_t field_40;
        uint8_t _unknown_44[164];
        RT7Core* field_208;
        RenderTargetsManager* field_216;
        shared_ptr field_224;
        shared_ptr field_240;
        shared_ptr field_256;
        bool field_272;
        uint8_t field_273;
        uint8_t _unknown_274[6];
        shared_ptr field_280;
        shared_ptr field_296;
        shared_ptr field_312;
        shared_ptr field_328;
        uint8_t _unknown_344[200];
        int field_544;
        uint8_t _unknown_548[364];
        float m_params;
        float field_916;
        float field_920;
        float field_924;
        float field_928;
        float field_932;
        float field_936;
        float field_940;
        uint8_t _unknown_944[28];
        float field_972;
        float field_976;
        uint8_t _unknown_980[52];
    };

    // 0x1001c2260
    float* VolumetricScatteringEffect::GetParams() {
        return &m_params;
    }

    // 0x1007a7df0
    void VolumetricScatteringEffect::GetResolvedRT() {
        field_280->end();
    }

} // namespace jag::graphics
