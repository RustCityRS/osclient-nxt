// libs/graphics/graphicutils/createprimitive/CreateCube.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "CreateCube.h"

namespace jag::graphicutils {
    // 0x100bb6090
    void CreateCubeVerticesShared(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32, unsigned int arg3,
                                  const math::Vector3T<float>& vector33, bool arg5) {
        Vector3T<float>* pVVar1;
        uint8_t local_100[24];
        uint8_t local_e8[24];
        uint8_t local_d0[24];
        uint8_t local_b8[24];
        uint8_t local_a0[24];
        uint8_t local_88[24];
        uint8_t local_70[24];
        uint8_t local_58[24];
        uint64_t local_40;
        uint32_t local_38;

        new (local_100) math::ColourHSL(-*(float*)vector33, -*(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new ((local_100 + 12)) math::ColourHSL(-*(float*)vector33, *(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new (local_e8) math::ColourHSL(*(float*)vector33, -*(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new ((local_e8 + 12)) math::ColourHSL(*(float*)vector33, *(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new (local_d0) math::ColourHSL(-*(float*)vector33, -*(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new ((local_d0 + 12)) math::ColourHSL(-*(float*)vector33, *(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new (local_b8) math::ColourHSL(*(float*)vector33, -*(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new ((local_b8 + 12)) math::ColourHSL(*(float*)vector33, *(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new (local_a0) math::ColourHSL(0.0, 0.0, -1.0);
        new ((local_a0 + 12)) math::ColourHSL(0.0, 0.0, -1.0);
        new (local_88) math::ColourHSL(0.0, 0.0, -1.0);
        new ((local_88 + 12)) math::ColourHSL(0.0, 0.0, -1.0);
        new (local_70) math::ColourHSL(0.0, 0.0, 1.0);
        new ((local_70 + 12)) math::ColourHSL(0.0, 0.0, 1.0);
        new (local_58) math::ColourHSL(0.0, 0.0, 1.0);
        new ((local_58 + 12)) math::ColourHSL(0.0, 0.0, 1.0);
        unsigned long arg1 = 0;
        Vector3T<float>* vector3T = vector32;
        do {
            if (vector31 == nullptr) {
                vector31 = nullptr;
            } else {
                pVVar1 = (Vector3T<float>*)(*local_100)[arg1];
                vector31->SetXYZ(*pVVar1);
                vector31 = vector31 + arg3;
            }
            if (vector32 != nullptr) {
                pVVar1 = (Vector3T<float>*)(*local_a0)[arg1];
                local_40 = math::operator-(pVVar1);
                local_38 = 0;
                vector3T->SetXYZ(local_40);
                vector3T = vector3T + arg3;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 8);
    }

    // 0x100bb6350
    void CreateCubeVerticesUnique(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32,
                                  math::Vector2T<float>* vector2, unsigned int arg4,
                                  const math::Vector3T<float>& vector33, bool arg6) {
        Vector2T<float>* vector2_00;
        unsigned int* puVar1;
        Vector3T<float>* pVVar2;
        uint32_t in_register_00000089;
        unsigned long arg1;
        uint8_t local_120[24];
        uint8_t local_108[24];
        uint8_t local_f0[24];
        uint8_t local_d8[24];
        uint8_t local_c0[24];
        uint8_t local_a8[24];
        uint8_t local_90[24];
        long local_58;
        uint64_t local_48;
        uint32_t local_40;

        uint32_t local_3c = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg6);
        new (local_120) math::ColourHSL(-*(float*)vector33, -*(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new ((local_120 + 12)) math::ColourHSL(-*(float*)vector33, *(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new (local_108) math::ColourHSL(*(float*)vector33, -*(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new ((local_108 + 12)) math::ColourHSL(*(float*)vector33, *(float*)(vector33 + 4), -*(float*)(vector33 + 8));
        new (local_f0) math::ColourHSL(-*(float*)vector33, -*(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new ((local_f0 + 12)) math::ColourHSL(-*(float*)vector33, *(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new (local_d8) math::ColourHSL(*(float*)vector33, -*(float*)(vector33 + 4), *(float*)(vector33 + 8));
        new ((local_d8 + 12)) math::ColourHSL(*(float*)vector33, *(float*)(vector33 + 4), *(float*)(vector33 + 8));
        uint64_t local_138 = 12884901890;
        uint64_t uStack_130 = 30064771078;
        uint64_t local_148 = 21474836484;
        uint64_t uStack_140 = 4294967296;
        uint64_t local_158 = 4;
        uint64_t uStack_150 = 8589934598;
        uint64_t local_168 = 21474836481;
        uint64_t uStack_160 = 30064771075;
        uint64_t local_178 = 25769803783;
        uint64_t uStack_170 = 17179869189;
        mach_header* local_188 = &__mh_execute_header;
        uint64_t uStack_180 = 12884901890;
        Point<float> local_78(0.0, 1.0);
        Point<float> local_70(0.0, 0.0);
        Point<float> local_68(1.0, 1.0);
        Point<float> local_60(1.0, 0.0);
        new (local_c0) math::ColourHSL(0.0, 0.0, -1.0);
        new ((local_c0 + 12)) math::ColourHSL(0.0, 0.0, 1.0);
        new (local_a8) math::ColourHSL(0.0, 1.0, 0.0);
        new ((local_a8 + 12)) math::ColourHSL(0.0, -1.0, 0.0);
        new (local_90) math::ColourHSL(-1.0, 0.0, 0.0);
        new ((local_90 + 12)) math::ColourHSL(1.0, 0.0, 0.0);
        unsigned long local_38 = 0;
        long local_50 = 0;
        do {
            local_58 = (long)(int)local_50;
            arg1 = 0;
            do {
                if (vector31 == nullptr) {
                    vector31 = nullptr;
                    if (vector32 != nullptr)
                        goto LAB_100bb668e;
                LAB_100bb66c7:
                    vector32 = nullptr;
                    if (vector2 == nullptr)
                        goto LAB_100bb6705;
                LAB_100bb6630:
                    vector2_00 = &local_78[arg1];
                    *vector2 = *vector2_00;
                    vector2 = vector2 + arg4;
                } else {
                    puVar1 = &local_188[local_58 + arg1];
                    pVVar2 = (Vector3T<float>*)(*local_120)[(unsigned long)*puVar1];
                    vector31->SetXYZ(*pVVar2);
                    vector31 = vector31 + arg4;
                    if (vector32 == nullptr)
                        goto LAB_100bb66c7;
                LAB_100bb668e:
                    pVVar2 = (Vector3T<float>*)(*local_c0)[local_38];
                    if ((char)local_3c == '\0') {
                        local_40 = *(uint32_t*)(pVVar2 + 8);
                        local_48 = *(uint64_t*)pVVar2;
                    } else {
                        local_48 = math::operator-(pVVar2);
                        local_40 = 0;
                    }
                    vector32->SetXYZ(local_48);
                    vector32 = vector32 + arg4;
                    if (vector2 != nullptr)
                        goto LAB_100bb6630;
                LAB_100bb6705:
                    vector2 = nullptr;
                }
                arg1 = arg1 + 1;
            } while (arg1 != 4);
            local_38 = local_38 + 1;
            local_50 = (long)(int)local_50 + 4;
            if (local_38 == 6) {
                return 6;
            }
        } while (true);
    }

} // namespace jag::graphicutils
