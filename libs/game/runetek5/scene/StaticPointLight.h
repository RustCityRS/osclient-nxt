// libs/game/runetek5/scene/StaticPointLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class StaticPointLight {
    public:
        void SetLevel(int arg1);
        Option<float>* GetInfluenceRanges();
        Option<float>* GetInfluenceRanges() const;
        bool GetUseTerrainHeight() const;
        shared_ptr GetLightType() const;
        int GetSourceMapSquareX() const;
        uint32_t GetDynamicID() const;
        int GetScriptId() const;
        unsigned int GetLevel() const;
        float GetAttenuationFalloff() const;
        unsigned int GetSourceMapSquareZ() const;
        unsigned int GetPhase() const;
        Vector2T<int>* GetPosition() const;
        uint8_t GetLightLevelsBelow() const;
        void SetLightsLevelsAbove(bool arg1);
        FlickerType GetFlickerType() const;
        uint8_t GetShadowsEnabled() const;
        void SetShadowsEnabled(bool arg1);
        void SetAttenuation(float arg1);
        void SetBacklightRatio(float arg1);
        void SetPosition(const math::Vector3T<float>& vector3);
        void SetRGB(unsigned int arg1);
        void SetFlickerType(constants::LightConstants::FlickerType flickerType);
        ~StaticPointLight();
        bool IsValid() const;
        void AddTerrainHeight(unsigned int arg1);
        unsigned int GetRadius() const;
        unsigned int GetRGB() const;
        float GetShadowStrength() const;
        float GetBacklightRatio() const;
        StaticPointLight();
        void AssignCalculatedParameters();
        StaticPointLight(const StaticPointLight* staticPointLight, const math::Vector3T<float>& vector3, int arg3);
        bool GetLightLevelsAbove() const;
        unsigned int GetLightTypeToLoad() const;
        float GetIntensity() const;
        void Initialise(PacketT<Array<unsigned char>>& arg1);
        void SetRadiusGrid(unsigned int arg1, bool arg2);
        void SetRadius(float arg1, bool arg2);
        bool AffectsLevel(int arg1) const;
        unsigned long LoadLightType(ConfigProvider* configProvider);
        float CalculateIntensity(ConfigProvider* configProvider, unsigned int arg2, bool arg3);
        uint8_t* GetWorldAABB();
        void CalculatePositionJitter(ConfigProvider* configProvider,
                                     graphics::PointLightPositionJitterData& pointLightPositionJitterData);
        bool operator==(const StaticPointLight& staticPointLight) const;
        void SetDynamicID(int arg1);
        void SetUseTerrainHeight(bool arg1);
        void SetIntensity(float arg1);
        void SetShadowStrength(float arg1);
        void SetLightsLevelsBelow(bool arg1);
        void SetSourceMapSquare(int arg1, int arg2);
        static float m_positionJitterOverrideRadius;                   // = 6.0f
        static int32_t m_positionJitterOverrideRadiusRandom;           // = 1
        static int32_t m_positionJitterOverrideIntensityStrength;      // = 1050253722
        static int32_t m_positionJitterOverrideMoveTimeMS;             // = 120
        static int32_t m_positionJitterOverrideMoveTimeOffsetRandomMS; // = 60
        static int32_t m_positionJitterOverrideMovePower;              // = 1058642330
        static bool m_forceShadowsOn;
        static bool m_positionJitterOverride;
        static Array<double> mPerlinNoise; // = Array<double>()

    private:
        unsigned int m_level;
        uint8_t _unknown_4[12];
        int m_sourceMapSquareX;
        uint32_t m_sourceMapSquareZ;
        uint8_t m_lightLevelsBelow;
        bool m_lightLevelsAbove;
        uint8_t _unknown_26[30];
        FlickerType m_flickerType;
        uint32_t field_60;
        unsigned int m_rGB;
        unsigned int m_radius;
        unsigned int field_72;
        bool m_useTerrainHeight;
        uint8_t _unknown_77[7];
        unsigned int m_lightTypeToLoad;
        shared_ptr m_lightType;
        int m_scriptId;
        int m_dynamicID;
        float m_intensity;
        float m_attenuationFalloff;
        float m_backlightRatio;
        bool m_shadowsEnabled;
        uint8_t _unknown_125[3];
        float m_shadowStrength;
        uint32_t field_132;
        unsigned int m_phase;
        uint32_t field_140;
        uint32_t field_144;
        uint8_t m_valid;
        uint8_t field_149;
        uint8_t _unknown_150[18];
    };

    class VisibleShadowCastingLightInfo {
    public:
        ~VisibleShadowCastingLightInfo();
        VisibleShadowCastingLightInfo(const shared_ptr<LightSource>& lightSource, unsigned long long arg2);
        VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo&& visibleShadowCastingLightInfo);
        VisibleShadowCastingLightInfo(const VisibleShadowCastingLightInfo& visibleShadowCastingLightInfo);
        VisibleShadowCastingLightInfo* operator=(VisibleShadowCastingLightInfo&& visibleShadowCastingLightInfo);

    private:
        uint8_t _unknown_0[16];
        unsigned long long field_16;
    };

    // 0x1001cd9f0
    uint8_t StaticPointLight::GetShadowsEnabled() const {
        return m_shadowsEnabled;
    }

    // 0x1001cdac0
    unsigned long
    LightShadowImportanceKeyGenerator::CalculateShadowCastingImportanceKey(const ViewTransforms& viewTransforms,
                                                                           const math::Vector3T<float>& vector3,
                                                                           const math::Sphere& sphere, float arg4) {
        uint64_t local_68[2];
        uint64_t local_58[2];
        uint64_t local_48[2];
        uint64_t local_38[2];

        local_38[0] = viewTransforms.GetViewVector();
        local_48[0] = math::Vector3Normalize<float>(*local_38);
        float fVar2 = (float)sphere.GetOutlineRadiusAdjustment();
        local_58[0] = *fVar2 * *local_48;
        local_68[0] = vector3 + *local_58;
        fVar2 = (float)local_68->Length();
        unsigned int uVar1 = math::RoundFloatToInt(fVar2);
        float local_24 = (float)~uVar1 * field_0;
        fVar2 = (float)sphere.GetOutlineRadiusAdjustment();
        return (long)(arg4 * field_8 + fVar2 * field_4 + local_24) & 4294967295;
    }

    // 0x1001cdd20
    void StaticPointLight::SetShadowsEnabled(bool arg1) {
        m_shadowsEnabled = arg1;
    }

    // 0x1001cdd30
    void StaticPointLight::SetAttenuation(float arg1) {
        m_attenuationFalloff = arg1;
    }

    // 0x1001cdd40
    void StaticPointLight::SetBacklightRatio(float arg1) {
        m_backlightRatio = arg1;
    }

    // 0x1001cdd50
    void StaticPointLight::SetPosition(const math::Vector3T<float>& vector3) {
        field_149 = 1;
        field_4.SetXYZ(vector3);
    }

    // 0x1001cdf70
    void StaticPointLight::SetRGB(unsigned int arg1) {
        m_status = arg1;
    }

    // 0x1001cdf80
    void StaticPointLight::SetFlickerType(constants::LightConstants::FlickerType flickerType) {
        m_flickerType = flickerType;
        AssignCalculatedParameters();
    }

    // 0x1001df2c0
    VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(const shared_ptr<LightSource>& lightSource,
                                                                 unsigned long long arg2)
        : weak_ptr(lightSource), field_16(arg2) {}

    // 0x1001eedb0
    StaticPointLight::~StaticPointLight() {
        m_lightType->~shared_ptr();
        field_32.~Array();
    }

    // 0x1003de570
    void StaticPointLight::AddTerrainHeight(unsigned int arg1) {
        if (m_useTerrainHeight == false) {
            LogAssert("m_useTerrainHeight",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "StaticPointLight.h",
                      93, nullptr);
        }
        float* pfVar1 = &field_4[1];
        *pfVar1 = (float)arg1 + *pfVar1;
    }

    // 0x100429b10
    unsigned int StaticPointLight::GetRGB() const {
        return m_amplitude;
    }

    // 0x100429c00
    float StaticPointLight::GetShadowStrength() const {
        return m_materialAnimationH;
    }

    // 0x100431b50
    float StaticPointLight::GetBacklightRatio() const {
        return m_backlightRatio;
    }

    // 0x10043b770
    bool StaticPointLight::GetLightLevelsAbove() const {
        return m_toggled;
    }

    // 0x10043b780
    unsigned int StaticPointLight::GetLightTypeToLoad() const {
        return m_loopLength;
    }

    // 0x10043b790
    float StaticPointLight::GetIntensity() const {
        return m_intensity;
    }

    // 0x1004981c0
    void StaticPointLight::SetDynamicID(int arg1) {
        m_dynamicID = arg1;
    }

    // 0x100498720
    void StaticPointLight::SetUseTerrainHeight(bool arg1) {
        m_useTerrainHeight = arg1;
    }

    // 0x100498730
    void StaticPointLight::SetIntensity(float arg1) {
        m_intensity = arg1;
    }

    // 0x100498740
    void StaticPointLight::SetShadowStrength(float arg1) {
        auto pfVar1 = std::clamp<float>(arg1, 0.0, 1.0);
        m_shadowStrength = *pfVar1;
    }

    // 0x100498790
    void StaticPointLight::SetLightsLevelsBelow(bool arg1) {
        m_show = arg1;
    }

    // 0x1004987a0
    void StaticPointLight::SetSourceMapSquare(int arg1, int arg2) {
        m_startPosition = arg1;
        field_20 = arg2;
    }

} // namespace jag::game

