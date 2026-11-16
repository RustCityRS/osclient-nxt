// projects/osclient/environment/Fog.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Fog.h"

namespace jag::oldscape {
    // 0x1000640c0, 16 bytes, placed by class name and debug map
    // Fog::Enabled() const
    undefined1 Fog::Enabled() {
        return field_8;
    }

    // 0x1000640d0, 80 bytes, placed by class name and debug map
    // Fog::SetEnabled(bool, unsigned long long)
    void Fog::SetEnabled(bool param_1, ulonglong param_2) {
        float local_c;

        if (field_8 != param_1) {
            field_8 = param_1;
            if (param_1) {
                local_c = 1.0;
            } else {
                local_c = 0.0;
            }
            (&field_16, &local_c, (ulong)field_116, param_2)->SetValue();
        }
    }

    // 0x100064120, 32 bytes, placed by class name and debug map
    // Fog::FogDistance() const
    undefined4 Fog::FogDistance() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_48)->second();
        return *puVar1;
    }

    // 0x100064140, 32 bytes, placed by class name and debug map
    // Fog::FogIntensity() const
    undefined4 Fog::FogIntensity() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_80)->second();
        return *puVar1;
    }

    // 0x100068780, 160 bytes, base-object constructor, placed by class name
    // Fog::Fog()
    void Fog::Fog() {
        float local_34;
        float local_30;
        float local_2c;

        field_8 = false;
        new (&field_16) jag::math::Transitionable<float>();
        new (&field_48) jag::math::Transitionable<float>();
        new (&field_80) jag::math::Transitionable<float>();
        *(undefined8*)&field_112 = 2576980377610;
        local_34 = 7.0;
        (&field_48, &local_34, 0, 0)->SetValue();
        local_30 = 0.0;
        (&field_80, &local_30, 0, 0)->SetValue();
        local_2c = 0.0;
        (&field_16, &local_2c, 0, 0)->SetValue();
    }

    // 0x100068820, 16 bytes, complete-object constructor, placed by class name
    // Fog::Fog(): jumps straight to the base-object constructor

    // 0x100068830, 16 bytes, placed by class name
    // Fog::SetPixToolkit(graphics::NXTPixToolkit*)
    void Fog::SetPixToolkit(NXTPixToolkit* param_1) {
        m_pPixToolkit = param_1;
    }

    // 0x100068840, 112 bytes, placed by class name
    // Fog::UpdateFog(unsigned long long)
    void Fog::UpdateFog(ulonglong param_1) {
        NXTPixToolkit* this_00;
        float fVar1;
        float fVar2;
        float fVar3;

        this_00 = m_pPixToolkit;
        fVar1 = (float)(&field_80, param_1)->GetValue();
        fVar2 = (float)(&field_16, param_1)->GetValue();
        fVar3 = (float)(&field_48, param_1)->GetValue();
        this_00->SetFogParams(fVar2 * fVar1, fVar3 * 128.0);
    }

    // 0x1000688b0, 32 bytes, placed by class name
    // Fog::SetFogIntensity(int, unsigned long long)
    void Fog::SetFogIntensity(int param_1, ulonglong param_2) {
        SetFogIntensity(this, (float)param_1 * 1e-05, param_2);
    }

    // 0x1000688d0, 48 bytes, placed by class name
    // Fog::SetFogIntensity(float, unsigned long long)
    void Fog::SetFogIntensity(float param_1, ulonglong param_2) {
        float local_c;

        local_c = param_1;
        (&field_80, &local_c, (ulong)field_116, param_2)->SetValue();
    }

    // 0x100068900, 32 bytes, placed by class name
    // Fog::SetFogDistance(int, unsigned long long)
    void Fog::SetFogDistance(int param_1, ulonglong param_2) {
        SetFogDistance(this, (float)param_1, param_2);
    }

    // 0x100068920, 48 bytes, placed by class name
    // Fog::SetFogDistance(float, unsigned long long)
    void Fog::SetFogDistance(float param_1, ulonglong param_2) {
        float local_c;

        local_c = param_1;
        (&field_48, &local_c, (ulong)field_116, param_2)->SetValue();
    }

    // 0x100068950, 128 bytes, placed by class name
    // Fog::UpdateFogViaDrawDistance(int, unsigned long long)
    void Fog::UpdateFogViaDrawDistance(int param_1, ulonglong param_2) {
        float fVar1;
        double dVar2;
        float local_24;

        fVar1 = (float)(&field_48, param_2)->GetValue();
        dVar2 = (double)pow<double, float>((double)(ulong)(uint)(1.0 / fVar1), 1.0 / fVar1);
        jag::math::Log2<double>(dVar2);
        (&field_80, &local_24, (ulong)field_116, param_2)->SetValue();
    }

} // namespace jag::oldscape
