// libs/graphics/graphicutils/createprimitive/CreateCone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "CreateCone.h"

namespace jag::graphicutils {
    // 0x100bb5d50, 64 bytes, placed by debug map only (low confidence)
    // GetConeVertexCount(unsigned int)
    int GetConeVertexCount(uint param_1) {
        uint local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = param_1;
        math::Clamp<unsigned int>(local_14 + 2, local_14, local_14 + 1);
        return local_14[2] + 2;
    }

    // 0x100bb5dc0, 64 bytes, placed by debug map only (low confidence)
    // GetConeTriListIndexCount(unsigned int)
    int GetConeTriListIndexCount(uint param_1) {
        uint local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = param_1;
        math::Clamp<unsigned int>(local_14 + 2, local_14, local_14 + 1);
        return local_14[2] * 6;
    }

    // 0x100bb5e00, 64 bytes, placed by debug map only (low confidence)
    // GetConeLineListIndexCount(unsigned int)
    int GetConeLineListIndexCount(uint param_1) {
        uint local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = param_1;
        math::Clamp<unsigned int>(local_14 + 2, local_14, local_14 + 1);
        return local_14[2] * 6;
    }

    // 0x100bb5e40, 592 bytes, placed by debug map only (low confidence)
    // CreateConeVertices(math::Vector3T<float>*, math::Vector3T<float>*, unsigned int, unsigned int)
    void CreateConeVertices(Vector3T* param_1, Vector3T* param_2, uint param_3, uint param_4) {
        Vector3T* pVVar1;
        Vector4T<float>* pVVar2;
        ColourHSL* pCVar3;
        Vector4T<float>* this;
        uint uVar4;
        float fVar5;
        ColourHSL local_80;
        float local_70;
        float local_6c;
        undefined8 local_68;
        undefined4 local_60;
        ColourHSL local_58;
        undefined1 local_48[16];
        float local_38;
        uint local_34;

        local_80.field_0 = 4.2039e-45;
        local_58.field_0 = 1.79366e-43;
        local_34 = param_4;
        math::Clamp<unsigned int>(&local_34, (uint*)&local_80, (uint*)&local_58);
        if (local_34 != 0) {
            new (&local_80) math::ColourHSL(0.0, -0.5, 0.0);
            fVar5 = 0.5;
            new (&local_58) math::ColourHSL(0.0, 0.5, 0.0);
            if (param_1 == (Vector3T*)0) {
                pVVar2 = (Vector4T<float>*)0;
            } else {
                param_1->SetXYZ((Vector3T*)&local_58);
                pVVar2 = (Vector4T<float>*)(param_1 + param_3);
            }
            local_60 = *(undefined4*)(PTR_UP_100ee66d0 + 8);
            local_68 = *(undefined8*)PTR_UP_100ee66d0;
            if (param_2 == (Vector3T*)0) {
                pVVar1 = (Vector3T*)0;
            } else {
                param_2->SetXYZ((Vector3T*)&local_68);
                pVVar1 = param_2 + param_3;
            }
            pCVar3 = &local_80;
            local_58.SetXYZ(pCVar3);
            if (pVVar2 == (Vector4T<float>*)0) {
                pVVar2 = (Vector4T<float>*)0;
            } else {
                pCVar3 = &local_58;
                math::Vector4T<float>::SetXYZ(pVVar2, (Vector3T*)pCVar3);
                pVVar2 = pVVar2 + param_3;
            }
            local_48._0_8_ = math::operator-((math*)PTR_UP_100ee66d0, (Vector3T*)pCVar3);
            local_48._8_4_ = fVar5;
            local_68.SetXYZ(local_48);
            if (pVVar1 == (Vector3T*)0) {
                this = (Vector4T<float>*)0;
            } else {
                pVVar1->SetXYZ((Vector3T*)&local_68);
                this = (Vector4T<float>*)(pVVar1 + param_3);
            }
            math::SinCos(&local_70, &local_6c, 6.2831855 / (float)local_34);
            if (local_34 != 0) {
                local_48._12_4_ = 0.0;
                uVar4 = 0;
                fVar5 = 1.0;
                do {
                    local_38 = fVar5;
                    new (local_48) math::ColourHSL(fVar5, -0.5, (float)local_48._12_4_);
                    local_58.SetXYZ(local_48);
                    if (pVVar2 == (Vector4T<float>*)0) {
                        pVVar2 = (Vector4T<float>*)0;
                    } else {
                        math::Vector4T<float>::SetXYZ(pVVar2, (Vector3T*)&local_58);
                        pVVar2 = pVVar2 + param_3;
                    }
                    local_48._0_8_ = math::operator-((Vector3T*)&local_58, (Vector3T*)&local_80);
                    local_48._8_4_ = -0.5;
                    pVVar1 = (Vector3T*)local_48->Normalize();
                    local_68.SetXYZ(pVVar1);
                    if (this == (Vector4T<float>*)0) {
                        this = (Vector4T<float>*)0;
                    } else {
                        math::Vector4T<float>::SetXYZ(this, (Vector3T*)&local_68);
                        this = this + param_3;
                    }
                    fVar5 = local_6c * local_38 - local_70 * (float)local_48._12_4_;
                    local_48._12_4_ = local_6c * (float)local_48._12_4_ + local_70 * local_38;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < local_34);
            }
        }
    }

} // namespace jag::graphicutils

namespace jag::math {
    // 0x100bb5d90, 48 bytes, inline, placed by debug map only (low confidence)
    // unsigned int Clamp<unsigned int>(unsigned int const&, unsigned int const&, unsigned int const&)
    uint Clamp<unsigned int>(uint* param_1, uint* param_2, uint* param_3) {
        uint* puVar1;

        puVar1 = std::max<unsigned int>(param_2, param_1);
        puVar1 = std::min<unsigned int>(param_3, puVar1);
        return *puVar1;
    }

} // namespace jag::math
