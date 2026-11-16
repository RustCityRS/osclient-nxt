// libs/game/runetek5/scene/worldmap/OverlayShapeData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "OverlayShapeData.h"

namespace jag::game {
    // 0x1003c55d0, 48 bytes, base-object constructor, placed by class name and debug map
    // OverlayShapeData::OverlayShapeData()
    void OverlayShapeData::OverlayShapeData() {
        new (this) std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>();
        Generate(this);
    }

    // 0x1003c5610, 3952 bytes, placed by class name and debug map
    // OverlayShapeData::Generate()
    void OverlayShapeData::Generate() {
        bool bVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;
        array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>* paVar6;
        array<Array<bool, eastl::allocator>, 4ul>* paVar7;
        Array<bool, eastl::allocator>* pAVar8;
        undefined8 uVar9;
        long lVar10;
        ulong uVar11;
        uint uVar12;
        int iVar13;
        ulong uVar14;
        ulong uVar15;
        uint uVar16;
        ulong uVar17;
        long lVar18;

        uVar15 = 0;
        uVar5 = 8;
        do {
            uVar3 = (uint)uVar5;
            uVar11 = 0;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, uVar11);
                uVar17 = 0;
                do {
                    paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                        std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, uVar17);
                    pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                        paVar7, uVar15);
                    pAVar8->set_max_size((ulong)(uVar3 * uVar3), 0);
                    uVar17 = uVar17 + 1;
                } while (uVar17 != 4);
                uVar11 = uVar11 + 1;
            } while (uVar11 != 8);
            uVar2 = (uint)(uVar5 >> 1);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 0);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (uint)lVar10 <= uVar12;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            iVar13 = uVar3 - 1;
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)lVar10 <= iVar4;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = uVar12 <= (uint)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = iVar4 <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 1);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)lVar10 <= iVar4 >> 1;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            uVar12 = 0;
            do {
                lVar10 = 0;
                do {
                    uVar11 = (int)lVar18 + lVar10;
                    if ((-1 < (long)uVar11) && ((long)uVar11 < (long)(ulong)(uVar3 * uVar3))) {
                        paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                            std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                        pAVar8 =
                            (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                                paVar7, uVar15);
                        uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar11);
                        *(bool*)uVar9 = uVar12 * 2 <= (uint)lVar10;
                    }
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)uVar16 <= (int)(uVar12 >> 1);
                    uVar17 = uVar11;
                } while (0 < (int)uVar16);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar12;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = iVar4 * 2 <= (int)uVar12;
                    uVar17 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 2);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar12;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)uVar12 <= iVar4 >> 1;
                    uVar17 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = iVar4 * 2 <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (uint)lVar10 <= uVar12 >> 1;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)(uVar12 * 2) <= (int)uVar16;
                    uVar17 = uVar11;
                } while (0 < (int)uVar16);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 3);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = iVar4 >> 1 <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (uint)lVar10 <= uVar12 * 2;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)(uVar12 >> 1) <= (int)uVar16;
                    uVar17 = uVar11;
                } while (0 < (int)uVar16);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar12;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)uVar12 <= iVar4 * 2;
                    uVar17 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 4);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar12;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = iVar4 >> 1 <= (int)uVar12;
                    uVar17 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)lVar10 <= iVar4 * 2;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = uVar12 >> 1 <= (uint)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)uVar16 <= (int)(uVar12 * 2);
                    uVar17 = uVar11;
                } while (0 < (int)uVar16);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 5);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, lVar10 + (int)lVar18);
                    *(bool*)uVar9 = (uint)lVar10 <= uVar2;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = uVar12 <= uVar2;
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar17 = uVar11;
                } while (uVar16 != 0);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, lVar10 + (int)lVar18);
                    *(bool*)uVar9 = uVar2 <= (uint)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = uVar2 <= uVar12;
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar17 = uVar11;
                } while (uVar16 != 0);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 6);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)lVar10 <= (int)(uVar12 - uVar2);
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)lVar10 <= (int)(iVar4 - uVar2);
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar12;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)uVar12 <= (int)(iVar4 - uVar2);
                    uVar17 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)uVar16 <= (int)(uVar12 - uVar2);
                    uVar17 = uVar11;
                } while (0 < (int)uVar16);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
                    std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                        (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, 7);
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 0);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)(uVar12 - uVar2) <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                uVar12 = uVar12 + 1;
                lVar18 = (int)lVar18 + lVar10;
            } while (uVar12 != uVar3);
            lVar18 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 1);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                lVar10 = 0;
                do {
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, (int)lVar18 + lVar10);
                    *(bool*)uVar9 = (int)(iVar4 - uVar2) <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (uint)lVar10);
                lVar18 = (int)lVar18 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 + -1;
            } while (bVar1);
            uVar11 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 2);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = uVar5;
                uVar14 = (long)(int)uVar11;
                do {
                    uVar12 = (int)uVar17 - 1;
                    uVar17 = (ulong)uVar12;
                    uVar11 = uVar14 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar14);
                    *(bool*)uVar9 = (int)(iVar13 - uVar2) <= (int)uVar12;
                    uVar14 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar13;
                iVar13 = iVar13 + -1;
            } while (bVar1);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool, eastl::allocator>, 4ul>*)
                    std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](paVar6, 3);
                pAVar8 = (Array<bool, eastl::allocator>*)std::array<Array<bool, eastl::allocator>, 4ul>::operator[](
                    paVar7, uVar15);
                uVar17 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar16 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar16;
                    uVar11 = uVar17 + 1;
                    uVar9 = Array<bool, eastl::allocator>::operator[](pAVar8, uVar17);
                    *(bool*)uVar9 = (int)(uVar12 - uVar2) <= (int)uVar16;
                    uVar17 = uVar11;
                } while (0 < (int)uVar16);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            uVar15 = uVar15 + 1;
            uVar5 = uVar5 >> 1;
        } while (uVar15 != 4);
    }

    // 0x1003c6590, 16 bytes, complete-object constructor, placed by class name and debug map
    // OverlayShapeData::OverlayShapeData(): jumps straight to the base-object constructor

    // 0x1003c65a0, 208 bytes, placed by class name and debug map
    // OverlayShapeData::GetShapeData(unsigned int, unsigned int, unsigned int) const
    void OverlayShapeData::GetShapeData(uint param_1, uint param_2, uint param_3) {
        ulong uVar1;
        array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>* this_00;
        array<Array<bool, eastl::allocator>, 4ul>* this_01;
        uint uVar2;

        if (7 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shapeID < 8",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/OverlayShapeData.cpp",
                      15, (char*)0);
        }
        if (3 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("rotate < 4",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/OverlayShapeData.cpp",
                      16, (char*)0);
        }
        uVar2 = param_3 - 1;
        if ((7 < uVar2) || ((139U >> (uVar2 & 31) & 1) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("size == 8 || size == 4 || size == 2 || size == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/OverlayShapeData.cpp",
                      17, (char*)0);
        }
        uVar1 = *(ulong*)(&DAT_100d42bd0 + (long)(int)uVar2 * 8);
        this_00 = (array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>*)
            std::array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>::operator[](
                (array<std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>, 8ul>*)this, (ulong)param_1);
        this_01 = (array<Array<bool, eastl::allocator>, 4ul>*)
            std::array<std::array<Array<bool, eastl::allocator>, 4ul>, 4ul>::operator[](this_00, (ulong)param_2);
        std::array<Array<bool, eastl::allocator>, 4ul>::operator[](this_01, uVar1);
    }

} // namespace jag::game
