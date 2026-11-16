// projects/osclient/environment/Skybox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "libs/graphics/runetek7/effects/skybox/SkyBox.h"

namespace jag::oldscape {
    // 0x100f8a650
    int64_t Skybox::m_verbose;

    // 0x100068a10
    Skybox::Skybox() : field_0(false) {

        Vector4T<float> local_28(0.0);
        field_16 = local_28;
    }

    // 0x100068ab0
    void Skybox::SetPixToolkit(graphics::NXTPixToolkit* nxtPixToolkit) {
        m_pPixToolkit = nxtPixToolkit;
    }

    // 0x100068ac0
    void Skybox::DrawSkybox(bool arg1) {
        uint64_t in_register_00000031;
        Vector4T<float> local_48;

        bool bVar1 = (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0;
        if (!bVar1) {
            local_48 = jag::math::Vector4T(0.0);
            field_16.SetValue(local_48, 0, 0);
            RenderSkybox(0);
        }
        field_0 = bVar1;
        m_pPixToolkit->ShowSkybox(arg1);
    }

    // 0x100068b30
    void Skybox::RenderSkybox(unsigned long long arg1) {
        float fVar1;
        Logger* this_00;
        float* pfVar2;
        uint64_t local_48[2];
        unsigned long local_38;

        if (m_verbose != '\0') {
            local_48[0] = field_16.GetValue(arg1 / 1000000);
            this_00 = logger::default_logger();
            pfVar2 = (float*)local_48->SSOBeginPtr();
            local_38 = (unsigned long)(unsigned int)(int)*pfVar2;
            pfVar2 = (float*)local_48->y();
            fVar1 = *pfVar2;
            pfVar2 = (float*)local_48->second();
            this_00->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "environment/Skybox.cpp",
                         76, "Current Skybox Colour: red: %i green: %i blue: %i ", local_38,
                         (unsigned long)(unsigned int)(int)fVar1, (unsigned long)(unsigned int)(int)*pfVar2);
        }
        NXTPixToolkit* vector4 = m_pPixToolkit;
        field_16.GetValue(arg1 / 1000000);
        graphics::NXTPixToolkit::SetSkyboxColour(vector4);
    }

    // 0x100068c10
    unsigned long Skybox::IsNewColour(jag::math::Vector4T<float> vector4, unsigned long long arg2) {
        Vector4T<float>* vector42;

        Vector4T<float>* vector41 = (Vector4T<float>*)(arg2 / 1000000);
        Skybox* skybox = (Skybox*)(vector4 + 16);
        skybox->GetValue((unsigned long long)vector41);
        return IsEqual(skybox, vector41, vector42) ^ 1;
    }

    // 0x100068c60
    bool Skybox::IsEqual(jag::math::Vector4T<float> vector41, jag::math::Vector4T<float> vector42) {
        uint64_t in_XMM1_Qa;
        Layout local_38;
        Layout local_28;

        uint32_t uStack_30 = (uint32_t)in_XMM1_Qa;
        uint32_t uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        auto pfVar1 = local_38.SSOBeginPtr();
        float local_c = *pfVar1;
        pfVar1 = (float*)local_28.SSOBeginPtr();
        if (local_c == *pfVar1) {
            pfVar1 = (float*)local_38.y();
            local_c = *pfVar1;
            pfVar1 = (float*)local_28.y();
            if (local_c == *pfVar1) {
                pfVar1 = (float*)local_38.second();
                local_c = *pfVar1;
                pfVar1 = (float*)local_28.second();
                if (local_c == *pfVar1) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100068d00
    void Skybox::SetSkyboxColour(float arg1, float arg2, float arg3, unsigned long long arg4) {

        ImVec4 local_38(arg1 * 0.003921569f, arg2 * 0.003921569f, arg3 * 0.003921569f, 1.0);
        field_16.SetValue(local_38, 600, arg4 / 1000000);
    }

} // namespace jag::oldscape
