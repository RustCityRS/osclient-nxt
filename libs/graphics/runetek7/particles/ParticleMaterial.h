// libs/graphics/runetek7/particles/ParticleMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ParticleCommonMaterials {
    public:
        void Init(RT7Core&);
        void Update(RenderPassType, EffectManager const&, render::VertexDeclaration const&);
        void UpdateForwardPassDistortionEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&,
                                               render::VertexDeclaration const&);
        void UpdateForwardPassOverdrawEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&,
                                             render::VertexDeclaration const&);
        void UpdateForwardPassEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&,
                                     render::VertexDeclaration const&);
        void UpdateShadowPassEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&,
                                    render::VertexDeclaration const&);
        ParticleCommonMaterials();
        ~ParticleCommonMaterials();
        void GetMaterial(ParticleMaterial::MaterialType) const;
        GetTextureUnitAtlas() const;
        GetTextureUnitAtlasSettings() const;
        void FlagDirty();

        // data members, from how the methods use this: 3392 bytes
        PostProcessController* field_0; // offset 0
        undefined8 field_8;             // offset 8
        char _unknown_16[3360];
        int field_3376;                        // offset 3376
        undefined4 m_textureUnitAtlas;         // offset 3380
        undefined4 m_textureUnitAtlasSettings; // offset 3384
        char _unknown_3388[4];
    };

    class ParticleMaterial {
    public:
        // virtual methods in vtable order
        virtual ~ParticleMaterial();
        void SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&);
        void GetTextureAtlasReference() const;
        ParticleMaterial();
        ParticleMaterial(ParticleMaterial&&);
        ParticleMaterial(ParticleMaterial const&);
        ParticleMaterial* operator=(ParticleMaterial const&);
        void InitRenderPassEffects(MaterialType);
        GetSoftScale() const;

        // data members, from how the methods use this: 560 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined* field_16; // offset 16
        undefined* field_24; // offset 24
        uchar field_32;      // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[484];
        Callstack field_528; // offset 528
        char _unknown_544[8];
        undefined4 m_softScale; // offset 552
        char _unknown_556[4];
    };

    // 0x1007d0710, 208 bytes, placed by debug map only (low confidence)
    // ParticleCommonMaterials::UpdateForwardPassDistortionEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&, render::VertexDeclaration const&)
    void ParticleCommonMaterials::UpdateForwardPassDistortionEffect(ParticleMaterial* param_1,
                                                                    RenderPassEffect* param_2, EffectManager* param_3,
                                                                    VertexDeclaration* param_4) {
        char cVar2;
        undefined1 uVar3;
        undefined4 in_register_00000004;
        undefined8 extraout_RDX;

        cVar2 = param_3->IsEnabled(104);
        if (cVar2 == '\0') {
            return;
        }
        cVar2 = param_3->IsEnabled(103);
        if ((cVar2 == '\0') || (cVar2 = param_3->IsEnabled(108), cVar2 == '\0')) {
            uVar3 = 0;
        } else {
            uVar3 = param_1->GetOption(1);
        }
        param_2->field_16 = param_3->BuildShaderEffectList(param_2);
        param_2->field_24 = extraout_RDX;
        (&param_2->field_16, 103, uVar3)->Set();
        param_2->UpdateShader(param_3, field_8, 13, param_4, 4, CONCAT44(in_register_00000004, 3));
    }

    // 0x1007d07e0, 96 bytes, placed by debug map only (low confidence)
    // ParticleCommonMaterials::UpdateForwardPassOverdrawEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&, render::VertexDeclaration const&)
    void ParticleCommonMaterials::UpdateForwardPassOverdrawEffect(ParticleMaterial* param_1, RenderPassEffect* param_2,
                                                                  EffectManager* param_3, VertexDeclaration* param_4) {
        undefined1 auVar1[16];

        auVar1 = param_3->BuildShaderEffectList(param_2);
        param_2->field_16 = auVar1._0_8_;
        param_2->field_24 = auVar1._8_8_;
        param_2->UpdateShader(param_3, field_8, 14, param_4, 4, 3);
    }

    // 0x1007d0840, 352 bytes, placed by debug map only (low confidence)
    // ParticleCommonMaterials::UpdateForwardPassEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&, render::VertexDeclaration const&)
    void ParticleCommonMaterials::UpdateForwardPassEffect(ParticleMaterial* param_1, RenderPassEffect* param_2,
                                                          EffectManager* param_3, VertexDeclaration* param_4) {
        char cVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        VolumetricScatteringEffect* this_00;
        long lVar5;
        undefined8 uVar6;
        undefined1 auVar7[16];

        cVar1 = param_3->IsEnabled(108);
        cVar2 = param_3->IsEnabled(103);
        uVar3 = 0;
        if ((cVar2 != '\0') && (cVar1 != '\0')) {
            uVar3 = param_1->GetOption(1);
        }
        cVar1 = param_3->IsEnabled(105);
        uVar6 = 1;
        bVar4 = 1;
        if (cVar1 == '\0') {
            cVar1 = param_3->IsEnabled(50);
            if (cVar1 == '\0') {
                uVar6 = 0;
                bVar4 = 0;
            } else {
                this_00 = (VolumetricScatteringEffect*)EffectManager::GetEffect<PlanarReflection>(param_3, 50);
                bVar4 = this_00->CanSkip(param_3);
                bVar4 = bVar4 ^ 1;
                uVar6 = 0;
            }
        }
        param_2->Set(105, uVar6);
        param_2->Set(29, bVar4);
        param_2->Set(30, bVar4);
        auVar7 = param_3->BuildShaderEffectList(param_2);
        param_2->field_16 = auVar7._0_8_;
        param_2->field_24 = auVar7._8_8_;
        lVar5 = field_0->GetCurrentConfig();
        if (*(char*)(lVar5 + 468) == '\0') {
            (&param_2->field_16, 64, 0)->Set();
        }
        (&param_2->field_16, 103, uVar3)->Set();
        param_2->UpdateShader(param_3, field_8, 11, param_4, 4, 3);
    }

    // 0x1007d09a0, 96 bytes, placed by debug map only (low confidence)
    // ParticleCommonMaterials::UpdateShadowPassEffect(ParticleMaterial&, RenderPassEffect&, EffectManager const&, render::VertexDeclaration const&)
    void ParticleCommonMaterials::UpdateShadowPassEffect(ParticleMaterial* param_1, RenderPassEffect* param_2,
                                                         EffectManager* param_3, VertexDeclaration* param_4) {
        undefined1 auVar1[16];

        auVar1 = param_3->BuildShaderEffectList(param_2);
        param_2->field_16 = auVar1._0_8_;
        param_2->field_24 = auVar1._8_8_;
        param_2->UpdateShader(param_3, field_8, 12, param_4, 0, 3);
    }

    // 0x1007d18b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleMaterial::~ParticleMaterial(): jumps straight to the base-object destructor

    // 0x1007d5b60, 16 bytes, inline, placed by class name
    // ParticleMaterial::GetSoftScale() const
    undefined4 ParticleMaterial::GetSoftScale() {
        return m_softScale;
    }

    // 0x1007e5360, 32 bytes, deleting destructor, inline, placed by class name
    // ParticleMaterial::~ParticleMaterial()
    void ParticleMaterial::~ParticleMaterial() {
        ~ParticleMaterial(this);
        operator_delete(this);
    }

    // 0x1007e6240, 64 bytes, base-object destructor, inline, placed by class name
    // ParticleMaterial::~ParticleMaterial()
    void ParticleMaterial::~ParticleMaterial() {
        field_0 = (undefined**)(PTR_vtable_100ee87a8 + 16);
        ((field_528 + 8))->~shared_ptr();
        ~RenderMaterial();
    }

} // namespace jag::graphics
