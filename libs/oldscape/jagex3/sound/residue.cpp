// libs/oldscape/jagex3/sound/residue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "residue.h"

namespace jag::oldscape::sound {
    // 0x10029c760
    void Residue::PacketDecode(Array<float>& arg1, int arg2, bool arg3, JagVorbis& jagVorbis,
                               BitUnpacker& bitUnpacker) const {
        unsigned int uVar2;
        int iVar3;
        uint32_t* puVar4;
        int* piVar5;
        CodeBook* pCVar6;
        Array<float>* pAVar7;
        float* pfVar8;
        unsigned long uVar9;
        unsigned long arg1_00;
        long lVar10;
        long lVar11;
        int iVar12;
        Array<int> local_c0;
        Array<int>* local_a8;
        long local_a0;
        unsigned long local_90;
        unsigned int local_84;
        unsigned long local_78;
        long local_70;
        unsigned long local_68;
        unsigned long local_58;
        int local_4c;
        unsigned long local_48;
        float local_3c;
        unsigned int local_38;
        int local_34;

        if (0 < arg2) {
            uVar9 = 0;
            do {
                puVar4 = &arg1[uVar9];
                *puVar4 = 0;
                uVar9 = uVar9 + 1;
            } while ((unsigned int)arg2 != uVar9);
        }
        if (!arg3) {
            piVar5 = (int*)(*((Array<CodeBook>*)&JagVorbis::m_codebook))[(long)field_20];
            iVar12 = *piVar5;
            local_38 = (int)(field_8 - field_4) / field_12;
            local_90 = (unsigned long)(int)local_38;
            local_c0 = Array<int>(local_90);
            local_a8 = (Array<int>*)&field_24;
            local_a0 = (long)iVar12 + 1;
            local_58 = 0;
            local_70 = (long)iVar12;
            do {
                if (0 < (int)local_38) {
                    local_48 = 0;
                    do {
                        if ((int)local_58 == 0) {
                            pCVar6 = (CodeBook*)(*((Array<CodeBook>*)&JagVorbis::m_codebook))[(long)field_20];
                            uVar2 = pCVar6->DecodeScalar(bitUnpacker);
                            if (0 < (int)local_70) {
                                uVar9 = (unsigned long)uVar2;
                                lVar11 = (long)(int)local_48;
                                lVar10 = local_a0;
                                do {
                                    arg1_00 = (lVar11 + lVar10) - 2;
                                    if ((long)arg1_00 < (long)local_90) {
                                        iVar12 = field_16;
                                        piVar5 = &local_c0[arg1_00];
                                        *piVar5 = (int)uVar9 % iVar12;
                                    }
                                    lVar10 = lVar10 - 1;
                                    uVar9 = (long)(int)uVar9 / (long)field_16 & 4294967295;
                                } while (1 < lVar10);
                                goto LAB_10029c87e;
                            }
                        } else {
                        LAB_10029c87e:
                            if (0 < (int)local_70) {
                                iVar12 = (int)local_48;
                                uVar9 = (unsigned long)iVar12;
                                local_84 = iVar12 + 1U;
                                if ((int)(iVar12 + 1U) < (int)local_38) {
                                    local_84 = local_38;
                                }
                                local_48 = (unsigned long)(unsigned int)(iVar12 + (int)local_70);
                                local_4c = 0;
                                do {
                                    piVar5 = &local_c0[uVar9];
                                    piVar5 = (int*)(*local_a8)[(long)(int)local_58 + (long)*piVar5 * 8];
                                    local_78 = uVar9;
                                    if (-1 < (long)*piVar5) {
                                        local_34 = field_4;
                                        iVar12 = field_12;
                                        pCVar6 =
                                            (CodeBook*)(*((Array<CodeBook>*)&JagVorbis::m_codebook))[(long)*piVar5];
                                        if (field_0 == 0) {
                                            iVar3 = field_12 / *(int*)pCVar6;
                                            if (0 < iVar3) {
                                                local_34 = local_34 + iVar12 * (int)local_78;
                                                local_68 = local_68 & 18446744069414584320;
                                                do {
                                                    pAVar7 = pCVar6->DecodeVQ(bitUnpacker);
                                                    if (0 < *(int*)pCVar6) {
                                                        uVar9 = 0;
                                                        iVar12 = local_34;
                                                        do {
                                                            pfVar8 = (float*)(*pAVar7)[uVar9];
                                                            local_3c = *pfVar8;
                                                            pfVar8 = &arg1[(long)iVar12];
                                                            *pfVar8 = local_3c + *pfVar8;
                                                            uVar9 = uVar9 + 1;
                                                            iVar12 = iVar12 + iVar3;
                                                        } while ((long)uVar9 < (long)*(int*)pCVar6);
                                                    }
                                                    iVar12 = (int)local_68 + 1;
                                                    local_34 = local_34 + 1;
                                                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)iVar12);
                                                } while (iVar12 != iVar3);
                                            }
                                        } else if (0 < field_12) {
                                            local_68 = (unsigned long)(local_34 + iVar12 * (int)local_78);
                                            iVar12 = 0;
                                            do {
                                                pAVar7 = pCVar6->DecodeVQ(bitUnpacker);
                                                if (0 < *(int*)pCVar6) {
                                                    lVar10 = (long)iVar12 + local_68;
                                                    uVar9 = 0;
                                                    do {
                                                        pfVar8 = (float*)(*pAVar7)[uVar9];
                                                        local_3c = *pfVar8;
                                                        pfVar8 = &arg1[lVar10 + uVar9];
                                                        *pfVar8 = local_3c + *pfVar8;
                                                        uVar9 = uVar9 + 1;
                                                    } while ((long)uVar9 < (long)*(int*)pCVar6);
                                                    iVar12 = iVar12 + (int)uVar9;
                                                }
                                            } while (iVar12 < field_12);
                                        }
                                    }
                                    uVar9 = local_78 + 1;
                                    this = this;
                                    if ((long)local_90 <= (long)uVar9) {
                                        local_48 = (unsigned long)local_84;
                                        break;
                                    }
                                    local_4c = local_4c + 1;
                                } while (local_4c != (int)local_70);
                            }
                        }
                    } while ((int)local_48 < (int)local_38);
                }
                uVar2 = (int)local_58 + 1;
                local_58 = (unsigned long)uVar2;
            } while (uVar2 != 8);
        }
    }

    // 0x1002a0630
    Residue::Residue() {
        unsigned int uVar3;
        unsigned int* puVar4;
        uint32_t* puVar5;
        unsigned long uVar6;

        Array<int>* local_38 = (Array<int>*)&field_24;
        field_0 = 0;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0;
        new (local_38) Array<int>();
        uint32_t uVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(16);
        field_0 = uVar1;
        uVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(24);
        field_4 = uVar1;
        uVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(24);
        field_8 = uVar1;
        int iVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(24);
        field_12 = iVar2 + 1;
        iVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(6);
        field_16 = iVar2 + 1;
        iVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(8);
        field_20 = iVar2;
        Array<int> local_50((long)field_16);
        iVar2 = field_16;
        if (0 < iVar2) {
            uVar6 = 0;
            do {
                uVar3 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(3);
                iVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
                if (iVar2 == 0) {
                    iVar2 = 0;
                } else {
                    iVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(5);
                }
                puVar4 = &local_50[uVar6];
                *puVar4 = iVar2 << 3 | uVar3;
                uVar6 = uVar6 + 1;
                iVar2 = field_16;
            } while ((long)uVar6 < (long)iVar2);
        }
        local_38->set_max_size((long)(iVar2 << 3), 5);
        if (0 < field_16) {
            uVar6 = 0;
            do {
                puVar4 = &local_50[uVar6 >> 3 & 536870911];
                if ((*puVar4 >> ((uint8_t)uVar6 & 7) & 1) == 0) {
                    uVar1 = 4294967295;
                } else {
                    uVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(8);
                }
                puVar5 = (uint32_t*)(*local_38)[uVar6];
                *puVar5 = uVar1;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)field_16 * 8);
        }
    }

} // namespace jag::oldscape::sound
