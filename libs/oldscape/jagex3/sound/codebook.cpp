// libs/oldscape/jagex3/sound/codebook.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "codebook.h"

namespace jag::oldscape::sound {
    // 0x100294640, 80 bytes, placed by class name and debug map
    // CodeBook::Lookup1Values(int, int)
    int CodeBook::Lookup1Values(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        double dVar3;

        dVar3 = (double)pow<int, double>(param_1, 1.0 / (double)param_2);
        iVar2 = (int)dVar3 + 2;
        do {
            iVar2 = iVar2 + -1;
            iVar1 = jag::math::IntegerExponentPow<int>(iVar2, param_2);
        } while (param_1 < iVar1);
        return iVar2;
    }

    // 0x1002946d0, 1424 bytes, base-object constructor, placed by class name and debug map
    // CodeBook::CodeBook()
    void CodeBook::CodeBook() {
        ulong uVar1;
        undefined4 uVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int* piVar6;
        undefined4* puVar7;
        Array<float, eastl::allocator>* pAVar8;
        float* pfVar9;
        int iVar10;
        ulong uVar11;
        ulong uVar12;
        int iVar13;
        float fVar14;
        Array<int, eastl::allocator> local_78[24];
        float local_60;
        float local_5c;
        Array<int, eastl::allocator>* local_58;
        Array<Array<float, eastl::allocator>, eastl::allocator>* local_50;
        Array<int, eastl::allocator>* local_48;
        float local_40;
        float local_3c;
        CodeBook* local_38;

        local_48 = (Array<int, eastl::allocator>*)&field_8;
        Array<int, eastl::allocator>::Array(local_48);
        local_58 = (Array<int, eastl::allocator>*)&field_32;
        Array<int, eastl::allocator>::Array(local_58);
        new (&field_56) Array<int, eastl::allocator>();
        local_50 = (Array<Array<float, eastl::allocator>, eastl::allocator>*)&field_80;
        local_38 = this;
        Array<Array<float, eastl::allocator>, eastl::allocator>::Array(local_50);
        (&JagVorbis::m_staticUnpacker)->ReadBits(24);
        uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(16);
        *(undefined4*)local_38 = uVar2;
        iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(24);
        local_38->field_4 = iVar3;
        Array<int, eastl::allocator>::Array(local_78, (long)iVar3);
        Array<int, eastl::allocator>::operator=(local_48, (Array*)local_78);
        local_78->~Array();
        iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBit();
        if (iVar3 == 0) {
            iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBit();
            if (0 < local_38->field_4) {
                uVar12 = 0;
                do {
                    if (iVar3 == 0) {
                    LAB_100294850:
                        iVar4 = (&JagVorbis::m_staticUnpacker)->ReadBits(5);
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar12);
                        *piVar6 = iVar4 + 1;
                    } else {
                        iVar4 = (&JagVorbis::m_staticUnpacker)->ReadBit();
                        if (iVar4 != 0)
                            goto LAB_100294850;
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_48, uVar12);
                        *puVar7 = 0;
                    }
                    uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)local_38->field_4);
            }
        } else {
            iVar4 = (&JagVorbis::m_staticUnpacker)->ReadBits(5);
            iVar3 = local_38->field_4;
            if (0 < iVar3) {
                iVar13 = 0;
                do {
                    iVar3 = core::math::MathTool::BitsRequired(iVar3 - iVar13);
                    iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(iVar3);
                    iVar4 = iVar4 + 1;
                    if (0 < iVar3) {
                        uVar12 = (ulong)iVar13;
                        iVar10 = 0;
                        do {
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar12);
                            uVar12 = uVar12 + 1;
                            *piVar6 = iVar4;
                            iVar10 = iVar10 + -1;
                        } while (-iVar3 != iVar10);
                        iVar13 = iVar13 - iVar10;
                    }
                    iVar3 = local_38->field_4;
                } while (iVar13 < iVar3);
            }
        }
        PrepareHuffman(local_38);
        local_3c = (float)(&JagVorbis::m_staticUnpacker)->ReadBits(4);
        if (0 < (int)local_3c) {
            iVar3 = 32;
            uVar5 = (&JagVorbis::m_staticUnpacker)->ReadBits(32);
            local_60 = (float)((ulong)uVar5)->Float32Unpack(iVar3);
            iVar3 = 32;
            uVar5 = (&JagVorbis::m_staticUnpacker)->ReadBits(32);
            local_5c = (float)((ulong)uVar5)->Float32Unpack(iVar3);
            local_40 = (float)(&JagVorbis::m_staticUnpacker)->ReadBits(4);
            iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBit();
            if (local_3c == 1.4013e-45) {
                uVar5 = Lookup1Values(local_38->field_4, *(int*)local_38);
            } else {
                uVar5 = *(int*)local_38 * local_38->field_4;
            }
            Array<int, eastl::allocator>::Array(local_78, (long)(int)uVar5);
            Array<int, eastl::allocator>::operator=(local_58, (Array*)local_78);
            local_78->~Array();
            if (0 < (int)uVar5) {
                local_40 = (float)((int)local_40 + 1);
                uVar12 = 0;
                do {
                    uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits((int)local_40);
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar12);
                    *puVar7 = uVar2;
                    uVar12 = uVar12 + 1;
                } while (uVar5 != uVar12);
            }
            new (local_78) Array<Array<float, eastl::allocator>, eastl::allocator>((long)local_38->field_4);
            Array<Array<float, eastl::allocator>, eastl::allocator>::operator=(local_50, (Array*)local_78);
            local_78->~Array();
            if (0 < local_38->field_4) {
                uVar12 = 0;
                do {
                    new (local_78) Array<float, eastl::allocator>((long)*(int*)local_38);
                    pAVar8 = (Array<float, eastl::allocator>*)
                        Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](local_50, uVar12);
                    Array<float, eastl::allocator>::operator=(pAVar8, (Array*)local_78);
                    local_78->~Array();
                    uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)local_38->field_4);
            }
            if (local_3c == 1.4013e-45) {
                if (0 < local_38->field_4) {
                    uVar12 = 0;
                    do {
                        if (0 < *(int*)local_38) {
                            local_3c = 0.0;
                            iVar4 = 1;
                            uVar11 = 0;
                            do {
                                uVar1 =
                                    (long)((ulong)(uint)((int)uVar12 >> 31) << 32 | uVar12 & 4294967295) / (long)iVar4;
                                piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                    local_58,
                                    (long)(int)((long)((ulong)(uint)((int)uVar1 >> 31) << 32 | uVar1 & 4294967295) %
                                                (long)(int)uVar5));
                                local_40 = (float)*piVar6;
                                pAVar8 = (Array<float, eastl::allocator>*)
                                    Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](local_50,
                                                                                                        uVar12);
                                pfVar9 = (float*)Array<float, eastl::allocator>::operator[](pAVar8, uVar11);
                                fVar14 = local_3c + local_60 + local_40 * local_5c;
                                *pfVar9 = fVar14;
                                if (iVar3 != 0) {
                                    local_3c = fVar14;
                                }
                                iVar4 = iVar4 * uVar5;
                                uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)*(int*)local_38);
                        }
                        uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)local_38->field_4);
                }
            } else if (0 < local_38->field_4) {
                uVar12 = 0;
                do {
                    iVar4 = *(int*)local_38;
                    if (0 < iVar4) {
                        local_3c = 0.0;
                        uVar11 = 0;
                        do {
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                local_58, (long)(iVar4 * (int)uVar12) + uVar11);
                            local_40 = (float)*piVar6;
                            pAVar8 = (Array<float, eastl::allocator>*)
                                Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](local_50, uVar12);
                            pfVar9 = (float*)Array<float, eastl::allocator>::operator[](pAVar8, uVar11);
                            fVar14 = local_3c + local_60 + local_40 * local_5c;
                            *pfVar9 = fVar14;
                            if (iVar3 != 0) {
                                local_3c = fVar14;
                            }
                            uVar11 = uVar11 + 1;
                        } while ((long)uVar11 < (long)*(int*)local_38);
                    }
                    uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)local_38->field_4);
            }
        }
    }

    // 0x100294c70, 1056 bytes, placed by class name and debug map
    // CodeBook::PrepareHuffman()
    void CodeBook::PrepareHuffman() {
        undefined1* this_00;
        undefined4 uVar1;
        bool bVar2;
        ulong uVar3;
        int iVar4;
        undefined8* puVar5;
        int* piVar6;
        uint* puVar7;
        uint* puVar8;
        long lVar9;
        undefined4* puVar10;
        uint uVar11;
        ulong uVar12;
        int iVar13;
        uint uVar14;
        int iVar15;
        ulong uVar16;
        ulong uVar17;
        array<int, 33ul> local_100[136];
        Array<int, BucketAllocatorEASTL> local_78[24];
        Array<int, eastl::allocator>* local_60;
        uint* local_58;
        ulong local_50;
        ulong local_48;
        uint local_38;
        uint local_34;

        Array<int, BucketAllocatorEASTL>::Array(local_78, (long)field_4);
        puVar5 = (undefined8*)std::array<int, 33ul>::data(local_100);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[11] = 0;
        puVar5[12] = 0;
        puVar5[13] = 0;
        puVar5[14] = 0;
        puVar5[15] = 0;
        *(undefined4*)(puVar5 + 16) = 0;
        local_60 = (Array<int, eastl::allocator>*)&field_8;
        if (0 < field_4) {
            uVar17 = 0;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar17);
                iVar13 = *piVar6;
                uVar12 = (ulong)iVar13;
                if (uVar12 != 0) {
                    uVar14 = 1 << (-(char)iVar13 & 31U);
                    local_58 = (uint*)std::array<int, 33ul>::operator[](local_100, uVar12);
                    uVar11 = *local_58;
                    puVar7 = (uint*)Array<int, BucketAllocatorEASTL>::operator[](local_78, uVar17);
                    *puVar7 = uVar11;
                    local_38 = uVar11;
                    if ((uVar11 & uVar14) == 0) {
                        uVar14 = uVar14 | uVar11;
                        if (1 < iVar13) {
                            uVar16 = uVar12 + 4294967294;
                            uVar11 = 33 - iVar13;
                            uVar3 = uVar12;
                            local_48 = uVar17;
                            local_34 = uVar14;
                            do {
                                puVar7 = (uint*)std::array<int, 33ul>::operator[](local_100, uVar3 - 1);
                                uVar14 = *puVar7;
                                if (uVar14 != local_38)
                                    break;
                                if ((uVar14 >> (uVar11 & 31) & 1) != 0) {
                                    puVar8 = (uint*)std::array<int, 33ul>::operator[](local_100, uVar16 & 4294967295);
                                    *puVar7 = *puVar8;
                                    break;
                                }
                                *puVar7 = uVar14 | 1 << ((byte)uVar11 & 31);
                                uVar16 = uVar16 - 1;
                                uVar11 = uVar11 + 1;
                                bVar2 = 2 < (long)uVar3;
                                uVar3 = uVar3 - 1;
                            } while (bVar2);
                            uVar17 = local_48;
                            uVar14 = local_34;
                        }
                    } else {
                        puVar7 = (uint*)std::array<int, 33ul>::operator[](local_100, uVar12 - 1);
                        uVar14 = *puVar7;
                    }
                    this = (CodeBook*)this;
                    *local_58 = uVar14;
                    if (iVar13 < 32) {
                        uVar12 = uVar12 + 1;
                        do {
                            puVar7 = (uint*)std::array<int, 33ul>::operator[](local_100, uVar12);
                            if (*puVar7 == local_38) {
                                *puVar7 = uVar14;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 != 33);
                    }
                }
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)field_4);
        }
        new (local_100) Array<int, eastl::allocator>(8);
        this_00 = &field_56;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_00, (Array*)local_100);
        local_100->~Array();
        if (0 < field_4) {
            uVar17 = 0;
            local_34 = 0;
            do {
                local_50 = uVar17;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar17);
                iVar13 = *piVar6;
                if (iVar13 != 0) {
                    puVar7 = (uint*)Array<int, BucketAllocatorEASTL>::operator[](local_78, local_50);
                    if (iVar13 < 1) {
                        iVar4 = 0;
                    } else {
                        local_38 = *puVar7;
                        iVar15 = 0;
                        puVar7 = (uint*)0;
                        local_48 = CONCAT44(local_48._4_4_, iVar13);
                        do {
                            if ((local_38 << ((byte)iVar15 & 31) & 2147483648) == 0) {
                                uVar11 = (int)puVar7 + 1;
                            } else {
                                uVar17 = (ulong)(int)puVar7;
                                piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)this_00, uVar17);
                                if (*piVar6 == 0) {
                                    puVar7 = (uint*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)this_00, uVar17);
                                    *puVar7 = local_34;
                                }
                                puVar7 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)this_00, uVar17);
                                uVar11 = *puVar7;
                            }
                            iVar4 = this_00->end();
                            puVar7 = (uint*)(ulong)uVar11;
                            if (iVar4 <= (int)uVar11) {
                                local_58 = (uint*)(ulong)uVar11;
                                lVar9 = this_00->end();
                                new (local_100) Array<int, eastl::allocator>(lVar9 * 2);
                                lVar9 = this_00->end();
                                if (lVar9 != 0) {
                                    uVar17 = 0;
                                    do {
                                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)this_00, uVar17);
                                        uVar1 = *puVar10;
                                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)local_100, uVar17);
                                        *puVar10 = uVar1;
                                        uVar17 = uVar17 + 1;
                                        uVar12 = this_00->end();
                                    } while (uVar17 < uVar12);
                                }
                                Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_00,
                                                                        (Array*)local_100);
                                local_100->~Array();
                                puVar7 = local_58;
                                iVar13 = (int)local_48;
                            }
                            iVar4 = (int)puVar7;
                            iVar15 = iVar15 + 1;
                        } while (iVar15 != iVar13);
                    }
                    puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                             (long)iVar4);
                    *puVar7 = ~(uint)local_50;
                    if ((int)local_34 <= iVar4) {
                        local_34 = iVar4 + 1;
                    }
                    this = (CodeBook*)this;
                }
                uVar17 = local_50 + 1;
            } while ((long)uVar17 < (long)field_4);
        }
        local_78->~Array();
    }

    // 0x1002951f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CodeBook::CodeBook(): jumps straight to the base-object constructor

    // 0x100295220, 128 bytes, placed by class name and debug map
    // CodeBook::DecodeScalar(BitUnpacker&) const
    uint CodeBook::DecodeScalar(BitUnpacker* param_1) {
        int* piVar2;
        uint* puVar3;
        ulong uVar4;
        int iVar5;
        undefined1* this_00;

        this_00 = &field_56;
        iVar5 = 0;
        piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, 0);
        uVar4 = 0;
        if (-1 < *piVar2) {
            uVar4 = 0;
            do {
                if (param_1->ReadBit() == 0) {
                    iVar5 = iVar5 + 1;
                } else {
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar4);
                    iVar5 = *piVar2;
                }
                uVar4 = (ulong)iVar5;
                piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar4);
            } while (-1 < *piVar2);
        }
        puVar3 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar4);
        return ~*puVar3;
    }

    // 0x1002952a0, 48 bytes, placed by class name and debug map
    // CodeBook::DecodeVQ(BitUnpacker&) const
    void CodeBook::DecodeVQ(BitUnpacker* param_1) {
        int iVar1;

        iVar1 = DecodeScalar(this, param_1);
        Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<float, eastl::allocator>, eastl::allocator>*)&field_80, (long)iVar1);
    }

} // namespace jag::oldscape::sound

namespace jag::math {
    // 0x1002946b0, 32 bytes, inline, placed by debug map only (low confidence)
    // int IntegerExponentPow<int>(int, unsigned int)
    int IntegerExponentPow<int>(int param_1, uint param_2) {
        int iVar1;

        iVar1 = 1;
        for (; param_2 != 0; param_2 = param_2 - 1) {
            iVar1 = iVar1 * param_1;
        }
        return iVar1;
    }

} // namespace jag::math
