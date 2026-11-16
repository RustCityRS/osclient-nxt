// libs/oldscape/jagex3/graphics/pix32.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Pix32.h"

namespace jag::oldscape::graphics {
    // 0x10031c070
    Pix32::Pix32(int arg1, int arg2) {

        SharedArray<unsigned int> local_40((long)(arg2 * arg1));
        Pix32(local_40, arg1, arg2);
    }

    // 0x10031c0e0
    Pix32::Pix32(SharedArray<unsigned int>&& sharedArray, int arg2, int arg3) : SharedArray() {
        *this = sharedArray;
        field_40 = arg2;
        field_24 = arg2;
        field_44 = arg3;
        field_28 = arg3;
        field_32 = 0;
        field_36 = 0;
    }

    // 0x10031c1c0
    void Pix32::Create(int arg1, int arg2) {

        SharedArray<unsigned int> local_40((long)(arg2 * arg1));
        *this = local_40;
        field_24 = arg1;
        field_40 = arg1;
        field_28 = arg2;
        field_44 = arg2;
        field_32 = 0;
        field_36 = 0;
    }

    // 0x10031c240
    auto Pix32::CopyHFlip() {
        auto result;
        uint32_t uVar3;
        uint32_t* puVar6;
        SharedArray<unsigned int>* this_00;
        int iVar7;
        int iVar8;
        int iVar9;
        int local_34;

        unsigned int* arg1 = &field_24;
        unsigned int* arg2 = &field_28;
        make_shared<Pix32, int&, int&>(&result, (int*)arg1, (int*)arg2);
        unsigned int uVar4 = field_40;
        long lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 40) = uVar4;
        uVar4 = field_44;
        lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 44) = uVar4;
        uVar4 = field_40;
        unsigned int uVar1 = field_24;
        unsigned int uVar2 = field_32;
        lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 32) = uVar4 - (uVar1 + uVar2);
        uVar4 = field_36;
        lVar5 = (result).operator->();
        *(unsigned int*)(lVar5 + 36) = uVar4;
        if (0 < (int)*arg2) {
            iVar7 = 0;
            local_34 = 1;
            do {
                uVar4 = *arg1;
                if (0 < (int)uVar4) {
                    iVar8 = 0;
                    iVar9 = -1;
                    do {
                        puVar6 = (uint32_t*)(*this)[(long)(int)(uVar4 * local_34 + iVar9)];
                        uVar3 = *puVar6;
                        this_00 = (SharedArray<unsigned int>*)(result).operator->();
                        puVar6 = (uint32_t*)(*this_00)[(long)(int)(*arg1 * iVar7 + iVar8)];
                        *puVar6 = uVar3;
                        iVar8 = iVar8 + 1;
                        uVar4 = *arg1;
                        iVar9 = iVar9 - 1;
                    } while (iVar8 < (int)uVar4);
                }
                iVar7 = iVar7 + 1;
                local_34 = local_34 + 1;
            } while (iVar7 < (int)*arg2);
        }
        return result;
    }

    // 0x10031c390
    auto Pix32::Copy() {
        auto result;

        make_shared<Pix32, int&, int&>(&result, (int*)&field_24, (int*)&field_28);
        unsigned int uVar1 = field_40;
        long lVar2 = (result).operator->();
        *(unsigned int*)(lVar2 + 40) = uVar1;
        uVar1 = field_44;
        lVar2 = (result).operator->();
        *(unsigned int*)(lVar2 + 44) = uVar1;
        uVar1 = field_32;
        lVar2 = (result).operator->();
        *(unsigned int*)(lVar2 + 32) = uVar1;
        uVar1 = field_36;
        lVar2 = (result).operator->();
        *(unsigned int*)(lVar2 + 36) = uVar1;
        SharedArray<unsigned int>* this_00 = (SharedArray<unsigned int>*)(result).operator->();
        auto pvVar3 = this_00->data();
        auto pvVar4 = data();
        size_t sVar5 = HeapBeginPtr();
        _memcpy(pvVar3, pvVar4, sVar5);
        return result;
    }

    // 0x10031c450
    auto Pix32::CopyUntrim() {
        auto result;
        uint32_t uVar1;
        unsigned int uVar2;
        uint32_t* puVar3;
        SharedArray<unsigned int>* this_00;
        int iVar4;
        int iVar5;

        make_shared<Pix32, int&, int&>(&result, (int*)&field_40, (int*)&field_44);
        if (0 < (int)field_28) {
            iVar5 = 0;
            do {
                uVar2 = field_24;
                if (0 < (int)uVar2) {
                    iVar4 = 0;
                    do {
                        puVar3 = (uint32_t*)(*this)[(long)(int)(uVar2 * iVar5 + iVar4)];
                        uVar1 = *puVar3;
                        this_00 = (SharedArray<unsigned int>*)(result).operator->();
                        puVar3 = (uint32_t*)(*this_00)[(long)(int)((field_36 + iVar5) * field_40 + field_32 + iVar4)];
                        *puVar3 = uVar1;
                        iVar4 = iVar4 + 1;
                        uVar2 = field_24;
                    } while (iVar4 < (int)uVar2);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < (int)field_28);
        }
        return result;
    }

    // 0x10031c520
    void Pix32::RgbAdjust(int arg1, int arg2, int arg3) {
        unsigned int uVar1;
        unsigned long uVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned long arg1_00;
        unsigned int uVar7;
        unsigned int uVar8;
        unsigned int uVar9;

        if (HeapBeginPtr() != 0) {
            arg1_00 = 0;
            do {
                puVar4 = (unsigned int*)(*this)[arg1_00];
                uVar6 = *puVar4;
                if (uVar6 != 0) {
                    uVar5 = (uVar6 >> 16 & 255) + arg1;
                    uVar1 = uVar5;
                    if (254 < uVar5) {
                        uVar1 = 255;
                    }
                    uVar7 = (uVar6 >> 8 & 255) + arg2;
                    uVar9 = uVar7;
                    if (254 < uVar7) {
                        uVar9 = 255;
                    }
                    uVar8 = (uVar6 & 255) + arg3;
                    uVar6 = uVar8;
                    if (254 < uVar8) {
                        uVar6 = 255;
                    }
                    if (uVar8 == 0) {
                        uVar6 = 1;
                    }
                    uVar1 = uVar1 << 16;
                    if (uVar5 == 0) {
                        uVar1 = 65536;
                    }
                    uVar9 = uVar9 << 8;
                    if (uVar7 == 0) {
                        uVar9 = 256;
                    }
                    puVar4 = (unsigned int*)(*this)[arg1_00];
                    *puVar4 = uVar9 | uVar6 | uVar1;
                }
                arg1_00 = arg1_00 + 1;
                uVar3 = HeapBeginPtr();
            } while (arg1_00 < uVar3);
        }
    }

    // 0x10031c610
    void Pix32::Multiply(unsigned int arg1) {
        unsigned int uVar1;
        unsigned long uVar3;
        unsigned int* puVar4;
        int* piVar5;
        unsigned long arg1_00;
        int iVar6;
        uint64_t local_38;

        if (HeapBeginPtr() != 0) {
            local_38 =
                (unsigned long)(((uint64_t)((char)(arg1 >> 8)) << 32) | (uint32_t)(arg1 >> 16)) & 18446744069414584575;
            arg1_00 = 0;
            do {
                puVar4 = (unsigned int*)(*this)[arg1_00];
                uVar1 = *puVar4;
                if (uVar1 != 0) {
                    iVar6 = ((uVar1 & 255) * (arg1 & 255)) / 255 +
                            ((unsigned int)((unsigned long)((uVar1 >> 8 & 255) * local_38._4_4_) * 2155905153 >> 32) &
                             4294967168) *
                                2 +
                            ((unsigned int)((unsigned long)((uVar1 >> 16 & 255) * (int)local_38) * 2155905153 >> 32) &
                             65408) *
                                512;
                    if (iVar6 == 0) {
                        iVar6 = 1;
                    }
                    piVar5 = (int*)(*this)[arg1_00];
                    *piVar5 = iVar6;
                }
                arg1_00 = arg1_00 + 1;
                uVar3 = HeapBeginPtr();
            } while (arg1_00 < uVar3);
        }
    }

    // 0x10031c6e0
    void Pix32::Trim() {
        uint32_t uVar1;
        bool bVar2;
        unsigned int uVar3;
        int iVar4;
        int* piVar5;
        uint32_t* puVar6;
        long lVar8;
        unsigned long arg1;
        unsigned long uVar10;
        SharedArray<unsigned int> local_90;
        unsigned long local_78;
        unsigned long local_70;
        long local_68;
        unsigned long local_60;
        unsigned long local_58;
        long local_50;
        unsigned int local_44;
        unsigned int local_3c;

        unsigned int uVar9 = field_28;
        unsigned int uVar7 = uVar9 - 1;
        if (0 < (int)uVar9) {
            do {
                uVar3 = field_24;
                if (0 < (int)uVar3) {
                    lVar8 = 0;
                    do {
                        piVar5 = (int*)(*this)[(int)(uVar3 * uVar7) + lVar8];
                        if (*piVar5 != 0)
                            goto LAB_10031c763;
                        lVar8 = lVar8 + 1;
                    } while (lVar8 < (int)field_24);
                }
                bVar2 = 0 < (int)uVar7;
                uVar9 = uVar7;
                uVar7 = uVar7 - 1;
            } while (bVar2);
            uVar7 = 4294967295;
            uVar9 = 0;
        }
    LAB_10031c763:
        unsigned long local_38 = 0;
        if (0 < (int)uVar7) {
            local_38 = 0;
            do {
                if (0 < (int)field_24) {
                    iVar4 = field_24 * (int)local_38;
                    lVar8 = 0;
                    do {
                        piVar5 = (int*)(*this)[iVar4 + lVar8];
                        if (*piVar5 != 0)
                            goto LAB_10031c7d2;
                        lVar8 = lVar8 + 1;
                    } while (lVar8 < (int)field_24);
                }
                uVar3 = (int)local_38 + 1;
                local_38 = (unsigned long)uVar3;
            } while (uVar3 != uVar7);
            local_38 = (unsigned long)uVar7;
        }
    LAB_10031c7d2:
        uVar3 = field_24;
        uVar7 = uVar3 - 1;
        if (0 < (int)uVar3) {
            do {
                uVar10 = local_38 & 4294967295;
                local_3c = uVar3;
                if ((int)local_38 < (int)uVar9) {
                    do {
                        piVar5 = (int*)(*this)[(long)(int)(field_24 * (int)uVar10 + uVar7)];
                        if (*piVar5 != 0) {
                            uVar3 = local_3c;
                            goto LAB_10031c84b;
                        }
                        uVar3 = (int)uVar10 + 1;
                        uVar10 = (unsigned long)uVar3;
                    } while (uVar9 != uVar3);
                }
                bVar2 = 0 < (int)uVar7;
                uVar3 = uVar7;
                uVar7 = uVar7 - 1;
            } while (bVar2);
            uVar7 = 4294967295;
            uVar3 = 0;
        }
    LAB_10031c84b:
        iVar4 = 0;
        int local_40 = iVar4;
        if (0 < (int)uVar7) {
            local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar7);
            do {
                uVar10 = local_38 & 4294967295;
                if ((int)local_38 < (int)uVar9) {
                    do {
                        piVar5 = (int*)(*this)[(long)(int)(field_24 * (int)uVar10 + iVar4)];
                        local_40 = iVar4;
                        if (*piVar5 != 0)
                            goto LAB_10031c8b1;
                        uVar7 = (int)uVar10 + 1;
                        uVar10 = (unsigned long)uVar7;
                    } while (uVar9 != uVar7);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 != (int)local_50);
            local_40 = (int)local_50;
        }
    LAB_10031c8b1:
        if ((((local_40 != 0) || (uVar3 != field_24)) || ((int)local_38 != 0)) || (uVar9 != field_28)) {
            uVar3 = uVar3 - local_40;
            uVar9 = uVar9 - (int)local_38;
            local_90 = SharedArray((long)(int)(uVar3 * uVar9));
            local_44 = uVar9;
            if (0 < (int)uVar9) {
                local_68 = (long)local_40;
                local_50 = (long)(int)local_38;
                local_70 = (unsigned long)uVar9;
                local_60 = (unsigned long)uVar3;
                local_58 = 0;
                uVar10 = 0;
                local_3c = uVar3;
                do {
                    local_78 = uVar10;
                    if (0 < (int)local_3c) {
                        arg1 = (unsigned long)(int)local_58;
                        uVar10 = local_60;
                        lVar8 = local_68;
                        do {
                            puVar6 = (uint32_t*)(*this)[(int)field_24 * local_50 + lVar8];
                            uVar1 = *puVar6;
                            puVar6 = &local_90[arg1];
                            *puVar6 = uVar1;
                            arg1 = arg1 + 1;
                            lVar8 = lVar8 + 1;
                            uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                    }
                    uVar10 = local_78 + 1;
                    local_58 = (unsigned long)((int)local_58 + local_3c);
                    local_50 = local_50 + 1;
                    uVar3 = local_3c;
                } while (uVar10 != local_70);
            }
            *this = local_90;
            field_24 = uVar3;
            field_28 = local_44;
            field_32 = field_32 + local_40;
            field_36 = field_36 + (int)local_38;
        }
    }

    // 0x10031ca20
    void Pix32::Untrim() {
        uint32_t uVar1;
        unsigned int uVar2;
        uint32_t* puVar3;
        int iVar4;
        int iVar5;
        SharedArray<unsigned int> local_48;

        if ((field_24 != field_40) || (field_28 != field_44)) {
            local_48 = SharedArray((long)(int)field_44 * (long)(int)field_40);
            if (0 < (int)field_28) {
                iVar5 = 0;
                do {
                    uVar2 = field_24;
                    if (0 < (int)uVar2) {
                        iVar4 = 0;
                        do {
                            puVar3 = (uint32_t*)(*this)[(long)(int)(uVar2 * iVar5 + iVar4)];
                            uVar1 = *puVar3;
                            puVar3 = &local_48[(long)(int)((field_36 + iVar5) * field_40 + field_32 + iVar4)];
                            *puVar3 = uVar1;
                            iVar4 = iVar4 + 1;
                            uVar2 = field_24;
                        } while (iVar4 < (int)uVar2);
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 < (int)field_28);
            }
            *this = local_48;
            field_24 = field_40;
            field_28 = field_44;
            field_32 = 0;
            field_36 = 0;
        }
    }

    // 0x10031cb30
    void Pix32::Untrim(int arg1) {
        unsigned int uVar2;
        uint32_t uVar3;
        uint32_t* puVar4;
        unsigned long uVar5;
        unsigned int uVar6;
        int iVar7;
        int iVar9;
        unsigned int uVar10;
        long lVar11;
        unsigned long uVar12;
        int iVar13;
        SharedArray<unsigned int> local_68;
        unsigned long local_50;
        unsigned long local_48;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        unsigned int uVar8 = field_24;
        unsigned int uVar1 = field_40;
        if ((uVar8 != uVar1) || (field_28 != field_44)) {
            uVar10 = field_32;
            local_38 = arg1;
            if ((int)uVar10 < arg1) {
                local_38 = uVar10;
            }
            uVar6 = uVar10 + uVar8 + arg1;
            iVar13 = uVar1 - (uVar10 + uVar8);
            if ((int)uVar6 <= (int)uVar1) {
                iVar13 = arg1;
            }
            uVar2 = field_36;
            local_34 = arg1;
            if ((int)uVar2 < arg1) {
                local_34 = uVar2;
            }
            iVar7 = uVar2 + field_28;
            iVar9 = field_44 - iVar7;
            if (iVar7 + arg1 <= (int)field_44) {
                iVar9 = arg1;
            }
            uVar8 = uVar8 + local_38 + iVar13;
            local_48 = (unsigned long)uVar8;
            local_3c = field_28 + local_34 + iVar9;
            local_68 = SharedArray((long)(int)(local_3c * uVar8));
            if (0 < (int)field_28) {
                if ((int)uVar1 < (int)uVar6) {
                    uVar6 = uVar1;
                }
                uVar10 = (uVar6 + local_38) - uVar10;
                local_50 = (unsigned long)uVar10;
                uVar12 = (unsigned long)(local_34 * uVar10 + local_38);
                iVar13 = 0;
                do {
                    uVar5 = (unsigned long)field_24;
                    if (0 < (int)field_24) {
                        lVar11 = 0;
                        do {
                            puVar4 = (uint32_t*)(*this)[(int)uVar5 * iVar13 + lVar11];
                            uVar3 = *puVar4;
                            puVar4 = &local_68[(long)((int)lVar11 + (int)uVar12)];
                            *puVar4 = uVar3;
                            lVar11 = lVar11 + 1;
                            uVar5 = (unsigned long)(int)field_24;
                        } while (lVar11 < (long)uVar5);
                    }
                    iVar13 = iVar13 + 1;
                    uVar12 = uVar12 + local_50;
                } while (iVar13 < (int)field_28);
            }
            *this = local_68;
            field_24 = (unsigned int)local_48;
            field_28 = local_3c;
            field_32 = field_32 - local_38;
            field_36 = field_36 - local_34;
        }
    }

    // 0x10031ccb0
    void Pix32::Rotate90Clockwise() {
        uint32_t uVar1;
        uint32_t* puVar5;
        int iVar6;
        int iVar7;
        unsigned long arg1;

        SharedArray<unsigned int> local_48((long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_24) {
            arg1 = 0;
            iVar7 = 0;
            do {
                if (0 < (int)field_28) {
                    arg1 = (unsigned long)(int)arg1;
                    iVar6 = field_28 + 1;
                    do {
                        puVar5 = (uint32_t*)(*this)[(long)(int)((iVar6 - 2) * field_24 + iVar7)];
                        uVar1 = *puVar5;
                        puVar5 = &local_48[arg1];
                        arg1 = arg1 + 1;
                        *puVar5 = uVar1;
                        iVar6 = iVar6 - 1;
                    } while (1 < iVar6);
                }
                iVar7 = iVar7 + 1;
            } while (iVar7 < (int)field_24);
        }
        *this = local_48;
        unsigned int uVar2 = field_28;
        unsigned int uVar3 = field_36;
        field_36 = field_32;
        unsigned int uVar4 = field_44;
        field_32 = uVar4 - (uVar3 + uVar2);
        field_28 = field_24;
        field_24 = uVar2;
        field_44 = field_40;
        field_40 = uVar4;
    }

    // 0x10031cdc0
    void Pix32::Rotate90AntiClockwise() {
        uint32_t uVar1;
        bool bVar2;
        unsigned long uVar3;
        uint32_t* puVar4;
        long lVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        unsigned long local_40;
        unsigned long local_38;

        SharedArray<unsigned int> local_58((long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_24) {
            uVar3 = 0;
            uVar6 = field_24;
            do {
                uVar7 = uVar6 - 1;
                if (0 < (int)field_28) {
                    lVar5 = 0;
                    local_40 = uVar3;
                    local_38 = (unsigned long)uVar6;
                    do {
                        puVar4 = (uint32_t*)(*this)[(long)(int)(field_24 * (int)lVar5 + uVar7)];
                        uVar1 = *puVar4;
                        puVar4 = &local_58[lVar5 + (int)uVar3];
                        *puVar4 = uVar1;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < (int)field_28);
                    uVar3 = (unsigned long)(unsigned int)((int)local_40 + (int)lVar5);
                    uVar6 = (unsigned int)local_38;
                }
                bVar2 = 1 < (int)uVar6;
                uVar6 = uVar7;
            } while (bVar2);
        }
        *this = local_58;
        uVar6 = field_28;
        uVar7 = field_32;
        field_32 = field_36;
        field_36 = field_40 - (uVar7 + field_24);
        field_28 = field_24;
        field_24 = uVar6;
        uVar6 = field_44;
        field_44 = field_40;
        field_40 = uVar6;
    }

    // 0x10031ced0
    void Pix32::HFlip() {
        uint32_t uVar1;
        uint32_t* puVar2;
        int iVar3;
        int iVar4;
        unsigned long arg1;

        SharedArray<unsigned int> local_48((long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_28) {
            iVar4 = 0;
            arg1 = 0;
            do {
                if (0 < (int)field_24) {
                    arg1 = (unsigned long)(int)arg1;
                    iVar3 = field_24 + 1;
                    do {
                        puVar2 = (uint32_t*)(*this)[(long)(int)(field_24 * iVar4 + iVar3 - 2)];
                        uVar1 = *puVar2;
                        puVar2 = &local_48[arg1];
                        arg1 = arg1 + 1;
                        *puVar2 = uVar1;
                        iVar3 = iVar3 - 1;
                    } while (1 < iVar3);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_28);
        }
        *this = local_48;
        field_32 = field_40 - (field_24 + field_32);
    }

    // 0x10031cfc0
    void Pix32::VFlip() {
        uint32_t uVar1;
        unsigned int uVar3;
        uint32_t* puVar4;
        unsigned int uVar5;
        unsigned long uVar6;
        unsigned int uVar7;
        long lVar8;
        unsigned long local_40;
        unsigned long local_38;

        SharedArray<unsigned int> local_58((long)(int)field_28 * (long)(int)field_24);
        unsigned int uVar2 = field_28;
        if (0 < (int)uVar2) {
            uVar6 = 0;
            uVar7 = uVar2;
            do {
                uVar7 = uVar7 - 1;
                uVar3 = field_24;
                uVar5 = uVar2;
                if (0 < (int)uVar3) {
                    lVar8 = 0;
                    local_40 = (unsigned long)uVar2;
                    local_38 = uVar6;
                    do {
                        puVar4 = (uint32_t*)(*this)[(long)(int)(uVar3 * uVar7 + (int)lVar8)];
                        uVar1 = *puVar4;
                        puVar4 = &local_58[(int)uVar6 + lVar8];
                        *puVar4 = uVar1;
                        uVar3 = field_24;
                        lVar8 = lVar8 + 1;
                    } while ((int)lVar8 < (int)uVar3);
                    uVar6 = (unsigned long)(unsigned int)((int)local_38 + (int)lVar8);
                    uVar5 = (unsigned int)local_40;
                }
                uVar2 = uVar5 - 1;
            } while (1 < (int)uVar5);
        }
        *this = local_58;
        field_36 = field_44 - (field_28 + field_36);
    }

    // 0x10031d0c0
    void Pix32::HVFlip() {
        uint32_t uVar1;
        uint32_t* puVar2;
        unsigned long arg1;
        unsigned long uVar4;

        unsigned int uVar3 = field_28 * field_24;
        SharedArray<unsigned int> local_48((long)(int)uVar3);
        if (0 < (int)uVar3) {
            uVar4 = (unsigned long)uVar3;
            arg1 = 0;
            do {
                uVar3 = uVar3 - 1;
                puVar2 = (uint32_t*)(*this)[(unsigned long)uVar3];
                uVar1 = *puVar2;
                puVar2 = &local_48[arg1];
                arg1 = arg1 + 1;
                *puVar2 = uVar1;
            } while (arg1 != uVar4);
        }
        *this = local_48;
        field_32 = field_40 - (field_24 + field_32);
        field_36 = field_44 - (field_28 + field_36);
    }

    // 0x10031d190
    void Pix32::AddOutline(int arg1) {
        unsigned long arg1_00;
        unsigned int uVar1;
        int* piVar2;
        int iVar3;
        long lVar4;
        long lVar5;
        int local_44;
        unsigned long local_40;

        SharedArray<unsigned int> local_60((long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_28) {
            local_40 = 0;
            iVar3 = 0;
            do {
                if (0 < (int)field_24) {
                    lVar5 = (long)iVar3;
                    lVar4 = 0;
                    local_44 = iVar3;
                    do {
                        arg1_00 = lVar5 + lVar4;
                        piVar2 = (int*)(*this)[arg1_00];
                        iVar3 = *piVar2;
                        if ((((*piVar2 == 0) && (((int)lVar4 == 0 || (piVar2 = (int*)(*this)[(lVar5 + lVar4) - 1],
                                                                      iVar3 = arg1, *piVar2 == 0)))) &&
                             (((int)local_40 == 0 ||
                               (piVar2 = (int*)(*this)[arg1_00 - (long)(int)field_24], iVar3 = arg1, *piVar2 == 0)))) &&
                            (((int)(field_24 - 1) <= (int)lVar4 ||
                              (piVar2 = (int*)(*this)[lVar5 + lVar4 + 1], iVar3 = arg1, *piVar2 == 0)))) {
                            iVar3 = 0;
                            if ((int)local_40 < (int)(field_28 - 1)) {
                                piVar2 = (int*)(*this)[(long)(int)field_24 + arg1_00];
                                iVar3 = 0;
                                if (*piVar2 != 0) {
                                    iVar3 = arg1;
                                }
                            }
                        }
                        piVar2 = &local_60[arg1_00];
                        *piVar2 = iVar3;
                        lVar4 = lVar4 + 1;
                    } while ((int)lVar4 < (int)field_24);
                    iVar3 = local_44 + (int)lVar4;
                }
                uVar1 = (int)local_40 + 1;
                local_40 = (unsigned long)uVar1;
            } while ((int)uVar1 < (int)field_28);
        }
        *this = local_60;
    }

    // 0x10031d330
    void Pix32::AddShadow(unsigned int arg1) {
        unsigned int uVar2;
        bool bVar3;
        int* piVar4;
        unsigned int* puVar5;
        unsigned long arg1_00;
        int iVar6;
        long lVar7;

        unsigned int uVar1 = field_28;
        unsigned int local_34 = uVar1;
        if (1 < (int)uVar1) {
            do {
                local_34 = local_34 - 1;
                uVar2 = field_24;
                if (1 < (long)(int)uVar2) {
                    lVar7 = (long)(int)uVar2 + 1;
                    iVar6 = uVar2 * uVar1 - 2;
                    do {
                        arg1_00 = (lVar7 + (int)(uVar2 * local_34)) - 2;
                        piVar4 = (int*)(*this)[arg1_00];
                        if ((*piVar4 == 0) && (piVar4 = (int*)(*this)[(long)(int)(iVar6 - field_24)], *piVar4 != 0)) {
                            puVar5 = (unsigned int*)(*this)[arg1_00];
                            *puVar5 = arg1;
                        }
                        lVar7 = lVar7 - 1;
                        iVar6 = iVar6 - 1;
                    } while (2 < lVar7);
                }
                bVar3 = 2 < (int)uVar1;
                uVar1 = uVar1 - 1;
            } while (bVar3);
        }
    }

    // 0x10031d410
    void Pix32::ScaleImageBounds(int arg1) {
        uint32_t uVar1;
        unsigned int uVar2;
        uint32_t* puVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        SharedArray<unsigned int> local_50;
        int local_34;

        if (0 < arg1) {
            Untrim();
            local_34 = arg1 * 2;
            local_50 = SharedArray((long)(int)((field_44 + local_34) * (field_40 + local_34)));
            uVar2 = field_44;
            if (0 < (int)uVar2) {
                uVar4 = field_40;
                iVar5 = 0;
                do {
                    uVar2 = field_40;
                    if (0 < (int)uVar2) {
                        iVar6 = 0;
                        do {
                            puVar3 = (uint32_t*)(*this)[(long)(int)(uVar2 * iVar5 + iVar6)];
                            uVar1 = *puVar3;
                            puVar3 = &local_50[(long)(int)((field_40 + local_34) * iVar5 +
                                                           (uVar4 + arg1 * 2 + 1) * arg1 + iVar6)];
                            *puVar3 = uVar1;
                            iVar6 = iVar6 + 1;
                            uVar2 = field_40;
                        } while (iVar6 < (int)uVar2);
                    }
                    iVar5 = iVar5 + 1;
                    uVar2 = field_44;
                } while (iVar5 < (int)uVar2);
            }
            uVar4 = local_34 + field_40;
            field_40 = uVar4;
            field_44 = uVar2 + local_34;
            field_24 = uVar4;
            field_28 = uVar2 + local_34;
            *this = local_50;
        }
    }

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x10031f0e0
    shared_ptr_if_not_array<oldscape::jstring::PixfontGeneric>::type
    make_shared<oldscape::jstring::PixfontGeneric, Array<signed char>, Array<int>, Array<int>, Array<int>, Array<int>,
                SharedArray<unsigned int>, SharedArray<Array<unsigned char>>>(
        Array<signed char>&& arg1, Array<int>&& arg2, Array<int>&& arg3, Array<int>&& arg4, Array<int>&& arg5,
        SharedArray<unsigned int>&& sharedArray1, SharedArray<Array<unsigned char>>&& sharedArray2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        SharedArray<Array<unsigned char> _>* in_stack_00000010;
        int local_44;
        PixfontGeneric* local_40[2];

        auto arg1_00 = aligned_alloc(1224, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::jstring::PixfontGeneric, Array<signed char>, Array<int>, Array<int>, Array<int>,
                              Array<int>, SharedArray<unsigned int>, SharedArray<Array<unsigned char>>>(
                    (void*)((long)arg1_00 + 32), (Array<signed char>*)arg2, arg3, arg4, arg5, (Array<int>*)sharedArray1,
                    (SharedArray<unsigned int>*)sharedArray2, in_stack_00000010);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::jstring::PixfontGeneric>, int,
                              oldscape::jstring::PixfontGeneric*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
