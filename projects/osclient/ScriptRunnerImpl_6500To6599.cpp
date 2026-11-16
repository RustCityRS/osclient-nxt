// projects/osclient/ScriptRunnerImpl_6500To6599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100168f90, 3936 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand6500To6599(ScriptOp, ClientScript const&, bool)
    undefined1 ScriptRunnerImpl::ExecuteCommand6500To6599(GameWorld* param_1, undefined4 param_2) {
        int iVar1;
        int iVar2;
        Minimenu* this;
        byte bVar3;
        char cVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* puVar8;
        undefined4* puVar9;
        shared_ptr<configdecoder::LocType>* psVar10;
        ParamType* pPVar11;
        eastl::string* pbVar12;
        long lVar13;
        undefined8* puVar14;
        shared_ptr<ApplicationContext>* psVar15;
        ApplicationContext* pAVar16;
        uint* puVar17;
        Client* pCVar18;
        long* plVar19;
        shared_ptr* psVar20;
        basic_string* pbVar21;
        InputForm* pIVar22;
        int* piVar23;
        GameShell* this_00;
        undefined8 uVar24;
        NpcType* this_01;
        LocType* this_02;
        ObjType* this_03;
        StructType* pSVar25;
        undefined4* puVar26;
        undefined1 uVar27;
        array<int, 1000ul>* paVar28;
        ulong uVar29;
        undefined1* puVar30;
        eastl::string local_98[32];
        array<int, 1000ul>* local_78;
        StructType local_70;
        StructType local_60[2];
        shared_ptr<configdecoder::ParamType> local_40[16];

        uVar27 = 2;
        switch (param_2) {
        case 6500:
            bVar3 = param_1->ListFetch();
            goto LAB_100169843;
        case 6501:
            puVar26 = (undefined4*)param_1->ListStart();
            goto joined_r0x0001001690b6;
        case 6502:
            puVar26 = (undefined4*)GameWorld::ListNext();
        joined_r0x0001001690b6:
            if (puVar26 == (undefined4*)0) {
                paVar28 = (array<int, 1000ul>*)&param_1[781].field_124;
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                *puVar26 = 4294967295;
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                *puVar26 = 0;
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
            LAB_100169cf0:
                eastl::string::assign(pbVar12, "");
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                *puVar26 = 0;
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                *puVar26 = 0;
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
            LAB_100169d5a:
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::assign(pbVar12, "");
            } else {
                uVar7 = *puVar26;
            LAB_10016934d:
                puVar30 = &param_1[781].field_124;
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar9 = uVar7;
                uVar7 = puVar26[1];
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar9 = uVar7;
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::operator=(pbVar12, (basic_string*)(puVar26 + 12));
                uVar7 = puVar26[20];
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar9 = uVar7;
                uVar7 = puVar26[2];
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar9 = uVar7;
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
            LAB_10016941d:
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::operator=(pbVar12, (basic_string*)(puVar26 + 4));
            }
            break;
        default:
            goto switchD_100168fc6_caseD_1967;
        case 6506:
            paVar28 = (array<int, 1000ul>*)&param_1[781].field_124;
            uVar29 = (long)*(int*)&param_1[813].field_28 - 1;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            piVar23 = (int*)std::array<int, 1000ul>::operator[](paVar28, uVar29);
            if (0 < GameWorld::m_num) {
                iVar5 = *piVar23;
                uVar29 = 0;
                local_78 = paVar28;
                do {
                    puVar8 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                        Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                            (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                   eastl::allocator>*)&GameWorld::m_list,
                            uVar29);
                    piVar23 = (int*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar8);
                    if (*piVar23 == iVar5) {
                        puVar8 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                              eastl::allocator>*)&GameWorld::m_list,
                                       uVar29);
                        puVar26 = (undefined4*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::get(puVar8);
                        paVar28 = local_78;
                        if (puVar26 == (undefined4*)0)
                            goto LAB_100169c88;
                        uVar7 = *puVar26;
                        iVar5 = *(int*)&param_1[813].field_28;
                        *(int*)&param_1[813].field_28 = iVar5 + 1;
                        puVar9 = (undefined4*)std::array<int, 1000ul>::operator[](local_78, (long)iVar5);
                        *puVar9 = uVar7;
                        uVar7 = puVar26[1];
                        iVar5 = *(int*)&param_1[813].field_28;
                        *(int*)&param_1[813].field_28 = iVar5 + 1;
                        puVar9 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                        *puVar9 = uVar7;
                        iVar5 = *(int*)&param_1[1063].field_32;
                        *(int*)&param_1[1063].field_32 = iVar5 + 1;
                        pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                            (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                        eastl::string::operator=(pbVar12, (basic_string*)(puVar26 + 12));
                        uVar7 = puVar26[20];
                        iVar5 = *(int*)&param_1[813].field_28;
                        *(int*)&param_1[813].field_28 = iVar5 + 1;
                        puVar9 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                        *puVar9 = uVar7;
                        uVar7 = puVar26[2];
                        iVar5 = *(int*)&param_1[813].field_28;
                        *(int*)&param_1[813].field_28 = iVar5 + 1;
                        puVar9 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
                        *puVar9 = uVar7;
                        iVar5 = *(int*)&param_1[1063].field_32;
                        *(int*)&param_1[1063].field_32 = iVar5 + 1;
                        goto LAB_10016941d;
                    }
                    uVar29 = uVar29 + 1;
                } while ((long)uVar29 < (long)GameWorld::m_num);
                paVar28 = local_78;
            }
        LAB_100169c88:
            iVar5 = *(int*)&param_1[813].field_28;
            *(int*)&param_1[813].field_28 = iVar5 + 1;
            puVar26 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
            *puVar26 = 4294967295;
            iVar5 = *(int*)&param_1[813].field_28;
            *(int*)&param_1[813].field_28 = iVar5 + 1;
            puVar26 = (undefined4*)std::array<int, 1000ul>::operator[](paVar28, (long)iVar5);
            *puVar26 = 0;
            iVar5 = *(int*)&param_1[1063].field_32;
            *(int*)&param_1[1063].field_32 = iVar5 + 1;
            pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
            goto LAB_100169cf0;
        case 6507:
            lVar13 = (long)*(int*)&param_1[813].field_28;
            *(int*)&param_1[813].field_28 = (int)(lVar13 - 4U);
            puVar30 = &param_1[781].field_124;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, lVar13 - 4U);
            iVar5 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, lVar13 - 3);
            iVar2 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, lVar13 - 2);
            iVar1 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, lVar13 - 1);
            GameWorld::ListSort(iVar5, iVar2 == 1, iVar1, *piVar23 == 1);
            break;
        case 6511:
            puVar30 = &param_1[781].field_124;
            iVar5 = *(int*)&param_1[813].field_28;
            uVar29 = (long)iVar5 - 1;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, uVar29);
            iVar2 = *piVar23;
            if (((long)iVar2 < 0) || (GameWorld::m_num <= iVar2)) {
                *(int*)&param_1[813].field_28 = iVar5;
                *piVar23 = -1;
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = 0;
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::assign(pbVar12, "");
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = 0;
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = 0;
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                goto LAB_100169d5a;
            }
            puVar8 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                           eastl::allocator>*)&GameWorld::m_list,
                    (long)iVar2);
            puVar26 = (undefined4*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator*(puVar8);
            uVar7 = *puVar26;
            goto LAB_10016934d;
        case 6512:
            lVar13 = Client::Instance();
            this = *(Minimenu**)(lVar13 + 52344);
            uVar29 = (long)*(int*)&param_1[813].field_28 - 1;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1[781].field_124, uVar29);
            SetFollowerLowPriority(*piVar23 == 1);
            break;
        case 6513:
            iVar5 = *(int*)&param_1[813].field_28;
            uVar29 = (long)iVar5 - 2;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            puVar30 = &param_1[781].field_124;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, uVar29);
            iVar2 = *piVar23;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5 - 1);
            uVar6 = *puVar17;
            local_40->List(uVar6);
            pPVar11 = (ParamType*)shared_ptr<configdecoder::ParamType>::operator->(local_40);
            cVar4 = pPVar11->IsStringType();
            if (cVar4 == '\0') {
                local_60->List(iVar2);
                this_01 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                    (shared_ptr<configdecoder::NpcType>*)local_60);
                lVar13 = shared_ptr<configdecoder::ParamType>::operator->(local_40);
                uVar7 = this_01->GetParam(uVar6, *(int*)(lVar13 + 4));
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = uVar7;
                pSVar25 = local_60;
            } else {
                local_70.List(iVar2);
                iVar5 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)&local_70);
                shared_ptr<configdecoder::ParamType>::operator->(local_40);
                local_60->GetParam(iVar5, (basic_string*)(ulong)uVar6);
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::operator=(pbVar12, (basic_string*)local_60);
                local_60->~basic_string();
                pSVar25 = &local_70;
            }
            pSVar25->~shared_ptr();
            goto LAB_100169c53;
        case 6514:
            iVar5 = *(int*)&param_1[813].field_28;
            uVar29 = (long)iVar5 - 2;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            puVar30 = &param_1[781].field_124;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, uVar29);
            iVar2 = *piVar23;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5 - 1);
            uVar6 = *puVar17;
            local_40->List(uVar6);
            pPVar11 = (ParamType*)shared_ptr<configdecoder::ParamType>::operator->(local_40);
            cVar4 = pPVar11->IsStringType();
            if (cVar4 == '\0') {
                psVar10 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar2);
                this_02 = (LocType*)shared_ptr<configdecoder::LocType>::operator->(psVar10);
                lVar13 = shared_ptr<configdecoder::ParamType>::operator->(local_40);
                uVar7 = this_02->GetParam(uVar6, *(int*)(lVar13 + 4));
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = uVar7;
            } else {
                psVar10 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar2);
                iVar5 = shared_ptr<configdecoder::LocType>::operator->(psVar10);
                shared_ptr<configdecoder::ParamType>::operator->(local_40);
                local_60->GetParam(iVar5, (basic_string*)(ulong)uVar6);
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::operator=(pbVar12, (basic_string*)local_60);
                local_60->~basic_string();
            }
            goto LAB_100169c53;
        case 6515:
            iVar5 = *(int*)&param_1[813].field_28;
            uVar29 = (long)iVar5 - 2;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            puVar30 = &param_1[781].field_124;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, uVar29);
            iVar2 = *piVar23;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5 - 1);
            uVar6 = *puVar17;
            local_40->List(uVar6);
            pPVar11 = (ParamType*)shared_ptr<configdecoder::ParamType>::operator->(local_40);
            cVar4 = pPVar11->IsStringType();
            if (cVar4 == '\0') {
                local_60->List(iVar2);
                this_03 = (ObjType*)shared_ptr<configdecoder::ObjType>::operator->(
                    (shared_ptr<configdecoder::ObjType>*)local_60);
                lVar13 = shared_ptr<configdecoder::ParamType>::operator->(local_40);
                uVar7 = this_03->GetParam(uVar6, *(int*)(lVar13 + 4));
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = uVar7;
                local_60->~shared_ptr();
            } else {
                local_70.List(iVar2);
                iVar5 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_70);
                shared_ptr<configdecoder::ParamType>::operator->(local_40);
                local_60->GetParam(iVar5, (basic_string*)(ulong)uVar6);
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::operator=(pbVar12, (basic_string*)local_60);
                local_60->~basic_string();
                local_70.~shared_ptr();
            }
            goto LAB_100169c53;
        case 6516:
            iVar5 = *(int*)&param_1[813].field_28;
            uVar29 = (long)iVar5 - 2;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            puVar30 = &param_1[781].field_124;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, uVar29);
            iVar2 = *piVar23;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5 - 1);
            uVar6 = *puVar17;
            local_40->List(uVar6);
            pPVar11 = (ParamType*)shared_ptr<configdecoder::ParamType>::operator->(local_40);
            cVar4 = pPVar11->IsStringType();
            if (cVar4 == '\0') {
                local_60->List(iVar2);
                pSVar25 = (StructType*)shared_ptr<configdecoder::StructType>::operator->(
                    (shared_ptr<configdecoder::StructType>*)local_60);
                lVar13 = shared_ptr<configdecoder::ParamType>::operator->(local_40);
                uVar7 = pSVar25->GetParam(uVar6, *(int*)(lVar13 + 4));
                iVar5 = *(int*)&param_1[813].field_28;
                *(int*)&param_1[813].field_28 = iVar5 + 1;
                puVar26 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar30, (long)iVar5);
                *puVar26 = uVar7;
                pSVar25 = local_60;
            } else {
                local_70.List(iVar2);
                iVar5 = shared_ptr<configdecoder::StructType>::operator->(
                    (shared_ptr<configdecoder::StructType>*)&local_70);
                shared_ptr<configdecoder::ParamType>::operator->(local_40);
                local_60->GetParam(iVar5, (basic_string*)(ulong)uVar6);
                iVar5 = *(int*)&param_1[1063].field_32;
                *(int*)&param_1[1063].field_32 = iVar5 + 1;
                pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&param_1[813].field_32, (long)iVar5);
                eastl::string::operator=(pbVar12, (basic_string*)local_60);
                local_60->~basic_string();
                pSVar25 = &local_70;
            }
            pSVar25->~shared_ptr();
        LAB_100169c53:
            local_40->~shared_ptr();
            break;
        case 6518:
            lVar13 = Client::Instance();
            uVar6 = (uint) * (byte*)(lVar13 + 8425);
            goto LAB_1001699ce;
        case 6519:
            Client::Instance();
            uVar6 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
            goto LAB_1001699ce;
        case 6520:
        case 6522:
            puVar14 = (undefined8*)Client::Instance();
            psVar15 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar14)(puVar14);
            plVar19 = (long*)shared_ptr<ApplicationContext>::operator->(psVar15);
            psVar20 = (shared_ptr*)(**(code**)(*plVar19 + 80))(plVar19, 2);
            new (local_60) shared_ptr<dash3d::Decor>(psVar20);
            pIVar22 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_60);
            uVar29 = (long)*(int*)&param_1[1063].field_32 - 1;
            *(int*)&param_1[1063].field_32 = (int)uVar29;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1[813].field_32, uVar29);
            pIVar22->SetText(pbVar21);
            pIVar22 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_60);
            uVar29 = (long)*(int*)&param_1[813].field_28 - 1;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1[781].field_124, uVar29);
            pIVar22->SetCharacterLimit(*piVar23);
            pIVar22 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_60);
            pIVar22->ShowKeyboard();
            local_60->~shared_ptr();
            break;
        case 6521:
            puVar14 = (undefined8*)Client::Instance();
            psVar15 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar14)(puVar14);
            pAVar16 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar15);
            pAVar16->CloseActiveInputForm();
            break;
        case 6523:
            puVar14 = (undefined8*)Client::Instance();
            psVar15 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar14)(puVar14);
            plVar19 = (long*)shared_ptr<ApplicationContext>::operator->(psVar15);
            psVar20 = (shared_ptr*)(**(code**)(*plVar19 + 80))(plVar19, 1);
            new (local_40) shared_ptr<dash3d::Decor>(psVar20);
            uVar29 = (long)*(int*)&param_1[1063].field_32 - 1;
            *(int*)&param_1[1063].field_32 = (int)uVar29;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1[813].field_32, uVar29);
            new (local_60) eastl::string(pbVar21);
            eastl::string::basic_string(local_98, (basic_string*)local_60);
            cVar4 = core::stringtools::general::StringTools::IsASCIINumeric(local_98);
            eastl::string::~basic_string(local_98);
            if (cVar4 == '\0') {
                uVar24 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                param_1[1101].field_72.Raise("Invalid input: %s. Only numerical input is valid", uVar24);
            } else {
                pIVar22 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_40);
                pIVar22->SetText(local_60);
                pIVar22 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_40);
                uVar29 = (long)*(int*)&param_1[813].field_28 - 1;
                *(int*)&param_1[813].field_28 = (int)uVar29;
                piVar23 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1[781].field_124, uVar29);
                pIVar22->SetCharacterLimit(*piVar23);
                pIVar22 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_40);
                pIVar22->ShowKeyboard();
            }
            local_60->~basic_string();
            local_40->~shared_ptr();
            return cVar4 != '\0';
        case 6524:
            puVar14 = (undefined8*)Client::Instance();
            psVar15 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar14)(puVar14);
            pAVar16 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar15);
            uVar6 = pAVar16->GetBatteryLevelPercent();
            goto LAB_1001699ce;
        case 6525:
            puVar14 = (undefined8*)Client::Instance();
            psVar15 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar14)(puVar14);
            pAVar16 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar15);
            bVar3 = pAVar16->IsBatteryCharging();
            goto LAB_100169843;
        case 6526:
            puVar14 = (undefined8*)Client::Instance();
            psVar15 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar14)(puVar14);
            pAVar16 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar15);
            bVar3 = pAVar16->IsWifiAvailable();
        LAB_100169843:
            uVar6 = (uint)bVar3;
            goto LAB_1001699ce;
        case 6527:
            this_00 = (GameShell*)Client::Instance();
            uVar6 = this_00->GetPublishingPlatformType();
        LAB_1001699ce:
            iVar5 = *(int*)&param_1[813].field_28;
            *(int*)&param_1[813].field_28 = iVar5 + 1;
            puVar17 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1[781].field_124, (long)iVar5);
            *puVar17 = uVar6;
            break;
        case 6530:
            uVar29 = (long)*(int*)&param_1[813].field_28 - 1;
            *(int*)&param_1[813].field_28 = (int)uVar29;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1[781].field_124, uVar29);
            uVar6 = *puVar17;
            if (6 < uVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert("preset >= (int)hal::Haptics::Preset::NOTIFICATION_SUCCESS && preset <= "
                          "(int)hal::Haptics::Preset::IMPACT_HEAVY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6500To6599.cpp",
                          286, "Vibrate mode not in range 0 - 6");
            }
            pCVar18 = (Client*)Client::Instance();
            pCVar18->Vibrate(uVar6);
        }
        uVar27 = 1;
    switchD_100168fc6_caseD_1967:
        return uVar27;
    }

} // namespace jag::oldscape
