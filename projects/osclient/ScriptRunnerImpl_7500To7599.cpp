// projects/osclient/ScriptRunnerImpl_7500To7599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b7b50
    uint64_t ScriptRunnerImpl::ExecuteCommand7400To7499(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        int iVar1;
        MinimenuEntryAddMode minimenuEntryAddMode;
        MinimenuEntryBlockMode minimenuEntryBlockMode;
        int iVar2;
        OpProperty OVar3;
        MinimenuEntryPriorityMode minimenuEntryPriorityMode;
        uint8_t bVar4;
        unsigned int uVar5;
        eastl::string* this_02;
        eastl::string* pbVar7;
        StringVector* pSVar8;
        MinimenuEntryAddMode* pMVar9;
        MinimenuEntryBlockMode* pMVar10;
        int* piVar11;
        OpProperty* pOVar12;
        MinimenuEntryPriorityMode* pMVar13;
        unsigned int* puVar14;
        unsigned long uVar15;
        ReturnValue local_50;

        auto pCVar6 = Client::Instance();
        auto this_01 = pCVar6->field_52488.get();
        uint64_t uVar16 = 2;
        switch (scriptOp) {
        case 7400:
            field_136096 = field_136096 - 1;
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            pbVar7 = &field_104096[(long)field_136096];
            pSVar8->Append(*pbVar7);
            break;
        case 7401:
            field_136096 = field_136096 - 1;
            uVar15 = (long)field_104092 - 2;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            piVar11 = &field_100092[(long)field_104092 + 1];
            iVar2 = *piVar11;
            pbVar7 = &field_104096[(long)field_136096];
            if (iVar2 == 0) {
                pSVar8->AppendUniqueCaseInsensitive(*pbVar7);
            } else {
                pSVar8->AppendUnique(*pbVar7);
            }
            break;
        case 7402:
            field_136096 = field_136096 - 1;
            uVar15 = (long)field_104092 - 2;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            piVar11 = &field_100092[(long)field_104092 + 1];
            iVar2 = *piVar11;
            pbVar7 = &field_104096[(long)field_136096];
            pSVar8->Insert(iVar2, *pbVar7);
            break;
        case 7403:
            field_136096 = field_136096 - 1;
            uVar15 = (long)field_104092 - 2;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            piVar11 = &field_100092[(long)field_104092 + 1];
            iVar2 = *piVar11;
            pbVar7 = &field_104096[(long)field_136096];
            pSVar8->SetIndex(iVar2, *pbVar7);
            break;
        case 7404:
            field_136096 = field_136096 - 1;
            uVar15 = (long)field_104092 - 2;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            piVar11 = &field_100092[(long)field_104092 + 1];
            iVar2 = *piVar11;
            pbVar7 = &field_104096[(long)field_136096];
            if (iVar2 == 0) {
                pSVar8->EraseCaseInsensitive(*pbVar7);
            } else {
                pSVar8->Erase(*pbVar7);
            }
            break;
        case 7405:
            uVar15 = (long)field_104092 - 2;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            piVar11 = &field_100092[(long)field_104092 + 1];
            pSVar8->EraseIndex(*piVar11);
            break;
        case 7406:
            uVar15 = (long)field_104092 - 2;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            piVar11 = &field_100092[(long)field_104092 + 1];
            local_50 = pSVar8->GetIndex(*piVar11);
            iVar2 = field_136096;
            field_136096 = iVar2 + 1;
            this_02 = &field_104096[(long)iVar2];
            *this_02 = &local_50;
            break;
        case 7407:
            piVar11 = &field_100092[(long)field_104092 - 1];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            uVar5 = pSVar8->Size();
            uVar15 = (long)field_104092 - 1;
            goto LAB_1000b833d;
        case 7408:
            field_136096 = field_136096 - 1;
            uVar15 = (long)field_104092 - 3;
            field_104092 = (int)uVar15;
            this_00 = &field_100092;
            piVar11 = (int*)(*this_00)[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            iVar2 = field_104092;
            piVar11 = (int*)(*this_00)[(long)iVar2 + 1];
            iVar1 = *piVar11;
            piVar11 = (int*)(*this_00)[(long)iVar2 + 2];
            iVar2 = *piVar11;
            pbVar7 = &field_104096[(long)field_136096];
            if (iVar2 == 0) {
                bVar4 = pSVar8->ContainsCaseInsensitive(*pbVar7, iVar1 != 0);
            } else {
                bVar4 = pSVar8->Contains(*pbVar7, iVar1 != 0);
            }
            uVar5 = (unsigned int)bVar4;
            uVar15 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b833d;
        case 7409:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            pSVar8 = this_01->GetVeccValue(*piVar11);
            if (pSVar8 == nullptr) {
                return 2;
            }
            pSVar8->Clear();
            break;
        default:
            goto switchD_1000b7b9d_caseD_1cf2;
        case 7450:
            pCVar6 = Client::Instance();
            uVar5 = pCVar6->field_52344->GetNumEntries();
            goto LAB_1000b81c1;
        case 7451:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuOpTypeAt(*piVar11);
            break;
        case 7452:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuTextAt(*piVar11);
            break;
        case 7453:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuFindNPCAt(*piVar11);
            break;
        case 7454:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuFindLocAt(*piVar11);
            break;
        case 7455:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuFindObjAt(*piVar11);
            break;
        case 7456:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuFindPlayerAt(*piVar11);
            break;
        case 7457:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuCoordAt(*piVar11);
            break;
        case 7458:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuObjTypeAt(*piVar11);
            break;
        case 7459:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            DoMinimenuFindComponentAt(*piVar11);
            break;
        case 7460:
            pCVar6 = Client::Instance();
            uVar5 = pCVar6->field_52344->GetHoveredIndex();
        LAB_1000b81c1:
            uVar15 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000b833d:
            puVar14 = &field_100092[uVar15];
            *puVar14 = uVar5;
            break;
        case 7461:
            iVar2 = field_104092;
            uVar15 = (long)iVar2 - 2;
            field_104092 = (int)uVar15;
            pOVar12 = &field_100092[uVar15];
            OVar3 = *pOVar12;
            pMVar9 = &field_100092[(long)iVar2 - 1];
            minimenuEntryAddMode = *pMVar9;
            pCVar6 = Client::Instance();
            pCVar6->field_52344->SetOpPropertyAddMode(OVar3, minimenuEntryAddMode);
            break;
        case 7462:
            iVar2 = field_104092;
            uVar15 = (long)iVar2 - 2;
            field_104092 = (int)uVar15;
            pOVar12 = &field_100092[uVar15];
            OVar3 = *pOVar12;
            pMVar10 = &field_100092[(long)iVar2 - 1];
            minimenuEntryBlockMode = *pMVar10;
            pCVar6 = Client::Instance();
            pCVar6->field_52344->SetOpPropertyBlockMode(OVar3, minimenuEntryBlockMode);
            break;
        case 7463:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar11 = &field_100092[uVar15];
            iVar2 = *piVar11;
            pCVar6 = Client::Instance();
            pCVar6->SetUsingOneButtonMouse(iVar2 == 1);
            break;
        case 7464:
            iVar2 = field_104092;
            uVar15 = (long)iVar2 - 2;
            field_104092 = (int)uVar15;
            pOVar12 = &field_100092[uVar15];
            OVar3 = *pOVar12;
            pMVar13 = &field_100092[(long)iVar2 - 1];
            minimenuEntryPriorityMode = *pMVar13;
            pCVar6 = Client::Instance();
            pCVar6->field_52344->SetOpPropertyPriorityMode(OVar3, minimenuEntryPriorityMode);
        }
        uVar16 = 1;
    switchD_1000b7b9d_caseD_1cf2:
        return uVar16;
    }

    // 0x1000b8500
    uint8_t ScriptRunnerImpl::ExecuteCommand7500To7599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3) {
        uint8_t* puVar1;
        NXTPixToolkit* this_00;
        CoordMapSquare* this_01;
        Array<int>* this_02;
        ScriptRunnerImpl* pSVar2;
        array<int, 1000ul>* paVar3;
        bool cVar4;
        bool bVar5;
        uint32_t uVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        unsigned int arg1;
        int iVar10;
        int* piVar12;
        DBTableIndexCache* pDVar13;
        DBTableIndex* pDVar14;
        Array<int>* pAVar15;
        uint32_t* puVar16;
        unsigned int* puVar17;
        Logger* pLVar18;
        DBTableType* pDVar19;
        Array<game::VarValue>* pAVar20;
        DBRowType* pDVar21;
        unsigned long uVar22;
        type* arg2;
        int* arg2_00;
        int* arg3_00;
        long lVar23;
        Array<game::VarValue>* this_05;
        uint64_t* puVar24;
        VarValue* pVVar25;
        char* pcVar26;
        eastl::string* pbVar27;
        unsigned long uVar28;
        shared_ptr* this_06;
        uint8_t bVar29;
        uint8_t auVar30[16];
        __wrap_iter<int const*>* local_e0;
        array<eastl::string, 1000ul>* local_d8;
        shared_ptr local_d0;
        uint64_t local_c0;
        array<eastl::string, 1000ul>* local_b8;
        ReturnValue local_b0;
        unsigned long local_98;
        ReturnValue local_90;
        Array<int>* local_70;
        ScriptRunnerImpl* local_68;
        Array<game::VarValue>* local_60;
        shared_ptr local_58;
        array<int, 1000ul>* local_40;
        array<int, 1000ul>* local_38;

        auto pCVar11 = Client::Instance();
        switch (scriptOp) {
        case 7500:
        case 7508:
            puVar1 = &field_100092;
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            local_38 = (array<int, 1000ul>*)(unsigned long)scriptOp;
            piVar12 = (int*)(*puVar1)[uVar28];
            iVar7 = *piVar12;
            local_90 = game::VarValue();
            local_68 = this;
            cVar4 = PopValueOfType(iVar7, local_90);
            if (!cVar4) {
                pLVar18 = logger::default_logger();
                bVar29 = 0;
                pLVar18->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_7500To7599.cpp",
                             32, "Unable to pop value with BaseVarType %d", iVar7);
                local_68->field_141000->Raise(1);
            } else {
                uVar28 = (long)local_68->field_104092 - 1;
                local_68->field_104092 = (int)uVar28;
                puVar17 = (unsigned int*)(*puVar1)[uVar28];
                uVar8 = *puVar17;
                uVar6 = game::DBUtils::GetDBFieldTable(uVar8);
                local_40 = (array<int, 1000ul>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar6);
                uVar6 = game::DBUtils::GetDBTupleIndex(uVar8);
                local_60 = (Array<game::VarValue>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar6);
                pDVar13 = (DBTableIndexCache*)pCVar11->field_54560.operator->();
                local_58 = pDVar13->GetDBTableIndex(uVar8);
                cVar4 = shared_ptr::operator_cast_to_bool(&local_58);
                paVar3 = local_38;
                if (!cVar4) {
                    pLVar18 = logger::default_logger();
                    pSVar2 = local_68;
                    uVar6 = game::DBUtils::GetDBFieldColumn(uVar8);
                    bVar29 = 0;
                    pLVar18->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7500To7599.cpp",
                                 44, "db_find: No index for table:%d col:%u", (int)local_40, uVar6);
                    pSVar2->field_141000->Raise(1);
                } else {
                    pDVar14 = (DBTableIndex*)local_58.operator->();
                    pSVar2 = local_68;
                    pAVar15 = (Array<int>*)pDVar14->GetDBRowsForValue(local_90, (int)local_60);
                    pSVar2->field_140960 = *pAVar15;
                    pSVar2->field_140984 = 0;
                    pSVar2->field_140988 = (int)local_40;
                    bVar29 = 1;
                    if ((int)paVar3 == 7500) {
                        uVar6 = pSVar2->field_140960.end();
                        iVar7 = pSVar2->field_104092;
                        pSVar2->field_104092 = iVar7 + 1;
                        puVar16 = (uint32_t*)(*puVar1)[(long)iVar7];
                        *puVar16 = uVar6;
                    }
                }
                this_06 = &local_58;
            LAB_1000b911d:
                this_06->~shared_ptr();
            }
            goto LAB_1000b9122;
        case 7501:
            uVar8 = field_140984;
            uVar28 = field_140960.end();
            if (uVar28 <= uVar8) {
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                goto LAB_1000b8cb6;
            }
            uVar8 = field_140984;
            field_140984 = uVar8 + 1;
            puVar16 = &field_140960[(unsigned long)uVar8];
            uVar6 = *puVar16;
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
        LAB_1000b8bdf:
            puVar16 = &field_100092[(long)iVar7];
            *puVar16 = uVar6;
            goto LAB_1000b8cc1;
        case 7502:
            lVar23 = (long)field_104092;
            field_104092 = (int)(lVar23 - 3U);
            puVar1 = &field_100092;
            piVar12 = (int*)(*puVar1)[lVar23 - 3U];
            iVar7 = *piVar12;
            puVar17 = (unsigned int*)(*puVar1)[lVar23 - 2];
            uVar8 = *puVar17;
            local_40 = (array<int, 1000ul>*)puVar1;
            puVar16 = (uint32_t*)(*puVar1)[lVar23 - 1];
            local_38 = (array<int, 1000ul>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar16));
            iVar9 = game::DBUtils::GetDBFieldTable(uVar8);
            arg1 = game::DBUtils::GetDBFieldColumn(uVar8);
            iVar10 = game::DBUtils::GetDBTupleIndex(uVar8);
            local_58 = configdecoder::DBRowType::List(iVar7);
            local_b0 = configdecoder::DBTableType::List(iVar9);
            bVar5 = local_58 == nullptr;
            if ((bVar5) || (bVar5 = local_b0 == nullptr, bVar5)) {
                pLVar18 = logger::default_logger();
                pLVar18->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_7500To7599.cpp",
                             87, "db_getfield: Requested non-existent row or table");
                field_141000->Raise(1);
            LAB_1000b8b5e:
                bVar29 = 0;
            } else {
                pDVar19 = (DBTableType*)local_b0.operator->();
                pAVar20 = pDVar19->GetColumnVarType(arg1);
                cVar4 = pAVar20->empty();
                if (cVar4) {
                    pLVar18 = logger::default_logger();
                    pLVar18->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7500To7599.cpp",
                                 94, "db_getfield: Requested non-existent column:%u", arg1);
                    field_141000->Raise(1);
                    goto LAB_1000b8b5e;
                }
                uVar28 = pAVar20->end();
                if ((-1 < iVar10) && ((int)uVar28 <= iVar10)) {
                    pLVar18 = logger::default_logger();
                    pLVar18->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7500To7599.cpp",
                                 106, "db_getfield: Tuple index out-of-bounds. Requested: %d, Max: %d", iVar10,
                                 (int)uVar28 - 1);
                    field_141000->Raise(1);
                    goto LAB_1000b8b5e;
                }
                local_98 = uVar28;
                pDVar19 = (DBTableType*)*local_b0;
                pDVar21 = (DBRowType*)*local_58;
                this_05 = (Array<game::VarValue>*)DBUtils::GetColumnDataValues(*pDVar19, *pDVar21, arg1);
                cVar4 = this_05->empty();
                if (!cVar4) {
                    uVar28 = this_05->end();
                    uVar22 = pAVar20->end();
                    uVar8 = (unsigned int)((uVar28 & 4294967295) / (uVar22 & 4294967295));
                    if (uVar8 <= (unsigned int)local_38) {
                        pLVar18 = logger::default_logger();
                        pLVar18->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                     140,
                                     "db_getfield: LIST Index out of bounds - the field you\'re accessing only has %u "
                                     "entries but you asked for index:%u",
                                     uVar8, (unsigned int)local_38);
                        field_141000->Raise(1);
                        goto LAB_1000b8b5e;
                    }
                    iVar7 = (int)local_98;
                    bVar5 = 0 < iVar7;
                    local_70 = (Array<int>*)this_05;
                    local_60 = pAVar20;
                    if (0 < iVar7) {
                        local_d8 = (array<eastl::string, 1000ul>*)&field_104096;
                        local_b8 = (array<eastl::string, 1000ul>*)(long)iVar7;
                        local_98 = local_98 & 4294967295;
                        bVar5 = true;
                        uVar28 = 0;
                        do {
                            pAVar20 = local_60;
                            iVar7 = local_60->end();
                            puVar24 = (uint64_t*)(*pAVar20)[uVar28];
                            iVar7 = iVar7 * (unsigned int)local_38 + (int)uVar28;
                            this_01 = (CoordMapSquare*)*puVar24;
                            lVar23 = this_01->end();
                            if (lVar23 == game::BaseVarType::INTEGER) {
                                pVVar25 = (VarValue*)(*local_70)[(long)iVar7];
                                uVar6 = pVVar25->GetInt();
                                iVar7 = field_104092;
                                field_104092 = iVar7 + 1;
                                puVar16 = (uint32_t*)(*local_40)[(long)iVar7];
                                *puVar16 = uVar6;
                            } else {
                                lVar23 = this_01->end();
                                if (lVar23 != game::BaseVarType::STRING) {
                                    pLVar18 = logger::default_logger();
                                    uVar6 = this_01->GetX();
                                    pLVar18->Log(false, 2,
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "projects/osclient/ScriptRunnerImpl_7500To7599.cpp",
                                                 158, "db_getfield: Invalid BaseVarType for field of type %u", uVar6);
                                    field_141000->Raise(1);
                                    break;
                                }
                                pVVar25 = (VarValue*)(*local_70)[(long)iVar7];
                                pVVar25->GetString();
                                pcVar26 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                local_90 = eastl::string(pcVar26);
                                iVar7 = field_136096;
                                field_136096 = iVar7 + 1;
                                pbVar27 = (eastl::string*)(*local_d8)[(long)iVar7];
                                *pbVar27 = &local_90;
                            }
                            uVar28 = uVar28 + 1;
                            bVar5 = (long)uVar28 < (long)local_b8;
                        } while (local_98 != uVar28);
                    }
                } else {
                    iVar7 = (int)local_98;
                    bVar5 = 0 < iVar7;
                    local_60 = pAVar20;
                    if (0 < iVar7) {
                        local_b8 = (array<eastl::string, 1000ul>*)&field_104096;
                        local_70 = (Array<int>*)(long)iVar7;
                        local_38 = (array<int, 1000ul>*)(local_98 & 4294967295);
                        bVar5 = true;
                        uVar28 = 0;
                        do {
                            puVar24 = (uint64_t*)(*local_60)[uVar28];
                            this_00 = (NXTPixToolkit*)*puVar24;
                            lVar23 = this_00->end();
                            if (lVar23 == game::BaseVarType::INTEGER) {
                                pVVar25 = (VarValue*)this_00->GetScreen();
                                uVar6 = pVVar25->GetInt();
                                iVar7 = field_104092;
                                field_104092 = iVar7 + 1;
                                puVar16 = (uint32_t*)(*local_40)[(long)iVar7];
                                *puVar16 = uVar6;
                            } else {
                                lVar23 = this_00->end();
                                if (lVar23 != game::BaseVarType::STRING) {
                                    pLVar18 = logger::default_logger();
                                    uVar6 = this_00->GetX();
                                    pLVar18->Log(false, 2,
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "projects/osclient/ScriptRunnerImpl_7500To7599.cpp",
                                                 129, "db_getfield: Invalid BaseVarType for field of type %u", uVar6);
                                    field_141000->Raise(1);
                                    break;
                                }
                                pVVar25 = (VarValue*)this_00->GetScreen();
                                pVVar25->GetString();
                                pcVar26 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                local_90 = eastl::string(pcVar26);
                                iVar7 = field_136096;
                                field_136096 = iVar7 + 1;
                                pbVar27 = (eastl::string*)(*local_b8)[(long)iVar7];
                                *pbVar27 = &local_90;
                            }
                            uVar28 = uVar28 + 1;
                            bVar5 = (long)uVar28 < (long)local_70;
                        } while (local_38 != (array<int, 1000ul>*)uVar28);
                    }
                }
                bVar29 = bVar5 ^ 1;
            }
            break;
        case 7503:
            iVar7 = field_104092;
            uVar28 = (long)iVar7 - 2;
            field_104092 = (int)uVar28;
            puVar1 = &field_100092;
            piVar12 = (int*)(*puVar1)[uVar28];
            iVar9 = *piVar12;
            puVar17 = (unsigned int*)(*puVar1)[(long)iVar7 - 1];
            uVar8 = *puVar17;
            iVar7 = game::DBUtils::GetDBFieldTable(uVar8);
            uVar8 = game::DBUtils::GetDBFieldColumn(uVar8);
            local_90 = configdecoder::DBRowType::List(iVar9);
            local_58 = configdecoder::DBTableType::List(iVar7);
            bVar5 = local_90 == nullptr;
            if ((bVar5) || (bVar5 = local_58 == nullptr, bVar5)) {
                pLVar18 = logger::default_logger();
                bVar29 = 0;
                pLVar18->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_7500To7599.cpp",
                             179, "db_getfield: Requested non-existent row or table");
                field_141000->Raise(1);
            } else {
                pDVar19 = (DBTableType*)local_58.operator->();
                pAVar20 = pDVar19->GetColumnVarType(uVar8);
                cVar4 = pAVar20->empty();
                uVar6 = 0;
                if (!cVar4) {
                    pDVar19 = (DBTableType*)*local_58;
                    pDVar21 = (DBRowType*)*local_90;
                    uVar28 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)DBUtils::GetColumnDataValues(
                                  *pDVar19, *pDVar21, uVar8))
                                 ->end();
                    uVar22 = pAVar20->end();
                    uVar6 = (uint32_t)((uVar28 & 4294967295) / (uVar22 & 4294967295));
                }
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar16 = (uint32_t*)(*puVar1)[(long)iVar7];
                *puVar16 = uVar6;
                bVar29 = 1;
            }
            break;
        case 7504:
        case 7510:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar12 = &field_100092[uVar28];
            iVar7 = *piVar12;
            pDVar13 = (DBTableIndexCache*)pCVar11->field_54560.operator->();
            local_58 = pDVar13->GetDBTableMasterIndex(iVar7);
            cVar4 = shared_ptr::operator_cast_to_bool(&local_58);
            if (!cVar4) {
                pLVar18 = logger::default_logger();
                bVar29 = 0;
                pLVar18->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_7500To7599.cpp",
                             202, "db_listall: No master index for table:%d", iVar7);
                field_141000->Raise(1);
            } else {
                pDVar14 = (DBTableIndex*)local_58.operator->();
                local_38 = (array<int, 1000ul>*)&field_100092;
                local_90 = game::VarValue(0);
                pAVar15 = (Array<int>*)pDVar14->GetDBRowsForValue(local_90);
                field_140960 = *pAVar15;
                field_140984 = 0;
                field_140988 = iVar7;
                bVar29 = 1;
                if (scriptOp == 7504) {
                    uVar6 = field_140960.end();
                    iVar7 = field_104092;
                    field_104092 = iVar7 + 1;
                    puVar16 = (uint32_t*)(*local_38)[(long)iVar7];
                    *puVar16 = uVar6;
                }
            }
            break;
        case 7505:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar12 = &field_100092[uVar28];
            local_90 = configdecoder::DBRowType::List(*piVar12);
            uVar6 = ((PCMPlayer*)local_90.operator->())->AlreadyWritten();
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar16 = &field_100092[(long)iVar7];
            *puVar16 = uVar6;
            goto LAB_1000b8cc1;
        case 7506:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar17 = &field_100092[uVar28];
            uVar8 = *puVar17;
            uVar28 = field_140960.end();
            if (uVar8 < uVar28) {
                puVar16 = &field_140960[(unsigned long)uVar8];
                uVar6 = *puVar16;
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                goto LAB_1000b8bdf;
            }
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
        LAB_1000b8cb6:
            puVar16 = &field_100092[(long)iVar7];
            *puVar16 = 4294967295;
        LAB_1000b8cc1:
            bVar29 = 1;
            break;
        case 7507:
        case 7509:
            local_40 = (array<int, 1000ul>*)&field_100092;
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar12 = (int*)(*local_40)[uVar28];
            iVar7 = *piVar12;
            local_90 = game::VarValue();
            cVar4 = PopValueOfType(iVar7, local_90);
            if (cVar4) {
                uVar28 = (long)field_104092 - 1;
                field_104092 = (int)uVar28;
                puVar17 = (unsigned int*)(*local_40)[uVar28];
                uVar8 = *puVar17;
                iVar7 = game::DBUtils::GetDBFieldTable(uVar8);
                uVar6 = game::DBUtils::GetDBTupleIndex(uVar8);
                local_38 = (array<int, 1000ul>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar6);
                pDVar13 = (DBTableIndexCache*)pCVar11->field_54560.operator->();
                local_d0 = pDVar13->GetDBTableIndex(uVar8);
                cVar4 = shared_ptr::operator_cast_to_bool(&local_d0);
                if (!cVar4) {
                    pLVar18 = logger::default_logger();
                    uVar6 = game::DBUtils::GetDBFieldColumn(uVar8);
                    bVar29 = 0;
                    pLVar18->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7500To7599.cpp",
                                 256, "db_find_refine: No index for table:%d col:%u", iVar7, uVar6);
                    field_141000->Raise(1);
                } else if (iVar7 == field_140988) {
                    puVar1 = &field_140960;
                    cVar4 = puVar1->empty();
                    if (!cVar4) {
                        pDVar14 = (DBTableIndex*)local_d0.operator->();
                        local_60 = (Array<game::VarValue>*)pDVar14->GetDBRowsForValue(local_90, (unsigned int)local_38);
                        local_38 = (array<int, 1000ul>*)(unsigned long)scriptOp;
                        piVar12 = (int*)puVar1->data();
                        arg2 = (type*)puVar1->end();
                        local_58.vector<int*>(piVar12, arg2);
                        local_70 = (Array<int>*)puVar1;
                        local_b0[0] = (ReturnValue)local_58.begin();
                        local_c0 = local_58.end();
                        bVar5 = &local_b0 != &local_c0;
                        if (bVar5) {
                            local_68 = this;
                            do {
                                pAVar20 = local_60;
                                piVar12 = (int*)local_60->data();
                                arg2_00 = (int*)pAVar20->end();
                                arg3_00 = (int*)*local_b0;
                                piVar12 = std::find<int const*, int>(piVar12, arg2_00, *arg3_00);
                                auVar30 = pAVar20->end();
                                if (piVar12 == auVar30._0_8_) {
                                    local_e0.__wrap_iter<int*>(local_b0, auVar30._8_8_);
                                    local_b0[0] = (ReturnValue)local_58.erase(local_e0);
                                } else {
                                    ++local_b0;
                                }
                                this = local_68;
                                local_c0 = local_58.end();
                                bVar5 = &local_b0 != &local_c0;
                            } while (bVar5);
                        }
                        piVar12 = (int*)local_58.data();
                        lVar23 = local_58.size();
                        local_b0 = Array<int>(piVar12, piVar12 + lVar23);
                        this_02 = local_70;
                        *local_70 = local_b0;
                        paVar3 = local_38;
                        field_140984 = 0;
                        if ((int)paVar3 == 7507) {
                            uVar6 = this_02->end();
                            iVar7 = field_104092;
                            field_104092 = iVar7 + 1;
                            puVar16 = (uint32_t*)(*local_40)[(long)iVar7];
                            *puVar16 = uVar6;
                        }
                        bVar29 = 1;
                    } else {
                        pLVar18 = logger::default_logger();
                        bVar29 = 0;
                        pLVar18->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/ScriptRunnerImpl_7500To7599.cpp",
                                     269, "db_find_refine: No search results to refine!");
                        field_141000->Raise(1);
                    }
                } else {
                    pLVar18 = logger::default_logger();
                    bVar29 = 0;
                    pLVar18->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7500To7599.cpp",
                                 263, "db_find_refine: Invalid table - not the same as previous find!");
                    field_141000->Raise(1);
                }
                this_06 = &local_d0;
                goto LAB_1000b911d;
            }
            pLVar18 = logger::default_logger();
            bVar29 = 0;
            pLVar18->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_7500To7599.cpp",
                         244, "Unable to pop value with BaseVarType %d", iVar7);
            field_141000->Raise(1);
        LAB_1000b9122:
            break;
        default:
            bVar29 = 2;
        }
        return bVar29;
    }

} // namespace jag::oldscape
