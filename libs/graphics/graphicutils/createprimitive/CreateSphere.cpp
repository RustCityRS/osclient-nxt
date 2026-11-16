// libs/graphics/graphicutils/createprimitive/CreateSphere.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "CreateSphere.h"

namespace jag::graphicutils {
    // 0x100bb6cd0
    int GetSphereVertexCount(unsigned int arg1, unsigned int arg2) {
        return (arg2 - 1) * arg1 + 2;
    }

    // 0x100bb6ce0
    void GetSphereHorzVertSegCount(unsigned int* arg1, unsigned int* arg2, unsigned int arg3) {
        unsigned int* puVar1;
        unsigned int local_2c[3];

        if (((arg1 != nullptr) && (arg2 != nullptr)) && (arg3 != 0)) {
            local_2c[2] = 3;
            local_2c[0] = arg3;
            puVar1 = std::max<unsigned int>(*local_2c, *(local_2c + 2));
            *arg1 = *puVar1;
            local_2c[2] = arg3 + 1 >> 1;
            local_2c[1] = 2;
            puVar1 = std::max<unsigned int>(*(local_2c + 2), *(local_2c + 1));
            *arg2 = *puVar1;
        }
    }

    // 0x100bb6d60
    int GetSphereTriListIndexCount(unsigned int arg1, unsigned int arg2) {
        return ((arg2 - 2) * arg1 + arg1) * 6;
    }

    // 0x100bb6d80
    int GetSphereLineListIndexCount(unsigned int arg1, unsigned int arg2) {
        return (arg2 * 2 - 1) * arg1 * 2;
    }

    // 0x100bb6da0
    void CreateSphereVertices(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32,
                              math::Vector2T<float>* vector2, unsigned int arg4, unsigned int arg5, unsigned int arg6) {
        Vector3T<float>* pVVar1;
        ReturnValue* pRVar3;
        float* pfVar4;
        Vector2T<float>* pVVar5;
        Vector4T<float>* vector4T;
        unsigned int uVar7;
        float fVar8;
        ColourHSL local_c0;
        Vector2T<float>* local_b0;
        float local_a4;
        float local_a0;
        float local_9c;
        float local_98;
        unsigned int local_90;
        float local_8c;
        Vector3T<int> local_80;
        Vector3T<int> local_68;
        Vector3T<float>* local_58;
        ColourHSL local_48;

        Vector3T<float>* local_88 = vector32;
        Vector2T<float>* local_38 = vector2;
        if (GetSphereVertexCount(arg5, arg6) != 0) {
            local_80 = math::Vector3T();
            local_68 = math::Vector3T();
            local_48 = math::ColourHSL(0.0, 1.0, 0.0);
            local_80.SetXYZ(local_48);
            if (vector31 == nullptr) {
                local_58 = nullptr;
            } else {
                vector31->SetXYZ(local_80);
                local_58 = vector31 + (unsigned long)arg4;
            }
            fVar8 = 0.0;
            local_c0 = math::ColourHSL(0.0, 0.0, 0.0);
            local_48._0_8_ = local_80 - local_c0;
            local_48.field_8 = fVar8;
            pRVar3 = local_48 = math::Vector3T<float>::Normalize();
            local_68.SetXYZ(*pRVar3);
            uVar7 = arg6;
            pVVar1 = local_88;
            if (local_88 == nullptr) {
                vector4T = nullptr;
            } else {
                local_88->SetXYZ(local_68);
                vector4T = (Vector4T<float>*)(pVVar1 + (unsigned long)arg4);
            }
            pVVar5 = local_38;
            if (local_38 == nullptr) {
                pVVar5 = nullptr;
                local_38 = nullptr;
            } else {
                pfVar4 = (float*)local_68.SSOBeginPtr();
                local_38 = (Vector2T<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*pfVar4 * 0.5 + 0.5));
                pfVar4 = (float*)local_68.y();
                local_48 = math::Point(local_38._0_4_, *pfVar4 * 0.5 + 0.5);
                *pVVar5 = local_48;
                pVVar5 = pVVar5 + (unsigned long)arg4;
            }
            if (1 < uVar7) {
                local_8c = (float)uVar7;
                uVar7 = 1;
                do {
                    math::SinCos(&local_a4, &local_a0, ((float)uVar7 * 3.1415927f) / local_8c);
                    local_90 = uVar7;
                    if (arg5 != 0) {
                        uVar7 = 0;
                        do {
                            local_98 = ((float)uVar7 * 6.2831855f) / (float)arg5;
                            local_38 = (Vector2T<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)local_a4);
                            local_b0 = pVVar5;
                            local_9c = (float)::cos(local_98);
                            local_9c = local_9c * local_38._0_4_;
                            local_88 = (Vector3T<float>*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)local_a0);
                            fVar8 = (float)::sin(local_98);
                            local_48 = math::ColourHSL(local_9c, local_88._0_4_, local_38._0_4_ * fVar8);
                            local_80.SetXYZ(local_48);
                            pVVar1 = local_58;
                            if (local_58 == nullptr) {
                                local_58 = nullptr;
                            } else {
                                local_58->SetXYZ(local_80);
                                local_58 = pVVar1 + (unsigned long)arg4;
                            }
                            fVar8 = 0.0;
                            local_c0 = math::ColourHSL(0.0, 0.0, 0.0);
                            local_48._0_8_ = local_80 - local_c0;
                            local_48.field_8 = fVar8;
                            pRVar3 = local_48 = math::Vector3T<float>::Normalize();
                            local_68.SetXYZ(*pRVar3);
                            if (vector4T == nullptr) {
                                vector4T = nullptr;
                            } else {
                                vector4T->SetXYZ(local_68);
                                vector4T = vector4T + (unsigned long)arg4;
                            }
                            pVVar5 = local_b0;
                            if (local_b0 == nullptr) {
                                pVVar5 = nullptr;
                            } else {
                                pfVar4 = (float*)local_68.SSOBeginPtr();
                                local_38 = (Vector2T<float>*)(((uint64_t)local_38._4_4_ << 32) |
                                                              (uint32_t)(*pfVar4 * 0.5 + 0.5));
                                pfVar4 = (float*)local_68.y();
                                local_48 = math::Point(local_38._0_4_, *pfVar4 * 0.5 + 0.5);
                                *pVVar5 = local_48;
                                pVVar5 = pVVar5 + (unsigned long)arg4;
                            }
                            uVar7 = uVar7 + 1;
                        } while (arg5 != uVar7);
                    }
                    uVar7 = local_90 + 1;
                } while (uVar7 != arg6);
            }
            local_48 = math::ColourHSL(0.0, -1.0, 0.0);
            local_80.SetXYZ(local_48);
            if (local_58 != nullptr) {
                local_58->SetXYZ(local_80);
            }
            fVar8 = 0.0;
            local_c0 = math::ColourHSL(0.0, 0.0, 0.0);
            local_48._0_8_ = local_80 - local_c0;
            local_48.field_8 = fVar8;
            pRVar3 = local_48 = math::Vector3T<float>::Normalize();
            local_68.SetXYZ(*pRVar3);
            if (vector4T != nullptr) {
                vector4T->SetXYZ(local_68);
            }
            if (pVVar5 != nullptr) {
                pfVar4 = (float*)local_68.SSOBeginPtr();
                local_38 = (Vector2T<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*pfVar4 * 0.5 + 0.5));
                pfVar4 = (float*)local_68.y();
                local_48 = math::Point(local_38._0_4_, *pfVar4 * 0.5 + 0.5);
                *pVVar5 = local_48;
            }
        }
    }

} // namespace jag::graphicutils
