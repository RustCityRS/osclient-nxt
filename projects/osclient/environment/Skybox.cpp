// projects/osclient/environment/Skybox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "libs/graphics/runetek7/effects/skybox/SkyBox.h"

namespace jag::oldscape {
    // 0x100f8a650, 8 bytes, __common; zero-initialised
    Skybox::m_verbose;

    // 0x100068a10, 80 bytes, base-object constructor, placed by class name and debug map
    // Skybox::Skybox()
    void Skybox::Skybox() {
        Vector4T<float> local_28[16];

        field_0 = false;
        new (&field_16) jag::math::Transitionable<jag::math::Vector4T<float>>();
        new (&field_80) jag::math::Vector4T<float>();
        jag::math::Vector4T<float>::Vector4T(local_28, 0.0);
        jag::math::Transitionable<jag::math::Vector4T<float>>::operator=(
            (Transitionable<jag::math::Vector4T<float>>*)&field_16, (Vector4T*)local_28);
    }

    // 0x100068aa0, 16 bytes, complete-object constructor, placed by class name
    // Skybox::Skybox(): jumps straight to the base-object constructor

    // 0x100068ab0, 16 bytes, placed by class name
    // Skybox::SetPixToolkit(graphics::NXTPixToolkit*)
    void Skybox::SetPixToolkit(NXTPixToolkit* param_1) {
        m_pPixToolkit = param_1;
    }

    // 0x100068ac0, 112 bytes, placed by class name
    // Skybox::DrawSkybox(bool)
    void Skybox::DrawSkybox(bool param_1) {
        undefined7 in_register_00000031;
        bool bVar1;
        Vector4T<float> local_48[24];

        bVar1 = (int)CONCAT71(in_register_00000031, param_1) != 0;
        if (!bVar1) {
            jag::math::Vector4T<float>::Vector4T(local_48, 0.0);
            (&field_16, (Vector4T*)local_48, 0, 0)->SetValue();
            RenderSkybox(this, 0);
        }
        field_0 = bVar1;
        (m_pPixToolkit, param_1)->ShowSkybox();
    }

    // 0x100068b30, 224 bytes, placed by class name
    // Skybox::RenderSkybox(unsigned long long)
    void Skybox::RenderSkybox(ulonglong param_1) {
        float fVar1;
        NXTPixToolkit* pNVar2;
        undefined8 uVar3;
        vector* pvVar4;
        float* pfVar5;
        type* ptVar6;
        type* ptVar7;
        undefined8 local_48[2];
        ulong local_38;

        ptVar7 = (type*)(param_1 / 1000000);
        if (m_verbose != '\0') {
            ptVar6 = ptVar7;
            local_48[0] = (&field_16, (ulonglong)ptVar7)->GetValue();
            uVar3 = logger::default_logger();
            pvVar4 = local_48->SSOBeginPtr(ptVar6);
            local_38 = (ulong)(uint)(int)*(float*)pvVar4;
            pfVar5 = (float*)local_48->y();
            fVar1 = *pfVar5;
            pfVar5 = (float*)local_48->second();
            logger::Logger::Log(uVar3, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "environment/Skybox.cpp",
                                76, "Current Skybox Colour: red: %i green: %i blue: %i ", local_38, (int)fVar1,
                                (int)*pfVar5);
        }
        pNVar2 = m_pPixToolkit;
        (&field_16, (ulonglong)ptVar7)->GetValue();
        graphics::NXTPixToolkit::SetSkyboxColour(pNVar2);
    }

    // 0x100068c10, 80 bytes, placed by class name
    // Skybox::IsNewColour(jag::math::Vector4T<float>, unsigned long long)
    ulong Skybox::IsNewColour(undefined4 param_1, undefined4 param_2, long param_3, ulong param_4) {
        undefined1 auVar2[16];

        auVar2 = ((param_3 + 16))->GetValue(param_4 / 1000000);
        return IsEqual(auVar2._0_8_, auVar2._8_8_, param_1, param_2) ^ 1;
    }

    // 0x100068c60, 160 bytes, placed by class name
    // Skybox::IsEqual(jag::math::Vector4T<float>, jag::math::Vector4T<float>)
    undefined8 Skybox::IsEqual(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                               undefined8 param_5, type* param_6) {
        vector* pvVar1;
        float* pfVar2;
        undefined4 local_38[2];
        undefined4 uStack_30;
        undefined4 uStack_2c;
        undefined8 local_28;
        undefined8 uStack_20;
        float local_c;

        uStack_30 = (undefined4)param_2;
        uStack_2c = (undefined4)((ulong)param_2 >> 32);
        local_38[0] = param_1;
        local_28 = param_3;
        uStack_20 = param_4;
        pvVar1 = local_38->SSOBeginPtr(param_6);
        local_c = *(float*)pvVar1;
        pvVar1 = local_28.SSOBeginPtr(param_6);
        if (local_c == *(float*)pvVar1) {
            pfVar2 = (float*)local_38->y();
            local_c = *pfVar2;
            pfVar2 = (float*)local_28.y();
            if (local_c == *pfVar2) {
                pfVar2 = (float*)local_38->second();
                local_c = *pfVar2;
                pfVar2 = (float*)local_28.second();
                if (local_c == *pfVar2) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100068d00, 128 bytes, placed by class name
    // Skybox::SetSkyboxColour(float, float, float, unsigned long long)
    void Skybox::SetSkyboxColour(float param_1, float param_2, float param_3, ulonglong param_4) {
        ulong in_RSI;
        ImVec4 local_38[24];

        ImVec4::ImVec4(local_38, param_1 * 0.003921569, param_2 * 0.003921569, param_3 * 0.003921569, 1.0);
        ((param_4 + 16))->SetValue(local_38, 600, in_RSI / 1000000);
    }

} // namespace jag::oldscape
