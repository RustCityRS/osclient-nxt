// projects/osclient/ScriptRunnerImpl_6800To6899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016c900
    uint64_t ScriptRunnerImpl::GetActiveObjType() const {
        long lVar2;
        uint64_t uVar3;
        ReturnValue local_40;
        ReturnValue local_30;

        bool cVar1 = ((field_140888 + 24))->expired();
        if (!cVar1) {
            local_30 = ((field_140888 + 24))->lock();
            lVar2 = local_30.operator->();
            local_40 = configdecoder::ObjType::List(*(int*)(lVar2 + 24));
            uVar3 = local_40.end();
        } else {
            uVar3 = 0;
            if (cVar1) {
                return 0;
            }
        }
        return uVar3;
    }

    // 0x10016c9f0
    uint32_t ScriptRunnerImpl::ExecuteCommand6800To6899(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        weak_ptr<dash3d::Wall>* this_00;
        uint8_t* puVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        bool cVar5;
        bool bVar6;
        unsigned char arg2;
        unsigned char arg3_00;
        unsigned int uVar7;
        int arg3_01;
        int iVar8;
        int iVar9;
        world* this_02;
        int* piVar10;
        long lVar11;
        LocType* this_03;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar12;
        Logger* pLVar13;
        char* pcVar14;
        uint32_t* puVar15;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        uint8_t* pbVar16;
        eastl::string* pbVar17;
        unsigned int* puVar18;
        eastl::string* pbVar19;
        unsigned int arg3_02;
        int iVar20;
        unsigned long uVar21;
        CommandLine* this_04;
        array<int, 1000ul>* paVar22;
        weak_ptr<dash3d::Decor>* this_05;
        ErrorCapture* this_06;
        char* str2;
        uint64_t in_stack_ffffffffffffff18;
        shared_ptr<dash3d::Decor> local_d0;
        CoordGrid local_c0;
        weak_ptr<dash3d::Decor> local_b0;
        weak_ptr<dash3d::Decor> local_a0;
        array<int, 1000ul>* local_90;
        CoordGrid local_88;
        ReturnValue local_78;
        array<int, 1000ul>* local_70;
        CoordGrid local_68;
        LocInfo local_58;

        uint32_t uVar25 = (uint32_t)((unsigned long)in_stack_ffffffffffffff18 >> 32);
        uint32_t uVar24 = 2;
        ScriptRunnerImpl* local_38 = this;
        auto this_01 = Client::Instance();
        ScriptRunnerImpl* pSVar23 = local_38;
        switch (scriptOp) {
        case 6800:
            puVar1 = local_38->field_140888;
            local_58 = puVar1->GetCompletionTask();
            cVar5 = shared_ptr::operator_cast_to_bool(&local_58);
            if (!cVar5) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                41, "Active location invalid");
            }
            local_58 = puVar1->GetCompletionTask();
            lVar11 = local_58.operator->();
            iVar20 = local_38->field_136096;
            local_38->field_136096 = iVar20 + 1;
            pbVar19 = &local_38->field_104096[(long)iVar20];
            *pbVar19 = ((lVar11 + 56));
            goto LAB_10016ceac;
        case 6801:
            puVar1 = local_38->field_140888;
            cVar5 = puVar1->IsSet();
            if (!cVar5) {
                LogAssert("m_activeLoc.IsSet()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6800To6899.cpp",
                          49, nullptr);
            }
            bVar2 = puVar1->GetShape();
            bVar3 = puVar1->GetRot();
            bVar4 = puVar1->GetDirectionMask();
            arg3_02 = (unsigned int)bVar4;
            this_04 = &local_58;
            new (this_04) rs2lib::CoordGrid((unsigned int)bVar2, (unsigned int)bVar3, (unsigned int)bVar4);
            uVar7 = this_04->GetX();
            iVar20 = this_04->GetZ();
            iVar8 = this_04->GetPos();
            iVar20 = ((ClientBuild*)(unsigned long)uVar7)->GetLinkBelowLevel(iVar20, iVar8, arg3_02);
            this_04->SetLevel(iVar20);
            local_68 = this_01->WorldCoordFromBuildCoord(*this_04);
            local_58[0]._8_4_ = local_68.m_z;
            local_58[0]._0_8_ = local_68._0_8_;
            goto LAB_10016cff9;
        case 6802:
            puVar1 = local_38->field_140888;
            local_58 = puVar1->GetCompletionTask();
            cVar5 = shared_ptr::operator_cast_to_bool(&local_58);
            if (!cVar5) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                69, "Active location invalid");
            }
            local_58 = puVar1->GetCompletionTask();
            puVar15 = (uint32_t*)local_58.operator->();
            uVar24 = *puVar15;
            goto LAB_10016ce8a;
        case 6803:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            paVar22 = (array<int, 1000ul>*)&local_38->field_100092;
            piVar10 = (int*)(*paVar22)[uVar21];
            iVar8 = *piVar10;
            piVar10 = (int*)(*paVar22)[(long)iVar20 - 1];
            local_70._0_4_ = *piVar10;
            local_88 = rs2lib::CoordGrid(iVar8);
            local_c0 = this_01->BuildCoordFromWorldCoord(local_88);
            cVar5 = ClientConstants::IsCoordInBuildArea(local_c0);
            if (cVar5) {
                local_90 = paVar22;
                this_02 = (world*)this_01->field_19184.operator->();
                iVar8 = local_c0.GetX();
                iVar9 = local_c0.GetZ();
                arg3_01 = local_c0.GetPos();
                iVar20 = (int)local_70;
                local_78 = this_02->GetLocLayer(iVar8, iVar9, arg3_01, (int)local_70);
                cVar5 = local_78.IsNull();
                if (!cVar5) {
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(iVar20);
                    local_68 = shared_ptr(groundDecor);
                    uVar24 = local_c0.GetX();
                    local_70 = (array<int, 1000ul>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)uVar24);
                    arg2 = local_c0.GetZ();
                    arg3_00 = local_c0.GetPos();
                    pbVar16 = (uint8_t*)local_78.SSOBeginPtr();
                    bVar2 = *pbVar16;
                    local_d0 = shared_ptr(&local_68);
                    local_58 = LocInfo((unsigned char)local_70, arg2, arg3_00, '\0', (unsigned int)bVar2, &local_d0);
                    pSVar23 = local_38;
                    *local_38->field_140888 = local_58;
                    iVar20 = pSVar23->field_104092;
                    pSVar23->field_104092 = iVar20 + 1;
                    puVar15 = (uint32_t*)(*local_90)[(long)iVar20];
                    *puVar15 = 1;
                    break;
                }
                paVar22 = local_90;
                pSVar23 = local_38;
            }
            iVar20 = pSVar23->field_104092;
            pSVar23->field_104092 = iVar20 + 1;
            puVar15 = (uint32_t*)(*paVar22)[(long)iVar20];
            *puVar15 = 0;
            break;
        case 6804:
            uVar21 = (long)local_38->field_104092 - 1;
            local_38->field_104092 = (int)uVar21;
            piVar10 = &local_38->field_100092[uVar21];
            iVar20 = *piVar10;
            local_68 = pSVar23->field_140888->GetCompletionTask();
            bVar6 = local_68 != nullptr;
            if (!bVar6) {
                pLVar13 = logger::default_logger();
                uVar24 = 0;
                pLVar13->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6800To6899.cpp",
                             107, "loc_getopbase error: active_loc type not found");
                local_38->field_141000->Raise(1);
                goto LAB_10016e037;
            }
            if (iVar20 == 0) {
                lVar11 = local_68.operator->();
                local_58.StripTags(*((lVar11 + 56)));
            } else {
                lVar11 = local_68.operator->();
                local_58 = eastl::string(*((lVar11 + 56)));
            }
            iVar20 = local_38->field_136096;
            local_38->field_136096 = iVar20 + 1;
            pbVar19 = &local_38->field_104096[(long)iVar20];
            *pbVar19 = &local_58;
        LAB_10016e028:
            uVar24 = 1;
            goto LAB_10016e037;
        case 6805:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            local_68 = pSVar23->field_140888->GetCompletionTask();
            bVar6 = local_68 != nullptr;
            if (bVar6 && 0 < iVar8) {
                lVar11 = local_68.operator->();
                iVar9 = ((lVar11 + 232))->size();
                if (iVar8 <= iVar9) {
                    lVar11 = local_68.operator->();
                    pbVar17 = (eastl::string*)(*((lVar11 + 232)))[(unsigned long)(iVar8 - 1)];
                    if (iVar20 == 0) {
                        local_58.StripTags(*pbVar17);
                    } else {
                        local_58 = eastl::string(*pbVar17);
                    }
                    iVar20 = local_38->field_136096;
                    local_38->field_136096 = iVar20 + 1;
                    pbVar19 = &local_38->field_104096[(long)iVar20];
                    *pbVar19 = &local_58;
                    goto LAB_10016e028;
                }
            }
            pLVar13 = logger::default_logger();
            lVar11 = local_68.end();
            if (lVar11 == 0) {
                pcVar14 = "not found";
            } else {
                local_68.operator->();
                pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            uVar24 = 0;
            pLVar13->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_6800To6899.cpp",
                         127, "loc_getop error: loc: %s, op: %d", pcVar14, iVar8);
            local_38->field_141000->Raise(1);
        LAB_10016e037:
            return uVar24;
        case 6806:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            psVar12 = (shared_ptr<midi2::MidiPlayerMainThread>*)configdecoder::LocType::List(iVar8);
            bVar6 = *psVar12 != nullptr;
            if (!bVar6) {
                pLVar13 = logger::default_logger();
                pcVar14 = "loc_getopbase error: active_loc not found";
                iVar20 = 146;
            LAB_10016d8fc:
                pLVar13->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6800To6899.cpp",
                             iVar20, pcVar14);
                this_06 = (ErrorCapture*)pSVar23->field_141000;
                goto LAB_10016dac0;
            }
            lVar11 = (*psVar12).operator->();
            if (iVar20 == 0) {
                local_58.StripTags(*((lVar11 + 56)));
            } else {
                local_58 = eastl::string(*((lVar11 + 56)));
            }
            iVar20 = local_38->field_136096;
            local_38->field_136096 = iVar20 + 1;
            pbVar19 = &local_38->field_104096[(long)iVar20];
            *pbVar19 = &local_58;
            goto LAB_10016df7a;
        case 6807:
            lVar11 = (long)local_38->field_104092;
            local_38->field_104092 = (int)(lVar11 - 3U);
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[lVar11 - 3U];
            iVar20 = *piVar10;
            piVar10 = (int*)(*puVar1)[lVar11 - 2];
            iVar8 = *piVar10;
            piVar10 = (int*)(*puVar1)[lVar11 - 1];
            iVar9 = *piVar10;
            psVar12 = (shared_ptr<midi2::MidiPlayerMainThread>*)configdecoder::LocType::List(iVar20);
            bVar6 = *psVar12 != nullptr;
            if ((bVar6) && (0 < iVar8)) {
                lVar11 = (*psVar12).operator->();
                iVar20 = ((lVar11 + 232))->size();
                if (iVar8 <= iVar20) {
                    lVar11 = (*psVar12).operator->();
                    pbVar17 = (eastl::string*)(*((lVar11 + 232)))[(unsigned long)(iVar8 - 1)];
                    if (iVar9 == 0) {
                        local_58.StripTags(*pbVar17);
                    } else {
                        local_58 = eastl::string(*pbVar17);
                    }
                    iVar20 = local_38->field_136096;
                    local_38->field_136096 = iVar20 + 1;
                    pbVar19 = &local_38->field_104096[(long)iVar20];
                    *pbVar19 = &local_58;
                    goto LAB_10016df7a;
                }
            }
            pLVar13 = logger::default_logger();
            lVar11 = psVar12->end();
            if (lVar11 == 0) {
                pcVar14 = "not found";
            } else {
                (*psVar12).operator->();
                pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            str2 = "lc_getop error: loc: %s, op: %d";
            iVar20 = 167;
            goto LAB_10016daae;
        case 6808:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            local_70 = (array<int, 1000ul>*)puVar1;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            psVar12 = (shared_ptr<midi2::MidiPlayerMainThread>*)configdecoder::LocType::List(iVar8);
            bVar6 = *psVar12 != nullptr;
            if (!bVar6) {
                pLVar13 = logger::default_logger();
                pLVar13->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6800To6899.cpp",
                             197, "lc_getmultiloc error: loc type %d not valid",
                             (((uint64_t)uVar25 << 32) | (uint32_t)iVar8));
                this_06 = (ErrorCapture*)pSVar23->field_141000;
                goto LAB_10016dac0;
            }
            this_03 = (LocType*)(*psVar12).operator->();
            if (iVar20 == -1) {
                puVar15 = (uint32_t*)this_03->GetMultiLocOrThis();
            } else {
                puVar15 = (uint32_t*)this_03->GetSpecifiedMultiLocOrThis(iVar20);
            }
            uVar24 = *puVar15;
            iVar20 = local_38->field_104092;
            local_38->field_104092 = iVar20 + 1;
            paVar22 = local_70;
            goto LAB_10016d01b;
        case 6809:
            uVar21 = (long)local_38->field_104092 - 1;
            local_38->field_104092 = (int)uVar21;
            piVar10 = &local_38->field_100092[uVar21];
            psVar12 = (shared_ptr<midi2::MidiPlayerMainThread>*)configdecoder::LocType::List(*piVar10);
            bVar6 = *psVar12 != nullptr;
            if (!bVar6) {
                pLVar13 = logger::default_logger();
                pcVar14 = "lc_name error: loc type %d not valid";
                iVar20 = 214;
            LAB_10016da37:
                pLVar13->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6800To6899.cpp",
                             iVar20, pcVar14);
                this_06 = (ErrorCapture*)pSVar23->field_141000;
                goto LAB_10016dac0;
            }
            lVar11 = (*psVar12).operator->();
            iVar20 = pSVar23->field_136096;
            pSVar23->field_136096 = iVar20 + 1;
            pbVar19 = &pSVar23->field_104096[(long)iVar20];
            *pbVar19 = ((lVar11 + 56));
            break;
        case 6810:
            puVar1 = local_38->field_140888;
            local_58 = puVar1->GetCompletionTask();
            cVar5 = shared_ptr::operator_cast_to_bool(&local_58);
            if (!cVar5) {
                pLVar13 = logger::default_logger();
                pcVar14 = "loc_width error: active loc invalid";
                iVar20 = 229;
                goto LAB_10016d8fc;
            }
            local_58 = puVar1->GetCompletionTask();
            lVar11 = local_58.operator->();
            uVar24 = *(uint32_t*)(lVar11 + 184);
            goto LAB_10016ce8a;
        case 6811:
            puVar1 = local_38->field_140888;
            local_58 = puVar1->GetCompletionTask();
            cVar5 = shared_ptr::operator_cast_to_bool(&local_58);
            if (!cVar5) {
                pLVar13 = logger::default_logger();
                pcVar14 = "loc_length error: active loc invalid";
                iVar20 = 244;
                goto LAB_10016d8fc;
            }
            local_58 = puVar1->GetCompletionTask();
            lVar11 = local_58.operator->();
            uVar24 = *(uint32_t*)(lVar11 + 188);
        LAB_10016ce8a:
            iVar20 = local_38->field_104092;
            local_38->field_104092 = iVar20 + 1;
            puVar15 = &local_38->field_100092[(long)iVar20];
            *puVar15 = uVar24;
        LAB_10016ceac:
            break;
        default:
            goto switchD_10016ca35_caseD_1a9c;
        case 6850:
            puVar1 = local_38->field_140888;
            cVar5 = ((puVar1 + 24))->expired();
            if (!cVar5) {
                local_68 = ((puVar1 + 24))->lock();
                lVar11 = local_68.operator->();
                local_58 = configdecoder::ObjType::List(*(int*)(lVar11 + 24));
                cVar5 = shared_ptr::operator_cast_to_bool(&local_58);
                if (!cVar5) {
                } else {
                    lVar11 = local_58.operator->();
                    iVar20 = local_38->field_136096;
                    local_38->field_136096 = iVar20 + 1;
                    pbVar19 = &local_38->field_104096[(long)iVar20];
                    *pbVar19 = ((lVar11 + 8));
                    if (cVar5) {
                        return 1;
                    }
                }
            }
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ScriptRunnerImpl_6800To6899.cpp",
                            262, "Active object invalid");
        case 6851:
            puVar18 = &local_38->field_140928;
            cVar5 = puVar18->IsSet();
            if (!cVar5) {
                LogAssert("m_activeObjBuildCoord.IsSet()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6800To6899.cpp",
                          269, nullptr);
            }
            local_58 = rs2lib::CoordGrid(puVar18);
            iVar20 = local_58.GetX();
            iVar8 = local_58.GetZ();
            iVar9 = local_58.GetPos();
            iVar20 = ClientBuild::VisLevel(iVar20, iVar8, iVar9);
            local_58.SetLevel(iVar20);
            this_04 = (CommandLine*)&local_68;
            *this_04 = this_01->WorldCoordFromBuildCoord(local_58);
        LAB_10016cff9:
            uVar24 = this_04->ToBitPacked();
            iVar20 = local_38->field_104092;
            local_38->field_104092 = iVar20 + 1;
            paVar22 = (array<int, 1000ul>*)&local_38->field_100092;
        LAB_10016d01b:
            puVar15 = (uint32_t*)(*paVar22)[(long)iVar20];
            *puVar15 = uVar24;
            break;
        case 6852:
            puVar1 = local_38->field_140888;
            cVar5 = ((puVar1 + 24))->expired();
            if (cVar5)
                goto LAB_10016d771;
            local_58 = ((puVar1 + 24))->lock();
            lVar11 = local_58.operator->();
            uVar24 = *(uint32_t*)(lVar11 + 24);
        LAB_10016d567:
            iVar20 = local_38->field_104092;
            local_38->field_104092 = iVar20 + 1;
            paVar22 = (array<int, 1000ul>*)&local_38->field_100092;
            goto LAB_10016d7b2;
        case 6853:
            puVar1 = local_38->field_140888;
            cVar5 = ((puVar1 + 24))->expired();
            if (!cVar5) {
                local_58 = ((puVar1 + 24))->lock();
                lVar11 = local_58.operator->();
                uVar24 = *(uint32_t*)(lVar11 + 28);
                goto LAB_10016d567;
            }
            goto LAB_10016d771;
        case 6854:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            local_70 = (array<int, 1000ul>*)puVar1;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            local_68 = rs2lib::CoordGrid(iVar8);
            local_88 = this_01->BuildCoordFromWorldCoord(local_68);
            local_58 = this_01->FindFirstClientObj(local_88, iVar20);
            lVar11 = local_58.end();
            if (lVar11 != 0) {
                local_b0 = weak_ptr(local_58);
                SetActiveObj(local_38, &local_88, &local_b0);
                this_05 = &local_b0;
                goto LAB_10016d636;
            }
        LAB_10016d798:
            uVar24 = 0;
            goto LAB_10016d79a;
        case 6855:
            uVar21 = (long)local_38->field_104092 - 1;
            local_38->field_104092 = (int)uVar21;
            piVar10 = &local_38->field_100092[uVar21];
            iVar20 = *piVar10;
            lVar11 = GetActiveObjType(pSVar23);
            if (lVar11 == 0) {
                pLVar13 = logger::default_logger();
                pcVar14 = "obj_getopbase error: active_obj type not found";
                iVar20 = 335;
                goto LAB_10016da37;
            }
            if (iVar20 == 0) {
                local_58.StripTags(*((lVar11 + 8)));
            } else {
                local_58 = eastl::string(*((lVar11 + 8)));
            }
            iVar20 = local_38->field_136096;
            local_38->field_136096 = iVar20 + 1;
            pbVar19 = &local_38->field_104096[(long)iVar20];
            *pbVar19 = &local_58;
        LAB_10016df7a:
            break;
        case 6856:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            lVar11 = GetActiveObjType(pSVar23);
            if ((lVar11 != 0) && (0 < iVar8)) {
                iVar9 = ((lVar11 + 224))->size();
                if (iVar8 <= iVar9) {
                    pbVar17 = (eastl::string*)(*((lVar11 + 224)))[(unsigned long)(iVar8 - 1)];
                    if (iVar20 == 0) {
                        local_58.StripTags(*pbVar17);
                    } else {
                        local_58 = eastl::string(*pbVar17);
                    }
                    iVar20 = local_38->field_136096;
                    local_38->field_136096 = iVar20 + 1;
                    pbVar19 = &local_38->field_104096[(long)iVar20];
                    *pbVar19 = &local_58;
                    goto LAB_10016df7a;
                }
            }
            pLVar13 = logger::default_logger();
            if (lVar11 == 0) {
                pcVar14 = "not found";
            } else {
                pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            str2 = "obj_getop error: obj: %s, op: %d";
            iVar20 = 355;
        LAB_10016daae:
            pLVar13->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_6800To6899.cpp",
                         iVar20, str2, pcVar14, iVar8);
            this_06 = (ErrorCapture*)local_38->field_141000;
        LAB_10016dac0:
            this_06->Raise(1);
            return 0;
        case 6857:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            local_68 = configdecoder::ObjType::List(iVar8);
            bVar6 = local_68 != nullptr;
            if (!bVar6) {
                pLVar13 = logger::default_logger();
                uVar24 = 0;
                pLVar13->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6800To6899.cpp",
                             374, "obj_getopbase error: active_obj not found");
                local_38->field_141000->Raise(1);
                goto LAB_10016dfe5;
            }
            if (iVar20 == 0) {
                lVar11 = local_68.operator->();
                local_58.StripTags(*((lVar11 + 8)));
            } else {
                lVar11 = local_68.operator->();
                local_58 = eastl::string(*((lVar11 + 8)));
            }
            iVar20 = local_38->field_136096;
            local_38->field_136096 = iVar20 + 1;
            pbVar19 = &local_38->field_104096[(long)iVar20];
            *pbVar19 = &local_58;
        LAB_10016dfd6:
            uVar24 = 1;
            goto LAB_10016dfe5;
        case 6858:
            lVar11 = (long)local_38->field_104092;
            local_38->field_104092 = (int)(lVar11 - 3U);
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[lVar11 - 3U];
            iVar20 = *piVar10;
            piVar10 = (int*)(*puVar1)[lVar11 - 2];
            iVar8 = *piVar10;
            piVar10 = (int*)(*puVar1)[lVar11 - 1];
            iVar9 = *piVar10;
            local_68 = configdecoder::ObjType::List(iVar20);
            bVar6 = local_68 != nullptr;
            if ((bVar6) && (0 < iVar8)) {
                lVar11 = local_68.operator->();
                iVar20 = ((lVar11 + 224))->size();
                if (iVar8 <= iVar20) {
                    lVar11 = local_68.operator->();
                    pbVar17 = (eastl::string*)(*((lVar11 + 224)))[(unsigned long)(iVar8 - 1)];
                    if (iVar9 == 0) {
                        local_58.StripTags(*pbVar17);
                    } else {
                        local_58 = eastl::string(*pbVar17);
                    }
                    iVar20 = local_38->field_136096;
                    local_38->field_136096 = iVar20 + 1;
                    pbVar19 = &local_38->field_104096[(long)iVar20];
                    *pbVar19 = &local_58;
                    goto LAB_10016dfd6;
                }
            }
            pLVar13 = logger::default_logger();
            lVar11 = local_68.end();
            if (lVar11 == 0) {
                pcVar14 = "not found";
            } else {
                local_68.operator->();
                pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            uVar24 = 0;
            pLVar13->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_6800To6899.cpp",
                         395, "oc_getop error: obj: %s, op: %d", pcVar14, iVar8);
            local_38->field_141000->Raise(1);
        LAB_10016dfe5:
            return uVar24;
        case 6859:
            iVar20 = local_38->field_104092;
            uVar21 = (long)iVar20 - 2;
            local_38->field_104092 = (int)uVar21;
            puVar1 = &local_38->field_100092;
            piVar10 = (int*)(*puVar1)[uVar21];
            iVar8 = *piVar10;
            local_70 = (array<int, 1000ul>*)puVar1;
            piVar10 = (int*)(*puVar1)[(long)iVar20 - 1];
            iVar20 = *piVar10;
            local_68 = rs2lib::CoordGrid(iVar8);
            local_88 = this_01->BuildCoordFromWorldCoord(local_68);
            local_58 = this_01->FindClientObjInStack(local_88, iVar20);
            lVar11 = local_58.end();
            if (lVar11 == 0)
                goto LAB_10016d798;
            local_a0 = weak_ptr(local_58);
            SetActiveObj(local_38, &local_88, &local_a0);
            this_05 = &local_a0;
        LAB_10016d636:
            this_05->~weak_ptr();
            uVar24 = 1;
        LAB_10016d79a:
            iVar20 = local_38->field_104092;
            local_38->field_104092 = iVar20 + 1;
            paVar22 = local_70;
        LAB_10016d7b2:
            puVar15 = (uint32_t*)(*paVar22)[(long)iVar20];
            *puVar15 = uVar24;
        LAB_10016d7b9:
            break;
        case 6860:
            puVar1 = local_38->field_140888;
            cVar5 = ((puVar1 + 24))->expired();
            if (cVar5)
                goto LAB_10016d771;
            local_58 = ((puVar1 + 24))->lock();
            lVar11 = local_58.operator->();
            iVar20 = *(int*)(lVar11 + 36);
        LAB_10016d254:
            iVar20 = iVar20 - this_01->field_8492;
            iVar8 = 0;
            if (-1 < iVar20) {
                iVar8 = iVar20;
            }
            iVar20 = local_38->field_104092;
            local_38->field_104092 = iVar20 + 1;
            piVar10 = &local_38->field_100092[(long)iVar20];
            *piVar10 = iVar8;
            break;
        case 6861:
            puVar1 = local_38->field_140888;
            cVar5 = ((puVar1 + 24))->expired();
            if (!cVar5) {
                local_58 = ((puVar1 + 24))->lock();
                lVar11 = local_58.operator->();
                iVar20 = *(int*)(lVar11 + 32);
                goto LAB_10016d254;
            }
            goto LAB_10016d771;
        case 6862:
            this_00 = (weak_ptr<dash3d::Wall>*)(local_38->field_140888 + 24);
            cVar5 = this_00->expired();
            if (cVar5)
                goto LAB_10016d771;
            local_58 = this_00->lock();
            lVar11 = local_58.operator->();
            if (*(char*)(lVar11 + 44) == '\0') {
                local_68 = this_00->lock();
                lVar11 = local_68.operator->();
                iVar8 = *(int*)(lVar11 + 32);
                iVar20 = this_01->field_8492;
                iVar9 = local_38->field_104092;
                local_38->field_104092 = iVar9 + 1;
                puVar18 = &local_38->field_100092[(long)iVar9];
                *puVar18 = (unsigned int)(iVar8 <= iVar20);
            } else {
                iVar20 = local_38->field_104092;
                local_38->field_104092 = iVar20 + 1;
                puVar15 = &local_38->field_100092[(long)iVar20];
                *puVar15 = 0;
            }
            goto LAB_10016d7b9;
        case 6863:
            puVar1 = local_38->field_140888;
            cVar5 = ((puVar1 + 24))->expired();
            if (!cVar5) {
                local_58 = ((puVar1 + 24))->lock();
                lVar11 = local_58.operator->();
                uVar24 = *(uint32_t*)(lVar11 + 40);
                goto LAB_10016d567;
            }
        LAB_10016d771:
            iVar20 = pSVar23->field_104092;
            pSVar23->field_104092 = iVar20 + 1;
            puVar15 = &pSVar23->field_100092[(long)iVar20];
            *puVar15 = 4294967295;
        }
        uVar24 = 1;
    switchD_10016ca35_caseD_1a9c:
        return uVar24;
    }

} // namespace jag::oldscape
