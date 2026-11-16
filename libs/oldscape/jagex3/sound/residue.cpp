// libs/oldscape/jagex3/sound/residue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "residue.h"

namespace jag::oldscape::sound {
    // 0x10029c760, 1024 bytes, placed by class name and debug map
    // Residue::PacketDecode(Array<float, eastl::allocator>&, int, bool, JagVorbis&, BitUnpacker&) const
    void Residue::PacketDecode(Array* param_1, int param_2, bool param_3, JagVorbis* param_4, BitUnpacker* param_5) {
        uint uVar2;
        int iVar3;
        undefined4* puVar4;
        int* piVar5;
        CodeBook* pCVar6;
        Array<float, eastl::allocator>* pAVar7;
        float* pfVar8;
        ulong uVar9;
        ulong uVar10;
        long lVar11;
        long lVar12;
        int iVar13;
        Array<int, eastl::allocator> local_c0[24];
        Array<int, eastl::allocator>* local_a8;
        long local_a0;
        ulong local_90;
        uint local_84;
        ulong local_78;
        long local_70;
        ulong local_68;
        ulong local_58;
        int local_4c;
        ulong local_48;
        float local_3c;
        uint local_38;
        int local_34;

        if (0 < param_2) {
            uVar9 = 0;
            do {
                puVar4 = (undefined4*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)param_1, uVar9);
                *puVar4 = 0;
                uVar9 = uVar9 + 1;
            } while ((uint)param_2 != uVar9);
        }
        if (!param_3) {
            piVar5 = (int*)Array<CodeBook, eastl::allocator>::operator[](
                (Array<CodeBook, eastl::allocator>*)&JagVorbis::m_codebook, (long)field_20);
            iVar13 = *piVar5;
            local_38 = (int)(field_8 - field_4) / field_12;
            local_90 = (ulong)(int)local_38;
            Array<int, eastl::allocator>::Array(local_c0, local_90);
            local_a8 = (Array<int, eastl::allocator>*)&field_24;
            local_a0 = (long)iVar13 + 1;
            local_58 = 0;
            local_70 = (long)iVar13;
            do {
                if (0 < (int)local_38) {
                    local_48 = 0;
                    do {
                        if ((int)local_58 == 0) {
                            pCVar6 = (CodeBook*)Array<CodeBook, eastl::allocator>::operator[](
                                (Array<CodeBook, eastl::allocator>*)&JagVorbis::m_codebook, (long)field_20);
                            uVar2 = pCVar6->DecodeScalar(param_5);
                            if (0 < (int)local_70) {
                                uVar9 = (ulong)uVar2;
                                lVar12 = (long)(int)local_48;
                                lVar11 = local_a0;
                                do {
                                    uVar10 = (lVar12 + lVar11) - 2;
                                    if ((long)uVar10 < (long)local_90) {
                                        iVar13 = field_16;
                                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_c0, uVar10);
                                        *piVar5 = (int)uVar9 % iVar13;
                                    }
                                    lVar11 = lVar11 + -1;
                                    uVar9 = (long)(int)uVar9 / (long)field_16 & 4294967295;
                                } while (1 < lVar11);
                                goto LAB_10029c87e;
                            }
                        } else {
                        LAB_10029c87e:
                            if (0 < (int)local_70) {
                                iVar13 = (int)local_48;
                                uVar9 = (ulong)iVar13;
                                local_84 = iVar13 + 1U;
                                if ((int)(iVar13 + 1U) < (int)local_38) {
                                    local_84 = local_38;
                                }
                                local_48 = (ulong)(uint)(iVar13 + (int)local_70);
                                local_4c = 0;
                                do {
                                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_c0, uVar9);
                                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                                        local_a8, (long)(int)local_58 + (long)*piVar5 * 8);
                                    local_78 = uVar9;
                                    if (-1 < (long)*piVar5) {
                                        local_34 = ((Residue*)this)->field_4;
                                        iVar13 = ((Residue*)this)->field_12;
                                        pCVar6 = (CodeBook*)Array<CodeBook, eastl::allocator>::operator[](
                                            (Array<CodeBook, eastl::allocator>*)&JagVorbis::m_codebook, (long)*piVar5);
                                        if (((Residue*)this)->field_0 == 0) {
                                            iVar3 = ((Residue*)this)->field_12 / *(int*)pCVar6;
                                            if (0 < iVar3) {
                                                local_34 = local_34 + iVar13 * (int)local_78;
                                                local_68 = local_68 & 18446744069414584320;
                                                do {
                                                    pAVar7 = (Array<float, eastl::allocator>*)pCVar6->DecodeVQ(param_5);
                                                    if (0 < *(int*)pCVar6) {
                                                        uVar9 = 0;
                                                        iVar13 = local_34;
                                                        do {
                                                            pfVar8 = (float*)Array<float, eastl::allocator>::operator[](
                                                                pAVar7, uVar9);
                                                            local_3c = *pfVar8;
                                                            pfVar8 = (float*)Array<float, eastl::allocator>::operator[](
                                                                (Array<float, eastl::allocator>*)param_1, (long)iVar13);
                                                            *pfVar8 = local_3c + *pfVar8;
                                                            uVar9 = uVar9 + 1;
                                                            iVar13 = iVar13 + iVar3;
                                                        } while ((long)uVar9 < (long)*(int*)pCVar6);
                                                    }
                                                    iVar13 = (int)local_68 + 1;
                                                    local_34 = local_34 + 1;
                                                    local_68 = CONCAT44(local_68._4_4_, iVar13);
                                                } while (iVar13 != iVar3);
                                            }
                                        } else if (0 < ((Residue*)this)->field_12) {
                                            local_68 = (ulong)(local_34 + iVar13 * (int)local_78);
                                            iVar13 = 0;
                                            do {
                                                pAVar7 = (Array<float, eastl::allocator>*)pCVar6->DecodeVQ(param_5);
                                                if (0 < *(int*)pCVar6) {
                                                    lVar11 = (long)iVar13 + local_68;
                                                    uVar9 = 0;
                                                    do {
                                                        pfVar8 = (float*)Array<float, eastl::allocator>::operator[](
                                                            pAVar7, uVar9);
                                                        local_3c = *pfVar8;
                                                        pfVar8 = (float*)Array<float, eastl::allocator>::operator[](
                                                            (Array<float, eastl::allocator>*)param_1, lVar11 + uVar9);
                                                        *pfVar8 = local_3c + *pfVar8;
                                                        uVar9 = uVar9 + 1;
                                                    } while ((long)uVar9 < (long)*(int*)pCVar6);
                                                    iVar13 = iVar13 + (int)uVar9;
                                                }
                                            } while (iVar13 < ((Residue*)this)->field_12);
                                        }
                                    }
                                    uVar9 = local_78 + 1;
                                    this = (Residue*)this;
                                    if ((long)local_90 <= (long)uVar9) {
                                        local_48 = (ulong)local_84;
                                        break;
                                    }
                                    local_4c = local_4c + 1;
                                } while (local_4c != (int)local_70);
                            }
                        }
                    } while ((int)local_48 < (int)local_38);
                }
                uVar2 = (int)local_58 + 1;
                local_58 = (ulong)uVar2;
            } while (uVar2 != 8);
            local_c0->~Array();
        }
    }

    // 0x1002a0630, 512 bytes, base-object constructor, placed by class name
    // Residue::Residue()
    void Residue::Residue() {
        undefined4 uVar1;
        int iVar2;
        uint uVar3;
        uint* puVar4;
        undefined4* puVar5;
        ulong uVar6;
        Array<int, eastl::allocator> local_50[24];
        Array<int, eastl::allocator>* local_38;

        local_38 = (Array<int, eastl::allocator>*)&field_24;
        field_0 = 0;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0;
        Array<int, eastl::allocator>::Array(local_38);
        uVar1 = (&JagVorbis::m_staticUnpacker)->ReadBits(16);
        field_0 = uVar1;
        uVar1 = (&JagVorbis::m_staticUnpacker)->ReadBits(24);
        field_4 = uVar1;
        uVar1 = (&JagVorbis::m_staticUnpacker)->ReadBits(24);
        field_8 = uVar1;
        iVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(24);
        field_12 = iVar2 + 1;
        iVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(6);
        field_16 = iVar2 + 1;
        iVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
        field_20 = iVar2;
        Array<int, eastl::allocator>::Array(local_50, (long)field_16);
        iVar2 = field_16;
        if (0 < iVar2) {
            uVar6 = 0;
            do {
                uVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(3);
                iVar2 = (&JagVorbis::m_staticUnpacker)->ReadBit();
                if (iVar2 == 0) {
                    iVar2 = 0;
                } else {
                    iVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(5);
                }
                puVar4 = (uint*)Array<int, eastl::allocator>::operator[](local_50, uVar6);
                *puVar4 = iVar2 << 3 | uVar3;
                uVar6 = uVar6 + 1;
                iVar2 = field_16;
            } while ((long)uVar6 < (long)iVar2);
        }
        local_38->set_max_size((long)(iVar2 << 3), 5);
        if (0 < field_16) {
            uVar6 = 0;
            do {
                puVar4 = (uint*)Array<int, eastl::allocator>::operator[](local_50, uVar6 >> 3 & 536870911);
                if ((*puVar4 >> ((byte)uVar6 & 7) & 1) == 0) {
                    uVar1 = 4294967295;
                } else {
                    uVar1 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
                }
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](local_38, uVar6);
                *puVar5 = uVar1;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)field_16 * 8);
        }
        local_50->~Array();
    }

    // 0x1002a0830, 16 bytes, complete-object constructor, placed by class name
    // Residue::Residue(): jumps straight to the base-object constructor

} // namespace jag::oldscape::sound
