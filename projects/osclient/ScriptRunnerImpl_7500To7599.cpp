// projects/osclient/ScriptRunnerImpl_7500To7599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b7b50, 2352 bytes, placed by class name and neighbouring functions
    // ScriptRunnerImpl::ExecuteCommand7400To7499(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand7400To7499(ScriptRunnerImpl* param_1, undefined4 param_2) {
        undefined1* this;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        byte bVar5;
        uint uVar6;
        long lVar7;
        ClientVarValues* this_00;
        eastl::string* this_01;
        basic_string* pbVar8;
        StringVector* pSVar9;
        int* piVar10;
        Client* this_02;
        undefined4* puVar11;
        uint* puVar12;
        ulong uVar13;
        undefined8 uVar14;
        eastl::string local_50[32];

        lVar7 = Client::Instance();
        this_00 = (ClientVarValues*)((lVar7 + 52488))->get();
        uVar14 = 2;
        switch (param_2) {
        case 7400:
            param_1->field_136096 = param_1->field_136096 - 1;
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)param_1->field_136096);
            pSVar9->Append(pbVar8);
            break;
        case 7401:
            param_1->field_136096 = param_1->field_136096 - 1;
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                (long)param_1->field_104092 + 1);
            iVar2 = *piVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)param_1->field_136096);
            if (iVar2 == 0) {
                pSVar9->AppendUniqueCaseInsensitive(pbVar8);
            } else {
                pSVar9->AppendUnique(pbVar8);
            }
            break;
        case 7402:
            param_1->field_136096 = param_1->field_136096 - 1;
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                (long)param_1->field_104092 + 1);
            iVar2 = *piVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)param_1->field_136096);
            pSVar9->Insert(iVar2, pbVar8);
            break;
        case 7403:
            param_1->field_136096 = param_1->field_136096 - 1;
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                (long)param_1->field_104092 + 1);
            iVar2 = *piVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)param_1->field_136096);
            pSVar9->SetIndex(iVar2, pbVar8);
            break;
        case 7404:
            param_1->field_136096 = param_1->field_136096 - 1;
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pbVar8 = (basic_string*)this_00->GetVeccValue(*piVar10);
            if (pbVar8 == (basic_string*)0) {
                return 2;
            }
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                (long)param_1->field_104092 + 1);
            iVar2 = *piVar10;
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&param_1->field_104096,
                                                          (long)(int)param_1->field_136096);
            if (iVar2 == 0) {
                rs2lib::StringVector::EraseCaseInsensitive(pbVar8);
            } else {
                rs2lib::StringVector::Erase(pbVar8);
            }
            break;
        case 7405:
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                (long)param_1->field_104092 + 1);
            pSVar9->EraseIndex(*piVar10);
            break;
        case 7406:
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            lVar7 = this_00->GetVeccValue(*piVar10);
            if (lVar7 == 0) {
                return 2;
            }
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                (long)param_1->field_104092 + 1);
            local_50->GetIndex((int)lVar7);
            uVar6 = param_1->field_136096;
            param_1->field_136096 = uVar6 + 1;
            this_01 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)uVar6);
            eastl::string::operator=(this_01, (basic_string*)local_50);
            eastl::string::~basic_string(local_50);
            break;
        case 7407:
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                (long)param_1->field_104092 - 1);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            uVar6 = pSVar9->Size();
            uVar13 = (long)param_1->field_104092 - 1;
            goto LAB_1000b833d;
        case 7408:
            param_1->field_136096 = param_1->field_136096 - 1;
            uVar13 = (long)param_1->field_104092 - 3;
            param_1->field_104092 = (int)uVar13;
            this = &param_1->field_100092;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            iVar2 = param_1->field_104092;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this, (long)iVar2 + 1);
            iVar1 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this, (long)iVar2 + 2);
            iVar2 = *piVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&param_1->field_104096, (long)(int)param_1->field_136096);
            if (iVar2 == 0) {
                bVar5 = pSVar9->ContainsCaseInsensitive(pbVar8, iVar1 != 0);
            } else {
                bVar5 = pSVar9->Contains(pbVar8, iVar1 != 0);
            }
            uVar6 = (uint)bVar5;
            uVar13 = (ulong)param_1->field_104092;
            param_1->field_104092 = param_1->field_104092 + 1;
            goto LAB_1000b833d;
        case 7409:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            pSVar9 = (StringVector*)this_00->GetVeccValue(*piVar10);
            if (pSVar9 == (StringVector*)0) {
                return 2;
            }
            pSVar9->Clear();
            break;
        default:
            goto switchD_1000b7b9d_caseD_1cf2;
        case 7450:
            lVar7 = Client::Instance();
            uVar6 = (*(Minimenu**)(lVar7 + 52344))->GetNumEntries();
            goto LAB_1000b81c1;
        case 7451:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuOpTypeAt(param_1, *piVar10);
            break;
        case 7452:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuTextAt(param_1, *piVar10);
            break;
        case 7453:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuFindNPCAt(param_1, *piVar10);
            break;
        case 7454:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuFindLocAt(param_1, *piVar10);
            break;
        case 7455:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuFindObjAt(param_1, *piVar10);
            break;
        case 7456:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuFindPlayerAt(param_1, *piVar10);
            break;
        case 7457:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuCoordAt(param_1, *piVar10);
            break;
        case 7458:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuObjTypeAt(param_1, *piVar10);
            break;
        case 7459:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            DoMinimenuFindComponentAt(param_1, *piVar10);
            break;
        case 7460:
            lVar7 = Client::Instance();
            uVar6 = (*(Minimenu**)(lVar7 + 52344))->GetHoveredIndex();
        LAB_1000b81c1:
            uVar13 = (ulong)param_1->field_104092;
            param_1->field_104092 = param_1->field_104092 + 1;
        LAB_1000b833d:
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            *puVar12 = uVar6;
            break;
        case 7461:
            iVar2 = param_1->field_104092;
            uVar13 = (long)iVar2 - 2;
            param_1->field_104092 = (int)uVar13;
            puVar11 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            uVar3 = *puVar11;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar2 - 1);
            uVar4 = *puVar11;
            lVar7 = Client::Instance();
            (*(Minimenu**)(lVar7 + 52344))->SetOpPropertyAddMode(uVar3, uVar4);
            break;
        case 7462:
            iVar2 = param_1->field_104092;
            uVar13 = (long)iVar2 - 2;
            param_1->field_104092 = (int)uVar13;
            puVar11 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            uVar3 = *puVar11;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar2 - 1);
            uVar4 = *puVar11;
            lVar7 = Client::Instance();
            (*(Minimenu**)(lVar7 + 52344))->SetOpPropertyBlockMode(uVar3, uVar4);
            break;
        case 7463:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            iVar2 = *piVar10;
            this_02 = (Client*)Client::Instance();
            this_02->SetUsingOneButtonMouse(iVar2 == 1);
            break;
        case 7464:
            iVar2 = param_1->field_104092;
            uVar13 = (long)iVar2 - 2;
            param_1->field_104092 = (int)uVar13;
            puVar11 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            uVar3 = *puVar11;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar2 - 1);
            uVar4 = *puVar11;
            lVar7 = Client::Instance();
            (*(Minimenu**)(lVar7 + 52344))->SetOpPropertyPriorityMode(uVar3, uVar4);
        }
        uVar14 = 1;
    switchD_1000b7b9d_caseD_1cf2:
        return uVar14;
    }

    // 0x1000b8500, 4480 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand7500To7599(ScriptOp, ClientScript const&, bool)
    byte ScriptRunnerImpl::ExecuteCommand7500To7599(ScriptRunnerImpl* param_1, uint param_2) {
        undefined1* puVar1;
        NXTPixToolkit* this;
        CoordMapSquare* this_00;
        ScriptRunnerImpl* pSVar2;
        array<int, 1000ul>* paVar3;
        bool bVar4;
        char cVar5;
        int iVar6;
        undefined4 uVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        int iVar11;
        long lVar12;
        undefined4* puVar13;
        DBTableIndex* pDVar14;
        Array* pAVar15;
        int* piVar16;
        uint* puVar17;
        PCMPlayer* this_01;
        undefined8 uVar18;
        DBTableType* pDVar19;
        Array<game::VarValue, eastl::allocator>* pAVar20;
        DBRowType* pDVar21;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        ulong uVar22;
        undefined8 uVar23;
        int* piVar24;
        int* piVar25;
        Array<game::VarValue, eastl::allocator>* this_03;
        undefined8* puVar26;
        VarValue* pVVar27;
        char* pcVar28;
        eastl::string* pbVar29;
        ulong uVar30;
        shared_ptr* this_04;
        byte bVar31;
        undefined8 local_e0;
        array<eastl::string, 1000ul>* local_d8;
        shared_ptr local_d0;
        __wrap_iter local_c0[8];
        array<eastl::string, 1000ul>* local_b8;
        DBTableType local_b0;
        undefined1 local_90[40];
        ScriptRunnerImpl* local_68;
        Array<game::VarValue, eastl::allocator>* local_60;
        undefined1 local_58[32];
        array<int, 1000ul>* local_38;

        lVar12 = Client::Instance();
        switch (param_2) {
        case 7500:
        case 7508:
            puVar1 = &param_1->field_100092;
            uVar30 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar30;
            local_38 = (array<int, 1000ul>*)(ulong)param_2;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar30);
            iVar6 = *piVar16;
            new (local_90) game::VarValue();
            local_68 = param_1;
            cVar5 = PopValueOfType(param_1, iVar6, (VarValue*)local_90);
            if (cVar5 == '\0') {
                uVar18 = logger::default_logger();
                bVar31 = 0;
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                    32, "Unable to pop value with BaseVarType %d", iVar6);
                (&local_68->field_141000, 1)->Raise();
            } else {
                uVar30 = (long)local_68->field_104092 - 1;
                local_68->field_104092 = (int)uVar30;
                puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar30);
                uVar9 = *puVar17;
                local_58._24_4_ = game::DBUtils::GetDBFieldTable(uVar9);
                uVar7 = game::DBUtils::GetDBTupleIndex(uVar9);
                local_60 = (Array<game::VarValue, eastl::allocator>*)CONCAT44(local_60._4_4_, uVar7);
                iVar6 = std::unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>::operator->(
                    (unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>*)(lVar12 + 54560));
                local_58->GetDBTableIndex(iVar6);
                bVar4 = local_58->operator_cast_to_bool();
                paVar3 = local_38;
                if (bVar4) {
                    pDVar14 = (DBTableIndex*)shared_ptr<DBTableIndex>::operator->((shared_ptr<DBTableIndex>*)local_58);
                    pSVar2 = local_68;
                    pAVar15 = (Array*)pDVar14->GetDBRowsForValue(local_90, (int)local_60);
                    Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&pSVar2->field_140960,
                                                            pAVar15);
                    *(undefined4*)&pSVar2->field_140984 = 0;
                    *(undefined4*)((long)&pSVar2->field_140984 + 4) = local_58._24_4_;
                    bVar31 = 1;
                    if ((int)paVar3 == 7500) {
                        uVar7 = (&pSVar2->field_140960)->end();
                        iVar6 = pSVar2->field_104092;
                        pSVar2->field_104092 = iVar6 + 1;
                        puVar13 =
                            (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6);
                        *puVar13 = uVar7;
                    }
                } else {
                    uVar18 = logger::default_logger();
                    pSVar2 = local_68;
                    uVar7 = game::DBUtils::GetDBFieldColumn(uVar9);
                    bVar31 = 0;
                    logger::Logger::Log(uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                        44, "db_find: No index for table:%d col:%u", local_58._24_4_, uVar7);
                    (&pSVar2->field_141000, 1)->Raise();
                }
                this_04 = (shared_ptr*)local_58;
            LAB_1000b911d:
                this_04->~shared_ptr();
            }
            goto LAB_1000b9122;
        case 7501:
            uVar9 = *(uint*)&param_1->field_140984;
            uVar30 = (&param_1->field_140960)->end();
            if (uVar30 <= uVar9) {
                iVar6 = param_1->field_104092;
                param_1->field_104092 = iVar6 + 1;
                goto LAB_1000b8cb6;
            }
            uVar9 = *(uint*)&param_1->field_140984;
            *(uint*)&param_1->field_140984 = uVar9 + 1;
            puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&param_1->field_140960, (ulong)uVar9);
            uVar7 = *puVar13;
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
        LAB_1000b8bdf:
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar6);
            *puVar13 = uVar7;
            goto LAB_1000b8cc1;
        case 7502:
            lVar12 = (long)param_1->field_104092;
            param_1->field_104092 = (int)(lVar12 - 3U);
            puVar1 = &param_1->field_100092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar12 - 3U);
            iVar6 = *piVar16;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar12 - 2);
            uVar9 = *puVar17;
            local_58._24_8_ = puVar1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar12 - 1);
            local_38 = (array<int, 1000ul>*)CONCAT44(local_38._4_4_, *puVar13);
            iVar8 = game::DBUtils::GetDBFieldTable(uVar9);
            uVar10 = game::DBUtils::GetDBFieldColumn(uVar9);
            iVar11 = game::DBUtils::GetDBTupleIndex(uVar9);
            local_58->List(iVar6);
            local_b0.List(iVar8);
            bVar4 = operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0);
            if ((bVar4) || (bVar4 = operator==((shared_ptr*)&local_b0, (_func_decltype_nullptr*)0), bVar4)) {
                uVar18 = logger::default_logger();
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                    87, "db_getfield: Requested non-existent row or table");
                (&param_1->field_141000, 1)->Raise();
            LAB_1000b8b5e:
                bVar31 = 0;
            } else {
                pDVar19 = (DBTableType*)shared_ptr<configdecoder::DBTableType>::operator->(
                    (shared_ptr<configdecoder::DBTableType>*)&local_b0);
                pAVar20 = (Array<game::VarValue, eastl::allocator>*)pDVar19->GetColumnVarType(uVar10);
                cVar5 = pAVar20->empty();
                if (cVar5 != '\0') {
                    uVar18 = logger::default_logger();
                    logger::Logger::Log(uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                        94, "db_getfield: Requested non-existent column:%u", uVar10);
                    (&param_1->field_141000, 1)->Raise();
                    goto LAB_1000b8b5e;
                }
                uVar30 = pAVar20->end();
                if ((-1 < iVar11) && ((int)uVar30 <= iVar11)) {
                    uVar18 = logger::default_logger();
                    logger::Logger::Log(uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                        106, "db_getfield: Tuple index out-of-bounds. Requested: %d, Max: %d", iVar11,
                                        (int)uVar30 + -1);
                    (&param_1->field_141000, 1)->Raise();
                    goto LAB_1000b8b5e;
                }
                local_b0._24_8_ = uVar30;
                pDVar19 = (DBTableType*)shared_ptr<configdecoder::DBTableType>::operator*(
                    (shared_ptr<configdecoder::DBTableType>*)&local_b0);
                pDVar21 = (DBRowType*)shared_ptr<configdecoder::DBRowType>::operator*(
                    (shared_ptr<configdecoder::DBRowType>*)local_58);
                this_03 =
                    (Array<game::VarValue, eastl::allocator>*)DBUtils::GetColumnDataValues(pDVar19, pDVar21, uVar10);
                cVar5 = this_03->empty();
                if (cVar5 == '\0') {
                    uVar30 = this_03->end();
                    uVar22 = pAVar20->end();
                    uVar9 = (uint)((uVar30 & 4294967295) / (uVar22 & 4294967295));
                    if (uVar9 <= (uint)local_38) {
                        uVar18 = logger::default_logger();
                        logger::Logger::Log(uVar18, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                            140,
                                            "db_getfield: LIST Index out of bounds - the field you\'re accessing only "
                                            "has %u entries but you asked for index:%u",
                                            uVar9, (uint)local_38);
                        (&param_1->field_141000, 1)->Raise();
                        goto LAB_1000b8b5e;
                    }
                    iVar6 = local_b0._24_4_;
                    bVar4 = 0 < iVar6;
                    local_90._32_8_ = this_03;
                    local_60 = pAVar20;
                    if (0 < iVar6) {
                        local_d8 = (array<eastl::string, 1000ul>*)&param_1->field_104096;
                        local_b8 = (array<eastl::string, 1000ul>*)(long)iVar6;
                        local_b0._24_8_ = local_b0._24_8_ & 4294967295;
                        bVar4 = true;
                        uVar30 = 0;
                        do {
                            pAVar20 = local_60;
                            iVar6 = local_60->end();
                            puVar26 = (undefined8*)Array<ScriptVarType_const*, eastl::allocator>::operator[](
                                (Array<ScriptVarType_const*, eastl::allocator>*)pAVar20, uVar30);
                            iVar6 = iVar6 * (uint)local_38 + (int)uVar30;
                            this_00 = (CoordMapSquare*)*puVar26;
                            lVar12 = this_00->end();
                            if (lVar12 == game::BaseVarType::INTEGER) {
                                pVVar27 = (VarValue*)Array<game::VarValue, eastl::allocator>::operator[](
                                    (Array<game::VarValue, eastl::allocator>*)local_90._32_8_, (long)iVar6);
                                uVar7 = pVVar27->GetInt();
                                iVar6 = param_1->field_104092;
                                param_1->field_104092 = iVar6 + 1;
                                puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](
                                    (array<int, 1000ul>*)local_58._24_8_, (long)iVar6);
                                *puVar13 = uVar7;
                            } else {
                                lVar12 = this_00->end();
                                if (lVar12 != game::BaseVarType::STRING) {
                                    uVar18 = logger::default_logger();
                                    uVar7 = this_00->GetX();
                                    logger::Logger::Log(
                                        uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                        158, "db_getfield: Invalid BaseVarType for field of type %u", uVar7);
                                    (&param_1->field_141000, 1)->Raise();
                                    break;
                                }
                                pVVar27 = (VarValue*)Array<game::VarValue, eastl::allocator>::operator[](
                                    (Array<game::VarValue, eastl::allocator>*)local_90._32_8_, (long)iVar6);
                                pVVar27->GetString();
                                pcVar28 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                new (&local_d0) eastl::allocator("EASTL basic_string");
                                new (local_90) eastl::string(pcVar28, (allocator*)&local_d0);
                                uVar9 = param_1->field_136096;
                                param_1->field_136096 = uVar9 + 1;
                                pbVar29 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                                    local_d8, (long)(int)uVar9);
                                eastl::string::operator=(pbVar29, (basic_string*)local_90);
                                local_90->~basic_string();
                            }
                            uVar30 = uVar30 + 1;
                            bVar4 = (long)uVar30 < (long)local_b8;
                        } while (local_b0._24_8_ != uVar30);
                    }
                } else {
                    iVar6 = local_b0._24_4_;
                    bVar4 = 0 < iVar6;
                    local_60 = pAVar20;
                    if (0 < iVar6) {
                        local_b8 = (array<eastl::string, 1000ul>*)&param_1->field_104096;
                        local_90._32_8_ = SEXT48(iVar6);
                        local_38 = (array<int, 1000ul>*)(local_b0._24_8_ & 4294967295);
                        bVar4 = true;
                        uVar30 = 0;
                        do {
                            puVar26 = (undefined8*)Array<ScriptVarType_const*, eastl::allocator>::operator[](
                                (Array<ScriptVarType_const*, eastl::allocator>*)local_60, uVar30);
                            this = (NXTPixToolkit*)*puVar26;
                            lVar12 = end();
                            if (lVar12 == game::BaseVarType::INTEGER) {
                                pVVar27 = (VarValue*)GetScreen();
                                uVar7 = pVVar27->GetInt();
                                iVar6 = param_1->field_104092;
                                param_1->field_104092 = iVar6 + 1;
                                puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](
                                    (array<int, 1000ul>*)local_58._24_8_, (long)iVar6);
                                *puVar13 = uVar7;
                            } else {
                                lVar12 = end();
                                if (lVar12 != game::BaseVarType::STRING) {
                                    uVar18 = logger::default_logger();
                                    uVar7 = GetX();
                                    logger::Logger::Log(
                                        uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                        129, "db_getfield: Invalid BaseVarType for field of type %u", uVar7);
                                    (&param_1->field_141000, 1)->Raise();
                                    break;
                                }
                                pVVar27 = (VarValue*)GetScreen();
                                pVVar27->GetString();
                                pcVar28 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                new (&local_d0) eastl::allocator("EASTL basic_string");
                                new (local_90) eastl::string(pcVar28, (allocator*)&local_d0);
                                uVar9 = param_1->field_136096;
                                param_1->field_136096 = uVar9 + 1;
                                pbVar29 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                                    local_b8, (long)(int)uVar9);
                                eastl::string::operator=(pbVar29, (basic_string*)local_90);
                                local_90->~basic_string();
                            }
                            uVar30 = uVar30 + 1;
                            bVar4 = (long)uVar30 < (long)local_90._32_8_;
                        } while (local_38 != (array<int, 1000ul>*)uVar30);
                    }
                }
                bVar31 = bVar4 ^ 1;
            }
            local_b0.~shared_ptr();
            local_58->~shared_ptr();
            break;
        case 7503:
            iVar6 = param_1->field_104092;
            uVar30 = (long)iVar6 - 2;
            param_1->field_104092 = (int)uVar30;
            puVar1 = &param_1->field_100092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar30);
            iVar8 = *piVar16;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6 - 1);
            uVar9 = *puVar17;
            iVar6 = game::DBUtils::GetDBFieldTable(uVar9);
            uVar9 = game::DBUtils::GetDBFieldColumn(uVar9);
            local_90->List(iVar8);
            local_58->List(iVar6);
            bVar4 = operator==((shared_ptr*)local_90, (_func_decltype_nullptr*)0);
            if ((bVar4) || (bVar4 = operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0), bVar4)) {
                uVar18 = logger::default_logger();
                bVar31 = 0;
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                    179, "db_getfield: Requested non-existent row or table");
                (&param_1->field_141000, 1)->Raise();
            } else {
                pDVar19 = (DBTableType*)shared_ptr<configdecoder::DBTableType>::operator->(
                    (shared_ptr<configdecoder::DBTableType>*)local_58);
                pAVar20 = (Array<game::VarValue, eastl::allocator>*)pDVar19->GetColumnVarType(uVar9);
                cVar5 = pAVar20->empty();
                uVar7 = 0;
                if (cVar5 == '\0') {
                    pDVar19 = (DBTableType*)shared_ptr<configdecoder::DBTableType>::operator*(
                        (shared_ptr<configdecoder::DBTableType>*)local_58);
                    pDVar21 = (DBRowType*)shared_ptr<configdecoder::DBRowType>::operator*(
                        (shared_ptr<configdecoder::DBRowType>*)local_90);
                    this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)DBUtils::GetColumnDataValues(
                        pDVar19, pDVar21, uVar9);
                    uVar30 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                    uVar22 = pAVar20->end();
                    uVar7 = (undefined4)((uVar30 & 4294967295) / (uVar22 & 4294967295));
                }
                iVar6 = param_1->field_104092;
                param_1->field_104092 = iVar6 + 1;
                puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6);
                *puVar13 = uVar7;
                bVar31 = 1;
            }
            local_58->~shared_ptr();
            local_90->~shared_ptr();
            break;
        case 7504:
        case 7510:
            uVar30 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar30;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar30);
            uVar7 = *puVar13;
            iVar6 = std::unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>::operator->(
                (unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>*)(lVar12 + 54560));
            local_58->GetDBTableMasterIndex(iVar6);
            bVar4 = local_58->operator_cast_to_bool();
            if (bVar4) {
                pDVar14 = (DBTableIndex*)shared_ptr<DBTableIndex>::operator->((shared_ptr<DBTableIndex>*)local_58);
                local_38 = (array<int, 1000ul>*)&param_1->field_100092;
                new (local_90) game::VarValue(0);
                pAVar15 = (Array*)pDVar14->GetDBRowsForValue(local_90);
                Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&param_1->field_140960, pAVar15);
                local_90->~VarValue();
                *(undefined4*)&param_1->field_140984 = 0;
                *(undefined4*)((long)&param_1->field_140984 + 4) = uVar7;
                bVar31 = 1;
                if (param_2 == 7504) {
                    uVar7 = (&param_1->field_140960)->end();
                    iVar6 = param_1->field_104092;
                    param_1->field_104092 = iVar6 + 1;
                    puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](local_38, (long)iVar6);
                    *puVar13 = uVar7;
                }
            } else {
                uVar18 = logger::default_logger();
                bVar31 = 0;
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                    202, "db_listall: No master index for table:%d", uVar7);
                (&param_1->field_141000, 1)->Raise();
            }
            local_58->~shared_ptr();
            break;
        case 7505:
            uVar30 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar30;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar30);
            local_90->List(*piVar16);
            this_01 = (PCMPlayer*)shared_ptr<configdecoder::DBRowType>::operator->(
                (shared_ptr<configdecoder::DBRowType>*)local_90);
            uVar7 = this_01->AlreadyWritten();
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar6);
            *puVar13 = uVar7;
            local_90->~shared_ptr();
            goto LAB_1000b8cc1;
        case 7506:
            uVar30 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar30;
            puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar30);
            uVar9 = *puVar17;
            uVar30 = (&param_1->field_140960)->end();
            if (uVar9 < uVar30) {
                puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_140960, (ulong)uVar9);
                uVar7 = *puVar13;
                iVar6 = param_1->field_104092;
                param_1->field_104092 = iVar6 + 1;
                goto LAB_1000b8bdf;
            }
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
        LAB_1000b8cb6:
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar6);
            *puVar13 = 4294967295;
        LAB_1000b8cc1:
            bVar31 = 1;
            break;
        case 7507:
        case 7509:
            local_58._24_8_ = &param_1->field_100092;
            uVar30 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar30;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_58._24_8_, uVar30);
            iVar6 = *piVar16;
            new (local_90) game::VarValue();
            cVar5 = PopValueOfType(param_1, iVar6, (VarValue*)local_90);
            if (cVar5 != '\0') {
                uVar30 = (long)param_1->field_104092 - 1;
                param_1->field_104092 = (int)uVar30;
                puVar17 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_58._24_8_, uVar30);
                uVar9 = *puVar17;
                iVar6 = game::DBUtils::GetDBFieldTable(uVar9);
                uVar7 = game::DBUtils::GetDBTupleIndex(uVar9);
                local_38 = (array<int, 1000ul>*)CONCAT44(local_38._4_4_, uVar7);
                iVar8 = std::unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>::operator->(
                    (unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>*)(lVar12 + 54560));
                local_d0.GetDBTableIndex(iVar8);
                bVar4 = shared_ptr::operator_cast_to_bool(&local_d0);
                if (bVar4) {
                    if (iVar6 == *(int*)((long)&param_1->field_140984 + 4)) {
                        puVar1 = &param_1->field_140960;
                        cVar5 = puVar1->empty();
                        if (cVar5 == '\0') {
                            pDVar14 = (DBTableIndex*)shared_ptr<DBTableIndex>::operator->(
                                (shared_ptr<DBTableIndex>*)&local_d0);
                            local_60 = (Array<game::VarValue, eastl::allocator>*)pDVar14->GetDBRowsForValue(
                                local_90, (uint)local_38);
                            local_38 = (array<int, 1000ul>*)(ulong)param_2;
                            uVar18 = puVar1->data();
                            uVar23 = puVar1->end();
                            std::vector<int, std::allocator<int>>::vector<int*>(local_58, uVar18, uVar23);
                            local_90._32_8_ = puVar1;
                            local_b0._0_8_ = local_58->begin();
                            local_c0 = (__wrap_iter[8])local_58->end();
                            bVar4 = std::operator!=((__wrap_iter*)&local_b0, local_c0);
                            if (bVar4) {
                                local_68 = param_1;
                                do {
                                    pAVar20 = local_60;
                                    piVar16 = (int*)local_60->data();
                                    piVar24 = (int*)pAVar20->end();
                                    piVar25 = (int*)std::__wrap_iter<int*>::operator*((__wrap_iter<int*>*)&local_b0);
                                    piVar16 = std::find<int const*, int>(piVar16, piVar24, piVar25);
                                    piVar24 = (int*)pAVar20->end();
                                    if (piVar16 == piVar24) {
                                        std::__wrap_iter<int const*>::__wrap_iter<int*>((__wrap_iter*)&local_e0,
                                                                                        (type*)&local_b0);
                                        local_b0._0_8_ = local_58->erase(local_e0);
                                    } else {
                                        std::__wrap_iter<int*>::operator++((__wrap_iter<int*>*)&local_b0);
                                    }
                                    param_1 = local_68;
                                    local_c0 = (__wrap_iter[8])local_58->end();
                                    bVar4 = std::operator!=((__wrap_iter*)&local_b0, local_c0);
                                } while (bVar4);
                            }
                            piVar16 = (int*)local_58->data();
                            lVar12 = local_58->size();
                            new (&local_b0) Array<int, eastl::allocator>(piVar16, piVar16 + lVar12);
                            uVar18 = local_90._32_8_;
                            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)local_90._32_8_,
                                                                    (Array*)&local_b0);
                            paVar3 = local_38;
                            local_b0.~Array();
                            *(undefined4*)&param_1->field_140984 = 0;
                            if ((int)paVar3 == 7507) {
                                uVar7 = uVar18->end();
                                iVar6 = param_1->field_104092;
                                param_1->field_104092 = iVar6 + 1;
                                puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](
                                    (array<int, 1000ul>*)local_58._24_8_, (long)iVar6);
                                *puVar13 = uVar7;
                            }
                            local_58->~vector();
                            bVar31 = 1;
                        } else {
                            uVar18 = logger::default_logger();
                            bVar31 = 0;
                            logger::Logger::Log(uVar18, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/ScriptRunnerImpl_7500To7599.cpp",
                                                269, "db_find_refine: No search results to refine!");
                            (&param_1->field_141000, 1)->Raise();
                        }
                    } else {
                        uVar18 = logger::default_logger();
                        bVar31 = 0;
                        logger::Logger::Log(uVar18, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                            263, "db_find_refine: Invalid table - not the same as previous find!");
                        (&param_1->field_141000, 1)->Raise();
                    }
                } else {
                    uVar18 = logger::default_logger();
                    uVar7 = game::DBUtils::GetDBFieldColumn(uVar9);
                    bVar31 = 0;
                    logger::Logger::Log(uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                        256, "db_find_refine: No index for table:%d col:%u", iVar6, uVar7);
                    (&param_1->field_141000, 1)->Raise();
                }
                this_04 = &local_d0;
                goto LAB_1000b911d;
            }
            uVar18 = logger::default_logger();
            bVar31 = 0;
            logger::Logger::Log(uVar18, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_7500To7599.cpp",
                                244, "Unable to pop value with BaseVarType %d", iVar6);
            (&param_1->field_141000, 1)->Raise();
        LAB_1000b9122:
            local_90->~VarValue();
            break;
        default:
            bVar31 = 2;
        }
        return bVar31;
    }

} // namespace jag::oldscape
