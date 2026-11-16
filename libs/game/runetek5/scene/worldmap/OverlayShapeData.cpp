// libs/game/runetek5/scene/worldmap/OverlayShapeData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "OverlayShapeData.h"

namespace jag::game {
    // 0x1003c55d0
    OverlayShapeData::OverlayShapeData() : std::array<std::array<std::array<Array<bool>, 4ul>, 4ul>, 8ul>() {
        Generate();
    }

    // 0x1003c5610
    void OverlayShapeData::Generate() {
        bool bVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        int iVar4;
        array<std::array<Array<bool>, 4ul>, 4ul>* paVar6;
        array<Array<bool>, 4ul>* paVar7;
        Array<bool>* pAVar8;
        uint64_t uVar9;
        long lVar10;
        unsigned long uVar11;
        unsigned int uVar12;
        int iVar13;
        unsigned long uVar14;
        unsigned int uVar15;
        unsigned long uVar16;
        long lVar17;

        unsigned long arg1 = 0;
        unsigned long uVar5 = 8;
        do {
            uVar3 = (unsigned int)uVar5;
            uVar11 = 0;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[uVar11];
                uVar16 = 0;
                do {
                    paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[uVar16];
                    pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                    pAVar8->set_max_size((unsigned long)(uVar3 * uVar3), 0);
                    uVar16 = uVar16 + 1;
                } while (uVar16 != 4);
                uVar11 = uVar11 + 1;
            } while (uVar11 != 8);
            uVar2 = (unsigned int)(uVar5 >> 1);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[0];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (unsigned int)lVar10 <= uVar12;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            iVar13 = uVar3 - 1;
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)lVar10 <= iVar4;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = uVar12 <= (unsigned int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = iVar4 <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[1];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)lVar10 <= iVar4 >> 1;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            uVar12 = 0;
            do {
                lVar10 = 0;
                do {
                    uVar11 = (int)lVar17 + lVar10;
                    if ((-1 < (long)uVar11) && ((long)uVar11 < (long)(unsigned long)(uVar3 * uVar3))) {
                        paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                        pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                        uVar9 = (*pAVar8)[uVar11];
                        *(bool*)uVar9 = uVar12 * 2 <= (unsigned int)lVar10;
                    }
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)uVar15 <= (int)(uVar12 >> 1);
                    uVar16 = uVar11;
                } while (0 < (int)uVar15);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar12;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = iVar4 * 2 <= (int)uVar12;
                    uVar16 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[2];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar12;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)uVar12 <= iVar4 >> 1;
                    uVar16 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = iVar4 * 2 <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (unsigned int)lVar10 <= uVar12 >> 1;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)(uVar12 * 2) <= (int)uVar15;
                    uVar16 = uVar11;
                } while (0 < (int)uVar15);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[3];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = iVar4 >> 1 <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (unsigned int)lVar10 <= uVar12 * 2;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)(uVar12 >> 1) <= (int)uVar15;
                    uVar16 = uVar11;
                } while (0 < (int)uVar15);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar12;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)uVar12 <= iVar4 * 2;
                    uVar16 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[4];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar12;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = iVar4 >> 1 <= (int)uVar12;
                    uVar16 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)lVar10 <= iVar4 * 2;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = uVar12 >> 1 <= (unsigned int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)uVar15 <= (int)(uVar12 * 2);
                    uVar16 = uVar11;
                } while (0 < (int)uVar15);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[5];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[lVar10 + (int)lVar17];
                    *(bool*)uVar9 = (unsigned int)lVar10 <= uVar2;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = uVar12 <= uVar2;
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar16 = uVar11;
                } while (uVar15 != 0);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[lVar10 + (int)lVar17];
                    *(bool*)uVar9 = uVar2 <= (unsigned int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = uVar2 <= uVar12;
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar16 = uVar11;
                } while (uVar15 != 0);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[6];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)lVar10 <= (int)(uVar12 - uVar2);
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)lVar10 <= (int)(iVar4 - uVar2);
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            uVar11 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar12 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar12;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)uVar12 <= (int)(iVar4 - uVar2);
                    uVar16 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)uVar15 <= (int)(uVar12 - uVar2);
                    uVar16 = uVar11;
                } while (0 < (int)uVar15);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            uVar12 = 0;
            do {
                paVar6 = (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[7];
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[0];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)(uVar12 - uVar2) <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                uVar12 = uVar12 + 1;
                lVar17 = (int)lVar17 + lVar10;
            } while (uVar12 != uVar3);
            lVar17 = 0;
            iVar4 = iVar13;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[1];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                lVar10 = 0;
                do {
                    uVar9 = (*pAVar8)[(int)lVar17 + lVar10];
                    *(bool*)uVar9 = (int)(iVar4 - uVar2) <= (int)lVar10;
                    lVar10 = lVar10 + 1;
                } while (uVar3 != (unsigned int)lVar10);
                lVar17 = (int)lVar17 + lVar10;
                bVar1 = 0 < iVar4;
                iVar4 = iVar4 - 1;
            } while (bVar1);
            uVar11 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[2];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = uVar5;
                uVar14 = (long)(int)uVar11;
                do {
                    uVar12 = (int)uVar16 - 1;
                    uVar16 = (unsigned long)uVar12;
                    uVar11 = uVar14 + 1;
                    uVar9 = (*pAVar8)[uVar14];
                    *(bool*)uVar9 = (int)(iVar13 - uVar2) <= (int)uVar12;
                    uVar14 = uVar11;
                } while (0 < (int)uVar12);
                bVar1 = 0 < iVar13;
                iVar13 = iVar13 - 1;
            } while (bVar1);
            uVar11 = 0;
            uVar12 = 0;
            do {
                paVar7 = (array<Array<bool>, 4ul>*)(*paVar6)[3];
                pAVar8 = (Array<bool>*)(*paVar7)[arg1];
                uVar16 = (long)(int)uVar11;
                uVar14 = uVar5;
                do {
                    uVar15 = (int)uVar14 - 1;
                    uVar14 = (unsigned long)uVar15;
                    uVar11 = uVar16 + 1;
                    uVar9 = (*pAVar8)[uVar16];
                    *(bool*)uVar9 = (int)(uVar12 - uVar2) <= (int)uVar15;
                    uVar16 = uVar11;
                } while (0 < (int)uVar15);
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar3);
            arg1 = arg1 + 1;
            uVar5 = uVar5 >> 1;
        } while (arg1 != 4);
    }

    // 0x1003c65a0
    void OverlayShapeData::GetShapeData(unsigned int arg1, unsigned int arg2, unsigned int arg3) const {
        if (7 < arg1) {
            LogAssert("shapeID < 8",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/OverlayShapeData.cpp",
                      15, nullptr);
        }
        if (3 < arg2) {
            LogAssert("rotate < 4",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/OverlayShapeData.cpp",
                      16, nullptr);
        }
        unsigned int uVar1 = arg3 - 1;
        if ((7 < uVar1) || ((139U >> (uVar1 & 31) & 1) == 0)) {
            LogAssert("size == 8 || size == 4 || size == 2 || size == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/OverlayShapeData.cpp",
                      17, nullptr);
        }
        unsigned long arg1_00 =
            *(unsigned long*)(&reinterpret_cast<const uint64_t*>(&MSI_MIN_SIZE)[1] + (long)(int)uVar1 * 8);
        array<std::array<Array<bool>, 4ul>, 4ul>* this_00 =
            (array<std::array<Array<bool>, 4ul>, 4ul>*)(*this)[(unsigned long)arg1];
        array<Array<bool>, 4ul>* this_01 = (array<Array<bool>, 4ul>*)(*this_00)[(unsigned long)arg2];
        (*this_01)[arg1_00];
    }

} // namespace jag::game
