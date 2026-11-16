// projects/osclient/environment/SunlightOptions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "SunlightOptions.h"

namespace jag::graphics {
    // 0x100064170
    void SunlightOptions::SetAmbientColour(math::Vector3T<float> vector3) {
        Vector3T<float> local_18;

        ((vector3 + 36))->SetXYZ(local_18);
    }

    // 0x1000641b0
    void SunlightOptions::SetAmbientIntensity(float arg1) {
        m_ambientIntensity = arg1;
    }

    // 0x1000641d0
    void SunlightOptions::SetSunColour(math::Vector3T<float> vector3) {
        Vector3T<float> local_18;

        vector3->SetXYZ(local_18);
    }

    // 0x100064220
    void SunlightOptions::SetSunElevation(float arg1) {
        m_sunElevation = arg1;
        CalculateSunDirection();
    }

    // 0x100064230
    void SunlightOptions::SetSunAngle(float arg1) {
        m_sunAngle = arg1;
        CalculateSunDirection();
    }

    // 0x100064250
    void SunlightOptions::SetSunIntensity(float arg1) {
        m_sunIntensity = arg1;
    }

    // 0x1000643d0
    void SunlightOptions::SetShadowQuality(GraphicsQuality graphicsQuality) {
        m_shadowQuality = graphicsQuality;
    }

    // 0x1000643e0
    void SunlightOptions::SetShadowStrength(float arg1) {
        m_shadowStrength = arg1;
    }

    // 0x100068d80
    void SunlightOptions::CalculateSunDirection() {
        float local_28 = m_sunElevation * 1.5707964f;
        float local_1c = (float)::cos(local_28);
        float local_20 = m_sunAngle;
        float local_24 = (float)::cos(local_20);
        local_24 = local_24 * local_1c;
        float fVar1 = (float)::sin(local_20);
        local_1c = local_1c * fVar1;
        fVar1 = (float)::sin(local_28);
        fVar1 = -fVar1;
        ColourHSL local_48(local_24, fVar1, local_1c);
        uint64_t local_38 = math::Vector3Normalize<float>(local_48);
        float local_30 = fVar1;
        m_sunDirection.SetXYZ(local_38);
    }

    // 0x100068e50
    void SunlightOptions::GetAdjustedSunColour() const {
        *m_sunIntensity** this;
    }

    // 0x100068e60
    void SunlightOptions::GetAdjustedAmbientColour() const {
        *m_ambientIntensity* field_36;
    }

    // 0x100068e80
    void SunlightOptions::SetSunColour(float arg1, float arg2, float arg3) {

        ColourHSL local_28(arg1, arg2, arg3);
        SetXYZ(local_28);
    }

    // 0x100068eb0
    void SunlightOptions::SetSunDirection(math::Vector3T<float> vector3) {
        Vector3T<float> local_18;

        ((vector3 + 20))->SetXYZ(local_18);
    }

    // 0x100068ee0
    void SunlightOptions::SetSunDirection(float arg1, float arg2, float arg3) {

        ColourHSL local_28(arg1, arg2, arg3);
        m_sunDirection.SetXYZ(local_28);
    }

    // 0x100068f20
    void SunlightOptions::SetAmbientColour(float arg1, float arg2, float arg3) {

        ColourHSL local_28(arg1, arg2, arg3);
        field_36.SetXYZ(local_28);
    }

    // 0x100076a90: SunlightOptions::operator=(SunlightOptions const&) has the same machine code as SunlightOptions::operator=(SunlightOptions&&)

} // namespace jag::graphics

// 0x100068e30
void cos(float arg1) {
    _cosf();
}

// 0x100068e40
void sin(float arg1) {
    _sinf();
}
