// libs/graphics/graphicutils/createprimitive/CreateCylinder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "CreateCylinder.h"

namespace jag::graphicutils {
    // 0x100bb6750, 64 bytes, placed by debug map only (low confidence)
    // GetCylinderVertexCount(unsigned int)
    void GetCylinderVertexCount(uint param_1) {
        uint local_14[3];

        local_14[0] = param_1 * 2 + 2;
        local_14[1] = 3;
        local_14[2] = 128;
        math::Clamp<unsigned int>(local_14, local_14 + 1, local_14 + 2);
    }

    // 0x100bb6790, 96 bytes, placed by debug map only (low confidence)
    // GetCylinderTriListIndexCount(unsigned int)
    int GetCylinderTriListIndexCount(uint param_1) {
        uint uVar1;
        uint uVar2;
        uint local_24[3];

        local_24[1] = 3;
        local_24[2] = 128;
        local_24[0] = param_1;
        uVar1 = math::Clamp<unsigned int>(local_24, local_24 + 1, local_24 + 2);
        local_24[1] = 3;
        local_24[2] = 128;
        uVar2 = math::Clamp<unsigned int>(local_24, local_24 + 1, local_24 + 2);
        return (uVar2 + uVar1) * 6;
    }

    // 0x100bb67f0, 64 bytes, placed by debug map only (low confidence)
    // GetCylinderLineListIndexCount(unsigned int)
    int GetCylinderLineListIndexCount(uint param_1) {
        uint local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = param_1;
        math::Clamp<unsigned int>(local_14 + 2, local_14, local_14 + 1);
        return local_14[2] * 10;
    }

    // 0x100bb6830, 448 bytes, placed by debug map only (low confidence)
    // CreateCylinderBaseVertices(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float>*, math::Vector3T<float>*, unsigned int, float, unsigned int)
    void CreateCylinderBaseVertices(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4,
                                    uint param_5, float param_6, uint param_7) {
        uint uVar1;
        float* pfVar2;
        Vector3T* pVVar3;
        Vector3T* this;
        Vector4T<float>* this_00;
        float fVar5;
        undefined8 local_78;
        undefined4 local_70;
        ColourHSL local_68;
        undefined8 local_50;
        undefined4 local_48;
        float local_44;
        float local_40;
        uint local_3c;
        float local_38;
        float local_34;

        local_70 = *(undefined4*)(param_1 + 8);
        local_78 = *(undefined8*)param_1;
        local_48 = *(undefined4*)(param_2 + 8);
        local_50 = *(undefined8*)param_2;
        local_34 = param_6;
        if (param_3 == (Vector3T*)0) {
            this = (Vector3T*)0;
        } else {
            param_3->SetXYZ((Vector3T*)&local_78);
            this = param_3 + (ulong)param_5;
        }
        if (param_4 == (Vector3T*)0) {
            this_00 = (Vector4T<float>*)0;
        } else {
            param_4->SetXYZ((Vector3T*)&local_50);
            this_00 = (Vector4T<float>*)(param_4 + (ulong)param_5);
        }
        math::SinCos(&local_44, &local_40, 6.2831855 / (float)param_7);
        if (param_7 != 0) {
            local_38 = 0.0;
            fVar5 = local_34;
            do {
                local_3c = param_7;
                local_34 = fVar5;
                pfVar2 = (float*)param_1->y();
                fVar5 = *pfVar2;
                new (&local_68) math::ColourHSL(local_34, fVar5, local_38);
                local_78.SetXYZ((Vector3T*)&local_68);
                if (this == (Vector3T*)0) {
                    this = (Vector3T*)0;
                } else {
                    SetXYZ((Vector3T*)&local_78);
                    this = this + (ulong)param_5;
                }
                uVar1 = local_3c;
                local_68._0_8_ = math::operator-((Vector3T*)&local_78, param_1);
                local_68.field_8 = fVar5;
                pVVar3 = (Vector3T*)local_68.Normalize();
                local_50.SetXYZ(pVVar3);
                if (this_00 == (Vector4T<float>*)0) {
                    this_00 = (Vector4T<float>*)0;
                } else {
                    math::Vector4T<float>::SetXYZ(this_00, (Vector3T*)&local_50);
                    this_00 = this_00 + (ulong)param_5;
                }
                fVar5 = local_40 * local_34 - local_44 * local_38;
                local_38 = local_40 * local_38 + local_44 * local_34;
                param_7 = uVar1 - 1;
            } while (param_7 != 0);
        }
    }

    // 0x100bb69f0, 240 bytes, placed by debug map only (low confidence)
    // CreateCylinderVertices(math::Vector3T<float>*, math::Vector3T<float>*, unsigned int, unsigned int, float, float)
    void CreateCylinderVertices(Vector3T* param_1, Vector3T* param_2, uint param_3, uint param_4, float param_5,
                                float param_6) {
        uint uVar1;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        Vector3T* pVVar4;
        float fVar5;
        ColourHSL local_78;
        ColourHSL local_68;
        undefined8 local_58;
        float local_50;
        float local_48;

        local_48 = param_6;
        uVar1 = GetCylinderVertexCount(param_4);
        local_48 = local_48 * 0.5;
        new (&local_78) math::ColourHSL(0.0, local_48, 0.0);
        fVar5 = -local_48;
        new (&local_68) math::ColourHSL(0.0, fVar5, 0.0);
        pVVar3 = (Vector3T*)PTR_UP_100ee66d0;
        CreateCylinderBaseVertices((Vector3T*)&local_78, (Vector3T*)PTR_UP_100ee66d0, param_1, param_2, param_3,
                                   param_5, param_4);
        uVar1 = (uVar1 >> 1) * param_3;
        pVVar4 = param_1 + uVar1;
        pVVar2 = param_2 + uVar1;
        local_58 = math::operator-((math*)PTR_UP_100ee66d0, pVVar3);
        if (param_1 == (Vector3T*)0) {
            pVVar4 = (Vector3T*)0;
        }
        if (param_2 == (Vector3T*)0) {
            pVVar2 = (Vector3T*)0;
        }
        local_50 = fVar5;
        CreateCylinderBaseVertices((Vector3T*)&local_68, (Vector3T*)&local_58, pVVar4, pVVar2, param_3, param_5,
                                   param_4);
    }

} // namespace jag::graphicutils
