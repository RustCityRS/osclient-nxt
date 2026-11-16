// libs/oldscape/jagex3/sound/tone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "tone.h"

namespace jag::oldscape::sound {
    // 0x100d41918
    int64_t Tone::m_deciSemitone = 4607208507887251972;

    // 0x1016c1dd8
    int64_t Tone::m_initDone;

    // 0x1016c1de0, set at startup by ___cxx_global_var_init.58
    Array<int> Tone::m_buf = Array<int>();

    // 0x1016c1df8, set at startup by ___cxx_global_var_init.59
    Array<int> Tone::m_noise = Array<int>();

    // 0x1016c1e10, set at startup by ___cxx_global_var_init.60
    Array<int> Tone::m_sine = Array<int>();

    // 0x1016c1e28
    std::array<int, 5ul> Tone::m_fPos;

    // 0x1016c1e3c
    std::array<int, 5ul> Tone::m_fDel;

    // 0x1016c1e50
    std::array<int, 5ul> Tone::m_fAmp;

    // 0x1016c1e64
    std::array<int, 5ul> Tone::m_fMulti;

    // 0x1016c1e78
    std::array<int, 5ul> Tone::m_fOffset;

    // 0x100298390
    void Tone::Load(PacketJ<Array<unsigned char>>& packetJ) {
        int iVar3;
        uint32_t uVar4;
        long lVar7;
        int* piVar8;
        uint32_t* puVar9;

        auto local_38 = std::make_unique<Envelope>();
        field_16 = local_38;
        auto pEVar6 = field_16.operator->();
        pEVar6->Load(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_24 = local_38;
        pEVar6 = (Envelope*)field_24.operator->();
        pEVar6->Load(packetJ);
        if (packetJ.g1()) {
            lVar7 = packetJ.size();
            packetJ.SetPos(lVar7 - 1);
            local_38 = std::make_unique<Envelope>();
            field_32 = local_38;
            pEVar6 = (Envelope*)field_32.operator->();
            pEVar6->Load(packetJ);
            local_38 = std::make_unique<Envelope>();
            field_40 = local_38;
            pEVar6 = (Envelope*)field_40.operator->();
            pEVar6->Load(packetJ);
        }
        if (packetJ.g1()) {
            lVar7 = packetJ.size();
            packetJ.SetPos(lVar7 - 1);
            local_38 = std::make_unique<Envelope>();
            field_48 = local_38;
            pEVar6 = (Envelope*)field_48.operator->();
            pEVar6->Load(packetJ);
            local_38 = std::make_unique<Envelope>();
            field_56 = local_38;
            pEVar6 = (Envelope*)field_56.operator->();
            pEVar6->Load(packetJ);
        }
        if (packetJ.g1()) {
            lVar7 = packetJ.size();
            packetJ.SetPos(lVar7 - 1);
            local_38 = std::make_unique<Envelope>();
            field_64 = local_38;
            pEVar6 = (Envelope*)field_64.operator->();
            pEVar6->Load(packetJ);
            local_38 = std::make_unique<Envelope>();
            field_72 = local_38;
            pEVar6 = (Envelope*)field_72.operator->();
            pEVar6->Load(packetJ);
        }
        unsigned long arg1 = 0;
        do {
            iVar3 = packetJ.gSmarts();
            if (iVar3 == 0)
                break;
            piVar8 = &field_80[arg1];
            *piVar8 = iVar3;
            uVar4 = packetJ.gSmart();
            puVar9 = (uint32_t*)(*((array<int, 5ul>*)((long)&field_96 + 4)))[arg1];
            *puVar9 = uVar4;
            uVar4 = packetJ.gSmarts();
            puVar9 = &field_120[arg1];
            *puVar9 = uVar4;
            arg1 = arg1 + 1;
        } while (arg1 != 6);
        unsigned int uVar5 = packetJ.gSmarts();
        field_140 = uVar5;
        uVar5 = packetJ.gSmarts();
        field_144 = uVar5;
        unsigned short uVar2 = packetJ.g2();
        field_4 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_8 = (unsigned int)uVar2;
        local_38 = std::make_unique<Filter>();
        field_152 = local_38;
        local_38 = std::make_unique<Envelope>();
        field_160 = local_38;
        auto this_00 = field_152.operator->();
        pEVar6 = (Envelope*)*field_160;
        this_00->Load(packetJ, *pEVar6);
    }

    // 0x100298970
    void Tone::LoadUncompressed(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        unsigned short uVar1;
        uint32_t uVar2;
        unsigned int* puVar4;
        uint32_t* puVar5;

        auto local_38 = std::make_unique<Envelope>();
        uint8_t* this_00 = &field_16;
        *this_00 = local_38;
        Envelope* pEVar3 = (Envelope*)(*this_00).operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_24 = local_38;
        pEVar3 = (Envelope*)field_24.operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_32 = local_38;
        pEVar3 = (Envelope*)field_32.operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_40 = local_38;
        pEVar3 = (Envelope*)field_40.operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_48 = local_38;
        pEVar3 = (Envelope*)field_48.operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_56 = local_38;
        pEVar3 = (Envelope*)field_56.operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_64 = local_38;
        pEVar3 = (Envelope*)field_64.operator->();
        pEVar3->LoadUncompressed(packetJ);
        local_38 = std::make_unique<Envelope>();
        field_72 = local_38;
        pEVar3 = (Envelope*)field_72.operator->();
        pEVar3->LoadUncompressed(packetJ);
        unsigned long arg1 = 0;
        do {
            uVar1 = packetJ.g2();
            puVar4 = &field_80[arg1];
            *puVar4 = (unsigned int)uVar1;
            uVar2 = packetJ.g4();
            puVar5 = (uint32_t*)(*((array<int, 5ul>*)((long)&field_96 + 4)))[arg1];
            *puVar5 = uVar2;
            uVar1 = packetJ.g2();
            puVar4 = &field_120[arg1];
            *puVar4 = (unsigned int)uVar1;
            arg1 = arg1 + 1;
        } while (arg1 != 5);
        uVar1 = packetJ.g2();
        field_140 = (unsigned int)uVar1;
        uVar1 = packetJ.g2();
        field_144 = (unsigned int)uVar1;
        if (1 < arg2) {
            uVar1 = packetJ.g2();
            field_4 = (unsigned int)uVar1;
            uVar1 = packetJ.g2();
            field_8 = (unsigned int)uVar1;
        }
        local_38 = std::make_unique<Filter>();
        uint8_t* this_01 = &field_152;
        *this_01 = local_38;
        local_38 = std::make_unique<Envelope>();
        uint8_t* this_02 = &field_160;
        *this_02 = local_38;
        if (3 < arg2) {
            local_38 = std::make_unique<Filter>();
            *this_01 = local_38;
            ((Filter*)(*this_01).operator->())->LoadUncompressed(packetJ);
            local_38 = std::make_unique<Envelope>();
            *this_02 = local_38;
            pEVar3 = (Envelope*)(*this_02).operator->();
            pEVar3->LoadUncompressed(packetJ);
        }
        long lVar6 = (*this_00).operator->();
        field_0 = *(int*)(lVar6 + 8) != 0;
    }

    // 0x100299150
    auto Tone::Generate(int arg1, int arg2) {
        uint8_t* puVar1;
        int iVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        Envelope* pEVar11;
        int* piVar12;
        uint32_t* puVar13;
        int* piVar14;
        long lVar15;
        char* pcVar16;
        Filter* pFVar17;
        unsigned int* puVar18;
        unsigned int uVar19;
        int iVar20;
        unsigned long uVar21;
        uint8_t* puVar22;
        unsigned long uVar23;
        void* arg2_00;
        Tone* pTVar24;
        int iVar25;
        unsigned long uVar26;
        long lVar27;
        long lVar28;
        unsigned int uVar29;
        unsigned long uVar31;
        uint8_t* envelope;
        double arg1_00;
        double dVar32;
        double dVar33;
        int local_a4;
        int local_7c;
        int local_78;
        int local_74;
        long local_58;
        long local_50;
        unsigned long local_48;
        unsigned long local_40;

        uint64_t uVar10 = m_buf.data();
        void* pvVar30 = (void*)((long)arg1 * 4);
        ___bzero(uVar10);
        if (9 < arg2) {
            dVar33 = (double)arg1 / (double)arg2;
            puVar1 = &field_16;
            pEVar11 = (Envelope*)(*puVar1).operator->();
            pEVar11->GenInit();
            pEVar11 = (Envelope*)field_24.operator->();
            pEVar11->GenInit();
            puVar22 = &field_32;
            bVar3 = puVar22 != pvVar30;
            local_a4 = 0;
            local_78 = 0;
            local_7c = 0;
            if (bVar3) {
                pEVar11 = (Envelope*)(*puVar22).operator->();
                local_78 = 0;
                local_7c = 0;
                if (pEVar11->field_12 != '\0') {
                    pEVar11->GenInit();
                    pEVar11 = (Envelope*)field_40.operator->();
                    pEVar11->GenInit();
                    piVar12 = (int*)(*puVar22).operator->();
                    local_7c = (int)((double)(piVar12[1] - *piVar12) * 32.768 * (1.0 / dVar33));
                    local_78 = (int)((double)*piVar12 * 32.768 * (1.0 / dVar33));
                }
            }
            envelope = &field_48;
            bVar3 = envelope != pvVar30;
            if (bVar3) {
                pEVar11 = (Envelope*)(*envelope).operator->();
                local_74 = 0;
                if (pEVar11->field_12 != '\0') {
                    pEVar11->GenInit();
                    pEVar11 = (Envelope*)field_56.operator->();
                    pEVar11->GenInit();
                    piVar12 = (int*)(*envelope).operator->();
                    local_74 = (int)((double)(piVar12[1] - *piVar12) * 32.768 * (1.0 / dVar33));
                    local_a4 = (int)((double)*piVar12 * 32.768 * (1.0 / dVar33));
                }
            } else {
                local_74 = 0;
            }
            pvVar30 = nullptr;
            do {
                arg2_00 = pvVar30;
                piVar12 = &field_80[(unsigned long)pvVar30];
                if (*piVar12 != 0) {
                    puVar13 = &m_fPos[(unsigned long)pvVar30];
                    *puVar13 = 0;
                    piVar14 = &field_120[(unsigned long)pvVar30];
                    iVar20 = *piVar14;
                    piVar14 = &m_fDel[(unsigned long)pvVar30];
                    *piVar14 = (int)((double)iVar20 * dVar33);
                    iVar20 = *piVar12;
                    piVar12 = &m_fAmp[(unsigned long)pvVar30];
                    *piVar12 = (iVar20 << 14) / 100;
                    piVar12 = (int*)(*puVar1).operator->();
                    iVar20 = piVar12[1];
                    iVar25 = *piVar12;
                    piVar12 = (int*)(*((array<int, 5ul>*)((long)&field_96 + 4)))[(unsigned long)pvVar30];
                    dVar32 = (double)pow<double, int>(arg1_00, *piVar12);
                    piVar12 = (int*)m_fMulti[(unsigned long)pvVar30];
                    *piVar12 = (int)(dVar32 * 32.768 * (double)(iVar20 - iVar25) * (1.0 / dVar33));
                    piVar12 = (int*)(*puVar1).operator->();
                    iVar20 = *piVar12;
                    arg2_00 = pvVar30;
                    piVar12 = &m_fOffset[(unsigned long)pvVar30];
                    *piVar12 = (int)((double)iVar20 * 32.768 * (1.0 / dVar33));
                }
                pvVar30 = (void*)((long)pvVar30 + 1);
            } while (pvVar30 != (void*)5);
            if (0 < arg1) {
                uVar19 = 0;
                iVar20 = 0;
                iVar25 = 0;
                do {
                    pEVar11 = (Envelope*)(*puVar1).operator->();
                    iVar4 = pEVar11->GenNext(arg1);
                    pEVar11 = (Envelope*)field_24.operator->();
                    pvVar30 = (void*)(unsigned long)(unsigned int)arg1;
                    iVar5 = pEVar11->GenNext(arg1);
                    bVar3 = puVar22 != pvVar30;
                    if ((bVar3) && (pEVar11 = (Envelope*)(*puVar22).operator->(), pEVar11->field_12 != '\0')) {
                        iVar6 = pEVar11->GenNext(arg1);
                        pEVar11 = (Envelope*)field_40.operator->();
                        iVar7 = pEVar11->GenNext(arg1);
                        pTVar24 = (Tone*)puVar22;
                        lVar15 = (*puVar22).operator->();
                        pvVar30 = (void*)(unsigned long)uVar19;
                        iVar7 = WaveFunc(pTVar24, uVar19, iVar7, *(int*)(lVar15 + 8));
                        iVar4 = iVar4 + (iVar7 >> 1);
                        uVar19 = uVar19 + local_78 + (iVar6 * local_7c >> 16);
                    }
                    bVar3 = envelope != pvVar30;
                    if ((bVar3) && (pEVar11 = (Envelope*)(*envelope).operator->(), pEVar11->field_12 != '\0')) {
                        iVar6 = pEVar11->GenNext(arg1);
                        pEVar11 = (Envelope*)field_56.operator->();
                        iVar7 = pEVar11->GenNext(arg1);
                        pTVar24 = (Tone*)envelope;
                        lVar15 = (*envelope).operator->();
                        iVar7 = WaveFunc(pTVar24, iVar20, iVar7, *(int*)(lVar15 + 8));
                        iVar5 = ((iVar7 >> 1) + 32768) * iVar5 >> 15;
                        iVar20 = iVar20 + local_a4 + (iVar6 * local_74 >> 16);
                    }
                    pvVar30 = nullptr;
                    do {
                        arg2_00 = pvVar30;
                        piVar12 = &field_80[(unsigned long)pvVar30];
                        if (*piVar12 != 0) {
                            arg2_00 = pvVar30;
                            piVar12 = &m_fDel[(unsigned long)pvVar30];
                            iVar6 = *piVar12;
                            if ((int)((long)iVar25 + (long)iVar6) < arg1) {
                                piVar12 = &m_fPos[(unsigned long)pvVar30];
                                iVar7 = *piVar12;
                                piVar14 = &m_fAmp[(unsigned long)pvVar30];
                                iVar2 = *piVar14;
                                pTVar24 = (Tone*)puVar1;
                                lVar15 = (*puVar1).operator->();
                                iVar7 = WaveFunc(pTVar24, iVar7, iVar2 * iVar5 >> 15, *(int*)(lVar15 + 8));
                                piVar14 = &m_buf[(long)iVar25 + (long)iVar6];
                                *piVar14 = *piVar14 + iVar7;
                                piVar14 = &m_fMulti[(unsigned long)pvVar30];
                                iVar6 = *piVar14;
                                arg2_00 = pvVar30;
                                piVar14 = &m_fOffset[(unsigned long)pvVar30];
                                *piVar12 = *piVar12 + (iVar6 * iVar4 >> 16) + *piVar14;
                            }
                        }
                        pvVar30 = (void*)((long)pvVar30 + 1);
                    } while (pvVar30 != (void*)5);
                    iVar25 = iVar25 + 1;
                } while (iVar25 != arg1);
            }
            puVar1 = &field_64;
            bVar3 = puVar1 != arg2_00;
            if ((bVar3) && (pEVar11 = (Envelope*)(*puVar1).operator->(), pEVar11->field_12 != '\0')) {
                pEVar11->GenInit();
                pEVar11 = (Envelope*)field_72.operator->();
                pEVar11->GenInit();
                if (0 < arg1) {
                    bVar3 = true;
                    pvVar30 = nullptr;
                    iVar20 = 0;
                    do {
                        pEVar11 = (Envelope*)(*puVar1).operator->();
                        iVar4 = pEVar11->GenNext(arg1);
                        pEVar11 = (Envelope*)field_72.operator->();
                        iVar25 = pEVar11->GenNext(arg1);
                        piVar12 = (int*)(*puVar1).operator->();
                        if (bVar3) {
                            iVar25 = iVar4;
                        }
                        iVar20 = iVar20 + 256;
                        if ((iVar25 * (piVar12[1] - *piVar12) >> 8) + *piVar12 <= iVar20) {
                            iVar20 = 0;
                            bVar3 = (bool)(bVar3 ^ 1);
                        }
                        if (bVar3) {
                            puVar13 = &m_buf[(unsigned long)pvVar30];
                            *puVar13 = 0;
                        }
                        pvVar30 = (void*)((long)pvVar30 + 1);
                    } while ((void*)(unsigned long)(unsigned int)arg1 != pvVar30);
                }
            }
            if (((0 < (int)field_140) && (0 < (int)field_144)) &&
                (iVar20 = (int)(dVar33 * (double)(int)field_140), iVar20 < arg1)) {
                uVar21 = 0;
                do {
                    piVar12 = &m_buf[uVar21];
                    uVar19 = field_144;
                    iVar25 = *piVar12;
                    piVar12 = &m_buf[(long)iVar20 + uVar21];
                    *piVar12 = *piVar12 + (int)(uVar19 * iVar25) / 100;
                    uVar21 = uVar21 + 1;
                } while (arg1 - iVar20 != (int)uVar21);
            }
            puVar1 = &field_152;
            pcVar16 = (char*)(*puVar1).operator->();
            if (*pcVar16 != '\0') {
                piVar12 = (int*)(*((pcVar16 + 4)))[0];
                if ((0 < *piVar12) || (piVar12 = (int*)(*((pcVar16 + 4)))[1], 0 < *piVar12)) {
                    puVar22 = &field_160;
                    pEVar11 = (Envelope*)(*puVar22).operator->();
                    pEVar11->GenInit();
                    pEVar11 = (Envelope*)(*puVar22).operator->();
                    iVar25 = arg1 + 1;
                    iVar20 = pEVar11->GenNext(iVar25);
                    pFVar17 = (Filter*)(*puVar1).operator->();
                    uVar21 = 0;
                    uVar8 = pFVar17->CalculateCoeffs(0, (float)iVar20 * 1.5258789e-05);
                    local_48 = (unsigned long)uVar8;
                    pFVar17 = (Filter*)(*puVar1).operator->();
                    uVar19 = pFVar17->CalculateCoeffs(1, (float)iVar20 * 1.5258789e-05);
                    if ((int)(uVar19 + uVar8) <= arg1) {
                        uVar9 = arg1 - uVar8;
                        if ((int)uVar19 <= (int)(arg1 - uVar8)) {
                            uVar9 = uVar19;
                        }
                        if (0 < (int)uVar9) {
                            local_50 = ((long)(int)uVar8 << 32) - 4294967296;
                            uVar26 = 18446744073709551615;
                            uVar21 = 0;
                            do {
                                piVar12 = &m_buf[uVar21 + (long)(int)uVar8];
                                uVar31 = (unsigned long)((long)Filter::m_reduceCoeffInt * (long)*piVar12) >> 16;
                                if (0 < (int)uVar8) {
                                    uVar23 = 0;
                                    lVar15 = local_50;
                                    do {
                                        piVar12 = &m_buf[lVar15 >> 32];
                                        iVar20 = *piVar12;
                                        piVar12 = Filter::RCoeffInt(0, (int)uVar23);
                                        uVar31 = (unsigned long)(unsigned int)((int)uVar31 +
                                                                               (int)((unsigned long)((long)*piVar12 *
                                                                                                     (long)iVar20) >>
                                                                                     16));
                                        uVar23 = uVar23 + 1;
                                        lVar15 = lVar15 - 4294967296;
                                    } while (local_48 != uVar23);
                                }
                                uVar29 = (unsigned int)uVar31;
                                if (uVar21 != 0) {
                                    iVar20 = 0;
                                    uVar23 = uVar26;
                                    do {
                                        piVar12 = &m_buf[uVar23];
                                        iVar4 = *piVar12;
                                        piVar12 = Filter::RCoeffInt(1, iVar20);
                                        uVar29 =
                                            (int)uVar31 - (int)((unsigned long)((long)*piVar12 * (long)iVar4) >> 16);
                                        uVar31 = (unsigned long)uVar29;
                                        iVar20 = iVar20 + 1;
                                        bVar3 = uVar23 != 0;
                                        uVar23 = uVar23 - 1;
                                    } while (bVar3);
                                }
                                puVar18 = &m_buf[uVar21];
                                *puVar18 = uVar29;
                                pEVar11 = (Envelope*)(*puVar22).operator->();
                                iVar20 = pEVar11->GenNext(iVar25);
                                uVar21 = uVar21 + 1;
                                local_50 = local_50 + 4294967296;
                                uVar26 = uVar26 + 1;
                            } while (uVar21 != uVar9);
                        }
                        iVar4 = 128;
                        while (true) {
                            iVar5 = arg1 - (int)local_48;
                            if (iVar5 < iVar4) {
                                iVar4 = iVar5;
                            }
                            iVar6 = (int)uVar21;
                            if (iVar6 < iVar4) {
                                uVar21 = (unsigned long)iVar6;
                                lVar15 = (unsigned long)((iVar6 + (int)local_48) - 1) << 32;
                                local_50 = (uVar21 << 32) - 4294967296;
                                do {
                                    piVar12 = &m_buf[uVar21 + (long)(int)local_48];
                                    uVar26 = (unsigned long)((long)Filter::m_reduceCoeffInt * (long)*piVar12) >> 16;
                                    if (0 < (int)local_48) {
                                        uVar31 = 0;
                                        lVar27 = lVar15;
                                        do {
                                            piVar12 = &m_buf[lVar27 >> 32];
                                            iVar20 = *piVar12;
                                            piVar12 = Filter::RCoeffInt(0, (int)uVar31);
                                            uVar26 =
                                                (unsigned long)(unsigned int)((int)uVar26 +
                                                                              (int)((unsigned long)((long)*piVar12 *
                                                                                                    (long)iVar20) >>
                                                                                    16));
                                            uVar31 = uVar31 + 1;
                                            lVar27 = lVar27 - 4294967296;
                                        } while ((local_48 & 4294967295) != uVar31);
                                    }
                                    uVar8 = (unsigned int)uVar26;
                                    if (0 < (int)uVar19) {
                                        uVar31 = 0;
                                        lVar27 = local_50;
                                        do {
                                            piVar12 = &m_buf[lVar27 >> 32];
                                            iVar20 = *piVar12;
                                            piVar12 = Filter::RCoeffInt(1, (int)uVar31);
                                            uVar8 = (int)uVar26 -
                                                    (int)((unsigned long)((long)*piVar12 * (long)iVar20) >> 16);
                                            uVar26 = (unsigned long)uVar8;
                                            uVar31 = uVar31 + 1;
                                            lVar27 = lVar27 - 4294967296;
                                        } while (uVar19 != uVar31);
                                    }
                                    puVar18 = &m_buf[uVar21];
                                    *puVar18 = uVar8;
                                    pEVar11 = (Envelope*)(*puVar22).operator->();
                                    iVar20 = pEVar11->GenNext(iVar25);
                                    uVar21 = uVar21 + 1;
                                    lVar15 = lVar15 + 4294967296;
                                    local_50 = local_50 + 4294967296;
                                } while (iVar4 != (int)uVar21);
                            }
                            iVar6 = (int)uVar21;
                            if (iVar5 <= iVar6)
                                break;
                            pFVar17 = (Filter*)(*puVar1).operator->();
                            local_48 = pFVar17->CalculateCoeffs(0, (float)iVar20 * 1.5258789e-05);
                            pFVar17 = (Filter*)(*puVar1).operator->();
                            uVar19 = pFVar17->CalculateCoeffs(1, (float)iVar20 * 1.5258789e-05);
                            iVar4 = iVar4 + 128;
                        }
                        if (iVar6 < arg1) {
                            uVar8 = (iVar6 + (int)local_48) - arg1;
                            lVar15 = (long)(int)local_48;
                            uVar21 = (unsigned long)iVar6;
                            local_58 = (unsigned long)((iVar6 + (int)local_48) - 1) << 32;
                            local_48 = (uVar21 << 32) - 4294967296;
                            do {
                                local_40 = (unsigned long)uVar8;
                                iVar20 = 0;
                                if ((long)((lVar15 + uVar21) - (long)arg1) < lVar15) {
                                    lVar28 = local_58 - (local_40 << 32);
                                    lVar27 = (long)(int)uVar8;
                                    iVar20 = 0;
                                    do {
                                        piVar12 = &m_buf[lVar28 >> 32];
                                        iVar4 = *piVar12;
                                        piVar12 = Filter::RCoeffInt(0, (int)lVar27);
                                        iVar20 = iVar20 + (int)((unsigned long)((long)*piVar12 * (long)iVar4) >> 16);
                                        lVar27 = lVar27 + 1;
                                        lVar28 = lVar28 - 4294967296;
                                    } while (lVar27 < lVar15);
                                }
                                if (0 < (int)uVar19) {
                                    uVar31 = 0;
                                    uVar26 = local_48;
                                    do {
                                        piVar12 = &m_buf[(long)uVar26 >> 32];
                                        iVar4 = *piVar12;
                                        piVar12 = Filter::RCoeffInt(1, (int)uVar31);
                                        iVar20 = iVar20 - (int)((unsigned long)((long)*piVar12 * (long)iVar4) >> 16);
                                        uVar31 = uVar31 + 1;
                                        uVar26 = uVar26 - 4294967296;
                                    } while (uVar19 != uVar31);
                                }
                                piVar12 = &m_buf[uVar21];
                                *piVar12 = iVar20;
                                pEVar11 = (Envelope*)(*puVar22).operator->();
                                pEVar11->GenNext(iVar25);
                                uVar21 = uVar21 + 1;
                                uVar8 = uVar8 + 1;
                                local_58 = local_58 + 4294967296;
                                local_48 = local_48 + 4294967296;
                            } while ((int)uVar21 != arg1);
                        }
                    }
                }
            }
            if (0 < arg1) {
                uVar21 = 0;
                do {
                    piVar12 = &m_buf[uVar21];
                    if (*piVar12 < -32768) {
                        puVar13 = &m_buf[uVar21];
                        *puVar13 = 4294934528;
                    }
                    piVar12 = &m_buf[uVar21];
                    if (32767 < *piVar12) {
                        puVar13 = &m_buf[uVar21];
                        *puVar13 = 32767;
                    }
                    uVar21 = uVar21 + 1;
                } while ((unsigned int)arg1 != uVar21);
            }
        }
        return auto(&m_buf);
    }

    // 0x1002a0860
    void Tone::StaticInit() {
        unsigned int* puVar1;
        int* piVar2;
        long lVar3;
        unsigned int uVar5;
        bool bVar6;
        double dVar7;

        m_noise.set_max_size(32768, 5);
        unsigned long uVar4 = 0;
        do {
            puVar1 = &noiseBits[uVar4 >> 5];
            lVar3 = 0;
            uVar5 = *puVar1;
            do {
                piVar2 = &m_noise[uVar4 + lVar3];
                *piVar2 = (uVar5 & 1) * 2 - 1;
                lVar3 = lVar3 + 1;
                uVar5 = (int)uVar5 >> 1;
            } while (lVar3 != 32);
            bVar6 = uVar4 < 32736;
            uVar4 = uVar4 + 32;
        } while (bVar6);
        m_sine.set_max_size(32768, 5);
        uVar4 = 0;
        do {
            dVar7 = (double)_sin((double)(int)uVar4 * 0.00019174755713132846);
            piVar2 = &m_sine[uVar4];
            *piVar2 = (int)(dVar7 * 16384.0);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 32768);
        m_buf.set_max_size(220500, 1);
    }

    // 0x1002a09c0
    Tone::Tone() : field_0(true), field_4(500), field_8(0) {
        field_16.unique_ptr<true, void>();
        field_24.unique_ptr<true, void>();
        field_32.unique_ptr<true, void>();
        field_40.unique_ptr<true, void>();
        field_48.unique_ptr<true, void>();
        field_56.unique_ptr<true, void>();
        field_64.unique_ptr<true, void>();
        field_72.unique_ptr<true, void>();
        field_128 = 0;
        *(uint64_t*)&field_136 = 0;
        field_112 = 0;
        field_120 = 0;
        field_96 = 0;
        field_104 = 0;
        field_80 = 0;
        field_88 = 0;
        field_144 = 100;
        field_152.unique_ptr<true, void>();
        field_160.unique_ptr<true, void>();
        if (m_initDone == '\0') {
            StaticInit();
        }
    }

    // 0x1002a0bb0
    int Tone::WaveFunc(int arg1, int arg2, int arg3) {
        int* piVar1;
        int iVar2;

        switch (arg3) {
        case 1:
            iVar2 = -arg2;
            if ((arg1 & 16384U) == 0) {
                iVar2 = arg2;
            }
            break;
        case 2:
            piVar1 = &m_sine[(unsigned long)(arg1 & 32767)];
            iVar2 = arg2 * *piVar1 >> 14;
            break;
        case 3:
            iVar2 = ((int)((arg1 & 32767U) * arg2) >> 14) - arg2;
            break;
        case 4:
            piVar1 = &m_noise[(
                unsigned long)((unsigned int)((unsigned long)((long)arg1 * 1687014389) >> 42) - (arg1 >> 31) & 32767)];
            iVar2 = arg2 * *piVar1;
            break;
        default:
            iVar2 = 0;
        }
        return iVar2;
    }

    // 0x1002a0da0
    auto Tone::FromUncompressedTone(const Array<unsigned char>& arg1) {
        WindowSavedPosition local_40;

        local_40.PacketT(arg1);
        auto result = std::make_unique<Tone>();
        uint8_t bVar1 = local_40.g1();
        LoadUncompressed((Tone*)(result).operator->(), (PacketJ<Array<unsigned char> _>*)&local_40,
                         (unsigned int)bVar1);
        return result;
    }

} // namespace jag::oldscape::sound
