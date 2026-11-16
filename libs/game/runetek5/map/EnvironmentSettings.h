// libs/game/runetek5/map/EnvironmentSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EnvColourGradingSettings {
    public:
        void GetColourRemapIDs() const;
        uint8_t* GetColourRemapWeightings() const;
        EnvColourGradingSettings(const EnvColourGradingSettings& envColourGradingSettings);
        ~EnvColourGradingSettings();
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        bool operator==(const EnvColourGradingSettings& envColourGradingSettings) const;
        unsigned long hash() const;
        EnvColourGradingSettings();

    private:
        float field_0;
        uint8_t _unknown_4[60];
        uint8_t m_colourRemapWeightings[1];
        uint8_t _unknown_65[7];
    };

    class EnvFogSettings {
    public:
        unsigned int GetFogDepth() const;
        float GetFogMaxDistance() const;
        float GetFogConstantAngleFalloff() const;
        unsigned int GetFogRGBA() const;
        float GetFogDepthAngleFalloff() const;
        uint32_t GetFogAngleOffset() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        uint32_t operator==(const EnvFogSettings& envFogSettings) const;
        unsigned long hash() const;
        EnvFogSettings();

    private:
        bool field_0;
        uint8_t _unknown_1[3];
        unsigned int m_fogRGBA;
        unsigned int m_fogDepth;
        float m_fogMaxDistance;
        float m_fogConstantAngleFalloff;
        float m_fogDepthAngleFalloff;
        float field_24;
        uint8_t _unknown_28[4];
    };

    class EnvLightingSettings {
    public:
        float GetAmbientLight() const;
        float GetEnvMapIrradianceScale() const;
        unsigned int GetSunRGBA() const;
        Vector2T<int>* GetSunPosition() const;
        float GetContrast() const;
        float GetSunlightShadowStrength() const;
        float GetSpecularHorzOcclusionScale() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        uint64_t operator==(const EnvLightingSettings& envLightingSettings) const;
        unsigned long hash() const;
        EnvLightingSettings();

    private:
        unsigned int m_sunRGBA;
        uint8_t _unknown_4[12];
        float m_ambientLight;
        float m_contrast;
        float field_24;
        float m_specularHorzOcclusionScale;
        float m_envMapIrradianceScale;
        float m_sunlightShadowStrength;
        uint8_t _unknown_40[4];
    };

    class EnvScatteringSettings {
    public:
        void GetSimpleScatteringParams() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        uint64_t operator==(const EnvScatteringSettings& envScatteringSettings) const;
        unsigned long hash() const;
        EnvScatteringSettings();

    private:
        ReturnValue field_0;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[12];
        uint32_t field_28;
        uint8_t _unknown_32[12];
        uint32_t field_44;
        uint8_t _unknown_48[16];
        bool field_64;
        uint8_t _unknown_65[7];
    };

    class EnvToneMapSettings {
    public:
        void GetToneMapParams() const;
        EnvironmentOverrideParam<bool> GetToneMappingEnabled() const;
        unsigned int GetToneMapOperator() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        uint64_t operator==(const EnvToneMapSettings& envToneMapSettings) const;
        unsigned long hash() const;
        EnvToneMapSettings();

    private:
        EnvironmentOverrideParam<bool> m_toneMappingEnabled;
        uint8_t _unknown_1[3];
        unsigned int m_toneMapOperator;
        PostProcessParams field_8;
    };

    class EnvVolumetricSettings {
    public:
        void GetParams() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        EnvVolumetricSettings();

    private:
        float field_0;
        float field_4;
        float field_8;
        float field_12;
        float field_16;
        float field_20;
        float field_24;
        uint32_t field_28;
        uint8_t _unknown_32[24];
    };

    // 0x100455010
    EnvColourGradingSettings::~EnvColourGradingSettings() {
        m_colourRemapWeightings->~fixed_vector();
        field_8.~fixed_vector();
    }

    // 0x100455270
    EnvSkySettings::EnvSkySettings(const EnvSkySettings& envSkySettings)
        : m_skyBoxID(envSkySettings.m_skyBoxID), field_8(&envSkySettings.field_8), field_24(envSkySettings.field_24) {}

    // 0x100455320
    EnvColourGradingSettings::EnvColourGradingSettings(const EnvColourGradingSettings& envColourGradingSettings)
        : field_0(envColourGradingSettings.field_0) {
        new (&field_8) eastl::fixed_vector<int, 3ul>(&envColourGradingSettings.field_8);
        new (m_colourRemapWeightings) eastl::fixed_vector<float, 3ul>(envColourGradingSettings.m_colourRemapWeightings);
    }

    // 0x1004558a0
    EnvSkySettings::~EnvSkySettings() {
        field_24->~ActiveComponent();
        field_8.~shared_ptr();
    }

    // 0x10048fc90
    float EnvLightingSettings::GetContrast() const {
        return m_fogDepthAngleFalloff;
    }

    // 0x10048fca0
    float EnvLightingSettings::GetSunlightShadowStrength() const {
        return m_gameScale;
    }

    // 0x10048fce0
    float EnvLightingSettings::GetSpecularHorzOcclusionScale() const {
        return m_mainRenderTargetScaleFactor;
    }

    // 0x1004b0700
    EnvLightingSettings::EnvLightingSettings() {
        new (&field_4) math::Vector3T();
        SetDefaults();
    }

    // 0x1004b0730
    EnvFogSettings::EnvFogSettings() {
        SetDefaults();
    }

    // 0x1004b0740
    EnvScatteringSettings::EnvScatteringSettings() : graphics::SimpleScatteringParams() {
        SetDefaults();
    }

    // 0x1004b0760
    EnvVolumetricSettings::EnvVolumetricSettings() : graphics::VolumetricScatteringParams() {
        SetDefaults();
    }

    // 0x1004b0780
    EnvToneMapSettings::EnvToneMapSettings() {
        new (field_8) postprocess::PostProcessParams();
        SetDefaults();
    }

    // 0x1004b0810
    EnvColourGradingSettings::EnvColourGradingSettings() : field_8(3), m_colourRemapWeightings(3) {
        SetDefaults();
    }

} // namespace jag::game

namespace jag {
    // 0x1004558e0
    ref_counter_shared<game::MapEnvironmentSettings>::ref_counter_shared(
        unsigned long arg1, game::MapEnvironmentSettings* mapEnvironmentSettings)
        : ref_counter_base() {}

    // 0x100455920
    void ref_counter_shared<game::MapEnvironmentSettings>::DeleteData() {
        ref_counter_shared<game::MapEnvironmentSettings> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MapEnvironmentSettings*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MapEnvironmentSettings();
                    prVar1 = (ref_counter_shared<game::MapEnvironmentSettings> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 672;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100455970
    game::MapEnvironmentSettings* placement_new<game::MapEnvironmentSettings>(void* arg1) {
        new (arg1) game::MapEnvironmentSettings();
        return arg1;
    }

} // namespace jag
