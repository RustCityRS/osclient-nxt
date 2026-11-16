// libs/graphics/runetek7/water/WaterMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterMaterial.h"

namespace jag::graphics {
    // 0x1007a2d90: the linker folded this into WaterMaterial::GetWaterParameters() const, which has identical code
    WaterMaterial::GetWaterParameters();

    // 0x1007b98b0, 96 bytes, base-object constructor, placed by class name and debug map
    // WaterMaterial::WaterMaterial()
    void WaterMaterial::WaterMaterial() {
        new (this) RenderMaterial();
        field_0 = (undefined**)(PTR_vtable_100ee8758 + 16);
        new (m_waterParameters) WaterParameters();
        field_1056 = 0;
        field_1064 = (Material*)0;
        *(undefined8*)(m_waterParameters + 496) = 0;
        field_1048 = 0;
        field_1072 = (Material*)0;
    }

    // 0x1007b9920, 16 bytes, complete-object constructor, placed by class name and debug map
    // WaterMaterial::WaterMaterial(): jumps straight to the base-object constructor

    // 0x1007b9930, 96 bytes, base-object constructor, placed by class name and debug map
    // WaterMaterial::WaterMaterial(WaterMaterial&&)
    void WaterMaterial::WaterMaterial(WaterMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8758 + 16);
        new (m_waterParameters) WaterParameters();
        field_1056 = 0;
        field_1064 = (Material*)0;
        *(undefined8*)(m_waterParameters + 496) = 0;
        field_1048 = 0;
        field_1072 = (Material*)0;
    }

    // 0x1007b9990, 16 bytes, complete-object constructor, placed by class name and debug map
    // WaterMaterial::WaterMaterial(WaterMaterial&&): jumps straight to the base-object constructor

    // 0x1007b99a0, 96 bytes, base-object constructor, placed by class name and debug map
    // WaterMaterial::WaterMaterial(WaterMaterial const&)
    void WaterMaterial::WaterMaterial(WaterMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8758 + 16);
        new (m_waterParameters) WaterParameters();
        field_1056 = 0;
        field_1064 = (Material*)0;
        *(undefined8*)(m_waterParameters + 496) = 0;
        field_1048 = 0;
        field_1072 = (Material*)0;
    }

    // 0x1007b9a00, 16 bytes, complete-object constructor, placed by class name and debug map
    // WaterMaterial::WaterMaterial(WaterMaterial const&): jumps straight to the base-object constructor

    // 0x1007b9a10, 80 bytes, placed by class name and debug map
    // WaterMaterial::Init(WaterPatchConfig const&, MaterialManager&, TextureManager&)
    void WaterMaterial::Init(WaterPatchConfig* param_1, MaterialManager* param_2, TextureManager* param_3) {
        InitMaterials(this, param_1, param_2);
        InitWaterParameters(this, param_1);
        LoadTextures(this, param_3);
        InitRenderPassEffects(this);
    }

    // 0x1007b9a60, 288 bytes, placed by class name and debug map
    // WaterMaterial::InitMaterials(WaterPatchConfig const&, MaterialManager&)
    void WaterMaterial::InitMaterials(WaterPatchConfig* param_1, MaterialManager* param_2) {
        char cVar1;
        int* piVar2;
        Material* pMVar3;
        ulong uVar4;

        uVar4 = 0;
        do {
            piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&param_1->field_64, uVar4);
            if (*piVar2 != -1) {
                pMVar3 = (Material*)param_2->GetMaterial(*piVar2);
                *(Material**)(m_waterParameters + uVar4 * 8 + 496) = pMVar3;
                cVar1 = pMVar3->IsRT7();
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_normalMapMaterials[i]->IsRT7()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "water/WaterMaterial.cpp",
                              111, (char*)0);
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 3);
        if (*(int*)&param_1->field_56 != -1) {
            pMVar3 = (Material*)param_2->GetMaterial(*(int*)&param_1->field_56);
            field_1064 = pMVar3;
            cVar1 = pMVar3->IsRT7();
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_foamMaterial->IsRT7()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "water/WaterMaterial.cpp",
                          118, (char*)0);
            }
        }
        if (*(int*)&param_1->field_88 != -1) {
            pMVar3 = (Material*)param_2->GetMaterial(*(int*)&param_1->field_88);
            field_1072 = pMVar3;
            cVar1 = pMVar3->IsRT7();
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_emissiveMapMaterial->IsRT7()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "water/WaterMaterial.cpp",
                          124, (char*)0);
            }
        }
    }

    // 0x1007b9b80, 752 bytes, placed by class name and debug map
    // WaterMaterial::InitWaterParameters(WaterPatchConfig const&)
    void WaterMaterial::InitWaterParameters(WaterPatchConfig* param_1) {
        undefined1* this_00;
        uint uVar1;
        ulong uVar2;
        WaterNormalMapParams* pWVar3;
        float fVar4;
        ImVec4 local_48[16];
        float local_38;
        float local_34;

        this_00 = m_waterParameters;
        pWVar3 = (WaterNormalMapParams*)&param_1->field_148;
        uVar2 = 0;
        do {
            this_00->SetNormalMapParams(uVar2, pWVar3);
            this_00->SetNormalMapMacroParams(uVar2, pWVar3 + 3);
            uVar2 = uVar2 + 1;
            pWVar3 = pWVar3 + 1;
        } while (uVar2 != 3);
        this_00->SetStillWaterNormalStrength(*(float*)((long)&param_1->field_140 + 4));
        local_38 = (float)GetNormalMapScale(this, param_1, 0);
        local_34 = (float)GetNormalMapScale(this, param_1, 1);
        fVar4 = (float)GetNormalMapScale(this, param_1, 2);
        ImVec4::ImVec4(local_48, local_38, local_34, fVar4, *(float*)&param_1->field_48);
        this_00->SetWaterNormalMapTextureScalesFlowNoiseScale(local_48);
        if (field_1064 != (Material*)0) {
            this_00->SetWaterFoamScale(1.0 / *(float*)((long)&param_1->field_56 + 4));
        }
        if ((CommandLine*)field_1072 != (CommandLine*)0) {
            uVar1 = field_1072->GetPos();
            this_00->SetEmissiveMapMaterialScale(1.0 / ((float)uVar1 * *(float*)((long)&param_1->field_88 + 4)));
        }
        this_00->SetWaterDepthFoam((float)*(int*)((long)&param_1->field_48 + 4));
        this_00->SetWaterSpecularPower((float)*(int*)((long)&param_1->field_388 + 4));
        this_00->SetWaterSpecularShininess(*(float*)&param_1->field_388);
        this_00->SetFresnelBias(*(float*)&param_1->field_396);
        this_00->SetReflectionStrength(*(float*)((long)&param_1->field_396 + 4));
        this_00->SetFade(-1.0);
        this_00->SetEmissiveUVScale((Vector2T*)&param_1->field_96);
        this_00->SetEmissiveColour((Vector3T*)&param_1->field_104);
        this_00->SetEmissiveSource(*(float*)((long)&param_1->field_112 + 4));
        this_00->SetEmissiveScale(*(float*)&param_1->field_120);
        this_00->SetEmissiveMapRefractionDepth(*(float*)((long)&param_1->field_120 + 4));
        this_00->SetEmissiveMapMode(param_1->field_128);
        this_00->SetEmissiveUVMode(param_1->field_129);
        this_00->SetEmissiveFlowSpeed(*(float*)&param_1->field_132);
        this_00->SetEmissiveFlowRotationDegrees(*(float*)((long)&param_1->field_132 + 4));
        this_00->SetEmissiveBlend(*(float*)&param_1->field_140);
        this_00->SetExtinctionRGBDepthMetres((Vector3T*)&param_1->field_404);
        this_00->SetExtinctionOpaqueWaterColour((Vector3T*)((long)&param_1->field_412 + 4));
        this_00->SetExtinctionVisibilityMetres(*(float*)&param_1->field_428);
        this_00->SetCausticsScale(*(float*)((long)&param_1->field_428 + 4));
        this_00->SetCausticsRefractionScale(*(float*)&param_1->field_436);
        this_00->SetCausticsDepthFadeCutoff(*(float*)((long)&param_1->field_436 + 4));
        this_00->SetCausticsDepthFadeScale(*(float*)&param_1->field_444);
        this_00->SetCausticsEdgeFadeStart(*(float*)((long)&param_1->field_444 + 4));
        this_00->SetCausticsEdgeFadeEnd(*(float*)&param_1->field_452);
        this_00->SetCausticsOverWaterFadeStart(*(float*)((long)&param_1->field_452 + 4));
        this_00->SetCausticsOverWaterFadeEnd(*(float*)&param_1->field_460);
    }

    // 0x1007b9e70, 400 bytes, placed by class name and debug map
    // WaterMaterial::LoadTextures(TextureManager&)
    undefined1 WaterMaterial::LoadTextures(TextureManager* param_1) {
        undefined1* this_00;
        MapArea* pMVar2;
        long lVar3;
        ulong uVar4;
        undefined8 uVar5;
        TextureManager* local_60;
        undefined1* local_58;
        Callstack* local_50;
        shared_ptr local_48;
        TextureFormatBitSet local_38;
        undefined1 local_31;

        new (&local_38) callstack::Callstack();
        if (param_1->UseCompressedTextures() == '\0') {
            uVar5 = 5;
        } else {
            pMVar2 = (MapArea*)param_1->Instance();
            lVar3 = pMVar2->GetOrigin();
            if (*(char*)(lVar3 + 161) == '\0') {
                pMVar2 = (MapArea*)pMVar2->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 162) == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/water/WaterMaterial.cpp",
                                    166, (char*)0);
                }
                uVar5 = 2;
            } else {
                uVar5 = 1;
            }
        }
        local_38.AddFormatType(uVar5);
        local_31 = 1;
        local_58 = &local_31;
        this_00 = m_waterParameters;
        uVar4 = 0;
        local_60 = param_1;
        local_50 = (Callstack*)&local_38;
        do {
            LoadTextures(TextureManager&)::$_9::operator()((__9*)&local_48, (Material*)&local_60);
            this_00->SetNormalMapTexture(uVar4, &local_48);
            local_48.~shared_ptr();
            uVar4 = uVar4 + 1;
        } while (uVar4 != 3);
        if (field_1064 != (Material*)0) {
            LoadTextures(TextureManager&)::$_9::operator()((__9*)&local_48, (Material*)&local_60);
            this_00->SetFoamTexture(&local_48);
            local_48.~shared_ptr();
        }
        if (field_1072 != (Material*)0) {
            LoadTextures(TextureManager&)::$_9::operator()((__9*)&local_48, (Material*)&local_60);
            this_00->SetEmissiveMapTexture(&local_48);
            local_48.~shared_ptr();
        }
        return local_31;
    }

    // 0x1007ba000, 432 bytes, placed by class name and debug map
    // WaterMaterial::InitRenderPassEffects()
    void WaterMaterial::InitRenderPassEffects() {
        undefined1* puVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        EffectList* pEVar5;
        undefined4* puVar6;
        undefined8* local_78;
        undefined8 local_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined3 uStack_48;
        undefined8 uStack_45;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pEVar5 = (EffectList*)GetRenderPassEffect(4);
        uStack_48 = 7024746;
        uStack_45 = 4986122887453619052;
        local_58 = 7305488437132525824;
        local_78 = &local_58;
        local_70 = 27;
        new (&local_68) EffectList((initializer_list*)&local_78);
        *(undefined4*)pEVar5 = (undefined4)local_68;
        *(undefined4*)(pEVar5 + 4) = local_68._4_4_;
        *(undefined4*)(pEVar5 + 8) = (undefined4)uStack_60;
        *(undefined4*)(pEVar5 + 12) = uStack_60._4_4_;
        pEVar5->Set(99, 0);
        pEVar5->Set(100, 0);
        puVar1 = field_528;
        puVar1->AddFormatType(4);
        puVar6 = (undefined4*)GetRenderPassEffect(5);
        local_78 = (undefined8*)CONCAT62(local_78._2_6_, 25167);
        uStack_60 = 2;
        local_68 = &local_78;
        new (&local_58) EffectList((initializer_list*)&local_68);
        *puVar6 = (undefined4)local_58;
        puVar6[1] = local_58._4_4_;
        puVar6[2] = 522067224;
        puVar6[3] = 622993696;
        puVar1->AddFormatType(5);
        pEVar5 = (EffectList*)GetRenderPassEffect(6);
        puVar6 = (undefined4*)GetRenderPassEffect(4);
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *(undefined4*)pEVar5 = *puVar6;
        *(undefined4*)(pEVar5 + 4) = uVar2;
        *(undefined4*)(pEVar5 + 8) = uVar3;
        *(undefined4*)(pEVar5 + 12) = uVar4;
        pEVar5->Add(87);
        pEVar5->Add(88);
        puVar1->AddFormatType(6);
        puVar1->AddFormatType(2);
        pEVar5 = (EffectList*)GetRenderPassEffect(7);
        puVar6 = (undefined4*)GetRenderPassEffect(4);
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *(undefined4*)pEVar5 = *puVar6;
        *(undefined4*)(pEVar5 + 4) = uVar2;
        *(undefined4*)(pEVar5 + 8) = uVar3;
        *(undefined4*)(pEVar5 + 12) = uVar4;
        pEVar5->Add(44);
        pEVar5->Add(45);
        pEVar5->Add(46);
        puVar1->AddFormatType(7);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007ba210, 112 bytes, placed by class name and debug map
    // WaterMaterial::GetNormalMapScale(WaterPatchConfig const&, unsigned long)
    float WaterMaterial::GetNormalMapScale(WaterPatchConfig* param_1, ulong param_2) {
        uint uVar1;
        float* pfVar2;
        float fVar3;

        fVar3 = 0.0;
        if ((param_2 < 3) && (*(CommandLine**)(m_waterParameters + param_2 * 8 + 496) != (CommandLine*)0)) {
            uVar1 = (*(CommandLine**)(m_waterParameters + param_2 * 8 + 496))->GetPos();
            pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&param_1->field_76, param_2);
            fVar3 = 1.0 / ((float)uVar1 * *pfVar2);
        }
        return fVar3;
    }

    // 0x1007ba630, 224 bytes, placed by class name and debug map
    // WaterMaterial::LoadTextures(TextureManager&)::$_9::operator()(Material const*) const
    /* WaterMaterial::LoadTextures(TextureManager&)::$_9::TEMPNAMEPLACEHOLDERVALUE(Material
   const*) const */

    __9* WaterMaterial::LoadTextures(TextureManager&)::$_9::operator()(Material* param_1) {
        undefined8 uVar1;
        undefined* puVar2;
        bool bVar3;
        long* plVar4;
        long lVar5;
        StockPlayerOffer* in_RDX;
        shared_ptr local_40;

        puVar2 = TextureType::TEXTURE;
        if (in_RDX == (StockPlayerOffer*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            uVar1._0_1_ = param_1->field_0;
            uVar1._1_1_ = param_1->field_1;
            uVar1._2_2_ = *(undefined2*)&param_1->field_2;
            uVar1._4_4_ = param_1->field_4;
            bVar3 = (bool)in_RDX->GetCompletedGold();
            TextureManager::GetHALTexture((TextureType*)&local_40, (uint)uVar1, (TextureFormatBitSet)(uint)puVar2,
                                          bVar3, SUB41(**(undefined4**)&param_1->field_16, 0));
            bVar3 = operator==(&local_40, (_func_decltype_nullptr*)0);
            if (bVar3) {
                **(undefined1**)&param_1->field_8 = 0;
            } else {
                plVar4 = (long*)shared_ptr<render::Texture>::operator->((shared_ptr<render::Texture>*)&local_40);
                lVar5 = local_40.Instance();
                (**(code**)(*plVar4 + 24))(plVar4, lVar5 + 592, 0);
            }
            new (this) shared_ptr<oldscape::dash3d::Decor>(&local_40);
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x1007ba750, 128 bytes, placed by class name and debug map
    // WaterMaterial::HasNormalMaps() const
    ulong WaterMaterial::HasNormalMaps() {
        bool bVar1;
        shared_ptr* psVar2;
        ulong uVar3;
        undefined8 unaff_R15;
        ulong uVar4;

        psVar2 = (shared_ptr*)(m_waterParameters, 0)->GetNormalMapTexture();
        bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
        uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (!bVar1) {
            uVar3 = 0;
            do {
                uVar4 = CONCAT71((int7)(uVar4 >> 8), uVar3 < 2);
                if (uVar3 == 2)
                    break;
                uVar3 = uVar3 + 1;
                psVar2 = (shared_ptr*)(m_waterParameters, uVar3)->GetNormalMapTexture();
                bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
            } while (!bVar1);
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::graphics
