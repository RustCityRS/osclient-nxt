// libs/graphics/graphicutils/createprimitive/CreateCube.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "CreateCube.h"

namespace jag::graphicutils {
    // 0x100bb6090, 688 bytes, placed by debug map only (low confidence)
    // CreateCubeVerticesShared(math::Vector3T<float>*, math::Vector3T<float>*, unsigned int, math::Vector3T<float> const&, bool)
    void CreateCubeVerticesShared(Vector3T* param_1, Vector3T* param_2, uint param_3, Vector3T* param_4, bool param_5) {
        Vector3T* pVVar1;
        math* this;
        Vector3T* pVVar2;
        Vector3T* this_00;
        undefined1 local_100[24];
        undefined1 local_e8[24];
        undefined1 local_d0[24];
        undefined1 local_b8[24];
        undefined1 local_a0[24];
        undefined1 local_88[24];
        undefined1 local_70[24];
        undefined1 local_58[24];
        undefined8 local_40;
        undefined4 local_38;

        new (local_100) math::ColourHSL(-*(float*)param_4, -*(float*)(param_4 + 4), -*(float*)(param_4 + 8));
        new ((local_100 + 12)) math::ColourHSL(-*(float*)param_4, *(float*)(param_4 + 4), -*(float*)(param_4 + 8));
        new (local_e8) math::ColourHSL(*(float*)param_4, -*(float*)(param_4 + 4), -*(float*)(param_4 + 8));
        new ((local_e8 + 12)) math::ColourHSL(*(float*)param_4, *(float*)(param_4 + 4), -*(float*)(param_4 + 8));
        new (local_d0) math::ColourHSL(-*(float*)param_4, -*(float*)(param_4 + 4), *(float*)(param_4 + 8));
        new ((local_d0 + 12)) math::ColourHSL(-*(float*)param_4, *(float*)(param_4 + 4), *(float*)(param_4 + 8));
        new (local_b8) math::ColourHSL(*(float*)param_4, -*(float*)(param_4 + 4), *(float*)(param_4 + 8));
        new ((local_b8 + 12)) math::ColourHSL(*(float*)param_4, *(float*)(param_4 + 4), *(float*)(param_4 + 8));
        new (local_a0) math::ColourHSL(0.0, 0.0, -1.0);
        new ((local_a0 + 12)) math::ColourHSL(0.0, 0.0, -1.0);
        new (local_88) math::ColourHSL(0.0, 0.0, -1.0);
        new ((local_88 + 12)) math::ColourHSL(0.0, 0.0, -1.0);
        new (local_70) math::ColourHSL(0.0, 0.0, 1.0);
        new ((local_70 + 12)) math::ColourHSL(0.0, 0.0, 1.0);
        new (local_58) math::ColourHSL(0.0, 0.0, 1.0);
        new ((local_58 + 12)) math::ColourHSL(0.0, 0.0, 1.0);
        pVVar2 = (Vector3T*)0;
        this_00 = param_2;
        do {
            if (param_1 == (Vector3T*)0) {
                param_1 = (Vector3T*)0;
            } else {
                pVVar1 = (Vector3T*)std::array<math::Vector3T<float>, 8ul>::operator[](
                    (array<math::Vector3T<float>, 8ul>*)local_100, (ulong)pVVar2);
                param_1->SetXYZ(pVVar1);
                param_1 = param_1 + param_3;
            }
            if (param_2 != (Vector3T*)0) {
                pVVar1 = pVVar2;
                this = (math*)std::array<math::Vector3T<float>, 8ul>::operator[](
                    (array<math::Vector3T<float>, 8ul>*)local_a0, (ulong)pVVar2);
                local_40 = math::operator-(this, pVVar1);
                local_38 = 0;
                this_00->SetXYZ((Vector3T*)&local_40);
                this_00 = this_00 + param_3;
            }
            pVVar2 = pVVar2 + 1;
        } while (pVVar2 != (Vector3T*)8);
    }

