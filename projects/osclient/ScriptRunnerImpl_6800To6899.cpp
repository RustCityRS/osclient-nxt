// projects/osclient/ScriptRunnerImpl_6800To6899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016c900, 160 bytes, placed by class name and debug map
    // ScriptRunnerImpl::GetActiveObjType() const
    /* WARNING: Removing unreachable block (ram,4296460674) */
    /* ScriptRunnerImpl::GetActiveObjType() const */

    undefined8 ScriptRunnerImpl::GetActiveObjType() {
        char cVar1;
        long lVar2;
        undefined8 uVar3;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];
        shared_ptr<RSevenDebugPresetProvider> local_30[16];

        cVar1 = ((field_140888 + 24))->expired();
        if (cVar1 == '\0') {
            weak_ptr<rs2lib::IfType>::lock();
            lVar2 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)local_30);
            local_40->List(*(int*)(lVar2 + 24));
            uVar3 = local_40->end();
        } else {
            uVar3 = 0;
            if (cVar1 != '\0') {
                return 0;
            }
        }
        local_40->~shared_ptr();
        local_30->~shared_ptr();
        return uVar3;
    }

    // 0x10016c9f0, 6272 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand6800To6899(ScriptOp, ClientScript const&, bool)
    undefined4 ScriptRunnerImpl::ExecuteCommand6800To6899(undefined4 param_2) {
        undefined1* puVar1;
        undefined8* this_00;
        vector vVar2;
        uint uVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        char cVar7;
        bool bVar8;
        undefined1 uVar9;
        undefined1 uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        CoordGrid* pCVar14;
        int* piVar15;
        long lVar16;
        LocType* this_01;
        shared_ptr* psVar17;
        undefined8 uVar18;
        char* pcVar19;
        undefined4* puVar20;
        vector* pvVar21;
        basic_string* pbVar22;
        uint* puVar23;
        eastl::string* pbVar24;
        int iVar25;
        ulong uVar26;
        Client* this_02;
        array<int, 1000ul>* paVar27;
        weak_ptr<dash3d::Decor>* this_03;
        ErrorCapture* pEVar28;
        undefined8 uVar29;
        char* pcVar30;
        ScriptRunnerImpl* this_04;
        undefined4 uVar31;
        undefined8 in_stack_ffffffffffffff18;
        undefined4 uVar32;
        shared_ptr<dash3d::Decor> local_d0[16];
        undefined1 local_c0[16];
        weak_ptr<dash3d::Decor> local_b0[16];
        weak_ptr<dash3d::Decor> local_a0[16];
        array<int, 1000ul>* local_90;
        CoordGrid local_88;
        Nullable<LocLayer> local_78[8];
        array<int, 1000ul>* local_70;
        CoordGrid local_68;
        LocInfo local_58;
        ScriptRunnerImpl* local_38;

        uVar32 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
        uVar31 = 2;
        local_38 = this;
        pCVar14 = (CoordGrid*)Client::Instance();
        this_04 = local_38;
        switch (param_2) {
        case 6800:
            local_58.GetCompletionTask();
            bVar8 = local_58.operator_cast_to_bool();
            local_58.~shared_ptr();
            if (!bVar8) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                41, "Active location invalid");
            }
            local_58.GetCompletionTask();
            lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_58);
            uVar3 = local_38->field_136096;
            local_38->field_136096 = uVar3 + 1;
            pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
            eastl::string::operator=(pbVar24, (basic_string*)(lVar16 + 56));
            goto LAB_10016ceac;
        case 6801:
            puVar1 = local_38->field_140888;
            cVar7 = puVar1->IsSet();
            if (cVar7 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activeLoc.IsSet()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6800To6899.cpp",
                          49, (char*)0);
            }
            bVar4 = puVar1->GetShape();
            bVar5 = puVar1->GetRot();
            bVar6 = puVar1->GetDirectionMask();
            this_02 = (Client*)&local_58;
            new (this_02) rs2lib::CoordGrid((uint)bVar4, (uint)bVar5, (uint)bVar6);
            iVar25 = this_02->GetX();
            iVar12 = this_02->GetZ();
            iVar13 = this_02->GetPos();
            iVar25 = ClientBuild::GetLinkBelowLevel(iVar25, iVar12, iVar13);
            this_02->SetLevel(iVar25);
            local_68.WorldCoordFromBuildCoord(pCVar14);
            local_58.field_8._0_4_ = local_68.field_8;
            local_58._0_8_ = local_68._0_8_;
            goto LAB_10016cff9;
        case 6802:
            local_58.GetCompletionTask();
            bVar8 = local_58.operator_cast_to_bool();
            local_58.~shared_ptr();
            if (!bVar8) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                69, "Active location invalid");
            }
            local_58.GetCompletionTask();
            puVar20 = (undefined4*)shared_ptr<configdecoder::LocType>::operator->(
                (shared_ptr<configdecoder::LocType>*)&local_58);
            uVar31 = *puVar20;
            goto LAB_10016ce8a;
        case 6803:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            paVar27 = (array<int, 1000ul>*)&local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[](paVar27, uVar26);
            iVar12 = *piVar15;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[](paVar27, (long)iVar25 - 1);
            local_70 = (array<int, 1000ul>*)CONCAT44(local_70._4_4_, *puVar20);
            new (&local_88) rs2lib::CoordGrid(iVar12);
            local_c0->BuildCoordFromWorldCoord(pCVar14);
            cVar7 = ClientConstants::IsCoordInBuildArea((CoordGrid*)local_c0);
            if (cVar7 != '\0') {
                local_90 = paVar27;
                iVar12 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(pCVar14 + 1199));
                iVar13 = local_c0->GetX();
                iVar11 = local_c0->GetZ();
                local_c0->GetPos();
                iVar25 = (int)local_70;
                dash3d::world::GetLocLayer((int)local_78, iVar12, iVar13, iVar11);
                bVar8 = local_78->IsNull();
                if (bVar8) {
                    paVar27 = local_90;
                    this_04 = local_38;
                } else {
                    psVar17 = (shared_ptr*)configdecoder::LocType::List(iVar25);
                    new (&local_68) shared_ptr<dash3d::Decor>(psVar17);
                    uVar31 = local_c0->GetX();
                    local_70 = (array<int, 1000ul>*)CONCAT44(local_70._4_4_, uVar31);
                    uVar9 = local_c0->GetZ();
                    uVar10 = local_c0->GetPos();
                    pvVar21 = local_78->SSOBeginPtr(psVar17);
                    vVar2 = *pvVar21;
                    shared_ptr<dash3d::Decor>::shared_ptr(local_d0, (shared_ptr*)&local_68);
                    new (&local_58) LocInfo((ulong)local_70 & 255, uVar9, uVar10, 0, vVar2, local_d0);
                    this_04 = local_38;
                    LocInfo::operator=((LocInfo*)local_38->field_140888, &local_58);
                    local_58.~pair();
                    local_d0->~shared_ptr();
                    paVar27 = local_90;
                    iVar25 = this_04->field_104092;
                    this_04->field_104092 = iVar25 + 1;
                    puVar20 = (undefined4*)std::array<int, 1000ul>::operator[](local_90, (long)iVar25);
                    *puVar20 = 1;
                    local_68.~shared_ptr();
                    if (!bVar8)
                        break;
                }
            }
            iVar25 = this_04->field_104092;
            this_04->field_104092 = iVar25 + 1;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[](paVar27, (long)iVar25);
            *puVar20 = 0;
            break;
        case 6804:
            uVar26 = (long)local_38->field_104092 - 1;
            local_38->field_104092 = (int)uVar26;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092, uVar26);
            iVar25 = *piVar15;
            local_68.GetCompletionTask();
            bVar8 = operator!=((shared_ptr*)&local_68, (_func_decltype_nullptr*)0);
            if (!bVar8) {
                uVar18 = logger::default_logger();
                uVar31 = 0;
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6800To6899.cpp",
                                    107, "loc_getopbase error: active_loc type not found");
                (&local_38->field_141000, 1)->Raise();
                goto LAB_10016e037;
            }
            if (iVar25 == 0) {
                lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_68);
                local_58.StripTags((basic_string*)(lVar16 + 56));
            } else {
                lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_68);
                new (&local_58) eastl::string((basic_string*)(lVar16 + 56));
            }
            uVar3 = local_38->field_136096;
            local_38->field_136096 = uVar3 + 1;
            pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
            eastl::string::operator=(pbVar24, (basic_string*)&local_58);
        LAB_10016e028:
            local_58.~basic_string();
            uVar31 = 1;
            goto LAB_10016e037;
        case 6805:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            iVar25 = *piVar15;
            local_68.GetCompletionTask();
            bVar8 = operator!=((shared_ptr*)&local_68, (_func_decltype_nullptr*)0);
            if (bVar8 && 0 < iVar12) {
                lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_68);
                iVar13 = ((lVar16 + 232))->size();
                if (iVar12 <= iVar13) {
                    lVar16 =
                        shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_68);
                    pbVar22 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar16 +
                                                                                                              232),
                        (ulong)(iVar12 - 1));
                    if (iVar25 == 0) {
                        local_58.StripTags(pbVar22);
                    } else {
                        new (&local_58) eastl::string(pbVar22);
                    }
                    uVar3 = local_38->field_136096;
                    local_38->field_136096 = uVar3 + 1;
                    pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
                    eastl::string::operator=(pbVar24, (basic_string*)&local_58);
                    goto LAB_10016e028;
                }
            }
            uVar18 = logger::default_logger();
            lVar16 = local_68.end();
            if (lVar16 == 0) {
                pcVar19 = "not found";
            } else {
                shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_68);
                pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            uVar31 = 0;
            logger::Logger::Log(uVar18, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                127, "loc_getop error: loc: %s, op: %d", pcVar19, iVar12);
            (&local_38->field_141000, 1)->Raise();
        LAB_10016e037:
            local_68.~shared_ptr();
            return uVar31;
        case 6806:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            iVar25 = *piVar15;
            psVar17 = (shared_ptr*)configdecoder::LocType::List(iVar12);
            bVar8 = operator!=(psVar17, (_func_decltype_nullptr*)0);
            if (!bVar8) {
                uVar18 = logger::default_logger();
                pcVar19 = "loc_getopbase error: active_loc not found";
                uVar29 = 146;
            LAB_10016d8fc:
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6800To6899.cpp",
                                    uVar29, pcVar19);
                pEVar28 = (ErrorCapture*)&this_04->field_141000;
                goto LAB_10016dac0;
            }
            lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)psVar17);
            if (iVar25 == 0) {
                local_58.StripTags((basic_string*)(lVar16 + 56));
            } else {
                new (&local_58) eastl::string((basic_string*)(lVar16 + 56));
            }
            uVar3 = local_38->field_136096;
            local_38->field_136096 = uVar3 + 1;
            pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
            eastl::string::operator=(pbVar24, (basic_string*)&local_58);
            goto LAB_10016df7a;
        case 6807:
            lVar16 = (long)local_38->field_104092;
            local_38->field_104092 = (int)(lVar16 - 3U);
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar16 - 3U);
            iVar25 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar16 - 2);
            iVar12 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar16 - 1);
            iVar13 = *piVar15;
            psVar17 = (shared_ptr*)configdecoder::LocType::List(iVar25);
            bVar8 = operator!=(psVar17, (_func_decltype_nullptr*)0);
            if ((bVar8) && (0 < iVar12)) {
                lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)psVar17);
                iVar25 = ((lVar16 + 232))->size();
                if (iVar12 <= iVar25) {
                    lVar16 =
                        shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)psVar17);
                    pbVar22 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar16 +
                                                                                                              232),
                        (ulong)(iVar12 - 1));
                    if (iVar13 == 0) {
                        local_58.StripTags(pbVar22);
                    } else {
                        new (&local_58) eastl::string(pbVar22);
                    }
                    uVar3 = local_38->field_136096;
                    local_38->field_136096 = uVar3 + 1;
                    pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
                    eastl::string::operator=(pbVar24, (basic_string*)&local_58);
                    goto LAB_10016df7a;
                }
            }
            uVar18 = logger::default_logger();
            lVar16 = psVar17->end();
            if (lVar16 == 0) {
                pcVar19 = "not found";
            } else {
                shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)psVar17);
                pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            pcVar30 = "lc_getop error: loc: %s, op: %d";
            uVar29 = 167;
            goto LAB_10016daae;
        case 6808:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            local_70 = (array<int, 1000ul>*)puVar1;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            iVar25 = *piVar15;
            psVar17 = (shared_ptr*)configdecoder::LocType::List(iVar12);
            bVar8 = operator!=(psVar17, (_func_decltype_nullptr*)0);
            if (!bVar8) {
                uVar18 = logger::default_logger();
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6800To6899.cpp",
                                    197, "lc_getmultiloc error: loc type %d not valid", CONCAT44(uVar32, iVar12));
                pEVar28 = (ErrorCapture*)&this_04->field_141000;
                goto LAB_10016dac0;
            }
            this_01 =
                (LocType*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)psVar17);
            if (iVar25 == -1) {
                puVar20 = (undefined4*)this_01->GetMultiLocOrThis();
            } else {
                puVar20 = (undefined4*)this_01->GetSpecifiedMultiLocOrThis(iVar25);
            }
            uVar31 = *puVar20;
            iVar25 = local_38->field_104092;
            local_38->field_104092 = iVar25 + 1;
            paVar27 = local_70;
            goto LAB_10016d01b;
        case 6809:
            uVar26 = (long)local_38->field_104092 - 1;
            local_38->field_104092 = (int)uVar26;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092, uVar26);
            psVar17 = (shared_ptr*)configdecoder::LocType::List(*piVar15);
            bVar8 = operator!=(psVar17, (_func_decltype_nullptr*)0);
            if (!bVar8) {
                uVar18 = logger::default_logger();
                pcVar19 = "lc_name error: loc type %d not valid";
                uVar29 = 214;
            LAB_10016da37:
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6800To6899.cpp",
                                    uVar29, pcVar19);
                pEVar28 = (ErrorCapture*)&this_04->field_141000;
                goto LAB_10016dac0;
            }
            lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)psVar17);
            uVar3 = this_04->field_136096;
            this_04->field_136096 = uVar3 + 1;
            pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&this_04->field_104096, (long)(int)uVar3);
            eastl::string::operator=(pbVar24, (basic_string*)(lVar16 + 56));
            break;
        case 6810:
            local_58.GetCompletionTask();
            bVar8 = local_58.operator_cast_to_bool();
            local_58.~shared_ptr();
            if (!bVar8) {
                uVar18 = logger::default_logger();
                pcVar19 = "loc_width error: active loc invalid";
                uVar29 = 229;
                goto LAB_10016d8fc;
            }
            local_58.GetCompletionTask();
            lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_58);
            uVar31 = *(undefined4*)(lVar16 + 184);
            goto LAB_10016ce8a;
        case 6811:
            local_58.GetCompletionTask();
            bVar8 = local_58.operator_cast_to_bool();
            local_58.~shared_ptr();
            if (!bVar8) {
                uVar18 = logger::default_logger();
                pcVar19 = "loc_length error: active loc invalid";
                uVar29 = 244;
                goto LAB_10016d8fc;
            }
            local_58.GetCompletionTask();
            lVar16 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_58);
            uVar31 = *(undefined4*)(lVar16 + 188);
        LAB_10016ce8a:
            iVar25 = local_38->field_104092;
            local_38->field_104092 = iVar25 + 1;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092,
                                                                       (long)iVar25);
            *puVar20 = uVar31;
        LAB_10016ceac:
            local_58.~shared_ptr();
            break;
        default:
            goto switchD_10016ca35_caseD_1a9c;
        case 6850:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 == '\0') {
                weak_ptr<rs2lib::IfType>::lock();
                lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_68);
                local_58.List(*(int*)(lVar16 + 24));
                local_68.~shared_ptr();
                bVar8 = local_58.operator_cast_to_bool();
                if (bVar8) {
                    lVar16 =
                        shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_58);
                    uVar3 = local_38->field_136096;
                    local_38->field_136096 = uVar3 + 1;
                    pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
                    eastl::string::operator=(pbVar24, (basic_string*)(lVar16 + 8));
                    local_58.~shared_ptr();
                    if (bVar8) {
                        return 1;
                    }
                } else {
                    local_58.~shared_ptr();
                }
            }
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ScriptRunnerImpl_6800To6899.cpp",
                            262, "Active object invalid");
        case 6851:
            this_00 = &local_38->field_140928;
            cVar7 = this_00->IsSet();
            if (cVar7 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_activeObjBuildCoord.IsSet()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_6800To6899.cpp",
                          269, (char*)0);
            }
            new (&local_58) rs2lib::CoordGrid(this_00);
            iVar25 = local_58.GetX();
            iVar12 = local_58.GetZ();
            iVar13 = local_58.GetPos();
            iVar25 = ClientBuild::VisLevel(iVar25, iVar12, iVar13);
            local_58.SetLevel(iVar25);
            this_02 = (Client*)&local_68;
            this_02->WorldCoordFromBuildCoord(pCVar14);
        LAB_10016cff9:
            uVar31 = this_02->ToBitPacked();
            iVar25 = local_38->field_104092;
            local_38->field_104092 = iVar25 + 1;
            paVar27 = (array<int, 1000ul>*)&local_38->field_100092;
        LAB_10016d01b:
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[](paVar27, (long)iVar25);
            *puVar20 = uVar31;
            break;
        case 6852:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 != '\0')
                goto LAB_10016d771;
            weak_ptr<rs2lib::IfType>::lock();
            lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
            uVar31 = *(undefined4*)(lVar16 + 24);
        LAB_10016d567:
            iVar25 = local_38->field_104092;
            local_38->field_104092 = iVar25 + 1;
            paVar27 = (array<int, 1000ul>*)&local_38->field_100092;
            goto LAB_10016d7b2;
        case 6853:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 == '\0') {
                weak_ptr<rs2lib::IfType>::lock();
                lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
                uVar31 = *(undefined4*)(lVar16 + 28);
                goto LAB_10016d567;
            }
            goto LAB_10016d771;
        case 6854:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            local_70 = (array<int, 1000ul>*)puVar1;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            new (&local_68) rs2lib::CoordGrid(iVar12);
            local_88.BuildCoordFromWorldCoord(pCVar14);
            local_58.FindFirstClientObj(pCVar14, (int)(Client*)&local_88);
            lVar16 = local_58.end();
            if (lVar16 == 0)
                goto LAB_10016d798;
            weak_ptr<dash3d::Decor>::weak_ptr(local_b0, (weak_ptr*)&local_58);
            SetActiveObj(local_38, &local_88, local_b0);
            this_03 = local_b0;
        LAB_10016d636:
            this_03->~weak_ptr();
            uVar31 = 1;
            goto LAB_10016d79a;
        case 6855:
            uVar26 = (long)local_38->field_104092 - 1;
            local_38->field_104092 = (int)uVar26;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092, uVar26);
            iVar25 = *piVar15;
            lVar16 = GetActiveObjType(this_04);
            if (lVar16 == 0) {
                uVar18 = logger::default_logger();
                pcVar19 = "obj_getopbase error: active_obj type not found";
                uVar29 = 335;
                goto LAB_10016da37;
            }
            if (iVar25 == 0) {
                local_58.StripTags((basic_string*)(lVar16 + 8));
            } else {
                new (&local_58) eastl::string((basic_string*)(lVar16 + 8));
            }
            uVar3 = local_38->field_136096;
            local_38->field_136096 = uVar3 + 1;
            pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
            eastl::string::operator=(pbVar24, (basic_string*)&local_58);
        LAB_10016df7a:
            local_58.~basic_string();
            break;
        case 6856:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            iVar25 = *piVar15;
            lVar16 = GetActiveObjType(this_04);
            if ((lVar16 != 0) && (0 < iVar12)) {
                iVar13 = ((lVar16 + 224))->size();
                if (iVar12 <= iVar13) {
                    pbVar22 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar16 +
                                                                                                              224),
                        (ulong)(iVar12 - 1));
                    if (iVar25 == 0) {
                        local_58.StripTags(pbVar22);
                    } else {
                        new (&local_58) eastl::string(pbVar22);
                    }
                    uVar3 = local_38->field_136096;
                    local_38->field_136096 = uVar3 + 1;
                    pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
                    eastl::string::operator=(pbVar24, (basic_string*)&local_58);
                    goto LAB_10016df7a;
                }
            }
            uVar18 = logger::default_logger();
            if (lVar16 == 0) {
                pcVar19 = "not found";
            } else {
                pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            pcVar30 = "obj_getop error: obj: %s, op: %d";
            uVar29 = 355;
        LAB_10016daae:
            logger::Logger::Log(uVar18, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                uVar29, pcVar30, pcVar19, iVar12);
            pEVar28 = (ErrorCapture*)&local_38->field_141000;
        LAB_10016dac0:
            pEVar28->Raise(1);
            return 0;
        case 6857:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            iVar25 = *piVar15;
            local_68.List(iVar12);
            bVar8 = operator!=((shared_ptr*)&local_68, (_func_decltype_nullptr*)0);
            if (!bVar8) {
                uVar18 = logger::default_logger();
                uVar31 = 0;
                logger::Logger::Log(uVar18, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6800To6899.cpp",
                                    374, "obj_getopbase error: active_obj not found");
                (&local_38->field_141000, 1)->Raise();
                goto LAB_10016dfe5;
            }
            if (iVar25 == 0) {
                lVar16 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_68);
                local_58.StripTags((basic_string*)(lVar16 + 8));
            } else {
                lVar16 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_68);
                new (&local_58) eastl::string((basic_string*)(lVar16 + 8));
            }
            uVar3 = local_38->field_136096;
            local_38->field_136096 = uVar3 + 1;
            pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
            eastl::string::operator=(pbVar24, (basic_string*)&local_58);
        LAB_10016dfd6:
            local_58.~basic_string();
            uVar31 = 1;
            goto LAB_10016dfe5;
        case 6858:
            lVar16 = (long)local_38->field_104092;
            local_38->field_104092 = (int)(lVar16 - 3U);
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar16 - 3U);
            iVar25 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar16 - 2);
            iVar12 = *piVar15;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar16 - 1);
            iVar13 = *piVar15;
            local_68.List(iVar25);
            bVar8 = operator!=((shared_ptr*)&local_68, (_func_decltype_nullptr*)0);
            if ((bVar8) && (0 < iVar12)) {
                lVar16 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_68);
                iVar25 = ((lVar16 + 224))->size();
                if (iVar12 <= iVar25) {
                    lVar16 =
                        shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_68);
                    pbVar22 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar16 +
                                                                                                              224),
                        (ulong)(iVar12 - 1));
                    if (iVar13 == 0) {
                        local_58.StripTags(pbVar22);
                    } else {
                        new (&local_58) eastl::string(pbVar22);
                    }
                    uVar3 = local_38->field_136096;
                    local_38->field_136096 = uVar3 + 1;
                    pbVar24 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)&local_38->field_104096, (long)(int)uVar3);
                    eastl::string::operator=(pbVar24, (basic_string*)&local_58);
                    goto LAB_10016dfd6;
                }
            }
            uVar18 = logger::default_logger();
            lVar16 = local_68.end();
            if (lVar16 == 0) {
                pcVar19 = "not found";
            } else {
                shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_68);
                pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            uVar31 = 0;
            logger::Logger::Log(uVar18, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6800To6899.cpp",
                                395, "oc_getop error: obj: %s, op: %d", pcVar19, iVar12);
            (&local_38->field_141000, 1)->Raise();
        LAB_10016dfe5:
            local_68.~shared_ptr();
            return uVar31;
        case 6859:
            iVar25 = local_38->field_104092;
            uVar26 = (long)iVar25 - 2;
            local_38->field_104092 = (int)uVar26;
            puVar1 = &local_38->field_100092;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar26);
            iVar12 = *piVar15;
            local_70 = (array<int, 1000ul>*)puVar1;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar25 - 1);
            new (&local_68) rs2lib::CoordGrid(iVar12);
            local_88.BuildCoordFromWorldCoord(pCVar14);
            local_58.FindClientObjInStack(pCVar14, (int)(Client*)&local_88);
            lVar16 = local_58.end();
            if (lVar16 != 0) {
                weak_ptr<dash3d::Decor>::weak_ptr(local_a0, (weak_ptr*)&local_58);
                SetActiveObj(local_38, &local_88, local_a0);
                this_03 = local_a0;
                goto LAB_10016d636;
            }
        LAB_10016d798:
            uVar31 = 0;
        LAB_10016d79a:
            iVar25 = local_38->field_104092;
            local_38->field_104092 = iVar25 + 1;
            paVar27 = local_70;
        LAB_10016d7b2:
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[](paVar27, (long)iVar25);
            *puVar20 = uVar31;
        LAB_10016d7b9:
            local_58.~shared_ptr();
            break;
        case 6860:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 != '\0')
                goto LAB_10016d771;
            weak_ptr<rs2lib::IfType>::lock();
            lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
            iVar25 = *(int*)(lVar16 + 36);
        LAB_10016d254:
            iVar25 = iVar25 - *(int*)&pCVar14[530].field_12;
            local_58.~shared_ptr();
            iVar12 = 0;
            if (-1 < iVar25) {
                iVar12 = iVar25;
            }
            iVar25 = local_38->field_104092;
            local_38->field_104092 = iVar25 + 1;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092, (long)iVar25);
            *piVar15 = iVar12;
            break;
        case 6861:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 == '\0') {
                weak_ptr<rs2lib::IfType>::lock();
                lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
                iVar25 = *(int*)(lVar16 + 32);
                goto LAB_10016d254;
            }
            goto LAB_10016d771;
        case 6862:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 != '\0')
                goto LAB_10016d771;
            weak_ptr<rs2lib::IfType>::lock();
            lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
            if (*(char*)(lVar16 + 44) == '\0') {
                weak_ptr<rs2lib::IfType>::lock();
                lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_68);
                iVar12 = *(int*)(lVar16 + 32);
                iVar25 = *(int*)&pCVar14[530].field_12;
                iVar13 = local_38->field_104092;
                local_38->field_104092 = iVar13 + 1;
                puVar23 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092,
                                                                     (long)iVar13);
                *puVar23 = (uint)(iVar12 <= iVar25);
                local_68.~shared_ptr();
            } else {
                iVar25 = local_38->field_104092;
                local_38->field_104092 = iVar25 + 1;
                puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&local_38->field_100092,
                                                                           (long)iVar25);
                *puVar20 = 0;
            }
            goto LAB_10016d7b9;
        case 6863:
            cVar7 = ((local_38->field_140888 + 24))->expired();
            if (cVar7 == '\0') {
                weak_ptr<rs2lib::IfType>::lock();
                lVar16 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
                uVar31 = *(undefined4*)(lVar16 + 40);
                goto LAB_10016d567;
            }
        LAB_10016d771:
            iVar25 = this_04->field_104092;
            this_04->field_104092 = iVar25 + 1;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&this_04->field_100092,
                                                                       (long)iVar25);
            *puVar20 = 4294967295;
        }
        uVar31 = 1;
    switchD_10016ca35_caseD_1a9c:
        return uVar31;
    }

} // namespace jag::oldscape
