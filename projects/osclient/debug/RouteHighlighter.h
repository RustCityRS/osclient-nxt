// projects/osclient/debug/RouteHighlighter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class RouteHighlighter {
    public:
        RouteHighlighter(highlight::HighlightManager&);
        ~RouteHighlighter();
        void AddRoutePoint(int, int);
        void PopRoutePoint();
        void ClearRoute();
        bool HighlightRoute(int, int, int, int, int, int, int, movement::CollisionMap&);
        void HighlightRoute(int, int, int, int, int, int, movement::CollisionMap&);
        bool Empty();
        bool FoundDestination(int, int);

        // data members, from how the methods use this: 436 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        HighlightManager* field_8; // offset 8
        undefined1 field_16;       // offset 16
        char _unknown_17[399];
        int field_416;        // offset 416
        int field_420;        // offset 420
        undefined4 field_424; // offset 424
        undefined2 field_428; // offset 428
        undefined1 field_430; // offset 430
        char _unknown_431[5];
    };

    // 0x100066060, 128 bytes, base-object constructor, placed by class name
    // RouteHighlighter::RouteHighlighter(highlight::HighlightManager&)
    void RouteHighlighter::RouteHighlighter(HighlightManager* param_1) {
        field_0 = 0;
        field_8 = param_1;
        ___bzero(&field_16, 408);
        field_424 = 31;
        field_428 = 3;
        field_430 = 128;
        param_1->ConfigureChannel(7, 31, 65535, 3, 128, 10);
    }

    // 0x1000660e0, 16 bytes, complete-object constructor, placed by class name
    // RouteHighlighter::RouteHighlighter(highlight::HighlightManager&): jumps straight to the base-object constructor

    // 0x1000660f0, 16 bytes, base-object destructor, placed by class name
    // RouteHighlighter::~RouteHighlighter()
    void RouteHighlighter::~RouteHighlighter() {
        field_8 = (HighlightManager*)0;
    }

    // 0x100066100, 16 bytes, complete-object destructor, placed by class name
    // RouteHighlighter::~RouteHighlighter(): jumps straight to the base-object destructor

    // 0x100066110, 144 bytes, placed by class name
    // RouteHighlighter::AddRoutePoint(int, int)
    void RouteHighlighter::AddRoutePoint(int param_1, int param_2) {
        HighlightManager* this_00;
        int* piVar1;
        CoordGrid local_40;

        piVar1 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_16, (long)field_420);
        *piVar1 = param_1;
        piVar1 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_216, (long)field_420);
        *piVar1 = param_2;
        field_420 = field_420 + 1;
        this_00 = field_8;
        new (&local_40) rs2lib::CoordGrid(field_416, param_1, param_2);
        this_00->AddTileHighlight(&local_40, field_424, false, true);
    }

    // 0x1000661b0, 144 bytes, placed by class name
    // RouteHighlighter::PopRoutePoint()
    void RouteHighlighter::PopRoutePoint() {
        int iVar1;
        int iVar2;
        HighlightManager* this_00;
        int* piVar3;
        ulong uVar4;
        CoordGrid local_40;

        if (0 < (long)field_420) {
            uVar4 = (long)field_420 - 1;
            field_420 = (int)uVar4;
            this_00 = field_8;
            iVar1 = field_416;
            piVar3 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_16, uVar4);
            iVar2 = *piVar3;
            piVar3 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_216, uVar4);
            new (&local_40) rs2lib::CoordGrid(iVar1, iVar2, *piVar3);
            this_00->RemoveTileHighlight(&local_40, field_424, false);
        }
    }

    // 0x100066240, 64 bytes, placed by class name
    // RouteHighlighter::ClearRoute()
    void RouteHighlighter::ClearRoute() {
        int iVar1;

        iVar1 = field_420;
        while (0 < iVar1) {
            PopRoutePoint(this);
            iVar1 = field_420;
        }
    }

    // 0x100066280, 320 bytes, placed by class name
    // RouteHighlighter::HighlightRoute(int, int, int, int, int, int, int, movement::CollisionMap&)
    bool RouteHighlighter::HighlightRoute(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                          int param_7, CollisionMap* param_8) {
        int iVar1;
        int* piVar3;
        int* piVar4;
        ulong uVar5;
        array local_1f8[200];
        array local_130[200];
        ExactTileDestination local_68;
        ulong local_48;
        int local_3c;
        uint local_38;
        int local_34;

        local_34 = param_3;
        if (Empty(this) == '\0') {
            ClearRoute(this);
        }
        field_416 = param_1;
        new (&local_68) movement::ExactTileDestination();
        local_68.field_12 = local_34;
        local_68.field_16 = 4294967297;
        local_68.field_8 = param_2;
        local_38 = movement::RouteFinding::FindRoute(param_4, param_5, 1, (RouteDestination*)&local_68, param_8, true,
                                                     local_1f8, local_130);
        if (0 < (int)local_38) {
            local_48 = (ulong)local_38;
            uVar5 = 0;
            local_34 = param_5;
            do {
                local_3c = param_4;
                piVar3 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)local_1f8, uVar5);
                iVar1 = *piVar3;
                piVar4 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)local_130, uVar5);
                HighlightRoute((RouteHighlighter*)this, iVar1, *piVar4, local_3c, local_34, param_6, param_7, param_8);
                param_4 = *piVar3;
                local_34 = *piVar4;
                uVar5 = uVar5 + 1;
            } while (local_48 != uVar5);
        }
        return 0 < (int)local_38;
    }

    // 0x1000663c0, 736 bytes, placed by class name
    // RouteHighlighter::HighlightRoute(int, int, int, int, int, int, movement::CollisionMap&)
    void RouteHighlighter::HighlightRoute(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                          CollisionMap* param_7) {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        Array<int, eastl::allocator>* pAVar3;
        uint* puVar4;
        uint uVar5;
        ulong uVar6;
        ulong uVar7;
        int iVar8;
        long lVar9;

        if ((param_3 != param_1) || (param_4 != param_2)) {
            this_00 = &param_7->field_16;
            do {
                lVar9 = (long)param_3 - (long)param_7->field_0;
                uVar7 = (long)param_4 - (long)param_7->field_4;
                iVar8 = (int)lVar9;
                iVar1 = (int)uVar7;
                if (param_3 < param_1) {
                    uVar6 = lVar9 + 1;
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                    puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, uVar7);
                    if ((*puVar4 & 19661184) != 0)
                        goto LAB_100066449;
                    param_3 = param_3 + 1;
                    if (param_4 < param_2) {
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, (long)iVar8);
                        puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + 1));
                        if ((*puVar4 & 19661088) != 0)
                            goto LAB_100066540;
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                        puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + 1));
                        if ((*puVar4 & 19661280) != 0)
                            goto LAB_100066540;
                    LAB_100066641:
                        param_4 = param_4 + 1;
                    } else {
                    LAB_100066540:
                        if (param_2 < param_4) {
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, (long)iVar8);
                            puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + -1));
                            if ((*puVar4 & 19661058) != 0)
                                goto LAB_100066650;
                            pAVar3 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                            puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + -1));
                            uVar2 = *puVar4;
                            uVar5 = 19661187;
                        LAB_100066636:
                            param_4 = param_4 - (uint)((uVar2 & uVar5) == 0);
                        }
                    }
                } else {
                LAB_100066449:
                    if (param_1 < param_3) {
                        uVar7 = (ulong)(iVar8 + -1);
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar7);
                        puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)iVar1);
                        if ((*puVar4 & 19661064) == 0) {
                            param_3 = param_3 + -1;
                            if (param_4 < param_2) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, (long)iVar8);
                                puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + 1));
                                if ((*puVar4 & 19661088) == 0) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar7);
                                    puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + 1));
                                    if ((*puVar4 & 19661112) == 0)
                                        goto LAB_100066641;
                                }
                            }
                            if (param_2 < param_4) {
                                pAVar3 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, (long)iVar8);
                                puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + -1));
                                if ((*puVar4 & 19661058) == 0) {
                                    pAVar3 = (Array<int, eastl::allocator>*)
                                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, uVar7);
                                    puVar4 =
                                        (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + -1));
                                    uVar2 = *puVar4;
                                    uVar5 = 19661070;
                                    goto LAB_100066636;
                                }
                            }
                            goto LAB_100066650;
                        }
                    }
                    if (param_4 < param_2) {
                        pAVar3 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, (long)iVar8);
                        puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + 1));
                        if ((*puVar4 & 19661088) == 0)
                            goto LAB_100066641;
                    }
                    if (param_4 <= param_2) {
                    LAB_100066680:
                        ClearRoute(this);
                        return;
                    }
                    pAVar3 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_00, (long)iVar8);
                    puVar4 = (uint*)Array<int, eastl::allocator>::operator[](pAVar3, (long)(iVar1 + -1));
                    if ((*puVar4 & 19661058) != 0)
                        goto LAB_100066680;
                    param_4 = param_4 + -1;
                }
            LAB_100066650:
                AddRoutePoint(this, param_3 + param_5, param_4 + param_6);
            } while ((param_3 != param_1) || (param_4 != param_2));
        }
    }

    // 0x1000dd6a0, 16 bytes, inline, placed by class name
    // RouteHighlighter::Empty()
    bool RouteHighlighter::Empty() {
        return field_420 == 0;
    }

    // 0x1000dd6b0, 80 bytes, inline, placed by class name
    // RouteHighlighter::FoundDestination(int, int)
    bool RouteHighlighter::FoundDestination(int param_1, int param_2) {
        int* piVar1;
        bool bVar2;

        bVar2 = false;
        piVar1 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_16, 0);
        if (*piVar1 == param_1) {
            piVar1 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_216, 0);
            bVar2 = *piVar1 == param_2;
        }
        return bVar2;
    }

} // namespace jag::oldscape
