// libs/game/runetek5/map/MapEnvironmentSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapEnvironmentSettings.h"

namespace jag::game {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    MapEnvironmentSettings::GetLightingSettings() const;

    // 0x100067280: the linker folded this into console::Snow::GetSnowPiles() const, which has identical code
    MapEnvironmentSettings::GetFogSettings();

    // 0x100067280: the linker folded this into console::Snow::GetSnowPiles() const, which has identical code
    MapEnvironmentSettings::GetFogSettings() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    MapEnvironmentSettings::GetScatteringSettings() const;

    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    MapEnvironmentSettings::GetToneMapSettings() const;

    // 0x1001c4880: the linker folded this into graphics::RT7Core::GetPostProcessManager(), which has identical code
    MapEnvironmentSettings::GetBloomSettings() const;

    // 0x100417fb0: the linker folded this into NPCType::GetHeadIconGraphic() const, which has identical code
    MapEnvironmentSettings::GetColourGradingSettings() const;

    // 0x1004af590, 192 bytes, base-object constructor, placed by class name and debug map
    // MapEnvironmentSettings::MapEnvironmentSettings()
    void MapEnvironmentSettings::MapEnvironmentSettings() {
        new (this) MakeSharedPool<MapEnvironmentSettings, 48>();
        new (this) EnvLightingSettings();
        new (&field_40) EnvFogSettings();
        new (&m_scatteringSettings) EnvScatteringSettings();
        new (&m_volumetricSettings) EnvVolumetricSettings();
        new (&m_toneMapSettings) EnvToneMapSettings();
        new (&m_bloomSettings) EnvBloomSettings();
        new (m_skySettings) EnvSkySettings();
        new (&m_reflectionSettings) EnvReflectionSettings();
        new (&field_528) EnvColourGradingSettings();
        new (&m_pLightProbeSettings) EnvLightProbeSettings();
        SetToDefaults(this);
    }

    // 0x1004af6f0, 128 bytes, placed by class name and debug map
    // MapEnvironmentSettings::SetToDefaults()
    void MapEnvironmentSettings::SetToDefaults() {
        SetDefaults();
        (&field_40)->SetDefaults();
        (&m_scatteringSettings)->SetDefaults();
        (&m_volumetricSettings)->SetDefaults();
        (&m_toneMapSettings)->SetDefaults();
        (&m_bloomSettings)->SetDefaults();
        m_skySettings->SetDefaults();
        (&m_reflectionSettings)->SetDefaults();
        (&field_528)->SetDefaults();
        (&m_pLightProbeSettings)->SetDefaults();
    }

    // 0x1004af770, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapEnvironmentSettings::MapEnvironmentSettings(): jumps straight to the base-object constructor

    // 0x1004af780, 336 bytes, base-object constructor, placed by class name and debug map
    // MapEnvironmentSettings::MapEnvironmentSettings(PacketT<Array<unsigned char, eastl::allocator> >&)
    void MapEnvironmentSettings::MapEnvironmentSettings(PacketT* param_1) {
        new (this) MakeSharedPool<MapEnvironmentSettings, 48>();
        new (this) EnvLightingSettings();
        new (&field_40) EnvFogSettings();
        new (&m_scatteringSettings) EnvScatteringSettings();
        new (&m_volumetricSettings) EnvVolumetricSettings();
        new (&m_toneMapSettings) EnvToneMapSettings();
        new (&m_bloomSettings) EnvBloomSettings();
        new (m_skySettings) EnvSkySettings();
        new (&m_reflectionSettings) EnvReflectionSettings();
        new (&field_528) EnvColourGradingSettings();
        new (&m_pLightProbeSettings) EnvLightProbeSettings();
        Set(param_1);
        (&field_40, param_1)->Set();
        (&m_scatteringSettings, param_1)->Set();
        (&m_volumetricSettings, param_1)->Set();
        (&m_toneMapSettings, param_1)->Set();
        (&m_bloomSettings, param_1)->Set();
        (m_skySettings, param_1)->Set();
        (&m_reflectionSettings, param_1)->Set();
        (&field_528, param_1)->Set();
        (&m_pLightProbeSettings, param_1)->Set();
    }

