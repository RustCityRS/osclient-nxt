// projects/osclient/environment/SunlightOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class SunlightOptions {
    public:
        GetAmbientColour() const;
        void SetAmbientColour(math::Vector3T<float>);
        float GetAmbientIntensity() const;
        void SetAmbientIntensity(float);
        GetSunColour() const;
        void SetSunColour(math::Vector3T<float>);
        GetSunElevation() const;
        GetSunAngle() const;
        void SetSunElevation(float);
        void SetSunAngle(float);
        GetSunIntensity() const;
        void SetSunIntensity(float);
        void SetShadowQuality(GraphicsQuality);
        void SetShadowStrength(float);
        void CalculateSunDirection();
        void GetAdjustedSunColour() const;
        void GetAdjustedAmbientColour() const;
        void SetSunColour(float, float, float);
        void SetSunDirection(math::Vector3T<float>);
        void SetSunDirection(float, float, float);
        void SetAmbientColour(float, float, float);
        SunlightOptions* operator=(SunlightOptions&&);
        SunlightOptions* operator=(SunlightOptions const&);
        GetSunDirection() const;
        float GetShadowStrength() const;
        GetShadowQuality() const;
        SunlightOptions();

        // data members, from how the methods use this: 64 bytes
        float field_0;             // offset 0
        float field_4;             // offset 4
        float field_8;             // offset 8
        float m_sunElevation;      // offset 12
        float m_sunAngle;          // offset 16
        undefined8 m_sunDirection; // offset 20
        char _unknown_28[4];
        float m_sunIntensity; // offset 32
        char _unknown_36[12];
        float m_ambientIntensity;   // offset 48
        float m_shadowStrength;     // offset 52
        undefined4 m_shadowQuality; // offset 56
        char _unknown_60[4];
    };

    // 0x100064160, 16 bytes, inline, placed by class name and debug map
    // SunlightOptions::GetAmbientColour() const
    undefined8 SunlightOptions::GetAmbientColour() {
        return *(undefined8*)&field_36;
    }

    // 0x1000641a0, 16 bytes, inline, placed by class name
    // SunlightOptions::GetAmbientIntensity() const
    float SunlightOptions::GetAmbientIntensity() {
        return m_ambientIntensity;
    }

    // 0x1000641c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightOptions::GetSunColour() const
    /* DebugEllipsoid<DebugDataBasic>::GetCentrePos() const */

    undefined8 DebugEllipsoid<DebugDataBasic>::GetCentrePos() {
        return *(undefined8*)this;
    }

    // 0x1000641f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightOptions::GetSunElevation() const
    /* game::EntityHighlightGlobalState::GetOutlineRadiusAdjustment() const */

    undefined4 game::EntityHighlightGlobalState::GetOutlineRadiusAdjustment() {
        return m_outlineRadiusAdjustment;
    }

    // 0x100064210, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightOptions::GetSunAngle() const
    /* game::EnvLightingSettings::GetAmbientLight() const */

    float game::EnvLightingSettings::GetAmbientLight() {
        return m_ambientLight;
    }

    // 0x100064240, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightOptions::GetSunIntensity() const
    /* game::EnvLightingSettings::GetEnvMapIrradianceScale() const */

    float game::EnvLightingSettings::GetEnvMapIrradianceScale() {
        return m_envMapIrradianceScale;
    }

    // 0x100076a90, 96 bytes, inline, placed by class name
    // SunlightOptions::operator=(SunlightOptions&&)
    /* SunlightOptions::TEMPNAMEPLACEHOLDERVALUE(SunlightOptions const&)
    */

    SunlightOptions* SunlightOptions::operator=(SunlightOptions* param_1) {
        float fVar1;

        SetXYZ(param_1);
        fVar1 = param_1->m_sunAngle;
        m_sunElevation = param_1->m_sunElevation;
        m_sunAngle = fVar1;
        (&m_sunDirection, (Vector3T*)&param_1->m_sunDirection)->SetXYZ();
        m_sunIntensity = param_1->m_sunIntensity;
        (&field_36, (Vector3T*)&param_1->field_36)->SetXYZ();
        fVar1 = param_1->m_shadowStrength;
        m_ambientIntensity = param_1->m_ambientIntensity;
        m_shadowStrength = fVar1;
        m_shadowQuality = param_1->m_shadowQuality;
        return this;
    }

    // 0x1001be5b0, 16 bytes, inline, placed by class name
    // SunlightOptions::GetSunDirection() const
    undefined8 SunlightOptions::GetSunDirection() {
        return m_sunDirection;
    }

    // 0x1001be5c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightOptions::GetShadowStrength() const
    /* math::Histogram<float, 10>::GetMean() const */

    undefined4 math::Histogram<float, 10>::GetMean(Histogram<float, 10>* this) {
        return *(undefined4*)(this + 52);
    }

    // 0x1001be5d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightOptions::GetShadowQuality() const
    /* game::MSIType::GetSpriteID() const */

    undefined4 game::MSIType::GetSpriteID() {
        return m_spriteID;
    }

    // 0x1001be5d0: the linker folded this into SunlightOptions::GetShadowQuality() const, which has identical code
    int ScriptedPointLight::GetScriptID() const;

    // 0x1001d4a80, 16 bytes, complete-object constructor, inline, placed by class name
    // SunlightOptions::SunlightOptions(): jumps straight to the base-object constructor

    // 0x1001d5250, 144 bytes, base-object constructor, inline, placed by class name
    // SunlightOptions::SunlightOptions()
    void SunlightOptions::SunlightOptions() {
        new (this) math::ColourHSL(1.0, 1.0, 1.0);
        m_sunElevation = 0.5;
        m_sunAngle = 0.0;
        new (&m_sunDirection, 1.0, -0.95, 1.0) math::ColourHSL();
        m_sunIntensity = 0.75;
        new (&field_36, 1.0, 1.0, 1.0) math::ColourHSL();
        m_ambientIntensity = 0.25;
        m_shadowStrength = 0.6;
        m_shadowQuality = 3;
        CalculateSunDirection(this);
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x1000641f0: the linker folded this into graphics::SunlightOptions::GetSunElevation() const, which has identical code
    float EnvFogSettings::GetFogMaxDistance() const;

    // 0x100064210: the linker folded this into graphics::SunlightOptions::GetSunAngle() const, which has identical code
    float EnvFogSettings::GetFogConstantAngleFalloff() const;

    // 0x100064210: the linker folded this into graphics::SunlightOptions::GetSunAngle() const, which has identical code
    float EnvLightingSettings::GetAmbientLight() const;

    // 0x100064240: the linker folded this into graphics::SunlightOptions::GetSunIntensity() const, which has identical code
    float EnvLightingSettings::GetEnvMapIrradianceScale() const;

} // namespace jag::game
