// libs/game/runetek5/map/MapEnvironmentSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapEnvironmentSettings.h"

namespace jag::game {
    // 0x100009ca0: MapEnvironmentSettings::GetLightingSettings() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100067280: MapEnvironmentSettings::GetFogSettings() has the same machine code as console::Snow::GetSnowPiles() const

    // 0x100067280: MapEnvironmentSettings::GetFogSettings() const has the same machine code as console::Snow::GetSnowPiles() const

    // 0x100102fc0: MapEnvironmentSettings::GetScatteringSettings() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x10016ea80: MapEnvironmentSettings::GetToneMapSettings() const has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x1001c4880: MapEnvironmentSettings::GetBloomSettings() const has the same machine code as graphics::RT7Core::GetPostProcessManager()

    // 0x100417fb0: MapEnvironmentSettings::GetColourGradingSettings() const has the same machine code as NPCType::GetHeadIconGraphic() const

    // 0x1004af590
    MapEnvironmentSettings::MapEnvironmentSettings()
        : MakeSharedPool<MapEnvironmentSettings, 48>(), EnvLightingSettings() {
        new (&m_scatteringSettings) EnvScatteringSettings();
        new (&m_volumetricSettings) EnvVolumetricSettings();
        new (&m_toneMapSettings) EnvToneMapSettings();
        new (&m_bloomSettings) EnvBloomSettings();
        new (m_skySettings) EnvSkySettings();
        new (&m_reflectionSettings) EnvReflectionSettings();
        new (&field_528) EnvColourGradingSettings();
        new (&m_pLightProbeSettings) EnvLightProbeSettings();
        SetToDefaults();
    }

    // 0x1004af6f0
    void MapEnvironmentSettings::SetToDefaults() {
        SetDefaults();
        field_40.SetDefaults();
        m_scatteringSettings.SetDefaults();
        m_volumetricSettings.SetDefaults();
        m_toneMapSettings.SetDefaults();
        m_bloomSettings.SetDefaults();
        m_skySettings->SetDefaults();
        m_reflectionSettings.SetDefaults();
        field_528.SetDefaults();
        m_pLightProbeSettings.SetDefaults();
    }

    // 0x1004af780
    MapEnvironmentSettings::MapEnvironmentSettings(PacketT<Array<unsigned char>>& arg1)
        : MakeSharedPool<MapEnvironmentSettings, 48>(), EnvLightingSettings() {
        new (&m_scatteringSettings) EnvScatteringSettings();
        new (&m_volumetricSettings) EnvVolumetricSettings();
        new (&m_toneMapSettings) EnvToneMapSettings();
        new (&m_bloomSettings) EnvBloomSettings();
        new (m_skySettings) EnvSkySettings();
        new (&m_reflectionSettings) EnvReflectionSettings();
        new (&field_528) EnvColourGradingSettings();
        new (&m_pLightProbeSettings) EnvLightProbeSettings();
        Set(arg1);
        field_40.Set(arg1);
        m_scatteringSettings.Set(arg1);
        m_volumetricSettings.Set(arg1);
        m_toneMapSettings.Set(arg1);
        m_bloomSettings.Set(arg1);
        m_skySettings->Set(arg1);
        m_reflectionSettings.Set(arg1);
        field_528.Set(arg1);
        m_pLightProbeSettings.Set(arg1);
    }

