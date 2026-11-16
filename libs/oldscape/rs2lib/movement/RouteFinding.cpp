// libs/oldscape/rs2lib/movement/RouteFinding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::movement {
    class RouteFinding {
    public:
        ulong FindRoute(int, int, int, RouteDestination const&, CollisionMap const&, bool, std::array<int, 50ul>&,
                        std::array<int, 50ul>&);
        ulong RouteFindSize1(int, int, RouteDestination const&, CollisionMap const&);
        ulong RouteFindSize2(int, int, RouteDestination const&, CollisionMap const&);
        ulong RouteFindBig(int, int, int, RouteDestination const&, CollisionMap const&);
        static /* 65536 bytes */ m_dirMap;
        static /* 65536 bytes */ m_distMap;
        static /* 4 bytes */ m_routeX;
        static /* 4 bytes */ m_routeZ;
        static /* 16384 bytes */ m_listx;
        static /* 16392 bytes */ m_listz;
    };

    // 0x101687920, 65536 bytes, __common; zero-initialised
    RouteFinding::m_dirMap;

    // 0x101697920, 65536 bytes, __common; zero-initialised
    RouteFinding::m_distMap;

    // 0x1016a7920, 4 bytes, __common; zero-initialised
    RouteFinding::m_routeX;

    // 0x1016a7924, 4 bytes, __common; zero-initialised
    RouteFinding::m_routeZ;

    // 0x1016a7928, 16384 bytes, __common; zero-initialised
    RouteFinding::m_listx;

    // 0x1016ab928, 16392 bytes, __common; zero-initialised
    RouteFinding::m_listz;

    // 0x10023fd90, 1312 bytes, placed by class name and debug map
    // RouteFinding::FindRoute(int, int, int, RouteDestination const&, CollisionMap const&, bool, std::array<int, 50ul>&, std::array<int, 50ul>&)
    /* RouteFinding::FindRoute(int, int, int,
   RouteDestination const&, CollisionMap const&,
   bool, std::array<int, 50ul>&, std::array<int, 50ul>&) */

    ulong RouteFinding::FindRoute(int param_1, int param_2, int param_3, RouteDestination* param_4,
                                  CollisionMap* param_5, bool param_6, array* param_7, array* param_8) {
        ulong uVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        bool bVar5;
        char cVar6;
        int iVar7;
        int iVar8;
        array<int, 128ul>* paVar9;
        array<int, 128ul>* this;
        undefined4* puVar10;
        int* piVar11;
        uint* puVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        long lVar16;
        int iVar17;
        int iVar18;
        uint uVar19;
        ulong uVar20;
        long lVar21;
        long lVar22;
        int iVar23;
        ulong uVar24;
        long lVar25;
        int iVar26;
        uint uVar27;
        int local_74;
        int local_70;
        int local_6c;
        int local_34;

        uVar20 = 0;
        do {
            paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar20);
            this = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                (array<std::array<int, 128ul>, 128ul>*)&m_distMap, uVar20);
            uVar24 = 0;
            do {
                puVar10 = (undefined4*)std::array<int, 128ul>::operator[](paVar9, uVar24);
                *puVar10 = 0;
                puVar10 = (undefined4*)std::array<int, 128ul>::operator[](this, uVar24);
                *puVar10 = 99999999;
                uVar24 = uVar24 + 1;
            } while (uVar24 != 128);
            uVar20 = uVar20 + 1;
        } while (uVar20 != 128);
        if (param_3 == 1) {
            cVar6 = RouteFindSize1(param_1, param_2, param_4, param_5);
        } else if (param_3 == 2) {
            cVar6 = RouteFindSize2(param_1, param_2, param_4, param_5);
        } else {
            cVar6 = RouteFindBig(param_1, param_2, param_3, param_4, param_5);
        }
        iVar13 = param_1 + -64;
        iVar14 = param_2 + -64;
        local_6c = m_routeX;
        local_70 = m_routeZ;
        if (cVar6 == '\0') {
            if (!param_6) {
                return 4294967295;
            }
            iVar7 = *(int*)&param_4->field_8;
            lVar22 = (long)iVar7;
            iVar8 = *(int*)((long)&param_4->field_8 + 4);
            iVar2 = *(int*)((long)&param_4->field_16 + 4);
            lVar16 = *(int*)&param_4->field_16 + lVar22;
            local_34 = 2147483647;
            local_74 = 2147483647;
            lVar21 = (long)(iVar7 + -10);
            do {
                uVar20 = lVar21 - iVar13;
                iVar18 = (int)lVar21;
                iVar26 = 10;
                lVar25 = (long)(iVar8 + -10);
                iVar23 = -9 - iVar2;
                do {
                    if ((long)uVar20 < 128) {
                        if (-1 < (long)uVar20) {
                            uVar24 = lVar25 - iVar14;
                            if (-1 < (long)uVar24) {
                                if ((long)uVar24 < 128) {
                                    paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                                        (array<std::array<int, 128ul>, 128ul>*)&m_distMap, uVar20);
                                    piVar11 = (int*)std::array<int, 128ul>::operator[](paVar9, uVar24);
                                    iVar3 = *piVar11;
                                    if (iVar3 < 100) {
                                        iVar15 = (1 - (int)lVar16) + iVar18;
                                        if (lVar21 < lVar16) {
                                            iVar15 = 0;
                                        }
                                        iVar17 = iVar7 - iVar18;
                                        if (lVar22 <= lVar21) {
                                            iVar17 = iVar15;
                                        }
                                        iVar15 = iVar23;
                                        if (lVar25 < iVar2 + iVar8) {
                                            iVar15 = 0;
                                        }
                                        if (lVar25 < iVar8) {
                                            iVar15 = iVar26;
                                        }
                                        iVar15 = iVar15 * iVar15 + iVar17 * iVar17;
                                        if (iVar15 < local_34) {
                                        LAB_1002400a8:
                                            local_70 = (int)lVar25;
                                            local_74 = iVar3;
                                            local_6c = iVar18;
                                            local_34 = iVar15;
                                        } else if (iVar15 == local_34) {
                                            if (iVar3 < local_74)
                                                goto LAB_1002400a8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    iVar26 = iVar26 + -1;
                    iVar23 = iVar23 + 1;
                    bVar5 = lVar25 < (long)iVar8 + 10;
                    lVar25 = lVar25 + 1;
                } while (bVar5);
                bVar5 = lVar21 < lVar22 + 10;
                lVar21 = lVar21 + 1;
            } while (bVar5);
            if (local_34 == 2147483647) {
                return 4294967295;
            }
        }
        if ((local_6c == param_1) && (local_70 == param_2)) {
            uVar20 = 0;
            piVar11 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)param_7, 0);
            *piVar11 = local_6c;
            piVar11 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)param_8, 0);
            *piVar11 = local_70;
        } else {
            piVar11 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, 0);
            *piVar11 = local_6c;
            piVar11 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, 0);
            *piVar11 = local_70;
            paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(local_6c - iVar13));
            puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar9, (long)(local_70 - iVar14));
            uVar27 = *puVar12;
            if ((local_6c != param_1) || (iVar7 = 1, local_70 != param_2)) {
                iVar7 = 1;
                uVar19 = uVar27;
                do {
                    if (uVar19 == uVar27) {
                    } else {
                        uVar20 = (ulong)iVar7;
                        piVar11 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, uVar20);
                        *piVar11 = local_6c;
                        iVar7 = iVar7 + 1;
                        piVar11 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, uVar20);
                        *piVar11 = local_70;
                        uVar27 = uVar19;
                    }
                    iVar8 = (int)(uVar19 << 28) >> 31;
                    if ((uVar19 & 2) != 0) {
                        iVar8 = 1;
                    }
                    local_6c = local_6c + iVar8;
                    iVar8 = (int)(uVar19 << 29) >> 31;
                    if ((uVar19 & 1) != 0) {
                        iVar8 = 1;
                    }
                    local_70 = local_70 + iVar8;
                    paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(local_6c - iVar13));
                    puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar9, (long)(local_70 - iVar14));
                    uVar19 = *puVar12;
                } while ((local_6c != param_1) || (local_70 != param_2));
            }
            uVar20 = (ulong)iVar7;
            iVar13 = 0;
            if (iVar7 < 0) {
                iVar13 = iVar7;
            }
            uVar24 = 0;
            do {
                uVar20 = uVar20 - 1;
                if ((uint)(iVar7 - iVar13) == uVar24) {
                    return uVar24 & 4294967295;
                }
                puVar10 = (undefined4*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, uVar20);
                uVar4 = *puVar10;
                puVar10 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)param_7, uVar24);
                *puVar10 = uVar4;
                puVar10 = (undefined4*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, uVar20);
                uVar4 = *puVar10;
                uVar1 = uVar24 + 1;
                puVar10 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)param_8, uVar24);
                *puVar10 = uVar4;
                uVar24 = uVar1;
            } while (uVar1 != 50);
            uVar20 = 50;
        }
        return uVar20;
    }

    // 0x1002402d0, 2704 bytes, placed by class name and debug map
    // RouteFinding::RouteFindSize1(int, int, RouteDestination const&, CollisionMap const&)
    ulong RouteFinding::RouteFindSize1(int param_1, int param_2, RouteDestination* param_3, CollisionMap* param_4) {
        undefined1* this;
        int iVar1;
        int iVar2;
        uint uVar4;
        int iVar5;
        array<int, 128ul>* paVar6;
        undefined4* puVar7;
        int* piVar8;
        array<int, 128ul>* paVar9;
        uint* puVar10;
        Array<int, eastl::allocator>* pAVar11;
        uint* puVar12;
        int iVar13;
        ulong uVar14;
        int iVar15;
        ulong uVar16;
        uint uVar17;
        int iVar18;
        uint uVar19;
        ulong uVar20;
        long lVar21;
        ulong uVar22;
        bool local_38;
        undefined7 uStack_37;

        paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
            (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, 64);
        puVar7 = (undefined4*)std::array<int, 128ul>::operator[](paVar6, 64);
        *puVar7 = 99;
        paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, 64);
        puVar7 = (undefined4*)std::array<int, 128ul>::operator[](paVar6, 64);
        *puVar7 = 0;
        local_38 = false;
        uStack_37 = 0;
        piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, 0);
        *piVar8 = param_1;
        piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, 0);
        *piVar8 = param_2;
        this = &param_4->field_16;
        uVar17 = 1;
        uVar16 = 0;
        do {
            piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, uVar16);
            iVar1 = *piVar8;
            piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, uVar16);
            iVar2 = *piVar8;
            iVar5 = param_4->field_0;
            iVar18 = param_4->field_4;
            if ((**(code**)param_3->field_0)(param_3, 1, iVar1, iVar2) != '\0')
                break;
            iVar13 = (64 - param_1) + iVar1;
            iVar15 = (64 - param_2) + iVar2;
            lVar21 = (long)iVar1 - (long)iVar5;
            uVar20 = (long)iVar2 - (long)iVar18;
            uVar14 = (ulong)iVar13;
            paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                (array<std::array<int, 128ul>, 128ul>*)&m_distMap, uVar14);
            uVar22 = (ulong)iVar15;
            piVar8 = (int*)std::array<int, 128ul>::operator[](paVar6, uVar22);
            uVar4 = *piVar8 + 1;
            puVar12 = (uint*)(ulong)uVar4;
            if (0 < iVar13) {
                paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(iVar13 - 1));
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar9, uVar22);
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, lVar21 - 1);
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, uVar20);
                    if ((*puVar12 & 19136776) == 0) {
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar17);
                        *piVar8 = iVar1 + -1;
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar17);
                        *piVar8 = iVar2;
                        uVar17 = uVar17 + 1 & 4095;
                        *puVar10 = 2;
                        paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(iVar13 - 1));
                        puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar9, uVar22);
                        *puVar12 = uVar4;
                    }
                }
            }
            iVar18 = (int)uVar20;
            iVar5 = (int)lVar21;
            if (iVar13 < 127) {
                paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(iVar13 + 1));
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar9, uVar22);
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + 1));
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)iVar18);
                    if ((*puVar12 & 19136896) == 0) {
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar17);
                        *piVar8 = iVar1 + 1;
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar17);
                        *piVar8 = iVar2;
                        uVar17 = uVar17 + 1 & 4095;
                        *puVar10 = 8;
                        paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(iVar13 + 1));
                        puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar9, uVar22);
                        *puVar12 = uVar4;
                    }
                }
            }
            if (0 < iVar15) {
                paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar14);
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar9, (ulong)(iVar15 - 1));
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar5);
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + -1));
                    if ((*puVar12 & 19136770) == 0) {
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar17);
                        *piVar8 = iVar1;
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar17);
                        *piVar8 = iVar2 + -1;
                        uVar17 = uVar17 + 1 & 4095;
                        *puVar10 = 1;
                        puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar6, (ulong)(iVar15 - 1));
                        *puVar12 = uVar4;
                    }
                }
            }
            if (iVar15 < 127) {
                paVar9 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar14);
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar9, (long)(iVar15 + 1));
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar5);
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + 1));
                    if ((*puVar12 & 19136800) == 0) {
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar17);
                        *piVar8 = iVar1;
                        piVar8 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar17);
                        *piVar8 = iVar2 + 1;
                        uVar17 = uVar17 + 1 & 4095;
                        *puVar10 = 4;
                        puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar6, (long)(iVar15 + 1));
                        *puVar12 = uVar4;
                    }
                }
            }
            if ((0 < iVar13) && (0 < iVar15)) {
                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(iVar13 - 1));
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar6, (ulong)(iVar15 - 1));
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + -1));
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + -1));
                    if ((*puVar12 & 19136782) == 0) {
                        pAVar11 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + -1));
                        puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)iVar18);
                        if ((*puVar12 & 19136776) == 0) {
                            pAVar11 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar5);
                            puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + -1));
                            if ((*puVar12 & 19136770) == 0) {
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar1 + -1;
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar2 + -1;
                                uVar17 = uVar17 + 1 & 4095;
                                *puVar10 = 3;
                                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                                    (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(iVar13 - 1));
                                puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar6, (ulong)(iVar15 - 1));
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            if ((iVar13 < 127) && (0 < iVar15)) {
                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(iVar13 + 1));
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar6, (ulong)(iVar15 - 1));
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + 1));
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + -1));
                    if ((*puVar12 & 19136899) == 0) {
                        pAVar11 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + 1));
                        puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)iVar18);
                        if ((*puVar12 & 19136896) == 0) {
                            pAVar11 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar5);
                            puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + -1));
                            if ((*puVar12 & 19136770) == 0) {
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar1 + 1;
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar2 + -1;
                                uVar17 = uVar17 + 1 & 4095;
                                *puVar10 = 9;
                                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                                    (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(iVar13 + 1));
                                puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar6, (ulong)(iVar15 - 1));
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            if ((0 < iVar13) && (iVar15 < 127)) {
                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(iVar13 - 1));
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar6, (long)(iVar15 + 1));
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + -1));
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + 1));
                    if ((*puVar12 & 19136824) == 0) {
                        pAVar11 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + -1));
                        puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)iVar18);
                        if ((*puVar12 & 19136776) == 0) {
                            pAVar11 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar5);
                            puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + 1));
                            if ((*puVar12 & 19136800) == 0) {
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar1 + -1;
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar2 + 1;
                                uVar17 = uVar17 + 1 & 4095;
                                *puVar10 = 6;
                                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                                    (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(iVar13 - 1));
                                puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar6, (long)(iVar15 + 1));
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            uVar19 = (int)uVar16 + 1U & 4095;
            if ((iVar13 < 127) && (iVar15 < 127)) {
                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(iVar13 + 1));
                puVar10 = (uint*)std::array<int, 128ul>::operator[](paVar6, (long)(iVar15 + 1));
                puVar12 = puVar10;
                if (*puVar10 == 0) {
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + 1));
                    puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + 1));
                    if ((*puVar12 & 19136992) == 0) {
                        pAVar11 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar5 + 1));
                        puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)iVar18);
                        if ((*puVar12 & 19136896) == 0) {
                            pAVar11 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar5);
                            puVar12 = (uint*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(iVar18 + 1));
                            if ((*puVar12 & 19136800) == 0) {
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar1 + 1;
                                piVar8 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz,
                                                                                   (long)(int)uVar17);
                                *piVar8 = iVar2 + 1;
                                uVar17 = uVar17 + 1 & 4095;
                                *puVar10 = 12;
                                paVar6 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                                    (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(iVar13 + 1));
                                puVar12 = (uint*)std::array<int, 128ul>::operator[](paVar6, (long)(iVar15 + 1));
                                *puVar12 = uVar4;
                            }
                        }
                    }
                }
            }
            local_38 = uVar19 == uVar17;
            uStack_37 = (undefined7)((ulong)puVar12 >> 8);
            uVar16 = (ulong)uVar19;
        } while (!local_38);
        m_routeX = iVar1;
        m_routeZ = iVar2;
        return CONCAT71(uStack_37, ~local_38) & 18446744073709551361;
    }

    // 0x100240d60, 3312 bytes, placed by class name and debug map
    // RouteFinding::RouteFindSize2(int, int, RouteDestination const&, CollisionMap const&)
    ulong RouteFinding::RouteFindSize2(int param_1, int param_2, RouteDestination* param_3, CollisionMap* param_4) {
        undefined1* this;
        ulong uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        char cVar8;
        int iVar9;
        array<int, 128ul>* paVar10;
        undefined4* puVar11;
        int* piVar12;
        array<int, 128ul>* paVar13;
        Array<int, eastl::allocator>* pAVar14;
        uint* puVar15;
        int* piVar16;
        int iVar17;
        uint uVar18;
        ulong uVar19;
        ulong uVar20;
        long lVar21;
        uint uVar22;
        ulong uVar23;
        ulong uVar24;
        int iVar25;
        uint* puVar26;
        bool local_b8;
        int7 iStack_b7;

        paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
            (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, 64);
        puVar11 = (undefined4*)std::array<int, 128ul>::operator[](paVar10, 64);
        *puVar11 = 99;
        paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, 64);
        puVar11 = (undefined4*)std::array<int, 128ul>::operator[](paVar10, 64);
        *puVar11 = 0;
        local_b8 = false;
        iStack_b7 = 0;
        piVar12 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, 0);
        *piVar12 = param_1;
        piVar12 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, 0);
        *piVar12 = param_2;
        this = &param_4->field_16;
        uVar18 = 1;
        uVar23 = 0;
        do {
            piVar12 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, uVar23);
            iVar2 = *piVar12;
            puVar26 = (uint*)(long)iVar2;
            piVar12 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, uVar23);
            iVar3 = *piVar12;
            iVar4 = param_4->field_0;
            iVar9 = param_4->field_4;
            cVar8 = (**(code**)param_3->field_0)(param_3, 2, iVar2, iVar3);
            if (cVar8 == '\0') {
                iVar17 = (64 - param_1) + iVar2;
                iVar25 = (64 - param_2) + iVar3;
                lVar21 = (long)puVar26 - (long)iVar4;
                uVar24 = (long)iVar3 - (long)iVar9;
                uVar19 = (ulong)iVar17;
                paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_distMap, uVar19);
                uVar20 = (ulong)iVar25;
                piVar12 = (int*)std::array<int, 128ul>::operator[](paVar10, uVar20);
                uVar22 = *piVar12 + 1;
                puVar15 = (uint*)(ulong)uVar22;
                iVar4 = (int)uVar24;
                if (0 < iVar17) {
                    paVar13 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(iVar17 - 1));
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar13, uVar20);
                    iVar9 = *piVar12;
                    uVar1 = lVar21 - 1;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar1);
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, uVar24);
                    uVar5 = *puVar15;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar1);
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 1));
                    if ((((*puVar15 & 19136824) == 0) && ((uVar5 & 19136782) == 0)) && (iVar9 == 0)) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2 + -1;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 2;
                        paVar13 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(iVar17 - 1));
                        puVar15 = (uint*)std::array<int, 128ul>::operator[](paVar13, uVar20);
                        *puVar15 = uVar22;
                    }
                }
                uVar24 = (ulong)iVar4;
                iVar9 = (int)lVar21;
                if (iVar17 < 126) {
                    paVar13 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(iVar17 + 1));
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar13, uVar20);
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 2));
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, uVar24);
                    uVar5 = *puVar15;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 2));
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 1));
                    if ((((*puVar15 & 19136992) == 0) && (puVar15 = puVar26, (uVar5 & 19136899) == 0)) &&
                        (iVar6 == 0)) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2 + 1;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 8;
                        paVar13 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(iVar17 + 1));
                        puVar15 = (uint*)std::array<int, 128ul>::operator[](paVar13, uVar20);
                        *puVar15 = uVar22;
                    }
                }
                uVar20 = (ulong)iVar9;
                puVar26 = puVar15;
                if (0 < iVar25) {
                    paVar13 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar19);
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar13, (ulong)(iVar25 - 1));
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar20);
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + -1));
                    uVar5 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + -1));
                    if ((((*puVar26 & 19136899) == 0) && ((uVar5 & 19136782) == 0)) && (iVar6 == 0)) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3 + -1;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 1;
                        puVar26 = (uint*)std::array<int, 128ul>::operator[](paVar10, (ulong)(iVar25 - 1));
                        *puVar26 = uVar22;
                    }
                }
                if (iVar25 < 126) {
                    paVar13 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar19);
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar13, (long)(iVar25 + 1));
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar20);
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 2));
                    uVar5 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 2));
                    if ((((*puVar26 & 19136992) == 0) && ((uVar5 & 19136824) == 0)) && (iVar6 == 0)) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3 + 1;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 4;
                        puVar26 = (uint*)std::array<int, 128ul>::operator[](paVar10, (long)(iVar25 + 1));
                        *puVar26 = uVar22;
                    }
                }
                if ((0 < iVar17) && (0 < iVar25)) {
                    paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(iVar17 - 1));
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar10, (ulong)(iVar25 - 1));
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + -1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, uVar24);
                    uVar5 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + -1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + -1));
                    uVar7 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar20);
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + -1));
                    if ((((*puVar26 & 19136911) == 0) && (((uVar7 & 19136782) == 0 && ((uVar5 & 19136830) == 0)))) &&
                        (iVar6 == 0)) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2 + -1;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3 + -1;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 3;
                        paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(iVar17 - 1));
                        puVar26 = (uint*)std::array<int, 128ul>::operator[](paVar10, (ulong)(iVar25 - 1));
                        *puVar26 = uVar22;
                    }
                }
                if ((iVar17 < 126) && (0 < iVar25)) {
                    paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(iVar17 + 1));
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar10, (ulong)(iVar25 - 1));
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + -1));
                    uVar5 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 2));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + -1));
                    uVar7 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 2));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, uVar24);
                    if (((*puVar26 & 19136995) == 0) &&
                        ((((uVar7 & 19136899) == 0 && ((uVar5 & 19136911) == 0)) && (iVar6 == 0)))) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2 + 1;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3 + -1;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 9;
                        paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(iVar17 + 1));
                        puVar26 = (uint*)std::array<int, 128ul>::operator[](paVar10, (ulong)(iVar25 - 1));
                        *puVar26 = uVar22;
                    }
                }
                if ((0 < iVar17) && (iVar25 < 126)) {
                    paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(iVar17 - 1));
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar10, (long)(iVar25 + 1));
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + -1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 1));
                    uVar5 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + -1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 2));
                    uVar7 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar20);
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 2));
                    if ((((*puVar26 & 19137016) == 0) && (((uVar7 & 19136824) == 0 && ((uVar5 & 19136830) == 0)))) &&
                        (iVar6 == 0)) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2 + -1;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3 + 1;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 6;
                        paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(iVar17 - 1));
                        puVar26 = (uint*)std::array<int, 128ul>::operator[](paVar10, (long)(iVar25 + 1));
                        *puVar26 = uVar22;
                    }
                }
                if ((iVar17 < 126) && (iVar25 < 126)) {
                    paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(iVar17 + 1));
                    piVar12 = (int*)std::array<int, 128ul>::operator[](paVar10, (long)(iVar25 + 1));
                    iVar6 = *piVar12;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 1));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 2));
                    uVar5 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 2));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 2));
                    uVar7 = *puVar26;
                    pAVar14 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar9 + 2));
                    puVar26 = (uint*)Array<int, eastl::allocator>::operator[](pAVar14, (long)(iVar4 + 1));
                    if (((*puVar26 & 19136995) == 0) &&
                        ((((uVar7 & 19136992) == 0 && ((uVar5 & 19137016) == 0)) && (iVar6 == 0)))) {
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar18);
                        *piVar16 = iVar2 + 1;
                        piVar16 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar18);
                        *piVar16 = iVar3 + 1;
                        uVar18 = uVar18 + 1 & 4095;
                        *piVar12 = 12;
                        paVar10 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(iVar17 + 1));
                        puVar26 = (uint*)std::array<int, 128ul>::operator[](paVar10, (long)(iVar25 + 1));
                        *puVar26 = uVar22;
                    }
                }
            } else {
                m_routeX = iVar2;
                m_routeZ = iVar3;
            }
            if (cVar8 != '\0')
                goto LAB_100241a33;
            uVar22 = (int)uVar23 + 1U & 4095;
            uVar23 = (ulong)uVar22;
            local_b8 = uVar22 == uVar18;
            iStack_b7 = (int7)((ulong)puVar26 >> 8);
        } while (!local_b8);
        iStack_b7 = (int7)(int3)((uint)iVar2 >> 8);
        local_b8 = true;
        m_routeX = iVar2;
        m_routeZ = iVar3;
    LAB_100241a33:
        return CONCAT71(iStack_b7, ~local_b8) & 18446744073709551361;
    }

    // 0x100241a50, 4224 bytes, placed by class name and debug map
    // RouteFinding::RouteFindBig(int, int, int, RouteDestination const&, CollisionMap const&)
    ulong RouteFinding::RouteFindBig(int param_1, int param_2, int param_3, RouteDestination* param_4,
                                     CollisionMap* param_5) {
        int iVar1;
        int iVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        array<int, 128ul>* paVar8;
        undefined4* puVar9;
        int* piVar10;
        long lVar11;
        long lVar12;
        int* piVar13;
        array<int, 128ul>* paVar14;
        Array<int, eastl::allocator>* pAVar15;
        uint* puVar16;
        int* piVar17;
        uint* puVar18;
        int iVar19;
        uint uVar20;
        int iVar21;
        uint uVar22;
        int iVar23;
        ulong uVar24;
        long lVar25;
        ulong uVar26;
        int iVar27;
        ulong uVar28;
        ulong uVar29;
        uint uVar30;
        int iVar31;
        undefined1* this;
        bool bVar32;
        bool local_e8;
        undefined7 uStack_e7;

        paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
            (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, 64);
        puVar9 = (undefined4*)std::array<int, 128ul>::operator[](paVar8, 64);
        *puVar9 = 99;
        paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, 64);
        puVar9 = (undefined4*)std::array<int, 128ul>::operator[](paVar8, 64);
        *puVar9 = 0;
        piVar10 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, 0);
        *piVar10 = param_1;
        piVar10 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, 0);
        *piVar10 = param_2;
        this = &param_5->field_16;
        uVar4 = param_3 - 1;
        iVar23 = 128 - param_3;
        lVar11 = (ulong)uVar4 - 1;
        lVar12 = (ulong)(uint)param_3 - 1;
        uVar22 = 1;
        local_e8 = false;
        uStack_e7 = 0;
        uVar20 = 0;
        do {
            piVar10 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (ulong)uVar20);
            iVar1 = *piVar10;
            piVar10 = (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (ulong)uVar20);
            iVar2 = *piVar10;
            iVar31 = param_5->field_0;
            iVar27 = param_5->field_4;
            piVar10 = (int*)(**(code**)param_4->field_0)(param_4, param_3, iVar1, iVar2);
            cVar3 = (char)piVar10;
            if (cVar3 == '\0') {
                uVar30 = (64 - param_1) + iVar1;
                piVar10 = (int*)(ulong)uVar30;
                iVar5 = (64 - param_2) + iVar2;
                iVar31 = iVar1 - iVar31;
                iVar27 = iVar2 - iVar27;
                uVar28 = (ulong)(int)uVar30;
                paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                    (array<std::array<int, 128ul>, 128ul>*)&m_distMap, uVar28);
                uVar24 = (ulong)iVar5;
                piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, uVar24);
                iVar6 = *piVar13 + 1;
                if (0 < (int)uVar30) {
                    paVar14 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(uVar30 - 1));
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar14, uVar24);
                    iVar21 = *piVar13;
                    uVar29 = (ulong)(iVar31 + -1);
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar27);
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)(int)(uVar4 + iVar27));
                    bVar32 = ((*puVar16 & 19136824) == 0 && (uVar7 & 19136782) == 0) && iVar21 == 0;
                    if (2 < param_3) {
                        lVar25 = lVar11;
                        iVar21 = iVar27;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar21);
                            if ((*puVar16 & 19136830) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1 + -1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 2;
                        paVar14 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(uVar30 - 1));
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar14, uVar24);
                        *piVar13 = iVar6;
                    }
                }
                if ((int)uVar30 < iVar23) {
                    paVar14 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(int)(uVar30 + 1));
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar14, uVar24);
                    iVar21 = *piVar13;
                    uVar29 = (ulong)(iVar31 + param_3);
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar27);
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)(int)(uVar4 + iVar27));
                    bVar32 = ((*puVar16 & 19136992) == 0 && (uVar7 & 19136899) == 0) && iVar21 == 0;
                    if (2 < param_3) {
                        lVar25 = lVar11;
                        iVar21 = iVar27;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar21);
                            if ((*puVar16 & 19136995) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1 + 1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 8;
                        paVar14 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(int)(uVar30 + 1));
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar14, uVar24);
                        *piVar13 = iVar6;
                    }
                }
                if (0 < iVar5) {
                    paVar14 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar28);
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar14, (ulong)(iVar5 - 1));
                    iVar21 = *piVar13;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar31);
                    uVar24 = (ulong)(iVar27 + -1);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(int)(uVar4 + iVar31));
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                    bVar32 = ((*puVar16 & 19136899) == 0 && (uVar7 & 19136782) == 0) && iVar21 == 0;
                    if (2 < param_3) {
                        lVar25 = lVar11;
                        iVar21 = iVar31;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar21);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                            if ((*puVar16 & 19136911) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2 + -1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 1;
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (ulong)(iVar5 - 1));
                        *piVar13 = iVar6;
                    }
                }
                if (iVar5 < iVar23) {
                    paVar14 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, uVar28);
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar14, (long)(iVar5 + 1));
                    iVar21 = *piVar13;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar31);
                    uVar24 = (ulong)(param_3 + iVar27);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                    uVar7 = *puVar16;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(int)(uVar4 + iVar31));
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                    bVar32 = ((*puVar16 & 19136992) == 0 && (uVar7 & 19136824) == 0) && iVar21 == 0;
                    if (2 < param_3) {
                        lVar25 = lVar11;
                        iVar21 = iVar31;
                        do {
                            iVar21 = iVar21 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar21);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                            if ((*puVar16 & 19137016) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2 + 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 4;
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (long)(iVar5 + 1));
                        *piVar13 = iVar6;
                    }
                }
                if ((0 < (int)uVar30) && (0 < iVar5)) {
                    paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(uVar30 - 1));
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (ulong)(iVar5 - 1));
                    iVar21 = *piVar13;
                    uVar28 = (ulong)(iVar31 + -1);
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar28);
                    uVar24 = (ulong)(iVar27 + -1);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                    bVar32 = (*puVar16 & 19136782) == 0 && iVar21 == 0;
                    if (1 < param_3) {
                        lVar25 = lVar12;
                        uVar29 = uVar28;
                        uVar26 = uVar24;
                        do {
                            uVar26 = uVar26 + 1;
                            uVar29 = uVar29 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar28);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar26);
                            uVar7 = *puVar16;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar29);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                            if ((*puVar16 & 19136911) != 0 || (uVar7 & 19136830) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1 + -1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2 + -1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 3;
                        paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(uVar30 - 1));
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (ulong)(iVar5 - 1));
                        *piVar13 = iVar6;
                    }
                }
                if (((int)uVar30 < iVar23) && (0 < iVar5)) {
                    paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(int)(uVar30 + 1));
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (ulong)(iVar5 - 1));
                    iVar21 = *piVar13;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)(iVar31 + param_3));
                    uVar24 = (ulong)(iVar27 + -1);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                    bVar32 = (*puVar16 & 19136899) == 0 && iVar21 == 0;
                    if (1 < param_3) {
                        lVar25 = lVar12;
                        uVar28 = uVar24;
                        iVar21 = iVar31;
                        do {
                            iVar21 = iVar21 + 1;
                            uVar28 = uVar28 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this,
                                    (long)(iVar31 + param_3));
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar28);
                            uVar7 = *puVar16;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar21);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, uVar24);
                            if ((*puVar16 & 19136911) != 0 || (uVar7 & 19136995) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1 + 1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2 + -1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 9;
                        paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(int)(uVar30 + 1));
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (ulong)(iVar5 - 1));
                        *piVar13 = iVar6;
                    }
                }
                if ((0 < (int)uVar30) && (iVar5 < iVar23)) {
                    paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (ulong)(uVar30 - 1));
                    piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (long)(iVar5 + 1));
                    iVar21 = *piVar13;
                    uVar24 = (ulong)(iVar31 + -1);
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar24);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)(param_3 + iVar27));
                    bVar32 = (*puVar16 & 19136824) == 0 && iVar21 == 0;
                    if (1 < param_3) {
                        lVar25 = lVar12;
                        uVar28 = uVar24;
                        iVar21 = iVar27;
                        do {
                            iVar21 = iVar21 + 1;
                            uVar28 = uVar28 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar24);
                            puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar21);
                            uVar7 = *puVar16;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, uVar28);
                            puVar16 =
                                (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)(param_3 + iVar27));
                            if ((*puVar16 & 19137016) != 0 || (uVar7 & 19136830) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar17 = iVar1 + -1;
                        piVar17 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar17 = iVar2 + 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *piVar13 = 6;
                        paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (ulong)(uVar30 - 1));
                        piVar13 = (int*)std::array<int, 128ul>::operator[](paVar8, (long)(iVar5 + 1));
                        *piVar13 = iVar6;
                    }
                }
                if (((int)uVar30 < iVar23) && (iVar5 < iVar23)) {
                    paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                        (array<std::array<int, 128ul>, 128ul>*)&m_dirMap, (long)(int)(uVar30 + 1));
                    puVar16 = (uint*)std::array<int, 128ul>::operator[](paVar8, (long)(iVar5 + 1));
                    uVar7 = *puVar16;
                    iVar21 = iVar31 + param_3;
                    pAVar15 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar21);
                    iVar19 = param_3 + iVar27;
                    puVar18 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar19);
                    uVar7 = *puVar18 & 19136992 | uVar7;
                    piVar10 = (int*)(ulong)uVar7;
                    bVar32 = uVar7 == 0;
                    if (1 < param_3) {
                        lVar25 = lVar12;
                        do {
                            iVar31 = iVar31 + 1;
                            iVar27 = iVar27 + 1;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar31);
                            puVar18 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar19);
                            uVar7 = *puVar18;
                            pAVar15 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this, (long)iVar21);
                            puVar18 = (uint*)Array<int, eastl::allocator>::operator[](pAVar15, (long)iVar27);
                            if ((*puVar18 & 19136995) != 0 || (uVar7 & 19137016) != 0) {
                                bVar32 = false;
                            }
                            lVar25 = lVar25 + -1;
                            piVar10 = (int*)0;
                        } while (lVar25 != 0);
                    }
                    if (bVar32) {
                        piVar10 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listx, (long)(int)uVar22);
                        *piVar10 = iVar1 + 1;
                        piVar10 =
                            (int*)std::array<int, 4096ul>::operator[]((array<int, 4096ul>*)&m_listz, (long)(int)uVar22);
                        *piVar10 = iVar2 + 1;
                        uVar22 = uVar22 + 1 & 4095;
                        *puVar16 = 12;
                        paVar8 = (array<int, 128ul>*)std::array<std::array<int, 128ul>, 128ul>::operator[](
                            (array<std::array<int, 128ul>, 128ul>*)&m_distMap, (long)(int)(uVar30 + 1));
                        piVar10 = (int*)std::array<int, 128ul>::operator[](paVar8, (long)(iVar5 + 1));
                        *piVar10 = iVar6;
                    }
                }
            } else {
                m_routeX = iVar1;
                m_routeZ = iVar2;
            }
            if (cVar3 != '\0')
                goto LAB_100242aa8;
            uVar20 = uVar20 + 1 & 4095;
            local_e8 = uVar20 == uVar22;
            uStack_e7 = (undefined7)((ulong)piVar10 >> 8);
        } while (!local_e8);
        local_e8 = true;
        m_routeX = iVar1;
        m_routeZ = iVar2;
    LAB_100242aa8:
        return CONCAT71(uStack_e7, ~local_e8) & 18446744073709551361;
    }

} // namespace jag::oldscape::movement

