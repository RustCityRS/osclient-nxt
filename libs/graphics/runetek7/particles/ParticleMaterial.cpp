// libs/graphics/runetek7/particles/ParticleMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleMaterial.h"

namespace jag::graphics {
    // 0x1007b51a0: the linker folded this into TerrainMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&), which has identical code
    ParticleMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&);

    // 0x1007b8920: the linker folded this into TerrainMaterial::GetTextureAtlasReference() const, which has identical code
    ParticleMaterial::GetTextureAtlasReference() const;

    // 0x1007d0010, 128 bytes, base-object constructor, placed by class name
    // ParticleMaterial::ParticleMaterial()
    void ParticleMaterial::ParticleMaterial() {
        _func_decltype_nullptr* in_RSI;

        new (this) RenderMaterial();
        field_0 = (undefined**)(PTR_vtable_100ee87a8 + 16);
        new ((field_528 + 8), in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_softScale = 1128792064;
        SetOption(1, true);
    }

    // 0x1007d0090, 16 bytes, complete-object constructor, placed by class name
    // ParticleMaterial::ParticleMaterial(): jumps straight to the base-object constructor

    // 0x1007d00a0, 96 bytes, base-object constructor, placed by class name
    // ParticleMaterial::ParticleMaterial(ParticleMaterial&&)
    void ParticleMaterial::ParticleMaterial(ParticleMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee87a8 + 16);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(field_528 + 8), (shared_ptr*)(param_1->field_528 + 8));
        m_softScale = param_1->m_softScale;
    }

    // 0x1007d0100, 16 bytes, complete-object constructor, placed by class name
    // ParticleMaterial::ParticleMaterial(ParticleMaterial&&): jumps straight to the base-object constructor

    // 0x1007d0110, 96 bytes, base-object constructor, placed by class name
    // ParticleMaterial::ParticleMaterial(ParticleMaterial const&)
    void ParticleMaterial::ParticleMaterial(ParticleMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee87a8 + 16);
        new ((field_528 + 8), (shared_ptr*)(param_1->field_528 + 8)) shared_ptr<oldscape::dash3d::Decor>();
        m_softScale = param_1->m_softScale;
    }

    // 0x1007d0170, 16 bytes, complete-object constructor, placed by class name
    // ParticleMaterial::ParticleMaterial(ParticleMaterial const&): jumps straight to the base-object constructor

    // 0x1007d0180, 64 bytes, placed by class name
    // ParticleMaterial::operator=(ParticleMaterial const&)
    /* ParticleMaterial::TEMPNAMEPLACEHOLDERVALUE(ParticleMaterial const&)
    */

    ParticleMaterial* ParticleMaterial::operator=(ParticleMaterial* param_1) {
        RenderMaterial::operator=((RenderMaterial*)this, (RenderMaterial*)param_1);
        shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)(field_528 + 8),
                                                     (shared_ptr*)(param_1->field_528 + 8));
        m_softScale = param_1->m_softScale;
        return this;
    }

    // 0x1007d01c0, 688 bytes, placed by class name
    // ParticleMaterial::InitRenderPassEffects(ParticleMaterial::MaterialType)
    void ParticleMaterial::InitRenderPassEffects(uint param_2) {
        undefined1* puVar1;
        byte bVar2;
        undefined1 uVar3;
        EffectList* pEVar4;
        undefined4* puVar5;
        byte bVar6;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined4 local_58;
        undefined8* local_48;
        undefined8 local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar2 = GetOption(0);
        bVar2 = param_2 == 5 | param_2 == 4 | bVar2;
        if (param_2 == 3) {
            puVar5 = (undefined4*)GetRenderPassEffect(4);
            local_48 = (undefined8*)CONCAT71(local_48._1_7_, 79);
            local_78 = &local_48;
            uStack_70 = 1;
            new (&local_68) EffectList((initializer_list*)&local_78);
            *puVar5 = (undefined4)local_68;
            puVar5[1] = local_68._4_4_;
            puVar5[2] = (undefined4)uStack_60;
            puVar5[3] = uStack_60._4_4_;
        } else {
            if (param_2 == 2) {
                pEVar4 = (EffectList*)GetRenderPassEffect(4);
                local_48 = (undefined8*)7784305273604820795;
                local_40 = CONCAT53(local_40._3_5_, 4015173);
                local_78 = &local_48;
                uStack_70 = 11;
                new (&local_68) EffectList((initializer_list*)&local_78);
                *(undefined4*)pEVar4 = (undefined4)local_68;
                *(undefined4*)(pEVar4 + 4) = local_68._4_4_;
                *(undefined4*)(pEVar4 + 8) = (undefined4)uStack_60;
                *(undefined4*)(pEVar4 + 12) = uStack_60._4_4_;
                uVar3 = 59;
                bVar6 = bVar2;
            } else {
                pEVar4 = (EffectList*)GetRenderPassEffect(4);
                local_68 = 2314601844307545915;
                uStack_60 = 7784304006468215329;
                local_58 = 1027884338;
                local_48 = &local_68;
                local_40 = 20;
                new (&local_78) EffectList((initializer_list*)&local_48);
                *(undefined4*)pEVar4 = (undefined4)local_78;
                *(undefined4*)(pEVar4 + 4) = local_78._4_4_;
                *(undefined4*)(pEVar4 + 8) = (undefined4)uStack_70;
                *(undefined4*)(pEVar4 + 12) = uStack_70._4_4_;
                pEVar4->Set(59, bVar2);
                uVar3 = 54;
                if ((param_2 & 4294967291) == 1) {
                    pEVar4->Set(54, 1);
                    pEVar4->Set(48, 0);
                    uVar3 = 57;
                }
                bVar6 = 0;
            }
            pEVar4->Set(uVar3, bVar6);
        }
        puVar1 = field_528;
        puVar1->AddFormatType(4);
        pEVar4 = (EffectList*)GetRenderPassEffect(0);
        local_48 = (undefined8*)CONCAT62(local_48._2_6_, 20283);
        local_78 = &local_48;
        uStack_70 = 2;
        new (&local_68) EffectList((initializer_list*)&local_78);
        *(undefined4*)pEVar4 = (undefined4)local_68;
        *(undefined4*)(pEVar4 + 4) = local_68._4_4_;
        *(undefined4*)(pEVar4 + 8) = (undefined4)uStack_60;
        *(undefined4*)(pEVar4 + 12) = uStack_60._4_4_;
        pEVar4->Set(59, bVar2);
        puVar1->AddFormatType(0);
        pEVar4 = (EffectList*)GetRenderPassEffect(2);
        local_68 = 2459282189542313787;
        uStack_60 = 4919433856507983466;
        local_58 = CONCAT31(local_58._1_3_, 61);
        local_48 = &local_68;
        local_40 = 17;
        new (&local_78) EffectList((initializer_list*)&local_48);
        *(undefined4*)pEVar4 = (undefined4)local_78;
        *(undefined4*)(pEVar4 + 4) = local_78._4_4_;
        *(undefined4*)(pEVar4 + 8) = (undefined4)uStack_70;
        *(undefined4*)(pEVar4 + 12) = uStack_70._4_4_;
        pEVar4->Set(59, bVar2);
        uVar3 = 54;
        if ((param_2 & 4294967291) == 1) {
            pEVar4->Set(54, 1);
            pEVar4->Set(48, 0);
            uVar3 = 57;
        }
        pEVar4->Set(uVar3, 0);
        puVar1->AddFormatType(2);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007d0470, 192 bytes, placed by __FILE__ string
    // ParticleCommonMaterials::Init(RT7Core&)
    void ParticleCommonMaterials::Init(RT7Core* param_1) {
        uint uVar1;
        undefined4 uVar2;
        ParticleMaterial* pPVar5;
        ulong uVar6;
        char* this_00;

        field_8 = param_1->GetShaderManager();
        field_0 = (PostProcessController*)param_1->GetPostProcessController();
        if (field_8 == 0) {
            this_00 = "m_shaderManager && m_postProcessController";
            LogFatalError("m_shaderManager && m_postProcessController",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleMaterial.cpp",
                          191, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        uVar1 = param_1->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        m_textureUnitAtlas = uVar2;
        uVar1 = param_1->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        m_textureUnitAtlasSettings = uVar2;
        uVar6 = 0;
        do {
            pPVar5 = (ParticleMaterial*)std::array<ParticleMaterial, 6ul>::operator[](
                (array<ParticleMaterial, 6ul>*)&field_16, uVar6);
            pPVar5->InitRenderPassEffects(uVar6 & 4294967295);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 6);
    }

    // 0x1007d0540, 416 bytes, placed by __FILE__ string
    // ParticleCommonMaterials::Update(RenderPassType, EffectManager const&, render::VertexDeclaration const&)
    void ParticleCommonMaterials::Update(int param_2, EffectManager* param_3, VertexDeclaration* param_4) {
        undefined1* this_00;
        ParticleMaterial* pPVar1;
        ParticleMaterial* pPVar2;
        ParticleMaterial* pPVar3;
        RenderPassEffect* pRVar4;
        ParticleMaterial* pPVar5;

        if ((field_8 == 0) || (field_0 == (PostProcessController*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shaderManager && m_postProcessController",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleMaterial.cpp",
                      204, (char*)0);
        }
        if (field_3376 != param_2) {
            this_00 = &field_16;
            pPVar1 = (ParticleMaterial*)this_00->begin();
            pPVar2 = (ParticleMaterial*)this_00->end();
            if (pPVar1 != pPVar2) {
                pPVar3 = (ParticleMaterial*)std::array<ParticleMaterial, 6ul>::operator[](
                    (array<ParticleMaterial, 6ul>*)this_00, 2);
                do {
                    if (pPVar1 == pPVar3) {
                        if (param_2 == 4) {
                            pRVar4 = (RenderPassEffect*)pPVar1->GetRenderPassEffect(4);
                            UpdateForwardPassDistortionEffect(this, pPVar1, pRVar4, param_3, param_4);
                        }
                    } else {
                        pPVar5 = (ParticleMaterial*)std::array<ParticleMaterial, 6ul>::operator[](
                            (array<ParticleMaterial, 6ul>*)this_00, 3);
                        if (pPVar1 == pPVar5) {
                            if (param_2 == 4) {
                                pPVar5 = (ParticleMaterial*)4;
                                pRVar4 = (RenderPassEffect*)pPVar1->GetRenderPassEffect();
                                UpdateForwardPassOverdrawEffect(this, pPVar5, pRVar4, param_3, param_4);
                            }
                        } else if (param_2 == 0) {
                            pPVar5 = (ParticleMaterial*)0;
                            pRVar4 = (RenderPassEffect*)pPVar1->GetRenderPassEffect();
                            UpdateShadowPassEffect(this, pPVar5, pRVar4, param_3, param_4);
                        } else if ((param_2 == 4) || (param_2 == 2)) {
                            pRVar4 = (RenderPassEffect*)pPVar1->GetRenderPassEffect(param_2);
                            UpdateForwardPassEffect(this, pPVar1, pRVar4, param_3, param_4);
                        }
                    }
                    pPVar1 = pPVar1 + 1;
                } while (pPVar1 != pPVar2);
            }
            field_3376 = param_2;
        }
    }

} // namespace jag::graphics
