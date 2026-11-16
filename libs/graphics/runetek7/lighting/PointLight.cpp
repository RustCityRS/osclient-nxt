// libs/graphics/runetek7/lighting/PointLight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLight.h"

namespace jag::graphics {
    // 0x1008a9500
    void ScriptedPointLight::SetOverrideRGB(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        if (arg1 == 4294967295) {
            arg1 = field_4;
        }
        field_12 = arg1;
        field_16 = m_rGB;
        field_24 = arg2;
        field_20 = arg3;
        field_28 = arg2;
    }

    // 0x1008a9520
    void ScriptedPointLight::UpdateColour(unsigned int arg1) {
        float* pfVar1;
        float local_24;

        if (((field_64 != 0) && (field_60 != '\0')) && (field_64 < arg1)) {
            field_60 = 0;
            field_64 = 0;
        }
        unsigned int arg2 = field_12;
        if ((m_rGB != arg2) && (field_24 != arg1)) {
            if (arg1 < field_20) {
                local_24 = (float)(arg1 - field_28) / (float)(field_20 - field_28);
                pfVar1 = std::min<float>(1.0, local_24);
                pfVar1 = std::max<float>(0.0, *pfVar1);
                arg2 = math::InterpolateRGBA(field_16, arg2, *pfVar1);
            }
            m_rGB = arg2;
            field_24 = arg1;
            field_64 = arg1;
            field_60 = 0;
        }
    }

    // 0x1008a9600
    void ScriptedPointLight::SetOverrideIntensityScale(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        float fVar1;

        if (arg1 == 255) {
            fVar1 = 1.0;
        } else {
            fVar1 = (float)arg1 * 0.01;
        }
        field_36 = fVar1;
        field_40 = field_32;
        field_48 = arg2;
        field_44 = arg3;
        field_52 = arg2;
    }

    // 0x1008a9640
    void ScriptedPointLight::UpdateIntensityScale(unsigned int arg1) {
        float* pfVar1;
        float local_24;

        float fVar2 = field_36;
        if ((field_32 != fVar2) && (field_48 != arg1)) {
            if (arg1 < field_44) {
                local_24 = (float)(arg1 - field_52) / (float)(field_44 - field_52);
                pfVar1 = std::min<float>(1.0, local_24);
                pfVar1 = std::max<float>(0.0, *pfVar1);
                fVar2 = math::Lerp<float, float>(field_40, field_36, *pfVar1);
            }
            field_32 = fVar2;
            field_48 = arg1;
        }
    }

} // namespace jag::graphics
