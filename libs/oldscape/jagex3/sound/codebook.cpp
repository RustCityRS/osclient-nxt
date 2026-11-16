// libs/oldscape/jagex3/sound/codebook.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "codebook.h"

namespace jag::oldscape::sound {
    // 0x100294640
    int CodeBook::Lookup1Values(int arg1, int arg2) {
        int iVar1;

        double dVar2 = (double)pow<int, double>(arg1, 1.0 / (double)arg2);
        int arg1_00 = (int)dVar2 + 2;
        do {
            arg1_00 = arg1_00 - 1;
            iVar1 = jag::math::IntegerExponentPow<int>(arg1_00, arg2);
        } while (arg1 < iVar1);
        return arg1_00;
    }

    // 0x1002946d0
    CodeBook::CodeBook() {
        unsigned long uVar1;
        int iVar4;
        unsigned int uVar5;
        int* piVar6;
        uint32_t* puVar7;
        Array<float>* pAVar8;
        float* pfVar9;
        int iVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        int iVar13;
        float fVar14;
        float local_60;
        float local_5c;
        float local_40;

        Array<int>* local_48 = (Array<int>*)&field_8;
        new (local_48) Array<int>();
        Array<int>* local_58 = (Array<int>*)&field_32;
        new (local_58) Array<int>();
        new (&field_56) Array<int>();
        Array<Array<float>>* local_50 = (Array<Array<float>>*)&field_80;
        CodeBook* local_38 = this;
        new (local_50) Array<Array<float>>();
        ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(24);
        uint32_t uVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(16);
        *(uint32_t*)local_38 = uVar2;
        int iVar3 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(24);
        local_38->field_4 = iVar3;
        Array<int> local_78((long)iVar3);
        *local_48 = local_78;
        iVar3 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
        if (iVar3 == 0) {
            iVar3 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
            if (0 < local_38->field_4) {
                uVar12 = 0;
                do {
                    if (iVar3 == 0) {
                    LAB_100294850:
                        iVar4 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(5);
                        piVar6 = (int*)(*local_48)[uVar12];
                        *piVar6 = iVar4 + 1;
                    } else {
                        iVar4 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
                        if (iVar4 != 0)
                            goto LAB_100294850;
                        puVar7 = (uint32_t*)(*local_48)[uVar12];
                        *puVar7 = 0;
                    }
                    uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)local_38->field_4);
            }
        } else {
            iVar4 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(5);
            iVar3 = local_38->field_4;
            if (0 < iVar3) {
                iVar13 = 0;
                do {
                    iVar3 = core::math::MathTool::BitsRequired(iVar3 - iVar13);
                    iVar3 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(iVar3);
                    iVar4 = iVar4 + 1;
                    if (0 < iVar3) {
                        uVar12 = (unsigned long)iVar13;
                        iVar10 = 0;
                        do {
                            piVar6 = (int*)(*local_48)[uVar12];
                            uVar12 = uVar12 + 1;
                            *piVar6 = iVar4;
                            iVar10 = iVar10 - 1;
                        } while (-iVar3 != iVar10);
                        iVar13 = iVar13 - iVar10;
                    }
                    iVar3 = local_38->field_4;
                } while (iVar13 < iVar3);
            }
        }
        PrepareHuffman(local_38);
        float local_3c = (float)((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(4);
        if (0 < (int)local_3c) {
            iVar3 = 32;
            uVar5 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(32);
            local_60 = (float)((JagVorbis*)(unsigned long)uVar5)->Float32Unpack(iVar3);
            iVar3 = 32;
            uVar5 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(32);
            local_5c = (float)((JagVorbis*)(unsigned long)uVar5)->Float32Unpack(iVar3);
            local_40 = (float)((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(4);
            iVar3 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
            if (local_3c == 1.4013e-45) {
                uVar5 = Lookup1Values(local_38->field_4, *(int*)local_38);
            } else {
                uVar5 = *(int*)local_38 * local_38->field_4;
            }
            local_78 = Array<int>((long)(int)uVar5);
            *local_58 = local_78;
            if (0 < (int)uVar5) {
                local_40 = (float)((int)local_40 + 1);
                uVar12 = 0;
                do {
                    uVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits((int)local_40);
                    puVar7 = (uint32_t*)(*local_58)[uVar12];
                    *puVar7 = uVar2;
                    uVar12 = uVar12 + 1;
                } while (uVar5 != uVar12);
            }
            local_78 = Array<Array<float>>((long)local_38->field_4);
            *local_50 = local_78;
            if (0 < local_38->field_4) {
                uVar12 = 0;
                do {
                    local_78 = Array<float>((long)*(int*)local_38);
                    pAVar8 = (Array<float>*)(*local_50)[uVar12];
                    *pAVar8 = local_78;
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
                                uVar1 = (long)((unsigned long)(unsigned int)((int)uVar12 >> 31) << 32 |
                                               uVar12 & 4294967295) /
                                        (long)iVar4;
                                piVar6 = (int*)(*local_58)[(
                                    long)(int)((long)((unsigned long)(unsigned int)((int)uVar1 >> 31) << 32 |
                                                      uVar1 & 4294967295) %
                                               (long)(int)uVar5)];
                                local_40 = (float)*piVar6;
                                pAVar8 = (Array<float>*)(*local_50)[uVar12];
                                pfVar9 = (float*)(*pAVar8)[uVar11];
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
                            piVar6 = (int*)(*local_58)[(long)(iVar4 * (int)uVar12) + uVar11];
                            local_40 = (float)*piVar6;
                            pAVar8 = (Array<float>*)(*local_50)[uVar12];
                            pfVar9 = (float*)(*pAVar8)[uVar11];
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

    // 0x100294c70
    void CodeBook::PrepareHuffman() {
        uint32_t uVar1;
        bool bVar2;
        unsigned long uVar3;
        int iVar4;
        int* piVar6;
        unsigned int* puVar7;
        unsigned int* puVar8;
        long lVar9;
        uint32_t* puVar10;
        unsigned int uVar11;
        unsigned long uVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar15;
        unsigned long uVar16;
        unsigned long uVar17;
        unsigned int* local_58;
        unsigned long local_50;
        unsigned long local_48;
        unsigned int local_38;
        unsigned int local_34;

        Array<int, BucketAllocatorEASTL> local_78((long)field_4);
        auto puVar5 = local_100.data();
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
        *(uint32_t*)(puVar5 + 16) = 0;
        Array<int>* local_60 = (Array<int>*)&field_8;
        if (0 < field_4) {
            uVar17 = 0;
            do {
                piVar6 = (int*)(*local_60)[uVar17];
                iVar13 = *piVar6;
                uVar12 = (unsigned long)iVar13;
                if (uVar12 != 0) {
                    uVar14 = 1 << (-(char)iVar13 & 31U);
                    local_58 = &local_100[uVar12];
                    uVar11 = *local_58;
                    puVar7 = &local_78[uVar17];
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
                                puVar7 = &local_100[uVar3 - 1];
                                uVar14 = *puVar7;
                                if (uVar14 != local_38)
                                    break;
                                if ((uVar14 >> (uVar11 & 31) & 1) != 0) {
                                    puVar8 = &local_100[uVar16 & 4294967295];
                                    *puVar7 = *puVar8;
                                    break;
                                }
                                *puVar7 = uVar14 | 1 << ((uint8_t)uVar11 & 31);
                                uVar16 = uVar16 - 1;
                                uVar11 = uVar11 + 1;
                                bVar2 = 2 < (long)uVar3;
                                uVar3 = uVar3 - 1;
                            } while (bVar2);
                            uVar17 = local_48;
                            uVar14 = local_34;
                        }
                    } else {
                        puVar7 = &local_100[uVar12 - 1];
                        uVar14 = *puVar7;
                    }
                    this = this;
                    *local_58 = uVar14;
                    if (iVar13 < 32) {
                        uVar12 = uVar12 + 1;
                        do {
                            puVar7 = &local_100[uVar12];
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
        array<int, 33ul> local_100(8);
        uint8_t* this_00 = &field_56;
        *this_00 = local_100;
        if (0 < field_4) {
            uVar17 = 0;
            local_34 = 0;
            do {
                local_50 = uVar17;
                piVar6 = (int*)(*local_60)[uVar17];
                iVar13 = *piVar6;
                if (iVar13 != 0) {
                    puVar7 = &local_78[local_50];
                    if (iVar13 < 1) {
                        iVar4 = 0;
                    } else {
                        local_38 = *puVar7;
                        iVar15 = 0;
                        puVar7 = nullptr;
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar13);
                        do {
                            if ((local_38 << ((uint8_t)iVar15 & 31) & 2147483648) == 0) {
                                uVar11 = (int)puVar7 + 1;
                            } else {
                                uVar17 = (unsigned long)(int)puVar7;
                                piVar6 = (int*)(*this_00)[uVar17];
                                if (*piVar6 == 0) {
                                    puVar7 = (unsigned int*)(*this_00)[uVar17];
                                    *puVar7 = local_34;
                                }
                                puVar7 = (unsigned int*)(*this_00)[uVar17];
                                uVar11 = *puVar7;
                            }
                            iVar4 = this_00->end();
                            puVar7 = (unsigned int*)(unsigned long)uVar11;
                            if (iVar4 <= (int)uVar11) {
                                local_58 = (unsigned int*)(unsigned long)uVar11;
                                lVar9 = this_00->end();
                                new (&local_100) Array<int>(lVar9 * 2);
                                lVar9 = this_00->end();
                                if (lVar9 != 0) {
                                    uVar17 = 0;
                                    do {
                                        puVar10 = (uint32_t*)(*this_00)[uVar17];
                                        uVar1 = *puVar10;
                                        puVar10 = &local_100[uVar17];
                                        *puVar10 = uVar1;
                                        uVar17 = uVar17 + 1;
                                        uVar12 = this_00->end();
                                    } while (uVar17 < uVar12);
                                }
                                *this_00 = local_100;
                                puVar7 = local_58;
                                iVar13 = (int)local_48;
                            }
                            iVar4 = (int)puVar7;
                            iVar15 = iVar15 + 1;
                        } while (iVar15 != iVar13);
                    }
                    puVar7 = (unsigned int*)(*this_00)[(long)iVar4];
                    *puVar7 = ~(unsigned int)local_50;
                    if ((int)local_34 <= iVar4) {
                        local_34 = iVar4 + 1;
                    }
                    this = this;
                }
                uVar17 = local_50 + 1;
            } while ((long)uVar17 < (long)field_4);
        }
    }

    // 0x100295220
    unsigned int CodeBook::DecodeScalar(BitUnpacker& bitUnpacker) const {
        uint8_t* this_00 = &field_56;
        int iVar4 = 0;
        int* piVar2 = (int*)(*this_00)[0];
        unsigned long arg1 = 0;
        if (-1 < *piVar2) {
            arg1 = 0;
            do {
                if (bitUnpacker.ReadBit() == 0) {
                    iVar4 = iVar4 + 1;
                } else {
                    piVar2 = (int*)(*this_00)[arg1];
                    iVar4 = *piVar2;
                }
                arg1 = (unsigned long)iVar4;
                piVar2 = (int*)(*this_00)[arg1];
            } while (-1 < *piVar2);
        }
        unsigned int* puVar3 = (unsigned int*)(*this_00)[arg1];
        return ~*puVar3;
    }

    // 0x1002952a0
    Array<float>* CodeBook::DecodeVQ(BitUnpacker& bitUnpacker) const {
        int iVar2 = DecodeScalar(bitUnpacker);
        return (Array<float>*)field_80[(long)iVar2];
    }

} // namespace jag::oldscape::sound

namespace jag::math {
    // 0x1002946b0
    int IntegerExponentPow<int>(int arg1, unsigned int arg2) {
        int iVar1 = 1;
        for (; arg2 != 0; arg2 = arg2 - 1) {
            iVar1 = iVar1 * arg1;
        }
        return iVar1;
    }

} // namespace jag::math
