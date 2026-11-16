// libs/oldscape/jagex3/sound/filter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "filter.h"

namespace jag::oldscape::sound {
    // 0x100d404fc
    float Filter::MAX_GAIN = 100.0f;

    // 0x100d40500
    float Filter::MAX_PITCH = 8.0f;

    // 0x100d40504
    int32_t Filter::MIN_FREQ = 1107480595;

    // 0x1016c1bd4
    uint8_t Filter::m_coeff[64];

    // 0x1016c1c14
    std::array<int, 16ul> Filter::m_coeffInt;

    // 0x1016c1c54
    int32_t Filter::m_reduceCoeff;

    // 0x1016c1c58
    int64_t Filter::m_reduceCoeffInt;

    // 0x1002960f0
    float Filter::Radius(int arg1, int arg2, float arg3) {
        auto piVar3 = RGain(arg1, 0, arg2);
        int iVar1 = *piVar3;
        piVar3 = (int*)RGain(arg1, 1, arg2);
        double dVar2 = (double)pow<int, float>(10, ((float)(*piVar3 - iVar1) * arg3 + (float)iVar1) * -7.6293945e-05);
        return 1.0 - (float)dVar2;
    }

    // 0x100296180
    long Filter::RGain(int arg1, int arg2, int arg3) {
        return field_76.data() + (long)(arg3 << 2) * 4 + (long)(arg2 * 2) * 4 + (long)arg1 * 4;
    }

    // 0x1002961f0
    float Filter::Frequency(float arg1) {
        double dVar1 = (double)pow<int, float>(2, arg1);
        return (float)dVar1 * 0.009318832f;
    }

    // 0x100296210
    void Filter::Frequency(int arg1, int arg2, float arg3) {
        auto piVar2 = RPitch(arg1, 0, arg2);
        int iVar1 = *piVar2;
        piVar2 = (int*)RPitch(arg1, 1, arg2);
        Frequency(((float)(*piVar2 - iVar1) * arg3 + (float)iVar1) * 0.00012207031f);
    }

    // 0x100296290
    long Filter::RPitch(int arg1, int arg2, int arg3) {
        return field_12.data() + (long)(arg3 << 2) * 4 + (long)(arg2 * 2) * 4 + (long)arg1 * 4;
    }

    // 0x1002962e0
    void Filter::RCoeff(int arg1, int arg2) {
        return &m_coeff + (long)arg1 * 4 + (long)(arg2 * 2) * 4;
    }

    // 0x100296300
    int* Filter::RCoeffInt(int arg1, int arg2) {
        long lVar1 = m_coeffInt.data();
        return (int*)(lVar1 + (long)(arg2 * 2) * 4 + (long)arg1 * 4);
    }

