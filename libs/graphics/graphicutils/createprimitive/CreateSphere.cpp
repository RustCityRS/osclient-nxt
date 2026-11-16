// libs/graphics/graphicutils/createprimitive/CreateSphere.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "CreateSphere.h"

namespace jag::graphicutils {
    // 0x100bb6cd0, 16 bytes, placed by debug map only (low confidence)
    // GetSphereVertexCount(unsigned int, unsigned int)
    int GetSphereVertexCount(uint param_1, uint param_2) {
        return (param_2 - 1) * param_1 + 2;
    }

    // 0x100bb6ce0, 112 bytes, placed by debug map only (low confidence)
    // GetSphereHorzVertSegCount(unsigned int*, unsigned int*, unsigned int)
    void GetSphereHorzVertSegCount(uint* param_1, uint* param_2, uint param_3) {
        uint* puVar1;
        uint local_2c[3];

        if (((param_1 != (uint*)0) && (param_2 != (uint*)0)) && (param_3 != 0)) {
            local_2c[2] = 3;
            local_2c[0] = param_3;
            puVar1 = std::max<unsigned int>(local_2c, local_2c + 2);
            *param_1 = *puVar1;
            local_2c[2] = param_3 + 1 >> 1;
            local_2c[1] = 2;
            puVar1 = std::max<unsigned int>(local_2c + 2, local_2c + 1);
            *param_2 = *puVar1;
        }
    }

    // 0x100bb6d60, 32 bytes, placed by debug map only (low confidence)
    // GetSphereTriListIndexCount(unsigned int, unsigned int)
    int GetSphereTriListIndexCount(uint param_1, uint param_2) {
        return ((param_2 - 2) * param_1 + param_1) * 6;
    }

    // 0x100bb6d80, 32 bytes, placed by debug map only (low confidence)
    // GetSphereLineListIndexCount(unsigned int, unsigned int)
    int GetSphereLineListIndexCount(uint param_1, uint param_2) {
        return (param_2 * 2 + -1) * param_1 * 2;
    }

