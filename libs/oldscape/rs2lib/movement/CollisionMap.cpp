// libs/oldscape/rs2lib/movement/CollisionMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "CollisionMap.h"

namespace jag::oldscape::movement {
    // 0x10023bad0
    CollisionMap::CollisionMap(int arg1, int arg2, int arg3, int arg4) {
        unsigned long arg1_00;

        uint8_t* this_00 = &field_16;
        new (this_00) Array<Array<int>>();
        field_0 = arg1 * 8 - 1;
        field_4 = arg3 * 8 - 1;
        field_8 = (arg2 - arg1) * 8 + 14;
        unsigned int uVar1 = (arg4 - arg3) * 8 + 14;
        field_12 = uVar1;
        this_00->set_max_size((long)(int)uVar1, 3);
        if (0 < field_8) {
            arg1_00 = 0;
            do {
                ((Array<int>*)(*this_00)[arg1_00])->set_max_size((long)field_8, 3);
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_8);
        }
        Reset();
    }

    // 0x10023bbb0
    void CollisionMap::Reset() {
        Array<int>* this_00;
        int* piVar1;
        unsigned long uVar2;
        unsigned long arg1;
        unsigned long arg1_00;
        int iVar3;

        if (0 < field_8) {
            arg1_00 = 0;
            do {
                uVar2 = (unsigned long)field_12;
                if (0 < (int)field_12) {
                    arg1 = 0;
                    do {
                        iVar3 = 16777215;
                        if ((arg1_00 != 0) && (arg1 != 0)) {
                            iVar3 =
                                ((long)arg1 < (long)((int)uVar2 - 5) && (long)arg1_00 < (long)field_8 - 5) + 16777215;
                        }
                        this_00 = &field_16[arg1_00];
                        piVar1 = (int*)(*this_00)[arg1];
                        *piVar1 = iVar3;
                        arg1 = arg1 + 1;
                        uVar2 = (unsigned long)(int)field_12;
                    } while ((long)arg1 < (long)uVar2);
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_8);
        }
    }

    // 0x10023bc80
    CollisionMap::CollisionMap(int arg1, int arg2) {
        unsigned long arg1_00;

        uint8_t* this_00 = &field_16;
        new (this_00) Array<Array<int>>();
        field_0 = 0;
        field_4 = 0;
        field_8 = arg1;
        field_12 = arg2;
        this_00->set_max_size((long)arg2, 3);
        if (0 < field_8) {
            arg1_00 = 0;
            do {
                ((Array<int>*)(*this_00)[arg1_00])->set_max_size((long)field_8, 3);
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_8);
        }
        Reset();
    }

    // 0x10023bd30
    void CollisionMap::BlockAll() {
        Array<int>* this_00;
        uint32_t* puVar1;
        unsigned long arg1;
        unsigned long arg1_00;

        if (0 < field_8) {
            arg1_00 = 0;
            do {
                if (0 < (int)field_12) {
                    arg1 = 0;
                    do {
                        this_00 = &field_16[arg1_00];
                        puVar1 = (uint32_t*)(*this_00)[arg1];
                        *puVar1 = 16777215;
                        arg1 = arg1 + 1;
                    } while ((long)arg1 < (long)(int)field_12);
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_8);
        }
    }

    // 0x10023bdb0
    void CollisionMap::AddWall(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        int iVar1;
        int iVar2;
        int iVar3;
        long lVar4;

        int arg1_00 = arg1 - field_0;
        int arg2_00 = arg2 - field_4;
        if (arg3 == 0) {
            iVar3 = arg1_00;
            iVar2 = arg2_00;
            switch (arg4) {
            case 0:
                AddCMap(arg1_00, arg2_00, 128);
                iVar3 = arg1_00 - 1;
                iVar1 = 8;
                break;
            case 1:
                AddCMap(arg1_00, arg2_00, 2);
                iVar1 = 32;
                iVar2 = arg2_00 + 1;
                break;
            case 2:
                AddCMap(arg1_00, arg2_00, 8);
                iVar1 = 128;
                iVar3 = arg1_00 + 1;
                break;
            case 3:
                AddCMap(arg1_00, arg2_00, 32);
                iVar1 = 2;
                iVar2 = arg2_00 - 1;
                break;
            default:
                goto switchD_10023bdfe_default;
            }
            AddCMap(iVar3, iVar2, iVar1);
        }
    switchD_10023bdfe_default:
        if (((arg3 & 4294967293U) == 1) && ((unsigned int)arg4 < 4)) {
            lVar4 = (long)arg4;
            iVar3 = *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[34] + lVar4 * 4);
            AddCMap(arg1_00, arg2_00, *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[32] + lVar4 * 4));
            AddCMap(*(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[38] + lVar4 * 4) + arg1_00,
                    *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[40] + lVar4 * 4) + arg2_00, iVar3);
        }
        if (arg3 == 2) {
            iVar3 = arg2_00;
            iVar2 = arg1_00;
            switch (arg4) {
            case 0:
                AddCMap(arg1_00, arg2_00, 130);
                AddCMap(arg1_00 - 1, arg2_00, 8);
                iVar3 = arg2_00 + 1;
                iVar1 = 32;
                break;
            case 1:
                AddCMap(arg1_00, arg2_00, 10);
                AddCMap(arg1_00, arg2_00 + 1, 32);
                iVar1 = 128;
                iVar2 = arg1_00 + 1;
                break;
            case 2:
                AddCMap(arg1_00, arg2_00, 40);
                AddCMap(arg1_00 + 1, arg2_00, 128);
                iVar1 = 2;
                iVar3 = arg2_00 - 1;
                break;
            case 3:
                AddCMap(arg1_00, arg2_00, 160);
                AddCMap(arg1_00, arg2_00 - 1, 2);
                iVar1 = 8;
                iVar2 = arg1_00 - 1;
                break;
            default:
                goto switchD_10023bf3d_default;
            }
            AddCMap(iVar2, iVar3, iVar1);
        }
    switchD_10023bf3d_default:
        if (!arg5) {
            return;
        }
        if (arg3 == 0) {
            iVar3 = arg1_00;
            iVar2 = arg2_00;
            switch (arg4) {
            case 0:
                AddCMap(arg1_00, arg2_00, 65536);
                iVar3 = arg1_00 - 1;
                iVar1 = 4096;
                break;
            case 1:
                AddCMap(arg1_00, arg2_00, 1024);
                iVar1 = 16384;
                iVar2 = arg2_00 + 1;
                break;
            case 2:
                AddCMap(arg1_00, arg2_00, 4096);
                iVar1 = 65536;
                iVar3 = arg1_00 + 1;
                break;
            case 3:
                AddCMap(arg1_00, arg2_00, 16384);
                iVar1 = 1024;
                iVar2 = arg2_00 - 1;
                break;
            default:
                goto switchD_10023c057_default;
            }
            AddCMap(iVar3, iVar2, iVar1);
        }
    switchD_10023c057_default:
        if (((arg3 & 4294967293U) == 1) && ((unsigned int)arg4 < 4)) {
            lVar4 = (long)arg4;
            iVar3 = *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[42] + lVar4 * 4);
            AddCMap(arg1_00, arg2_00, *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[36] + lVar4 * 4));
            AddCMap(*(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[38] + lVar4 * 4) + arg1_00,
                    *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[40] + lVar4 * 4) + arg2_00, iVar3);
        }
        if (arg3 == 2) {
            switch (arg4) {
            case 0:
                AddCMap(arg1_00, arg2_00, 66560);
                AddCMap(arg1_00 - 1, arg2_00, 4096);
                arg2_00 = arg2_00 + 1;
                iVar3 = 16384;
                break;
            case 1:
                AddCMap(arg1_00, arg2_00, 5120);
                AddCMap(arg1_00, arg2_00 + 1, 16384);
                arg1_00 = arg1_00 + 1;
                iVar3 = 65536;
                break;
            case 2:
                AddCMap(arg1_00, arg2_00, 20480);
                AddCMap(arg1_00 + 1, arg2_00, 65536);
                arg2_00 = arg2_00 - 1;
                iVar3 = 1024;
                break;
            case 3:
                AddCMap(arg1_00, arg2_00, 81920);
                AddCMap(arg1_00, arg2_00 - 1, 1024);
                arg1_00 = arg1_00 - 1;
                iVar3 = 4096;
                break;
            default:
                goto switchD_10023c184_default;
            }
            AddCMap(arg1_00, arg2_00, iVar3);
        }
    switchD_10023c184_default:
    }

    // 0x10023c2d0
    void CollisionMap::AddCMap(int arg1, int arg2, int arg3) {
        Array<int>* this_00 = &field_16[(long)arg1];
        unsigned int* puVar1 = (unsigned int*)(*this_00)[(long)arg2];
        *puVar1 = *puVar1 | arg3;
    }

    // 0x10023c300
    void CollisionMap::AddLoc(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) {
        int iVar2;
        int arg1_00;
        int arg2_00;

        int iVar1 = arg3;
        if ((arg5 & 4294967293U) == 1) {
            iVar1 = arg4;
            arg4 = arg3;
        }
        if (0 < iVar1) {
            arg1_00 = arg1 - field_0;
            iVar2 = arg2 - field_4;
            iVar1 = iVar1 + arg1_00;
            do {
                if (((-1 < arg1_00) && (arg1_00 < field_8)) && (arg2_00 = iVar2, 0 < arg4)) {
                    do {
                        if ((-1 < arg2_00) && (arg2_00 < (int)field_12)) {
                            AddCMap(arg1_00, arg2_00, (unsigned int)arg6 << 17 | 256);
                        }
                        arg2_00 = arg2_00 + 1;
                    } while (arg2_00 < iVar2 + arg4);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < iVar1);
        }
    }

    // 0x10023c3d0
    void CollisionMap::AddLoc(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        int iVar1;
        int iVar2;
        int arg1_00;
        uint32_t in_register_00000089;
        int arg2_00;

        if (0 < arg3) {
            arg1_00 = arg1 - field_0;
            iVar2 = arg2 - field_4;
            iVar1 = arg3 + arg1_00;
            do {
                if (((-1 < arg1_00) && (arg1_00 < field_8)) && (arg2_00 = iVar2, 0 < arg4)) {
                    do {
                        if ((-1 < arg2_00) && (arg2_00 < (int)field_12)) {
                            AddCMap(arg1_00, arg2_00,
                                    (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5) << 17 | 256);
                        }
                        arg2_00 = arg2_00 + 1;
                    } while (arg2_00 < iVar2 + arg4);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < iVar1);
        }
    }

    // 0x10023c490
    void CollisionMap::BlockGround(int arg1, int arg2) {
        int iVar1 = field_4;
        Array<int>* this_00 = &field_16[(long)arg1 - (long)field_0];
        long lVar2 = (*this_00)[(long)arg2 - (long)iVar1];
        *(uint8_t*)(lVar2 + 2) = *(uint8_t*)(lVar2 + 2) | 32;
    }

    // 0x10023c4d0
    void CollisionMap::BlockGroundDecor(int arg1, int arg2) {
        int iVar1 = field_4;
        Array<int>* this_00 = &field_16[(long)arg1 - (long)field_0];
        long lVar2 = (*this_00)[(long)arg2 - (long)iVar1];
        *(uint8_t*)(lVar2 + 2) = *(uint8_t*)(lVar2 + 2) | 4;
    }

    // 0x10023c510
    void CollisionMap::RoofGround(int arg1, int arg2) {
        int iVar1 = field_4;
        Array<int>* this_00 = &field_16[(long)arg1 - (long)field_0];
        long lVar2 = (*this_00)[(long)arg2 - (long)iVar1];
        *(uint8_t*)(lVar2 + 2) = *(uint8_t*)(lVar2 + 2) | 16;
    }

    // 0x10023c550
    void CollisionMap::MultiwayGround(int arg1, int arg2) {
        int iVar1 = field_4;
        Array<int>* this_00 = &field_16[(long)arg1 - (long)field_0];
        long lVar2 = (*this_00)[(long)arg2 - (long)iVar1];
        *(uint8_t*)(lVar2 + 2) = *(uint8_t*)(lVar2 + 2) | 64;
    }

    // 0x10023c590
    void CollisionMap::FreemapGround(int arg1, int arg2) {
        int iVar1 = field_4;
        Array<int>* this_00 = &field_16[(long)arg1 - (long)field_0];
        long lVar2 = (*this_00)[(long)arg2 - (long)iVar1];
        *(uint8_t*)(lVar2 + 2) = *(uint8_t*)(lVar2 + 2) | 128;
    }

    // 0x10023c5d0
    void CollisionMap::DelWall(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        int iVar1;
        int iVar2;
        int iVar3;
        long lVar4;

        int arg1_00 = arg1 - field_0;
        int arg2_00 = arg2 - field_4;
        if (arg3 == 0) {
            iVar3 = arg1_00;
            iVar2 = arg2_00;
            switch (arg4) {
            case 0:
                RemCMap(arg1_00, arg2_00, 128);
                iVar3 = arg1_00 - 1;
                iVar1 = 8;
                break;
            case 1:
                RemCMap(arg1_00, arg2_00, 2);
                iVar1 = 32;
                iVar2 = arg2_00 + 1;
                break;
            case 2:
                RemCMap(arg1_00, arg2_00, 8);
                iVar1 = 128;
                iVar3 = arg1_00 + 1;
                break;
            case 3:
                RemCMap(arg1_00, arg2_00, 32);
                iVar1 = 2;
                iVar2 = arg2_00 - 1;
                break;
            default:
                goto switchD_10023c61e_default;
            }
            RemCMap(iVar3, iVar2, iVar1);
        }
    switchD_10023c61e_default:
        if (((arg3 & 4294967293U) == 1) && ((unsigned int)arg4 < 4)) {
            lVar4 = (long)arg4;
            iVar3 = *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[34] + lVar4 * 4);
            RemCMap(arg1_00, arg2_00, *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[32] + lVar4 * 4));
            RemCMap(*(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[38] + lVar4 * 4) + arg1_00,
                    *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[40] + lVar4 * 4) + arg2_00, iVar3);
        }
        if (arg3 == 2) {
            iVar3 = arg2_00;
            iVar2 = arg1_00;
            switch (arg4) {
            case 0:
                RemCMap(arg1_00, arg2_00, 130);
                RemCMap(arg1_00 - 1, arg2_00, 8);
                iVar3 = arg2_00 + 1;
                iVar1 = 32;
                break;
            case 1:
                RemCMap(arg1_00, arg2_00, 10);
                RemCMap(arg1_00, arg2_00 + 1, 32);
                iVar1 = 128;
                iVar2 = arg1_00 + 1;
                break;
            case 2:
                RemCMap(arg1_00, arg2_00, 40);
                RemCMap(arg1_00 + 1, arg2_00, 128);
                iVar1 = 2;
                iVar3 = arg2_00 - 1;
                break;
            case 3:
                RemCMap(arg1_00, arg2_00, 160);
                RemCMap(arg1_00, arg2_00 - 1, 2);
                iVar1 = 8;
                iVar2 = arg1_00 - 1;
                break;
            default:
                goto switchD_10023c75d_default;
            }
            RemCMap(iVar2, iVar3, iVar1);
        }
    switchD_10023c75d_default:
        if (!arg5) {
            return;
        }
        if (arg3 == 0) {
            iVar3 = arg1_00;
            iVar2 = arg2_00;
            switch (arg4) {
            case 0:
                RemCMap(arg1_00, arg2_00, 65536);
                iVar3 = arg1_00 - 1;
                iVar1 = 4096;
                break;
            case 1:
                RemCMap(arg1_00, arg2_00, 1024);
                iVar1 = 16384;
                iVar2 = arg2_00 + 1;
                break;
            case 2:
                RemCMap(arg1_00, arg2_00, 4096);
                iVar1 = 65536;
                iVar3 = arg1_00 + 1;
                break;
            case 3:
                RemCMap(arg1_00, arg2_00, 16384);
                iVar1 = 1024;
                iVar2 = arg2_00 - 1;
                break;
            default:
                goto switchD_10023c877_default;
            }
            RemCMap(iVar3, iVar2, iVar1);
        }
    switchD_10023c877_default:
        if (((arg3 & 4294967293U) == 1) && ((unsigned int)arg4 < 4)) {
            lVar4 = (long)arg4;
            iVar3 = *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[42] + lVar4 * 4);
            RemCMap(arg1_00, arg2_00, *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[36] + lVar4 * 4));
            RemCMap(*(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[38] + lVar4 * 4) + arg1_00,
                    *(int*)(&reinterpret_cast<const uint64_t*>(&m_recol2s)[40] + lVar4 * 4) + arg2_00, iVar3);
        }
        if (arg3 == 2) {
            switch (arg4) {
            case 0:
                RemCMap(arg1_00, arg2_00, 66560);
                RemCMap(arg1_00 - 1, arg2_00, 4096);
                arg2_00 = arg2_00 + 1;
                iVar3 = 16384;
                break;
            case 1:
                RemCMap(arg1_00, arg2_00, 5120);
                RemCMap(arg1_00, arg2_00 + 1, 16384);
                arg1_00 = arg1_00 + 1;
                iVar3 = 65536;
                break;
            case 2:
                RemCMap(arg1_00, arg2_00, 20480);
                RemCMap(arg1_00 + 1, arg2_00, 65536);
                arg2_00 = arg2_00 - 1;
                iVar3 = 1024;
                break;
            case 3:
                RemCMap(arg1_00, arg2_00, 81920);
                RemCMap(arg1_00, arg2_00 - 1, 1024);
                arg1_00 = arg1_00 - 1;
                iVar3 = 4096;
                break;
            default:
                goto switchD_10023c9a4_default;
            }
            RemCMap(arg1_00, arg2_00, iVar3);
        }
    switchD_10023c9a4_default:
    }

    // 0x10023caf0
    void CollisionMap::RemCMap(int arg1, int arg2, int arg3) {
        Array<int>* this_00 = &field_16[(long)arg1];
        unsigned int* puVar1 = (unsigned int*)(*this_00)[(long)arg2];
        *puVar1 = *puVar1 & ~arg3;
    }

    // 0x10023cb20
    void CollisionMap::DelLoc(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) {
        int iVar2;
        int arg1_00;
        int arg2_00;

        int iVar1 = arg3;
        if ((arg5 & 4294967293U) == 1) {
            iVar1 = arg4;
            arg4 = arg3;
        }
        if (0 < iVar1) {
            arg1_00 = arg1 - field_0;
            iVar2 = arg2 - field_4;
            iVar1 = iVar1 + arg1_00;
            do {
                if (((-1 < arg1_00) && (arg1_00 < field_8)) && (arg2_00 = iVar2, 0 < arg4)) {
                    do {
                        if ((-1 < arg2_00) && (arg2_00 < (int)field_12)) {
                            RemCMap(arg1_00, arg2_00, (unsigned int)arg6 << 17 | 256);
                        }
                        arg2_00 = arg2_00 + 1;
                    } while (arg2_00 < iVar2 + arg4);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < iVar1);
        }
    }

    // 0x10023cbf0
    void CollisionMap::UnblockGroundDecor(int arg1, int arg2) {
        int iVar1 = field_4;
        Array<int>* this_00 = &field_16[(long)arg1 - (long)field_0];
        long lVar2 = (*this_00)[(long)arg2 - (long)iVar1];
        *(uint8_t*)(lVar2 + 2) = *(uint8_t*)(lVar2 + 2) & 251;
    }

    // 0x10023cc30
    unsigned long CollisionMap::TestWall(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        bool bVar1;
        uint32_t uVar2;
        unsigned int uVar6;
        Array<int>* pAVar7;
        uint8_t* pbVar8;
        char* pcVar9;
        unsigned int* puVar10;
        bool bVar16;
        CollisionMap* unaff_R15;

        uint64_t uVar18 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        if (arg3 == 1) {
            if ((arg1 == arg4) && (unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1), arg2 == arg5))
                goto LAB_10023dc26;
        } else if ((((arg1 <= arg4) && (arg4 < arg3 + arg1)) && (arg5 <= arg1)) &&
                   (unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1), 0 < arg3))
            goto LAB_10023dc26;
        unsigned int uVar12 = arg1 - field_0;
        CollisionMap* pCVar13 = (CollisionMap*)(unsigned long)uVar12;
        unsigned int uVar14 = arg2 - field_4;
        int iVar15 = arg4 - field_0;
        int iVar17 = arg5 - field_4;
        uVar18 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        if (arg3 == 1) {
            if (arg6 == 9) {
                if ((arg1 == arg4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    pbVar8 = (uint8_t*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 = (CollisionMap*)(((uint64_t)((uint64_t)(uint32_t)(uVar14 >> 8)) << 8) | (uint8_t)1);
                    if ((*pbVar8 & 32) == 0)
                        goto LAB_10023dc26;
                }
                uVar2 = (uint32_t)((unsigned int)arg2 >> 8);
                if ((arg1 == arg4) && (uVar14 == iVar17 - 1U)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    pbVar8 = (uint8_t*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 = (CollisionMap*)(((uint64_t)((uint64_t)uVar2) << 8) | (uint8_t)1);
                    if ((*pbVar8 & 2) == 0)
                        goto LAB_10023dc26;
                }
                if ((uVar12 == iVar15 - 1U) && (arg2 == arg5)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    pbVar8 = (uint8_t*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 = (CollisionMap*)(((uint64_t)((uint64_t)uVar2) << 8) | (uint8_t)1);
                    if ((*pbVar8 & 8) == 0)
                        goto LAB_10023dc26;
                }
                if ((uVar12 == iVar15 + 1U) && (arg2 == arg5)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    pcVar9 = (char*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 =
                        (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                    if (-1 < *pcVar9)
                        goto LAB_10023dc26;
                }
                goto LAB_10023dc1e;
            }
            if (arg6 != 2) {
                if (arg6 != 0)
                    goto LAB_10023dc1e;
                switch (arg7) {
                case 0:
                    uVar6 = iVar15 - 1;
                    break;
                case 1:
                    if (arg1 == arg4) {
                        uVar6 = iVar17 + 1;
                    LAB_10023cee6:
                        unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                        if (uVar14 == uVar6)
                            goto LAB_10023dc26;
                    }
                    goto LAB_10023ceef;
                case 2:
                    uVar6 = iVar15 + 1;
                    break;
                case 3:
                    if (arg1 == arg4) {
                        uVar6 = iVar17 - 1;
                        goto LAB_10023cee6;
                    }
                LAB_10023ceef:
                    unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                    if ((uVar12 == iVar15 - 1U) && (arg2 == arg5)) {
                        pAVar7 = &field_16[(long)(int)uVar12];
                        puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                        if ((*puVar10 & 19136776) == 0)
                            goto LAB_10023dc26;
                    }
                    if ((uVar12 != iVar15 + 1U) || (arg2 != arg5))
                        goto LAB_10023dc1e;
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    uVar12 = *puVar10 & 19136896;
                    goto joined_r0x00010023cf96;
                default:
                    goto LAB_10023dc1e;
                }
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                if ((uVar12 == uVar6) && (arg2 == arg5))
                    goto LAB_10023dc26;
                if ((arg1 == arg4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    if ((*puVar10 & 19136800) == 0)
                        goto LAB_10023dc26;
                }
                if ((arg1 != arg4) || (uVar14 != iVar17 - 1U))
                    goto LAB_10023dc1e;
                pAVar7 = &field_16[(long)(int)uVar12];
                puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                uVar12 = *puVar10 & 19136770;
            joined_r0x00010023cf96:
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                goto joined_r0x00010023cf96;
            }
            switch (arg7) {
            case 0:
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                if (((uVar12 == iVar15 - 1U) && (arg2 == arg5)) || ((arg1 == arg4 && (uVar14 == iVar17 + 1U))))
                    goto LAB_10023dc26;
                if ((uVar12 == iVar15 + 1U) && (arg2 == arg5)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    if ((*puVar10 & 19136896) == 0)
                        goto LAB_10023dc26;
                }
                if (arg1 != arg4)
                    break;
            joined_r0x00010023d10e:
                if (uVar14 != iVar17 - 1U)
                    break;
                pAVar7 = &field_16[(long)(int)uVar12];
                puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                uVar12 = *puVar10 & 19136770;
                goto joined_r0x00010023cf96;
            case 1:
                if ((uVar12 == iVar15 - 1U) && (arg2 == arg5)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 = pCVar13;
                    if ((*puVar10 & 19136776) == 0)
                        goto LAB_10023dc23;
                }
                unaff_R15 = (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                if (((arg1 == arg4) && (uVar14 == iVar17 + 1U)) || ((uVar12 == iVar15 + 1U && (arg2 == arg5))))
                    goto LAB_10023dc26;
                if (arg1 == arg4)
                    goto joined_r0x00010023d10e;
                break;
            case 2:
                if ((uVar12 == iVar15 - 1U) && (arg2 == arg5)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 = pCVar13;
                    if ((*puVar10 & 19136776) == 0)
                        goto LAB_10023dc23;
                }
                if ((arg1 == arg4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    unaff_R15 = pCVar13;
                    if ((*puVar10 & 19136800) == 0)
                        goto LAB_10023dc23;
                }
                unaff_R15 = (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                if ((uVar12 == iVar15 + 1U) && (arg2 == arg5))
                    goto LAB_10023dc26;
                goto LAB_10023d30b;
            case 3:
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                if ((uVar12 == iVar15 - 1U) && (arg2 == arg5))
                    goto LAB_10023dc26;
                if ((arg1 == arg4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    if ((*puVar10 & 19136800) == 0)
                        goto LAB_10023dc26;
                }
                if ((uVar12 == iVar15 + 1U) && (arg2 == arg5)) {
                    pAVar7 = &field_16[(long)(int)uVar12];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    if ((*puVar10 & 19136896) == 0)
                        goto LAB_10023dc26;
                }
            LAB_10023d30b:
                if ((arg1 == arg4) && (uVar14 == iVar17 - 1U))
                    goto LAB_10023dc26;
            }
            goto LAB_10023dc1e;
        }
        int iVar11 = uVar12 + arg3;
        int iVar3 = uVar12 + arg3 - 1;
        int iVar4 = uVar14 + arg3;
        int iVar5 = uVar14 + arg3 - 1;
        if (arg6 == 9) {
            if ((iVar15 < iVar11 && arg1 <= arg4) && (uVar14 == iVar17 + 1U)) {
                pAVar7 = &field_16[(long)iVar15];
                puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                unaff_R15 = this;
                if ((*puVar10 & 19136800) == 0)
                    goto LAB_10023dc23;
            }
            if ((iVar15 < iVar11 && arg1 <= arg4) && uVar14 == iVar17 - arg3) {
                unaff_R15 = (CollisionMap*)(unsigned long)(unsigned int)arg2;
                pAVar7 = &field_16[(long)iVar15];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar5];
                if ((*puVar10 & 19136770) == 0)
                    goto LAB_10023dc23;
            }
            if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4)) {
                pAVar7 = &field_16[(long)iVar3];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                unaff_R15 = pCVar13;
                if ((*puVar10 & 19136776) == 0)
                    goto LAB_10023dc23;
            }
            if (((uVar12 == iVar15 + 1U) && (arg2 <= arg5)) && (iVar17 < iVar4)) {
                pAVar7 = &field_16[(long)(int)uVar12];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                if ((*puVar10 & 19136896) == 0)
                    goto LAB_10023dc23;
            }
            goto LAB_10023dc1e;
        }
        if (arg6 != 2) {
            if (arg6 != 0)
                goto LAB_10023dc1e;
            switch (arg7) {
            case 0:
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4))
                    goto LAB_10023dc26;
                bVar16 = iVar15 < iVar11 && arg1 <= arg4;
                if ((iVar15 < iVar11 && arg1 <= arg4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = &field_16[(long)iVar15];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    uVar12 = *puVar10;
                joined_r0x00010023d52a:
                    unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                    if ((uVar12 & 19136800) == 0)
                        goto LAB_10023dc26;
                }
                break;
            case 1:
                if ((arg1 <= arg4) && (iVar15 < iVar11)) {
                    uVar6 = iVar17 + 1;
                LAB_10023d5b1:
                    unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                    if (uVar14 == uVar6)
                        goto LAB_10023dc26;
                }
                goto LAB_10023d5ba;
            case 2:
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                if (((uVar12 == iVar15 + 1U) && (arg2 <= arg5)) && (iVar17 < iVar4))
                    goto LAB_10023dc26;
                bVar16 = iVar15 < iVar11 && arg1 <= arg4;
                if ((iVar15 < iVar11 && arg1 <= arg4) && (uVar14 == iVar17 + 1U)) {
                    pAVar7 = &field_16[(long)iVar15];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                    uVar12 = *puVar10;
                    goto joined_r0x00010023d52a;
                }
                break;
            case 3:
                if ((arg1 <= arg4) && (iVar15 < iVar11)) {
                    uVar6 = iVar17 - arg3;
                    goto LAB_10023d5b1;
                }
            LAB_10023d5ba:
                unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
                if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4)) {
                    pAVar7 = &field_16[(long)iVar3];
                    puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                    if ((*puVar10 & 19136776) == 0)
                        goto LAB_10023dc26;
                }
                if (((uVar12 != iVar15 + 1U) || (arg5 < arg2)) || (iVar4 <= iVar17))
                    goto LAB_10023dc1e;
                pAVar7 = &field_16[(long)(int)uVar12];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                uVar12 = *puVar10 & 19136896;
                goto joined_r0x00010023cf96;
            default:
                goto LAB_10023dc1e;
            }
            unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
            if ((bVar16 & uVar14 == iVar17 - arg3)) {
                pAVar7 = &field_16[(long)iVar15];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar5];
                uVar12 = *puVar10;
            joined_r0x00010023d590:
                uVar12 = uVar12 & 19136770;
            joined_r0x00010023cf96:
                if (uVar12 == 0)
                    goto LAB_10023dc26;
            }
            goto LAB_10023dc1e;
        }
        switch (arg7) {
        case 0:
            unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
            if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4))
                goto LAB_10023dc26;
            if ((iVar15 < iVar11 && arg1 <= arg4) && (uVar14 == iVar17 + 1U))
                goto LAB_10023dc26;
            if ((uVar12 == iVar15 + 1U) && ((arg2 <= arg5 && (iVar17 < iVar4)))) {
                pAVar7 = &field_16[(long)(int)uVar12];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                if ((*puVar10 & 19136896) == 0)
                    goto LAB_10023dc26;
            }
            if ((iVar15 < iVar11 && arg1 <= arg4) && uVar14 == iVar17 - arg3)
                goto LAB_10023d871;
            break;
        case 1:
            if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4)) {
                unaff_R15 = (CollisionMap*)(unsigned long)(unsigned int)arg4;
                pAVar7 = &field_16[(long)iVar3];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                if ((*puVar10 & 19136776) == 0) {
                LAB_10023dc23:
                    unaff_R15 =
                        (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                    goto LAB_10023dc26;
                }
            }
            unaff_R15 = (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
            if (((iVar15 < iVar11 && arg1 <= arg4) && (uVar14 == iVar17 + 1U)) ||
                ((uVar12 == iVar15 + 1U && ((arg2 <= arg5 && (iVar17 < iVar4))))))
                goto LAB_10023dc26;
            if ((iVar15 >= iVar11 || arg1 > arg4) || uVar14 != iVar17 - arg3)
                break;
        LAB_10023d871:
            pAVar7 = &field_16[(long)iVar15];
            puVar10 = (unsigned int*)(*pAVar7)[(long)iVar5];
            uVar12 = *puVar10;
            goto joined_r0x00010023d590;
        case 2:
            if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4)) {
                unaff_R15 = (CollisionMap*)(unsigned long)(unsigned int)arg4;
                pAVar7 = &field_16[(long)iVar3];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                if ((*puVar10 & 19136776) == 0)
                    goto LAB_10023dc23;
            }
            bVar1 = arg1 <= arg4;
            pCVar13 = (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)bVar1);
            bVar16 = iVar15 < iVar11 && bVar1;
            if ((iVar15 < iVar11 && bVar1) && (uVar14 == iVar17 + 1U)) {
                pAVar7 = &field_16[(long)iVar15];
                puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                unaff_R15 = (CollisionMap*)(unsigned long)uVar14;
                pCVar13 = (CollisionMap*)(unsigned long)uVar14;
                if ((*puVar10 & 19136800) == 0)
                    goto LAB_10023dc23;
            }
            unaff_R15 = (CollisionMap*)(((uint64_t)((int64_t)((unsigned long)pCVar13 >> 8)) << 8) | (uint8_t)1);
            if (((uVar12 == iVar15 + 1U) && (arg2 <= arg5)) && (iVar17 < iVar4))
                goto LAB_10023dc26;
            goto LAB_10023dabe;
        case 3:
            unaff_R15 = (CollisionMap*)(((uint64_t)uVar18 << 8) | (uint8_t)1);
            if (((uVar12 == iVar15 - arg3) && (arg2 <= arg5)) && (iVar17 < iVar4))
                goto LAB_10023dc26;
            bVar16 = iVar15 < iVar11 && arg1 <= arg4;
            if ((iVar15 < iVar11 && arg1 <= arg4) && (uVar14 == iVar17 + 1U)) {
                pAVar7 = &field_16[(long)iVar15];
                puVar10 = (unsigned int*)(*pAVar7)[(long)(int)uVar14];
                if ((*puVar10 & 19136800) == 0)
                    goto LAB_10023dc26;
            }
            if (((uVar12 == iVar15 + 1U) && (arg2 <= arg5)) && (iVar17 < iVar4)) {
                pAVar7 = &field_16[(long)(int)uVar12];
                puVar10 = (unsigned int*)(*pAVar7)[(long)iVar17];
                if ((*puVar10 & 19136896) == 0)
                    goto LAB_10023dc26;
            }
        LAB_10023dabe:
            if ((bVar16 & uVar14 == iVar17 - arg3))
                goto LAB_10023dc26;
        }
    LAB_10023dc1e:
        unaff_R15 = nullptr;
    LAB_10023dc26:
        return (unsigned long)unaff_R15 & 4294967295;
    }

    // 0x10023dc80
    uint64_t CollisionMap::TestWDecor(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        uint8_t bVar1;
        Array<int>* pAVar2;
        uint8_t* pbVar3;
        char* pcVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        if (arg3 == 1) {
            if ((arg1 == arg4) && (arg2 == arg5)) {
                return 1;
            }
        } else if ((((arg1 <= arg4) && (arg4 < arg3 + arg1)) && (arg2 <= arg5)) && (0 < arg3)) {
            return 1;
        }
        int iVar12 = arg1 - field_0;
        int iVar11 = arg2 - field_4;
        int iVar9 = arg4 - field_0;
        int iVar10 = arg5 - field_4;
        if (arg3 != 1) {
            iVar5 = iVar12 + arg3;
            iVar6 = iVar12 + arg3 - 1;
            iVar8 = iVar11 + arg3;
            iVar7 = iVar11 + arg3 - 1;
            if ((arg6 & 4294967294U) != 6)
                goto switchD_10023ddeb_default;
            if (arg6 == 7) {
                arg7 = arg7 + 2U & 3;
            }
            switch (arg7) {
            case 0:
                if (((iVar12 == iVar9 + 1) && (arg2 <= arg5)) && (iVar10 < iVar8)) {
                    pAVar2 = &field_16[(long)iVar12];
                    pcVar4 = (char*)(*pAVar2)[(long)iVar10];
                    if (-1 < *pcVar4) {
                        return 1;
                    }
                }
                break;
            case 1:
                if (((iVar12 == iVar9 - arg3) && (arg2 <= arg5)) && (iVar10 < iVar8)) {
                    pAVar2 = &field_16[(long)iVar6];
                    pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar10];
                    if ((*pbVar3 & 8) == 0) {
                        return 1;
                    }
                }
                break;
            case 2:
                if (((iVar12 == iVar9 - arg3) && (arg2 <= arg5)) && (iVar10 < iVar8)) {
                    pAVar2 = &field_16[(long)iVar6];
                    pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar10];
                    if ((*pbVar3 & 8) == 0) {
                        return 1;
                    }
                }
                goto LAB_10023e370;
            case 3:
                if (((iVar12 == iVar9 + 1) && (arg2 <= arg5)) && (iVar10 < iVar8)) {
                    pAVar2 = &field_16[(long)iVar12];
                    pcVar4 = (char*)(*pAVar2)[(long)iVar10];
                    if (-1 < *pcVar4) {
                        return 1;
                    }
                }
            LAB_10023e370:
                if (((arg1 <= arg4) && (iVar9 < iVar5)) && (iVar11 == iVar10 + 1)) {
                    pAVar2 = &field_16[(long)iVar9];
                    pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                    bVar1 = *pbVar3 & 32;
                    goto joined_r0x00010023e3e1;
                }
            default:
                goto switchD_10023ddeb_default;
            }
            if (((arg1 <= arg4) && (iVar9 < iVar5)) && (iVar11 == iVar10 - arg3)) {
                pAVar2 = &field_16[(long)iVar9];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar7];
                bVar1 = *pbVar3 & 2;
            joined_r0x00010023e3e1:
                if (bVar1 == 0) {
                    return 1;
                }
            }
        switchD_10023ddeb_default:
            if (arg6 != 8) {
                return 0;
            }
            if ((iVar9 < iVar5 && arg1 <= arg4) && (iVar11 == iVar10 + 1)) {
                pAVar2 = &field_16[(long)iVar9];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                if ((*pbVar3 & 32) == 0) {
                    return 1;
                }
            }
            if ((iVar9 < iVar5 && arg1 <= arg4) && iVar11 == iVar10 - arg3) {
                pAVar2 = &field_16[(long)iVar9];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar7];
                if ((*pbVar3 & 2) == 0) {
                    return 1;
                }
            }
            if (((iVar12 == iVar9 - arg3) && (arg2 <= arg5)) && (iVar10 < iVar8)) {
                pAVar2 = &field_16[(long)iVar6];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar10];
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            if (iVar12 != iVar9 + 1) {
                return 0;
            }
            if (arg5 < arg2) {
                return 0;
            }
            if (iVar8 <= iVar10) {
                return 0;
            }
            pAVar2 = &field_16[(long)iVar12];
            goto LAB_10023e544;
        }
        if ((arg6 & 4294967294U) != 6)
            goto switchD_10023dd2f_default;
        if (arg6 == 7) {
            arg7 = arg7 + 2U & 3;
        }
        switch (arg7) {
        case 0:
            if ((iVar12 == iVar9 + 1) && (arg2 == arg5)) {
                pAVar2 = &field_16[(long)iVar12];
                pcVar4 = (char*)(*pAVar2)[(long)iVar11];
                if (-1 < *pcVar4) {
                    return 1;
                }
            }
            break;
        case 1:
            if ((iVar12 == iVar9 - 1) && (arg2 == arg5)) {
                pAVar2 = &field_16[(long)iVar12];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            break;
        case 2:
            if ((iVar12 == iVar9 - 1) && (arg2 == arg5)) {
                pAVar2 = &field_16[(long)iVar12];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            goto LAB_10023dff2;
        case 3:
            if ((iVar12 == iVar9 + 1) && (arg2 == arg5)) {
                pAVar2 = &field_16[(long)iVar12];
                pcVar4 = (char*)(*pAVar2)[(long)iVar11];
                if (-1 < *pcVar4) {
                    return 1;
                }
            }
        LAB_10023dff2:
            if ((arg1 == arg4) && (iVar11 == iVar10 + 1)) {
                pAVar2 = &field_16[(long)iVar12];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                bVar1 = *pbVar3 & 32;
                goto joined_r0x00010023e047;
            }
        default:
            goto switchD_10023dd2f_default;
        }
        if ((arg1 == arg4) && (iVar11 == iVar10 - 1)) {
            pAVar2 = &field_16[(long)iVar12];
            pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
            bVar1 = *pbVar3 & 2;
        joined_r0x00010023e047:
            if (bVar1 == 0) {
                return 1;
            }
        }
    switchD_10023dd2f_default:
        if (arg6 == 8) {
            if ((arg1 == arg4) && (iVar11 == iVar10 + 1)) {
                pAVar2 = &field_16[(long)iVar12];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                if ((*pbVar3 & 32) == 0) {
                    return 1;
                }
            }
            if ((arg1 == arg4) && (iVar11 == iVar10 - 1)) {
                pAVar2 = &field_16[(long)iVar12];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                if ((*pbVar3 & 2) == 0) {
                    return 1;
                }
            }
            if ((iVar12 == iVar9 - 1) && (arg2 == arg5)) {
                pAVar2 = &field_16[(long)iVar12];
                pbVar3 = (uint8_t*)(*pAVar2)[(long)iVar11];
                if ((*pbVar3 & 8) == 0) {
                    return 1;
                }
            }
            if ((iVar12 == iVar9 + 1) && (arg2 == arg5)) {
                pAVar2 = &field_16[(long)iVar12];
                iVar10 = iVar11;
            LAB_10023e544:
                pcVar4 = (char*)(*pAVar2)[(long)iVar10];
                if (-1 < *pcVar4) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x10023e590
    unsigned long CollisionMap::TestLoc(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                        int arg8) {
        bool cVar1;
        unsigned int uVar2;
        Array<int>* pAVar3;
        unsigned int* puVar4;
        char* pcVar5;
        long lVar7;
        int iVar8;
        int iVar9;
        int in_stack_ffffffffffffffb8;

        unsigned long uVar6 = (unsigned long)(unsigned int)arg3;
        if (arg3 < 2) {
            iVar8 = arg6 + arg4;
            iVar9 = arg7 + arg5;
            uVar6 = (((uint64_t)((uint64_t)(uint32_t)((unsigned int)arg3 >> 8)) << 8) | (uint8_t)1);
            if ((((arg1 < arg4) || (iVar8 <= arg1)) || (arg2 < arg5)) || (iVar9 <= arg2)) {
                if (((arg4 - 1 == arg1) && (arg5 <= arg2)) && (arg2 < iVar9)) {
                    pAVar3 = &field_16[(long)arg1 - (long)field_0];
                    lVar7 = (long)field_4;
                    puVar4 = (unsigned int*)(*pAVar3)[arg2 - lVar7];
                    uVar6 = (((uint64_t)((int64_t)((unsigned long)lVar7 >> 8)) << 8) | (uint8_t)1);
                    if (((*puVar4 | arg8) & 8) == 0)
                        goto LAB_10023e796;
                }
                if (((iVar8 == arg1) && (arg5 <= arg2)) && (arg2 < iVar9)) {
                    pAVar3 = &field_16[(long)arg1 - (long)field_0];
                    lVar7 = (long)field_4;
                    pcVar5 = (char*)(*pAVar3)[arg2 - lVar7];
                    uVar6 = (((uint64_t)((int64_t)((unsigned long)lVar7 >> 8)) << 8) | (uint8_t)1);
                    if ((-1 < *pcVar5) && ((arg8 & 2U) == 0))
                        goto LAB_10023e796;
                }
                if ((arg5 - 1 == arg2) && ((arg4 <= arg1 && (arg1 < iVar8)))) {
                    pAVar3 = &field_16[(long)arg1 - (long)field_0];
                    puVar4 = (unsigned int*)(*pAVar3)[(long)arg2 - (long)field_4];
                    uVar6 = 1;
                    if ((arg8 & 4U) == 0 && (*puVar4 & 2) == 0)
                        goto LAB_10023e796;
                }
                if (((iVar9 == arg2) && (arg4 <= arg1)) && (arg1 < iVar8)) {
                    pAVar3 = &field_16[(long)arg1 - (long)field_0];
                    lVar7 = (long)field_4;
                    puVar4 = (unsigned int*)(*pAVar3)[arg2 - lVar7];
                    uVar6 = (((uint64_t)((int64_t)((unsigned long)lVar7 >> 8)) << 8) | (uint8_t)1);
                    if ((arg8 & 1U) == 0 && (*puVar4 & 32) == 0)
                        goto LAB_10023e796;
                }
                uVar6 = 0;
            }
        } else {
            cVar1 = TestOverlap((CollisionMap*)(unsigned long)(unsigned int)arg1, arg2, arg3, arg3, arg4, arg5, arg6,
                                arg7, in_stack_ffffffffffffffb8);
            uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
            if (!cVar1) {
                uVar2 = TestAdjacentEdge(arg1, arg2, arg3, arg3, arg4, arg5, arg6, arg7, arg8);
                uVar6 = (unsigned long)uVar2;
            }
        }
    LAB_10023e796:
        return uVar6 & 4294967295;
    }

    // 0x10023e7b0
    uint32_t CollisionMap::TestOverlap(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        uint32_t uVar1 = 0;
        if (((int)this < arg6 + arg4) && (arg4 < arg2 + (int)this)) {
            uVar1 = (((uint32_t)((int32_t)((unsigned int)(arg7 + arg5) >> 8)) << 8) |
                     (uint8_t)(arg5 < arg3 + arg1 && arg1 < arg7 + arg5));
        }
        return uVar1;
    }

    // 0x10023e7e0
    uint8_t CollisionMap::TestAdjacentEdge(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                           int arg8, int arg9) {
        Array<int>* pAVar1;
        uint8_t* pbVar2;
        char* pcVar3;
        int iVar4;
        bool bVar8;

        int iVar6 = arg4 + arg2;
        int iVar5 = arg7 + arg5;
        int iVar7 = arg8 + arg6;
        if ((iVar5 == arg1) && ((arg9 & 2U) == 0)) {
            if (arg6 < arg2) {
                arg6 = arg2;
            }
            if (iVar6 < iVar7) {
                iVar7 = iVar6;
            }
            if (arg6 < iVar7) {
                do {
                    pAVar1 = &field_16[(long)(~field_0 + iVar5)];
                    pbVar2 = (uint8_t*)(*pAVar1)[(long)(arg6 - field_4)];
                    if ((*pbVar2 & 8) == 0) {
                        return 1;
                    }
                    bVar8 = iVar7 - 1 != arg6;
                    arg6 = arg6 + 1;
                } while (bVar8);
                return 0;
            }
        } else {
            iVar4 = arg3 + arg1;
            if ((iVar4 == arg5) && ((arg9 & 8U) == 0)) {
                if (arg6 < arg2) {
                    arg6 = arg2;
                }
                if (iVar6 < iVar7) {
                    iVar7 = iVar6;
                }
                if (arg6 < iVar7) {
                    do {
                        pAVar1 = &field_16[(long)arg5 - (long)field_0];
                        pcVar3 = (char*)(*pAVar1)[(long)(arg6 - field_4)];
                        if (-1 < *pcVar3) {
                            return 1;
                        }
                        bVar8 = iVar7 - 1 != arg6;
                        arg6 = arg6 + 1;
                    } while (bVar8);
                    return 0;
                }
            } else if ((iVar7 == arg2) && ((arg9 & 1U) == 0)) {
                if (arg5 < arg1) {
                    arg5 = arg1;
                }
                if (iVar4 < iVar5) {
                    iVar5 = iVar4;
                }
                if (arg5 < iVar5) {
                    do {
                        pAVar1 = &field_16[(long)(arg5 - field_0)];
                        pbVar2 = (uint8_t*)(*pAVar1)[(long)(~field_4 + iVar7)];
                        if ((*pbVar2 & 2) == 0) {
                            return 1;
                        }
                        bVar8 = iVar5 - 1 != arg5;
                        arg5 = arg5 + 1;
                    } while (bVar8);
                    return 0;
                }
            } else {
                if (iVar6 != arg6) {
                    return 0;
                }
                if ((arg9 & 4U) != 0) {
                    return 0;
                }
                if (arg5 < arg1) {
                    arg5 = arg1;
                }
                if (iVar4 < iVar5) {
                    iVar5 = iVar4;
                }
                if (arg5 < iVar5) {
                    do {
                        pAVar1 = &field_16[(long)(arg5 - field_0)];
                        pbVar2 = (uint8_t*)(*pAVar1)[(long)arg6 - (long)field_4];
                        if ((*pbVar2 & 32) == 0) {
                            return 1;
                        }
                        bVar8 = iVar5 - 1 != arg5;
                        arg5 = arg5 + 1;
                    } while (bVar8);
                    return 0;
                }
            }
        }
        return 0;
    }

    // 0x10023e9f0
    uint64_t CollisionMap::TestLarge(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        Array<int>* pAVar1;
        uint8_t* pbVar2;
        char* pcVar3;
        uint64_t uVar4;

        int iVar5 = arg5 + arg3;
        int iVar6 = arg6 + arg4;
        if ((((arg3 <= arg1) && (arg1 < iVar5)) && (arg4 <= arg2)) && (arg2 < iVar6)) {
            return 1;
        }
        if (((arg3 - 1 == arg1) && (arg4 <= arg2)) && (arg2 < iVar6)) {
            pAVar1 = &field_16[(long)arg1 - (long)field_0];
            pbVar2 = (uint8_t*)(*pAVar1)[(long)arg2 - (long)field_4];
            if ((*pbVar2 & 8) != 0)
                goto LAB_10023ea84;
        LAB_10023eb0e:
            uVar4 = 1;
        } else {
        LAB_10023ea84:
            if (((iVar5 == arg1) && (arg4 <= arg2)) && (arg2 < iVar6)) {
                pAVar1 = &field_16[(long)arg1 - (long)field_0];
                pcVar3 = (char*)(*pAVar1)[(long)arg2 - (long)field_4];
                if (-1 < *pcVar3)
                    goto LAB_10023eb0e;
            }
            if (((arg4 - 1 == arg2) && (arg3 <= arg1)) && (arg1 < iVar5)) {
                pAVar1 = &field_16[(long)arg1 - (long)field_0];
                pbVar2 = (uint8_t*)(*pAVar1)[(long)arg2 - (long)field_4];
                if ((*pbVar2 & 2) == 0)
                    goto LAB_10023eb0e;
            }
            if (((iVar6 == arg2) && (arg3 <= arg1)) && (arg1 < iVar5)) {
                pAVar1 = &field_16[(long)arg1 - (long)field_0];
                pbVar2 = (uint8_t*)(*pAVar1)[(long)arg2 - (long)field_4];
                if ((*pbVar2 & 32) == 0) {
                    return 1;
                }
            }
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x10023eb70
    uint64_t CollisionMap::TestSquare(int arg1, int arg2, int arg3, int arg4) {
        Array<int>* pAVar1;
        uint8_t* pbVar2;
        char* pcVar3;
        uint64_t uVar4;

        if ((arg1 == arg3) && (arg2 == arg4)) {
            return 1;
        }
        if ((arg3 - 1 == arg1) && (arg2 == arg4)) {
            pAVar1 = &field_16[(long)arg1 - (long)field_0];
            pbVar2 = (uint8_t*)(*pAVar1)[(long)arg2 - (long)field_4];
            if ((*pbVar2 & 8) != 0)
                goto LAB_10023ebd1;
        LAB_10023ec45:
            uVar4 = 1;
        } else {
        LAB_10023ebd1:
            if ((arg3 + 1 == arg1) && (arg2 == arg4)) {
                pAVar1 = &field_16[(long)arg1 - (long)field_0];
                pcVar3 = (char*)(*pAVar1)[(long)arg2 - (long)field_4];
                if (-1 < *pcVar3)
                    goto LAB_10023ec45;
            }
            if ((arg4 - 1 == arg2) && (arg1 == arg3)) {
                pAVar1 = &field_16[(long)arg1 - (long)field_0];
                pbVar2 = (uint8_t*)(*pAVar1)[(long)arg2 - (long)field_4];
                if ((*pbVar2 & 2) == 0)
                    goto LAB_10023ec45;
            }
            if (arg4 + 1 == arg2 && arg1 == arg3) {
                pAVar1 = &field_16[(long)arg1 - (long)field_0];
                pbVar2 = (uint8_t*)(*pAVar1)[(long)arg2 - (long)field_4];
                if ((*pbVar2 & 32) == 0) {
                    return 1;
                }
            }
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x10023eca0
    uint32_t CollisionMap::TestRange(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     int arg9) {
        int iVar1;

        if ((((int)this < arg6 + arg4 + arg8) && (arg4 < arg2 + (int)this + arg8)) &&
            (iVar1 = arg7 + arg5 + arg8, arg1 < iVar1)) {
            return arg5 < arg3 + arg1 + arg8;
        }
        return 0;
    }

    // 0x10023ece0
    bool CollisionMap::TestRange(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        bool bVar1 = false;
        if (((int)this < arg5 + arg6 + arg3) && (arg3 < (int)this + arg6 + arg2)) {
            bVar1 = arg4 < arg6 + arg2 + arg1 && arg1 < arg5 + arg6 + arg4;
        }
        return bVar1;
    }

    // 0x10023ed20
    int CollisionMap::GetRange(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        int iVar3;

        int iVar2 = (int)this;
        if (arg4 < arg2 + iVar2) {
            iVar3 = 0;
            if (arg4 + arg6 <= iVar2) {
                iVar3 = (iVar2 - (arg4 + arg6)) + 1;
            }
        } else {
            iVar3 = (arg4 - (arg2 + iVar2)) + 1;
        }
        iVar2 = 0;
        if (arg7 + arg5 <= arg1) {
            iVar2 = (arg1 - (arg7 + arg5)) + 1;
        }
        int iVar1 = (arg5 - (arg3 + arg1)) + 1;
        if (arg5 < arg3 + arg1) {
            iVar1 = iVar2;
        }
        if (iVar1 < iVar3) {
            iVar1 = iVar3;
        }
        return iVar1;
    }

    // 0x10023ed80
    int CollisionMap::GetRange1D(int arg1, int arg2, int arg3, int arg4) {
        if (arg2 + arg1 <= arg3) {
            return (arg3 - (arg2 + arg1)) + 1;
        }
        int iVar1 = 0;
        if (arg4 + arg3 <= arg1) {
            iVar1 = (arg1 - (arg4 + arg3)) + 1;
        }
        return iVar1;
    }

    // 0x10023edb0
    void CollisionMap::LineOfSightPoint2Square(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar1;

        if (1 < arg5) {
            iVar1 = arg5 + 1;
            do {
                arg3 = arg3 + (unsigned int)(arg3 < arg1);
                arg4 = arg4 + (unsigned int)(arg4 < arg2);
                iVar1 = iVar1 - 1;
            } while (2 < iVar1);
        }
        LineOfSightPoint2Point(arg1, arg2, arg3, arg4);
    }

    // 0x10023edf0
    void CollisionMap::LineOfSightPoint2Point(int arg1, int arg2, int arg3, int arg4) {
        LineOfSightPoint2Point(arg1, arg2, arg3, arg4, false);
    }

    // 0x10023ee00
    void CollisionMap::LineOfSightPoint2Rect(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        int iVar1;
        int iVar2;

        if ((1 < arg5) || (1 < arg6)) {
            iVar1 = arg6;
            if ((arg7 & 4294967293U) == 1) {
                iVar1 = arg5;
                arg5 = arg6;
            }
            if (1 < arg5) {
                iVar2 = arg5 + 1;
                do {
                    arg3 = (unsigned int)(arg3 < arg1) + arg3;
                    iVar2 = iVar2 - 1;
                } while (2 < iVar2);
            }
            if (1 < iVar1) {
                iVar1 = iVar1 + 1;
                do {
                    arg4 = (unsigned int)(arg4 < arg2) + arg4;
                    iVar1 = iVar1 - 1;
                } while (2 < iVar1);
            }
        }
        LineOfSightPoint2Point(arg1, arg2, arg3, arg4);
    }

    // 0x10023eea0
    uint64_t CollisionMap::LineOfSightPoint2Point(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        int iVar1;
        uint64_t uVar2;
        Array<int>* pAVar3;
        long lVar4;
        unsigned int* puVar5;
        int iVar6;
        unsigned long uVar7;
        unsigned long uVar8;
        int iVar9;
        unsigned int uVar10;
        int iVar12;
        unsigned int uVar13;
        unsigned long arg1_00;
        int iVar14;
        uint8_t* puVar15;

        if ((arg1 == arg3) && (arg2 == arg4)) {
        LAB_10023eec8:
            uVar2 = 1;
            goto LAB_10023ef54;
        }
        unsigned int uVar11 = arg3 - field_0;
        if (-1 < (int)uVar11) {
            if (field_8 <= (int)uVar11) {
                return 0;
            }
            iVar12 = arg4 - field_4;
            if (iVar12 < 0) {
                return 0;
            }
            if (iVar12 < (int)field_12) {
                uVar13 = arg1 - field_0;
                if ((int)uVar13 < 0) {
                    return 0;
                }
                if (field_8 <= (int)uVar13) {
                    return 0;
                }
                iVar6 = arg2 - field_4;
                if (iVar6 < 0) {
                    return 0;
                }
                if ((int)field_12 <= iVar6) {
                    return 0;
                }
                if (!arg5) {
                    iVar1 = uVar13 - uVar11;
                    if (arg1 < arg3) {
                        iVar1 = uVar11 - uVar13;
                    }
                    iVar9 = iVar6 - iVar12;
                    if (arg2 < arg4) {
                        iVar9 = iVar12 - iVar6;
                    }
                    if (iVar9 < iVar1) {
                        iVar1 = (iVar9 << 16) / iVar1;
                        if (arg1 < arg3) {
                            pAVar3 = &field_16[(long)(int)uVar13];
                            puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                            if ((*puVar5 & 16912384) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 + 1;
                        } else if (arg3 < arg1) {
                            pAVar3 = &field_16[(long)(int)uVar13];
                            lVar4 = (*pAVar3)[(long)iVar6];
                            if ((*(unsigned short*)(lVar4 + 2) & 259) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 - 1;
                        }
                        if (iVar1 < 32768) {
                            iVar9 = iVar1 + 32768;
                        } else {
                            iVar9 = iVar1 - 32768;
                            if (arg2 < arg4) {
                                pAVar3 = &field_16[(long)(int)uVar13];
                                puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                if ((*puVar5 & 17433600) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 + 1;
                            } else if (arg4 < arg2) {
                                pAVar3 = &field_16[(long)(int)uVar13];
                                puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                if ((*puVar5 & 17448960) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 - 1;
                            }
                        }
                        if (uVar13 != uVar11) {
                            puVar15 = &field_16;
                            do {
                                if ((int)uVar13 < (int)uVar11) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                    puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                    if ((*puVar5 & 17436672) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 + 1;
                                } else if ((int)uVar11 < (int)uVar13) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                    lVar4 = (*pAVar3)[(long)iVar6];
                                    if ((*(unsigned short*)(lVar4 + 2) & 267) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 - 1;
                                }
                                iVar9 = iVar9 + iVar1;
                                if (65535 < iVar9) {
                                    iVar9 = iVar9 - 65536;
                                    if (iVar6 < iVar12) {
                                        pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                        puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                        if ((*puVar5 & 17433600) != 0)
                                            goto LAB_10023ef52;
                                        iVar6 = iVar6 + 1;
                                    } else if (iVar12 < iVar6) {
                                        pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                        puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                        if ((*puVar5 & 17448960) != 0)
                                            goto LAB_10023ef52;
                                        iVar6 = iVar6 - 1;
                                    }
                                }
                            } while (uVar13 != uVar11);
                        }
                        goto LAB_10023eec8;
                    }
                    iVar9 = (iVar1 << 16) / iVar9;
                    if (arg2 < arg4) {
                        pAVar3 = &field_16[(long)(int)uVar13];
                        puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                        if ((*puVar5 & 16909312) != 0)
                            goto LAB_10023ef52;
                        iVar6 = iVar6 + 1;
                    } else if (arg4 < arg2) {
                        pAVar3 = &field_16[(long)(int)uVar13];
                        puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                        if ((*puVar5 & 16924672) != 0)
                            goto LAB_10023ef52;
                        iVar6 = iVar6 - 1;
                    }
                    if (iVar9 < 32768) {
                        iVar1 = iVar9 + 32768;
                    } else {
                        iVar1 = iVar9 - 32768;
                        if (arg1 < arg3) {
                            pAVar3 = &field_16[(long)(int)uVar13];
                            puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                            if ((*puVar5 & 17436672) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 + 1;
                        } else if (arg3 < arg1) {
                            pAVar3 = &field_16[(long)(int)uVar13];
                            lVar4 = (*pAVar3)[(long)iVar6];
                            if ((*(unsigned short*)(lVar4 + 2) & 267) != 0)
                                goto LAB_10023ef52;
                            uVar13 = uVar13 - 1;
                        }
                    }
                    if (iVar6 != iVar12) {
                        puVar15 = &field_16;
                        do {
                            if (iVar6 < iVar12) {
                                pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                if ((*puVar5 & 17433600) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 + 1;
                            } else if (iVar12 < iVar6) {
                                pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                if ((*puVar5 & 17448960) != 0)
                                    goto LAB_10023ef52;
                                iVar6 = iVar6 - 1;
                            }
                            iVar1 = iVar1 + iVar9;
                            if (65535 < iVar1) {
                                iVar1 = iVar1 - 65536;
                                if ((int)uVar13 < (int)uVar11) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                    puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                    if ((*puVar5 & 17436672) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 + 1;
                                } else if ((int)uVar11 < (int)uVar13) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                    lVar4 = (*pAVar3)[(long)iVar6];
                                    if ((*(unsigned short*)(lVar4 + 2) & 267) != 0)
                                        goto LAB_10023ef52;
                                    uVar13 = uVar13 - 1;
                                }
                            }
                        } while (iVar6 != iVar12);
                    }
                    goto LAB_10023eec8;
                }
                puVar15 = &field_16;
                pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                lVar4 = (*pAVar3)[(long)iVar6];
                if ((*(unsigned short*)(lVar4 + 2) & 258) == 0) {
                    if ((arg3 < arg1) || ((arg1 == arg3 && (arg4 < arg2)))) {
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
                        pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                        uVar7 = (unsigned long)iVar6;
                        lVar4 = (*pAVar3)[uVar7];
                        if ((*(uint8_t*)(lVar4 + 1) & 16) == 0) {
                            uVar11 = uVar13 + 1;
                            if (iVar9 < 32768) {
                                iVar12 = iVar9 + 32768;
                            } else {
                                iVar12 = iVar9 - 32768;
                                if (iVar6 < iVar1) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar11];
                                    puVar5 = (unsigned int*)(*pAVar3)[uVar7];
                                    if ((*puVar5 & 17433600) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 + 1;
                                } else if (iVar1 < iVar6) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar11];
                                    puVar5 = (unsigned int*)(*pAVar3)[uVar7];
                                    if ((*puVar5 & 17448960) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 - 1;
                                }
                            }
                            if (uVar11 != uVar10) {
                                uVar7 = (unsigned long)(int)uVar11;
                                iVar14 = ~uVar13 + uVar10;
                                do {
                                    pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                    uVar8 = (unsigned long)iVar6;
                                    puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                    if ((*puVar5 & 17436672) != 0)
                                        goto LAB_10023ef52;
                                    uVar7 = uVar7 + 1;
                                    iVar12 = iVar12 + iVar9;
                                    if (65535 < iVar12) {
                                        iVar12 = iVar12 - 65536;
                                        if (iVar6 < iVar1) {
                                            pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                            puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                            if ((*puVar5 & 17433600) != 0)
                                                goto LAB_10023ef52;
                                            iVar6 = iVar6 + 1;
                                        } else if (iVar1 < iVar6) {
                                            pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                            puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                            if ((*puVar5 & 17448960) != 0)
                                                goto LAB_10023ef52;
                                            iVar6 = iVar6 - 1;
                                        }
                                    }
                                    iVar14 = iVar14 - 1;
                                } while (iVar14 != 0);
                            }
                            goto LAB_10023eec8;
                        }
                    } else if (iVar9 < iVar12) {
                        iVar12 = (iVar9 * 65536) / iVar12;
                        if (iVar6 < iVar1) {
                            pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                            lVar4 = (*pAVar3)[(long)iVar6];
                            if ((*(uint8_t*)(lVar4 + 1) & 4) != 0)
                                goto LAB_10023ef52;
                            iVar6 = iVar6 + 1;
                        } else if (iVar1 < iVar6) {
                            pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                            lVar4 = (*pAVar3)[(long)iVar6];
                            if ((*(uint8_t*)(lVar4 + 1) & 64) != 0)
                                goto LAB_10023ef52;
                            iVar6 = iVar6 - 1;
                        }
                        if (iVar12 < 32768) {
                            iVar9 = iVar12 + 32768;
                            goto LAB_10023f9aa;
                        }
                        iVar9 = iVar12 - 32768;
                        if (uVar10 == uVar13)
                            goto LAB_10023f9aa;
                        pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                        puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                        uVar11 = *puVar5;
                        while ((uVar11 & 17436672) == 0) {
                            uVar13 = uVar13 + 1;
                        LAB_10023f9aa:
                            do {
                                if (iVar6 == iVar1)
                                    goto LAB_10023eec8;
                                if (iVar6 < iVar1) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                    puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                    if ((*puVar5 & 17433600) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 + 1;
                                } else if (iVar1 < iVar6) {
                                    pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                                    puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                                    if ((*puVar5 & 17448960) != 0)
                                        goto LAB_10023ef52;
                                    iVar6 = iVar6 - 1;
                                }
                                iVar9 = iVar9 + iVar12;
                            } while ((iVar9 < 65536) || (iVar9 = iVar9 - 65536, uVar13 == uVar10));
                            pAVar3 = (Array<int>*)(*puVar15)[(long)(int)uVar13];
                            puVar5 = (unsigned int*)(*pAVar3)[(long)iVar6];
                            uVar11 = *puVar5;
                        }
                    } else {
                        uVar7 = (unsigned long)(int)uVar13;
                        pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                        uVar8 = (unsigned long)iVar6;
                        puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                        if (iVar6 < iVar1) {
                            if ((*puVar5 & 1024) == 0) {
                                pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                arg1_00 = (unsigned long)(iVar6 + 1);
                                puVar5 = (unsigned int*)(*pAVar3)[arg1_00];
                                if ((*puVar5 & 17436672) == 0)
                                    goto joined_r0x00010023f84c;
                            }
                            pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                            lVar4 = (*pAVar3)[uVar8];
                            if ((*(uint8_t*)(lVar4 + 1) & 16) == 0) {
                                pAVar3 = (Array<int>*)(*puVar15)[(long)(int)(uVar13 + 1)];
                                puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                if ((*puVar5 & 17433600) == 0) {
                                    uVar11 = iVar6 + 1;
                                    goto LAB_10023f718;
                                }
                            }
                        } else {
                            if ((*puVar5 & 16384) == 0) {
                                pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                arg1_00 = (unsigned long)(iVar6 - 1U);
                                puVar5 = (unsigned int*)(*pAVar3)[(long)(int)(iVar6 - 1U)];
                                if ((*puVar5 & 17436672) == 0)
                                    goto joined_r0x00010023f84c;
                            }
                            pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                            lVar4 = (*pAVar3)[uVar8];
                            if ((*(uint8_t*)(lVar4 + 1) & 16) == 0) {
                                pAVar3 = (Array<int>*)(*puVar15)[(long)(int)(uVar13 + 1)];
                                puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                if ((*puVar5 & 17448960) == 0) {
                                    uVar11 = iVar6 - 1;
                                LAB_10023f718:
                                    arg1_00 = (unsigned long)uVar11;
                                joined_r0x00010023f84c:
                                    uVar11 = uVar13;
                                    uVar13 = uVar11 + 1;
                                    if (uVar13 != uVar10) {
                                        uVar7 = (unsigned long)(int)uVar13;
                                        pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                        iVar12 = (int)arg1_00;
                                        uVar8 = (unsigned long)iVar12;
                                        puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                        if (iVar1 <= iVar12) {
                                            if ((*puVar5 & 17448960) == 0)
                                                goto code_r0x00010023f90c;
                                            goto LAB_10023f92f;
                                        }
                                        if ((*puVar5 & 17433600) == 0) {
                                            pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                            arg1_00 = (unsigned long)(iVar12 + 1);
                                            puVar5 = (unsigned int*)(*pAVar3)[arg1_00];
                                            if ((*puVar5 & 17436672) == 0)
                                                goto joined_r0x00010023f84c;
                                        }
                                        pAVar3 = (Array<int>*)(*puVar15)[uVar7];
                                        puVar5 = (unsigned int*)(*pAVar3)[uVar8];
                                        if ((*puVar5 & 17436672) == 0) {
                                            pAVar3 = (Array<int>*)(*puVar15)[(long)(int)(uVar11 + 2)];
                                            puVar5 = (unsigned int*)(*pAVar3)[uVar8];
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
        pAVar3 = (Array<int>*)(*puVar15)[uVar7];
        arg1_00 = (unsigned long)(iVar12 - 1U);
        puVar5 = (unsigned int*)(*pAVar3)[(long)(int)(iVar12 - 1U)];
        if ((*puVar5 & 17436672) != 0) {
        LAB_10023f92f:
            pAVar3 = (Array<int>*)(*puVar15)[uVar7];
            puVar5 = (unsigned int*)(*pAVar3)[uVar8];
            if ((*puVar5 & 17436672) != 0)
                goto LAB_10023ef52;
            pAVar3 = (Array<int>*)(*puVar15)[(long)(int)(uVar11 + 2)];
            puVar5 = (unsigned int*)(*pAVar3)[uVar8];
            if ((*puVar5 & 17448960) != 0)
                goto LAB_10023ef52;
            uVar11 = iVar12 - 1;
        LAB_10023f981:
            arg1_00 = (unsigned long)uVar11;
        }
        goto joined_r0x00010023f84c;
    }

    // 0x10023fa80
    void CollisionMap::LineOfWalkPoint2Square(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar1;

        if (1 < arg5) {
            iVar1 = arg5 + 1;
            do {
                arg3 = arg3 + (unsigned int)(arg3 < arg1);
                arg4 = arg4 + (unsigned int)(arg4 < arg2);
                iVar1 = iVar1 - 1;
            } while (2 < iVar1);
        }
        LineOfWalkPoint2Point(arg1, arg2, arg3, arg4);
    }

    // 0x10023fac0
    bool CollisionMap::LineOfWalkPoint2Point(int arg1, int arg2, int arg3, int arg4) {
        uint8_t* puVar1;
        Array<int>* pAVar2;
        unsigned int* puVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        bool bVar11;

        if ((arg1 != arg3) || (bVar11 = true, arg2 != arg4)) {
            bVar11 = false;
            iVar8 = arg3 - field_0;
            if ((-1 < iVar8) && (iVar8 < field_8)) {
                iVar7 = arg4 - field_4;
                if (-1 < iVar7) {
                    if (iVar7 < (int)field_12) {
                        iVar10 = arg1 - field_0;
                        iVar9 = arg2 - field_4;
                        iVar6 = iVar10 - iVar8;
                        if (arg1 < arg3) {
                            iVar6 = iVar8 - iVar10;
                        }
                        iVar5 = iVar9 - iVar7;
                        if (arg2 < arg4) {
                            iVar5 = iVar7 - iVar9;
                        }
                        if (iVar5 < iVar6) {
                            if (arg1 != arg3) {
                                puVar1 = &field_16;
                                iVar4 = 32768;
                                do {
                                    if (iVar10 < iVar8) {
                                        pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                        puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                        if ((*puVar3 & 19136776) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 + 1;
                                    } else if (iVar8 < iVar10) {
                                        pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                        puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                        if ((*puVar3 & 19136896) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 - 1;
                                    }
                                    iVar4 = iVar4 + (iVar5 << 16) / iVar6;
                                    if (65535 < iVar4) {
                                        iVar4 = iVar4 - 65536;
                                        if (iVar9 < iVar7) {
                                            pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                            puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                            if ((*puVar3 & 19136770) != 0)
                                                goto LAB_10023fd74;
                                            iVar9 = iVar9 + 1;
                                        } else if (iVar7 < iVar9) {
                                            pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                            puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                            if ((*puVar3 & 19136800) != 0)
                                                goto LAB_10023fd74;
                                            iVar9 = iVar9 - 1;
                                        }
                                    }
                                } while (iVar10 != iVar8);
                            }
                        } else if (arg2 != arg4) {
                            puVar1 = &field_16;
                            iVar4 = 32768;
                            do {
                                if (iVar9 < iVar7) {
                                    pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                    puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                    if ((*puVar3 & 19136770) != 0)
                                        goto LAB_10023fd74;
                                    iVar9 = iVar9 + 1;
                                } else if (iVar7 < iVar9) {
                                    pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                    puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                    if ((*puVar3 & 19136800) != 0)
                                        goto LAB_10023fd74;
                                    iVar9 = iVar9 - 1;
                                }
                                iVar4 = iVar4 + (iVar6 << 16) / iVar5;
                                if (65535 < iVar4) {
                                    iVar4 = iVar4 - 65536;
                                    if (iVar10 < iVar8) {
                                        pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                        puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                        if ((*puVar3 & 19136776) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 + 1;
                                    } else if (iVar8 < iVar10) {
                                        pAVar2 = (Array<int>*)(*puVar1)[(long)iVar10];
                                        puVar3 = (unsigned int*)(*pAVar2)[(long)iVar9];
                                        if ((*puVar3 & 19136896) != 0)
                                            goto LAB_10023fd74;
                                        iVar10 = iVar10 - 1;
                                    }
                                }
                            } while (iVar9 != iVar7);
                        }
                        pAVar2 = &field_16[(long)iVar8];
                        puVar3 = (unsigned int*)(*pAVar2)[(long)iVar7];
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
