// libs/oldscape/jagex3/sound/filter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "filter.h"

namespace jag::oldscape::sound {
    // 0x100d404fc, 4 bytes, __const
    float Filter::MAX_GAIN = 100.0f;

    // 0x100d40500, 4 bytes, __const
    float Filter::MAX_PITCH = 8.0f;

    // 0x100d40504, 4 bytes, __const
    Filter::MIN_FREQ = 1107480595;

    // 0x1016c1bd4, 64 bytes, __common; zero-initialised
    Filter::m_coeff;

    // 0x1016c1c14, 64 bytes, __common; zero-initialised
    Filter::m_coeffInt;

    // 0x1016c1c54, 4 bytes, __common; zero-initialised
    Filter::m_reduceCoeff;

    // 0x1016c1c58, 8 bytes, __common; zero-initialised
    Filter::m_reduceCoeffInt;

    // 0x1002960f0, 144 bytes, placed by class name and debug map
    // Filter::Radius(int, int, float)
    float Filter::Radius(int param_1, int param_2, float param_3) {
        int iVar1;
        double dVar2;
        int* piVar3;

        piVar3 = (int*)RGain(this, param_1, 0, param_2);
        iVar1 = *piVar3;
        piVar3 = (int*)RGain(this, param_1, 1, param_2);
        dVar2 = (double)pow<int, float>(10, ((float)(*piVar3 - iVar1) * param_3 + (float)iVar1) * -7.6293945e-05);
        return 1.0 - (float)dVar2;
    }

    // 0x100296180, 80 bytes, placed by class name and debug map
    // Filter::RGain(int, int, int)
    long Filter::RGain(int param_1, int param_2, int param_3) {
        return (&field_76)->data() + (long)(param_3 << 2) * 4 + (long)(param_2 * 2) * 4 + (long)param_1 * 4;
    }

    // 0x1002961f0, 32 bytes, placed by class name and debug map
    // Filter::Frequency(float)
    float Filter::Frequency(float param_1) {
        double dVar1;

        dVar1 = (double)pow<int, float>(2, param_1);
        return (float)dVar1 * 0.009318832;
    }

    // 0x100296210, 128 bytes, placed by class name and debug map
    // Filter::Frequency(int, int, float)
    void Filter::Frequency(int param_1, int param_2, float param_3) {
        int iVar1;
        int* piVar2;

        piVar2 = (int*)RPitch(this, param_1, 0, param_2);
        iVar1 = *piVar2;
        piVar2 = (int*)RPitch(this, param_1, 1, param_2);
        Frequency(((float)(*piVar2 - iVar1) * param_3 + (float)iVar1) * 0.00012207031);
    }

    // 0x100296290, 80 bytes, placed by class name and debug map
    // Filter::RPitch(int, int, int)
    long Filter::RPitch(int param_1, int param_2, int param_3) {
        return (&field_12)->data() + (long)(param_3 << 2) * 4 + (long)(param_2 * 2) * 4 + (long)param_1 * 4;
    }

    // 0x1002962e0, 32 bytes, placed by class name and debug map
    // Filter::RCoeff(int, int)
    undefined1* Filter::RCoeff(int param_1, int param_2) {
        return &m_coeff + (long)param_1 * 4 + (long)(param_2 * 2) * 4;
    }

    // 0x100296300, 48 bytes, placed by class name and debug map
    // Filter::RCoeffInt(int, int)
    long Filter::RCoeffInt(int param_1, int param_2) {
        return m_coeffInt.data() + (long)(param_2 * 2) * 4 + (long)param_1 * 4;
    }

