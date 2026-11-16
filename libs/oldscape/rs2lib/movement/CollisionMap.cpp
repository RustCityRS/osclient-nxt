// libs/oldscape/rs2lib/movement/CollisionMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "CollisionMap.h"

namespace jag::oldscape::movement {
    // 0x10023bad0, 224 bytes, base-object constructor, placed by class name and debug map
    // CollisionMap::CollisionMap(int, int, int, int)
    void CollisionMap::CollisionMap(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        uint uVar1;
        Array<int, eastl::allocator>* this_01;
        ulong uVar2;

        this_00 = &field_16;
        new (this_00) Array<Array<int, eastl::allocator>, eastl::allocator>();
        field_0 = param_1 * 8 + -1;
        field_4 = param_3 * 8 + -1;
        field_8 = (param_2 - param_1) * 8 + 14;
        uVar1 = (param_4 - param_3) * 8 + 14;
        field_12 = uVar1;
        this_00->set_max_size((long)(int)uVar1, 3);
        if (0 < field_8) {
            uVar2 = 0;
            do {
                this_01 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar2);
                this_01->set_max_size((long)field_8, 3);
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)field_8);
        }
        Reset(this);
    }

    // 0x10023bbb0, 192 bytes, placed by class name and debug map
    // CollisionMap::Reset()
    void CollisionMap::Reset() {
        Array<int, eastl::allocator>* this_00;
        int* piVar1;
        ulong uVar2;
        ulong uVar3;
        ulong uVar4;
        int iVar5;

        if (0 < field_8) {
            uVar4 = 0;
            do {
                uVar2 = (ulong)field_12;
                if (0 < (int)field_12) {
                    uVar3 = 0;
                    do {
                        iVar5 = 16777215;
                        if ((uVar4 != 0) && (uVar3 != 0)) {
                            iVar5 =
                                ((long)uVar3 < (long)((int)uVar2 + -5) && (long)uVar4 < (long)field_8 + -5) + 16777215;
                        }
                        this_00 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, uVar4);
                        piVar1 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar3);
                        *piVar1 = iVar5;
                        uVar3 = uVar3 + 1;
                        uVar2 = (ulong)(int)field_12;
                    } while ((long)uVar3 < (long)uVar2);
                }
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)field_8);
        }
    }

    // 0x10023bc70, 16 bytes, complete-object constructor, placed by class name and debug map
    // CollisionMap::CollisionMap(int, int, int, int): jumps straight to the base-object constructor

    // 0x10023bc80, 160 bytes, base-object constructor, placed by class name and debug map
    // CollisionMap::CollisionMap(int, int)
    void CollisionMap::CollisionMap(int param_1, int param_2) {
        undefined1* this_00;
        Array<int, eastl::allocator>* this_01;
        ulong uVar1;

        this_00 = &field_16;
        new (this_00) Array<Array<int, eastl::allocator>, eastl::allocator>();
        field_0 = 0;
        field_4 = 0;
        field_8 = param_1;
        field_12 = param_2;
        this_00->set_max_size((long)param_2, 3);
        if (0 < field_8) {
            uVar1 = 0;
            do {
                this_01 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar1);
                this_01->set_max_size((long)field_8, 3);
                uVar1 = uVar1 + 1;
            } while ((long)uVar1 < (long)field_8);
        }
        Reset(this);
    }

    // 0x10023bd20, 16 bytes, complete-object constructor, placed by class name and debug map
    // CollisionMap::CollisionMap(int, int): jumps straight to the base-object constructor

    // 0x10023bd30, 128 bytes, placed by class name and debug map
    // CollisionMap::BlockAll()
    void CollisionMap::BlockAll() {
        Array<int, eastl::allocator>* this_00;
        undefined4* puVar1;
        ulong uVar2;
        ulong uVar3;

        if (0 < field_8) {
            uVar3 = 0;
            do {
                if (0 < (int)field_12) {
                    uVar2 = 0;
                    do {
                        this_00 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, uVar3);
                        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[](this_00, uVar2);
                        *puVar1 = 16777215;
                        uVar2 = uVar2 + 1;
                    } while ((long)uVar2 < (long)(int)field_12);
                }
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)field_8);
        }
    }

    // 0x10023bdb0, 1312 bytes, placed by class name and debug map
    // CollisionMap::AddWall(int, int, int, int, bool)
    void CollisionMap::AddWall(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        long lVar6;

        iVar3 = param_1 - field_0;
        iVar5 = param_2 - field_4;
        if (param_3 == 0) {
            iVar4 = iVar3;
            iVar2 = iVar5;
            switch (param_4) {
            case 0:
                AddCMap(this, iVar3, iVar5, 128);
                iVar4 = iVar3 + -1;
                iVar1 = 8;
                break;
            case 1:
                AddCMap(this, iVar3, iVar5, 2);
                iVar1 = 32;
                iVar2 = iVar5 + 1;
                break;
            case 2:
                AddCMap(this, iVar3, iVar5, 8);
                iVar1 = 128;
                iVar4 = iVar3 + 1;
                break;
            case 3:
                AddCMap(this, iVar3, iVar5, 32);
                iVar1 = 2;
                iVar2 = iVar5 + -1;
                break;
            default:
                goto switchD_10023bdfe_default;
            }
            AddCMap(this, iVar4, iVar2, iVar1);
        }
    switchD_10023bdfe_default:
        if (((param_3 & 4294967293U) == 1) && ((uint)param_4 < 4)) {
            lVar6 = (long)param_4;
            iVar4 = *(int*)(&DAT_100d3fe90 + lVar6 * 4);
            AddCMap(this, iVar3, iVar5, *(int*)(&DAT_100d3fe80 + lVar6 * 4));
            AddCMap(this, *(int*)(&DAT_100d3feb0 + lVar6 * 4) + iVar3, *(int*)(&DAT_100d3fec0 + lVar6 * 4) + iVar5,
                    iVar4);
        }
        if (param_3 == 2) {
            iVar4 = iVar5;
            iVar2 = iVar3;
            switch (param_4) {
            case 0:
                AddCMap(this, iVar3, iVar5, 130);
                AddCMap(this, iVar3 + -1, iVar5, 8);
                iVar4 = iVar5 + 1;
                iVar1 = 32;
                break;
            case 1:
                AddCMap(this, iVar3, iVar5, 10);
                AddCMap(this, iVar3, iVar5 + 1, 32);
                iVar1 = 128;
                iVar2 = iVar3 + 1;
                break;
            case 2:
                AddCMap(this, iVar3, iVar5, 40);
                AddCMap(this, iVar3 + 1, iVar5, 128);
                iVar1 = 2;
                iVar4 = iVar5 + -1;
                break;
            case 3:
                AddCMap(this, iVar3, iVar5, 160);
                AddCMap(this, iVar3, iVar5 + -1, 2);
                iVar1 = 8;
                iVar2 = iVar3 + -1;
                break;
            default:
                goto switchD_10023bf3d_default;
            }
            AddCMap(this, iVar2, iVar4, iVar1);
        }
    switchD_10023bf3d_default:
        if (!param_5) {
            return;
        }
        if (param_3 == 0) {
            iVar4 = iVar3;
            iVar2 = iVar5;
            switch (param_4) {
            case 0:
                AddCMap(this, iVar3, iVar5, 65536);
                iVar4 = iVar3 + -1;
                iVar1 = 4096;
                break;
            case 1:
                AddCMap(this, iVar3, iVar5, 1024);
                iVar1 = 16384;
                iVar2 = iVar5 + 1;
                break;
            case 2:
                AddCMap(this, iVar3, iVar5, 4096);
                iVar1 = 65536;
                iVar4 = iVar3 + 1;
                break;
            case 3:
                AddCMap(this, iVar3, iVar5, 16384);
                iVar1 = 1024;
                iVar2 = iVar5 + -1;
                break;
            default:
                goto switchD_10023c057_default;
            }
            AddCMap(this, iVar4, iVar2, iVar1);
        }
    switchD_10023c057_default:
        if (((param_3 & 4294967293U) == 1) && ((uint)param_4 < 4)) {
            lVar6 = (long)param_4;
            iVar4 = *(int*)(&DAT_100d3fed0 + lVar6 * 4);
            AddCMap(this, iVar3, iVar5, *(int*)(&DAT_100d3fea0 + lVar6 * 4));
            AddCMap(this, *(int*)(&DAT_100d3feb0 + lVar6 * 4) + iVar3, *(int*)(&DAT_100d3fec0 + lVar6 * 4) + iVar5,
                    iVar4);
        }
        if (param_3 == 2) {
            switch (param_4) {
            case 0:
                AddCMap(this, iVar3, iVar5, 66560);
                AddCMap(this, iVar3 + -1, iVar5, 4096);
                iVar5 = iVar5 + 1;
                iVar4 = 16384;
                break;
            case 1:
                AddCMap(this, iVar3, iVar5, 5120);
                AddCMap(this, iVar3, iVar5 + 1, 16384);
                iVar3 = iVar3 + 1;
                iVar4 = 65536;
                break;
            case 2:
                AddCMap(this, iVar3, iVar5, 20480);
                AddCMap(this, iVar3 + 1, iVar5, 65536);
                iVar5 = iVar5 + -1;
                iVar4 = 1024;
                break;
            case 3:
                AddCMap(this, iVar3, iVar5, 81920);
                AddCMap(this, iVar3, iVar5 + -1, 1024);
                iVar3 = iVar3 + -1;
                iVar4 = 4096;
                break;
            default:
                goto switchD_10023c184_default;
            }
            AddCMap(this, iVar3, iVar5, iVar4);
        }
    switchD_10023c184_default:
    }

    // 0x10023c2d0, 48 bytes, placed by class name and debug map
    // CollisionMap::AddCMap(int, int, int)
    void CollisionMap::AddCMap(int param_1, int param_2, int param_3) {
        Array<int, eastl::allocator>* this_00;
        uint* puVar1;

        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1);
        puVar1 = (uint*)Array<int, eastl::allocator>::operator[](this_00, (long)param_2);
        *puVar1 = *puVar1 | param_3;
    }

    // 0x10023c300, 208 bytes, placed by class name and debug map
    // CollisionMap::AddLoc(int, int, int, int, int, bool)
    void CollisionMap::AddLoc(int param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        iVar1 = param_3;
        if ((param_5 & 4294967293U) == 1) {
            iVar1 = param_4;
            param_4 = param_3;
        }
        if (0 < iVar1) {
            iVar3 = param_1 - field_0;
            iVar2 = param_2 - field_4;
            iVar1 = iVar1 + iVar3;
            do {
                if (((-1 < iVar3) && (iVar3 < field_8)) && (iVar4 = iVar2, 0 < param_4)) {
                    do {
                        if ((-1 < iVar4) && (iVar4 < (int)field_12)) {
                            AddCMap(this, iVar3, iVar4, (uint)param_6 << 17 | 256);
                        }
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < iVar2 + param_4);
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < iVar1);
        }
    }

    // 0x10023c3d0, 192 bytes, placed by class name and debug map
    // CollisionMap::AddLoc(int, int, int, int, bool)
    void CollisionMap::AddLoc(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined3 in_register_00000089;
        int iVar4;

        if (0 < param_3) {
            iVar3 = param_1 - field_0;
            iVar2 = param_2 - field_4;
            iVar1 = param_3 + iVar3;
            do {
                if (((-1 < iVar3) && (iVar3 < field_8)) && (iVar4 = iVar2, 0 < param_4)) {
                    do {
                        if ((-1 < iVar4) && (iVar4 < (int)field_12)) {
                            AddCMap(this, iVar3, iVar4, CONCAT31(in_register_00000089, param_5) << 17 | 256);
                        }
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < iVar2 + param_4);
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < iVar1);
        }
    }

    // 0x10023c490, 64 bytes, placed by class name and debug map
    // CollisionMap::BlockGround(int, int)
    void CollisionMap::BlockGround(int param_1, int param_2) {
        int iVar1;
        Array<int, eastl::allocator>* this_00;
        long lVar2;

        iVar1 = field_4;
        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
        lVar2 = Array<int, eastl::allocator>::operator[](this_00, (long)param_2 - (long)iVar1);
        *(byte*)(lVar2 + 2) = *(byte*)(lVar2 + 2) | 32;
    }

    // 0x10023c4d0, 64 bytes, placed by class name and debug map
    // CollisionMap::BlockGroundDecor(int, int)
    void CollisionMap::BlockGroundDecor(int param_1, int param_2) {
        int iVar1;
        Array<int, eastl::allocator>* this_00;
        long lVar2;

        iVar1 = field_4;
        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
        lVar2 = Array<int, eastl::allocator>::operator[](this_00, (long)param_2 - (long)iVar1);
        *(byte*)(lVar2 + 2) = *(byte*)(lVar2 + 2) | 4;
    }

    // 0x10023c510, 64 bytes, placed by class name and debug map
    // CollisionMap::RoofGround(int, int)
    void CollisionMap::RoofGround(int param_1, int param_2) {
        int iVar1;
        Array<int, eastl::allocator>* this_00;
        long lVar2;

        iVar1 = field_4;
        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
        lVar2 = Array<int, eastl::allocator>::operator[](this_00, (long)param_2 - (long)iVar1);
        *(byte*)(lVar2 + 2) = *(byte*)(lVar2 + 2) | 16;
    }

    // 0x10023c550, 64 bytes, placed by class name and debug map
    // CollisionMap::MultiwayGround(int, int)
    void CollisionMap::MultiwayGround(int param_1, int param_2) {
        int iVar1;
        Array<int, eastl::allocator>* this_00;
        long lVar2;

        iVar1 = field_4;
        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
        lVar2 = Array<int, eastl::allocator>::operator[](this_00, (long)param_2 - (long)iVar1);
        *(byte*)(lVar2 + 2) = *(byte*)(lVar2 + 2) | 64;
    }

    // 0x10023c590, 64 bytes, placed by class name and debug map
    // CollisionMap::FreemapGround(int, int)
    void CollisionMap::FreemapGround(int param_1, int param_2) {
        int iVar1;
        Array<int, eastl::allocator>* this_00;
        long lVar2;

        iVar1 = field_4;
        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
        lVar2 = Array<int, eastl::allocator>::operator[](this_00, (long)param_2 - (long)iVar1);
        *(byte*)(lVar2 + 2) = *(byte*)(lVar2 + 2) | 128;
    }

    // 0x10023c5d0, 1312 bytes, placed by class name and debug map
    // CollisionMap::DelWall(int, int, int, int, bool)
    void CollisionMap::DelWall(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        long lVar6;

        iVar3 = param_1 - field_0;
        iVar5 = param_2 - field_4;
        if (param_3 == 0) {
            iVar4 = iVar3;
            iVar2 = iVar5;
            switch (param_4) {
            case 0:
                RemCMap(this, iVar3, iVar5, 128);
                iVar4 = iVar3 + -1;
                iVar1 = 8;
                break;
            case 1:
                RemCMap(this, iVar3, iVar5, 2);
                iVar1 = 32;
                iVar2 = iVar5 + 1;
                break;
            case 2:
                RemCMap(this, iVar3, iVar5, 8);
                iVar1 = 128;
                iVar4 = iVar3 + 1;
                break;
            case 3:
                RemCMap(this, iVar3, iVar5, 32);
                iVar1 = 2;
                iVar2 = iVar5 + -1;
                break;
            default:
                goto switchD_10023c61e_default;
            }
            RemCMap(this, iVar4, iVar2, iVar1);
        }
    switchD_10023c61e_default:
        if (((param_3 & 4294967293U) == 1) && ((uint)param_4 < 4)) {
            lVar6 = (long)param_4;
            iVar4 = *(int*)(&DAT_100d3fe90 + lVar6 * 4);
            RemCMap(this, iVar3, iVar5, *(int*)(&DAT_100d3fe80 + lVar6 * 4));
            RemCMap(this, *(int*)(&DAT_100d3feb0 + lVar6 * 4) + iVar3, *(int*)(&DAT_100d3fec0 + lVar6 * 4) + iVar5,
                    iVar4);
        }
        if (param_3 == 2) {
            iVar4 = iVar5;
            iVar2 = iVar3;
            switch (param_4) {
            case 0:
                RemCMap(this, iVar3, iVar5, 130);
                RemCMap(this, iVar3 + -1, iVar5, 8);
                iVar4 = iVar5 + 1;
                iVar1 = 32;
                break;
            case 1:
                RemCMap(this, iVar3, iVar5, 10);
                RemCMap(this, iVar3, iVar5 + 1, 32);
                iVar1 = 128;
                iVar2 = iVar3 + 1;
                break;
            case 2:
                RemCMap(this, iVar3, iVar5, 40);
                RemCMap(this, iVar3 + 1, iVar5, 128);
                iVar1 = 2;
                iVar4 = iVar5 + -1;
                break;
            case 3:
                RemCMap(this, iVar3, iVar5, 160);
                RemCMap(this, iVar3, iVar5 + -1, 2);
                iVar1 = 8;
                iVar2 = iVar3 + -1;
                break;
            default:
                goto switchD_10023c75d_default;
            }
            RemCMap(this, iVar2, iVar4, iVar1);
        }
    switchD_10023c75d_default:
        if (!param_5) {
            return;
        }
        if (param_3 == 0) {
            iVar4 = iVar3;
            iVar2 = iVar5;
            switch (param_4) {
            case 0:
                RemCMap(this, iVar3, iVar5, 65536);
                iVar4 = iVar3 + -1;
                iVar1 = 4096;
                break;
            case 1:
                RemCMap(this, iVar3, iVar5, 1024);
                iVar1 = 16384;
                iVar2 = iVar5 + 1;
                break;
            case 2:
                RemCMap(this, iVar3, iVar5, 4096);
                iVar1 = 65536;
                iVar4 = iVar3 + 1;
                break;
            case 3:
                RemCMap(this, iVar3, iVar5, 16384);
                iVar1 = 1024;
                iVar2 = iVar5 + -1;
                break;
            default:
                goto switchD_10023c877_default;
            }
            RemCMap(this, iVar4, iVar2, iVar1);
        }
    switchD_10023c877_default:
        if (((param_3 & 4294967293U) == 1) && ((uint)param_4 < 4)) {
            lVar6 = (long)param_4;
            iVar4 = *(int*)(&DAT_100d3fed0 + lVar6 * 4);
            RemCMap(this, iVar3, iVar5, *(int*)(&DAT_100d3fea0 + lVar6 * 4));
            RemCMap(this, *(int*)(&DAT_100d3feb0 + lVar6 * 4) + iVar3, *(int*)(&DAT_100d3fec0 + lVar6 * 4) + iVar5,
                    iVar4);
        }
        if (param_3 == 2) {
            switch (param_4) {
            case 0:
                RemCMap(this, iVar3, iVar5, 66560);
                RemCMap(this, iVar3 + -1, iVar5, 4096);
                iVar5 = iVar5 + 1;
                iVar4 = 16384;
                break;
            case 1:
                RemCMap(this, iVar3, iVar5, 5120);
                RemCMap(this, iVar3, iVar5 + 1, 16384);
                iVar3 = iVar3 + 1;
                iVar4 = 65536;
                break;
            case 2:
                RemCMap(this, iVar3, iVar5, 20480);
                RemCMap(this, iVar3 + 1, iVar5, 65536);
                iVar5 = iVar5 + -1;
                iVar4 = 1024;
                break;
            case 3:
                RemCMap(this, iVar3, iVar5, 81920);
                RemCMap(this, iVar3, iVar5 + -1, 1024);
                iVar3 = iVar3 + -1;
                iVar4 = 4096;
                break;
            default:
                goto switchD_10023c9a4_default;
            }
            RemCMap(this, iVar3, iVar5, iVar4);
        }
    switchD_10023c9a4_default:
    }

    // 0x10023caf0, 48 bytes, placed by class name and debug map
    // CollisionMap::RemCMap(int, int, int)
    void CollisionMap::RemCMap(int param_1, int param_2, int param_3) {
        Array<int, eastl::allocator>* this_00;
        uint* puVar1;

        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1);
        puVar1 = (uint*)Array<int, eastl::allocator>::operator[](this_00, (long)param_2);
        *puVar1 = *puVar1 & ~param_3;
    }

    // 0x10023cb20, 208 bytes, placed by class name and debug map
    // CollisionMap::DelLoc(int, int, int, int, int, bool)
    void CollisionMap::DelLoc(int param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        iVar1 = param_3;
        if ((param_5 & 4294967293U) == 1) {
            iVar1 = param_4;
            param_4 = param_3;
        }
        if (0 < iVar1) {
            iVar3 = param_1 - field_0;
            iVar2 = param_2 - field_4;
            iVar1 = iVar1 + iVar3;
            do {
                if (((-1 < iVar3) && (iVar3 < field_8)) && (iVar4 = iVar2, 0 < param_4)) {
                    do {
                        if ((-1 < iVar4) && (iVar4 < (int)field_12)) {
                            RemCMap(this, iVar3, iVar4, (uint)param_6 << 17 | 256);
                        }
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < iVar2 + param_4);
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < iVar1);
        }
    }

    // 0x10023cbf0, 64 bytes, placed by class name and debug map
    // CollisionMap::UnblockGroundDecor(int, int)
    void CollisionMap::UnblockGroundDecor(int param_1, int param_2) {
        int iVar1;
        Array<int, eastl::allocator>* this_00;
        long lVar2;

        iVar1 = field_4;
        this_00 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
        lVar2 = Array<int, eastl::allocator>::operator[](this_00, (long)param_2 - (long)iVar1);
        *(byte*)(lVar2 + 2) = *(byte*)(lVar2 + 2) & 251;
    }

    // 0x10023cc30, 4176 bytes, placed by class name and debug map
    // CollisionMap::TestWall(int, int, int, int, int, int, int)
    ulong CollisionMap::TestWall(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                 int param_7) {
        bool bVar1;
        uint3 uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        Array<int, eastl::allocator>* pAVar7;
        byte* pbVar8;
        char* pcVar9;
        uint* puVar10;
        int iVar11;
        uint uVar12;
        CollisionMap* pCVar13;
        uint uVar14;
        int iVar15;
        bool bVar16;
        int iVar17;
        CollisionMap* unaff_R15;
        undefined7 uVar18;

        uVar18 = (undefined7)((ulong)unaff_R15 >> 8);
        if (param_3 == 1) {
            if ((param_1 == param_4) && (unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1), param_2 == param_5))
                goto LAB_10023dc26;
        } else if ((((param_1 <= param_4) && (param_4 < param_3 + param_1)) && (param_5 <= param_1)) &&
                   (unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1), 0 < param_3))
            goto LAB_10023dc26;
        uVar12 = param_1 - field_0;
        pCVar13 = (CollisionMap*)(ulong)uVar12;
        uVar14 = param_2 - field_4;
        iVar15 = param_4 - field_0;
        iVar17 = param_5 - field_4;
        uVar18 = (undefined7)((ulong)unaff_R15 >> 8);
        if (param_3 == 1) {
            if (param_6 == 9) {
                if ((param_1 == param_4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    pbVar8 = (byte*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = (CollisionMap*)CONCAT71((uint7)(uint3)(uVar14 >> 8), 1);
                    if ((*pbVar8 & 32) == 0)
                        goto LAB_10023dc26;
                }
                uVar2 = (uint3)((uint)param_2 >> 8);
                if ((param_1 == param_4) && (uVar14 == iVar17 - 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    pbVar8 = (byte*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = (CollisionMap*)CONCAT71((uint7)uVar2, 1);
                    if ((*pbVar8 & 2) == 0)
                        goto LAB_10023dc26;
                }
                if ((uVar12 == iVar15 - 1U) && (param_2 == param_5)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    pbVar8 = (byte*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = (CollisionMap*)CONCAT71((uint7)uVar2, 1);
                    if ((*pbVar8 & 8) == 0)
                        goto LAB_10023dc26;
                }
                if ((uVar12 == iVar15 + 1U) && (param_2 == param_5)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    pcVar9 = (char*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = (CollisionMap*)CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                    if (-1 < *pcVar9)
                        goto LAB_10023dc26;
                }
                goto LAB_10023dc1e;
            }
            if (param_6 != 2) {
                if (param_6 != 0)
                    goto LAB_10023dc1e;
                switch (param_7) {
                case 0:
                    uVar6 = iVar15 - 1;
                    break;
                case 1:
                    if (param_1 == param_4) {
                        uVar6 = iVar17 + 1;
                    LAB_10023cee6:
                        unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                        if (uVar14 == uVar6)
                            goto LAB_10023dc26;
                    }
                    goto LAB_10023ceef;
                case 2:
                    uVar6 = iVar15 + 1;
                    break;
                case 3:
                    if (param_1 == param_4) {
                        uVar6 = iVar17 - 1;
                        goto LAB_10023cee6;
                    }
                LAB_10023ceef:
                    unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                    if ((uVar12 == iVar15 - 1U) && (param_2 == param_5)) {
                        pAVar7 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                        puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                        if ((*puVar10 & 19136776) == 0)
                            goto LAB_10023dc26;
                    }
                    if ((uVar12 != iVar15 + 1U) || (param_2 != param_5))
                        goto LAB_10023dc1e;
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    uVar12 = *puVar10 & 19136896;
                    goto joined_r0x00010023cf96;
                default:
                    goto LAB_10023dc1e;
                }
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                if ((uVar12 == uVar6) && (param_2 == param_5))
                    goto LAB_10023dc26;
                if ((param_1 == param_4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    if ((*puVar10 & 19136800) == 0)
                        goto LAB_10023dc26;
                }
                if ((param_1 != param_4) || (uVar14 != iVar17 - 1U))
                    goto LAB_10023dc1e;
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                uVar12 = *puVar10 & 19136770;
            joined_r0x00010023cf96:
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                goto joined_r0x00010023cf96;
            }
            switch (param_7) {
            case 0:
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                if (((uVar12 == iVar15 - 1U) && (param_2 == param_5)) ||
                    ((param_1 == param_4 && (uVar14 == iVar17 + 1U))))
                    goto LAB_10023dc26;
                if ((uVar12 == iVar15 + 1U) && (param_2 == param_5)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    if ((*puVar10 & 19136896) == 0)
                        goto LAB_10023dc26;
                }
                if (param_1 != param_4)
                    break;
            joined_r0x00010023d10e:
                if (uVar14 != iVar17 - 1U)
                    break;
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                uVar12 = *puVar10 & 19136770;
                goto joined_r0x00010023cf96;
            case 1:
                if ((uVar12 == iVar15 - 1U) && (param_2 == param_5)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = pCVar13;
                    if ((*puVar10 & 19136776) == 0)
                        goto LAB_10023dc23;
                }
                unaff_R15 = (CollisionMap*)CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                if (((param_1 == param_4) && (uVar14 == iVar17 + 1U)) ||
                    ((uVar12 == iVar15 + 1U && (param_2 == param_5))))
                    goto LAB_10023dc26;
                if (param_1 == param_4)
                    goto joined_r0x00010023d10e;
                break;
            case 2:
                if ((uVar12 == iVar15 - 1U) && (param_2 == param_5)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = pCVar13;
                    if ((*puVar10 & 19136776) == 0)
                        goto LAB_10023dc23;
                }
                if ((param_1 == param_4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    unaff_R15 = pCVar13;
                    if ((*puVar10 & 19136800) == 0)
                        goto LAB_10023dc23;
                }
                unaff_R15 = (CollisionMap*)CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                if ((uVar12 == iVar15 + 1U) && (param_2 == param_5))
                    goto LAB_10023dc26;
                goto LAB_10023d30b;
            case 3:
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                if ((uVar12 == iVar15 - 1U) && (param_2 == param_5))
                    goto LAB_10023dc26;
                if ((param_1 == param_4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    if ((*puVar10 & 19136800) == 0)
                        goto LAB_10023dc26;
                }
                if ((uVar12 == iVar15 + 1U) && (param_2 == param_5)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    if ((*puVar10 & 19136896) == 0)
                        goto LAB_10023dc26;
                }
            LAB_10023d30b:
                if ((param_1 == param_4) && (uVar14 == iVar17 - 1U))
                    goto LAB_10023dc26;
            }
            goto LAB_10023dc1e;
        }
        iVar11 = uVar12 + param_3;
        iVar3 = uVar12 + param_3 + -1;
        iVar4 = uVar14 + param_3;
        iVar5 = uVar14 + param_3 + -1;
        if (param_6 == 9) {
            if ((iVar15 < iVar11 && param_1 <= param_4) && (uVar14 == iVar17 + 1U)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                unaff_R15 = this;
                if ((*puVar10 & 19136800) == 0)
                    goto LAB_10023dc23;
            }
            if ((iVar15 < iVar11 && param_1 <= param_4) && uVar14 == iVar17 - param_3) {
                unaff_R15 = (CollisionMap*)(ulong)(uint)param_2;
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar5);
                if ((*puVar10 & 19136770) == 0)
                    goto LAB_10023dc23;
            }
            if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar3);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                unaff_R15 = pCVar13;
                if ((*puVar10 & 19136776) == 0)
                    goto LAB_10023dc23;
            }
            if (((uVar12 == iVar15 + 1U) && (param_2 <= param_5)) && (iVar17 < iVar4)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                if ((*puVar10 & 19136896) == 0)
                    goto LAB_10023dc23;
            }
            goto LAB_10023dc1e;
        }
        if (param_6 != 2) {
            if (param_6 != 0)
                goto LAB_10023dc1e;
            switch (param_7) {
            case 0:
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4))
                    goto LAB_10023dc26;
                bVar16 = iVar15 < iVar11 && param_1 <= param_4;
                if ((iVar15 < iVar11 && param_1 <= param_4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    uVar12 = *puVar10;
                joined_r0x00010023d52a:
                    unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                    if ((uVar12 & 19136800) == 0)
                        goto LAB_10023dc26;
                }
                break;
            case 1:
                if ((param_1 <= param_4) && (iVar15 < iVar11)) {
                    uVar6 = iVar17 + 1;
                LAB_10023d5b1:
                    unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                    if (uVar14 == uVar6)
                        goto LAB_10023dc26;
                }
                goto LAB_10023d5ba;
            case 2:
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                if (((uVar12 == iVar15 + 1U) && (param_2 <= param_5)) && (iVar17 < iVar4))
                    goto LAB_10023dc26;
                bVar16 = iVar15 < iVar11 && param_1 <= param_4;
                if ((iVar15 < iVar11 && param_1 <= param_4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                    uVar12 = *puVar10;
                    goto joined_r0x00010023d52a;
                }
                break;
            case 3:
                if ((param_1 <= param_4) && (iVar15 < iVar11)) {
                    uVar6 = iVar17 - param_3;
                    goto LAB_10023d5b1;
                }
            LAB_10023d5ba:
                unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
                if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4)) {
                    pAVar7 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar3);
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                    if ((*puVar10 & 19136776) == 0)
                        goto LAB_10023dc26;
                }
                if (((uVar12 != iVar15 + 1U) || (param_5 < param_2)) || (iVar4 <= iVar17))
                    goto LAB_10023dc1e;
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                uVar12 = *puVar10 & 19136896;
                goto joined_r0x00010023cf96;
            default:
                goto LAB_10023dc1e;
            }
            unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
            if ((bool)(bVar16 & uVar14 == iVar17 - param_3)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar5);
                uVar12 = *puVar10;
            joined_r0x00010023d590:
                uVar12 = uVar12 & 19136770;
            joined_r0x00010023cf96:
                if (uVar12 == 0)
                    goto LAB_10023dc26;
            }
            goto LAB_10023dc1e;
        }
        switch (param_7) {
        case 0:
            unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
            if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4))
                goto LAB_10023dc26;
            if ((iVar15 < iVar11 && param_1 <= param_4) && (uVar14 == iVar17 + 1U))
                goto LAB_10023dc26;
            if ((uVar12 == iVar15 + 1U) && ((param_2 <= param_5 && (iVar17 < iVar4)))) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                if ((*puVar10 & 19136896) == 0)
                    goto LAB_10023dc26;
            }
            if ((iVar15 < iVar11 && param_1 <= param_4) && uVar14 == iVar17 - param_3)
                goto LAB_10023d871;
            break;
        case 1:
            if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4)) {
                unaff_R15 = (CollisionMap*)(ulong)(uint)param_4;
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar3);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                if ((*puVar10 & 19136776) == 0) {
                LAB_10023dc23:
                    unaff_R15 = (CollisionMap*)CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                    goto LAB_10023dc26;
                }
            }
            unaff_R15 = (CollisionMap*)CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
            if (((iVar15 < iVar11 && param_1 <= param_4) && (uVar14 == iVar17 + 1U)) ||
                ((uVar12 == iVar15 + 1U && ((param_2 <= param_5 && (iVar17 < iVar4))))))
                goto LAB_10023dc26;
            if ((iVar15 >= iVar11 || param_1 > param_4) || uVar14 != iVar17 - param_3)
                break;
        LAB_10023d871:
            pAVar7 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
            puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar5);
            uVar12 = *puVar10;
            goto joined_r0x00010023d590;
        case 2:
            if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4)) {
                unaff_R15 = (CollisionMap*)(ulong)(uint)param_4;
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar3);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                if ((*puVar10 & 19136776) == 0)
                    goto LAB_10023dc23;
            }
            bVar1 = param_1 <= param_4;
            pCVar13 = (CollisionMap*)CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar1);
            bVar16 = iVar15 < iVar11 && bVar1;
            if ((iVar15 < iVar11 && bVar1) && (uVar14 == iVar17 + 1U)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                unaff_R15 = (CollisionMap*)(ulong)uVar14;
                pCVar13 = (CollisionMap*)(ulong)uVar14;
                if ((*puVar10 & 19136800) == 0)
                    goto LAB_10023dc23;
            }
            unaff_R15 = (CollisionMap*)CONCAT71((int7)((ulong)pCVar13 >> 8), 1);
            if (((uVar12 == iVar15 + 1U) && (param_2 <= param_5)) && (iVar17 < iVar4))
                goto LAB_10023dc26;
            goto LAB_10023dabe;
        case 3:
            unaff_R15 = (CollisionMap*)CONCAT71(uVar18, 1);
            if (((uVar12 == iVar15 - param_3) && (param_2 <= param_5)) && (iVar17 < iVar4))
                goto LAB_10023dc26;
            bVar16 = iVar15 < iVar11 && param_1 <= param_4;
            if ((iVar15 < iVar11 && param_1 <= param_4) && (uVar14 == iVar17 + 1U)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar15);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)(int)uVar14);
                if ((*puVar10 & 19136800) == 0)
                    goto LAB_10023dc26;
            }
            if (((uVar12 == iVar15 + 1U) && (param_2 <= param_5)) && (iVar17 < iVar4)) {
                pAVar7 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar12);
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](pAVar7, (long)iVar17);
                if ((*puVar10 & 19136896) == 0)
                    goto LAB_10023dc26;
            }
        LAB_10023dabe:
            if ((bool)(bVar16 & uVar14 == iVar17 - param_3))
                goto LAB_10023dc26;
        }
    LAB_10023dc1e:
        unaff_R15 = (CollisionMap*)0;
    LAB_10023dc26:
        return (ulong)unaff_R15 & 4294967295;
    }

    // 0x10023dc80, 2320 bytes, placed by class name and debug map
    // CollisionMap::TestWDecor(int, int, int, int, int, int, int)
    undefined8 CollisionMap::TestWDecor(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                        int param_7) {
        byte bVar1;
        Array<int, eastl::allocator>* pAVar2;
        byte* pbVar3;
        char* pcVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;

        if (param_3 == 1) {
            if ((param_1 == param_4) && (param_2 == param_5)) {
                return 1;
            }
        } else if ((((param_1 <= param_4) && (param_4 < param_3 + param_1)) && (param_2 <= param_5)) && (0 < param_3)) {
            return 1;
        }
        iVar12 = param_1 - field_0;
        iVar11 = param_2 - field_4;
        iVar9 = param_4 - field_0;
        iVar10 = param_5 - field_4;
        if (param_3 != 1) {
            iVar5 = iVar12 + param_3;
            iVar6 = iVar12 + param_3 + -1;
            iVar8 = iVar11 + param_3;
            iVar7 = iVar11 + param_3 + -1;
            if ((param_6 & 4294967294U) != 6)
                goto switchD_10023ddeb_default;
            if (param_6 == 7) {
                param_7 = param_7 + 2U & 3;
            }
            switch (param_7) {
            case 0:
                if (((iVar12 == iVar9 + 1) && (param_2 <= param_5)) && (iVar10 < iVar8)) {
                    pAVar2 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                    pcVar4 = (char*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar10);
                    if (-1 < *pcVar4) {
                        return 1;
                    }
                }
                break;
            case 1:
                if (((iVar12 == iVar9 - param_3) && (param_2 <= param_5)) && (iVar10 < iVar8)) {
                    pAVar2 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar6);
                    pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar10);
                    if ((*pbVar3 & 8) == 0) {
                        return 1;
                    }
                }
                break;
            case 2:
                if (((iVar12 == iVar9 - param_3) && (param_2 <= param_5)) && (iVar10 < iVar8)) {
                    pAVar2 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar6);
                    pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar10);
                    if ((*pbVar3 & 8) == 0) {
                        return 1;
                    }
                }
                goto LAB_10023e370;
            case 3:
                if (((iVar12 == iVar9 + 1) && (param_2 <= param_5)) && (iVar10 < iVar8)) {
                    pAVar2 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                    pcVar4 = (char*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar10);
                    if (-1 < *pcVar4) {
                        return 1;
                    }
                }
            LAB_10023e370:
                if (((param_1 <= param_4) && (iVar9 < iVar5)) && (iVar11 == iVar10 + 1)) {
                    pAVar2 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar9);
                    pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                    bVar1 = *pbVar3 & 32;
                    goto joined_r0x00010023e3e1;
                }
            default:
                goto switchD_10023ddeb_default;
            }
            if (((param_1 <= param_4) && (iVar9 < iVar5)) && (iVar11 == iVar10 - param_3)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar9);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar7);
                bVar1 = *pbVar3 & 2;
            joined_r0x00010023e3e1:
                if (bVar1 == 0) {
                    return 1;
                }
            }
        switchD_10023ddeb_default:
            if (param_6 != 8) {
                return 0;
            }
            if ((iVar9 < iVar5 && param_1 <= param_4) && (iVar11 == iVar10 + 1)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar9);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if ((*pbVar3 & 32) == 0) {
                    return 1;
                }
            }
            if ((iVar9 < iVar5 && param_1 <= param_4) && iVar11 == iVar10 - param_3) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar9);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar7);
                if ((*pbVar3 & 2) == 0) {
                    return 1;
                }
            }
            if (((iVar12 == iVar9 - param_3) && (param_2 <= param_5)) && (iVar10 < iVar8)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar6);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar10);
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            if (iVar12 != iVar9 + 1) {
                return 0;
            }
            if (param_5 < param_2) {
                return 0;
            }
            if (iVar8 <= iVar10) {
                return 0;
            }
            pAVar2 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
            goto LAB_10023e544;
        }
        if ((param_6 & 4294967294U) != 6)
            goto switchD_10023dd2f_default;
        if (param_6 == 7) {
            param_7 = param_7 + 2U & 3;
        }
        switch (param_7) {
        case 0:
            if ((iVar12 == iVar9 + 1) && (param_2 == param_5)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pcVar4 = (char*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if (-1 < *pcVar4) {
                    return 1;
                }
            }
            break;
        case 1:
            if ((iVar12 == iVar9 + -1) && (param_2 == param_5)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            break;
        case 2:
            if ((iVar12 == iVar9 + -1) && (param_2 == param_5)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            goto LAB_10023dff2;
        case 3:
            if ((iVar12 == iVar9 + 1) && (param_2 == param_5)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pcVar4 = (char*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if (-1 < *pcVar4) {
                    return 1;
                }
            }
        LAB_10023dff2:
            if ((param_1 == param_4) && (iVar11 == iVar10 + 1)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                bVar1 = *pbVar3 & 32;
                goto joined_r0x00010023e047;
            }
        default:
            goto switchD_10023dd2f_default;
        }
        if ((param_1 == param_4) && (iVar11 == iVar10 + -1)) {
            pAVar2 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
            pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
            bVar1 = *pbVar3 & 2;
        joined_r0x00010023e047:
            if (bVar1 == 0) {
                return 1;
            }
        }
    switchD_10023dd2f_default:
        if (param_6 == 8) {
            if ((param_1 == param_4) && (iVar11 == iVar10 + 1)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if ((*pbVar3 & 32) == 0) {
                    return 1;
                }
            }
            if ((param_1 == param_4) && (iVar11 == iVar10 + -1)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if ((*pbVar3 & 2) == 0) {
                    return 1;
                }
            }
            if ((iVar12 == iVar9 + -1) && (param_2 == param_5)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                pbVar3 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar11);
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            if ((iVar12 == iVar9 + 1) && (param_2 == param_5)) {
                pAVar2 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar12);
                iVar10 = iVar11;
            LAB_10023e544:
                pcVar4 = (char*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar10);
                if (-1 < *pcVar4) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x10023e590, 544 bytes, placed by class name and debug map
    // CollisionMap::TestLoc(int, int, int, int, int, int, int, int)
    ulong CollisionMap::TestLoc(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8) {
        char cVar1;
        uint uVar2;
        Array<int, eastl::allocator>* pAVar3;
        uint* puVar4;
        char* pcVar5;
        ulong uVar6;
        long lVar7;
        int iVar8;
        int iVar9;

        uVar6 = (ulong)(uint)param_3;
        if (param_3 < 2) {
            iVar8 = param_6 + param_4;
            iVar9 = param_7 + param_5;
            uVar6 = CONCAT71((uint7)(uint3)((uint)param_3 >> 8), 1);
            if ((((param_1 < param_4) || (iVar8 <= param_1)) || (param_2 < param_5)) || (iVar9 <= param_2)) {
                if (((param_4 + -1 == param_1) && (param_5 <= param_2)) && (param_2 < iVar9)) {
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                            (long)param_1 - (long)field_0);
                    lVar7 = (long)field_4;
                    puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, param_2 - lVar7);
                    uVar6 = CONCAT71((int7)((ulong)lVar7 >> 8), 1);
                    if (((*puVar4 | param_8) & 8) == 0)
                        goto LAB_10023e796;
                }
                if (((iVar8 == param_1) && (param_5 <= param_2)) && (param_2 < iVar9)) {
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                            (long)param_1 - (long)field_0);
                    lVar7 = (long)field_4;
                    pcVar5 = (char*)Array<int, eastl::allocator>::operator[](pAVar3, param_2 - lVar7);
                    uVar6 = CONCAT71((int7)((ulong)lVar7 >> 8), 1);
                    if ((-1 < *pcVar5) && ((param_8 & 2U) == 0))
                        goto LAB_10023e796;
                }
                if ((param_5 + -1 == param_2) && ((param_4 <= param_1 && (param_1 < iVar8)))) {
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                            (long)param_1 - (long)field_0);
                    puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)param_2 - (long)field_4);
                    uVar6 = 1;
                    if ((param_8 & 4U) == 0 && (*puVar4 & 2) == 0)
                        goto LAB_10023e796;
                }
                if (((iVar9 == param_2) && (param_4 <= param_1)) && (param_1 < iVar8)) {
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                            (long)param_1 - (long)field_0);
                    lVar7 = (long)field_4;
                    puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, param_2 - lVar7);
                    uVar6 = CONCAT71((int7)((ulong)lVar7 >> 8), 1);
                    if ((param_8 & 1U) == 0 && (*puVar4 & 32) == 0)
                        goto LAB_10023e796;
                }
                uVar6 = 0;
            }
        } else {
            cVar1 = TestOverlap(param_1, param_2, param_3, param_3, param_4, param_5, param_6, param_7);
            uVar6 = CONCAT71((int7)(uVar6 >> 8), 1);
            if (cVar1 == '\0') {
                uVar2 = TestAdjacentEdge(this, param_1, param_2, param_3, param_3, param_4, param_5, param_6, param_7,
                                         param_8);
                uVar6 = (ulong)uVar2;
            }
        }
    LAB_10023e796:
        return uVar6 & 4294967295;
    }

    // 0x10023e7b0, 48 bytes, placed by class name and debug map
    // CollisionMap::TestOverlap(int, int, int, int, int, int, int, int)
    undefined4 CollisionMap::TestOverlap(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                         int param_7, int param_8) {
        undefined4 uVar1;

        uVar1 = 0;
        if ((param_1 < param_7 + param_5) && (param_5 < param_3 + param_1)) {
            uVar1 = CONCAT31((int3)((uint)(param_8 + param_6) >> 8),
                             param_6 < param_4 + param_2 && param_2 < param_8 + param_6);
        }
        return uVar1;
    }

    // 0x10023e7e0, 528 bytes, placed by class name and debug map
    // CollisionMap::TestAdjacentEdge(int, int, int, int, int, int, int, int, int)
    undefined1 CollisionMap::TestAdjacentEdge(int param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6, int param_7, int param_8, int param_9) {
        Array<int, eastl::allocator>* pAVar1;
        byte* pbVar2;
        char* pcVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        bool bVar8;

        iVar6 = param_4 + param_2;
        iVar5 = param_7 + param_5;
        iVar7 = param_8 + param_6;
        if ((iVar5 == param_1) && ((param_9 & 2U) == 0)) {
            if (param_6 < param_2) {
                param_6 = param_2;
            }
            if (iVar6 < iVar7) {
                iVar7 = iVar6;
            }
            if (param_6 < iVar7) {
                do {
                    pAVar1 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                            (long)(~field_0 + iVar5));
                    pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)(param_6 - field_4));
                    if ((*pbVar2 & 8) == 0) {
                        return 1;
                    }
                    bVar8 = iVar7 + -1 != param_6;
                    param_6 = param_6 + 1;
                } while (bVar8);
                return 0;
            }
        } else {
            iVar4 = param_3 + param_1;
            if ((iVar4 == param_5) && ((param_9 & 8U) == 0)) {
                if (param_6 < param_2) {
                    param_6 = param_2;
                }
                if (iVar6 < iVar7) {
                    iVar7 = iVar6;
                }
                if (param_6 < iVar7) {
                    do {
                        pAVar1 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                (long)param_5 - (long)field_0);
                        pcVar3 = (char*)Array<int, eastl::allocator>::operator[](pAVar1, (long)(param_6 - field_4));
                        if (-1 < *pcVar3) {
                            return 1;
                        }
                        bVar8 = iVar7 + -1 != param_6;
                        param_6 = param_6 + 1;
                    } while (bVar8);
                    return 0;
                }
            } else if ((iVar7 == param_2) && ((param_9 & 1U) == 0)) {
                if (param_5 < param_1) {
                    param_5 = param_1;
                }
                if (iVar4 < iVar5) {
                    iVar5 = iVar4;
                }
                if (param_5 < iVar5) {
                    do {
                        pAVar1 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                (long)(param_5 - field_0));
                        pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)(~field_4 + iVar7));
                        if ((*pbVar2 & 2) == 0) {
                            return 1;
                        }
                        bVar8 = iVar5 + -1 != param_5;
                        param_5 = param_5 + 1;
                    } while (bVar8);
                    return 0;
                }
            } else {
                if (iVar6 != param_6) {
                    return 0;
                }
                if ((param_9 & 4U) != 0) {
                    return 0;
                }
                if (param_5 < param_1) {
                    param_5 = param_1;
                }
                if (iVar4 < iVar5) {
                    iVar5 = iVar4;
                }
                if (param_5 < iVar5) {
                    do {
                        pAVar1 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                (long)(param_5 - field_0));
                        pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_6 - (long)field_4);
                        if ((*pbVar2 & 32) == 0) {
                            return 1;
                        }
                        bVar8 = iVar5 + -1 != param_5;
                        param_5 = param_5 + 1;
                    } while (bVar8);
                    return 0;
                }
            }
        }
        return 0;
    }

    // 0x10023e9f0, 384 bytes, placed by class name and debug map
    // CollisionMap::TestLarge(int, int, int, int, int, int)
    undefined8 CollisionMap::TestLarge(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        Array<int, eastl::allocator>* pAVar1;
        byte* pbVar2;
        char* pcVar3;
        undefined8 uVar4;
        int iVar5;
        int iVar6;

        iVar5 = param_5 + param_3;
        iVar6 = param_6 + param_4;
        if ((((param_3 <= param_1) && (param_1 < iVar5)) && (param_4 <= param_2)) && (param_2 < iVar6)) {
            return 1;
        }
        if (((param_3 + -1 == param_1) && (param_4 <= param_2)) && (param_2 < iVar6)) {
            pAVar1 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
            pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
            if ((*pbVar2 & 8) != 0)
                goto LAB_10023ea84;
        LAB_10023eb0e:
            uVar4 = 1;
        } else {
        LAB_10023ea84:
            if (((iVar5 == param_1) && (param_4 <= param_2)) && (param_2 < iVar6)) {
                pAVar1 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                        (long)param_1 - (long)field_0);
                pcVar3 = (char*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
                if (-1 < *pcVar3)
                    goto LAB_10023eb0e;
            }
            if (((param_4 + -1 == param_2) && (param_3 <= param_1)) && (param_1 < iVar5)) {
                pAVar1 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                        (long)param_1 - (long)field_0);
                pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
                if ((*pbVar2 & 2) == 0)
                    goto LAB_10023eb0e;
            }
            if (((iVar6 == param_2) && (param_3 <= param_1)) && (param_1 < iVar5)) {
                pAVar1 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                        (long)param_1 - (long)field_0);
                pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
                if ((*pbVar2 & 32) == 0) {
                    return 1;
                }
            }
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x10023eb70, 304 bytes, placed by class name and debug map
    // CollisionMap::TestSquare(int, int, int, int)
    undefined8 CollisionMap::TestSquare(int param_1, int param_2, int param_3, int param_4) {
        Array<int, eastl::allocator>* pAVar1;
        byte* pbVar2;
        char* pcVar3;
        undefined8 uVar4;

        if ((param_1 == param_3) && (param_2 == param_4)) {
            return 1;
        }
        if ((param_3 + -1 == param_1) && (param_2 == param_4)) {
            pAVar1 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)param_1 - (long)field_0);
            pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
            if ((*pbVar2 & 8) != 0)
                goto LAB_10023ebd1;
        LAB_10023ec45:
            uVar4 = 1;
        } else {
        LAB_10023ebd1:
            if ((param_3 + 1 == param_1) && (param_2 == param_4)) {
                pAVar1 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                        (long)param_1 - (long)field_0);
                pcVar3 = (char*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
                if (-1 < *pcVar3)
                    goto LAB_10023ec45;
            }
            if ((param_4 + -1 == param_2) && (param_1 == param_3)) {
                pAVar1 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                        (long)param_1 - (long)field_0);
                pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
                if ((*pbVar2 & 2) == 0)
                    goto LAB_10023ec45;
            }
            if (param_4 + 1 == param_2 && param_1 == param_3) {
                pAVar1 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                        (long)param_1 - (long)field_0);
                pbVar2 = (byte*)Array<int, eastl::allocator>::operator[](pAVar1, (long)param_2 - (long)field_4);
                if ((*pbVar2 & 32) == 0) {
                    return 1;
                }
            }
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x10023eca0, 64 bytes, placed by class name and debug map
    // CollisionMap::TestRange(int, int, int, int, int, int, int, int, int)
    undefined4 CollisionMap::TestRange(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                       int param_7, int param_8, int param_9) {
        int iVar1;

        if (((param_1 < param_7 + param_5 + param_9) && (param_5 < param_3 + param_1 + param_9)) &&
            (iVar1 = param_8 + param_6 + param_9, param_2 < iVar1)) {
            return CONCAT31((int3)((uint)iVar1 >> 8), param_6 < param_4 + param_2 + param_9);
        }
        return 0;
    }

    // 0x10023ece0, 64 bytes, placed by class name and debug map
    // CollisionMap::TestRange(int, int, int, int, int, int, int)
    bool CollisionMap::TestRange(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                 int param_7) {
        bool bVar1;

        bVar1 = false;
        if ((param_1 < param_6 + param_7 + param_4) && (param_4 < param_1 + param_7 + param_3)) {
            bVar1 = param_5 < param_7 + param_3 + param_2 && param_2 < param_6 + param_7 + param_5;
        }
        return bVar1;
    }

    // 0x10023ed20, 96 bytes, placed by class name and debug map
    // CollisionMap::GetRange(int, int, int, int, int, int, int, int)
    int CollisionMap::GetRange(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                               int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;

        if (param_5 < param_3 + param_1) {
            iVar3 = 0;
            if (param_5 + param_7 <= param_1) {
                iVar3 = (param_1 - (param_5 + param_7)) + 1;
            }
        } else {
            iVar3 = (param_5 - (param_3 + param_1)) + 1;
        }
        iVar2 = 0;
        if (param_8 + param_6 <= param_2) {
            iVar2 = (param_2 - (param_8 + param_6)) + 1;
        }
        iVar1 = (param_6 - (param_4 + param_2)) + 1;
        if (param_6 < param_4 + param_2) {
            iVar1 = iVar2;
        }
        if (iVar1 < iVar3) {
            iVar1 = iVar3;
        }
        return iVar1;
    }

    // 0x10023ed80, 48 bytes, placed by class name and debug map
    // CollisionMap::GetRange1D(int, int, int, int)
    int CollisionMap::GetRange1D(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;

        if (param_2 + param_1 <= param_3) {
            return (param_3 - (param_2 + param_1)) + 1;
        }
        iVar1 = 0;
        if (param_4 + param_3 <= param_1) {
            iVar1 = (param_1 - (param_4 + param_3)) + 1;
        }
        return iVar1;
    }

    // 0x10023edb0, 64 bytes, placed by class name and debug map
    // CollisionMap::LineOfSightPoint2Square(int, int, int, int, int)
    void CollisionMap::LineOfSightPoint2Square(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;

        if (1 < param_5) {
            iVar1 = param_5 + 1;
            do {
                param_3 = param_3 + (uint)(param_3 < param_1);
                param_4 = param_4 + (uint)(param_4 < param_2);
                iVar1 = iVar1 + -1;
            } while (2 < iVar1);
        }
        LineOfSightPoint2Point(this, param_1, param_2, param_3, param_4);
    }

    // 0x10023edf0, 16 bytes, placed by class name and debug map
    // CollisionMap::LineOfSightPoint2Point(int, int, int, int)
    void CollisionMap::LineOfSightPoint2Point(int param_1, int param_2, int param_3, int param_4) {
        LineOfSightPoint2Point(this, param_1, param_2, param_3, param_4, false);
    }

    // 0x10023ee00, 160 bytes, placed by class name and debug map
    // CollisionMap::LineOfSightPoint2Rect(int, int, int, int, int, int, int)
    void CollisionMap::LineOfSightPoint2Rect(int param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7) {
        int iVar1;
        int iVar2;

        if ((1 < param_5) || (1 < param_6)) {
            iVar1 = param_6;
            if ((param_7 & 4294967293U) == 1) {
                iVar1 = param_5;
                param_5 = param_6;
            }
            if (1 < param_5) {
                iVar2 = param_5 + 1;
                do {
                    param_3 = (uint)(param_3 < param_1) + param_3;
                    iVar2 = iVar2 + -1;
                } while (2 < iVar2);
            }
            if (1 < iVar1) {
                iVar1 = iVar1 + 1;
                do {
                    param_4 = (uint)(param_4 < param_2) + param_4;
                    iVar1 = iVar1 + -1;
                } while (2 < iVar1);
            }
        }
        LineOfSightPoint2Point(this, param_1, param_2, param_3, param_4);
    }

    // 0x10023eea0, 3040 bytes, placed by class name and debug map
    // CollisionMap::LineOfSightPoint2Point(int, int, int, int, bool)
    undefined8 CollisionMap::LineOfSightPoint2Point(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        int iVar1;
        undefined8 uVar2;
        Array<int, eastl::allocator>* pAVar3;
        long lVar4;
        uint* puVar5;
        int iVar6;
        ulong uVar7;
        ulong uVar8;
        int iVar9;
        uint uVar10;
        uint uVar11;
        int iVar12;
        uint uVar13;
        ulong uVar14;
        int iVar15;
        undefined1* puVar16;

        if ((param_1 == param_3) && (param_2 == param_4)) {
        LAB_10023eec8:
            uVar2 = 1;
            goto LAB_10023ef54;
        }
        uVar11 = param_3 - field_0;
        if (-1 < (int)uVar11) {
            if (field_8 <= (int)uVar11) {
                return 0;
            }
            iVar12 = param_4 - field_4;
            if (iVar12 < 0) {
                return 0;
            }
            if (iVar12 < (int)field_12) {
                uVar13 = param_1 - field_0;
                if ((int)uVar13 < 0) {
                    return 0;
                }
                if (field_8 <= (int)uVar13) {
                    return 0;
                }
                iVar6 = param_2 - field_4;
                if (iVar6 < 0) {
                    return 0;
                }
                if ((int)field_12 <= iVar6) {
                    return 0;
                }
                if (!param_5) {
                    iVar1 = uVar13 - uVar11;
                    if (param_1 < param_3) {
                        iVar1 = uVar11 - uVar13;
                    }
                    iVar9 = iVar6 - iVar12;
                    if (param_2 < param_4) {
                        iVar9 = iVar12 - iVar6;
                    }
                    if (iVar9 < iVar1) {
                        iVar1 = (iVar9 << 16) / iVar1;
                        if (param_1 < param_3) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                    (long)(int)uVar13);
                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            if ((*puVar5 & 16912384) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 + 1;
                        } else if (param_3 < param_1) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                    (long)(int)uVar13);
                            lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            if ((*(ushort*)(lVar4 + 2) & 259) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 - 1;
                        }
                        if (iVar1 < 32768) {
                            iVar9 = iVar1 + 32768;
                        } else {
                            iVar9 = iVar1 + -32768;
                            if (param_2 < param_4) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                        (long)(int)uVar13);
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                if ((*puVar5 & 17433600) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 + 1;
                            } else if (param_4 < param_2) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                        (long)(int)uVar13);
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                if ((*puVar5 & 17448960) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 + -1;
                            }
                        }
                        if (uVar13 != uVar11) {
                            puVar16 = &field_16;
                            do {
                                if ((int)uVar13 < (int)uVar11) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar13);
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                    if ((*puVar5 & 17436672) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 + 1;
                                } else if ((int)uVar11 < (int)uVar13) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar13);
                                    lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                    if ((*(ushort*)(lVar4 + 2) & 267) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 - 1;
                                }
                                iVar9 = iVar9 + iVar1;
                                if (65535 < iVar9) {
                                    iVar9 = iVar9 + -65536;
                                    if (iVar6 < iVar12) {
                                        pAVar3 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                                (long)(int)uVar13);
                                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                        if ((*puVar5 & 17433600) != 0)
                                            goto LAB_10023ef52;
                                        iVar6 = iVar6 + 1;
                                    } else if (iVar12 < iVar6) {
                                        pAVar3 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                                (long)(int)uVar13);
                                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                        if ((*puVar5 & 17448960) != 0)
                                            goto LAB_10023ef52;
                                        iVar6 = iVar6 + -1;
                                    }
                                }
                            } while (uVar13 != uVar11);
                        }
                        goto LAB_10023eec8;
                    }
                    iVar9 = (iVar1 << 16) / iVar9;
                    if (param_2 < param_4) {
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar13);
                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                        if ((*puVar5 & 16909312) != 0)
                            goto LAB_10023ef52;
                        iVar6 = iVar6 + 1;
                    } else if (param_4 < param_2) {
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)(int)uVar13);
                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                        if ((*puVar5 & 16924672) != 0)
                            goto LAB_10023ef52;
                        iVar6 = iVar6 + -1;
                    }
                    if (iVar9 < 32768) {
                        iVar1 = iVar9 + 32768;
                    } else {
                        iVar1 = iVar9 + -32768;
                        if (param_1 < param_3) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                    (long)(int)uVar13);
                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            if ((*puVar5 & 17436672) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 + 1;
                        } else if (param_3 < param_1) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16,
                                    (long)(int)uVar13);
                            lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            if ((*(ushort*)(lVar4 + 2) & 267) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 - 1;
                        }
                    }
                    if (iVar6 != iVar12) {
                        puVar16 = &field_16;
                        do {
                            if (iVar6 < iVar12) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                        (long)(int)uVar13);
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                if ((*puVar5 & 17433600) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 + 1;
                            } else if (iVar12 < iVar6) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                        (long)(int)uVar13);
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                if ((*puVar5 & 17448960) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 + -1;
                            }
                            iVar1 = iVar1 + iVar9;
                            if (65535 < iVar1) {
                                iVar1 = iVar1 + -65536;
                                if ((int)uVar13 < (int)uVar11) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar13);
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                    if ((*puVar5 & 17436672) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 + 1;
                                } else if ((int)uVar11 < (int)uVar13) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar13);
                                    lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                    if ((*(ushort*)(lVar4 + 2) & 267) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 - 1;
                                }
                            }
                        } while (iVar6 != iVar12);
                    }
                    goto LAB_10023eec8;
                }
                puVar16 = &field_16;
                pAVar3 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)uVar13);
                lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                if ((*(ushort*)(lVar4 + 2) & 258) == 0) {
                    if ((param_3 < param_1) || ((param_1 == param_3 && (param_4 < param_2)))) {
                        iVar1 = iVar6;
                        uVar10 = uVar13;
                        uVar13 = uVar11;
                        iVar6 = iVar12;
                    } else {
                        iVar1 = iVar12;
                        uVar10 = uVar11;
                    }
                    iVar12 = iVar1 - iVar6;
                    if (iVar1 - iVar6 == 0 || iVar1 < iVar6) {
                        iVar12 = -(iVar1 - iVar6);
                    }
                    iVar9 = uVar10 - uVar13;
                    if (iVar12 < iVar9) {
                        iVar9 = (iVar12 << 16) / iVar9;
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)uVar13);
                        uVar7 = (ulong)iVar6;
                        lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, uVar7);
                        if ((*(byte*)(lVar4 + 1) & 16) == 0) {
                            uVar11 = uVar13 + 1;
                            if (iVar9 < 32768) {
                                iVar12 = iVar9 + 32768;
                            } else {
                                iVar12 = iVar9 + -32768;
                                if (iVar6 < iVar1) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar11);
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar7);
                                    if ((*puVar5 & 17433600) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 + 1;
                                } else if (iVar1 < iVar6) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar11);
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar7);
                                    if ((*puVar5 & 17448960) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 + -1;
                                }
                            }
                            if (uVar11 != uVar10) {
                                uVar7 = (ulong)(int)uVar11;
                                iVar15 = ~uVar13 + uVar10;
                                do {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                                    uVar8 = (ulong)iVar6;
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                    if ((*puVar5 & 17436672) != 0)
                                        goto LAB_10023ef52;
                                    uVar7 = uVar7 + 1;
                                    iVar12 = iVar12 + iVar9;
                                    if (65535 < iVar12) {
                                        iVar12 = iVar12 + -65536;
                                        if (iVar6 < iVar1) {
                                            pAVar3 = (Array<int, eastl::allocator>*)
                                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                                    uVar7);
                                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                            if ((*puVar5 & 17433600) != 0)
                                                goto LAB_10023ef52;
                                            iVar6 = iVar6 + 1;
                                        } else if (iVar1 < iVar6) {
                                            pAVar3 = (Array<int, eastl::allocator>*)
                                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                                    uVar7);
                                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                            if ((*puVar5 & 17448960) != 0)
                                                goto LAB_10023ef52;
                                            iVar6 = iVar6 + -1;
                                        }
                                    }
                                    iVar15 = iVar15 + -1;
                                } while (iVar15 != 0);
                            }
                            goto LAB_10023eec8;
                        }
                    } else if (iVar9 < iVar12) {
                        iVar12 = (iVar9 * 65536) / iVar12;
                        if (iVar6 < iVar1) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)uVar13);
                            lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            if ((*(byte*)(lVar4 + 1) & 4) != 0)
                                goto LAB_10023ef52;
                            iVar6 = iVar6 + 1;
                        } else if (iVar1 < iVar6) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)uVar13);
                            lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            if ((*(byte*)(lVar4 + 1) & 64) != 0)
                                goto LAB_10023ef52;
                            iVar6 = iVar6 + -1;
                        }
                        if (iVar12 < 32768) {
                            iVar9 = iVar12 + 32768;
                            goto LAB_10023f9aa;
                        }
                        iVar9 = iVar12 + -32768;
                        if (uVar10 == uVar13)
                            goto LAB_10023f9aa;
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)uVar13);
                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                        uVar11 = *puVar5;
                        while ((uVar11 & 17436672) == 0) {
                            uVar13 = uVar13 + 1;
                        LAB_10023f9aa:
                            do {
                                if (iVar6 == iVar1)
                                    goto LAB_10023eec8;
                                if (iVar6 < iVar1) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar13);
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                    if ((*puVar5 & 17433600) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 + 1;
                                } else if (iVar1 < iVar6) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                            (long)(int)uVar13);
                                    puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                                    if ((*puVar5 & 17448960) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 + -1;
                                }
                                iVar9 = iVar9 + iVar12;
                            } while ((iVar9 < 65536) || (iVar9 = iVar9 + -65536, uVar13 == uVar10));
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)uVar13);
                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                            uVar11 = *puVar5;
                        }
                    } else {
                        uVar7 = (ulong)(int)uVar13;
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                        uVar8 = (ulong)iVar6;
                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                        if (iVar6 < iVar1) {
                            if ((*puVar5 & 1024) == 0) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                                uVar14 = (ulong)(iVar6 + 1);
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar14);
                                if ((*puVar5 & 17436672) == 0)
                                    goto joined_r0x00010023f84c;
                            }
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                            lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                            if ((*(byte*)(lVar4 + 1) & 16) == 0) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                        (long)(int)(uVar13 + 1));
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                if ((*puVar5 & 17433600) == 0) {
                                    uVar11 = iVar6 + 1;
                                    goto LAB_10023f718;
                                }
                            }
                        } else {
                            if ((*puVar5 & 16384) == 0) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                                uVar14 = (ulong)(iVar6 - 1U);
                                puVar5 =
                                    (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(int)(iVar6 - 1U));
                                if ((*puVar5 & 17436672) == 0)
                                    goto joined_r0x00010023f84c;
                            }
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                            lVar4 = Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                            if ((*(byte*)(lVar4 + 1) & 16) == 0) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                        (long)(int)(uVar13 + 1));
                                puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                if ((*puVar5 & 17448960) == 0) {
                                    uVar11 = iVar6 - 1;
                                LAB_10023f718:
                                    uVar14 = (ulong)uVar11;
                                joined_r0x00010023f84c:
                                    uVar11 = uVar13;
                                    uVar13 = uVar11 + 1;
                                    if (uVar13 != uVar10) {
                                        uVar7 = (ulong)(int)uVar13;
                                        pAVar3 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                                        iVar12 = (int)uVar14;
                                        uVar8 = (ulong)iVar12;
                                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                        if (iVar1 <= iVar12) {
                                            if ((*puVar5 & 17448960) == 0)
                                                goto code_r0x00010023f90c;
                                            goto LAB_10023f92f;
                                        }
                                        if ((*puVar5 & 17433600) == 0) {
                                            pAVar3 = (Array<int, eastl::allocator>*)
                                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                                    uVar7);
                                            uVar14 = (ulong)(iVar12 + 1);
                                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar14);
                                            if ((*puVar5 & 17436672) == 0)
                                                goto joined_r0x00010023f84c;
                                        }
                                        pAVar3 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
                                        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                        if ((*puVar5 & 17436672) == 0) {
                                            pAVar3 = (Array<int, eastl::allocator>*)
                                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16,
                                                    (long)(int)(uVar11 + 2));
                                            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
                                            if ((*puVar5 & 17433600) == 0) {
                                                uVar11 = iVar12 + 1;
                                                goto LAB_10023f981;
                                            }
                                        }
                                        goto LAB_10023ef52;
                                    }
                                    goto LAB_10023eec8;
                                }
                            }
                        }
                    }
                }
            }
        }
    LAB_10023ef52:
        uVar2 = 0;
    LAB_10023ef54:
        return uVar2;
    code_r0x00010023f90c:
        pAVar3 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
        uVar14 = (ulong)(iVar12 - 1U);
        puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(int)(iVar12 - 1U));
        if ((*puVar5 & 17436672) != 0) {
        LAB_10023f92f:
            pAVar3 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, uVar7);
            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
            if ((*puVar5 & 17436672) != 0)
                goto LAB_10023ef52;
            pAVar3 = (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar16, (long)(int)(uVar11 + 2));
            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar8);
            if ((*puVar5 & 17448960) != 0)
                goto LAB_10023ef52;
            uVar11 = iVar12 - 1;
        LAB_10023f981:
            uVar14 = (ulong)uVar11;
        }
        goto joined_r0x00010023f84c;
    }

    // 0x10023fa80, 64 bytes, placed by class name and debug map
    // CollisionMap::LineOfWalkPoint2Square(int, int, int, int, int)
    void CollisionMap::LineOfWalkPoint2Square(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;

        if (1 < param_5) {
            iVar1 = param_5 + 1;
            do {
                param_3 = param_3 + (uint)(param_3 < param_1);
                param_4 = param_4 + (uint)(param_4 < param_2);
                iVar1 = iVar1 + -1;
            } while (2 < iVar1);
        }
        LineOfWalkPoint2Point(this, param_1, param_2, param_3, param_4);
    }

    // 0x10023fac0, 720 bytes, placed by class name and debug map
    // CollisionMap::LineOfWalkPoint2Point(int, int, int, int)
    bool CollisionMap::LineOfWalkPoint2Point(int param_1, int param_2, int param_3, int param_4) {
        undefined1* puVar1;
        Array<int, eastl::allocator>* pAVar2;
        uint* puVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        bool bVar11;

        if ((param_1 != param_3) || (bVar11 = true, param_2 != param_4)) {
            bVar11 = false;
            iVar8 = param_3 - field_0;
            if ((-1 < iVar8) && (iVar8 < field_8)) {
                iVar7 = param_4 - field_4;
                if (-1 < iVar7) {
                    if (iVar7 < (int)field_12) {
                        iVar10 = param_1 - field_0;
                        iVar9 = param_2 - field_4;
                        iVar6 = iVar10 - iVar8;
                        if (param_1 < param_3) {
                            iVar6 = iVar8 - iVar10;
                        }
                        iVar5 = iVar9 - iVar7;
                        if (param_2 < param_4) {
                            iVar5 = iVar7 - iVar9;
                        }
                        if (iVar5 < iVar6) {
                            if (param_1 != param_3) {
                                puVar1 = &field_16;
                                iVar4 = 32768;
                                do {
                                    if (iVar10 < iVar8) {
                                        pAVar2 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                                (long)iVar10);
                                        puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                        if ((*puVar3 & 19136776) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 + 1;
                                    } else if (iVar8 < iVar10) {
                                        pAVar2 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                                (long)iVar10);
                                        puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                        if ((*puVar3 & 19136896) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 + -1;
                                    }
                                    iVar4 = iVar4 + (iVar5 << 16) / iVar6;
                                    if (65535 < iVar4) {
                                        iVar4 = iVar4 + -65536;
                                        if (iVar9 < iVar7) {
                                            pAVar2 = (Array<int, eastl::allocator>*)
                                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                                    (long)iVar10);
                                            puVar3 =
                                                (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                            if ((*puVar3 & 19136770) != 0)
                                                goto LAB_10023fd74;
                                            iVar9 = iVar9 + 1;
                                        } else if (iVar7 < iVar9) {
                                            pAVar2 = (Array<int, eastl::allocator>*)
                                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                                    (long)iVar10);
                                            puVar3 =
                                                (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                            if ((*puVar3 & 19136800) != 0)
                                                goto LAB_10023fd74;
                                            iVar9 = iVar9 + -1;
                                        }
                                    }
                                } while (iVar10 != iVar8);
                            }
                        } else if (param_2 != param_4) {
                            puVar1 = &field_16;
                            iVar4 = 32768;
                            do {
                                if (iVar9 < iVar7) {
                                    pAVar2 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                            (long)iVar10);
                                    puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                    if ((*puVar3 & 19136770) != 0)
                                        goto LAB_10023fd74;
                                    iVar9 = iVar9 + 1;
                                } else if (iVar7 < iVar9) {
                                    pAVar2 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                            (long)iVar10);
                                    puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                    if ((*puVar3 & 19136800) != 0)
                                        goto LAB_10023fd74;
                                    iVar9 = iVar9 + -1;
                                }
                                iVar4 = iVar4 + (iVar6 << 16) / iVar5;
                                if (65535 < iVar4) {
                                    iVar4 = iVar4 + -65536;
                                    if (iVar10 < iVar8) {
                                        pAVar2 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                                (long)iVar10);
                                        puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                        if ((*puVar3 & 19136776) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 + 1;
                                    } else if (iVar8 < iVar10) {
                                        pAVar2 = (Array<int, eastl::allocator>*)
                                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar1,
                                                (long)iVar10);
                                        puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar9);
                                        if ((*puVar3 & 19136896) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 + -1;
                                    }
                                }
                            } while (iVar9 != iVar7);
                        }
                        pAVar2 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (long)iVar8);
                        puVar3 = (uint*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar7);
                        bVar11 = (*puVar3 & 19136768) == 0;
                    } else {
                    LAB_10023fd74:
                        bVar11 = false;
                    }
                }
            }
        }
        return bVar11;
    }

} // namespace jag::oldscape::movement
