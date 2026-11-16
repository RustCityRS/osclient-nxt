// libs/oldscape/jagex3/sound/decimator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "decimator.h"

namespace jag::oldscape::sound {
    // 0x1002952d0, 608 bytes, base-object constructor, placed by class name and debug map
    // Decimator::Decimator(int, int)
    void Decimator::Decimator(int param_1, int param_2) {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        Array<int, eastl::allocator>* pAVar3;
        int* piVar4;
        int iVar5;
        uint uVar6;
        ulong uVar7;
        ulong uVar8;
        double dVar9;
        double dVar10;
        double dVar11;
        double dVar12;
        double dVar13;
        double local_38;

        field_0 = 0;
        field_4 = 0;
        this_00 = &field_8;
        iVar1 = 0;
        if (param_1 != param_2) {
            iVar1 = param_1;
        }
        new (this_00) Array<Array<int, eastl::allocator>, eastl::allocator>((long)iVar1);
        if (param_1 != param_2) {
            if (param_1 < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "sound/decimator.cpp",
                                29,
                                "Decimator is designed to reduce the sampling frequency - it will sound horrible "
                                "trying to increase it - oldfreq=%i newfreq=%i",
                                (ulong)(uint)param_1, (ulong)(uint)param_2);
            }
            iVar1 = core::math::MathTool::Hcf(param_1, param_2);
            iVar5 = (int)((long)param_1 / (long)iVar1);
            field_0 = iVar5;
            field_4 = param_2 / iVar1;
            if (0 < iVar5) {
                dVar12 = (double)(param_2 / iVar1) / (double)iVar5;
                uVar8 = 0;
                do {
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar8);
                    pAVar3->set_max_size(14, 3);
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar8);
                    dVar9 = (double)(int)uVar8 / (double)iVar5;
                    dVar10 = (double)_floor();
                    uVar6 = (uint)dVar10;
                    if ((int)uVar6 < 0) {
                        uVar6 = 0;
                    }
                    dVar10 = (double)_ceil(dVar9 + 13.0);
                    uVar2 = (uint)dVar10;
                    if (13 < (int)uVar2) {
                        uVar2 = 14;
                    }
                    if ((int)uVar6 < (int)uVar2) {
                        uVar7 = (ulong)uVar6;
                        do {
                            dVar10 = (double)(int)uVar7 + (-6.0 - dVar9);
                            dVar13 = dVar10 * 3.141592653589;
                            if ((dVar13 < -0.0001) || (local_38 = dVar12, 0.0001 < dVar13)) {
                                dVar11 = (double)_sin(dVar13);
                                local_38 = (dVar11 * dVar12) / dVar13;
                            }
                            piVar4 = (int*)Array<int, eastl::allocator>::operator[](pAVar3, uVar7);
                            dVar10 = (double)_cos(dVar10 * 0.22439947525635714);
                            dVar10 = (double)_floor((dVar10 * 30146.56 + 35389.44) * local_38 + 0.5);
                            *piVar4 = (int)dVar10;
                            uVar7 = uVar7 + 1;
                        } while (uVar2 != uVar7);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 != ((long)param_1 / (long)iVar1 & 4294967295U));
            }
        }
    }

    // 0x100295530, 16 bytes, complete-object constructor, placed by class name and debug map
    // Decimator::Decimator(int, int): jumps straight to the base-object constructor

    // 0x100295540, 480 bytes, placed by class name and debug map
    // Decimator::Decimate(Array<signed char, eastl::allocator>&)
    void Decimator::Decimate(Array* param_1) {
        char cVar1;
        int iVar2;
        long lVar3;
        char* pcVar4;
        Array<int, eastl::allocator>* this_00;
        int* piVar5;
        ulong uVar6;
        undefined1* puVar7;
        undefined1 uVar8;
        ulong uVar9;
        ulong uVar10;
        Array<int, BucketAllocatorEASTL> local_88[24];
        ulong local_70;
        ulong local_68;
        Array<Array<int, eastl::allocator>, eastl::allocator>* local_60;
        ulong local_50;
        long local_48;
        Array* local_40;
        uint local_38;
        int local_34;

        local_60 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_8;
        cVar1 = local_60->empty();
        if (cVar1 == '\0') {
            lVar3 = param_1->end();
            local_48 = (lVar3 * field_4) / (long)field_0;
            local_38 = (int)local_48 + 14;
            local_50 = (ulong)(int)local_38;
            Array<int, BucketAllocatorEASTL>::Array(local_88, local_50);
            lVar3 = param_1->end();
            local_40 = param_1;
            if (lVar3 != 0) {
                uVar10 = 0;
                local_34 = 0;
                uVar9 = 0;
                do {
                    pcVar4 = (char*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)param_1, uVar9);
                    cVar1 = *pcVar4;
                    local_70 = uVar9;
                    this_00 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](local_60, (long)local_34);
                    uVar9 = 0;
                    local_68 = uVar10;
                    do {
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar9);
                        iVar2 = *piVar5;
                        piVar5 = (int*)Array<int, BucketAllocatorEASTL>::operator[](local_88,
                                                                                    (long)((int)uVar10 + (int)uVar9));
                        param_1 = local_40;
                        *piVar5 = *piVar5 + iVar2 * cVar1;
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 14);
                    iVar2 = local_34 + ((Decimator*)this)->field_4;
                    local_34 = iVar2 % ((Decimator*)this)->field_0;
                    uVar10 = (ulong)(uint)((int)local_68 + iVar2 / ((Decimator*)this)->field_0);
                    uVar9 = local_70 + 1;
                    uVar6 = local_40->end();
                } while (uVar9 < uVar6);
            }
            param_1->set_max_size(local_50, 3);
            if (-14 < (int)local_48) {
                uVar9 = 1;
                if (1 < (int)local_38) {
                    uVar9 = (ulong)local_38;
                }
                uVar10 = 0;
                do {
                    piVar5 = (int*)Array<int, BucketAllocatorEASTL>::operator[](local_88, uVar10);
                    iVar2 = *piVar5;
                    uVar8 = 128;
                    if ((-8421377 < iVar2) &&
                        (uVar8 = (undefined1)((uint)(iVar2 * 256 + 8388608) >> 24), 8355839 < iVar2)) {
                        uVar8 = 127;
                    }
                    puVar7 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)local_40, uVar10);
                    *puVar7 = uVar8;
                    uVar10 = uVar10 + 1;
                } while (uVar9 != uVar10);
            }
            local_88->~Array();
        }
    }

    // 0x100295720, 480 bytes, placed by class name and debug map
    // Decimator::Decimate(Array<short, eastl::allocator>&)
    void Decimator::Decimate(Array* param_1) {
        short sVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        short* psVar5;
        Array<int, eastl::allocator>* this_00;
        int* piVar6;
        ulong uVar7;
        undefined2* puVar8;
        ulong uVar9;
        ulong uVar10;
        undefined2 uVar11;
        Array<int, eastl::allocator> local_88[24];
        ulong local_70;
        ulong local_68;
        Array<Array<int, eastl::allocator>, eastl::allocator>* local_60;
        ulong local_50;
        long local_48;
        Array* local_40;
        uint local_38;
        int local_34;

        local_60 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_8;
        cVar2 = local_60->empty();
        if (cVar2 == '\0') {
            lVar4 = param_1->end();
            local_48 = (lVar4 * field_4) / (long)field_0;
            local_38 = (int)local_48 + 14;
            local_50 = (ulong)(int)local_38;
            Array<int, eastl::allocator>::Array(local_88, local_50);
            lVar4 = param_1->end();
            local_40 = param_1;
            if (lVar4 != 0) {
                uVar10 = 0;
                local_34 = 0;
                uVar9 = 0;
                do {
                    psVar5 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)param_1, uVar9);
                    sVar1 = *psVar5;
                    local_70 = uVar9;
                    this_00 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](local_60, (long)local_34);
                    uVar9 = 0;
                    local_68 = uVar10;
                    do {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar9);
                        iVar3 = *piVar6;
                        piVar6 =
                            (int*)Array<int, eastl::allocator>::operator[](local_88, (long)((int)uVar10 + (int)uVar9));
                        param_1 = local_40;
                        *piVar6 = *piVar6 + (iVar3 * sVar1 >> 2);
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 14);
                    iVar3 = local_34 + ((Decimator*)this)->field_4;
                    local_34 = iVar3 % ((Decimator*)this)->field_0;
                    uVar10 = (ulong)(uint)((int)local_68 + iVar3 / ((Decimator*)this)->field_0);
                    uVar9 = local_70 + 1;
                    uVar7 = local_40->end();
                } while (uVar9 < uVar7);
            }
            param_1->set_max_size(local_50, 3);
            if (-14 < (int)local_48) {
                uVar9 = 1;
                if (1 < (int)local_38) {
                    uVar9 = (ulong)local_38;
                }
                uVar10 = 0;
                do {
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_88, uVar10);
                    iVar3 = *piVar6;
                    uVar11 = 32768;
                    if ((-536879105 < iVar3) &&
                        (uVar11 = (undefined2)((uint)(iVar3 * 4 + 32768) >> 16), 536862719 < iVar3)) {
                        uVar11 = 32767;
                    }
                    puVar8 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)local_40, uVar10);
                    *puVar8 = uVar11;
                    uVar10 = uVar10 + 1;
                } while (uVar9 != uVar10);
            }
            local_88->~Array();
        }
    }

    // 0x100295900, 64 bytes, placed by class name and debug map
    // Decimator::TransmitFreq(int)
    ulong Decimator::TransmitFreq(int param_1) {
        char cVar1;
        ulong uVar2;

        uVar2 = (ulong)(uint)param_1;
        cVar1 = (&field_8)->empty();
        if (cVar1 == '\0') {
            uVar2 = ((long)field_4 * (long)param_1) / (long)field_0;
        }
        return uVar2 & 4294967295;
    }

    // 0x100295940, 64 bytes, placed by class name and debug map
    // Decimator::TransmitPos(int)
    int Decimator::TransmitPos(int param_1) {
        char cVar1;

        cVar1 = (&field_8)->empty();
        if (cVar1 == '\0') {
            param_1 = (int)(((long)field_4 * (long)param_1) / (long)field_0) + 6;
        }
        return param_1;
    }

} // namespace jag::oldscape::sound