    // 0x100296340, 944 bytes, placed by class name and debug map
    // Filter::CalculateCoeffs(int, float)
    int Filter::CalculateCoeffs(int param_1, float param_2) {
        uint uVar1;
        double dVar2;
        int* piVar3;
        uint* puVar4;
        float* pfVar5;
        float* pfVar6;
        float* pfVar7;
        float* pfVar8;
        int iVar9;
        uint uVar10;
        int iVar11;
        int iVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float in_XMM1_Da;

        if (param_1 == 0) {
            piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 0);
            iVar11 = *piVar3;
            piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 1);
            dVar2 = (double)pow<double, float>(
                (double)(ulong)(uint)(((float)(*piVar3 - iVar11) * param_2 + (float)iVar11) * 0.00015258789),
                in_XMM1_Da);
            m_reduceCoeff = (float)dVar2;
            m_reduceCoeffInt = (int)(m_reduceCoeff * 65536.0);
        }
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_4, (long)param_1);
        uVar1 = *puVar4;
        if (uVar1 == 0) {
            iVar11 = 0;
        } else {
            fVar13 = (float)Radius(this, param_1, 0, param_2);
            fVar14 = (float)Frequency(this, param_1, 0, param_2);
            fVar14 = (float)::cos(fVar14);
            pfVar5 = (float*)RCoeff(param_1, 0);
            *pfVar5 = fVar14 * fVar13 * -2.0;
            uVar10 = 1;
            pfVar6 = (float*)RCoeff(param_1, 1);
            *pfVar6 = fVar13 * fVar13;
            if (1 < (int)uVar1) {
                iVar11 = 2;
                do {
                    fVar15 = (float)Radius(this, param_1, uVar10, param_2);
                    fVar13 = (float)Frequency(this, param_1, uVar10, param_2);
                    fVar16 = (float)::cos(fVar13);
                    fVar16 = fVar16 * fVar15 * -2.0;
                    fVar15 = fVar15 * fVar15;
                    pfVar7 = (float*)RCoeff(param_1, uVar10 * 2 + -1);
                    fVar13 = *pfVar7;
                    pfVar8 = (float*)RCoeff(param_1, uVar10 * 2 + 1);
                    *pfVar8 = fVar13 * fVar15;
                    fVar13 = *pfVar7;
                    pfVar7 = (float*)RCoeff(param_1, uVar10 * 2 + -2);
                    fVar14 = *pfVar7;
                    pfVar7 = (float*)RCoeff(param_1, uVar10 * 2);
                    *pfVar7 = fVar14 * fVar15 + fVar13 * fVar16;
                    iVar9 = iVar11;
                    if (1 < uVar10) {
                        do {
                            iVar12 = iVar9 + -1;
                            pfVar7 = (float*)RCoeff(param_1, iVar9 + -2);
                            fVar13 = *pfVar7;
                            pfVar7 = (float*)RCoeff(param_1, iVar9 + -3);
                            fVar14 = *pfVar7;
                            pfVar7 = (float*)RCoeff(param_1, iVar12);
                            *pfVar7 = fVar14 * fVar15 + fVar13 * fVar16 + *pfVar7;
                            iVar9 = iVar12;
                        } while (2 < iVar12);
                    }
                    *pfVar6 = *pfVar5 * fVar16 + fVar15 + *pfVar6;
                    *pfVar5 = fVar16 + *pfVar5;
                    uVar10 = uVar10 + 1;
                    iVar11 = iVar11 + 2;
                } while (uVar10 != uVar1);
            }
            if (param_1 == 0) {
                iVar11 = 0;
                piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_4, 0);
                if (0 < *piVar3) {
                    iVar9 = *piVar3 * 2;
                    iVar12 = 1;
                    if (1 < iVar9) {
                        iVar12 = iVar9;
                    }
                    do {
                        fVar13 = m_reduceCoeff;
                        pfVar5 = (float*)RCoeff(0, iVar11);
                        *pfVar5 = fVar13 * *pfVar5;
                        iVar11 = iVar11 + 1;
                    } while (iVar12 != iVar11);
                }
            }
            if ((int)*puVar4 < 1) {
                iVar11 = *puVar4 * 2;
            } else {
                iVar9 = 0;
                do {
                    pfVar5 = (float*)RCoeff(param_1, iVar9);
                    fVar13 = *pfVar5;
                    piVar3 = (int*)RCoeffInt(param_1, iVar9);
                    *piVar3 = (int)(fVar13 * 65536.0);
                    iVar9 = iVar9 + 1;
                    iVar11 = *puVar4 * 2;
                } while (iVar9 < iVar11);
            }
        }
        return iVar11;
    }

    // 0x100296730, 656 bytes, placed by class name and debug map
    // Filter::Load(PacketJ<Array<unsigned char, eastl::allocator> >&, Envelope&)
    void Filter::Load(PacketJ* param_1, Envelope* param_2) {
        undefined1* this_00;
        undefined4 uVar1;
        byte bVar2;
        ushort uVar3;
        uint* puVar4;
        uint* puVar5;
        int* piVar6;
        uint* puVar7;
        undefined4* puVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        int iVar12;
        bool bVar13;

        bVar2 = param_1->g1();
        this_00 = &field_4;
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, 0);
        *puVar4 = (uint)(bVar2 >> 4);
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, 1);
        *puVar4 = bVar2 & 15;
        if (bVar2 == 0) {
            puVar8 = (undefined4*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 1);
            *puVar8 = 0;
            puVar8 = (undefined4*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 0);
            *puVar8 = 0;
        } else {
            uVar3 = param_1->g2();
            puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 0);
            *puVar4 = (uint)uVar3;
            uVar3 = param_1->g2();
            puVar5 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 1);
            *puVar5 = (uint)uVar3;
            bVar2 = param_1->g1();
            uVar11 = 0;
            do {
                piVar6 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, uVar11);
                if (0 < *piVar6) {
                    iVar9 = 0;
                    do {
                        uVar3 = param_1->g2();
                        puVar7 = (uint*)RPitch(this, (int)uVar11, 0, iVar9);
                        *puVar7 = (uint)uVar3;
                        uVar3 = param_1->g2();
                        puVar7 = (uint*)RGain(this, (int)uVar11, 0, iVar9);
                        *puVar7 = (uint)uVar3;
                        iVar9 = iVar9 + 1;
                    } while (iVar9 < *piVar6);
                }
                bVar13 = uVar11 == 0;
                uVar11 = uVar11 + 1;
            } while (bVar13);
            uVar11 = 0;
            do {
                piVar6 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, uVar11);
                if (0 < *piVar6) {
                    iVar9 = 0;
                    do {
                        iVar12 = (int)uVar11;
                        if (((uint)bVar2 & (1 << ((char)uVar11 * '\x04' & 31U)) << ((byte)iVar9 & 31)) == 0) {
                            puVar8 = (undefined4*)RPitch(this, iVar12, 0, iVar9);
                            uVar1 = *puVar8;
                            puVar8 = (undefined4*)RPitch(this, iVar12, 1, iVar9);
                            *puVar8 = uVar1;
                            puVar7 = (uint*)RGain(this, iVar12, 0, iVar9);
                            uVar10 = *puVar7;
                        } else {
                            uVar3 = param_1->g2();
                            puVar7 = (uint*)RPitch(this, iVar12, 1, iVar9);
                            *puVar7 = (uint)uVar3;
                            uVar3 = param_1->g2();
                            uVar10 = (uint)uVar3;
                        }
                        puVar7 = (uint*)RGain(this, iVar12, 1, iVar9);
                        *puVar7 = uVar10;
                        iVar9 = iVar9 + 1;
                    } while (iVar9 < *piVar6);
                }
                bVar13 = uVar11 == 0;
                uVar11 = uVar11 + 1;
            } while (bVar13);
            if ((bVar2 != 0) || (*puVar5 != *puVar4)) {
                param_2->LoadPoints(param_1);
            }
        }
    }

    // 0x1002969c0, 368 bytes, placed by class name and debug map
    // Filter::LoadUncompressed(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Filter::LoadUncompressed(PacketJ* param_1) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        uint* puVar4;
        ulong uVar5;
        int* piVar6;
        int iVar7;
        int iVar8;
        undefined1* this_00;
        bool bVar9;

        cVar1 = param_1->g1();
        field_0 = cVar1 != '\0';
        uVar3 = param_1->g2();
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 0);
        *puVar4 = (uint)uVar3;
        uVar3 = param_1->g2();
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 1);
        *puVar4 = (uint)uVar3;
        bVar2 = param_1->g1();
        this_00 = &field_4;
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, 0);
        *puVar4 = (uint)(bVar2 >> 4);
        puVar4 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, 1);
        *puVar4 = bVar2 & 15;
        if (bVar2 != 0) {
            uVar5 = 0;
            do {
                piVar6 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, uVar5);
                iVar7 = 0;
                do {
                    if (0 < *piVar6) {
                        iVar8 = 0;
                        do {
                            uVar3 = param_1->g2();
                            puVar4 = (uint*)RPitch(this, (int)uVar5, iVar7, iVar8);
                            *puVar4 = (uint)uVar3;
                            uVar3 = param_1->g2();
                            puVar4 = (uint*)RGain(this, (int)uVar5, iVar7, iVar8);
                            *puVar4 = (uint)uVar3;
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < *piVar6);
                    }
                    bVar9 = iVar7 == 0;
                    iVar7 = iVar7 + 1;
                } while (bVar9);
                bVar9 = uVar5 == 0;
                uVar5 = uVar5 + 1;
            } while (bVar9);
        }
    }

    // 0x100296b30, 352 bytes, placed by class name and debug map
    // Filter::SaveUncompressed(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Filter::SaveUncompressed(PacketJ* param_1) {
        undefined1* this_00;
        uint uVar1;
        uint* puVar2;
        int* piVar3;
        int iVar4;
        ulong uVar5;
        int iVar6;
        bool bVar7;

        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_0);
        puVar2 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar2);
        puVar2 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_140, 1);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar2);
        this_00 = &field_4;
        piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, 0);
        iVar4 = *piVar3;
        puVar2 = (uint*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, 1);
        uVar1 = *puVar2;
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)(iVar4 << 4 | uVar1));
        if (iVar4 << 4 != 0 || uVar1 != 0) {
            uVar5 = 0;
            do {
                piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)this_00, uVar5);
                iVar4 = 0;
                do {
                    if (0 < *piVar3) {
                        iVar6 = 0;
                        do {
                            puVar2 = (uint*)RPitch(this, (int)uVar5, iVar4, iVar6);
                            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar2);
                            puVar2 = (uint*)RGain(this, (int)uVar5, iVar4, iVar6);
                            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar2);
                            iVar6 = iVar6 + 1;
                        } while (iVar6 < *piVar3);
                    }
                    bVar7 = iVar4 == 0;
                    iVar4 = iVar4 + 1;
                } while (bVar7);
                bVar7 = uVar5 == 0;
                uVar5 = uVar5 + 1;
            } while (bVar7);
        }
    }

} // namespace jag::oldscape::sound

// 0x100296720, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}