    // 0x100bb6da0, 1232 bytes, placed by debug map only (low confidence)
    // CreateSphereVertices(math::Vector3T<float>*, math::Vector3T<float>*, math::Vector2T<float>*, unsigned int, unsigned int, unsigned int)
    void CreateSphereVertices(Vector3T* param_1, Vector3T* param_2, Vector2T* param_3, uint param_4, uint param_5,
                              uint param_6) {
        Vector3T* pVVar1;
        Vector2T* this;
        Vector3T* pVVar3;
        vector* pvVar4;
        float* pfVar5;
        Layout* pLVar6;
        Vector2T<float>* pVVar7;
        Vector4T<float>* this_00;
        uint uVar9;
        float fVar10;
        ColourHSL local_c0;
        Vector2T<float>* local_b0;
        float local_a4;
        float local_a0;
        float local_9c;
        float local_98;
        uint local_90;
        float local_8c;
        Vector3T* local_88;
        Vector3T<int> local_80[16];
        Vector3T<int> local_68[12];
        Vector3T* local_58;
        ColourHSL local_48;
        Vector2T* local_38;

        local_88 = param_2;
        local_38 = param_3;
        if (GetSphereVertexCount(param_5, param_6) != 0) {
            math::Vector3T<int>::Vector3T(local_80);
            math::Vector3T<int>::Vector3T(local_68);
            new (&local_48) math::ColourHSL(0.0, 1.0, 0.0);
            local_80->SetXYZ((Vector3T*)&local_48);
            if (param_1 == (Vector3T*)0) {
                local_58 = (Vector3T*)0;
            } else {
                param_1->SetXYZ(local_80);
                local_58 = param_1 + (ulong)param_4;
            }
            fVar10 = 0.0;
            new (&local_c0) math::ColourHSL(0.0, 0.0, 0.0);
            local_48._0_8_ = math::operator-((Vector3T*)local_80, (Vector3T*)&local_c0);
            local_48.field_8 = fVar10;
            pVVar3 = (Vector3T*)local_48.Normalize();
            local_68->SetXYZ(pVVar3);
            uVar9 = param_6;
            pVVar1 = local_88;
            if (local_88 == (Vector3T*)0) {
                this_00 = (Vector4T<float>*)0;
            } else {
                pVVar3 = (Vector3T*)local_68;
                local_88->SetXYZ(pVVar3);
                this_00 = (Vector4T<float>*)(pVVar1 + (ulong)param_4);
            }
            this = local_38;
            if (local_38 == (Vector2T*)0) {
                pVVar7 = (Vector2T<float>*)0;
                local_38 = (Vector2T*)0;
            } else {
                pvVar4 = local_68->SSOBeginPtr(pVVar3);
                local_38 = (Vector2T*)CONCAT44(local_38._4_4_, *(float*)pvVar4 * 0.5 + 0.5);
                pfVar5 = (float*)local_68->y();
                new (&local_48) math::Point<float>(local_38._0_4_, *pfVar5 * 0.5 + 0.5);
                math::Vector2T<float>::operator=((Vector2T<float>*)this, (Vector2T*)&local_48);
                pVVar7 = (Vector2T<float>*)(this + (ulong)param_4);
            }
            if (1 < uVar9) {
                local_8c = (float)uVar9;
                uVar9 = 1;
                do {
                    math::SinCos(&local_a4, &local_a0, ((float)uVar9 * 3.1415927) / local_8c);
                    local_90 = uVar9;
                    if (param_5 != 0) {
                        uVar9 = 0;
                        do {
                            local_98 = ((float)uVar9 * 6.2831855) / (float)param_5;
                            local_38 = (Vector2T*)CONCAT44(local_38._4_4_, local_a4);
                            local_b0 = pVVar7;
                            local_9c = (float)::cos(local_98);
                            local_9c = local_9c * local_38._0_4_;
                            local_88 = (Vector3T*)CONCAT44(local_88._4_4_, local_a0);
                            fVar10 = (float)::sin(local_98);
                            new (&local_48) math::ColourHSL(local_9c, local_88._0_4_, local_38._0_4_ * fVar10);
                            local_80->SetXYZ((Vector3T*)&local_48);
                            pVVar3 = local_58;
                            if (local_58 == (Vector3T*)0) {
                                local_58 = (Vector3T*)0;
                            } else {
                                local_58->SetXYZ(local_80);
                                local_58 = pVVar3 + (ulong)param_4;
                            }
                            fVar10 = 0.0;
                            new (&local_c0) math::ColourHSL(0.0, 0.0, 0.0);
                            local_48._0_8_ = math::operator-((Vector3T*)local_80, (Vector3T*)&local_c0);
                            local_48.field_8 = fVar10;
                            pLVar6 = (Layout*)local_48.Normalize();
                            local_68->SetXYZ(pLVar6);
                            if (this_00 == (Vector4T<float>*)0) {
                                this_00 = (Vector4T<float>*)0;
                            } else {
                                pLVar6 = (Layout*)local_68;
                                math::Vector4T<float>::SetXYZ(this_00, (Vector3T*)local_68);
                                this_00 = this_00 + (ulong)param_4;
                            }
                            pVVar7 = local_b0;
                            if (local_b0 == (Vector2T<float>*)0) {
                                pVVar7 = (Vector2T<float>*)0;
                            } else {
                                pvVar4 = local_68->SSOBeginPtr(pLVar6);
                                local_38 = (Vector2T*)CONCAT44(local_38._4_4_, *(float*)pvVar4 * 0.5 + 0.5);
                                pfVar5 = (float*)local_68->y();
                                new (&local_48) math::Point<float>(local_38._0_4_, *pfVar5 * 0.5 + 0.5);
                                math::Vector2T<float>::operator=(pVVar7, (Vector2T*)&local_48);
                                pVVar7 = pVVar7 + (ulong)param_4;
                            }
                            uVar9 = uVar9 + 1;
                        } while (param_5 != uVar9);
                    }
                    uVar9 = local_90 + 1;
                } while (uVar9 != param_6);
            }
            new (&local_48) math::ColourHSL(0.0, -1.0, 0.0);
            local_80->SetXYZ((Vector3T*)&local_48);
            if (local_58 != (Vector3T*)0) {
                local_58->SetXYZ(local_80);
            }
            fVar10 = 0.0;
            new (&local_c0) math::ColourHSL(0.0, 0.0, 0.0);
            local_48._0_8_ = math::operator-((Vector3T*)local_80, (Vector3T*)&local_c0);
            local_48.field_8 = fVar10;
            pVVar3 = (Vector3T*)local_48.Normalize();
            local_68->SetXYZ(pVVar3);
            if (this_00 != (Vector4T<float>*)0) {
                pVVar3 = (Vector3T*)local_68;
                math::Vector4T<float>::SetXYZ(this_00, pVVar3);
            }
            if (pVVar7 != (Vector2T<float>*)0) {
                pvVar4 = local_68->SSOBeginPtr(pVVar3);
                local_38 = (Vector2T*)CONCAT44(local_38._4_4_, *(float*)pvVar4 * 0.5 + 0.5);
                pfVar5 = (float*)local_68->y();
                new (&local_48) math::Point<float>(local_38._0_4_, *pfVar5 * 0.5 + 0.5);
                math::Vector2T<float>::operator=(pVVar7, (Vector2T*)&local_48);
            }
        }
    }

} // namespace jag::graphicutils
