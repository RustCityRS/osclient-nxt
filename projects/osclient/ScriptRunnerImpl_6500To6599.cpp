// projects/osclient/ScriptRunnerImpl_6500To6599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100168f90
    uint8_t ScriptRunnerImpl::ExecuteCommand6500To6599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3) {
        int arg3_00;
        int iVar1;
        Preset preset;
        int iVar2;
        Minimenu* this_00;
        uint8_t bVar3;
        bool cVar4;
        unsigned int uVar5;
        uint32_t uVar6;
        unique_ptr<GameWorld>* puVar7;
        uint32_t* puVar8;
        NpcType* pNVar9;
        shared_ptr<configdecoder::LocType>* psVar10;
        LocType* pLVar11;
        ObjType* pOVar12;
        ParamType* pPVar13;
        StructType* pSVar14;
        long lVar15;
        eastl::string* pbVar16;
        ApplicationContext* pAVar17;
        shared_ptr<ApplicationContext>* psVar18;
        Preset* pPVar19;
        Client* pCVar20;
        long* plVar21;
        shared_ptr<dash3d::GroundDecor>* psVar22;
        eastl::string* pbVar23;
        InputForm* pIVar24;
        int* piVar25;
        unsigned int* puVar26;
        uint64_t uVar27;
        uint32_t* puVar28;
        array<int, 1000ul>* paVar30;
        unsigned long uVar31;
        ReturnValue* pRVar32;
        uint8_t* puVar33;
        eastl::string local_98;
        array<int, 1000ul>* local_78;
        ReturnValue local_70;
        ReturnValue local_60;
        ReturnValue local_40;

        uint8_t uVar29 = 2;
        switch (scriptOp) {
        case 6500:
            bVar3 = ListFetch();
            goto LAB_100169843;
        case 6501:
            puVar28 = (uint32_t*)GameWorld::ListStart();
            goto joined_r0x0001001690b6;
        case 6502:
            puVar28 = (uint32_t*)GameWorld::ListNext();
        joined_r0x0001001690b6:
            if (puVar28 == nullptr) {
                paVar30 = (array<int, 1000ul>*)&field_100092;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*paVar30)[(long)iVar2];
                *puVar28 = 4294967295;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*paVar30)[(long)iVar2];
                *puVar28 = 0;
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
            LAB_100169cf0:
                eastl::string::assign(pbVar16, "");
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*paVar30)[(long)iVar2];
                *puVar28 = 0;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*paVar30)[(long)iVar2];
                *puVar28 = 0;
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
            LAB_100169d5a:
                pbVar16 = &field_104096[(long)iVar2];
                eastl::string::assign(pbVar16, "");
            } else {
                uVar6 = *puVar28;
            LAB_10016934d:
                puVar33 = &field_100092;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar8 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar8 = uVar6;
                uVar6 = puVar28[1];
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar8 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar8 = uVar6;
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
                *pbVar16 = ((puVar28 + 12));
                uVar6 = puVar28[20];
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar8 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar8 = uVar6;
                uVar6 = puVar28[2];
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar8 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar8 = uVar6;
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
            LAB_10016941d:
                pbVar16 = &field_104096[(long)iVar2];
                *pbVar16 = ((puVar28 + 4));
            }
            break;
        default:
            goto switchD_100168fc6_caseD_1967;
        case 6506:
            paVar30 = (array<int, 1000ul>*)&field_100092;
            uVar31 = (long)field_104092 - 1;
            field_104092 = (int)uVar31;
            piVar25 = (int*)(*paVar30)[uVar31];
            if (0 < GameWorld::m_num) {
                iVar2 = *piVar25;
                uVar31 = 0;
                local_78 = paVar30;
                do {
                    puVar7 =
                        (unique_ptr<GameWorld>*)(*((Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[uVar31];
                    piVar25 = (int*)(*puVar7).operator->();
                    if (*piVar25 == iVar2) {
                        puVar7 =
                            (unique_ptr<GameWorld>*)(*((Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[uVar31];
                        puVar28 = (uint32_t*)puVar7->get();
                        paVar30 = local_78;
                        if (puVar28 == nullptr)
                            goto LAB_100169c88;
                        uVar6 = *puVar28;
                        iVar2 = field_104092;
                        field_104092 = iVar2 + 1;
                        puVar8 = (uint32_t*)(*local_78)[(long)iVar2];
                        *puVar8 = uVar6;
                        uVar6 = puVar28[1];
                        iVar2 = field_104092;
                        field_104092 = iVar2 + 1;
                        puVar8 = (uint32_t*)(*paVar30)[(long)iVar2];
                        *puVar8 = uVar6;
                        iVar2 = field_136096;
                        field_136096 = iVar2 + 1;
                        pbVar16 = &field_104096[(long)iVar2];
                        *pbVar16 = ((puVar28 + 12));
                        uVar6 = puVar28[20];
                        iVar2 = field_104092;
                        field_104092 = iVar2 + 1;
                        puVar8 = (uint32_t*)(*paVar30)[(long)iVar2];
                        *puVar8 = uVar6;
                        uVar6 = puVar28[2];
                        iVar2 = field_104092;
                        field_104092 = iVar2 + 1;
                        puVar8 = (uint32_t*)(*paVar30)[(long)iVar2];
                        *puVar8 = uVar6;
                        iVar2 = field_136096;
                        field_136096 = iVar2 + 1;
                        goto LAB_10016941d;
                    }
                    uVar31 = uVar31 + 1;
                } while ((long)uVar31 < (long)GameWorld::m_num);
                paVar30 = local_78;
            }
        LAB_100169c88:
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar28 = (uint32_t*)(*paVar30)[(long)iVar2];
            *puVar28 = 4294967295;
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar28 = (uint32_t*)(*paVar30)[(long)iVar2];
            *puVar28 = 0;
            iVar2 = field_136096;
            field_136096 = iVar2 + 1;
            pbVar16 = &field_104096[(long)iVar2];
            goto LAB_100169cf0;
        case 6507:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 4U);
            puVar33 = &field_100092;
            piVar25 = (int*)(*puVar33)[lVar15 - 4U];
            iVar2 = *piVar25;
            piVar25 = (int*)(*puVar33)[lVar15 - 3];
            iVar1 = *piVar25;
            piVar25 = (int*)(*puVar33)[lVar15 - 2];
            arg3_00 = *piVar25;
            piVar25 = (int*)(*puVar33)[lVar15 - 1];
            GameWorld::ListSort(iVar2, iVar1 == 1, arg3_00, *piVar25 == 1);
            break;
        case 6511:
            puVar33 = &field_100092;
            iVar2 = field_104092;
            uVar31 = (long)iVar2 - 1;
            field_104092 = (int)uVar31;
            piVar25 = (int*)(*puVar33)[uVar31];
            iVar1 = *piVar25;
            if (((long)iVar1 < 0) || (GameWorld::m_num <= iVar1)) {
                field_104092 = iVar2;
                *piVar25 = -1;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = 0;
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
                eastl::string::assign(pbVar16, "");
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = 0;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = 0;
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                goto LAB_100169d5a;
            }
            puVar7 = (unique_ptr<GameWorld>*)(*((Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[(long)iVar1];
            puVar28 = (uint32_t*)**puVar7;
            uVar6 = *puVar28;
            goto LAB_10016934d;
        case 6512:
            pCVar20 = Client::Instance();
            this_00 = pCVar20->field_52344;
            uVar31 = (long)field_104092 - 1;
            field_104092 = (int)uVar31;
            piVar25 = &field_100092[uVar31];
            this_00->SetFollowerLowPriority(*piVar25 == 1);
            break;
        case 6513:
            iVar2 = field_104092;
            uVar31 = (long)iVar2 - 2;
            field_104092 = (int)uVar31;
            puVar33 = &field_100092;
            piVar25 = (int*)(*puVar33)[uVar31];
            iVar1 = *piVar25;
            piVar25 = (int*)(*puVar33)[(long)iVar2 - 1];
            iVar2 = *piVar25;
            local_40 = configdecoder::ParamType::List(iVar2);
            pPVar13 = (ParamType*)local_40.operator->();
            cVar4 = pPVar13->IsStringType();
            if (!cVar4) {
                local_60 = configdecoder::NpcType::List(iVar1);
                pNVar9 = (NpcType*)local_60.operator->();
                lVar15 = local_40.operator->();
                uVar6 = pNVar9->GetParam(iVar2, *(int*)(lVar15 + 4));
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = uVar6;
                pRVar32 = &local_60;
            } else {
                local_70 = configdecoder::NpcType::List(iVar1);
                pNVar9 = (NpcType*)local_70.operator->();
                lVar15 = local_40.operator->();
                local_60 = pNVar9->GetParam(iVar2, *((lVar15 + 8)));
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
                *pbVar16 = &local_60;
                pRVar32 = &local_70;
            }
            pRVar32->~shared_ptr();
            goto LAB_100169c53;
        case 6514:
            iVar2 = field_104092;
            uVar31 = (long)iVar2 - 2;
            field_104092 = (int)uVar31;
            puVar33 = &field_100092;
            piVar25 = (int*)(*puVar33)[uVar31];
            iVar1 = *piVar25;
            piVar25 = (int*)(*puVar33)[(long)iVar2 - 1];
            iVar2 = *piVar25;
            local_40 = configdecoder::ParamType::List(iVar2);
            pPVar13 = (ParamType*)local_40.operator->();
            cVar4 = pPVar13->IsStringType();
            if (!cVar4) {
                psVar10 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar1);
                pLVar11 = (LocType*)(*psVar10).operator->();
                lVar15 = local_40.operator->();
                uVar6 = pLVar11->GetParam(iVar2, *(int*)(lVar15 + 4));
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = uVar6;
            } else {
                psVar10 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar1);
                pLVar11 = (LocType*)(*psVar10).operator->();
                lVar15 = local_40.operator->();
                local_60 = pLVar11->GetParam(iVar2, *((lVar15 + 8)));
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
                *pbVar16 = &local_60;
            }
            goto LAB_100169c53;
        case 6515:
            iVar2 = field_104092;
            uVar31 = (long)iVar2 - 2;
            field_104092 = (int)uVar31;
            puVar33 = &field_100092;
            piVar25 = (int*)(*puVar33)[uVar31];
            iVar1 = *piVar25;
            piVar25 = (int*)(*puVar33)[(long)iVar2 - 1];
            iVar2 = *piVar25;
            local_40 = configdecoder::ParamType::List(iVar2);
            pPVar13 = (ParamType*)local_40.operator->();
            cVar4 = pPVar13->IsStringType();
            if (!cVar4) {
                local_60 = configdecoder::ObjType::List(iVar1);
                pOVar12 = (ObjType*)local_60.operator->();
                lVar15 = local_40.operator->();
                uVar6 = pOVar12->GetParam(iVar2, *(int*)(lVar15 + 4));
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = uVar6;
            } else {
                local_70 = configdecoder::ObjType::List(iVar1);
                pOVar12 = (ObjType*)local_70.operator->();
                lVar15 = local_40.operator->();
                local_60 = pOVar12->GetParam(iVar2, *((lVar15 + 8)));
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
                *pbVar16 = &local_60;
            }
            goto LAB_100169c53;
        case 6516:
            iVar2 = field_104092;
            uVar31 = (long)iVar2 - 2;
            field_104092 = (int)uVar31;
            puVar33 = &field_100092;
            piVar25 = (int*)(*puVar33)[uVar31];
            iVar1 = *piVar25;
            piVar25 = (int*)(*puVar33)[(long)iVar2 - 1];
            iVar2 = *piVar25;
            local_40 = configdecoder::ParamType::List(iVar2);
            pPVar13 = (ParamType*)local_40.operator->();
            cVar4 = pPVar13->IsStringType();
            if (!cVar4) {
                local_60 = configdecoder::StructType::List(iVar1);
                pSVar14 = (StructType*)local_60.operator->();
                lVar15 = local_40.operator->();
                uVar6 = pSVar14->GetParam(iVar2, *(int*)(lVar15 + 4));
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar28 = (uint32_t*)(*puVar33)[(long)iVar2];
                *puVar28 = uVar6;
                pRVar32 = &local_60;
            } else {
                local_70 = configdecoder::StructType::List(iVar1);
                pSVar14 = (StructType*)local_70.operator->();
                lVar15 = local_40.operator->();
                local_60 = pSVar14->GetParam(iVar2, *((lVar15 + 8)));
                iVar2 = field_136096;
                field_136096 = iVar2 + 1;
                pbVar16 = &field_104096[(long)iVar2];
                *pbVar16 = &local_60;
                pRVar32 = &local_70;
            }
            pRVar32->~shared_ptr();
        LAB_100169c53:
            break;
        case 6518:
            pCVar20 = Client::Instance();
            uVar5 = (unsigned int)pCVar20->field_8425;
            goto LAB_1001699ce;
        case 6519:
            Client::Instance();
            uVar5 = GetID();
            goto LAB_1001699ce;
        case 6520:
        case 6522:
            pCVar20 = Client::Instance();
            psVar18 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar20)(pCVar20);
            plVar21 = (long*)(*psVar18).operator->();
            psVar22 = (shared_ptr<dash3d::GroundDecor>*)(**(void (**)(...))(*plVar21 + 80))(plVar21, 2);
            local_60 = shared_ptr(psVar22);
            pIVar24 = (InputForm*)local_60.operator->();
            uVar31 = (long)field_136096 - 1;
            field_136096 = (int)uVar31;
            pbVar23 = &field_104096[uVar31];
            pIVar24->SetText(pbVar23);
            pIVar24 = (InputForm*)local_60.operator->();
            uVar31 = (long)field_104092 - 1;
            field_104092 = (int)uVar31;
            piVar25 = &field_100092[uVar31];
            pIVar24->SetCharacterLimit(*piVar25);
            pIVar24 = (InputForm*)local_60.operator->();
            pIVar24->ShowKeyboard();
            break;
        case 6521:
            pCVar20 = Client::Instance();
            psVar18 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar20)(pCVar20);
            pAVar17 = (ApplicationContext*)(*psVar18).operator->();
            pAVar17->CloseActiveInputForm();
            break;
        case 6523:
            pCVar20 = Client::Instance();
            psVar18 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar20)(pCVar20);
            plVar21 = (long*)(*psVar18).operator->();
            psVar22 = (shared_ptr<dash3d::GroundDecor>*)(**(void (**)(...))(*plVar21 + 80))(plVar21, 1);
            local_40 = shared_ptr(psVar22);
            uVar31 = (long)field_136096 - 1;
            field_136096 = (int)uVar31;
            pbVar23 = &field_104096[uVar31];
            local_60 = eastl::string(*pbVar23);
            local_98 = eastl::string(local_60);
            cVar4 = core::stringtools::general::StringTools::IsASCIINumeric(&local_98);
            if (!cVar4) {
                uVar27 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                field_141000->Raise("Invalid input: %s. Only numerical input is valid", uVar27);
            } else {
                pIVar24 = (InputForm*)local_40.operator->();
                pIVar24->SetText(&local_60);
                pIVar24 = (InputForm*)local_40.operator->();
                uVar31 = (long)field_104092 - 1;
                field_104092 = (int)uVar31;
                piVar25 = &field_100092[uVar31];
                pIVar24->SetCharacterLimit(*piVar25);
                pIVar24 = (InputForm*)local_40.operator->();
                pIVar24->ShowKeyboard();
            }
            return cVar4;
        case 6524:
            pCVar20 = Client::Instance();
            psVar18 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar20)(pCVar20);
            pAVar17 = (ApplicationContext*)(*psVar18).operator->();
            uVar5 = pAVar17->GetBatteryLevelPercent();
            goto LAB_1001699ce;
        case 6525:
            pCVar20 = Client::Instance();
            psVar18 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar20)(pCVar20);
            pAVar17 = (ApplicationContext*)(*psVar18).operator->();
            bVar3 = pAVar17->IsBatteryCharging();
            goto LAB_100169843;
        case 6526:
            pCVar20 = Client::Instance();
            psVar18 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar20)(pCVar20);
            (*psVar18).operator->();
            bVar3 = ApplicationContext::IsWifiAvailable();
        LAB_100169843:
            uVar5 = (unsigned int)bVar3;
            goto LAB_1001699ce;
        case 6527:
            pCVar20 = Client::Instance();
            uVar5 = pCVar20->GetPublishingPlatformType();
        LAB_1001699ce:
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar26 = &field_100092[(long)iVar2];
            *puVar26 = uVar5;
            break;
        case 6530:
            uVar31 = (long)field_104092 - 1;
            field_104092 = (int)uVar31;
            pPVar19 = &field_100092[uVar31];
            preset = *pPVar19;
            if (6 < preset) {
                LogAssert("preset >= (int)hal::Haptics::Preset::NOTIFICATION_SUCCESS && preset <= "
                          "(int)hal::Haptics::Preset::IMPACT_HEAVY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6500To6599.cpp",
                          286, "Vibrate mode not in range 0 - 6");
            }
            pCVar20 = Client::Instance();
            pCVar20->Vibrate(preset);
        }
        uVar29 = 1;
    switchD_100168fc6_caseD_1967:
        return uVar29;
    }

} // namespace jag::oldscape
