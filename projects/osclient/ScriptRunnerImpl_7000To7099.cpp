// projects/osclient/ScriptRunnerImpl_7000To7099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b3b70, 6944 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand7000To7099(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand7000To7099(long param_1, undefined4 param_2) {
        int iVar1;
        int iVar2;
        byte bVar3;
        undefined2 uVar4;
        uint uVar5;
        Client* this;
        ushort* puVar6;
        undefined2* puVar7;
        undefined4* puVar8;
        HighlightManager* pHVar9;
        char* pcVar10;
        eastl::string* this_00;
        basic_string* pbVar11;
        uint* puVar12;
        int* piVar13;
        ObjTagManager* pOVar14;
        undefined4 uVar15;
        long lVar16;
        ulong uVar17;
        undefined8 uVar18;
        array<int, 1000ul>* paVar19;
        OpGroup local_1a8;
        int local_40;
        uint local_3c;
        int local_38;
        int local_34;

        uVar18 = 2;
        this = (Client*)Client::Instance();
        switch (param_2) {
        case 7000:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 0;
            goto LAB_1000b4e5d;
        case 7001:
            lVar16 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar16 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 3U);
            iVar2 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 2);
            iVar1 = *piVar13;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddNPCHighlight(iVar2, iVar1, uVar5);
            break;
        case 7002:
            lVar16 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar16 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 3U);
            iVar2 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 2);
            iVar1 = *piVar13;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveNPCHighlight(iVar2, iVar1, uVar5);
            break;
        case 7003:
            lVar16 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar16 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 3U);
            local_34 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 2);
            iVar2 = *piVar13;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsNPCHighlighted(local_34, iVar2, uVar5);
            goto LAB_1000b52b8;
        case 7004:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 0;
            goto LAB_1000b4f78;
        case 7005:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->ConfigureChannel(1, local_34, (undefined2)local_38, local_3c, uVar5 & 255, uVar4);
            return 1;
        case 7006:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddNPCTypeHighlight(iVar1, uVar5, false);
            break;
        case 7007:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveNPCTypeHighlight(iVar1, uVar5);
            break;
        case 7008:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsNPCTypeHighlighted(iVar1, uVar5);
            goto LAB_1000b52b8;
        case 7009:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->ClearHighlights(1, uVar15);
            return 1;
        case 7010:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 2;
            goto LAB_1000b4e5d;
        case 7011:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 4;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            iVar1 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 3);
            new (&local_1a8) rs2lib::CoordGrid(*piVar13);
            iVar2 = *(int*)(param_1 + 104092);
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddLocHighlight(iVar1, (CoordGrid*)&local_1a8, uVar5, iVar2 != 0, false);
            break;
        case 7012:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 4;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            iVar1 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 3);
            new (&local_1a8) rs2lib::CoordGrid(*piVar13);
            iVar2 = *(int*)(param_1 + 104092);
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveLocHighlight(iVar1, (CoordGrid*)&local_1a8, uVar5, iVar2 != 0);
            break;
        case 7013:
            lVar16 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar16 - 4U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 4U);
            local_34 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 3);
            local_38 = *piVar13;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 1);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsLocHighlighted(local_34, local_38, uVar5, iVar2 != 0);
            goto LAB_1000b4d4c;
        case 7014:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 2;
            goto LAB_1000b4f78;
        case 7015:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 3;
            goto LAB_1000b4e5d;
        case 7016:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddLocTypeHighlight(iVar1, uVar5, false);
            break;
        case 7017:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveLocTypeHighlight(iVar1, uVar5);
            break;
        case 7018:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsLocTypeHighlighted(iVar1, uVar5);
            goto LAB_1000b52b8;
        case 7019:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 3;
            goto LAB_1000b4f78;
        case 7020:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 4;
            goto LAB_1000b4e5d;
        case 7021:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 4;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            iVar1 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 3);
            new (&local_1a8) rs2lib::CoordGrid(*piVar13);
            iVar2 = *(int*)(param_1 + 104092);
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddObjHighlight(iVar1, (CoordGrid*)&local_1a8, uVar5, iVar2 != 0, false);
            break;
        case 7022:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 4;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            iVar1 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 3);
            new (&local_1a8) rs2lib::CoordGrid(*piVar13);
            iVar2 = *(int*)(param_1 + 104092);
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveObjHighlight(iVar1, (CoordGrid*)&local_1a8, uVar5, iVar2 != 0);
            break;
        case 7023:
            lVar16 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar16 - 4U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 4U);
            local_34 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 3);
            local_38 = *piVar13;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 1);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsObjHighlighted(local_34, local_38, uVar5, iVar2 != 0);
            goto LAB_1000b4d4c;
        case 7024:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 4;
            goto LAB_1000b4f78;
        case 7025:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 5;
            goto LAB_1000b4e5d;
        case 7026:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddObjTypeHighlight(iVar1, uVar5, false);
            break;
        case 7027:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveObjTypeHighlight(iVar1, uVar5);
            break;
        case 7028:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar1 = *piVar13;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsObjTypeHighlighted(iVar1, uVar5);
            goto LAB_1000b52b8;
        case 7029:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 5;
            goto LAB_1000b4f78;
        case 7030:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 6;
            goto LAB_1000b4e5d;
        case 7031:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddPlayerHighlight((basic_string*)&local_1a8, uVar5, false);
            goto LAB_1000b53b5;
        case 7032:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemovePlayerHighlight((basic_string*)&local_1a8, uVar5);
            goto LAB_1000b53b5;
        case 7033:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsPlayerHighlighted((basic_string*)&local_1a8, uVar5);
            goto LAB_1000b5260;
        case 7034:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 6;
            goto LAB_1000b4f78;
        case 7035:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 7;
            goto LAB_1000b4e5d;
        case 7036:
            uVar17 = (long)*(int*)(param_1 + 104092) - 3;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            new (&local_1a8) rs2lib::CoordGrid(*piVar13);
            iVar2 = *(int*)(param_1 + 104092);
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 1);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddTileHighlight((CoordGrid*)&local_1a8, uVar5, iVar2 != 0, false);
            break;
        case 7037:
            uVar17 = (long)*(int*)(param_1 + 104092) - 3;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            new (&local_1a8) rs2lib::CoordGrid(*piVar13);
            iVar2 = *(int*)(param_1 + 104092);
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 1);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveTileHighlight((CoordGrid*)&local_1a8, uVar5, iVar2 != 0);
            break;
        case 7038:
            lVar16 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar16 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 3U);
            local_34 = *piVar13;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 2);
            uVar5 = *puVar12;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar16 - 1);
            iVar2 = *piVar13;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsTileHighlighted(local_34, uVar5, iVar2 != 0);
        LAB_1000b4d4c:
            uVar5 = (uint)bVar3;
            uVar17 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_1000b53f5;
        case 7039:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 7;
            goto LAB_1000b4f78;
        case 7040:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 5;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, uVar17);
            local_34 = *puVar8;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 - 4);
            uVar4 = jag::math::RunetekColour::RGBToHSL(*puVar12);
            local_38 = CONCAT22(local_38._2_2_, uVar4);
            iVar2 = *(int*)(param_1 + 104092);
            puVar6 = (ushort*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 2);
            local_3c = (uint)*puVar6;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar2 + 3);
            local_1a8.field_0 = 0;
            local_40 = 255;
            uVar5 = jag::math::Clamp<int>(piVar13, (int*)&local_1a8, &local_40);
            puVar7 = (undefined2*)std::array<int, 1000ul>::operator[](paVar19, (long)*(int*)(param_1 + 104092) + 4);
            uVar4 = *puVar7;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar5 = uVar5 & 255;
            uVar18 = 8;
        LAB_1000b4e5d:
            pHVar9->ConfigureChannel(uVar18, local_34, (undefined2)local_38, local_3c, uVar5, uVar4);
            break;
        case 7041:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            local_1a8.Create(pbVar11, false);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->AddOpGroupHighlight(&local_1a8, uVar5, false);
            goto LAB_1000b54b8;
        case 7042:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            local_1a8.Create(pbVar11, false);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            pHVar9->RemoveOpGroupHighlight(&local_1a8, uVar5);
            goto LAB_1000b54b8;
        case 7043:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            local_1a8.Create(pbVar11, false);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            bVar3 = pHVar9->IsOpGroupHighlighted(&local_1a8, uVar5);
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *puVar12 = (uint)bVar3;
        LAB_1000b54b8:
            local_1a8.~OpGroup();
            break;
        case 7044:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar15 = *puVar8;
            pHVar9 = (HighlightManager*)GetHighlightManager();
            uVar18 = 8;
        LAB_1000b4f78:
            pHVar9->ClearHighlights(uVar18, uVar15);
            break;
        default:
            goto switchD_1000b3bb4_caseD_1b85;
        case 7060:
            uVar17 = (long)*(int*)(param_1 + 104092) - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) + 1);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar14->AddTag(uVar5, (basic_string*)&local_1a8, iVar2);
            goto LAB_1000b53b5;
        case 7061:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->DeleteTag((basic_string*)&local_1a8, iVar2);
            goto LAB_1000b5260;
        case 7062:
            uVar17 = (long)*(int*)(param_1 + 104092) - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) + 1);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->RemoveTagFromObj(uVar5, (basic_string*)&local_1a8, iVar2);
            goto LAB_1000b5397;
        case 7063:
            iVar2 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            piVar13 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->FindTagsById(uVar5, iVar2);
            goto LAB_1000b52b8;
        case 7064:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->FindTagsByGroup(iVar2);
            goto LAB_1000b52b8;
        case 7065:
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pcVar10 = (char*)pOVar14->GetNextTag();
            iVar2 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar2 + 1;
            this_00 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar2);
            eastl::string::assign(this_00, pcVar10);
            break;
        case 7066:
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar14->RestartFindTags();
            break;
        case 7067:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->FindIdsByTag((basic_string*)&local_1a8, iVar2);
        LAB_1000b5260:
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
        LAB_1000b53ae:
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *puVar12 = (uint)bVar3;
        LAB_1000b53b5:
            local_1a8.~basic_string();
            break;
        case 7068:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->FindIdsByGroup(iVar2);
        LAB_1000b52b8:
            uVar5 = (uint)bVar3;
            uVar17 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
        LAB_1000b53f5:
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            *puVar12 = uVar5;
            break;
        case 7069:
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            uVar5 = pOVar14->GetNextId();
            goto LAB_1000b53dd;
        case 7070:
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar14->RestartFindIds();
            break;
        case 7071:
            uVar17 = (long)*(int*)(param_1 + 104092) - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar12;
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            pbVar11 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            new (&local_1a8) eastl::string(pbVar11);
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) + 1);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->HasTag(uVar5, (basic_string*)&local_1a8, iVar2);
        LAB_1000b5397:
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            goto LAB_1000b53ae;
        case 7072:
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            bVar3 = pOVar14->AreTagsEmpty();
            uVar5 = (uint)bVar3;
        LAB_1000b53dd:
            uVar17 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_1000b53f5;
        case 7073:
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar14->ResetAll();
            break;
        case 7074:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar2 = *piVar13;
            pOVar14 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar14->ClearGroup(iVar2);
        }
        uVar18 = 1;
    switchD_1000b3bb4_caseD_1b85:
        return uVar18;
    }

} // namespace jag::oldscape
