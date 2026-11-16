// libs/game/runetek5/config/loctype/LocShapes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LocShapes.h"

namespace jag::game {
    // 0x100d42fe0, 16 bytes, __const
    LocShapes::WALL_DECOR_STRAIGHT_XOFFSET = {1, 0, -1, 0};

    // 0x100d42ff0, 16 bytes, __const
    LocShapes::WALL_DECOR_STRAIGHT_ZOFFSET = {0, -1, 0, 1};

    // 0x100d43000, 16 bytes, __const
    LocShapes::WALL_DECOR_DIAGONAL_XOFFSET = {1, -1, -1, 1};

    // 0x100d43010, 48 bytes, __const
    LocShapes::WALL_DECOR_DIAGONAL_ZOFFSET = {-1, -1, 1, 1, 1066024305, 0, 0, 0, -1, -1, 1, 1};

    // 0x1005250c0, 48 bytes, placed by class name and debug map
    // LocShapes::GetShapeDescription(LocShape)
    undefined* LocShapes::GetShapeDescription(byte param_1) {
        if (param_1 < 25) {
            return (&PTR_s_WALL_STRAIGHT_100f03a60)[(char)param_1];
        }
        return &DAT_100e3802c;
    }

    // 0x1005250f0, 624 bytes, placed by class name and debug map
    // LocShapes::GetShapeOffsetAndRotation(float&, int&, int&, LocShape, Rotation90, int, bool, math::Vector3T<float> const&)
    void LocShapes::GetShapeOffsetAndRotation(float* param_1, int* param_2, int* param_3, undefined4 param_4,
                                              uint param_5, int param_6, char param_7, Layout* param_8) {
        char cVar1;
        int iVar2;
        vector* pvVar3;
        undefined1* puVar4;
        float* pfVar5;
        int iVar7;
        int iVar9;
        ulong uVar10;
        int iVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float local_68;

        local_68 = (float)(int)param_5 * 1.5707964;
        cVar1 = IsWallDecorShape(param_4);
        iVar7 = 0;
        if (cVar1 == '\0') {
            iVar2 = 0;
            iVar11 = 0;
            iVar9 = 0;
            goto joined_r0x000100525311;
        }
        if ((char)param_4 == '\x06') {
        LAB_1005251c1:
            if (param_6 == 0) {
                iVar7 = 33;
            } else {
                iVar7 = param_6 / 2 + 1;
            }
            uVar10 = (ulong)(param_5 & 255);
            iVar11 = *(int*)(&WALL_DECOR_DIAGONAL_XOFFSET + uVar10 * 4);
            pvVar3 = eastl::string::Layout::SSOBeginPtr(param_8, (type*)0);
            fVar12 = (float)(iVar11 * iVar7) * *(float*)pvVar3;
            puVar4 = &WALL_DECOR_DIAGONAL_ZOFFSET;
        LAB_100525219:
            iVar9 = (int)fVar12;
            iVar11 = *(int*)(puVar4 + uVar10 * 4);
            pfVar5 = (float*)param_8->second();
            iVar11 = (int)((float)(iVar7 * iVar11) * *pfVar5);
        } else {
            if ((char)param_4 == '\x05') {
                iVar7 = 65;
                if (param_6 != 0) {
                    iVar7 = param_6 + 1;
                }
                uVar10 = (ulong)(param_5 & 255);
                iVar11 = *(int*)(&WALL_DECOR_STRAIGHT_XOFFSET + uVar10 * 4);
                pvVar3 = eastl::string::Layout::SSOBeginPtr(param_8, (type*)0);
                fVar12 = (float)(iVar11 * iVar7) * *(float*)pvVar3;
                puVar4 = &WALL_DECOR_STRAIGHT_ZOFFSET;
                goto LAB_100525219;
            }
            iVar11 = 0;
            iVar9 = 0;
            if (param_7 != '\0')
                goto LAB_1005251c1;
        }
        cVar1 = IsDiagonalWallDecorShape((char)param_4);
        if (cVar1 == '\0') {
            iVar2 = 0;
            iVar7 = 0;
        } else {
            if ((char)param_4 == '\a') {
                local_68 = local_68 + 3.1415927;
            }
            pvVar3 = eastl::string::Layout::SSOBeginPtr(param_8, (type*)0);
            fVar12 = *(float*)pvVar3 * 180.992;
            fVar15 = *(float*)pvVar3 * -180.992;
            fVar13 = (float)::cos(-local_68);
            fVar14 = (float)::sin(-local_68);
            iVar2 = (int)(fVar12 * fVar13 - fVar14 * fVar15);
            iVar7 = (int)(fVar15 * fVar13 + fVar12 * fVar14);
            local_68 = local_68 + 0.7853982;
        }
    joined_r0x000100525311:
        if ((char)param_4 == '\v') {
            local_68 = local_68 + 0.7853982;
        }
        *param_1 = local_68;
        *param_2 = iVar9 + iVar2;
        *param_3 = iVar11 + iVar7;
    }

} // namespace jag::game

// 0x100525390, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1005253a0, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}
