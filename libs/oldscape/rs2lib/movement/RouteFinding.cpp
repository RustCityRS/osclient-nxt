// libs/oldscape/rs2lib/movement/RouteFinding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::movement {
    class RouteFinding {
    public:
        unsigned long FindRoute(int arg1, int arg2, int arg3, const RouteDestination& routeDestination,
                                const CollisionMap& collisionMap, bool arg6, std::array<int, 50ul>& arg7,
                                std::array<int, 50ul>& arg8);
        unsigned long RouteFindSize1(int arg1, int arg2, const RouteDestination& routeDestination,
                                     const CollisionMap& collisionMap);
        unsigned long RouteFindSize2(int arg1, int arg2, const RouteDestination& routeDestination,
                                     const CollisionMap& collisionMap);
        unsigned long RouteFindBig(int arg1, int arg2, int arg3, const RouteDestination& routeDestination,
                                   const CollisionMap& collisionMap);
        static std::array<std::array<int, 128ul>, 128ul> m_dirMap;
        static std::array<std::array<int, 128ul>, 128ul> m_distMap;
        static int32_t m_routeX;
        static int32_t m_routeZ;
        static std::array<int, 4096ul> m_listx;
        static std::array<int, 4096ul> m_listz;

        uint8_t _unknown_0[1];
    };

    // 0x101687920
    std::array<std::array<int, 128ul>, 128ul> RouteFinding::m_dirMap;

    // 0x101697920
    std::array<std::array<int, 128ul>, 128ul> RouteFinding::m_distMap;

    // 0x1016a7920
    int32_t RouteFinding::m_routeX;

    // 0x1016a7924
    int32_t RouteFinding::m_routeZ;

    // 0x1016a7928
    std::array<int, 4096ul> RouteFinding::m_listx;

    // 0x1016ab928
    std::array<int, 4096ul> RouteFinding::m_listz;

    // 0x10023fd90
    unsigned long RouteFinding::FindRoute(int arg1, int arg2, int arg3, const RouteDestination& routeDestination,
                                          const CollisionMap& collisionMap, bool arg6, std::array<int, 50ul>& arg7,
                                          std::array<int, 50ul>& arg8) {
        unsigned long uVar1;
        int iVar2;
        int iVar3;
        uint32_t uVar4;
        bool bVar5;
        bool cVar6;
        int iVar7;
        int iVar8;
        array<int, 128ul>* paVar10;
        array<int, 128ul>* this_00;
        uint32_t* puVar11;
        int* piVar12;
        unsigned int* puVar13;
        int iVar16;
        uint32_t in_register_0000000c;
        long lVar17;
        int iVar18;
        int iVar19;
        unsigned int uVar20;
        long lVar22;
        long lVar23;
        int iVar24;
        unsigned long uVar25;
        long lVar26;
        int iVar27;
        unsigned int uVar28;
        uint64_t in_stack_00000009;
        int local_74;
        int local_34;

        RouteDestination* routeDestination_00 =
            (RouteDestination*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        unsigned long uVar21 = 0;
        do {
            paVar10 = &m_dirMap[uVar21];
            this_00 = &m_distMap[uVar21];
            uVar25 = 0;
            do {
                puVar11 = (uint32_t*)(*paVar10)[uVar25];
                *puVar11 = 0;
                puVar11 = (uint32_t*)(*this_00)[uVar25];
                *puVar11 = 99999999;
                uVar25 = uVar25 + 1;
            } while (uVar25 != 128);
            uVar21 = uVar21 + 1;
        } while (uVar21 != 128);
        int iVar9 = (int)this;
        if (arg2 == 1) {
            cVar6 = RouteFindSize1(iVar9, arg1, routeDestination_00, (CollisionMap*)routeDestination);
        } else if (arg2 == 2) {
            cVar6 = RouteFindSize2(iVar9, arg1, routeDestination_00, (CollisionMap*)routeDestination);
        } else {
            cVar6 = RouteFindBig(iVar9, arg1, arg2, routeDestination_00, (CollisionMap*)routeDestination);
        }
        int iVar14 = iVar9 - 64;
        int iVar15 = arg1 - 64;
        int local_6c = m_routeX;
        int local_70 = m_routeZ;
        if (!cVar6) {
            local_34._0_1_ = (char)collisionMap;
            if ((char)local_34 == '\0') {
                return 4294967295;
            }
            iVar7 = *(int*)&routeDestination_00->field_8;
            lVar23 = (long)iVar7;
            iVar8 = *(int*)((long)&routeDestination_00->field_8 + 4);
            iVar2 = *(int*)((long)&routeDestination_00->field_16 + 4);
            lVar17 = *(int*)&routeDestination_00->field_16 + lVar23;
            local_34 = 2147483647;
            local_74 = 2147483647;
            lVar22 = (long)(iVar7 - 10);
            do {
                uVar21 = lVar22 - iVar14;
                iVar19 = (int)lVar22;
                iVar27 = 10;
                lVar26 = (long)(iVar8 - 10);
                iVar24 = -9 - iVar2;
                do {
                    if ((long)uVar21 < 128) {
                        if (-1 < (long)uVar21) {
                            uVar25 = lVar26 - iVar15;
                            if (-1 < (long)uVar25) {
                                if ((long)uVar25 < 128) {
                                    paVar10 = &m_distMap[uVar21];
                                    piVar12 = (int*)(*paVar10)[uVar25];
                                    iVar3 = *piVar12;
                                    if (iVar3 < 100) {
                                        iVar16 = (1 - (int)lVar17) + iVar19;
                                        if (lVar22 < lVar17) {
                                            iVar16 = 0;
                                        }
                                        iVar18 = iVar7 - iVar19;
                                        if (lVar23 <= lVar22) {
                                            iVar18 = iVar16;
                                        }
                                        iVar16 = iVar24;
                                        if (lVar26 < iVar2 + iVar8) {
                                            iVar16 = 0;
                                        }
                                        if (lVar26 < iVar8) {
                                            iVar16 = iVar27;
                                        }
                                        iVar16 = iVar16 * iVar16 + iVar18 * iVar18;
                                        if (iVar16 < local_34) {
                                        LAB_1002400a8:
                                            local_70 = (int)lVar26;
                                            local_74 = iVar3;
                                            local_6c = iVar19;
                                            local_34 = iVar16;
                                        } else if (iVar16 == local_34) {
                                            if (iVar3 < local_74)
                                                goto LAB_1002400a8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    iVar27 = iVar27 - 1;
                    iVar24 = iVar24 + 1;
                    bVar5 = lVar26 < (long)iVar8 + 10;
                    lVar26 = lVar26 + 1;
                } while (bVar5);
                bVar5 = lVar22 < lVar23 + 10;
                lVar22 = lVar22 + 1;
            } while (bVar5);
            if (local_34 == 2147483647) {
                return 4294967295;
            }
        }
        if ((local_6c == iVar9) && (local_70 == arg1)) {
            uVar21 = 0;
            piVar12 = (int*)(*((array<int, 50ul>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6)))[0];
            *piVar12 = local_6c;
            piVar12 = &arg7[0];
            *piVar12 = local_70;
        } else {
            piVar12 = &m_listx[0];
            *piVar12 = local_6c;
            piVar12 = &m_listz[0];
            *piVar12 = local_70;
            paVar10 = &m_dirMap[(long)(local_6c - iVar14)];
            puVar13 = (unsigned int*)(*paVar10)[(long)(local_70 - iVar15)];
            uVar28 = *puVar13;
            if ((local_6c != iVar9) || (iVar7 = 1, local_70 != arg1)) {
                iVar7 = 1;
                uVar20 = uVar28;
                do {
                    if (uVar20 == uVar28) {
                    } else {
                        uVar21 = (unsigned long)iVar7;
                        piVar12 = &m_listx[uVar21];
                        *piVar12 = local_6c;
                        iVar7 = iVar7 + 1;
                        piVar12 = &m_listz[uVar21];
                        *piVar12 = local_70;
                        uVar28 = uVar20;
                    }
                    iVar8 = (int)(uVar20 << 28) >> 31;
                    if ((uVar20 & 2) != 0) {
                        iVar8 = 1;
                    }
                    local_6c = local_6c + iVar8;
                    iVar8 = (int)(uVar20 << 29) >> 31;
                    if ((uVar20 & 1) != 0) {
                        iVar8 = 1;
                    }
                    local_70 = local_70 + iVar8;
                    paVar10 = &m_dirMap[(long)(local_6c - iVar14)];
                    puVar13 = (unsigned int*)(*paVar10)[(long)(local_70 - iVar15)];
                    uVar20 = *puVar13;
                } while ((local_6c != iVar9) || (local_70 != arg1));
            }
            uVar21 = (unsigned long)iVar7;
            iVar9 = 0;
            if (iVar7 < 0) {
                iVar9 = iVar7;
            }
            uVar25 = 0;
            do {
                uVar21 = uVar21 - 1;
                if ((unsigned int)(iVar7 - iVar9) == uVar25) {
                    return uVar25 & 4294967295;
                }
                puVar11 = &m_listx[uVar21];
                uVar4 = *puVar11;
                puVar11 =
                    (uint32_t*)(*((array<int, 50ul>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6)))[uVar25];
                *puVar11 = uVar4;
                puVar11 = &m_listz[uVar21];
                uVar4 = *puVar11;
                uVar1 = uVar25 + 1;
                puVar11 = &arg7[uVar25];
                *puVar11 = uVar4;
                uVar25 = uVar1;
            } while (uVar1 != 50);
            uVar21 = 50;
        }
        return uVar21;
    }

    // 0x1002402d0
    unsigned long RouteFinding::RouteFindSize1(int arg1, int arg2, const RouteDestination& routeDestination,
                                               const CollisionMap& collisionMap) {
        int iVar1;
        int iVar2;
        unsigned int uVar4;
        int iVar5;
        array<int, 128ul>* paVar9;
        unsigned int* puVar10;
        Array<int>* pAVar11;
        unsigned int* puVar12;
        int iVar13;
        unsigned long arg1_00;
        int iVar14;
        int iVar16;
        unsigned int uVar17;
        unsigned long arg1_02;
        long lVar18;
        unsigned long arg1_03;

        array<int, 128ul>* paVar6 = &m_dirMap[64];
        uint32_t* puVar7 = (uint32_t*)(*paVar6)[64];
        *puVar7 = 99;
        paVar6 = &m_distMap[64];
        puVar7 = (uint32_t*)(*paVar6)[64];
        *puVar7 = 0;
        bool local_38 = false;
        uint64_t uStack_37 = 0;
        int* piVar8 = &m_listx[0];
        *piVar8 = arg1;
        piVar8 = &m_listz[0];
        *piVar8 = arg2;
        uint8_t* uint8_t = &collisionMap.field_16;
        unsigned int uVar15 = 1;
        unsigned long arg1_01 = 0;
        do {
            piVar8 = &m_listx[arg1_01];
            iVar1 = *piVar8;
            piVar8 = &m_listz[arg1_01];
            iVar2 = *piVar8;
            iVar5 = collisionMap.field_0;
            iVar16 = collisionMap.field_4;
            if ((**(void (**)(...))routeDestination.field_0)(routeDestination, 1, iVar1, iVar2) != '\0')
                break;
            iVar13 = (64 - arg1) + iVar1;
            iVar14 = (64 - arg2) + iVar2;
            lVar18 = (long)iVar1 - (long)iVar5;
            arg1_02 = (long)iVar2 - (long)iVar16;
            arg1_00 = (unsigned long)iVar13;
            paVar6 = &m_distMap[arg1_00];
            arg1_03 = (unsigned long)iVar14;
            piVar8 = (int*)(*paVar6)[arg1_03];
            uVar4 = *piVar8 + 1;
            puVar12 = (unsigned int*)(unsigned long)uVar4;
            if (0 < iVar13) {
                paVar9 = &m_dirMap[(unsigned long)(iVar13 - 1)];
                puVar10 = (unsigned int*)(*paVar9)[arg1_03];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[lVar18 - 1];
                    puVar12 = (unsigned int*)(*pAVar11)[arg1_02];
                    if ((*puVar12 & 19136776) == 0) {
                        piVar8 = &m_listx[(long)(int)uVar15];
                        *piVar8 = iVar1 - 1;
                        piVar8 = &m_listz[(long)(int)uVar15];
                        *piVar8 = iVar2;
                        uVar15 = uVar15 + 1 & 4095;
                        *puVar10 = 2;
                        paVar9 = &m_distMap[(unsigned long)(iVar13 - 1)];
                        puVar12 = (unsigned int*)(*paVar9)[arg1_03];
                        *puVar12 = uVar4;
                    }
                }
            }
            iVar16 = (int)arg1_02;
            iVar5 = (int)lVar18;
            if (iVar13 < 127) {
                paVar9 = &m_dirMap[(long)(iVar13 + 1)];
                puVar10 = (unsigned int*)(*paVar9)[arg1_03];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 + 1)];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)iVar16];
                    if ((*puVar12 & 19136896) == 0) {
                        piVar8 = &m_listx[(long)(int)uVar15];
                        *piVar8 = iVar1 + 1;
                        piVar8 = &m_listz[(long)(int)uVar15];
                        *piVar8 = iVar2;
                        uVar15 = uVar15 + 1 & 4095;
                        *puVar10 = 8;
                        paVar9 = &m_distMap[(long)(iVar13 + 1)];
                        puVar12 = (unsigned int*)(*paVar9)[arg1_03];
                        *puVar12 = uVar4;
                    }
                }
            }
            if (0 < iVar14) {
                paVar9 = &m_dirMap[arg1_00];
                puVar10 = (unsigned int*)(*paVar9)[(unsigned long)(iVar14 - 1)];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long) iVar5];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 - 1)];
                    if ((*puVar12 & 19136770) == 0) {
                        piVar8 = &m_listx[(long)(int)uVar15];
                        *piVar8 = iVar1;
                        piVar8 = &m_listz[(long)(int)uVar15];
                        *piVar8 = iVar2 - 1;
                        uVar15 = uVar15 + 1 & 4095;
                        *puVar10 = 1;
                        puVar12 = (unsigned int*)(*paVar6)[(unsigned long)(iVar14 - 1)];
                        *puVar12 = uVar4;
                    }
                }
            }
            if (iVar14 < 127) {
                paVar9 = &m_dirMap[arg1_00];
                puVar10 = (unsigned int*)(*paVar9)[(long)(iVar14 + 1)];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long) iVar5];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 + 1)];
                    if ((*puVar12 & 19136800) == 0) {
                        piVar8 = &m_listx[(long)(int)uVar15];
                        *piVar8 = iVar1;
                        piVar8 = &m_listz[(long)(int)uVar15];
                        *piVar8 = iVar2 + 1;
                        uVar15 = uVar15 + 1 & 4095;
                        *puVar10 = 4;
                        puVar12 = (unsigned int*)(*paVar6)[(long)(iVar14 + 1)];
                        *puVar12 = uVar4;
                    }
                }
            }
            if ((0 < iVar13) && (0 < iVar14)) {
                paVar6 = &m_dirMap[(unsigned long)(iVar13 - 1)];
                puVar10 = (unsigned int*)(*paVar6)[(unsigned long)(iVar14 - 1)];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 - 1)];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 - 1)];
                    if ((*puVar12 & 19136782) == 0) {
                        pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 - 1)];
                        puVar12 = (unsigned int*)(*pAVar11)[(long)iVar16];
                        if ((*puVar12 & 19136776) == 0) {
                            pAVar11 = (Array<int>*)(*uint8_t)[(long) iVar5];
                            puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 - 1)];
                            if ((*puVar12 & 19136770) == 0) {
                                piVar8 = &m_listx[(long)(int)uVar15];
                                *piVar8 = iVar1 - 1;
                                piVar8 = &m_listz[(long)(int)uVar15];
                                *piVar8 = iVar2 - 1;
                                uVar15 = uVar15 + 1 & 4095;
                                *puVar10 = 3;
                                paVar6 = &m_distMap[(unsigned long)(iVar13 - 1)];
                                puVar12 = (unsigned int*)(*paVar6)[(unsigned long)(iVar14 - 1)];
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            if ((iVar13 < 127) && (0 < iVar14)) {
                paVar6 = &m_dirMap[(long)(iVar13 + 1)];
                puVar10 = (unsigned int*)(*paVar6)[(unsigned long)(iVar14 - 1)];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 + 1)];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 - 1)];
                    if ((*puVar12 & 19136899) == 0) {
                        pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 + 1)];
                        puVar12 = (unsigned int*)(*pAVar11)[(long)iVar16];
                        if ((*puVar12 & 19136896) == 0) {
                            pAVar11 = (Array<int>*)(*uint8_t)[(long) iVar5];
                            puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 - 1)];
                            if ((*puVar12 & 19136770) == 0) {
                                piVar8 = &m_listx[(long)(int)uVar15];
                                *piVar8 = iVar1 + 1;
                                piVar8 = &m_listz[(long)(int)uVar15];
                                *piVar8 = iVar2 - 1;
                                uVar15 = uVar15 + 1 & 4095;
                                *puVar10 = 9;
                                paVar6 = &m_distMap[(long)(iVar13 + 1)];
                                puVar12 = (unsigned int*)(*paVar6)[(unsigned long)(iVar14 - 1)];
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            if ((0 < iVar13) && (iVar14 < 127)) {
                paVar6 = &m_dirMap[(unsigned long)(iVar13 - 1)];
                puVar10 = (unsigned int*)(*paVar6)[(long)(iVar14 + 1)];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 - 1)];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 + 1)];
                    if ((*puVar12 & 19136824) == 0) {
                        pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 - 1)];
                        puVar12 = (unsigned int*)(*pAVar11)[(long)iVar16];
                        if ((*puVar12 & 19136776) == 0) {
                            pAVar11 = (Array<int>*)(*uint8_t)[(long) iVar5];
                            puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 + 1)];
                            if ((*puVar12 & 19136800) == 0) {
                                piVar8 = &m_listx[(long)(int)uVar15];
                                *piVar8 = iVar1 - 1;
                                piVar8 = &m_listz[(long)(int)uVar15];
                                *piVar8 = iVar2 + 1;
                                uVar15 = uVar15 + 1 & 4095;
                                *puVar10 = 6;
                                paVar6 = &m_distMap[(unsigned long)(iVar13 - 1)];
                                puVar12 = (unsigned int*)(*paVar6)[(long)(iVar14 + 1)];
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            uVar17 = (int)arg1_01 + 1U & 4095;
            if ((iVar13 < 127) && (iVar14 < 127)) {
                paVar6 = &m_dirMap[(long)(iVar13 + 1)];
                puVar10 = (unsigned int*)(*paVar6)[(long)(iVar14 + 1)];
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 + 1)];
                    puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 + 1)];
                    if ((*puVar12 & 19136992) == 0) {
                        pAVar11 = (Array<int>*)(*uint8_t)[(long)(iVar5 + 1)];
                        puVar12 = (unsigned int*)(*pAVar11)[(long)iVar16];
                        if ((*puVar12 & 19136896) == 0) {
                            pAVar11 = (Array<int>*)(*uint8_t)[(long) iVar5];
                            puVar12 = (unsigned int*)(*pAVar11)[(long)(iVar16 + 1)];
                            if ((*puVar12 & 19136800) == 0) {
                                piVar8 = &m_listx[(long)(int)uVar15];
                                *piVar8 = iVar1 + 1;
                                piVar8 = &m_listz[(long)(int)uVar15];
                                *piVar8 = iVar2 + 1;
                                uVar15 = uVar15 + 1 & 4095;
                                *puVar10 = 12;
                                paVar6 = &m_distMap[(long)(iVar13 + 1)];
                                puVar12 = (unsigned int*)(*paVar6)[(long)(iVar14 + 1)];
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            local_38 = uVar17 == uVar15;
            uStack_37 = (uint64_t)((unsigned long)puVar12 >> 8);
            arg1_01 = (unsigned long)uVar17;
        } while (!local_38);
        m_routeX = iVar1;
        m_routeZ = iVar2;
        return ~local_38 & 18446744073709551361;
    }

    // 0x100240d60
    unsigned long RouteFinding::RouteFindSize2(int arg1, int arg2, const RouteDestination& routeDestination,
                                               const CollisionMap& collisionMap) {
        unsigned long arg1_00;
        int iVar1;
        int iVar2;
        int iVar3;
        unsigned int uVar4;
        int iVar5;
        unsigned int uVar6;
        bool cVar7;
        int iVar8;
        array<int, 128ul>* paVar12;
        Array<int>* pAVar13;
        unsigned int* puVar14;
        int* piVar15;
        int iVar16;
        unsigned long arg1_01;
        unsigned long uVar18;
        long lVar19;
        unsigned int uVar20;
        unsigned long uVar21;
        int iVar22;
        unsigned int* puVar23;

        array<int, 128ul>* paVar9 = &m_dirMap[64];
        uint32_t* puVar10 = (uint32_t*)(*paVar9)[64];
        *puVar10 = 99;
        paVar9 = &m_distMap[64];
        puVar10 = (uint32_t*)(*paVar9)[64];
        *puVar10 = 0;
        bool local_b8 = false;
        int64_t iStack_b7 = 0;
        int* piVar11 = &m_listx[0];
        *piVar11 = arg1;
        piVar11 = &m_listz[0];
        *piVar11 = arg2;
        uint8_t* uint8_t = &collisionMap.field_16;
        unsigned int uVar17 = 1;
        unsigned long arg1_02 = 0;
        do {
            piVar11 = &m_listx[arg1_02];
            iVar1 = *piVar11;
            puVar23 = (unsigned int*)(long)iVar1;
            piVar11 = &m_listz[arg1_02];
            iVar2 = *piVar11;
            iVar3 = collisionMap.field_0;
            iVar8 = collisionMap.field_4;
            cVar7 = (**(void (**)(...))routeDestination.field_0)(routeDestination, 2, iVar1, iVar2);
            if (!cVar7) {
                iVar16 = (64 - arg1) + iVar1;
                iVar22 = (64 - arg2) + iVar2;
                lVar19 = (long)puVar23 - (long)iVar3;
                uVar21 = (long)iVar2 - (long)iVar8;
                arg1_01 = (unsigned long)iVar16;
                paVar9 = &m_distMap[arg1_01];
                uVar18 = (unsigned long)iVar22;
                piVar11 = (int*)(*paVar9)[uVar18];
                uVar20 = *piVar11 + 1;
                puVar14 = (unsigned int*)(unsigned long)uVar20;
                iVar3 = (int)uVar21;
                if (0 < iVar16) {
                    paVar12 = &m_dirMap[(unsigned long)(iVar16 - 1)];
                    piVar11 = (int*)(*paVar12)[uVar18];
                    iVar8 = *piVar11;
                    arg1_00 = lVar19 - 1;
                    pAVar13 = (Array<int>*)(*uint8_t)[arg1_00];
                    puVar14 = (unsigned int*)(*pAVar13)[uVar21];
                    uVar4 = *puVar14;
                    pAVar13 = (Array<int>*)(*uint8_t)[arg1_00];
                    puVar14 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 1)];
                    if ((((*puVar14 & 19136824) == 0) && ((uVar4 & 19136782) == 0)) && (iVar8 == 0)) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1 - 1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 2;
                        paVar12 = (array<int, 128ul>*)m_distMap[(unsigned long)(iVar16 - 1)];
                        puVar14 = (unsigned int*)(*paVar12)[uVar18];
                        *puVar14 = uVar20;
                    }
                }
                uVar21 = (unsigned long)iVar3;
                iVar8 = (int)lVar19;
                if (iVar16 < 126) {
                    paVar12 = &m_dirMap[(long)(iVar16 + 1)];
                    piVar11 = (int*)(*paVar12)[uVar18];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 2)];
                    puVar14 = (unsigned int*)(*pAVar13)[uVar21];
                    uVar4 = *puVar14;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 2)];
                    puVar14 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 1)];
                    if ((((*puVar14 & 19136992) == 0) && (puVar14 = puVar23, (uVar4 & 19136899) == 0)) &&
                        (iVar5 == 0)) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1 + 1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 8;
                        paVar12 = &m_distMap[(long)(iVar16 + 1)];
                        puVar14 = (unsigned int*)(*paVar12)[uVar18];
                        *puVar14 = uVar20;
                    }
                }
                uVar18 = (unsigned long)iVar8;
                puVar23 = puVar14;
                if (0 < iVar22) {
                    paVar12 = &m_dirMap[arg1_01];
                    piVar11 = (int*)(*paVar12)[(unsigned long)(iVar22 - 1)];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[uVar18];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 - 1)];
                    uVar4 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 - 1)];
                    if ((((*puVar23 & 19136899) == 0) && ((uVar4 & 19136782) == 0)) && (iVar5 == 0)) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2 - 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 1;
                        puVar23 = (unsigned int*)(*paVar9)[(unsigned long)(iVar22 - 1)];
                        *puVar23 = uVar20;
                    }
                }
                if (iVar22 < 126) {
                    paVar12 = &m_dirMap[arg1_01];
                    piVar11 = (int*)(*paVar12)[(long)(iVar22 + 1)];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[uVar18];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 2)];
                    uVar4 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 2)];
                    if ((((*puVar23 & 19136992) == 0) && ((uVar4 & 19136824) == 0)) && (iVar5 == 0)) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2 + 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 4;
                        puVar23 = (unsigned int*)(*paVar9)[(long)(iVar22 + 1)];
                        *puVar23 = uVar20;
                    }
                }
                if ((0 < iVar16) && (0 < iVar22)) {
                    paVar9 = &m_dirMap[(unsigned long)(iVar16 - 1)];
                    piVar11 = (int*)(*paVar9)[(unsigned long)(iVar22 - 1)];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 - 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[uVar21];
                    uVar4 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 - 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 - 1)];
                    uVar6 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[uVar18];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 - 1)];
                    if ((((*puVar23 & 19136911) == 0) && (((uVar6 & 19136782) == 0 && ((uVar4 & 19136830) == 0)))) &&
                        (iVar5 == 0)) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1 - 1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2 - 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 3;
                        paVar9 = &m_distMap[(unsigned long)(iVar16 - 1)];
                        puVar23 = (unsigned int*)(*paVar9)[(unsigned long)(iVar22 - 1)];
                        *puVar23 = uVar20;
                    }
                }
                if ((iVar16 < 126) && (0 < iVar22)) {
                    paVar9 = &m_dirMap[(long)(iVar16 + 1)];
                    piVar11 = (int*)(*paVar9)[(unsigned long)(iVar22 - 1)];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 - 1)];
                    uVar4 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 2)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 - 1)];
                    uVar6 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 2)];
                    puVar23 = (unsigned int*)(*pAVar13)[uVar21];
                    if (((*puVar23 & 19136995) == 0) &&
                        ((((uVar6 & 19136899) == 0 && ((uVar4 & 19136911) == 0)) && (iVar5 == 0)))) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1 + 1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2 - 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 9;
                        paVar9 = &m_distMap[(long)(iVar16 + 1)];
                        puVar23 = (unsigned int*)(*paVar9)[(unsigned long)(iVar22 - 1)];
                        *puVar23 = uVar20;
                    }
                }
                if ((0 < iVar16) && (iVar22 < 126)) {
                    paVar9 = &m_dirMap[(unsigned long)(iVar16 - 1)];
                    piVar11 = (int*)(*paVar9)[(long)(iVar22 + 1)];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 - 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 1)];
                    uVar4 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 - 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 2)];
                    uVar6 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[uVar18];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 2)];
                    if ((((*puVar23 & 19137016) == 0) && (((uVar6 & 19136824) == 0 && ((uVar4 & 19136830) == 0)))) &&
                        (iVar5 == 0)) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1 - 1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2 + 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 6;
                        paVar9 = &m_distMap[(unsigned long)(iVar16 - 1)];
                        puVar23 = (unsigned int*)(*paVar9)[(long)(iVar22 + 1)];
                        *puVar23 = uVar20;
                    }
                }
                if ((iVar16 < 126) && (iVar22 < 126)) {
                    paVar9 = &m_dirMap[(long)(iVar16 + 1)];
                    piVar11 = (int*)(*paVar9)[(long)(iVar22 + 1)];
                    iVar5 = *piVar11;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 1)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 2)];
                    uVar4 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 2)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 2)];
                    uVar6 = *puVar23;
                    pAVar13 = (Array<int>*)(*uint8_t)[(long)(iVar8 + 2)];
                    puVar23 = (unsigned int*)(*pAVar13)[(long)(iVar3 + 1)];
                    if (((*puVar23 & 19136995) == 0) &&
                        ((((uVar6 & 19136992) == 0 && ((uVar4 & 19137016) == 0)) && (iVar5 == 0)))) {
                        piVar15 = &m_listx[(long)(int)uVar17];
                        *piVar15 = iVar1 + 1;
                        piVar15 = &m_listz[(long)(int)uVar17];
                        *piVar15 = iVar2 + 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *piVar11 = 12;
                        paVar9 = &m_distMap[(long)(iVar16 + 1)];
                        puVar23 = (unsigned int*)(*paVar9)[(long)(iVar22 + 1)];
                        *puVar23 = uVar20;
                    }
                }
            } else {
                m_routeX = iVar1;
                m_routeZ = iVar2;
            }
            if (cVar7)
                goto LAB_100241a33;
            uVar20 = (int)arg1_02 + 1U & 4095;
            arg1_02 = (unsigned long)uVar20;
            local_b8 = uVar20 == uVar17;
            iStack_b7 = (int64_t)((unsigned long)puVar23 >> 8);
        } while (!local_b8);
        iStack_b7 = (int64_t)(int32_t)((unsigned int)iVar1 >> 8);
        local_b8 = true;
        m_routeX = iVar1;
        m_routeZ = iVar2;
    LAB_100241a33:
        return ~local_b8 & 18446744073709551361;
    }

    // 0x100241a50
    unsigned long RouteFinding::RouteFindBig(int arg1, int arg2, int arg3, const RouteDestination& routeDestination,
                                             const CollisionMap& collisionMap) {
        int iVar1;
        int iVar2;
        bool cVar3;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        int* piVar13;
        array<int, 128ul>* paVar14;
        Array<int>* pAVar15;
        unsigned int* puVar16;
        int* piVar17;
        unsigned int* puVar18;
        int iVar19;
        int iVar21;
        unsigned long uVar24;
        long lVar25;
        unsigned long arg1_00;
        int iVar26;
        unsigned long uVar27;
        unsigned long uVar28;
        unsigned int uVar29;
        int iVar30;
        bool bVar31;

        array<int, 128ul>* paVar8 = &m_dirMap[64];
        uint32_t* puVar9 = (uint32_t*)(*paVar8)[64];
        *puVar9 = 99;
        paVar8 = &m_distMap[64];
        puVar9 = (uint32_t*)(*paVar8)[64];
        *puVar9 = 0;
        int* piVar10 = &m_listx[0];
        *piVar10 = arg1;
        piVar10 = &m_listz[0];
        *piVar10 = arg2;
        uint8_t* uint8_t = &collisionMap.field_16;
        unsigned int uVar4 = arg3 - 1;
        int iVar23 = 128 - arg3;
        long lVar11 = (unsigned long)uVar4 - 1;
        long lVar12 = (unsigned long)(unsigned int)arg3 - 1;
        unsigned int uVar22 = 1;
        bool local_e8 = false;
        uint64_t uStack_e7 = 0;
        unsigned int uVar20 = 0;
        do {
            piVar10 = (int*)m_listx[(unsigned long)uVar20];
            iVar1 = *piVar10;
            piVar10 = (int*)m_listz[(unsigned long)uVar20];
            iVar2 = *piVar10;
            iVar30 = collisionMap.field_0;
            iVar26 = collisionMap.field_4;
            piVar10 = (int*)(**(void (**)(...))routeDestination.field_0)(routeDestination, arg3, iVar1, iVar2);
            cVar3 = (char)piVar10;
            if (!cVar3) {
                uVar29 = (64 - arg1) + iVar1;
                piVar10 = (int*)(unsigned long)uVar29;
                iVar5 = (64 - arg2) + iVar2;
                iVar30 = iVar1 - iVar30;
                iVar26 = iVar2 - iVar26;
                uVar27 = (unsigned long)(int)uVar29;
                paVar8 = &m_distMap[uVar27];
                uVar24 = (unsigned long)iVar5;
                piVar13 = (int*)(*paVar8)[uVar24];
                iVar6 = *piVar13 + 1;
                if (0 < (int)uVar29) {
                    paVar14 = &m_dirMap[(unsigned long)(uVar29 - 1)];
                    piVar13 = (int*)(*paVar14)[uVar24];
                    iVar21 = *piVar13;
                    uVar28 = (unsigned long)(iVar30 - 1);
                    pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                    puVar16 = (unsigned int*)(*pAVar15)[(long)iVar26];
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                    puVar16 = (unsigned int*)(*pAVar15)[(long)(int)(uVar4 + iVar26)];
                    bVar31 = ((*puVar16 & 19136824) == 0 && (uVar7 & 19136782) == 0) && iVar21 == 0;
                    if (2 < arg3) {
                        lVar25 = lVar11;
                        iVar21 = iVar26;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                            puVar16 = (unsigned int*)(*pAVar15)[(long)iVar21];
                            if ((*puVar16 & 19136830) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1 - 1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 2;
                        paVar14 = (array<int, 128ul>*)m_distMap[(unsigned long)(uVar29 - 1)];
                        piVar13 = (int*)(*paVar14)[uVar24];
                        *piVar13 = iVar6;
                    }
                }
                if ((int)uVar29 < iVar23) {
                    paVar14 = &m_dirMap[(long)(int)(uVar29 + 1)];
                    piVar13 = (int*)(*paVar14)[uVar24];
                    iVar21 = *piVar13;
                    uVar28 = (unsigned long)(iVar30 + arg3);
                    pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                    puVar16 = (unsigned int*)(*pAVar15)[(long)iVar26];
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                    puVar16 = (unsigned int*)(*pAVar15)[(long)(int)(uVar4 + iVar26)];
                    bVar31 = ((*puVar16 & 19136992) == 0 && (uVar7 & 19136899) == 0) && iVar21 == 0;
                    if (2 < arg3) {
                        lVar25 = lVar11;
                        iVar21 = iVar26;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                            puVar16 = (unsigned int*)(*pAVar15)[(long)iVar21];
                            if ((*puVar16 & 19136995) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1 + 1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 8;
                        paVar14 = &m_distMap[(long)(int)(uVar29 + 1)];
                        piVar13 = (int*)(*paVar14)[uVar24];
                        *piVar13 = iVar6;
                    }
                }
                if (0 < iVar5) {
                    paVar14 = &m_dirMap[uVar27];
                    piVar13 = (int*)(*paVar14)[(unsigned long)(iVar5 - 1)];
                    iVar21 = *piVar13;
                    pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar30];
                    uVar24 = (unsigned long)(iVar26 - 1);
                    puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int>*)(*uint8_t)[(long)(int)(uVar4 + iVar30)];
                    puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                    bVar31 = ((*puVar16 & 19136899) == 0 && (uVar7 & 19136782) == 0) && iVar21 == 0;
                    if (2 < arg3) {
                        lVar25 = lVar11;
                        iVar21 = iVar30;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar21];
                            puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                            if ((*puVar16 & 19136911) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2 - 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 1;
                        piVar13 = (int*)(*paVar8)[(unsigned long)(iVar5 - 1)];
                        *piVar13 = iVar6;
                    }
                }
                if (iVar5 < iVar23) {
                    paVar14 = &m_dirMap[uVar27];
                    piVar13 = (int*)(*paVar14)[(long)(iVar5 + 1)];
                    iVar21 = *piVar13;
                    pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar30];
                    uVar24 = (unsigned long)(arg3 + iVar26);
                    puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int>*)(*uint8_t)[(long)(int)(uVar4 + iVar30)];
                    puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                    bVar31 = ((*puVar16 & 19136992) == 0 && (uVar7 & 19136824) == 0) && iVar21 == 0;
                    if (2 < arg3) {
                        lVar25 = lVar11;
                        iVar21 = iVar30;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar21];
                            puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                            if ((*puVar16 & 19137016) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2 + 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 4;
                        piVar13 = (int*)(*paVar8)[(long)(iVar5 + 1)];
                        *piVar13 = iVar6;
                    }
                }
                if ((0 < (int)uVar29) && (0 < iVar5)) {
                    paVar8 = &m_dirMap[(unsigned long)(uVar29 - 1)];
                    piVar13 = (int*)(*paVar8)[(unsigned long)(iVar5 - 1)];
                    iVar21 = *piVar13;
                    uVar27 = (unsigned long)(iVar30 - 1);
                    pAVar15 = (Array<int>*)(*uint8_t)[uVar27];
                    uVar24 = (unsigned long)(iVar26 - 1);
                    puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                    bVar31 = (*puVar16 & 19136782) == 0 && iVar21 == 0;
                    if (1 < arg3) {
                        lVar25 = lVar12;
                        uVar28 = uVar27;
                        arg1_00 = uVar24;
                        do {
                            arg1_00 = arg1_00 + 1;
                            uVar28 = uVar28 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[uVar27];
                            puVar16 = (unsigned int*)(*pAVar15)[arg1_00];
                            uVar7 = *puVar16;
                            pAVar15 = (Array<int>*)(*uint8_t)[uVar28];
                            puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                            if ((*puVar16 & 19136911) != 0 || (uVar7 & 19136830) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1 - 1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2 - 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 3;
                        paVar8 = &m_distMap[(unsigned long)(uVar29 - 1)];
                        piVar13 = (int*)(*paVar8)[(unsigned long)(iVar5 - 1)];
                        *piVar13 = iVar6;
                    }
                }
                if (((int)uVar29 < iVar23) && (0 < iVar5)) {
                    paVar8 = (array<int, 128ul>*)m_dirMap[(long)(int)(uVar29 + 1)];
                    piVar13 = (int*)(*paVar8)[(unsigned long)(iVar5 - 1)];
                    iVar21 = *piVar13;
                    pAVar15 = (Array<int>*)(*uint8_t)[(long)(iVar30 + arg3)];
                    uVar24 = (unsigned long)(iVar26 - 1);
                    puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                    bVar31 = (*puVar16 & 19136899) == 0 && iVar21 == 0;
                    if (1 < arg3) {
                        lVar25 = lVar12;
                        uVar27 = uVar24;
                        iVar21 = iVar30;
                        do {
                            iVar21 = iVar21 + 1;
                            uVar27 = uVar27 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[(long)(iVar30 + arg3)];
                            puVar16 = (unsigned int*)(*pAVar15)[uVar27];
                            uVar7 = *puVar16;
                            pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar21];
                            puVar16 = (unsigned int*)(*pAVar15)[uVar24];
                            if ((*puVar16 & 19136911) != 0 || (uVar7 & 19136995) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1 + 1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2 - 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 9;
                        paVar8 = &m_distMap[(long)(int)(uVar29 + 1)];
                        piVar13 = (int*)(*paVar8)[(unsigned long)(iVar5 - 1)];
                        *piVar13 = iVar6;
                    }
                }
                if ((0 < (int)uVar29) && (iVar5 < iVar23)) {
                    paVar8 = &m_dirMap[(unsigned long)(uVar29 - 1)];
                    piVar13 = (int*)(*paVar8)[(long)(iVar5 + 1)];
                    iVar21 = *piVar13;
                    uVar24 = (unsigned long)(iVar30 - 1);
                    pAVar15 = (Array<int>*)(*uint8_t)[uVar24];
                    puVar16 = (unsigned int*)(*pAVar15)[(long)(arg3 + iVar26)];
                    bVar31 = (*puVar16 & 19136824) == 0 && iVar21 == 0;
                    if (1 < arg3) {
                        lVar25 = lVar12;
                        uVar27 = uVar24;
                        iVar21 = iVar26;
                        do {
                            iVar21 = iVar21 + 1;
                            uVar27 = uVar27 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[uVar24];
                            puVar16 = (unsigned int*)(*pAVar15)[(long)iVar21];
                            uVar7 = *puVar16;
                            pAVar15 = (Array<int>*)(*uint8_t)[uVar27];
                            puVar16 = (unsigned int*)(*pAVar15)[(long)(arg3 + iVar26)];
                            if ((*puVar16 & 19137016) != 0 || (uVar7 & 19136830) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar17 = &m_listx[(long)(int)uVar22];
                        *piVar17 = iVar1 - 1;
                        piVar17 = &m_listz[(long)(int)uVar22];
                        *piVar17 = iVar2 + 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 6;
                        paVar8 = &m_distMap[(unsigned long)(uVar29 - 1)];
                        piVar13 = (int*)(*paVar8)[(long)(iVar5 + 1)];
                        *piVar13 = iVar6;
                    }
                }
                if (((int)uVar29 < iVar23) && (iVar5 < iVar23)) {
                    paVar8 = (array<int, 128ul>*)m_dirMap[(long)(int)(uVar29 + 1)];
                    puVar16 = (unsigned int*)(*paVar8)[(long)(iVar5 + 1)];
                    uVar7 = *puVar16;
                    iVar21 = iVar30 + arg3;
                    pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar21];
                    iVar19 = arg3 + iVar26;
                    puVar18 = (unsigned int*)(*pAVar15)[(long)iVar19];
                    uVar7 = *puVar18 & 19136992 | uVar7;
                    piVar10 = (int*)(unsigned long)uVar7;
                    bVar31 = uVar7 == 0;
                    if (1 < arg3) {
                        lVar25 = lVar12;
                        do {
                            iVar30 = iVar30 + 1;
                            iVar26 = iVar26 + 1;
                            pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar30];
                            puVar18 = (unsigned int*)(*pAVar15)[(long)iVar19];
                            uVar7 = *puVar18;
                            pAVar15 = (Array<int>*)(*uint8_t)[(long) iVar21];
                            puVar18 = (unsigned int*)(*pAVar15)[(long)iVar26];
                            if ((*puVar18 & 19136995) != 0 || (uVar7 & 19137016) != 0) {
                                bVar31 = false;
                            }
                            lVar25 = lVar25 - 1;
                            piVar10 = nullptr;
                        } while (lVar25 != 0);
                    }
                    if (bVar31) {
                        piVar10 = &m_listx[(long)(int)uVar22];
                        *piVar10 = iVar1 + 1;
                        piVar10 = &m_listz[(long)(int)uVar22];
                        *piVar10 = iVar2 + 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *puVar16 = 12;
                        paVar8 = &m_distMap[(long)(int)(uVar29 + 1)];
                        piVar10 = (int*)(*paVar8)[(long)(iVar5 + 1)];
                        *piVar10 = iVar6;
                    }
                }
            } else {
                m_routeX = iVar1;
                m_routeZ = iVar2;
            }
            if (cVar3)
                goto LAB_100242aa8;
            uVar20 = uVar20 + 1 & 4095;
            local_e8 = uVar20 == uVar22;
            uStack_e7 = (uint64_t)((unsigned long)piVar10 >> 8);
        } while (!local_e8);
        local_e8 = true;
        m_routeX = iVar1;
        m_routeZ = iVar2;
    LAB_100242aa8:
        return ~local_e8 & 18446744073709551361;
    }

} // namespace jag::oldscape::movement

