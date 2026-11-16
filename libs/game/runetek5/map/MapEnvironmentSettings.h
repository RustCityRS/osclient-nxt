// libs/game/runetek5/map/MapEnvironmentSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EnvReflectionSettings {
    public:
        unsigned int GetEnvironmentMaterialID() const;
        EnvReflectionSettings();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void SetDefaults();
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        uint32_t operator==(const EnvReflectionSettings& envReflectionSettings) const;
        unsigned long hash() const;

    private:
        bool field_0;
        uint8_t _unknown_1[3];
        unsigned int m_environmentMaterialID;
        uint8_t _unknown_8[4];
    };

    class MapEnvironmentSettings {
    public:
        void GetLightingSettings() const;
        void GetFogSettings();
        void GetFogSettings() const;
        uint8_t* GetScatteringSettings() const;
        uint8_t* GetToneMapSettings() const;
        uint8_t* GetBloomSettings() const;
        uint8_t* GetColourGradingSettings() const;
        uint8_t operator!=(const MapEnvironmentSettings& mapEnvironmentSettings) const;
        CoordMapSquare* GetReflectionSettings();
        EnvSkySettings GetSkySettings() const;
        MapEnvironmentSettings(const MapEnvironmentSettings& mapEnvironmentSettings);
        ~MapEnvironmentSettings();
        float* GetLightProbeSettings();
        uint8_t* GetVolumetricSettings() const;
        MapEnvironmentSettings();
        void SetToDefaults();
        MapEnvironmentSettings(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        uint8_t* GetSkyBoxCubeMap(shared_ptr<render::TextureCube>& textureCube, graphics::RT7Core* rt7Core,
                                  ConfigProvider* configProvider) const;
        uint8_t* GetSkyBoxModel(shared_ptr<graphics::Model>& model, graphics::RT7Core* rt7Core,
                                ConfigProvider* configProvider, AssetBuilder& assetBuilder) const;
        uint8_t* GetEnvironmentCubeMap(shared_ptr<render::TextureCube>& textureCube, graphics::RT7Core* rt7Core,
                                       int arg3) const;
        uint64_t operator==(const MapEnvironmentSettings& mapEnvironmentSettings) const;
        unsigned long hash() const;

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
        float field_16;
        float field_20;
        float field_24;
        float field_28;
        float field_32;
        float field_36;
        uint64_t field_40;
        uint8_t _unknown_48[4];
        uint64_t field_52;
        uint64_t field_60;
        uint8_t _unknown_68[12];
        uint64_t m_scatteringSettings;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
        uint64_t m_volumetricSettings;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
        uint8_t m_toneMapSettings;
        uint8_t _unknown_241[207];
        uint64_t m_bloomSettings;
        uint32_t field_456;
        uint8_t _unknown_460[4];
        EnvSkySettings m_skySettings;
        uint8_t _unknown_512[8];
        uint64_t m_reflectionSettings;
        uint8_t _unknown_528[120];
        uint64_t m_pLightProbeSettings;
        uint64_t field_656;
    };

    // 0x100441660
    uint8_t MapEnvironmentSettings::operator!=(const MapEnvironmentSettings& mapEnvironmentSettings) const {
        return *this == mapEnvironmentSettings ^ 1;
    }

    // 0x100441a20
    CoordMapSquare* MapEnvironmentSettings::GetReflectionSettings() {
        return (CoordMapSquare*)&m_reflectionSettings;
    }

    // 0x100441a50
    EnvSkySettings MapEnvironmentSettings::GetSkySettings() const {
        return &field_464;
    }

    // 0x100453f80
    MapEnvironmentSettings::MapEnvironmentSettings(const MapEnvironmentSettings& mapEnvironmentSettings)
        : MakeSharedPool<MapEnvironmentSettings, 48>() {
        float fVar8 = mapEnvironmentSettings.field_36;
        field_32 = mapEnvironmentSettings.field_32;
        field_36 = fVar8;
        unsigned int uVar11 = mapEnvironmentSettings.field_0;
        uint32_t uVar12 = *(uint32_t*)&mapEnvironmentSettings.field_4;
        uint64_t uVar1 = mapEnvironmentSettings.field_8;
        fVar8 = mapEnvironmentSettings.field_20;
        float fVar9 = mapEnvironmentSettings.field_24;
        float fVar10 = mapEnvironmentSettings.field_28;
        field_16 = mapEnvironmentSettings.field_16;
        field_20 = fVar8;
        field_24 = fVar9;
        field_28 = fVar10;
        field_0 = uVar11;
        *(uint32_t*)&field_4 = uVar12;
        field_8 = uVar1;
        uVar1 = mapEnvironmentSettings.field_40;
        uint64_t uVar2 = *(uint64_t*)&mapEnvironmentSettings.field_48;
        uint64_t uVar3 = mapEnvironmentSettings.field_60;
        field_52 = mapEnvironmentSettings.field_52;
        field_60 = uVar3;
        field_40 = uVar1;
        *(uint64_t*)&field_48 = uVar2;
        uVar1 = mapEnvironmentSettings.field_88;
        uVar2 = mapEnvironmentSettings.field_96;
        uVar3 = mapEnvironmentSettings.field_104;
        uint64_t uVar4 = mapEnvironmentSettings.field_112;
        uint64_t uVar5 = mapEnvironmentSettings.field_120;
        uint64_t uVar6 = mapEnvironmentSettings.field_128;
        uint64_t uVar7 = mapEnvironmentSettings.field_136;
        m_scatteringSettings = mapEnvironmentSettings.m_scatteringSettings;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        uVar1 = mapEnvironmentSettings.field_152;
        field_144 = mapEnvironmentSettings.field_144;
        field_152 = uVar1;
        uVar1 = mapEnvironmentSettings.m_volumetricSettings;
        uVar2 = mapEnvironmentSettings.field_168;
        uVar3 = mapEnvironmentSettings.field_176;
        uVar4 = mapEnvironmentSettings.field_184;
        uVar5 = mapEnvironmentSettings.field_192;
        uVar6 = mapEnvironmentSettings.field_200;
        uVar7 = mapEnvironmentSettings.field_216;
        field_208 = mapEnvironmentSettings.field_208;
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        m_volumetricSettings = uVar1;
        field_168 = uVar2;
        uVar1 = mapEnvironmentSettings.field_232;
        field_224 = mapEnvironmentSettings.field_224;
        field_232 = uVar1;
        _memcpy(&m_toneMapSettings, &mapEnvironmentSettings.m_toneMapSettings, 208);
        m_bloomSettings = mapEnvironmentSettings.m_bloomSettings;
        field_456 = mapEnvironmentSettings.field_456;
        new (m_skySettings) EnvSkySettings(mapEnvironmentSettings.m_skySettings);
        m_reflectionSettings = mapEnvironmentSettings.m_reflectionSettings;
        new (&field_528) EnvColourGradingSettings(mapEnvironmentSettings.field_528);
        uVar1 = mapEnvironmentSettings.field_656;
        m_pLightProbeSettings = mapEnvironmentSettings.m_pLightProbeSettings;
        field_656 = uVar1;
    }

    // 0x100454fd0
    MapEnvironmentSettings::~MapEnvironmentSettings() {
        field_528.~EnvColourGradingSettings();
        m_skySettings->~EnvSkySettings();
    }

    // 0x1004797d0
    float* MapEnvironmentSettings::GetLightProbeSettings() {
        return &m_stippleFarClipParams;
    }

    // 0x1004900d0
    uint8_t* MapEnvironmentSettings::GetVolumetricSettings() const {
        return &field_160;
    }

    // 0x1004af8f0
    void EnvReflectionSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        short sVar2 = arg1.g2s();
        m_environmentMaterialID = (int)sVar2;
        field_0 = arg1.g1() == '\x01';
    }

    // 0x1004af930
    void EnvReflectionSettings::SetDefaults() {
        field_0 = false;
        m_environmentMaterialID = 4294967295;
    }

    // 0x1004afa50
    void EnvReflectionSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        long lVar1 = environmentOverride.GetGLVertexBuffers();
        ((lVar1 + 4))->ApplyTo<postprocess::ToneMapOperator>(m_environmentMaterialID);
    }

    // 0x1004aff60
    uint32_t EnvReflectionSettings::operator==(const EnvReflectionSettings& envReflectionSettings) const {
        if (field_0 == envReflectionSettings.field_0) {
            return m_environmentMaterialID == envReflectionSettings.m_environmentMaterialID;
        }
        return 0;
    }

    // 0x1004b00a0
    unsigned long EnvReflectionSettings::hash() const {

        return local_20 = 0;
        hash_combine<bool>(&local_20, &field_0);
        hash_combine<int>(&local_20, (int*)&m_environmentMaterialID);
        return local_20;
    }

    // 0x1004b0800
    EnvReflectionSettings::EnvReflectionSettings() {
        SetDefaults();
    }

} // namespace jag::game
