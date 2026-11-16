// projects/osclient/debug/RouteHighlighter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class RouteHighlighter {
    public:
        RouteHighlighter(highlight::HighlightManager& highlightManager);
        ~RouteHighlighter();
        void AddRoutePoint(int arg1, int arg2);
        void PopRoutePoint();
        void ClearRoute();
        bool HighlightRoute(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                            movement::CollisionMap& collisionMap);
        void HighlightRoute(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                            movement::CollisionMap& collisionMap);
        bool Empty();
        bool FoundDestination(int arg1, int arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        HighlightManager* field_8;
        uint8_t field_16;
        uint8_t _unknown_17[399];
        int field_416;
        int field_420;
        uint32_t field_424;
        uint16_t field_428;
        uint8_t field_430;
        uint8_t _unknown_431[5];
    };

    // 0x100066060
    RouteHighlighter::RouteHighlighter(highlight::HighlightManager& highlightManager)
        : field_0(0), field_8(highlightManager) {
        ___bzero(&field_16, 408);
        field_424 = 31;
        field_428 = 3;
        field_430 = 128;
        highlight::HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 7, 31, 65535, '\x03', 128);
    }

    // 0x1000660f0
    RouteHighlighter::~RouteHighlighter() {
        field_8 = nullptr;
    }

    // 0x100066110
    void RouteHighlighter::AddRoutePoint(int arg1, int arg2) {
        int* piVar1 = &field_16[(long)field_420];
        *piVar1 = arg1;
        piVar1 = &field_216[(long)field_420];
        *piVar1 = arg2;
        field_420 = field_420 + 1;
        HighlightManager* this_00 = field_8;
        CoordGrid local_40(field_416, arg1, arg2);
        this_00->AddTileHighlight(local_40, field_424, false, true);
    }

    // 0x1000661b0
    void RouteHighlighter::PopRoutePoint() {
        int arg1;
        int arg2;
        HighlightManager* this_00;
        int* piVar1;
        unsigned long arg1_00;
        CoordGrid local_40;

        if (0 < (long)field_420) {
            arg1_00 = (long)field_420 - 1;
            field_420 = (int)arg1_00;
            this_00 = field_8;
            arg1 = field_416;
            piVar1 = &field_16[arg1_00];
            arg2 = *piVar1;
            piVar1 = &field_216[arg1_00];
            local_40 = rs2lib::CoordGrid(arg1, arg2, *piVar1);
            this_00->RemoveTileHighlight(local_40, field_424, false);
        }
    }

    // 0x100066240
    void RouteHighlighter::ClearRoute() {
        int iVar1 = field_420;
        while (0 < iVar1) {
            PopRoutePoint();
            iVar1 = field_420;
        }
    }

    // 0x100066280
    bool RouteHighlighter::HighlightRoute(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                          movement::CollisionMap& collisionMap) {
        int arg1_00;
        int* piVar2;
        int* piVar3;
        unsigned long arg1_01;
        array<int, _50ul>* in_stack_fffffffffffffe08;
        array<int, 50ul> aaStack_1ee;
        array<int, _50ul> local_130;
        unsigned long local_48;
        int local_3c;

        int local_34 = arg3;
        if (Empty() == '\0') {
            ClearRoute();
        }
        field_416 = arg1;
        ExactTileDestination local_68;
        local_68.field_12 = local_34;
        local_68.field_16 = 4294967297;
        local_68.field_8 = arg2;
        unsigned int local_38 = ((RouteFinding*)(unsigned long)(unsigned int)arg4)
                                    ->FindRoute(arg5, 1, (int)&local_68, collisionMap, DAT_00000001,
                                                (bool)((char)&aaStack_1ee - 10), local_130, *in_stack_fffffffffffffe08);
        if (0 < (int)local_38) {
            local_48 = (unsigned long)local_38;
            arg1_01 = 0;
            local_34 = arg5;
            do {
                local_3c = arg4;
                piVar2 = (int*)(*(&aaStack_1ee - 10))[arg1_01];
                arg1_00 = *piVar2;
                piVar3 = &local_130[arg1_01];
                HighlightRoute(arg1_00, *piVar3, local_3c, local_34, arg6, arg7, collisionMap);
                arg4 = *piVar2;
                local_34 = *piVar3;
                arg1_01 = arg1_01 + 1;
            } while (local_48 != arg1_01);
        }
        return 0 < (int)local_38;
    }

    // 0x1000663c0
    void RouteHighlighter::HighlightRoute(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                          movement::CollisionMap& collisionMap) {
        uint8_t* this_00;
        int iVar1;
        unsigned int uVar2;
        Array<int>* pAVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned long arg1_00;
        unsigned long uVar6;
        int iVar7;
        long lVar8;

        if ((arg3 != arg1) || (arg4 != arg2)) {
            this_00 = &collisionMap.field_16;
            do {
                lVar8 = (long)arg3 - (long)collisionMap.field_0;
                uVar6 = (long)arg4 - (long)collisionMap.field_4;
                iVar7 = (int)lVar8;
                iVar1 = (int)uVar6;
                if (arg3 < arg1) {
                    arg1_00 = lVar8 + 1;
                    pAVar3 = (Array<int>*)(*this_00)[arg1_00];
                    puVar4 = (unsigned int*)(*pAVar3)[uVar6];
                    if ((*puVar4 & 19661184) != 0)
                        goto LAB_100066449;
                    arg3 = arg3 + 1;
                    if (arg4 < arg2) {
                        pAVar3 = (Array<int>*)(*this_00)[(long)iVar7];
                        puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 + 1)];
                        if ((*puVar4 & 19661088) != 0)
                            goto LAB_100066540;
                        pAVar3 = (Array<int>*)(*this_00)[arg1_00];
                        puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 + 1)];
                        if ((*puVar4 & 19661280) != 0)
                            goto LAB_100066540;
                    LAB_100066641:
                        arg4 = arg4 + 1;
                    } else {
                    LAB_100066540:
                        if (arg2 < arg4) {
                            pAVar3 = (Array<int>*)(*this_00)[(long)iVar7];
                            puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 - 1)];
                            if ((*puVar4 & 19661058) != 0)
                                goto LAB_100066650;
                            pAVar3 = (Array<int>*)(*this_00)[arg1_00];
                            puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 - 1)];
                            uVar2 = *puVar4;
                            uVar5 = 19661187;
                        LAB_100066636:
                            arg4 = arg4 - (unsigned int)((uVar2 & uVar5) == 0);
                        }
                    }
                } else {
                LAB_100066449:
                    if (arg1 < arg3) {
                        uVar6 = (unsigned long)(iVar7 - 1);
                        pAVar3 = (Array<int>*)(*this_00)[uVar6];
                        puVar4 = (unsigned int*)(*pAVar3)[(long)iVar1];
                        if ((*puVar4 & 19661064) == 0) {
                            arg3 = arg3 - 1;
                            if (arg4 < arg2) {
                                pAVar3 = (Array<int>*)(*this_00)[(long)iVar7];
                                puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 + 1)];
                                if ((*puVar4 & 19661088) == 0) {
                                    pAVar3 = (Array<int>*)(*this_00)[uVar6];
                                    puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 + 1)];
                                    if ((*puVar4 & 19661112) == 0)
                                        goto LAB_100066641;
                                }
                            }
                            if (arg2 < arg4) {
                                pAVar3 = (Array<int>*)(*this_00)[(long)iVar7];
                                puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 - 1)];
                                if ((*puVar4 & 19661058) == 0) {
                                    pAVar3 = (Array<int>*)(*this_00)[uVar6];
                                    puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 - 1)];
                                    uVar2 = *puVar4;
                                    uVar5 = 19661070;
                                    goto LAB_100066636;
                                }
                            }
                            goto LAB_100066650;
                        }
                    }
                    if (arg4 < arg2) {
                        pAVar3 = (Array<int>*)(*this_00)[(long)iVar7];
                        puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 + 1)];
                        if ((*puVar4 & 19661088) == 0)
                            goto LAB_100066641;
                    }
                    if (arg4 <= arg2) {
                    LAB_100066680:
                        ClearRoute();
                        return;
                    }
                    pAVar3 = (Array<int>*)(*this_00)[(long)iVar7];
                    puVar4 = (unsigned int*)(*pAVar3)[(long)(iVar1 - 1)];
                    if ((*puVar4 & 19661058) != 0)
                        goto LAB_100066680;
                    arg4 = arg4 - 1;
                }
            LAB_100066650:
                AddRoutePoint(arg3 + arg5, arg4 + arg6);
            } while ((arg3 != arg1) || (arg4 != arg2));
        }
    }

    // 0x1000dd6a0
    bool RouteHighlighter::Empty() {
        return field_420 == 0;
    }

    // 0x1000dd6b0
    bool RouteHighlighter::FoundDestination(int arg1, int arg2) {
        bool bVar2 = false;
        int* piVar1 = &field_16[0];
        if (*piVar1 == arg1) {
            piVar1 = &field_216[0];
            bVar2 = *piVar1 == arg2;
        }
        return bVar2;
    }

} // namespace jag::oldscape
