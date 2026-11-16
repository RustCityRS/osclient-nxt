// libs/graphics/runetek7/particles/ParticleMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleMaterial.h"

namespace jag::graphics {
    // 0x1007b51a0: ParticleMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&) has the same machine code as TerrainMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&)

    // 0x1007b8920: ParticleMaterial::GetTextureAtlasReference() const has the same machine code as TerrainMaterial::GetTextureAtlasReference() const

    // 0x1007d0010
    ParticleMaterial::ParticleMaterial() : RenderMaterial() {
        new ((field_528 + 8)) shared_ptr();
        m_softScale = 1128792064;
        SetOption(1, true);
    }

    // 0x1007d00a0
    ParticleMaterial::ParticleMaterial(ParticleMaterial&& particleMaterial) : RenderMaterial(particleMaterial) {
        ((field_528 + 8))
            ->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((particleMaterial.field_528 + 8)));
        m_softScale = particleMaterial.m_softScale;
    }

    // 0x1007d0110
    ParticleMaterial::ParticleMaterial(const ParticleMaterial& particleMaterial) : RenderMaterial(particleMaterial) {
        new ((field_528 + 8)) shared_ptr((particleMaterial.field_528 + 8));
        m_softScale = particleMaterial.m_softScale;
    }

    // 0x1007d0180
    ParticleMaterial* ParticleMaterial::operator=(const ParticleMaterial& particleMaterial) {
        *this = particleMaterial;
        (*((field_528 + 8))) = (*((particleMaterial.field_528 + 8)));
        m_softScale = particleMaterial.m_softScale;
        return this;
    }

    // 0x1007d01c0
    void ParticleMaterial::InitRenderPassEffects(ParticleMaterial::MaterialType materialType) {
        EffectList* pEVar2;
        uint64_t* puVar3;
        bool arg2_00;
        EffectType effectType;
        uint64_t** local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint32_t local_58;
        uint64_t* local_48;
        uint64_t local_40;

        uint8_t bVar1 = GetOption(0);
        bool arg2 = (bool)(materialType == 5 | materialType == 4 | bVar1);
        if (materialType == 3) {
            puVar3 = (uint64_t*)GetRenderPassEffect(4);
            local_48 = (uint64_t*)(((uint64_t)local_48._1_7_ << 8) | (uint8_t)79);
            local_78 = &local_48;
            uStack_70 = 1;
            new (&local_68) EffectList(local_78);
            *puVar3 = local_68;
            puVar3[1] = uStack_60;
        } else {
            if (materialType == 2) {
                pEVar2 = (EffectList*)GetRenderPassEffect(4);
                local_48 = (uint64_t*)7784305273604820795;
                local_40 = (((uint64_t)local_40._3_5_ << 24) | (uint32_t)4015173);
                local_78 = &local_48;
                uStack_70 = 11;
                new (&local_68) EffectList(local_78);
                *(uint64_t*)pEVar2 = local_68;
                *(uint64_t*)(pEVar2 + 8) = uStack_60;
                effectType = 59;
                arg2_00 = arg2;
            } else {
                pEVar2 = (EffectList*)GetRenderPassEffect(4);
                local_68 = 2314601844307545915;
                uStack_60 = 7784304006468215329;
                local_58 = 1027884338;
                local_48 = &local_68;
                local_40 = 20;
                new (&local_78) EffectList(local_48);
                *(uint64_t***)pEVar2 = local_78;
                *(uint64_t*)(pEVar2 + 8) = uStack_70;
                pEVar2->Set(59, arg2);
                bVar1 = 54;
                if ((materialType & 4294967291) == 1) {
                    pEVar2->Set(54, true);
                    pEVar2->Set(48, false);
                    bVar1 = 57;
                }
                effectType = (EffectType)bVar1;
                arg2_00 = false;
            }
            pEVar2->Set(effectType, arg2_00);
        }
        uint8_t* this_00 = field_528;
        this_00->AddFormatType(4);
        pEVar2 = (EffectList*)GetRenderPassEffect(0);
        local_48 = (uint64_t*)(((uint64_t)local_48._2_6_ << 16) | (uint16_t)20283);
        local_78 = &local_48;
        uStack_70 = 2;
        new (&local_68) EffectList(local_78);
        *(uint64_t*)pEVar2 = local_68;
        *(uint64_t*)(pEVar2 + 8) = uStack_60;
        pEVar2->Set(59, arg2);
        this_00->AddFormatType(0);
        pEVar2 = (EffectList*)GetRenderPassEffect(2);
        local_68 = 2459282189542313787;
        uStack_60 = 4919433856507983466;
        local_58 = (((uint32_t)local_58._1_3_ << 8) | (uint8_t)61);
        local_48 = &local_68;
        local_40 = 17;
        new (&local_78) EffectList(local_48);
        *(uint64_t***)pEVar2 = local_78;
        *(uint64_t*)(pEVar2 + 8) = uStack_70;
        pEVar2->Set(59, arg2);
        bVar1 = 54;
        if ((materialType & 4294967291) == 1) {
            pEVar2->Set(54, true);
            pEVar2->Set(48, false);
            bVar1 = 57;
        }
        pEVar2->Set((unsigned int)bVar1, false);
        this_00->AddFormatType(2);
    }

    // 0x1007d0470
    void ParticleCommonMaterials::Init(RT7Core& rt7Core) {
        char* this_01;

        field_8 = rt7Core.GetShaderManager();
        field_0 = rt7Core.GetPostProcessController();
        if (field_8 == 0) {
            this_01 = "m_shaderManager && m_postProcessController";
            LogFatalError("m_shaderManager && m_postProcessController",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleMaterial.cpp",
                          191, 0, nullptr);
            this_01->~OptionStore();
        }
        unsigned int uVar1 = rt7Core.GetPSTextureSlotManager();
        uint32_t uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        m_textureUnitAtlas = uVar2;
        uVar1 = rt7Core.GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        m_textureUnitAtlasSettings = uVar2;
        unsigned long arg1 = 0;
        do {
            ((ParticleMaterial*)field_16[arg1])->InitRenderPassEffects((MaterialType)arg1);
            arg1 = arg1 + 1;
        } while (arg1 != 6);
    }

    // 0x1007d0540
    void ParticleCommonMaterials::Update(RenderPassType renderPassType, const EffectManager& effectManager,
                                         const render::VertexDeclaration& vertexDeclaration) {
        ParticleMaterial* particleMaterial;
        ParticleMaterial* pPVar1;
        ParticleMaterial* pPVar2;
        RenderPassEffect* pRVar3;
        ParticleMaterial* pPVar4;

        if ((field_8 == 0) || (field_0 == nullptr)) {
            LogAssert("m_shaderManager && m_postProcessController",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleMaterial.cpp",
                      204, nullptr);
        }
        if (field_3376 != renderPassType) {
            particleMaterial = (ParticleMaterial*)std::array<ParticleMaterial, 6ul>::begin();
            pPVar1 = (ParticleMaterial*)std::array<ParticleMaterial, 6ul>::end();
            if (particleMaterial != pPVar1) {
                pPVar2 = &field_16[2];
                do {
                    if (particleMaterial == pPVar2) {
                        if (renderPassType == 4) {
                            pRVar3 = (RenderPassEffect*)particleMaterial->GetRenderPassEffect(4);
                            UpdateForwardPassDistortionEffect(*particleMaterial, *pRVar3, effectManager,
                                                              vertexDeclaration);
                        }
                    } else {
                        pPVar4 = &field_16[3];
                        if (particleMaterial == pPVar4) {
                            if (renderPassType == 4) {
                                pPVar4 = (ParticleMaterial*)4;
                                pRVar3 = (RenderPassEffect*)particleMaterial->GetRenderPassEffect(4);
                                UpdateForwardPassOverdrawEffect(*pPVar4, *pRVar3, effectManager, vertexDeclaration);
                            }
                        } else if (renderPassType == 0) {
                            pPVar4 = nullptr;
                            pRVar3 = (RenderPassEffect*)particleMaterial->GetRenderPassEffect(0);
                            UpdateShadowPassEffect(*pPVar4, *pRVar3, effectManager, vertexDeclaration);
                        } else if ((renderPassType == 4) || (renderPassType == 2)) {
                            pRVar3 = (RenderPassEffect*)particleMaterial->GetRenderPassEffect(renderPassType);
                            UpdateForwardPassEffect(*particleMaterial, *pRVar3, effectManager, vertexDeclaration);
                        }
                    }
                    particleMaterial = particleMaterial + 1;
                } while (particleMaterial != pPVar1);
            }
            field_3376 = renderPassType;
        }
    }

} // namespace jag::graphics