    // 0x1004af920, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapEnvironmentSettings::MapEnvironmentSettings(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1004af940, 192 bytes, placed by class name and debug map
    // MapEnvironmentSettings::ApplyOverride(EnvironmentOverride const&)
    void MapEnvironmentSettings::ApplyOverride(EnvironmentOverride* param_1) {
        if (param_1->HasAnyOverrides() != '\0') {
            ApplyOverride(param_1);
            (&field_40, param_1)->ApplyOverride();
            (&m_scatteringSettings, param_1)->ApplyOverride();
            (&m_volumetricSettings, param_1)->ApplyOverride();
            (&m_toneMapSettings, param_1)->ApplyOverride();
            (&m_bloomSettings, param_1)->ApplyOverride();
            (m_skySettings, param_1)->ApplyOverride();
            (&m_reflectionSettings, param_1)->ApplyOverride();
            (&field_528, param_1)->ApplyOverride();
            (&m_pLightProbeSettings, param_1)->ApplyOverride();
        }
    }

    // 0x1004afa80, 464 bytes, placed by class name and debug map
    // MapEnvironmentSettings::GetSkyBoxCubeMap(shared_ptr<render::TextureCube>&, graphics::RT7Core*, ConfigProvider*) const
    undefined* MapEnvironmentSettings::GetSkyBoxCubeMap(shared_ptr* param_1, RT7Core* param_2,
                                                        ConfigProvider* param_3) {
        bool bVar1;
        char cVar2;
        int iVar3;
        TextureFormatBitSet TVar4;
        uint uVar5;
        shared_ptr* psVar6;
        shared_ptr<SkyBoxType>* this_00;
        ChangeLocationRequest* this_01;
        MapArea* pMVar7;
        RenderDeviceCaps* this_02;
        RenderDevice* this_03;
        long lVar8;
        undefined** ppuVar9;
        char cVar10;
        undefined1* this_04;
        Callstack* this_05;
        Singleton<render::RenderDevice>* pSVar11;
        shared_ptr local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];
        TextureFormatBitSet local_30[2];

