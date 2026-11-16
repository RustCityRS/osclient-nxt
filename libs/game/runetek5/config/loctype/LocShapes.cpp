// libs/game/runetek5/config/loctype/LocShapes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LocShapes.h"

namespace jag::game {
    // 0x100d42fe0
    int32_t LocShapes::WALL_DECOR_STRAIGHT_XOFFSET[4] = {1, 0, -1, 0};

    // 0x100d42ff0
    int32_t LocShapes::WALL_DECOR_STRAIGHT_ZOFFSET[4] = {0, -1, 0, 1};

    // 0x100d43000
    int32_t LocShapes::WALL_DECOR_DIAGONAL_XOFFSET[4] = {1, -1, -1, 1};

    // 0x100d43010
    int32_t LocShapes::WALL_DECOR_DIAGONAL_ZOFFSET[12] = {-1, -1, 1, 1, 1066024305, 0, 0, 0, -1, -1, 1, 1};

    // 0x1005250c0
    void LocShapes::GetShapeDescription(LocShape locShape) {
        if ((uint8_t)locShape < 25) {
            return (&PTR_s_WALL_STRAIGHT_100f03a60)[(char)(uint8_t)locShape];
        }
        return &DAT_100e3802c;
    }

    // 0x1005250f0
    void LocShapes::GetShapeOffsetAndRotation(float& arg1, int& arg2, int& arg3, LocShape locShape,
                                              Rotation90 rotation90, int arg6, bool arg7,
                                              const math::Vector3T<float>& vector3) {
        int iVar4;
        float* pfVar5;
        uint8_t* puVar6;
        int iVar8;
        unsigned long uVar9;
        int iVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        uint64_t in_stack_00000011;

        float local_68 = (float)(int)locShape * 1.5707964f;
        bool cVar3 = IsWallDecorShape((LocShape)arg3);
        uint64_t uVar2 = in_stack_00000011;
        int iVar7 = 0;
        if (!cVar3) {
            iVar4 = 0;
            iVar10 = 0;
            iVar8 = 0;
            goto joined_r0x000100525311;
        }
        if ((char)arg3 == '\x06') {
        LAB_1005251c1:
            if (rotation90 == 0) {
                iVar7 = 33;
            } else {
                iVar7 = (int)rotation90 / 2 + 1;
            }
            uVar9 = (unsigned long)(locShape & 255);
            iVar10 = *(int*)(&WALL_DECOR_DIAGONAL_XOFFSET + uVar9 * 4);
            pfVar5 = (float*)((Layout*)(((uint64_t)in_stack_00000011 << 8) | (uint8_t)arg7))->SSOBeginPtr();
            fVar11 = (float)(iVar10 * iVar7) * *pfVar5;
            puVar6 = &WALL_DECOR_DIAGONAL_ZOFFSET;
        LAB_100525219:
            iVar8 = (int)fVar11;
            iVar10 = *(int*)(puVar6 + uVar9 * 4);
            pfVar5 =
                (float*)((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(((uint64_t)uVar2
                                                                                                         << 8) |
                                                                                                        (uint8_t)arg7))
                    ->second();
            iVar10 = (int)((float)(iVar7 * iVar10) * *pfVar5);
        } else {
            if ((char)arg3 == '\x05') {
                iVar7 = 65;
                if (rotation90 != 0) {
                    iVar7 = rotation90 + 1;
                }
                uVar9 = (unsigned long)(locShape & 255);
                iVar10 = *(int*)(&WALL_DECOR_STRAIGHT_XOFFSET + uVar9 * 4);
                pfVar5 = (float*)((Layout*)(((uint64_t)in_stack_00000011 << 8) | (uint8_t)arg7))->SSOBeginPtr();
                fVar11 = (float)(iVar10 * iVar7) * *pfVar5;
                puVar6 = &WALL_DECOR_STRAIGHT_ZOFFSET;
                goto LAB_100525219;
            }
            iVar10 = 0;
            iVar8 = 0;
            if ((char)arg6 != '\0')
                goto LAB_1005251c1;
        }
        cVar3 = IsDiagonalWallDecorShape((LocShape)arg3 & 255);
        if (!cVar3) {
            iVar4 = 0;
            iVar7 = 0;
        } else {
            if ((char)arg3 == '\a') {
                local_68 = local_68 + 3.1415927f;
            }
            pfVar5 = (float*)((Layout*)(((uint64_t)in_stack_00000011 << 8) | (uint8_t)arg7))->SSOBeginPtr();
            fVar11 = *pfVar5 * 180.992;
            fVar14 = *pfVar5 * -180.992;
            fVar12 = (float)::cos(-local_68);
            fVar13 = (float)::sin(-local_68);
            iVar4 = (int)(fVar11 * fVar12 - fVar13 * fVar14);
            iVar7 = (int)(fVar14 * fVar12 + fVar11 * fVar13);
            local_68 = local_68 + 0.7853982f;
        }
    joined_r0x000100525311:
        if ((char)arg3 == '\v') {
            local_68 = local_68 + 0.7853982f;
        }
        field_0 = local_68;
        arg1 = (float)(iVar8 + iVar4);
        arg2 = iVar10 + iVar7;
    }

} // namespace jag::game

// 0x100525390
void cos(float arg1) {
    _cosf();
}

// 0x1005253a0
void sin(float arg1) {
    _sinf();
}
