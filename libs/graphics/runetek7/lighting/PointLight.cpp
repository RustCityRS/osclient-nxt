// libs/graphics/runetek7/lighting/PointLight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLight.h"

namespace jag::graphics {
    // 0x1008a9500, 32 bytes, placed by debug map only (low confidence)
    // ScriptedPointLight::SetOverrideRGB(unsigned int, unsigned int, unsigned int)
    void ScriptedPointLight::SetOverrideRGB(uint param_1, uint param_2, uint param_3) {
        if (param_1 == 4294967295) {
            param_1 = field_4;
        }
        m_overrideRGB = param_1;
        field_16 = m_rGB;
        field_24 = param_2;
        field_20 = param_3;
        field_28 = param_2;
    }

    // 0x1008a9520, 192 bytes, placed by debug map only (low confidence)
    // ScriptedPointLight::UpdateColour(unsigned int)
    void ScriptedPointLight::UpdateColour(uint param_1) {
        uint uVar1;
        float* pfVar2;
        float local_2c;
        float local_28;
        float local_24;

        if (((field_64 != 0) && (field_60 != '\0')) && (field_64 < param_1)) {
            field_60 = 0;
            field_64 = 0;
        }
        uVar1 = m_overrideRGB;
        if ((m_rGB != uVar1) && (field_24 != param_1)) {
            if (param_1 < field_20) {
                local_2c = 0.0;
                local_28 = 1.0;
                local_24 = (float)(param_1 - field_28) / (float)(field_20 - field_28);
                pfVar2 = std::min<float>(&local_28, &local_24);
                pfVar2 = std::max<float>(&local_2c, pfVar2);
                uVar1 = math::InterpolateRGBA(field_16, uVar1, *pfVar2);
            }
            m_rGB = uVar1;
            field_24 = param_1;
            field_64 = param_1;
            field_60 = 0;
        }
    }

    // 0x1008a9600, 64 bytes, placed by debug map only (low confidence)
    // ScriptedPointLight::SetOverrideIntensityScale(unsigned int, unsigned int, unsigned int)
    void ScriptedPointLight::SetOverrideIntensityScale(uint param_1, uint param_2, uint param_3) {
        float fVar1;

        if (param_1 == 255) {
            fVar1 = 1.0;
        } else {
            fVar1 = (float)param_1 * 0.01;
        }
        field_36 = fVar1;
        field_40 = field_32;
        field_48 = param_2;
        field_44 = param_3;
        field_52 = param_2;
    }

    // 0x1008a9640, 176 bytes, placed by debug map only (low confidence)
    // ScriptedPointLight::UpdateIntensityScale(unsigned int)
    void ScriptedPointLight::UpdateIntensityScale(uint param_1) {
        float* pfVar1;
        float fVar2;
        float local_2c;
        float local_28;
        float local_24;

        fVar2 = field_36;
        if ((field_32 != fVar2) && (field_48 != param_1)) {
            if (param_1 < field_44) {
                local_2c = 0.0;
                local_28 = 1.0;
                local_24 = (float)(param_1 - field_52) / (float)(field_44 - field_52);
                pfVar1 = std::min<float>(&local_28, &local_24);
                pfVar1 = std::max<float>(&local_2c, pfVar1);
                fVar2 = math::Lerp<float, float>(&field_40, &field_36, *pfVar1);
            }
            field_32 = fVar2;
            field_48 = param_1;
        }
    }

} // namespace jag::graphics