        local_38->~AutoSingleton("Sky_Box");
        this_04 = m_skySettings;
        iVar3 = this_04->GetX();
        if (iVar3 == -1) {
        LAB_1004afc0e:
            ppuVar9 = &DataStatus::MISSING;
        } else {
            psVar6 = (shared_ptr*)this_04->second();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
            if (!bVar1) {
                iVar3 = this_04->GetX();
                psVar6 = ConfigProvider::GetConfig<SkyBoxType>(param_3, iVar3, (DataStatus**)0);
                this_04->SetSkyBox(psVar6);
            }
            psVar6 = (shared_ptr*)this_04->second();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
            if (bVar1) {
                this_00 = (shared_ptr<SkyBoxType>*)this_04->second();
                this_01 = (ChangeLocationRequest*)shared_ptr<SkyBoxType>::operator->(this_00);
                iVar3 = this_01->GetSeqDelay();
                if (iVar3 == -1)
                    goto LAB_1004afc0e;
                TVar4.m_bits = param_2->GetTextureManager();
                this_05 = (Callstack*)local_30;
                callstack::Callstack::Callstack(this_05);
                pMVar7 = (MapArea*)this_05->Instance();
                this_02 = (RenderDeviceCaps*)pMVar7->GetOrigin();
                cVar2 = this_02->GetCompressedTextures();
                cVar10 = '\x05';
                if (cVar2 != '\0') {
                    this_03 = (RenderDevice*)this_02->Instance();
                    uVar5 = this_03->GetGpuMemoryProfile();
                    pSVar11 = (Singleton<render::RenderDevice>*)(ulong)uVar5;
                    cVar2 = render::operator<(pSVar11, 1);
                    if (cVar2 != '\0') {
                        pMVar7 = (MapArea*)pSVar11->Instance();
                        lVar8 = pMVar7->GetOrigin();
                        cVar10 = (*(char*)(lVar8 + 161) == '\0') * '\x02';
                    }
                }
                pSVar11 = (Singleton<render::RenderDevice>*)local_30;
                pSVar11->AddFormatType(cVar10);
                pMVar7 = (MapArea*)pSVar11->Instance();
                lVar8 = pMVar7->GetOrigin();
                if (*(char*)(lVar8 + 147) != '\0') {
                    local_30->AddFormatType(7);
                }
                graphics::TextureManager::GetHALTextureCube((uint)&local_48, TVar4, SUB41(iVar3, 0));
                shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)param_1, &local_48);
                local_48.~shared_ptr();
                bVar1 = shared_ptr::operator_cast_to_bool(param_1);
                if (bVar1) {
                    ppuVar9 = &DataStatus::READY;
                    goto LAB_1004afc1e;
                }
            }
            ppuVar9 = &DataStatus::NOTLOADED;
        }
    LAB_1004afc1e:
        return *ppuVar9;
    }

    // 0x1004afc60, 336 bytes, placed by class name and debug map
    // MapEnvironmentSettings::GetSkyBoxModel(shared_ptr<graphics::Model>&, graphics::RT7Core*, ConfigProvider*, AssetBuilder&) const
    undefined* MapEnvironmentSettings::GetSkyBoxModel(shared_ptr* param_1, RT7Core* param_2, ConfigProvider* param_3,
                                                      AssetBuilder* param_4) {
        bool bVar1;
        int iVar3;
        shared_ptr* psVar4;
        shared_ptr<SkyBoxType>* this_00;
        SkyBoxType* this_01;
        BuildRequest* pBVar5;
        undefined* puVar6;
        Layout* pLVar7;
        vector* this_02;
        Model* this_03;
        undefined** ppuVar8;
        undefined1* this_04;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_38->~AutoSingleton("Sky_Box");
        this_04 = m_skySettings;
        iVar3 = this_04->GetX();
        if (iVar3 == -1) {
            ppuVar8 = &DataStatus::MISSING;
        } else {
            psVar4 = (shared_ptr*)this_04->second();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if (!bVar1) {
                iVar3 = this_04->GetX();
                psVar4 = ConfigProvider::GetConfig<SkyBoxType>(param_3, iVar3, (DataStatus**)0);
                this_04->SetSkyBox(psVar4);
            }
            psVar4 = (shared_ptr*)this_04->second();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if (bVar1) {
                this_00 = (shared_ptr<SkyBoxType>*)this_04->second();
                this_01 = (SkyBoxType*)shared_ptr<SkyBoxType>::operator->(this_00);
                pBVar5 = (BuildRequest*)this_04->second();
                puVar6 = (undefined*)this_01->GetStaticSkyModel(param_2, param_4, pBVar5);
                if (puVar6 == DataStatus::NOTLOADED) {
                    return puVar6;
                }
                if (puVar6 == DataStatus::MISSING) {
                    return puVar6;
                }
                pLVar7 = (Layout*)this_04->second();
                this_02 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)param_2);
                this_03 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_02);
                if (this_03->TexturesReady() == '\0') {
                    return DataStatus::NOTLOADED;
                }
                pLVar7 = (Layout*)this_04->second();
                psVar4 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)param_2);
                shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)param_1, psVar4);
                ppuVar8 = &DataStatus::READY;
            } else {
                ppuVar8 = &DataStatus::NOTLOADED;
            }
        }
        return *ppuVar8;
    }

    // 0x1004afdb0, 176 bytes, placed by class name and debug map
    // MapEnvironmentSettings::GetEnvironmentCubeMap(shared_ptr<render::TextureCube>&, graphics::RT7Core*, int) const
    undefined* MapEnvironmentSettings::GetEnvironmentCubeMap(shared_ptr* param_1, RT7Core* param_2, int param_3) {
        int iVar2;
        undefined** ppuVar3;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];
        AutoSingleton<ShaderThreadPoolSingleton> local_28[8];

        local_28->~AutoSingleton("Environment_Map");
        if (param_3 == -1) {
            ppuVar3 = &DataStatus::MISSING;
        } else {
            iVar2 = param_2->GetTextureManager();
            local_38->GetDefaultTextureCube(iVar2, SUB41(param_3, 0));
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)param_1,
                                                       (shared_ptr*)local_38);
            local_38->~shared_ptr();
            if (shared_ptr::operator_cast_to_bool(param_1)) {
                ppuVar3 = &DataStatus::READY;
            } else {
                ppuVar3 = &DataStatus::NOTLOADED;
            }
        }
        return *ppuVar3;
    }

    // 0x1004afe60, 224 bytes, placed by class name and debug map
    // MapEnvironmentSettings::operator==(MapEnvironmentSettings const&) const
    /* MapEnvironmentSettings::TEMPNAMEPLACEHOLDERVALUE(MapEnvironmentSettings
   const&) const */

    undefined8 MapEnvironmentSettings::operator==(MapEnvironmentSettings* param_1) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = EnvLightingSettings::operator==((EnvLightingSettings*)this, (EnvLightingSettings*)param_1);
        if (((((cVar1 == '\0') ||
               (cVar1 = EnvFogSettings::operator==((EnvFogSettings*)&field_40, (EnvFogSettings*)&param_1->field_40),
                cVar1 == '\0')) ||
              (cVar1 = EnvScatteringSettings::operator==((EnvScatteringSettings*)&m_scatteringSettings,
                                                         (EnvScatteringSettings*)&param_1->m_scatteringSettings),
               cVar1 == '\0')) ||
             ((cVar1 = EnvToneMapSettings::operator==((EnvToneMapSettings*)&m_toneMapSettings,
                                                      (EnvToneMapSettings*)&param_1->m_toneMapSettings),
               cVar1 == '\0' || (cVar1 = EnvBloomSettings::operator==((EnvBloomSettings*)&m_bloomSettings,
                                                                      (EnvBloomSettings*)&param_1->m_bloomSettings),
                                 cVar1 == '\0')))) ||
            ((cVar1 =
                  EnvSkySettings::operator==((EnvSkySettings*)m_skySettings, (EnvSkySettings*)param_1->m_skySettings),
              cVar1 == '\0' ||
                  ((cVar1 = EnvReflectionSettings::operator==((EnvReflectionSettings*)&m_reflectionSettings,
                                                              (EnvReflectionSettings*)&param_1->m_reflectionSettings),
                    cVar1 == '\0' ||
                        (cVar1 = EnvColourGradingSettings::operator==((EnvColourGradingSettings*)&field_528,
                                                                      (EnvColourGradingSettings*)&param_1->field_528),
                         cVar1 == '\0')))))) {
            return 0;
        }
        uVar2 = EnvLightProbeSettings::operator==((EnvLightProbeSettings*)&m_pLightProbeSettings,
                                                  (EnvLightProbeSettings*)&param_1->m_pLightProbeSettings);
        return uVar2;
    }

    // 0x1004aff80, 240 bytes, placed by class name and debug map
    // MapEnvironmentSettings::hash() const
    ulong MapEnvironmentSettings::hash() {
        ulong uVar1;
        ulong local_20;

        local_20 = 0;
        uVar1 = hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&field_40)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&m_scatteringSettings)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&m_toneMapSettings)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&m_bloomSettings)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = m_skySettings->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&m_reflectionSettings)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&field_528)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&m_pLightProbeSettings)->hash();
        hash_combine(&local_20, uVar1);
        return local_20;
    }

} // namespace jag::game
