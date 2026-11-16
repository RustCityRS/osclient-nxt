// libs/oldscape/jagex3/graphics/pix32.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Pix32.h"

namespace jag::oldscape::graphics {
    // 0x10031c070, 112 bytes, base-object constructor, placed by class name and debug map
    // Pix32::Pix32(int, int)
    void Pix32::Pix32(int param_1, int param_2) {
        SharedArray<unsigned int> local_40[24];

        SharedArray<unsigned int>::SharedArray(local_40, (long)(param_2 * param_1));
        Pix32(this, (SharedArray*)local_40, param_1, param_2);
        local_40->~SharedArray();
    }

    // 0x10031c0e0, 96 bytes, base-object constructor, placed by class name and debug map
    // Pix32::Pix32(SharedArray<unsigned int>&&, int, int)
    void Pix32::Pix32(SharedArray* param_1, int param_2, int param_3) {
        new (this) SharedArray<unsigned int>();
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, param_1);
        field_40 = param_2;
        field_24 = param_2;
        field_44 = param_3;
        field_28 = param_3;
        field_32 = 0;
        field_36 = 0;
    }

    // 0x10031c140, 112 bytes, complete-object constructor, placed by class name and debug map
    // Pix32::Pix32(int, int)
    void Pix32::Pix32(int param_1, int param_2) {
        SharedArray<unsigned int> local_40[24];

        SharedArray<unsigned int>::SharedArray(local_40, (long)(param_2 * param_1));
        Pix32(this, (SharedArray*)local_40, param_1, param_2);
        local_40->~SharedArray();
    }

    // 0x10031c1b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Pix32::Pix32(SharedArray<unsigned int>&&, int, int): jumps straight to the base-object constructor

    // 0x10031c1c0, 128 bytes, placed by class name and debug map
    // Pix32::Create(int, int)
    void Pix32::Create(int param_1, int param_2) {
        SharedArray<unsigned int> local_40[24];

        SharedArray<unsigned int>::SharedArray(local_40, (long)(param_2 * param_1));
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_40);
        local_40->~SharedArray();
        field_24 = param_1;
        field_40 = param_1;
        field_28 = param_2;
        field_44 = param_2;
        field_32 = 0;
        field_36 = 0;
    }

    // 0x10031c240, 336 bytes, placed by class name and debug map
    // Pix32::CopyHFlip()
    Pix32* Pix32::CopyHFlip() {
        SharedArray<unsigned int>* pSVar1;
        undefined4 uVar2;
        int iVar3;
        long lVar4;
        undefined4* puVar5;
        SharedArray<unsigned int>* this_00;
        SharedArray<unsigned int>* in_RSI;
        SharedArray<unsigned int>* pSVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int local_34;

        pSVar6 = in_RSI + 24;
        pSVar1 = in_RSI + 28;
        make_shared<Pix32, int&, int&>((jag*)this, (int*)pSVar6, (int*)pSVar1);
        uVar2 = *(undefined4*)(in_RSI + 40);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 40) = uVar2;
        uVar2 = *(undefined4*)(in_RSI + 44);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 44) = uVar2;
        iVar7 = *(int*)(in_RSI + 40);
        iVar3 = *(int*)(in_RSI + 24);
        iVar8 = *(int*)(in_RSI + 32);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(int*)(lVar4 + 32) = iVar7 - (iVar3 + iVar8);
        uVar2 = *(undefined4*)(in_RSI + 36);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 36) = uVar2;
        if (0 < *(int*)pSVar1) {
            iVar7 = 0;
            local_34 = 1;
            do {
                iVar3 = *(int*)pSVar6;
                if (0 < iVar3) {
                    iVar8 = 0;
                    iVar9 = -1;
                    do {
                        puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](in_RSI,
                                                                                    (long)(iVar3 * local_34 + iVar9));
                        uVar2 = *puVar5;
                        this_00 = (SharedArray<unsigned int>*)shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
                        puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](
                            this_00, (long)(*(int*)pSVar6 * iVar7 + iVar8));
                        *puVar5 = uVar2;
                        iVar8 = iVar8 + 1;
                        iVar3 = *(int*)pSVar6;
                        iVar9 = iVar9 + -1;
                    } while (iVar8 < iVar3);
                }
                iVar7 = iVar7 + 1;
                local_34 = local_34 + 1;
            } while (iVar7 < *(int*)pSVar1);
        }
        return this;
    }

    // 0x10031c390, 192 bytes, placed by class name and debug map
    // Pix32::Copy()
    Pix32* Pix32::Copy() {
        undefined4 uVar1;
        long lVar2;
        SharedArray<unsigned int>* this_00;
        void* pvVar3;
        void* pvVar4;
        size_t sVar5;
        SharedArray<unsigned int>* in_RSI;

        make_shared<Pix32, int&, int&>((jag*)this, (int*)(in_RSI + 24), (int*)(in_RSI + 28));
        uVar1 = *(undefined4*)(in_RSI + 40);
        lVar2 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar2 + 40) = uVar1;
        uVar1 = *(undefined4*)(in_RSI + 44);
        lVar2 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar2 + 44) = uVar1;
        uVar1 = *(undefined4*)(in_RSI + 32);
        lVar2 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar2 + 32) = uVar1;
        uVar1 = *(undefined4*)(in_RSI + 36);
        lVar2 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar2 + 36) = uVar1;
        this_00 = (SharedArray<unsigned int>*)shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        pvVar3 = (void*)this_00->data();
        pvVar4 = (void*)in_RSI->data();
        sVar5 = in_RSI->HeapBeginPtr();
        _memcpy(pvVar3, pvVar4, sVar5);
        return this;
    }

    // 0x10031c450, 208 bytes, placed by class name and debug map
    // Pix32::CopyUntrim()
    Pix32* Pix32::CopyUntrim() {
        undefined4 uVar1;
        int iVar2;
        undefined4* puVar3;
        SharedArray<unsigned int>* this_00;
        int iVar4;
        SharedArray<unsigned int>* in_RSI;
        int iVar5;

        make_shared<Pix32, int&, int&>((jag*)this, (int*)(in_RSI + 40), (int*)(in_RSI + 44));
        if (0 < *(int*)(in_RSI + 28)) {
            iVar5 = 0;
            do {
                iVar2 = *(int*)(in_RSI + 24);
                if (0 < iVar2) {
                    iVar4 = 0;
                    do {
                        puVar3 =
                            (undefined4*)SharedArray<unsigned int>::operator[](in_RSI, (long)(iVar2 * iVar5 + iVar4));
                        uVar1 = *puVar3;
                        this_00 = (SharedArray<unsigned int>*)shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
                        puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                            this_00, (long)((*(int*)(in_RSI + 36) + iVar5) * *(int*)(in_RSI + 40) +
                                            *(int*)(in_RSI + 32) + iVar4));
                        *puVar3 = uVar1;
                        iVar4 = iVar4 + 1;
                        iVar2 = *(int*)(in_RSI + 24);
                    } while (iVar4 < iVar2);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < *(int*)(in_RSI + 28));
        }
        return this;
    }

    // 0x10031c520, 240 bytes, placed by class name and debug map
    // Pix32::RgbAdjust(int, int, int)
    void Pix32::RgbAdjust(int param_1, int param_2, int param_3) {
        uint uVar1;
        ulong uVar3;
        uint* puVar4;
        uint uVar5;
        uint uVar6;
        ulong uVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;

        if (HeapBeginPtr() != 0) {
            uVar7 = 0;
            do {
                puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar7);
                uVar6 = *puVar4;
                if (uVar6 != 0) {
                    uVar5 = (uVar6 >> 16 & 255) + param_1;
                    uVar1 = uVar5;
                    if (254 < uVar5) {
                        uVar1 = 255;
                    }
                    uVar8 = (uVar6 >> 8 & 255) + param_2;
                    uVar10 = uVar8;
                    if (254 < uVar8) {
                        uVar10 = 255;
                    }
                    uVar9 = (uVar6 & 255) + param_3;
                    uVar6 = uVar9;
                    if (254 < uVar9) {
                        uVar6 = 255;
                    }
                    if (uVar9 == 0) {
                        uVar6 = 1;
                    }
                    uVar1 = uVar1 << 16;
                    if (uVar5 == 0) {
                        uVar1 = 65536;
                    }
                    uVar10 = uVar10 << 8;
                    if (uVar8 == 0) {
                        uVar10 = 256;
                    }
                    puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar7);
                    *puVar4 = uVar10 | uVar6 | uVar1;
                }
                uVar7 = uVar7 + 1;
                uVar3 = HeapBeginPtr();
            } while (uVar7 < uVar3);
        }
    }

    // 0x10031c610, 208 bytes, placed by class name and debug map
    // Pix32::Multiply(unsigned int)
    void Pix32::Multiply(uint param_1) {
        uint uVar1;
        ulong uVar3;
        uint* puVar4;
        int* piVar5;
        ulong uVar6;
        int iVar7;
        undefined8 local_38;

        if (HeapBeginPtr() != 0) {
            local_38 = (ulong)CONCAT14((char)(param_1 >> 8), param_1 >> 16) & 18446744069414584575;
            uVar6 = 0;
            do {
                puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar6);
                uVar1 = *puVar4;
                if (uVar1 != 0) {
                    iVar7 = ((uVar1 & 255) * (param_1 & 255)) / 255 +
                            ((uint)((ulong)((uVar1 >> 8 & 255) * local_38._4_4_) * 2155905153 >> 32) & 4294967168) * 2 +
                            ((uint)((ulong)((uVar1 >> 16 & 255) * (int)local_38) * 2155905153 >> 32) & 65408) * 512;
                    if (iVar7 == 0) {
                        iVar7 = 1;
                    }
                    piVar5 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar6);
                    *piVar5 = iVar7;
                }
                uVar6 = uVar6 + 1;
                uVar3 = HeapBeginPtr();
            } while (uVar6 < uVar3);
        }
    }

    // 0x10031c6e0, 832 bytes, placed by class name and debug map
    // Pix32::Trim()
    void Pix32::Trim() {
        undefined4 uVar1;
        bool bVar2;
        uint uVar3;
        int iVar4;
        int* piVar5;
        undefined4* puVar6;
        uint uVar7;
        long lVar8;
        ulong uVar9;
        uint uVar10;
        ulong uVar11;
        SharedArray<unsigned int> local_90[24];
        ulong local_78;
        ulong local_70;
        long local_68;
        ulong local_60;
        ulong local_58;
        long local_50;
        uint local_44;
        int local_40;
        uint local_3c;
        ulong local_38;

        uVar10 = field_28;
        uVar7 = uVar10 - 1;
        if (0 < (int)uVar10) {
            do {
                uVar3 = field_24;
                if (0 < (int)uVar3) {
                    lVar8 = 0;
                    do {
                        piVar5 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this,
                                                                             (int)(uVar3 * uVar7) + lVar8);
                        if (*piVar5 != 0)
                            goto LAB_10031c763;
                        lVar8 = lVar8 + 1;
                    } while (lVar8 < (int)field_24);
                }
                bVar2 = 0 < (int)uVar7;
                uVar10 = uVar7;
                uVar7 = uVar7 - 1;
            } while (bVar2);
            uVar7 = 4294967295;
            uVar10 = 0;
        }
    LAB_10031c763:
        local_38 = 0;
        if (0 < (int)uVar7) {
            local_38 = 0;
            do {
                if (0 < (int)field_24) {
                    iVar4 = field_24 * (int)local_38;
                    lVar8 = 0;
                    do {
                        piVar5 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this,
                                                                             iVar4 + lVar8);
                        if (*piVar5 != 0)
                            goto LAB_10031c7d2;
                        lVar8 = lVar8 + 1;
                    } while (lVar8 < (int)field_24);
                }
                uVar3 = (int)local_38 + 1;
                local_38 = (ulong)uVar3;
            } while (uVar3 != uVar7);
            local_38 = (ulong)uVar7;
        }
    LAB_10031c7d2:
        uVar3 = field_24;
        uVar7 = uVar3 - 1;
        if (0 < (int)uVar3) {
            do {
                uVar11 = local_38 & 4294967295;
                local_3c = uVar3;
                if ((int)local_38 < (int)uVar10) {
                    do {
                        piVar5 = (int*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)this, (long)(int)(field_24 * (int)uVar11 + uVar7));
                        if (*piVar5 != 0) {
                            uVar3 = local_3c;
                            goto LAB_10031c84b;
                        }
                        uVar3 = (int)uVar11 + 1;
                        uVar11 = (ulong)uVar3;
                    } while (uVar10 != uVar3);
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
        local_40 = iVar4;
        if (0 < (int)uVar7) {
            local_50 = CONCAT44(local_50._4_4_, uVar7);
            do {
                uVar11 = local_38 & 4294967295;
                if ((int)local_38 < (int)uVar10) {
                    do {
                        piVar5 = (int*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)this, (long)(int)(field_24 * (int)uVar11 + iVar4));
                        local_40 = iVar4;
                        if (*piVar5 != 0)
                            goto LAB_10031c8b1;
                        uVar7 = (int)uVar11 + 1;
                        uVar11 = (ulong)uVar7;
                    } while (uVar10 != uVar7);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 != (int)local_50);
            local_40 = (int)local_50;
        }
    LAB_10031c8b1:
        if ((((local_40 != 0) || (uVar3 != field_24)) || ((int)local_38 != 0)) || (uVar10 != field_28)) {
            uVar3 = uVar3 - local_40;
            uVar10 = uVar10 - (int)local_38;
            SharedArray<unsigned int>::SharedArray(local_90, (long)(int)(uVar3 * uVar10));
            local_44 = uVar10;
            if (0 < (int)uVar10) {
                local_68 = (long)local_40;
                local_50 = (long)(int)local_38;
                local_70 = (ulong)uVar10;
                local_60 = (ulong)uVar3;
                local_58 = 0;
                uVar11 = 0;
                local_3c = uVar3;
                do {
                    local_78 = uVar11;
                    if (0 < (int)local_3c) {
                        uVar9 = (ulong)(int)local_58;
                        uVar11 = local_60;
                        lVar8 = local_68;
                        do {
                            puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)this, (int)field_24 * local_50 + lVar8);
                            uVar1 = *puVar6;
                            puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](local_90, uVar9);
                            *puVar6 = uVar1;
                            uVar9 = uVar9 + 1;
                            lVar8 = lVar8 + 1;
                            uVar11 = uVar11 - 1;
                        } while (uVar11 != 0);
                    }
                    uVar11 = local_78 + 1;
                    local_58 = (ulong)((int)local_58 + local_3c);
                    local_50 = local_50 + 1;
                    uVar3 = local_3c;
                } while (uVar11 != local_70);
            }
            SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_90);
            field_24 = uVar3;
            field_28 = local_44;
            field_32 = field_32 + local_40;
            field_36 = field_36 + (int)local_38;
            local_90->~SharedArray();
        }
    }

    // 0x10031ca20, 272 bytes, placed by class name and debug map
    // Pix32::Untrim()
    void Pix32::Untrim() {
        undefined4 uVar1;
        uint uVar2;
        undefined4* puVar3;
        int iVar4;
        int iVar5;
        SharedArray<unsigned int> local_48[24];

        if ((field_24 != field_40) || (field_28 != field_44)) {
            SharedArray<unsigned int>::SharedArray(local_48, (long)(int)field_44 * (long)(int)field_40);
            if (0 < (int)field_28) {
                iVar5 = 0;
                do {
                    uVar2 = field_24;
                    if (0 < (int)uVar2) {
                        iVar4 = 0;
                        do {
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)this, (long)(int)(uVar2 * iVar5 + iVar4));
                            uVar1 = *puVar3;
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                local_48, (long)(int)((field_36 + iVar5) * field_40 + field_32 + iVar4));
                            *puVar3 = uVar1;
                            iVar4 = iVar4 + 1;
                            uVar2 = field_24;
                        } while (iVar4 < (int)uVar2);
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 < (int)field_28);
            }
            SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_48);
            field_24 = field_40;
            field_28 = field_44;
            field_32 = 0;
            field_36 = 0;
            local_48->~SharedArray();
        }
    }

    // 0x10031cb30, 384 bytes, placed by class name and debug map
    // Pix32::Untrim(int)
    void Pix32::Untrim(int param_1) {
        uint uVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4* puVar4;
        ulong uVar5;
        uint uVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        uint uVar10;
        long lVar11;
        ulong uVar12;
        int iVar13;
        SharedArray<unsigned int> local_68[24];
        ulong local_50;
        ulong local_48;
        uint local_3c;
        uint local_38;
        uint local_34;

        uVar8 = field_24;
        uVar1 = field_40;
        if ((uVar8 != uVar1) || (field_28 != field_44)) {
            uVar10 = field_32;
            local_38 = param_1;
            if ((int)uVar10 < param_1) {
                local_38 = uVar10;
            }
            uVar6 = uVar10 + uVar8 + param_1;
            iVar13 = uVar1 - (uVar10 + uVar8);
            if ((int)uVar6 <= (int)uVar1) {
                iVar13 = param_1;
            }
            uVar2 = field_36;
            local_34 = param_1;
            if ((int)uVar2 < param_1) {
                local_34 = uVar2;
            }
            iVar7 = uVar2 + field_28;
            iVar9 = field_44 - iVar7;
            if (iVar7 + param_1 <= (int)field_44) {
                iVar9 = param_1;
            }
            uVar8 = uVar8 + local_38 + iVar13;
            local_48 = (ulong)uVar8;
            local_3c = field_28 + local_34 + iVar9;
            SharedArray<unsigned int>::SharedArray(local_68, (long)(int)(local_3c * uVar8));
            if (0 < (int)field_28) {
                if ((int)uVar1 < (int)uVar6) {
                    uVar6 = uVar1;
                }
                uVar10 = (uVar6 + local_38) - uVar10;
                local_50 = (ulong)uVar10;
                uVar12 = (ulong)(local_34 * uVar10 + local_38);
                iVar13 = 0;
                do {
                    uVar5 = (ulong)field_24;
                    if (0 < (int)field_24) {
                        lVar11 = 0;
                        do {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)this, (int)uVar5 * iVar13 + lVar11);
                            uVar3 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                local_68, (long)((int)lVar11 + (int)uVar12));
                            *puVar4 = uVar3;
                            lVar11 = lVar11 + 1;
                            uVar5 = (ulong)(int)field_24;
                        } while (lVar11 < (long)uVar5);
                    }
                    iVar13 = iVar13 + 1;
                    uVar12 = uVar12 + local_50;
                } while (iVar13 < (int)field_28);
            }
            SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_68);
            field_24 = (uint)local_48;
            field_28 = local_3c;
            field_32 = field_32 - local_38;
            field_36 = field_36 - local_34;
            local_68->~SharedArray();
        }
    }

    // 0x10031ccb0, 272 bytes, placed by class name and debug map
    // Pix32::Rotate90Clockwise()
    void Pix32::Rotate90Clockwise() {
        undefined4 uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        undefined4* puVar5;
        int iVar6;
        int iVar7;
        ulong uVar8;
        SharedArray<unsigned int> local_48[24];

        SharedArray<unsigned int>::SharedArray(local_48, (long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_24) {
            uVar8 = 0;
            iVar7 = 0;
            do {
                if (0 < (int)field_28) {
                    uVar8 = (ulong)(int)uVar8;
                    iVar6 = field_28 + 1;
                    do {
                        puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)this, (long)(int)((iVar6 + -2) * field_24 + iVar7));
                        uVar1 = *puVar5;
                        puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](local_48, uVar8);
                        uVar8 = uVar8 + 1;
                        *puVar5 = uVar1;
                        iVar6 = iVar6 + -1;
                    } while (1 < iVar6);
                }
                iVar7 = iVar7 + 1;
            } while (iVar7 < (int)field_24);
        }
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_48);
        uVar2 = field_28;
        uVar3 = field_36;
        field_36 = field_32;
        uVar4 = field_44;
        field_32 = uVar4 - (uVar3 + uVar2);
        field_28 = field_24;
        field_24 = uVar2;
        field_44 = field_40;
        field_40 = uVar4;
        local_48->~SharedArray();
    }

    // 0x10031cdc0, 272 bytes, placed by class name and debug map
    // Pix32::Rotate90AntiClockwise()
    void Pix32::Rotate90AntiClockwise() {
        undefined4 uVar1;
        bool bVar2;
        ulong uVar3;
        undefined4* puVar4;
        long lVar5;
        uint uVar6;
        uint uVar7;
        SharedArray<unsigned int> local_58[24];
        ulong local_40;
        ulong local_38;

        SharedArray<unsigned int>::SharedArray(local_58, (long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_24) {
            uVar3 = 0;
            uVar6 = field_24;
            do {
                uVar7 = uVar6 - 1;
                if (0 < (int)field_28) {
                    lVar5 = 0;
                    local_40 = uVar3;
                    local_38 = (ulong)uVar6;
                    do {
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)this, (long)(int)(field_24 * (int)lVar5 + uVar7));
                        uVar1 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](local_58, lVar5 + (int)uVar3);
                        *puVar4 = uVar1;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < (int)field_28);
                    uVar3 = (ulong)(uint)((int)local_40 + (int)lVar5);
                    uVar6 = (uint)local_38;
                }
                bVar2 = 1 < (int)uVar6;
                uVar6 = uVar7;
            } while (bVar2);
        }
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_58);
        uVar6 = field_28;
        uVar7 = field_32;
        field_32 = field_36;
        field_36 = field_40 - (uVar7 + field_24);
        field_28 = field_24;
        field_24 = uVar6;
        uVar6 = field_44;
        field_44 = field_40;
        field_40 = uVar6;
        local_58->~SharedArray();
    }

    // 0x10031ced0, 240 bytes, placed by class name and debug map
    // Pix32::HFlip()
    void Pix32::HFlip() {
        undefined4 uVar1;
        undefined4* puVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        SharedArray<unsigned int> local_48[24];

        SharedArray<unsigned int>::SharedArray(local_48, (long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_28) {
            iVar4 = 0;
            uVar5 = 0;
            do {
                if (0 < (int)field_24) {
                    uVar5 = (ulong)(int)uVar5;
                    iVar3 = field_24 + 1;
                    do {
                        puVar2 = (undefined4*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)this, (long)(int)(field_24 * iVar4 + iVar3 + -2));
                        uVar1 = *puVar2;
                        puVar2 = (undefined4*)SharedArray<unsigned int>::operator[](local_48, uVar5);
                        uVar5 = uVar5 + 1;
                        *puVar2 = uVar1;
                        iVar3 = iVar3 + -1;
                    } while (1 < iVar3);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_28);
        }
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_48);
        field_32 = field_40 - (field_24 + field_32);
        local_48->~SharedArray();
    }

    // 0x10031cfc0, 256 bytes, placed by class name and debug map
    // Pix32::VFlip()
    void Pix32::VFlip() {
        undefined4 uVar1;
        uint uVar2;
        uint uVar3;
        undefined4* puVar4;
        uint uVar5;
        ulong uVar6;
        uint uVar7;
        long lVar8;
        SharedArray<unsigned int> local_58[24];
        ulong local_40;
        ulong local_38;

        SharedArray<unsigned int>::SharedArray(local_58, (long)(int)field_28 * (long)(int)field_24);
        uVar2 = field_28;
        if (0 < (int)uVar2) {
            uVar6 = 0;
            uVar7 = uVar2;
            do {
                uVar7 = uVar7 - 1;
                uVar3 = field_24;
                uVar5 = uVar2;
                if (0 < (int)uVar3) {
                    lVar8 = 0;
                    local_40 = (ulong)uVar2;
                    local_38 = uVar6;
                    do {
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)this, (long)(int)(uVar3 * uVar7 + (int)lVar8));
                        uVar1 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](local_58, (int)uVar6 + lVar8);
                        *puVar4 = uVar1;
                        uVar3 = field_24;
                        lVar8 = lVar8 + 1;
                    } while ((int)lVar8 < (int)uVar3);
                    uVar6 = (ulong)(uint)((int)local_38 + (int)lVar8);
                    uVar5 = (uint)local_40;
                }
                uVar2 = uVar5 - 1;
            } while (1 < (int)uVar5);
        }
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_58);
        field_36 = field_44 - (field_28 + field_36);
        local_58->~SharedArray();
    }

    // 0x10031d0c0, 208 bytes, placed by class name and debug map
    // Pix32::HVFlip()
    void Pix32::HVFlip() {
        undefined4 uVar1;
        undefined4* puVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;
        SharedArray<unsigned int> local_48[24];

        uVar4 = field_28 * field_24;
        SharedArray<unsigned int>::SharedArray(local_48, (long)(int)uVar4);
        if (0 < (int)uVar4) {
            uVar5 = (ulong)uVar4;
            uVar3 = 0;
            do {
                uVar4 = uVar4 - 1;
                puVar2 =
                    (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, (ulong)uVar4);
                uVar1 = *puVar2;
                puVar2 = (undefined4*)SharedArray<unsigned int>::operator[](local_48, uVar3);
                uVar3 = uVar3 + 1;
                *puVar2 = uVar1;
            } while (uVar3 != uVar5);
        }
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_48);
        field_32 = field_40 - (field_24 + field_32);
        field_36 = field_44 - (field_28 + field_36);
        local_48->~SharedArray();
    }

    // 0x10031d190, 416 bytes, placed by class name and debug map
    // Pix32::AddOutline(int)
    void Pix32::AddOutline(int param_1) {
        ulong uVar1;
        uint uVar2;
        int* piVar3;
        int iVar4;
        long lVar5;
        long lVar6;
        SharedArray<unsigned int> local_60[28];
        int local_44;
        ulong local_40;

        SharedArray<unsigned int>::SharedArray(local_60, (long)(int)field_28 * (long)(int)field_24);
        if (0 < (int)field_28) {
            local_40 = 0;
            iVar4 = 0;
            do {
                if (0 < (int)field_24) {
                    lVar6 = (long)iVar4;
                    lVar5 = 0;
                    local_44 = iVar4;
                    do {
                        uVar1 = lVar6 + lVar5;
                        piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar1);
                        iVar4 = *piVar3;
                        if ((((*piVar3 == 0) &&
                              (((int)lVar5 == 0 || (piVar3 = (int*)SharedArray<unsigned int>::operator[](
                                                        (SharedArray<unsigned int>*)this, (lVar6 + lVar5) - 1),
                                                    iVar4 = param_1, *piVar3 == 0)))) &&
                             (((int)local_40 == 0 ||
                               (piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this,
                                                                                     uVar1 - (long)(int)field_24),
                                iVar4 = param_1, *piVar3 == 0)))) &&
                            (((int)(field_24 - 1) <= (int)lVar5 ||
                              (piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this,
                                                                                    lVar6 + lVar5 + 1),
                               iVar4 = param_1, *piVar3 == 0)))) {
                            iVar4 = 0;
                            if ((int)local_40 < (int)(field_28 - 1)) {
                                piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this,
                                                                                     (long)(int)field_24 + uVar1);
                                iVar4 = 0;
                                if (*piVar3 != 0) {
                                    iVar4 = param_1;
                                }
                            }
                        }
                        piVar3 = (int*)SharedArray<unsigned int>::operator[](local_60, uVar1);
                        *piVar3 = iVar4;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < (int)field_24);
                    iVar4 = local_44 + (int)lVar5;
                }
                uVar2 = (int)local_40 + 1;
                local_40 = (ulong)uVar2;
            } while ((int)uVar2 < (int)field_28);
        }
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_60);
        local_60->~SharedArray();
    }

    // 0x10031d330, 224 bytes, placed by class name and debug map
    // Pix32::AddShadow(unsigned int)
    void Pix32::AddShadow(uint param_1) {
        uint uVar1;
        uint uVar2;
        bool bVar3;
        int* piVar4;
        uint* puVar5;
        ulong uVar6;
        int iVar7;
        long lVar8;
        uint local_34;

        uVar1 = field_28;
        local_34 = uVar1;
        if (1 < (int)uVar1) {
            do {
                local_34 = local_34 - 1;
                uVar2 = field_24;
                if (1 < (long)(int)uVar2) {
                    lVar8 = (long)(int)uVar2 + 1;
                    iVar7 = uVar2 * uVar1 + -2;
                    do {
                        uVar6 = (lVar8 + (int)(uVar2 * local_34)) - 2;
                        piVar4 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar6);
                        if ((*piVar4 == 0) && (piVar4 = (int*)SharedArray<unsigned int>::operator[](
                                                   (SharedArray<unsigned int>*)this, (long)(int)(iVar7 - field_24)),
                                               *piVar4 != 0)) {
                            puVar5 =
                                (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this, uVar6);
                            *puVar5 = param_1;
                        }
                        lVar8 = lVar8 + -1;
                        iVar7 = iVar7 + -1;
                    } while (2 < lVar8);
                }
                bVar3 = 2 < (int)uVar1;
                uVar1 = uVar1 - 1;
            } while (bVar3);
        }
    }

    // 0x10031d410, 304 bytes, placed by class name and debug map
    // Pix32::ScaleImageBounds(int)
    void Pix32::ScaleImageBounds(int param_1) {
        undefined4 uVar1;
        uint uVar2;
        undefined4* puVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        SharedArray<unsigned int> local_50[28];
        int local_34;

        if (0 < param_1) {
            Untrim(this);
            local_34 = param_1 * 2;
            SharedArray<unsigned int>::SharedArray(local_50,
                                                   (long)(int)((field_44 + local_34) * (field_40 + local_34)));
            uVar2 = field_44;
            if (0 < (int)uVar2) {
                uVar4 = field_40;
                iVar5 = 0;
                do {
                    uVar2 = field_40;
                    if (0 < (int)uVar2) {
                        iVar6 = 0;
                        do {
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)this, (long)(int)(uVar2 * iVar5 + iVar6));
                            uVar1 = *puVar3;
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                local_50, (long)(int)((field_40 + local_34) * iVar5 +
                                                      (uVar4 + param_1 * 2 + 1) * param_1 + iVar6));
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
            SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)local_50);
            local_50->~SharedArray();
        }
    }

} // namespace jag::oldscape::graphics

namespace jag {
    // 0x10031f0e0, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::jstring::PixfontGeneric>::type make_shared<oldscape::jstring::PixfontGeneric, Array<signed char, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>, SharedArray<unsigned int>, SharedArray<Array<unsigned char, eastl::allocator> > >(Array<signed char, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, SharedArray<unsigned int>&&, SharedArray<Array<unsigned char, eastl::allocator> >&&)
    jag* jag::make_shared<oldscape::jstring::PixfontGeneric, Array<signed char, eastl::allocator>,
                          Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                          Array<int, eastl::allocator>, SharedArray<unsigned int>,
                          SharedArray<Array<unsigned char, eastl::allocator>>>(Array* param_1, Array* param_2,
                                                                               Array* param_3, Array* param_4,
                                                                               Array* param_5, SharedArray* param_6,
                                                                               SharedArray* param_7) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        PixfontGeneric* local_40[2];

        pvVar1 = (void*)aligned_alloc(1224, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::jstring::PixfontGeneric, Array<signed char, eastl::allocator>,
                                        Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                                        Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                                        SharedArray<unsigned int>, SharedArray<Array<unsigned char, eastl::allocator>>>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::jstring::PixfontGeneric>, int,
                                   oldscape::jstring::PixfontGeneric*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
