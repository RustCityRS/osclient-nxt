// libs/graphics/graphicutils/createprimitive/CreateCone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "CreateCone.h"

namespace jag::graphicutils {
    // 0x100bb5d50
    int GetConeVertexCount(unsigned int arg1) {
        unsigned int local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = arg1;
        math::Clamp<unsigned int>(*(local_14 + 2), *local_14, *(local_14 + 1));
        return local_14[2] + 2;
    }

    // 0x100bb5dc0
    int GetConeTriListIndexCount(unsigned int arg1) {
        unsigned int local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = arg1;
        math::Clamp<unsigned int>(*(local_14 + 2), *local_14, *(local_14 + 1));
        return local_14[2] * 6;
    }

    // 0x100bb5e00
    int GetConeLineListIndexCount(unsigned int arg1) {
        unsigned int local_14[3];

        local_14[0] = 3;
        local_14[1] = 128;
        local_14[2] = arg1;
        math::Clamp<unsigned int>(*(local_14 + 2), *local_14, *(local_14 + 1));
        return local_14[2] * 6;
    }

    // 0x100bb5e40
    void CreateConeVertices(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32, unsigned int arg3,
                            unsigned int arg4) {
        ReturnValue* vector3;
        Vector4T<float>* pVVar1;
        Vector4T<float>* vector4T;
        unsigned int uVar2;
        Vector3T<float>* this_00;
        float fVar3;
        ColourHSL local_80;
        float local_70;
        float local_6c;
        uint64_t local_68;
        uint32_t local_60;
        ColourHSL local_58;
        uint8_t local_48[16];
        float local_38;

        local_80.field_0 = 4.2039e-45;
        local_58.field_0 = 1.79366e-43;
        math::Clamp<unsigned int>(arg4, local_80, local_58);
        if (arg4 != 0) {
            local_80 = math::ColourHSL(0.0, -0.5, 0.0);
            fVar3 = 0.5;
            local_58 = math::ColourHSL(0.0, 0.5, 0.0);
            if (vector31 == nullptr) {
                pVVar1 = nullptr;
            } else {
                vector31->SetXYZ(local_58);
                pVVar1 = (Vector4T<float>*)(vector31 + arg3);
            }
            local_60 = *(uint32_t*)(PTR_UP_100ee66d0 + 8);
            local_68 = *(uint64_t*)PTR_UP_100ee66d0;
            if (vector32 == nullptr) {
                this_00 = nullptr;
            } else {
                vector32->SetXYZ(local_68);
                this_00 = vector32 + arg3;
            }
            local_58.SetXYZ(local_80);
            if (pVVar1 == nullptr) {
                pVVar1 = nullptr;
            } else {
                pVVar1->SetXYZ(local_58);
                pVVar1 = pVVar1 + arg3;
            }
            local_48._0_8_ = math::operator-((Vector3T<float>*)PTR_UP_100ee66d0);
            local_48._8_4_ = fVar3;
            local_68.SetXYZ(*local_48);
            if (this_00 == nullptr) {
                vector4T = nullptr;
            } else {
                this_00->SetXYZ(local_68);
                vector4T = (Vector4T<float>*)(this_00 + arg3);
            }
            math::SinCos(&local_70, &local_6c, 6.2831855f / (float)arg4);
            if (arg4 != 0) {
                local_48._12_4_ = 0.0;
                uVar2 = 0;
                fVar3 = 1.0;
                do {
                    local_38 = fVar3;
                    new (local_48) math::ColourHSL(fVar3, -0.5, (float)local_48._12_4_);
                    local_58.SetXYZ(*local_48);
                    if (pVVar1 == nullptr) {
                        pVVar1 = nullptr;
                    } else {
                        pVVar1->SetXYZ(local_58);
                        pVVar1 = pVVar1 + arg3;
                    }
                    local_48._0_8_ = local_58 - local_80;
                    local_48._8_4_ = -0.5;
                    vector3 = *local_48 = math::Vector3T<float>::Normalize();
                    local_68.SetXYZ(*vector3);
                    if (vector4T == nullptr) {
                        vector4T = nullptr;
                    } else {
                        vector4T->SetXYZ(local_68);
                        vector4T = vector4T + arg3;
                    }
                    fVar3 = local_6c * local_38 - local_70 * (float)local_48._12_4_;
                    local_48._12_4_ = local_6c * (float)local_48._12_4_ + local_70 * local_38;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < arg4);
            }
        }
    }

} // namespace jag::graphicutils

namespace jag::math {
    // 0x100bb5d90
    unsigned int Clamp<unsigned int>(const unsigned int& arg1, const unsigned int& arg2, const unsigned int& arg3) {
        auto puVar1 = std::max<unsigned int>(arg2, arg1);
        puVar1 = std::min<unsigned int>(arg3, *puVar1);
        return *puVar1;
    }

} // namespace jag::math
