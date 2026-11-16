// libs/graphics/runetek7/particles/ParticleMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ParticleCommonMaterials {
    public:
        void Init(RT7Core& rt7Core);
        void Update(RenderPassType renderPassType, const EffectManager& effectManager,
                    const render::VertexDeclaration& vertexDeclaration);
        void UpdateForwardPassDistortionEffect(ParticleMaterial& particleMaterial, RenderPassEffect& renderPassEffect,
                                               const EffectManager& effectManager,
                                               const render::VertexDeclaration& vertexDeclaration);
        void UpdateForwardPassOverdrawEffect(ParticleMaterial& particleMaterial, RenderPassEffect& renderPassEffect,
                                             const EffectManager& effectManager,
                                             const render::VertexDeclaration& vertexDeclaration);
        void UpdateForwardPassEffect(ParticleMaterial& particleMaterial, RenderPassEffect& renderPassEffect,
                                     const EffectManager& effectManager,
                                     const render::VertexDeclaration& vertexDeclaration);
        void UpdateShadowPassEffect(ParticleMaterial& particleMaterial, RenderPassEffect& renderPassEffect,
                                    const EffectManager& effectManager,
                                    const render::VertexDeclaration& vertexDeclaration);
        ParticleCommonMaterials();
        ~ParticleCommonMaterials();
        void GetMaterial(ParticleMaterial::MaterialType materialType) const;
        uint32_t GetTextureUnitAtlas() const;
        uint32_t GetTextureUnitAtlasSettings() const;
        void FlagDirty();

    private:
        PostProcessController* field_0;
        uint64_t field_8;
        uint8_t _unknown_16[3360];
        RenderPassType field_3376;
        uint32_t m_textureUnitAtlas;
        uint32_t m_textureUnitAtlasSettings;
        uint8_t _unknown_3388[4];
    };

    class ParticleMaterial {
    public:
        // virtual methods in vtable order
        virtual ~ParticleMaterial();
        void SetTextureAtlasReference(const shared_ptr<TextureAtlasReference>& textureAtlasReference);
        void GetTextureAtlasReference() const;
        ParticleMaterial();
        ParticleMaterial(ParticleMaterial&& particleMaterial);
        ParticleMaterial(const ParticleMaterial& particleMaterial);
        ParticleMaterial* operator=(const ParticleMaterial& particleMaterial);
        void InitRenderPassEffects(MaterialType materialType);
        uint32_t GetSoftScale() const;

    private:
        uint64_t field_8;
        uint8_t* field_16;
        uint8_t* field_24;
        unsigned char field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint32_t field_40;
        uint8_t _unknown_44[484];
        Callstack field_528;
        uint8_t _unknown_544[8];
        uint32_t m_softScale;
        uint8_t _unknown_556[4];
    };

    // 0x1007d0710
    void ParticleCommonMaterials::UpdateForwardPassDistortionEffect(
        ParticleMaterial& particleMaterial, RenderPassEffect& renderPassEffect, const EffectManager& effectManager,
        const render::VertexDeclaration& vertexDeclaration) {
        uint8_t arg2;
        unsigned long extraout_RDX;

        bool cVar2 = effectManager.IsEnabled(104);
        if (!cVar2) {
            return;
        }
        cVar2 = effectManager.IsEnabled(103);
        if ((!cVar2) || (cVar2 = effectManager.IsEnabled(108), !cVar2)) {
            arg2 = false;
        } else {
            arg2 = particleMaterial.GetOption(1);
        }
        uint64_t uVar1 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = (char)uVar1;
        renderPassEffect.field_17 = (char)((unsigned long)uVar1 >> 8);
        renderPassEffect.field_18 = (char)((unsigned long)uVar1 >> 16);
        renderPassEffect.field_19 = (char)((unsigned long)uVar1 >> 24);
        renderPassEffect.field_20 = (char)((unsigned long)uVar1 >> 32);
        renderPassEffect.field_21 = (int32_t)((unsigned long)uVar1 >> 40);
        renderPassEffect.field_24 = extraout_RDX;
        renderPassEffect.field_16.Set(103, (bool)arg2);
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)field_8, *13,
                                       (RenderPassType)vertexDeclaration, '\x04');
    }

    // 0x1007d07e0
    void ParticleCommonMaterials::UpdateForwardPassOverdrawEffect(ParticleMaterial& particleMaterial,
                                                                  RenderPassEffect& renderPassEffect,
                                                                  const EffectManager& effectManager,
                                                                  const render::VertexDeclaration& vertexDeclaration) {
        uint8_t auVar1[16];

        auVar1 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar1[0];
        renderPassEffect.field_17 = auVar1[1];
        renderPassEffect.field_18 = auVar1[2];
        renderPassEffect.field_19 = auVar1[3];
        renderPassEffect.field_20 = auVar1[4];
        renderPassEffect.field_21 = auVar1._5_3_;
        renderPassEffect.field_24 = auVar1._8_8_;
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)field_8, *14,
                                       (RenderPassType)vertexDeclaration, '\x04');
    }

    // 0x1007d0840
    void ParticleCommonMaterials::UpdateForwardPassEffect(ParticleMaterial& particleMaterial,
                                                          RenderPassEffect& renderPassEffect,
                                                          const EffectManager& effectManager,
                                                          const render::VertexDeclaration& vertexDeclaration) {
        uint8_t auVar5[16];

        bool cVar1 = effectManager.IsEnabled(108);
        bool cVar2 = effectManager.IsEnabled(103);
        uint8_t arg2 = false;
        if ((cVar2) && (cVar1)) {
            arg2 = particleMaterial.GetOption(1);
        }
        cVar1 = effectManager.IsEnabled(105);
        bool arg2_00 = true;
        uint8_t bVar3 = true;
        if (!cVar1) {
            cVar1 = effectManager.IsEnabled(50);
            if (!cVar1) {
                arg2_00 = false;
                bVar3 = false;
            } else {
                bVar3 = ((VolumetricScatteringEffect*)effectManager.GetEffect<PlanarReflection>(50))
                            ->CanSkip(effectManager);
                bVar3 = bVar3 ^ 1;
                arg2_00 = false;
            }
        }
        renderPassEffect.Set(105, arg2_00);
        renderPassEffect.Set(29, (bool)bVar3);
        renderPassEffect.Set(30, (bool)bVar3);
        auVar5 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar5[0];
        renderPassEffect.field_17 = auVar5[1];
        renderPassEffect.field_18 = auVar5[2];
        renderPassEffect.field_19 = auVar5[3];
        renderPassEffect.field_20 = auVar5[4];
        renderPassEffect.field_21 = auVar5._5_3_;
        renderPassEffect.field_24 = auVar5._8_8_;
        long lVar4 = field_0->GetCurrentConfig();
        if (*(char*)(lVar4 + 468) == '\0') {
            renderPassEffect.field_16.Set(64, false);
        }
        renderPassEffect.field_16.Set(103, (bool)arg2);
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)field_8, *11,
                                       (RenderPassType)vertexDeclaration, '\x04');
    }

    // 0x1007d09a0
    void ParticleCommonMaterials::UpdateShadowPassEffect(ParticleMaterial& particleMaterial,
                                                         RenderPassEffect& renderPassEffect,
                                                         const EffectManager& effectManager,
                                                         const render::VertexDeclaration& vertexDeclaration) {
        uint8_t auVar1[16];

        auVar1 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar1[0];
        renderPassEffect.field_17 = auVar1[1];
        renderPassEffect.field_18 = auVar1[2];
        renderPassEffect.field_19 = auVar1[3];
        renderPassEffect.field_20 = auVar1[4];
        renderPassEffect.field_21 = auVar1._5_3_;
        renderPassEffect.field_24 = auVar1._8_8_;
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)field_8, *12,
                                       (RenderPassType)vertexDeclaration, '\0');
    }

    // 0x1007d5b60
    uint32_t ParticleMaterial::GetSoftScale() const {
        return m_softScale;
    }

    // 0x1007e6240
    ParticleMaterial::~ParticleMaterial() {
        ((field_528 + 8))->~shared_ptr();
    }

} // namespace jag::graphics