    // 0x1004af940
    void MapEnvironmentSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        if (environmentOverride.HasAnyOverrides() != '\0') {
            ApplyOverride(environmentOverride);
            field_40.ApplyOverride(environmentOverride);
            m_scatteringSettings.ApplyOverride(environmentOverride);
            m_volumetricSettings.ApplyOverride(environmentOverride);
            m_toneMapSettings.ApplyOverride(environmentOverride);
            m_bloomSettings.ApplyOverride(environmentOverride);
            m_skySettings->ApplyOverride(environmentOverride);
            m_reflectionSettings.ApplyOverride(environmentOverride);
            field_528.ApplyOverride(environmentOverride);
            m_pLightProbeSettings.ApplyOverride(environmentOverride);
        }
    }

    // 0x1004afa80
    uint8_t* MapEnvironmentSettings::GetSkyBoxCubeMap(shared_ptr<render::TextureCube>& textureCube,
                                                      graphics::RT7Core* rt7Core,
                                                      ConfigProvider* configProvider) const {
        bool cVar1;
        unsigned int arg1;
        GpuMemoryProfile gpuMemoryProfile1;
        shared_ptr* psVar3;
        shared_ptr<SkyBoxType>* psVar4;
        TextureManager* this_01;
        MapArea* pMVar5;
        RenderDeviceCaps* this_02;
        long lVar6;
        uint8_t** ppuVar7;
        unsigned int arg1_00;
        Singleton<render::RenderDevice>* pSVar8;
        ReturnValue local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;
        TextureFormatBitSet local_30;

        uint8_t* this_04 = m_skySettings;
        int iVar2 = this_04->GetX();
        if (iVar2 == -1) {
        LAB_1004afc0e:
            ppuVar7 = &DataStatus::MISSING;
        } else {
            psVar3 = (shared_ptr*)this_04->second();
            cVar1 = shared_ptr::operator_cast_to_bool(psVar3);
            if (!cVar1) {
                iVar2 = this_04->GetX();
                psVar4 = configProvider->GetConfig<SkyBoxType>(iVar2, nullptr);
                this_04->SetSkyBox(*psVar4);
            }
            psVar3 = (shared_ptr*)this_04->second();
            cVar1 = shared_ptr::operator_cast_to_bool(psVar3);
            if (cVar1) {
                psVar4 = (shared_ptr<SkyBoxType>*)this_04->second();
                arg1 = ((ChangeLocationRequest*)(*psVar4).operator->())->GetSeqDelay();
                if (arg1 == 4294967295)
                    goto LAB_1004afc0e;
                this_01 = rt7Core->GetTextureManager();
                local_30 = callstack::Callstack();
                pMVar5 = (MapArea*)&local_30->Instance();
                this_02 = (RenderDeviceCaps*)pMVar5->GetOrigin();
                cVar1 = this_02->GetCompressedTextures();
                arg1_00 = 5;
                if (cVar1) {
                    gpuMemoryProfile1 = ((RenderDevice*)this_02->Instance())->GetGpuMemoryProfile();
                    pSVar8 = (Singleton<render::RenderDevice>*)(unsigned long)gpuMemoryProfile1;
                    cVar1 = render::operator<(gpuMemoryProfile1, 1);
                    if (cVar1) {
                        pMVar5 = (MapArea*)pSVar8->Instance();
                        lVar6 = pMVar5->GetOrigin();
                        arg1_00 = (unsigned int)(*(char*)(lVar6 + 161) == '\0') * 2;
                    }
                }
                pSVar8 = &local_30;
                pSVar8->AddFormatType(arg1_00);
                pMVar5 = (MapArea*)pSVar8->Instance();
                lVar6 = pMVar5->GetOrigin();
                if (*(char*)(lVar6 + 147) != '\0') {
                    local_30.AddFormatType(7);
                }
                local_48 = this_01->GetHALTextureCube(arg1, local_30[0], false);
                textureCube = local_48;
                cVar1 = textureCube.operator_cast_to_bool();
                if (cVar1) {
                    ppuVar7 = &DataStatus::READY;
                    goto LAB_1004afc1e;
                }
            }
            ppuVar7 = &DataStatus::NOTLOADED;
        }
    LAB_1004afc1e:
        return *ppuVar7;
    }

    // 0x1004afc60
    uint8_t* MapEnvironmentSettings::GetSkyBoxModel(shared_ptr<graphics::Model>& model, graphics::RT7Core* rt7Core,
                                                    ConfigProvider* configProvider, AssetBuilder& assetBuilder) const {
        shared_ptr* psVar3;
        shared_ptr<SkyBoxType>* psVar4;
        SkyBoxType* this_00;
        BuildRequest<graphics::Model, BuildModelMain>* buildRequest;
        uint8_t* puVar5;
        Layout* pLVar6;
        shared_ptr<graphics::Model>* psVar7;
        uint8_t** ppuVar8;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        uint8_t* this_02 = m_skySettings;
        int iVar2 = this_02->GetX();
        if (iVar2 == -1) {
            ppuVar8 = &DataStatus::MISSING;
        } else {
            psVar3 = (shared_ptr*)this_02->second();
            if (!(shared_ptr::operator_cast_to_bool(psVar3))) {
                iVar2 = this_02->GetX();
                psVar4 = configProvider->GetConfig<SkyBoxType>(iVar2, nullptr);
                this_02->SetSkyBox(*psVar4);
            }
            psVar3 = (shared_ptr*)this_02->second();
            if (!(shared_ptr::operator_cast_to_bool(psVar3))) {
                ppuVar8 = &DataStatus::NOTLOADED;
            } else {
                psVar4 = (shared_ptr<SkyBoxType>*)this_02->second();
                this_00 = (SkyBoxType*)(*psVar4).operator->();
                buildRequest = (BuildRequest<graphics::Model, BuildModelMain>*)this_02->second();
                puVar5 = (uint8_t*)this_00->GetStaticSkyModel(rt7Core, assetBuilder, *buildRequest);
                if (puVar5 == DataStatus::NOTLOADED) {
                    return puVar5;
                }
                if (puVar5 == DataStatus::MISSING) {
                    return puVar5;
                }
                pLVar6 = (Layout*)this_02->second();
                psVar7 = (shared_ptr<graphics::Model>*)pLVar6->SSOBeginPtr();
                if (!(((Model*)(*psVar7).operator->())->TexturesReady())) {
                    return DataStatus::NOTLOADED;
                }
                pLVar6 = (Layout*)this_02->second();
                psVar7 = (shared_ptr<graphics::Model>*)pLVar6->SSOBeginPtr();
                model = *psVar7;
                ppuVar8 = &DataStatus::READY;
            }
        }
        return *ppuVar8;
    }

    // 0x1004afdb0
    uint8_t* MapEnvironmentSettings::GetEnvironmentCubeMap(shared_ptr<render::TextureCube>& textureCube,
                                                           graphics::RT7Core* rt7Core, int arg3) const {
        uint8_t** ppuVar2;
        ReturnValue local_38;
        AutoSingleton<ShaderThreadPoolSingleton> local_28;

        if (arg3 == -1) {
            ppuVar2 = &DataStatus::MISSING;
        } else {
            local_38 = rt7Core->GetTextureManager()->GetDefaultTextureCube(arg3, true);
            textureCube = local_38;
            if (textureCube.operator_cast_to_bool() == '\0') {
                ppuVar2 = &DataStatus::NOTLOADED;
            } else {
                ppuVar2 = &DataStatus::READY;
            }
        }
        return *ppuVar2;
    }

    // 0x1004afe60
    uint64_t MapEnvironmentSettings::operator==(const MapEnvironmentSettings& mapEnvironmentSettings) const {
        bool cVar1 = *this == mapEnvironmentSettings;
        if (((((!cVar1) || (cVar1 = field_40 == mapEnvironmentSettings.field_40, !cVar1)) ||
              (cVar1 = m_scatteringSettings == mapEnvironmentSettings.m_scatteringSettings, !cVar1)) ||
             ((cVar1 = m_toneMapSettings == mapEnvironmentSettings.m_toneMapSettings,
               !cVar1 || (cVar1 = m_bloomSettings == mapEnvironmentSettings.m_bloomSettings, !cVar1)))) ||
            ((cVar1 = *m_skySettings == mapEnvironmentSettings.m_skySettings,
              !cVar1 || ((cVar1 = m_reflectionSettings == mapEnvironmentSettings.m_reflectionSettings,
                          !cVar1 || (cVar1 = field_528 == mapEnvironmentSettings.field_528, !cVar1)))))) {
            return 0;
        }
        return m_pLightProbeSettings == mapEnvironmentSettings.m_pLightProbeSettings;
    }

    // 0x1004aff80
    unsigned long MapEnvironmentSettings::hash() const {
        return local_20 = 0;
        unsigned long uVar1 = hash();
        hash_combine(&local_20, uVar1);
        uVar1 = field_40.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_scatteringSettings.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_toneMapSettings.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_bloomSettings.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_skySettings->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_reflectionSettings.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = field_528.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_pLightProbeSettings.hash();
        hash_combine(&local_20, uVar1);
        return local_20;
    }

} // namespace jag::game