    // 0x100296340
    int Filter::CalculateCoeffs(int arg1, float arg2) {
        double dVar2;
        int* piVar3;
        float* pfVar5;
        float* pfVar6;
        float* pfVar7;
        float* pfVar8;
        int iVar9;
        unsigned int arg2_00;
        int iVar10;
        int iVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float in_XMM1_Da;

        if (arg1 == 0) {
            piVar3 = &field_140[0];
            iVar10 = *piVar3;
            piVar3 = &field_140[1];
            dVar2 = (double)pow<double, float>(
                (double)(unsigned long)(unsigned int)(((float)(*piVar3 - iVar10) * arg2 + (float)iVar10) *
                                                      0.00015258789f),
                in_XMM1_Da);
            m_reduceCoeff = (float)dVar2;
            m_reduceCoeffInt = (int)(m_reduceCoeff * 65536.0);
        }
        unsigned int* puVar4 = &field_4[(long)arg1];
        unsigned int uVar1 = *puVar4;
        if (uVar1 == 0) {
            iVar10 = 0;
        } else {
            fVar12 = (float)Radius(arg1, 0, arg2);
            fVar13 = (float)Frequency(arg1, 0, arg2);
            fVar13 = (float)::cos(fVar13);
            pfVar5 = (float*)RCoeff(arg1, 0);
            *pfVar5 = fVar13 * fVar12 * -2.0;
            arg2_00 = 1;
            pfVar6 = (float*)RCoeff(arg1, 1);
            *pfVar6 = fVar12 * fVar12;
            if (1 < (int)uVar1) {
                iVar10 = 2;
                do {
                    fVar14 = (float)Radius(arg1, arg2_00, arg2);
                    fVar12 = (float)Frequency(arg1, arg2_00, arg2);
                    fVar15 = (float)::cos(fVar12);
                    fVar15 = fVar15 * fVar14 * -2.0;
                    fVar14 = fVar14 * fVar14;
                    pfVar7 = (float*)RCoeff(arg1, arg2_00 * 2 - 1);
                    fVar12 = *pfVar7;
                    pfVar8 = (float*)RCoeff(arg1, arg2_00 * 2 + 1);
                    *pfVar8 = fVar12 * fVar14;
                    fVar12 = *pfVar7;
                    pfVar7 = (float*)RCoeff(arg1, arg2_00 * 2 - 2);
                    fVar13 = *pfVar7;
                    pfVar7 = (float*)RCoeff(arg1, arg2_00 * 2);
                    *pfVar7 = fVar13 * fVar14 + fVar12 * fVar15;
                    iVar9 = iVar10;
                    if (1 < arg2_00) {
                        do {
                            iVar11 = iVar9 - 1;
                            pfVar7 = (float*)RCoeff(arg1, iVar9 - 2);
                            fVar12 = *pfVar7;
                            pfVar7 = (float*)RCoeff(arg1, iVar9 - 3);
                            fVar13 = *pfVar7;
                            pfVar7 = (float*)RCoeff(arg1, iVar11);
                            *pfVar7 = fVar13 * fVar14 + fVar12 * fVar15 + *pfVar7;
                            iVar9 = iVar11;
                        } while (2 < iVar11);
                    }
                    *pfVar6 = *pfVar5 * fVar15 + fVar14 + *pfVar6;
                    *pfVar5 = fVar15 + *pfVar5;
                    arg2_00 = arg2_00 + 1;
                    iVar10 = iVar10 + 2;
                } while (arg2_00 != uVar1);
            }
            if (arg1 == 0) {
                iVar10 = 0;
                piVar3 = &field_4[0];
                if (0 < *piVar3) {
                    iVar9 = *piVar3 * 2;
                    iVar11 = 1;
                    if (1 < iVar9) {
                        iVar11 = iVar9;
                    }
                    do {
                        fVar12 = m_reduceCoeff;
                        pfVar5 = (float*)RCoeff(0, iVar10);
                        *pfVar5 = fVar12 * *pfVar5;
                        iVar10 = iVar10 + 1;
                    } while (iVar11 != iVar10);
                }
            }
            if ((int)*puVar4 < 1) {
                iVar10 = *puVar4 * 2;
            } else {
                iVar9 = 0;
                do {
                    pfVar5 = (float*)RCoeff(arg1, iVar9);
                    fVar12 = *pfVar5;
                    piVar3 = RCoeffInt(arg1, iVar9);
                    *piVar3 = (int)(fVar12 * 65536.0);
                    iVar9 = iVar9 + 1;
                    iVar10 = *puVar4 * 2;
                } while (iVar9 < iVar10);
            }
        }
        return iVar10;
    }

    // 0x100296730
    void Filter::Load(PacketJ<Array<unsigned char>>& packetJ, Envelope& envelope) {
        uint32_t uVar1;
        unsigned short uVar3;
        unsigned int* puVar5;
        int* piVar6;
        unsigned int* puVar7;
        uint32_t* puVar8;
        int iVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        int arg1;
        bool bVar12;

        uint8_t bVar2 = packetJ.g1();
        uint8_t* this_00 = &field_4;
        unsigned int* puVar4 = (unsigned int*)(*this_00)[0];
        *puVar4 = (unsigned int)(bVar2 >> 4);
        puVar4 = (unsigned int*)(*this_00)[1];
        *puVar4 = bVar2 & 15;
        if (bVar2 == 0) {
            puVar8 = &field_140[1];
            *puVar8 = 0;
            puVar8 = &field_140[0];
            *puVar8 = 0;
        } else {
            uVar3 = packetJ.g2();
            puVar4 = &field_140[0];
            *puVar4 = (unsigned int)uVar3;
            uVar3 = packetJ.g2();
            puVar5 = &field_140[1];
            *puVar5 = (unsigned int)uVar3;
            bVar2 = packetJ.g1();
            uVar11 = 0;
            do {
                piVar6 = (int*)(*this_00)[uVar11];
                if (0 < *piVar6) {
                    iVar9 = 0;
                    do {
                        uVar3 = packetJ.g2();
                        puVar7 = (unsigned int*)RPitch((int)uVar11, 0, iVar9);
                        *puVar7 = (unsigned int)uVar3;
                        uVar3 = packetJ.g2();
                        puVar7 = (unsigned int*)RGain((int)uVar11, 0, iVar9);
                        *puVar7 = (unsigned int)uVar3;
                        iVar9 = iVar9 + 1;
                    } while (iVar9 < *piVar6);
                }
                bVar12 = uVar11 == 0;
                uVar11 = uVar11 + 1;
            } while (bVar12);
            uVar11 = 0;
            do {
                piVar6 = (int*)(*this_00)[uVar11];
                if (0 < *piVar6) {
                    iVar9 = 0;
                    do {
                        arg1 = (int)uVar11;
                        if (((unsigned int)bVar2 & (1 << ((char)uVar11 * '\x04' & 31U)) << ((uint8_t)iVar9 & 31)) ==
                            0) {
                            puVar8 = (uint32_t*)RPitch(arg1, 0, iVar9);
                            uVar1 = *puVar8;
                            puVar8 = (uint32_t*)RPitch(arg1, 1, iVar9);
                            *puVar8 = uVar1;
                            puVar7 = (unsigned int*)RGain(arg1, 0, iVar9);
                            uVar10 = *puVar7;
                        } else {
                            uVar3 = packetJ.g2();
                            puVar7 = (unsigned int*)RPitch(arg1, 1, iVar9);
                            *puVar7 = (unsigned int)uVar3;
                            uVar3 = packetJ.g2();
                            uVar10 = (unsigned int)uVar3;
                        }
                        puVar7 = (unsigned int*)RGain(arg1, 1, iVar9);
                        *puVar7 = uVar10;
                        iVar9 = iVar9 + 1;
                    } while (iVar9 < *piVar6);
                }
                bVar12 = uVar11 == 0;
                uVar11 = uVar11 + 1;
            } while (bVar12);
            if ((bVar2 != 0) || (*puVar5 != *puVar4)) {
                envelope.LoadPoints(packetJ);
            }
        }
    }