    // 0x100bb6350, 976 bytes, placed by debug map only (low confidence)
    // CreateCubeVerticesUnique(math::Vector3T<float>*, math::Vector3T<float>*, math::Vector2T<float>*, unsigned int, math::Vector3T<float> const&, bool)
    undefined8 CreateCubeVerticesUnique(Vector3T* param_1, Vector3T* param_2, Vector2T* param_3, uint param_4,
                                        Vector3T* param_5, bool param_6) {
        Vector2T* pVVar1;
        uint* puVar2;
        Vector3T* pVVar3;
        math* this;
        undefined3 in_register_00000089;
        ulong uVar4;
        mach_header* local_188;
        undefined8 uStack_180;
        undefined8 local_178;
        undefined8 uStack_170;
        undefined8 local_168;
        undefined8 uStack_160;
        undefined8 local_158;
        undefined8 uStack_150;
        undefined8 local_148;
        undefined8 uStack_140;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined1 local_120[24];
        undefined1 local_108[24];
        undefined1 local_f0[24];
        undefined1 local_d8[24];
        undefined1 local_c0[24];
        undefined1 local_a8[24];
        undefined1 local_90[24];
        Point<float> local_78[8];
        Point<float> local_70[8];
        Point<float> local_68[8];
        Point<float> local_60[8];
        long local_58;
        long local_50;
        undefined8 local_48;
        float local_40;
        undefined4 local_3c;
        Vector3T* local_38;

        local_3c = CONCAT31(in_register_00000089, param_6);
        new (local_120) math::ColourHSL(-*(float*)param_5, -*(float*)(param_5 + 4), -*(float*)(param_5 + 8));
        new ((local_120 + 12)) math::ColourHSL(-*(float*)param_5, *(float*)(param_5 + 4), -*(float*)(param_5 + 8));
        new (local_108) math::ColourHSL(*(float*)param_5, -*(float*)(param_5 + 4), -*(float*)(param_5 + 8));
        new ((local_108 + 12)) math::ColourHSL(*(float*)param_5, *(float*)(param_5 + 4), -*(float*)(param_5 + 8));
        new (local_f0) math::ColourHSL(-*(float*)param_5, -*(float*)(param_5 + 4), *(float*)(param_5 + 8));
        new ((local_f0 + 12)) math::ColourHSL(-*(float*)param_5, *(float*)(param_5 + 4), *(float*)(param_5 + 8));
        new (local_d8) math::ColourHSL(*(float*)param_5, -*(float*)(param_5 + 4), *(float*)(param_5 + 8));
        new ((local_d8 + 12)) math::ColourHSL(*(float*)param_5, *(float*)(param_5 + 4), *(float*)(param_5 + 8));
        local_138 = 12884901890;
        uStack_130 = 30064771078;
        local_148 = 21474836484;
        uStack_140 = 4294967296;
        local_158 = 4;
        uStack_150 = 8589934598;
        local_168 = 21474836481;
        uStack_160 = 30064771075;
        local_178 = 25769803783;
        uStack_170 = 17179869189;
        local_188 = &__mh_execute_header;
        uStack_180 = 12884901890;
        math::Point<float>::Point(local_78, 0.0, 1.0);
        math::Point<float>::Point(local_70, 0.0, 0.0);
        math::Point<float>::Point(local_68, 1.0, 1.0);
        math::Point<float>::Point(local_60, 1.0, 0.0);
        new (local_c0) math::ColourHSL(0.0, 0.0, -1.0);
        new ((local_c0 + 12)) math::ColourHSL(0.0, 0.0, 1.0);
        new (local_a8) math::ColourHSL(0.0, 1.0, 0.0);
        new ((local_a8 + 12)) math::ColourHSL(0.0, -1.0, 0.0);
        new (local_90) math::ColourHSL(-1.0, 0.0, 0.0);
        new ((local_90 + 12)) math::ColourHSL(1.0, 0.0, 0.0);
        local_38 = (Vector3T*)0;
        local_50 = 0;
        do {
            local_58 = (long)(int)local_50;
            uVar4 = 0;
            do {
                if (param_1 == (Vector3T*)0) {
                    param_1 = (Vector3T*)0;
                    if (param_2 != (Vector3T*)0)
                        goto LAB_100bb668e;
                LAB_100bb66c7:
                    param_2 = (Vector3T*)0;
                    if (param_3 == (Vector2T*)0)
                        goto LAB_100bb6705;
                LAB_100bb6630:
                    pVVar1 = (Vector2T*)std::array<math::Vector2T<float>, 4ul>::operator[](
                        (array<math::Vector2T<float>, 4ul>*)local_78, uVar4);
                    math::Vector2T<float>::operator=((Vector2T<float>*)param_3, pVVar1);
                    param_3 = param_3 + param_4;
                } else {
                    puVar2 = (uint*)std::array<unsigned int, 24ul>::operator[]((array<unsigned int, 24ul>*)&local_188,
                                                                               local_58 + uVar4);
                    pVVar3 = (Vector3T*)std::array<math::Vector3T<float>, 8ul>::operator[](
                        (array<math::Vector3T<float>, 8ul>*)local_120, (ulong)*puVar2);
                    param_1->SetXYZ(pVVar3);
                    param_1 = param_1 + param_4;
                    if (param_2 == (Vector3T*)0)
                        goto LAB_100bb66c7;
                LAB_100bb668e:
                    pVVar3 = local_38;
                    this = (math*)std::array<math::Vector3T<float>, 6ul>::operator[](
                        (array<math::Vector3T<float>, 6ul>*)local_c0, (ulong)local_38);
                    if ((char)local_3c == '\0') {
                        local_40 = field_8;
                        local_48._0_4_ = field_0;
                        local_48._4_4_ = field_4;
                    } else {
                        local_48 = math::operator-(this, pVVar3);
                        local_40 = 0.0;
                    }
                    param_2->SetXYZ((Vector3T*)&local_48);
                    param_2 = param_2 + param_4;
                    if (param_3 != (Vector2T*)0)
                        goto LAB_100bb6630;
                LAB_100bb6705:
                    param_3 = (Vector2T*)0;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 4);
            local_38 = local_38 + 1;
            local_50 = (long)(int)local_50 + 4;
            if (local_38 == (Vector3T*)6) {
                return 6;
            }
        } while (true);
    }

} // namespace jag::graphicutils
