// projects/osclient/environment/Fog.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Fog.h"

namespace jag::oldscape {
    // 0x1000640c0
    uint8_t Fog::Enabled() const {
        return field_8;
    }

    // 0x1000640d0
    void Fog::SetEnabled(bool arg1, unsigned long long arg2) {
        float local_c;

        if (field_8 != arg1) {
            field_8 = arg1;
            if (arg1) {
                local_c = 1.0;
            } else {
                local_c = 0.0;
            }
            field_16.SetValue(local_c, (unsigned long)field_116, arg2);
        }
    }

    // 0x100064120
    uint32_t Fog::FogDistance() const {
        auto puVar1 = field_48.second();
        return *puVar1;
    }

    // 0x100064140
    uint32_t Fog::FogIntensity() const {
        auto puVar1 = field_80.second();
        return *puVar1;
    }

    // 0x100068780
    Fog::Fog() : field_8(false) {
        *(uint64_t*)&field_112 = 2576980377610;
        field_48.SetValue(7.0, 0, 0);
        field_80.SetValue(0.0, 0, 0);
        field_16.SetValue(0.0, 0, 0);
    }

    // 0x100068830
    void Fog::SetPixToolkit(graphics::NXTPixToolkit* nxtPixToolkit) {
        m_pPixToolkit = nxtPixToolkit;
    }

    // 0x100068840
    void Fog::UpdateFog(unsigned long long arg1) {
        NXTPixToolkit* this_00 = m_pPixToolkit;
        float fVar1 = (float)field_80.GetValue(arg1);
        float fVar2 = (float)field_16.GetValue(arg1);
        float fVar3 = (float)field_48.GetValue(arg1);
        this_00->SetFogParams(fVar2 * fVar1, fVar3 * 128.0);
    }

    // 0x1000688b0
    void Fog::SetFogIntensity(int arg1, unsigned long long arg2) {
        SetFogIntensity((float)arg1 * 1e-05, arg2);
    }

    // 0x1000688d0
    void Fog::SetFogIntensity(float arg1, unsigned long long arg2) {
        field_80.SetValue(arg1, (unsigned long)field_116, arg2);
    }

    // 0x100068900
    void Fog::SetFogDistance(int arg1, unsigned long long arg2) {
        SetFogDistance((float)arg1, arg2);
    }

    // 0x100068920
    void Fog::SetFogDistance(float arg1, unsigned long long arg2) {
        field_48.SetValue(arg1, (unsigned long)field_116, arg2);
    }

    // 0x100068950
    void Fog::UpdateFogViaDrawDistance(int arg1, unsigned long long arg2) {
        float local_24;

        float fVar1 = (float)field_48.GetValue(arg2);
        double arg1_00 = (double)pow<double, float>((double)(unsigned long)(unsigned int)(1.0 / fVar1), 1.0 / fVar1);
        jag::math::Log2<double>(arg1_00);
        field_80.SetValue(local_24, (unsigned long)field_116, arg2);
    }

} // namespace jag::oldscape