    // 0x1002969c0
    void Filter::LoadUncompressed(PacketJ<Array<unsigned char>>& packetJ) {
        unsigned long arg1;
        int* piVar5;
        int arg2;
        int arg3;
        bool bVar6;

        field_0 = packetJ.g1() != '\0';
        unsigned short uVar3 = packetJ.g2();
        unsigned int* puVar4 = &field_140[0];
        *puVar4 = (unsigned int)uVar3;
        uVar3 = packetJ.g2();
        puVar4 = &field_140[1];
        *puVar4 = (unsigned int)uVar3;
        uint8_t bVar2 = packetJ.g1();
        uint8_t* this_00 = &field_4;
        puVar4 = (unsigned int*)(*this_00)[0];
        *puVar4 = (unsigned int)(bVar2 >> 4);
        puVar4 = (unsigned int*)(*this_00)[1];
        *puVar4 = bVar2 & 15;
        if (bVar2 != 0) {
            arg1 = 0;
            do {
                piVar5 = (int*)(*this_00)[arg1];
                arg2 = 0;
                do {
                    if (0 < *piVar5) {
                        arg3 = 0;
                        do {
                            uVar3 = packetJ.g2();
                            puVar4 = (unsigned int*)RPitch((int)arg1, arg2, arg3);
                            *puVar4 = (unsigned int)uVar3;
                            uVar3 = packetJ.g2();
                            puVar4 = (unsigned int*)RGain((int)arg1, arg2, arg3);
                            *puVar4 = (unsigned int)uVar3;
                            arg3 = arg3 + 1;
                        } while (arg3 < *piVar5);
                    }
                    bVar6 = arg2 == 0;
                    arg2 = arg2 + 1;
                } while (bVar6);
                bVar6 = arg1 == 0;
                arg1 = arg1 + 1;
            } while (bVar6);
        }
    }

    // 0x100296b30
    void Filter::SaveUncompressed(PacketJ<Array<unsigned char>>& packetJ) {
        unsigned long arg1;
        int arg3;
        bool bVar6;

        packetJ.p1<unsigned long>((unsigned int)field_0);
        uint32_t* puVar2 = &field_140[0];
        packetJ.p2<unsigned long>((unsigned short)*puVar2);
        puVar2 = &field_140[1];
        packetJ.p2<unsigned long>((unsigned short)*puVar2);
        uint8_t* this_00 = &field_4;
        int* piVar3 = (int*)(*this_00)[0];
        int iVar5 = *piVar3;
        ID* pIVar4 = (ID*)(*this_00)[1];
        ID IVar1 = *pIVar4;
        packetJ.p1<unsigned long>(iVar5 << 4 | IVar1);
        if (iVar5 << 4 != 0 || IVar1 != 0) {
            arg1 = 0;
            do {
                piVar3 = (int*)(*this_00)[arg1];
                iVar5 = 0;
                do {
                    if (0 < *piVar3) {
                        arg3 = 0;
                        do {
                            puVar2 = (uint32_t*)RPitch((int)arg1, iVar5, arg3);
                            packetJ.p2<unsigned long>((unsigned short)*puVar2);
                            puVar2 = (uint32_t*)RGain((int)arg1, iVar5, arg3);
                            packetJ.p2<unsigned long>((unsigned short)*puVar2);
                            arg3 = arg3 + 1;
                        } while (arg3 < *piVar3);
                    }
                    bVar6 = iVar5 == 0;
                    iVar5 = iVar5 + 1;
                } while (bVar6);
                bVar6 = arg1 == 0;
                arg1 = arg1 + 1;
            } while (bVar6);
        }
    }

} // namespace jag::oldscape::sound

// 0x100296720
void cos(float arg1) {
    _cosf();
}