namespace jag {
    // 0x100244ab0
    oldscape::configdecoder::InvType* placement_new<oldscape::configdecoder::InvType>(void* arg1) {
        *(uint32_t*)arg1 = 0;
        new (arg1) callstack::Callstack();
        return arg1;
    }

    // 0x100244ad0
    ref_counter_shared_trivial<oldscape::configdecoder::InvType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::InvType>, int,
                  oldscape::configdecoder::InvType*&>(void* arg1, int&& arg2, oldscape::configdecoder::InvType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::InvType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100246b70
    oldscape::configdecoder::LocType* placement_new<oldscape::configdecoder::LocType>(void* arg1) {
        new (arg1) oldscape::configdecoder::LocType();
        return arg1;
    }

    // 0x100246b90
    ref_counter_shared<oldscape::configdecoder::LocType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::LocType>, int, oldscape::configdecoder::LocType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::LocType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::LocType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002486c0
    ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>, int,
                  oldscape::configdecoder::MesAnimType*&>(void* arg1, int&& arg2,
                                                          oldscape::configdecoder::MesAnimType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100249180
    oldscape::configdecoder::NpcType* placement_new<oldscape::configdecoder::NpcType>(void* arg1) {
        ___bzero(arg1, 728);
        new (arg1) oldscape::configdecoder::NpcType();
        return arg1;
    }

    // 0x1002491b0
    ref_counter_shared<oldscape::configdecoder::NpcType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::NpcType>, int, oldscape::configdecoder::NpcType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::NpcType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::NpcType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class ObjSpriteCacheKey {
    public:
        ~ObjSpriteCacheKey();
        ObjSpriteCacheKey(int arg1, int arg2, ObjType::SpriteTextType spriteTextType, int arg4, int arg5,
                          eastl::string str);
        ObjSpriteCacheKey();
        bool operator==(const ObjSpriteCacheKey& objSpriteCacheKey) const;
        ObjSpriteCacheKey(const ObjSpriteCacheKey& objSpriteCacheKey);

    private:
        SpriteTextType field_0;
        int field_4;
        int field_8;
        uint8_t _unknown_12[12];
    };

    // 0x1002438a0
    ObjSpriteCacheKey::ObjSpriteCacheKey() {
        new (&field_16) eastl::string();
    }

    // 0x100243aa0
    ObjSpriteCacheKey::ObjSpriteCacheKey(int arg1, int arg2, ObjType::SpriteTextType spriteTextType, int arg4, int arg5,
                                         eastl::string str) {
        field_0 = spriteTextType << 24 | arg2 << 16 | arg1;
        field_4 = arg4;
        field_8 = arg5;
        new (&field_16) eastl::string(*str);
    }

} // namespace jag::oldscape::configdecoder
