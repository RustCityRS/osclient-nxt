// libs/graphics/graphicutils/createprimitive/CreateCylinder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "CreateCylinder.h"

namespace jag::graphicutils {
    // 0x100bb6750
    void GetCylinderVertexCount(unsigned int arg1) {
        unsigned int local_14[3];

        local_14[0] = arg1 * 2 + 2;
        local_14[1] = 3;
        local_14[2] = 128;
        math::Clamp<unsigned int>(*local_14, *(local_14 + 1), *(local_14 + 2));
    }

    // 0x100bb6790
    int GetCylinderTriListIndexCount(unsigned int arg1) {
        unsigned int local_24[3];

        local_24[1] = 3;
        local_24[2] = 128;
        local_24[0] = arg1;
        unsigned int uVar1 = math::Clamp<unsigned int>(*local_24, *(local_24 + 1), *(local_24 + 2));
        local_24[1] = 3;
        local_24[2] = 128;
        unsigned int uVar2 = math::Clamp<unsigned int>(*local_24, *(local_24 + 1), *(local_24 + 2));
        return (uVar2 + uVar1) * 6;
    }

    // 0x100bb67f0
    int GetCylinderLineListIndexCount(unsigned int arg1) {
        unsigned int local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = arg1;
        math::Clamp<unsigned int>(*(local_14 + 2), *local_14, *(local_14 + 1));
        return local_14[2] * 10;
    }

    // 0x100bb6830
    void CreateCylinderBaseVertices(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                    math::Vector3T<float>* vector33, math::Vector3T<float>* vector34, unsigned int arg5,
                                    float arg6, unsigned int arg7) {
        unsigned int uVar1;
        float* pfVar2;
        ReturnValue* vector3;
        Vector3T<float>* vector3T;
        Vector4T<float>* this_00;
        float fVar4;
        ColourHSL local_68;
        float local_44;
        float local_40;
        unsigned int local_3c;
        float local_38;

        uint32_t local_70 = *(uint32_t*)(vector31 + 8);
        uint64_t local_78 = *(uint64_t*)vector31;
        uint32_t local_48 = *(uint32_t*)(vector32 + 8);
        uint64_t local_50 = *(uint64_t*)vector32;
        float local_34 = arg6;
        if (vector33 == nullptr) {
            vector3T = nullptr;
        } else {
            vector33->SetXYZ(local_78);
            vector3T = vector33 + (unsigned long)arg5;
        }
        if (vector34 == nullptr) {
            this_00 = nullptr;
        } else {
            vector34->SetXYZ(local_50);
            this_00 = (Vector4T<float>*)(vector34 + (unsigned long)arg5);
        }
        math::SinCos(&local_44, &local_40, 6.2831855f / (float)arg7);
        if (arg7 != 0) {
            local_38 = 0.0;
            fVar4 = local_34;
            do {
                local_3c = arg7;
                local_34 = fVar4;
                pfVar2 = (float*)vector31.y();
                fVar4 = *pfVar2;
                local_68 = math::ColourHSL(local_34, fVar4, local_38);
                local_78.SetXYZ(local_68);
                if (vector3T == nullptr) {
                    vector3T = nullptr;
                } else {
                    vector3T->SetXYZ(local_78);
                    vector3T = vector3T + (unsigned long)arg5;
                }
                uVar1 = local_3c;
                local_68._0_8_ = local_78 - vector31;
                local_68.field_8 = fVar4;
                vector3 = local_68 = math::Vector3T<float>::Normalize();
                local_50.SetXYZ(*vector3);
                if (this_00 == nullptr) {
                    this_00 = nullptr;
                } else {
                    this_00->SetXYZ(local_50);
                    this_00 = this_00 + (unsigned long)arg5;
                }
                fVar4 = local_40 * local_34 - local_44 * local_38;
                local_38 = local_40 * local_38 + local_44 * local_34;
                arg7 = uVar1 - 1;
            } while (arg7 != 0);
        }
    }

    // 0x100bb69f0
    void CreateCylinderVertices(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32, unsigned int arg3,
                                unsigned int arg4, float arg5, float arg6) {
        float local_48 = arg6;
        unsigned int uVar1 = GetCylinderVertexCount(arg4);
        local_48 = local_48 * 0.5;
        ColourHSL local_78(0.0, local_48, 0.0);
        float arg2 = -local_48;
        ColourHSL local_68(0.0, arg2, 0.0);
        CreateCylinderBaseVertices((Vector3T<float>*)&local_78, (Vector3T<float>*)PTR_UP_100ee66d0, vector31, vector32,
                                   arg3, arg5, arg4);
        uVar1 = (uVar1 >> 1) * arg3;
        Vector3T<float>* vector33 = vector31 + uVar1;
        Vector3T<float>* vector34 = vector32 + uVar1;
        uint64_t local_58 = math::operator-((Vector3T<float>*)PTR_UP_100ee66d0);
        if (vector31 == nullptr) {
            vector33 = nullptr;
        }
        if (vector32 == nullptr) {
            vector34 = nullptr;
        }
        float local_50 = arg2;
        CreateCylinderBaseVertices((Vector3T<float>*)&local_68, (Vector3T<float>*)&local_58, vector33, vector34, arg3,
                                   arg5, arg4);
    }

} // namespace jag::graphicutils