namespace jag {
    // 0x100244ab0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::InvType* placement_new<oldscape::configdecoder::InvType>(void*)
    /* oldscape::configdecoder::VarpType*
   placement_new<oldscape::configdecoder::VarpType>(void*) */

    VarpType* placement_new<oldscape::configdecoder::VarpType>(void* param_1) {
        *(undefined4*)param_1 = 0;
        callstack::Callstack::Callstack(param_1);
        return param_1;
    }

    // 0x100244ad0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::InvType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::InvType>, int, oldscape::configdecoder::InvType*&>(void*, int&&, oldscape::configdecoder::InvType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::InvType>, int,
                                                   oldscape::configdecoder::InvType*&>(void* param_1, int* param_2,
                                                                                       InvType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::InvType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100246b70, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::LocType* placement_new<oldscape::configdecoder::LocType>(void*)
    LocType* placement_new<oldscape::configdecoder::LocType>(void* param_1) {
        oldscape::configdecoder::LocType::LocType(param_1);
        return param_1;
    }

    // 0x100246b90, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::LocType>* placement_new<ref_counter_shared<oldscape::configdecoder::LocType>, int, oldscape::configdecoder::LocType*&>(void*, int&&, oldscape::configdecoder::LocType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::LocType>, int, oldscape::configdecoder::LocType*&>(
        void* param_1, int* param_2, LocType** param_3) {
        ref_counter_shared<oldscape::configdecoder::LocType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002486c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>, int, oldscape::configdecoder::MesAnimType*&>(void*, int&&, oldscape::configdecoder::MesAnimType*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>, int,
                       oldscape::configdecoder::MesAnimType*&>(void* param_1, int* param_2, MesAnimType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100249180, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::NpcType* placement_new<oldscape::configdecoder::NpcType>(void*)
    NpcType* placement_new<oldscape::configdecoder::NpcType>(void* param_1) {
        ___bzero(param_1, 728);
        oldscape::configdecoder::NpcType::NpcType(param_1);
        return param_1;
    }

    // 0x1002491b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::NpcType>* placement_new<ref_counter_shared<oldscape::configdecoder::NpcType>, int, oldscape::configdecoder::NpcType*&>(void*, int&&, oldscape::configdecoder::NpcType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::NpcType>, int, oldscape::configdecoder::NpcType*&>(
        void* param_1, int* param_2, NpcType** param_3) {
        ref_counter_shared<oldscape::configdecoder::NpcType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class ObjSpriteCacheKey {
    public:
        ~ObjSpriteCacheKey();
        ObjSpriteCacheKey(int, int, ObjType::SpriteTextType, int, int, eastl::string);
        ObjSpriteCacheKey();
        bool operator==(ObjSpriteCacheKey const&) const;
        ObjSpriteCacheKey(ObjSpriteCacheKey const&);

        // data members, from how the methods use this: 24 bytes
        uint field_0;       // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

    // 0x100232770, 32 bytes, complete-object constructor, inline, placed by class header (inline)
    // ObjSpriteCacheKey::ObjSpriteCacheKey(int, int, ObjType::SpriteTextType, int, int, eastl::string)
    void ObjSpriteCacheKey::ObjSpriteCacheKey() {
        ObjSpriteCacheKey();
    }

    // 0x100243890, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ObjSpriteCacheKey::ObjSpriteCacheKey(): jumps straight to the base-object constructor

    // 0x1002438a0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ObjSpriteCacheKey::ObjSpriteCacheKey()
    /* rs2lib::social::ClanSettings::ExtraSettingsParam::ExtraSettingsParam() */

    void rs2lib::social::ClanSettings::ExtraSettingsParam::ExtraSettingsParam() {
        new (&field_16) eastl::string();
    }

    // 0x100243aa0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ObjSpriteCacheKey::ObjSpriteCacheKey(int, int, ObjType::SpriteTextType, int, int, eastl::string)
    void ObjSpriteCacheKey::ObjSpriteCacheKey(uint param_1, int param_2, int param_4, undefined4 param_5,
                                              undefined4 param_6, basic_string* param_7) {
        field_0 = param_4 << 24 | param_2 << 16 | param_1;
        field_4 = param_5;
        field_8 = param_6;
        new (&field_16, param_7) eastl::string();
    }

} // namespace jag::oldscape::configdecoder
