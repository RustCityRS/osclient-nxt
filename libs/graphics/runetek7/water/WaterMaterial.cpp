// libs/graphics/runetek7/water/WaterMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterMaterial.h"

namespace jag::graphics {
    // 0x1007a2d90: WaterMaterial::GetWaterParameters() has the same machine code as WaterMaterial::GetWaterParameters() const

    // 0x1007b98b0
    WaterMaterial::WaterMaterial() : RenderMaterial(), field_1056(0), field_1064(nullptr) {
        *(uint64_t*)(m_waterParameters + 496) = 0;
        field_1048 = 0;
        field_1072 = nullptr;
    }

    // 0x1007b9930
    WaterMaterial::WaterMaterial(WaterMaterial&& waterMaterial)
        : RenderMaterial(waterMaterial), field_1056(0), field_1064(nullptr) {
        *(uint64_t*)(m_waterParameters + 496) = 0;
        field_1048 = 0;
        field_1072 = nullptr;
    }

    // 0x1007b99a0
    WaterMaterial::WaterMaterial(const WaterMaterial& waterMaterial)
        : RenderMaterial(waterMaterial), field_1056(0), field_1064(nullptr) {
        *(uint64_t*)(m_waterParameters + 496) = 0;
        field_1048 = 0;
        field_1072 = nullptr;
    }

    // 0x1007b9a10
    void WaterMaterial::Init(const WaterPatchConfig& waterPatchConfig, MaterialManager& materialManager,
                             TextureManager& textureManager) {
        InitMaterials(waterPatchConfig, materialManager);
        InitWaterParameters(waterPatchConfig);
        LoadTextures(textureManager);
        InitRenderPassEffects();
    }

