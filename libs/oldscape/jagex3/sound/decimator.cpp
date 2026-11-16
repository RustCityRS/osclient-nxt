// libs/oldscape/jagex3/sound/decimator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "decimator.h"

namespace jag::oldscape::sound {
    // 0x1002952d0
    Decimator::Decimator(int arg1, int arg2) : field_0(0), field_4(0) {
        unsigned int uVar2;
        Array<int>* pAVar3;
        int* piVar4;
        int iVar5;
        unsigned int uVar6;
        unsigned long arg1_00;
        unsigned long arg1_01;
        double dVar7;
        double dVar8;
        double dVar9;
        double dVar10;
        double dVar11;
        double local_38;

        uint8_t* this_00 = &field_8;
        int iVar1 = 0;
        if (arg1 != arg2) {
            iVar1 = arg1;
        }
        new (this_00) Array<Array<int>>((long)iVar1);
        if (arg1 != arg2) {
            if (arg1 < arg2) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "sound/decimator.cpp",
                                29,
                                "Decimator is designed to reduce the sampling frequency - it will sound horrible "
                                "trying to increase it - oldfreq=%i newfreq=%i",
                                (unsigned long)(unsigned int)arg1, (unsigned long)(unsigned int)arg2);
            }
            iVar1 = core::math::MathTool::Hcf(arg1, arg2);
            iVar5 = (int)((long)arg1 / (long)iVar1);
            field_0 = iVar5;
            field_4 = arg2 / iVar1;
            if (0 < iVar5) {
                dVar10 = (double)(arg2 / iVar1) / (double)iVar5;
                arg1_01 = 0;
                do {
                    pAVar3 = (Array<int>*)(*this_00)[arg1_01];
                    pAVar3->set_max_size(14, 3);
                    pAVar3 = (Array<int>*)(*this_00)[arg1_01];
                    dVar7 = (double)(int)arg1_01 / (double)iVar5;
                    dVar8 = (double)_floor();
                    uVar6 = (unsigned int)dVar8;
                    if ((int)uVar6 < 0) {
                        uVar6 = 0;
                    }
                    dVar8 = (double)_ceil(dVar7 + 13.0);
                    uVar2 = (unsigned int)dVar8;
                    if (13 < (int)uVar2) {
                        uVar2 = 14;
                    }
                    if ((int)uVar6 < (int)uVar2) {
                        arg1_00 = (unsigned long)uVar6;
                        do {
                            dVar8 = (double)(int)arg1_00 + (-6.0 - dVar7);
                            dVar11 = dVar8 * 3.141592653589;
                            if ((dVar11 < -0.0001) || (local_38 = dVar10, 0.0001 < dVar11)) {
                                dVar9 = (double)_sin(dVar11);
                                local_38 = (dVar9 * dVar10) / dVar11;
                            }
                            piVar4 = (int*)(*pAVar3)[arg1_00];
                            dVar8 = (double)_cos(dVar8 * 0.22439947525635714);
                            dVar8 = (double)_floor((dVar8 * 30146.56 + 35389.44) * local_38 + 0.5);
                            *piVar4 = (int)dVar8;
                            arg1_00 = arg1_00 + 1;
                        } while (uVar2 != arg1_00);
                    }
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != ((long)arg1 / (long)iVar1 & 4294967295U));
            }
        }
    }

    // 0x100295540
    void Decimator::Decimate(Array<signed char>& arg1) {
        int iVar2;
        long lVar3;
        char* pcVar4;
        Array<int>* this_00;
        int* piVar5;
        unsigned long uVar6;
        uint8_t* puVar7;
        uint8_t uVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        Array<int, BucketAllocatorEASTL> local_88;
        unsigned long local_70;
        unsigned long local_68;
        unsigned long local_50;
        long local_48;
        Array<signed char>* local_40;
        unsigned int local_38;
        int local_34;

        Array<Array<int>>* local_60 = (Array<Array<int>>*)&field_8;
        bool cVar1 = local_60->empty();
        if (!cVar1) {
            lVar3 = arg1.end();
            local_48 = (lVar3 * field_4) / (long)field_0;
            local_38 = (int)local_48 + 14;
            local_50 = (unsigned long)(int)local_38;
            local_88 = Array<int, BucketAllocatorEASTL>(local_50);
            lVar3 = arg1.end();
            local_40 = arg1;
            if (lVar3 != 0) {
                uVar10 = 0;
                local_34 = 0;
                uVar9 = 0;
                do {
                    pcVar4 = &arg1[uVar9];
                    cVar1 = *pcVar4;
                    local_70 = uVar9;
                    this_00 = (Array<int>*)(*local_60)[(long)local_34];
                    uVar9 = 0;
                    local_68 = uVar10;
                    do {
                        piVar5 = (int*)(*this_00)[uVar9];
                        iVar2 = *piVar5;
                        piVar5 = &local_88[(long)((int)uVar10 + (int)uVar9)];
                        arg1 = local_40;
                        *piVar5 = *piVar5 + iVar2 * cVar1;
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 14);
                    iVar2 = local_34 + field_4;
                    local_34 = iVar2 % field_0;
                    uVar10 = (unsigned long)(unsigned int)((int)local_68 + iVar2 / field_0);
                    uVar9 = local_70 + 1;
                    uVar6 = local_40->end();
                } while (uVar9 < uVar6);
            }
            arg1.set_max_size(local_50, 3);
            if (-14 < (int)local_48) {
                uVar9 = 1;
                if (1 < (int)local_38) {
                    uVar9 = (unsigned long)local_38;
                }
                uVar10 = 0;
                do {
                    piVar5 = &local_88[uVar10];
                    iVar2 = *piVar5;
                    uVar8 = 128;
                    if ((-8421377 < iVar2) &&
                        (uVar8 = (uint8_t)((unsigned int)(iVar2 * 256 + 8388608) >> 24), 8355839 < iVar2)) {
                        uVar8 = 127;
                    }
                    puVar7 = (uint8_t*)(*local_40)[uVar10];
                    *puVar7 = uVar8;
                    uVar10 = uVar10 + 1;
                } while (uVar9 != uVar10);
            }
        }
    }

    // 0x100295720
    void Decimator::Decimate(Array<short>& arg1) {
        short sVar1;
        int iVar3;
        long lVar4;
        short* psVar5;
        Array<int>* this_00;
        int* piVar6;
        unsigned long uVar7;
        uint16_t* puVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        uint16_t uVar11;
        Array<int> local_88;
        unsigned long local_70;
        unsigned long local_68;
        unsigned long local_50;
        long local_48;
        Array<short>* local_40;
        unsigned int local_38;
        int local_34;

        Array<Array<int>>* local_60 = (Array<Array<int>>*)&field_8;
        if (local_60->empty() == '\0') {
            lVar4 = arg1.end();
            local_48 = (lVar4 * field_4) / (long)field_0;
            local_38 = (int)local_48 + 14;
            local_50 = (unsigned long)(int)local_38;
            local_88 = Array<int>(local_50);
            lVar4 = arg1.end();
            local_40 = arg1;
            if (lVar4 != 0) {
                uVar10 = 0;
                local_34 = 0;
                uVar9 = 0;
                do {
                    psVar5 = &arg1[uVar9];
                    sVar1 = *psVar5;
                    local_70 = uVar9;
                    this_00 = (Array<int>*)(*local_60)[(long)local_34];
                    uVar9 = 0;
                    local_68 = uVar10;
                    do {
                        piVar6 = (int*)(*this_00)[uVar9];
                        iVar3 = *piVar6;
                        piVar6 = &local_88[(long)((int)uVar10 + (int)uVar9)];
                        arg1 = local_40;
                        *piVar6 = *piVar6 + (iVar3 * sVar1 >> 2);
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 14);
                    iVar3 = local_34 + field_4;
                    local_34 = iVar3 % field_0;
                    uVar10 = (unsigned long)(unsigned int)((int)local_68 + iVar3 / field_0);
                    uVar9 = local_70 + 1;
                    uVar7 = local_40->end();
                } while (uVar9 < uVar7);
            }
            arg1.set_max_size(local_50, 3);
            if (-14 < (int)local_48) {
                uVar9 = 1;
                if (1 < (int)local_38) {
                    uVar9 = (unsigned long)local_38;
                }
                uVar10 = 0;
                do {
                    piVar6 = &local_88[uVar10];
                    iVar3 = *piVar6;
                    uVar11 = 32768;
                    if ((-536879105 < iVar3) &&
                        (uVar11 = (uint16_t)((unsigned int)(iVar3 * 4 + 32768) >> 16), 536862719 < iVar3)) {
                        uVar11 = 32767;
                    }
                    puVar8 = (uint16_t*)(*local_40)[uVar10];
                    *puVar8 = uVar11;
                    uVar10 = uVar10 + 1;
                } while (uVar9 != uVar10);
            }
        }
    }

    // 0x100295900
    unsigned long Decimator::TransmitFreq(int arg1) {
        unsigned long uVar2 = (unsigned long)(unsigned int)arg1;
        if (field_8.empty() == '\0') {
            uVar2 = ((long)field_4 * (long)arg1) / (long)field_0;
        }
        return uVar2 & 4294967295;
    }

    // 0x100295940
    int Decimator::TransmitPos(int arg1) {
        if (field_8.empty() == '\0') {
            arg1 = (int)(((long)field_4 * (long)arg1) / (long)field_0) + 6;
        }
        return arg1;
    }

} // namespace jag::oldscape::sound
