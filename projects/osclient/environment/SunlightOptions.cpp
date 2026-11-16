// projects/osclient/environment/SunlightOptions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "SunlightOptions.h"

namespace jag::graphics {
    // 0x100064170, 48 bytes, placed by class name and debug map
    // SunlightOptions::SetAmbientColour(math::Vector3T<float>)
    void SunlightOptions::SetAmbientColour(undefined8 param_1, undefined4 param_2, long param_3) {
        undefined8 local_18;
        undefined4 local_10;

        local_18 = param_1;
        local_10 = param_2;
        ((param_3 + 36))->SetXYZ((Vector3T*)&local_18);
    }

    // 0x1000641b0, 16 bytes, placed by class name and debug map
    // SunlightOptions::SetAmbientIntensity(float)
    void SunlightOptions::SetAmbientIntensity(float param_1) {
        m_ambientIntensity = param_1;
    }

    // 0x1000641d0, 32 bytes, placed by class name and debug map
    // SunlightOptions::SetSunColour(math::Vector3T<float>)
    void SunlightOptions::SetSunColour(undefined8 param_1, undefined4 param_2, Vector4T<float>* param_3) {
        undefined8 local_18;
        undefined4 local_10;

        local_18 = param_1;
        local_10 = param_2;
        math::Vector4T<float>::SetXYZ(param_3, (Vector3T*)&local_18);
    }

    // 0x100064220, 16 bytes, placed by class name
    // SunlightOptions::SetSunElevation(float)
    void SunlightOptions::SetSunElevation(float param_1) {
        m_sunElevation = param_1;
        CalculateSunDirection(this);
    }

    // 0x100064230, 16 bytes, placed by class name
    // SunlightOptions::SetSunAngle(float)
    void SunlightOptions::SetSunAngle(float param_1) {
        m_sunAngle = param_1;
        CalculateSunDirection(this);
    }

    // 0x100064250, 16 bytes, placed by class name
    // SunlightOptions::SetSunIntensity(float)
    void SunlightOptions::SetSunIntensity(float param_1) {
        m_sunIntensity = param_1;
    }

    // 0x1000643d0, 16 bytes, placed by class name
    // SunlightOptions::SetShadowQuality(GraphicsQuality)
    void SunlightOptions::SetShadowQuality(undefined4 param_2) {
        m_shadowQuality = param_2;
    }

    // 0x1000643e0, 16 bytes, placed by class name
    // SunlightOptions::SetShadowStrength(float)
    void SunlightOptions::SetShadowStrength(float param_1) {
        m_shadowStrength = param_1;
    }

    // 0x100068d80, 176 bytes, placed by class name
    // SunlightOptions::CalculateSunDirection()
    void SunlightOptions::CalculateSunDirection() {
        float fVar1;
        ColourHSL local_48;
        undefined8 local_38;
        float local_30;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_28 = m_sunElevation * 1.5707964;
        local_1c = (float)::cos(local_28);
        local_20 = m_sunAngle;
        local_24 = (float)::cos(local_20);
        local_24 = local_24 * local_1c;
        fVar1 = (float)::sin(local_20);
        local_1c = local_1c * fVar1;
        fVar1 = (float)::sin(local_28);
        fVar1 = -fVar1;
        new (&local_48) math::ColourHSL(local_24, fVar1, local_1c);
        local_38 = math::Vector3Normalize<float>((Vector3T*)&local_48);
        local_30 = fVar1;
        (&m_sunDirection, (Vector3T*)&local_38)->SetXYZ();
    }

    // 0x100068e50, 16 bytes, placed by class name
    // SunlightOptions::GetAdjustedSunColour() const
    void SunlightOptions::GetAdjustedSunColour() {
        math::operator*((Vector3T*)this, m_sunIntensity);
    }

    // 0x100068e60, 32 bytes, placed by class name
    // SunlightOptions::GetAdjustedAmbientColour() const
    void SunlightOptions::GetAdjustedAmbientColour() {
        math::operator*((Vector3T*)&field_36, m_ambientIntensity);
    }

    // 0x100068e80, 48 bytes, placed by class name
    // SunlightOptions::SetSunColour(float, float, float)
    void SunlightOptions::SetSunColour(float param_1, float param_2, float param_3) {
        ColourHSL local_28;

        new (&local_28) math::ColourHSL(param_1, param_2, param_3);
        SetXYZ((Vector3T*)&local_28);
    }

    // 0x100068eb0, 48 bytes, placed by class name
    // SunlightOptions::SetSunDirection(math::Vector3T<float>)
    void SunlightOptions::SetSunDirection(undefined8 param_1, undefined4 param_2, long param_3) {
        undefined8 local_18;
        undefined4 local_10;

        local_18 = param_1;
        local_10 = param_2;
        ((param_3 + 20))->SetXYZ((Vector3T*)&local_18);
    }

    // 0x100068ee0, 64 bytes, placed by class name
    // SunlightOptions::SetSunDirection(float, float, float)
    void SunlightOptions::SetSunDirection(float param_1, float param_2, float param_3) {
        ColourHSL local_28;

        new (&local_28) math::ColourHSL(param_1, param_2, param_3);
        (&m_sunDirection, (Vector3T*)&local_28)->SetXYZ();
    }

    // 0x100068f20, 64 bytes, placed by class name
    // SunlightOptions::SetAmbientColour(float, float, float)
    void SunlightOptions::SetAmbientColour(float param_1, float param_2, float param_3) {
        ColourHSL local_28;

        new (&local_28) math::ColourHSL(param_1, param_2, param_3);
        (&field_36, (Vector3T*)&local_28)->SetXYZ();
    }

    // 0x100076a90: the linker folded this into SunlightOptions::operator=(SunlightOptions&&), which has identical code
    SunlightOptions::operator=(SunlightOptions const&);

} // namespace jag::graphics

// 0x100068e30, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100068e40, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
