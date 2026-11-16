// projects/osclient/environment/SunlightOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class SunlightOptions {
    public:
        uint64_t GetAmbientColour() const;
        void SetAmbientColour(math::Vector3T<float> vector3);
        float GetAmbientIntensity() const;
        void SetAmbientIntensity(float arg1);
        uint64_t GetSunColour() const;
        void SetSunColour(math::Vector3T<float> vector3);
        uint32_t GetSunElevation() const;
        float GetSunAngle() const;
        void SetSunElevation(float arg1);
        void SetSunAngle(float arg1);
        float GetSunIntensity() const;
        void SetSunIntensity(float arg1);
        void SetShadowQuality(GraphicsQuality graphicsQuality);
        void SetShadowStrength(float arg1);
        void CalculateSunDirection();
        void GetAdjustedSunColour() const;
        void GetAdjustedAmbientColour() const;
        void SetSunColour(float arg1, float arg2, float arg3);
        void SetSunDirection(math::Vector3T<float> vector3);
        void SetSunDirection(float arg1, float arg2, float arg3);
        void SetAmbientColour(float arg1, float arg2, float arg3);
        SunlightOptions* operator=(SunlightOptions&& sunlightOptions);
        SunlightOptions* operator=(const SunlightOptions& sunlightOptions);
        uint64_t GetSunDirection() const;
        float GetShadowStrength() const;
        GraphicsQuality GetShadowQuality() const;
        SunlightOptions();

    private:
        float field_0;
        float field_4;
        float field_8;
        float m_sunElevation;
        float m_sunAngle;
        uint64_t m_sunDirection;
        uint8_t _unknown_28[4];
        float m_sunIntensity;
        uint8_t _unknown_36[12];
        float m_ambientIntensity;
        float m_shadowStrength;
        GraphicsQuality m_shadowQuality;
        uint8_t _unknown_60[4];
    };

    // 0x100064160
    uint64_t SunlightOptions::GetAmbientColour() const {
        return *(uint64_t*)&field_36;
    }

    // 0x1000641a0
    float SunlightOptions::GetAmbientIntensity() const {
        return m_ambientIntensity;
    }

    // 0x1000641c0
    uint64_t SunlightOptions::GetSunColour() const {
        return *(uint64_t*)this;
    }

    // 0x1000641f0
    uint32_t SunlightOptions::GetSunElevation() const {
        return m_outlineRadiusAdjustment;
    }

    // 0x100064210
    float SunlightOptions::GetSunAngle() const {
        return m_ambientLight;
    }

    // 0x100064240
    float SunlightOptions::GetSunIntensity() const {
        return m_envMapIrradianceScale;
    }

    // 0x100076a90
    SunlightOptions* SunlightOptions::operator=(SunlightOptions&& sunlightOptions) {
        SetXYZ(sunlightOptions);
        float fVar1 = sunlightOptions.m_sunAngle;
        m_sunElevation = sunlightOptions.m_sunElevation;
        m_sunAngle = fVar1;
        m_sunDirection.SetXYZ(sunlightOptions.m_sunDirection);
        m_sunIntensity = sunlightOptions.m_sunIntensity;
        field_36.SetXYZ(sunlightOptions.field_36);
        fVar1 = sunlightOptions.m_shadowStrength;
        m_ambientIntensity = sunlightOptions.m_ambientIntensity;
        m_shadowStrength = fVar1;
        m_shadowQuality = sunlightOptions.m_shadowQuality;
        return this;
    }

    // 0x1001be5b0
    uint64_t SunlightOptions::GetSunDirection() const {
        return m_sunDirection;
    }

    // 0x1001be5c0
    float SunlightOptions::GetShadowStrength() const {
        return *(uint32_t*)(this + 52);
    }

    // 0x1001be5d0
    GraphicsQuality SunlightOptions::GetShadowQuality() const {
        return m_spriteID;
    }

    // 0x1001be5d0: ScriptedPointLight::GetScriptID() const has the same machine code as SunlightOptions::GetShadowQuality() const

    // 0x1001d5250
    SunlightOptions::SunlightOptions()
        : math::ColourHSL(1.0, 1.0, 1.0), m_sunElevation(0.5), m_sunAngle(0.0), m_sunDirection(1.0, -0.95, 1.0),
          m_sunIntensity(0.75), field_36(1.0, 1.0, 1.0), m_ambientIntensity(0.25), m_shadowStrength(0.6),
          m_shadowQuality(3) {
        CalculateSunDirection();
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x1000641f0: EnvFogSettings::GetFogMaxDistance() const has the same machine code as graphics::SunlightOptions::GetSunElevation() const

    // 0x100064210: EnvFogSettings::GetFogConstantAngleFalloff() const has the same machine code as graphics::SunlightOptions::GetSunAngle() const

    // 0x100064210: EnvLightingSettings::GetAmbientLight() const has the same machine code as graphics::SunlightOptions::GetSunAngle() const

    // 0x100064240: EnvLightingSettings::GetEnvMapIrradianceScale() const has the same machine code as graphics::SunlightOptions::GetSunIntensity() const

} // namespace jag::game