    // 0x1007b9a60
    void WaterMaterial::InitMaterials(const WaterPatchConfig& waterPatchConfig, MaterialManager& materialManager) {
        int* piVar2;
        Material* pMVar3;

        unsigned long arg1 = 0;
        do {
            piVar2 = &waterPatchConfig.field_64[arg1];
            if (*piVar2 != -1) {
                pMVar3 = materialManager.GetMaterial(*piVar2);
                *(Material**)(m_waterParameters + arg1 * 8 + 496) = pMVar3;
                if (pMVar3->IsRT7()) {
                    LogAssert("!m_normalMapMaterials[i]->IsRT7()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "water/WaterMaterial.cpp",
                              111, nullptr);
                }
            }
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        if (*(int*)&waterPatchConfig.field_56 != -1) {
            pMVar3 = materialManager.GetMaterial(*(int*)&waterPatchConfig.field_56);
            field_1064 = pMVar3;
            if (pMVar3->IsRT7()) {
                LogAssert("!m_foamMaterial->IsRT7()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "water/WaterMaterial.cpp",
                          118, nullptr);
            }
        }
        if (*(int*)&waterPatchConfig.field_88 != -1) {
            pMVar3 = materialManager.GetMaterial(*(int*)&waterPatchConfig.field_88);
            field_1072 = pMVar3;
            if (pMVar3->IsRT7()) {
                LogAssert("!m_emissiveMapMaterial->IsRT7()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "water/WaterMaterial.cpp",
                          124, nullptr);
            }
        }
    }

    // 0x1007b9b80
    void WaterMaterial::InitWaterParameters(const WaterPatchConfig& waterPatchConfig) {
        unsigned int uVar1;

        uint8_t* this_00 = m_waterParameters;
        WaterNormalMapParams* waterNormalMapParams = (WaterNormalMapParams*)&waterPatchConfig.field_148;
        unsigned long arg1 = 0;
        do {
            this_00->SetNormalMapParams(arg1, *waterNormalMapParams);
            this_00->SetNormalMapMacroParams(arg1, *(waterNormalMapParams + 3));
            arg1 = arg1 + 1;
            waterNormalMapParams = waterNormalMapParams + 1;
        } while (arg1 != 3);
        this_00->SetStillWaterNormalStrength(*(float*)((long)&waterPatchConfig.field_140 + 4));
        float local_38 = (float)GetNormalMapScale(waterPatchConfig, 0);
        float local_34 = (float)GetNormalMapScale(waterPatchConfig, 1);
        float arg3 = (float)GetNormalMapScale(waterPatchConfig, 2);
        ImVec4 local_48(local_38, local_34, arg3, *(float*)&waterPatchConfig.field_48);
        this_00->SetWaterNormalMapTextureScalesFlowNoiseScale(local_48);
        if (field_1064 != nullptr) {
            this_00->SetWaterFoamScale(1.0 / *(float*)((long)&waterPatchConfig.field_56 + 4));
        }
        if ((CommandLine*)field_1072 != nullptr) {
            uVar1 = field_1072->GetPos();
            this_00->SetEmissiveMapMaterialScale(1.0 /
                                                 ((float)uVar1 * *(float*)((long)&waterPatchConfig.field_88 + 4)));
        }
        this_00->SetWaterDepthFoam((float)*(int*)((long)&waterPatchConfig.field_48 + 4));
        this_00->SetWaterSpecularPower((float)*(int*)((long)&waterPatchConfig.field_388 + 4));
        this_00->SetWaterSpecularShininess(*(float*)&waterPatchConfig.field_388);
        this_00->SetFresnelBias(*(float*)&waterPatchConfig.field_396);
        this_00->SetReflectionStrength(*(float*)((long)&waterPatchConfig.field_396 + 4));
        this_00->SetFade(-1.0);
        this_00->SetEmissiveUVScale(waterPatchConfig.field_96);
        this_00->SetEmissiveColour(waterPatchConfig.field_104);
        this_00->SetEmissiveSource(*(float*)((long)&waterPatchConfig.field_112 + 4));
        this_00->SetEmissiveScale(*(float*)&waterPatchConfig.field_120);
        this_00->SetEmissiveMapRefractionDepth(*(float*)((long)&waterPatchConfig.field_120 + 4));
        this_00->SetEmissiveMapMode((unsigned int)(uint8_t)waterPatchConfig.field_128);
        this_00->SetEmissiveUVMode((unsigned int)(uint8_t)waterPatchConfig.field_129);
        this_00->SetEmissiveFlowSpeed(*(float*)&waterPatchConfig.field_132);
        this_00->SetEmissiveFlowRotationDegrees(*(float*)((long)&waterPatchConfig.field_132 + 4));
        this_00->SetEmissiveBlend(*(float*)&waterPatchConfig.field_140);
        this_00->SetExtinctionRGBDepthMetres(waterPatchConfig.field_404);
        this_00->SetExtinctionOpaqueWaterColour(*((Vector3T<float>*)((long)&waterPatchConfig.field_412 + 4)));
        this_00->SetExtinctionVisibilityMetres(*(float*)&waterPatchConfig.field_428);
        this_00->SetCausticsScale(*(float*)((long)&waterPatchConfig.field_428 + 4));
        this_00->SetCausticsRefractionScale(*(float*)&waterPatchConfig.field_436);
        this_00->SetCausticsDepthFadeCutoff(*(float*)((long)&waterPatchConfig.field_436 + 4));
        this_00->SetCausticsDepthFadeScale(*(float*)&waterPatchConfig.field_444);
        this_00->SetCausticsEdgeFadeStart(*(float*)((long)&waterPatchConfig.field_444 + 4));
        this_00->SetCausticsEdgeFadeEnd(*(float*)&waterPatchConfig.field_452);
        this_00->SetCausticsOverWaterFadeStart(*(float*)((long)&waterPatchConfig.field_452 + 4));
        this_00->SetCausticsOverWaterFadeEnd(*(float*)&waterPatchConfig.field_460);
    }

    // 0x1007b9e70
    uint8_t WaterMaterial::LoadTextures(TextureManager& textureManager) {
        MapArea* pMVar2;
        long lVar3;
        unsigned int arg1_00;
        __9 local_60;
        ReturnValue local_48;

        TextureFormatBitSet local_38;
        if (textureManager.UseCompressedTextures() == '\0') {
            arg1_00 = 5;
        } else {
            pMVar2 = (MapArea*)textureManager.Instance();
            lVar3 = pMVar2->GetOrigin();
            if (*(char*)(lVar3 + 161) == '\0') {
                pMVar2 = (MapArea*)pMVar2->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 162) == '\0') {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/water/WaterMaterial.cpp",
                                    166, nullptr);
                }
                arg1_00 = 2;
            } else {
                arg1_00 = 1;
            }
        }
        local_38.AddFormatType(arg1_00);
        return local_31 = 1;
        local_60.field_8 = &local_31;
        uint8_t* this_00 = m_waterParameters;
        unsigned long arg1 = 0;
        local_60.field_0 = (TextureType*)textureManager;
        local_60.field_16 = (uint32_t*)&local_38;
        do {
            LoadTextures(TextureManager&)::$_9::operator()(&local_48, &local_60,
                                                           *(Material**)(m_waterParameters + arg1 * 8 + 496));
            this_00->SetNormalMapTexture(arg1, local_48);
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        if (field_1064 != nullptr) {
            LoadTextures(TextureManager&)::$_9::operator()(&local_48, &local_60, field_1064);
            this_00->SetFoamTexture(local_48);
        }
        if (field_1072 != nullptr) {
            LoadTextures(TextureManager&)::$_9::operator()(&local_48, &local_60, field_1072);
            this_00->SetEmissiveMapTexture(local_48);
        }
        return local_31;
    }

    // 0x1007ba000
    void WaterMaterial::InitRenderPassEffects() {
        initializer_list<EffectType>* local_68;
        uint64_t uStack_60;

        auto pEVar2 = GetRenderPassEffect(4);
        uint32_t uStack_48 = 7024746;
        uint64_t uStack_45 = 4986122887453619052;
        uint64_t local_58 = 7305488437132525824;
        uint64_t* local_78 = &local_58;
        uint64_t local_70 = 27;
        new (&local_68) EffectList(local_78);
        *(initializer_list<EffectType>**)pEVar2 = local_68;
        *(uint64_t*)(pEVar2 + 8) = uStack_60;
        pEVar2->Set(99, false);
        pEVar2->Set(100, false);
        uint8_t* this_00 = field_528;
        this_00->AddFormatType(4);
        auto puVar3 = GetRenderPassEffect(5);
        local_78 = (uint64_t*)(((uint64_t)local_78._2_6_ << 16) | (uint16_t)25167);
        uStack_60 = 2;
        local_68 = (initializer_list<EffectType>*)&local_78;
        new (&local_58) EffectList(local_68);
        *puVar3 = local_58;
        puVar3[1] = (((uint64_t)159486386207 << 24) | (uint32_t)1973528);
        this_00->AddFormatType(5);
        pEVar2 = (EffectList*)GetRenderPassEffect(6);
        puVar3 = (uint64_t*)GetRenderPassEffect(4);
        uint64_t uVar1 = puVar3[1];
        *(uint64_t*)pEVar2 = *puVar3;
        *(uint64_t*)(pEVar2 + 8) = uVar1;
        pEVar2->Add(87);
        pEVar2->Add(88);
        this_00->AddFormatType(6);
        this_00->AddFormatType(2);
        pEVar2 = (EffectList*)GetRenderPassEffect(7);
        puVar3 = (uint64_t*)GetRenderPassEffect(4);
        uVar1 = puVar3[1];
        *(uint64_t*)pEVar2 = *puVar3;
        *(uint64_t*)(pEVar2 + 8) = uVar1;
        pEVar2->Add(44);
        pEVar2->Add(45);
        pEVar2->Add(46);
        this_00->AddFormatType(7);
    }

    // 0x1007ba210
    float WaterMaterial::GetNormalMapScale(const WaterPatchConfig& waterPatchConfig, unsigned long arg2) {
        unsigned int uVar1;
        float* pfVar2;

        float fVar3 = 0.0;
        if ((arg2 < 3) && (*(CommandLine**)(m_waterParameters + arg2 * 8 + 496) != nullptr)) {
            uVar1 = (*(CommandLine**)(m_waterParameters + arg2 * 8 + 496))->GetPos();
            pfVar2 = &waterPatchConfig.field_76[arg2];
            fVar3 = 1.0 / ((float)uVar1 * *pfVar2);
        }
        return fVar3;
    }

    // 0x1007ba630
    auto WaterMaterial::LoadTextures(TextureManager&)::$_9::operator()(const Material* material) const {
        TextureType* textureType;
        TextureFormatBitSet textureFormatBitSet;
        long* plVar3;
        long lVar4;
        ReturnValue local_40;

        uint8_t* puVar1 = TextureType::TEXTURE;
        if (material == nullptr) {
            auto result;
        } else {
            textureType = field_0;
            textureFormatBitSet.m_bits = material->GetCompletedGold();
            local_40 = TextureManager::GetHALTexture(textureType, (unsigned int)puVar1, textureFormatBitSet,
                                                     (uint8_t)(*field_16), true);
            if (local_40 == nullptr) {
                *field_8 = 0;
            } else {
                plVar3 = (long*)(*&local_40).operator->();
                lVar4 = &local_40->Instance();
                (**(void (**)(...))(*plVar3 + 24))(plVar3, lVar4 + 592, 0);
            }
            new (&result) shared_ptr(&local_40);
        }
        return result;
    }

    // 0x1007ba750
    unsigned long WaterMaterial::HasNormalMaps() const {
        unsigned long arg1;
        uint64_t unaff_R15;

        auto psVar2 = m_waterParameters->GetNormalMapTexture(0);
        bool bVar1 = *psVar2 != nullptr;
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (!bVar1) {
            arg1 = 0;
            do {
                uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)(arg1 < 2));
                if (arg1 == 2)
                    break;
                arg1 = arg1 + 1;
                psVar2 =
                    (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)m_waterParameters->GetNormalMapTexture(arg1);
                bVar1 = *psVar2 != nullptr;
            } while (!bVar1);
        }
        return uVar3 & 4294967295;
    }

} // namespace jag::graphics