namespace jag::math {
    // 0x1001cdd70
    Vector3T<float> operator* <float>(const Vector3T<float>& vector3, const Matrix44T<float>& matrix44) {
        uint64_t uVar3;

        float local_24 = *(float*)vector3;
        float* pfVar1 = &matrix44[0];
        local_24 = local_24 * *pfVar1;
        float local_1c = *(float*)(vector3 + 4);
        pfVar1 = &matrix44[1];
        local_1c = local_1c * *pfVar1 + local_24;
        local_24 = *(float*)(vector3 + 8);
        pfVar1 = &matrix44[2];
        local_24 = local_24 * *pfVar1 + local_1c;
        pfVar1 = &matrix44[3];
        local_24 = local_24 + *pfVar1;
        local_1c = *(float*)vector3;
        long lVar2 = matrix44[0];
        local_1c = local_1c * *(float*)(lVar2 + 4);
        float local_20 = *(float*)(vector3 + 4);
        lVar2 = matrix44[1];
        local_20 = local_20 * *(float*)(lVar2 + 4) + local_1c;
        local_1c = *(float*)(vector3 + 8);
        lVar2 = matrix44[2];
        local_1c = local_1c * *(float*)(lVar2 + 4) + local_20;
        lVar2 = matrix44[3];
        local_1c = local_1c + *(float*)(lVar2 + 4);
        local_20 = *(float*)vector3;
        lVar2 = matrix44[0];
        local_20 = local_20 * *(float*)(lVar2 + 8);
        float local_28 = *(float*)(vector3 + 4);
        lVar2 = matrix44[1];
        local_28 = local_28 * *(float*)(lVar2 + 8) + local_20;
        local_20 = *(float*)(vector3 + 8);
        lVar2 = matrix44[2];
        local_20 = local_20 * *(float*)(lVar2 + 8) + local_28;
        lVar2 = matrix44[3];
        ColourHSL local_38(local_24, local_1c, local_20 + *(float*)(lVar2 + 8));
        uVar3._0_4_ = local_38.field_0;
        uVar3._4_4_ = local_38.field_4;
        return uVar3;
    }

} // namespace jag::math
