// projects/osclient/ScriptRunnerImpl_6700To6799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016b5f0
    void ScriptRunnerImpl::ExecuteAddGlobalMinimenuEntry(minimenu::Minimenu3DSubjectType minimenu3DSubjectType) {
        unsigned long uVar3 = (long)field_104092 - 2;
        field_104092 = (int)uVar3;
        int* piVar1 = &field_100092[uVar3];
        int arg1 = *piVar1;
        uVar3 = (long)field_136096 - 1;
        field_136096 = (int)uVar3;
        eastl::string* str = &field_104096[uVar3];
        eastl::string local_50(*str);
        piVar1 = &field_100092[(long)field_104092 + 1];
        int arg3 = *piVar1;
        (Client::Instance()->field_52344)->AddGlobalEntry(arg1, local_50, arg3, minimenu3DSubjectType);
    }

    // 0x10016b6c0
    uint64_t ScriptRunnerImpl::GetActiveNpcType() const {
        uint64_t uVar2;

        long lVar1 = Client::Instance()->GetClientNpc(m_activeNPC);
        if (lVar1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = ((lVar1 + 1024))->end();
        }
        return uVar2;
    }

    // 0x10016b700
    uint32_t ScriptRunnerImpl::ExecuteCommand6700To6799(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* puVar1;
        unsigned int uVar2;
        bool bVar3;
        bool cVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        unsigned int* puVar9;
        Client* this_01;
        ClientNpc* pCVar10;
        long lVar11;
        char* pcVar12;
        NpcType* pNVar13;
        int* piVar14;
        long lVar15;
        uint32_t* puVar16;
        Logger* pLVar17;
        uint64_t uVar18;
        eastl::string* pbVar19;
        eastl::string* pbVar20;
        Minimenu3DSubjectType MVar21;
        unsigned long arg1;
        unsigned long uVar22;
        Minimenu* this_02;
        CoordGrid* pCVar23;
        uint64_t in_stack_ffffffffffffff48;
        CoordGrid local_a0;
        int local_7c;
        CoordGrid local_78;
        array<int, 1000ul>* local_58;
        CoordGrid local_50;

        uint32_t uVar24 = (uint32_t)((unsigned long)in_stack_ffffffffffffff48 >> 32);
        uint32_t uVar8 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 6700:
            MVar21 = 0;
            goto LAB_10016b84a;
        case 6701:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            iVar7 = *piVar14;
            this_02 = this_00->field_52344;
            MVar21 = 0;
            goto LAB_10016b886;
        case 6702:
            uVar8 = 1;
            ExecuteAddGlobalMinimenuEntry(1);
            break;
        case 6703:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            uVar8 = 1;
            this_00->field_52344->RemoveGlobalEntry(*piVar14, 1);
            break;
        case 6704:
            MVar21 = 2;
            goto LAB_10016b84a;
        case 6705:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            iVar7 = *piVar14;
            this_02 = this_00->field_52344;
            MVar21 = 2;
            goto LAB_10016b886;
        case 6706:
            MVar21 = 3;
            goto LAB_10016b84a;
        case 6707:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            iVar7 = *piVar14;
            this_02 = this_00->field_52344;
            MVar21 = 3;
            goto LAB_10016b886;
        case 6708:
            MVar21 = 4;
        LAB_10016b84a:
            ExecuteAddGlobalMinimenuEntry(MVar21);
            uVar8 = 1;
            break;
        case 6709:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            iVar7 = *piVar14;
            this_02 = this_00->field_52344;
            MVar21 = 4;
        LAB_10016b886:
            this_02->RemoveGlobalEntry(iVar7, MVar21);
            uVar8 = 1;
            break;
        case 6750:
            pCVar10 = (ClientNpc*)this_00->GetClientNpc(m_activeNPC);
            if (pCVar10 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                123, "Active NPC doesn\'t exist");
            }
            local_50 = pCVar10->GetDisplayName();
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar20 = &field_104096[(long)iVar7];
            *pbVar20 = &local_50;
            goto LAB_10016c619;
        case 6751:
            pCVar10 = (ClientNpc*)this_00->GetClientNpc(m_activeNPC);
            if (pCVar10 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                138, "Active NPC doesn\'t exist");
            }
            uVar8 = pCVar10->GetUID();
            goto LAB_10016b9d5;
        case 6752:
            pCVar10 = (ClientNpc*)this_00->GetClientNpc(m_activeNPC);
            if (pCVar10 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                153, "Active NPC doesn\'t exist");
            }
            uVar8 = pCVar10->GetCreationCycle();
            goto LAB_10016b9d5;
        case 6753:
            lVar15 = this_00->GetClientNpc(m_activeNPC);
            if (lVar15 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                168, "Active NPC doesn\'t exist");
            }
            puVar16 = (uint32_t*)(*((lVar15 + 1024))).operator->();
            uVar8 = *puVar16;
            goto LAB_10016b9d5;
        case 6754:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            local_78 = configdecoder::NpcType::List(*piVar14);
            cVar4 = shared_ptr::operator_cast_to_bool(&local_78);
            if (!cVar4) {
                local_50 = eastl::string("");
            } else {
                lVar15 = local_78.operator->();
                local_50 = eastl::string(*((lVar15 + 8)));
            }
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar20 = &field_104096[(long)iVar7];
            *pbVar20 = &local_50;
            pCVar23 = &local_78;
            goto LAB_10016c0ff;
        case 6755:
            lVar15 = this_00->GetClientNpc(m_activeNPC);
            if (lVar15 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                191, "Active NPC doesn\'t exist");
            }
            uVar8 = *(uint32_t*)(lVar15 + 440);
        LAB_10016b9d5:
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
        LAB_10016b9ed:
            puVar16 = &field_100092[(long)iVar7];
            *puVar16 = uVar8;
            uVar8 = 1;
            break;
        case 6756:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            puVar9 = &field_100092[uVar22];
            uVar2 = *puVar9;
            lVar15 = this_00->GetClientNpc(m_activeNPC);
            if (lVar15 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                216, "Active NPC doesn\'t exist");
            }
            if (*(int*)(lVar15 + 440) <= (int)uVar2) {
                (*((lVar15 + 1024))).operator->();
                uVar18 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                205, "Route index %d is invalid for NPC %s", (unsigned long)uVar2, uVar18);
            }
            local_58 = (array<int, 1000ul>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)this_00->field_51984);
            piVar14 = (int*)(*((lVar15 + 444)))[(long)(int)uVar2];
            local_7c = *piVar14;
            piVar14 = (int*)(*((lVar15 + 484)))[(long)(int)uVar2];
            local_50 = rs2lib::CoordGrid((int)local_58, local_7c, *piVar14);
            local_78 = this_00->WorldCoordFromBuildCoord(local_50);
            uVar8 = local_78.ToBitPacked();
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            goto LAB_10016b9ed;
        case 6757:
            uVar22 = (long)field_136096 - 1;
            field_136096 = (int)uVar22;
            arg1 = (long)field_104092 - 1;
            field_104092 = (int)arg1;
            puVar16 = &field_100092[arg1];
            uVar8 = *puVar16;
            lVar15 = this_00->GetClientNpc(m_activeNPC);
            if (lVar15 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                234, "Active NPC doesn\'t exist");
            }
            pbVar19 = &field_104096[uVar22];
            (*((lVar15 + 112))) = pbVar19;
            *(uint32_t*)(lVar15 + 148) = uVar8;
            uVar8 = 1;
            break;
        case 6758:
            local_58 = (array<int, 1000ul>*)&field_100092;
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            puVar9 = (unsigned int*)(*local_58)[uVar22];
            uVar2 = *puVar9;
            iVar7 = ClientNpc::GetShortIDFromUID((unsigned long)uVar2);
            iVar5 = ClientNpc::GetTypeIDFromUID(uVar2);
            lVar15 = this_00->GetClientNpc(iVar7);
            if ((lVar15 == 0) || (piVar14 = (int*)(*((lVar15 + 1024))).operator->(), *piVar14 != iVar5)) {
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar16 = (uint32_t*)(*local_58)[(long)iVar7];
                *puVar16 = 0;
                uVar8 = 1;
            } else {
                m_activeNPC = iVar7;
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar16 = (uint32_t*)(*local_58)[(long)iVar7];
                *puVar16 = 1;
                uVar8 = 1;
            }
            break;
        case 6759:
            iVar7 = field_104092;
            uVar22 = (long)iVar7 - 2;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            iVar5 = *piVar14;
            puVar16 = &field_100092[(long)iVar7 - 1];
            uVar8 = *puVar16;
            this_01 = Client::Instance();
            pCVar10 = (ClientNpc*)this_01->GetClientNpc(m_activeNPC);
            if (pCVar10 == nullptr) {
                pLVar17 = logger::default_logger();
                pcVar12 = "npc_getopbase error: active_npc not found";
                iVar7 = 277;
                goto LAB_10016c38d;
            }
            local_58 = (array<int, 1000ul>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar8);
            pNVar13 = (NpcType*)pCVar10->field_1024.operator->();
            pNVar13 = pNVar13->GetMultiNpcOrThis();
            local_50 = eastl::string();
            if (iVar5 == 0) {
                local_a0 = pCVar10->GetDisplayName();
                local_78 = minimenu::Minimenu::GetNpcOpBase(&local_a0, -1, -1);
                iVar7 = (int)local_58;
                local_50 = &local_78;
            } else {
                lVar15 = this_00->field_52016.operator->();
                local_78 = minimenu::Minimenu::GetNpcOpBase(pCVar10, pNVar13, *(int*)(lVar15 + 1128));
                local_50 = &local_78;
                iVar7 = (int)local_58;
            }
            if (iVar7 == 0) {
                local_78.StripTags(local_50);
            } else {
                local_78 = eastl::string(local_50);
            }
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar20 = &field_104096[(long)iVar7];
            *pbVar20 = &local_78;
        LAB_10016c619:
            uVar8 = 1;
            break;
        case 6760:
            iVar7 = field_104092;
            uVar22 = (long)iVar7 - 2;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            iVar5 = *piVar14;
            piVar14 = &field_100092[(long)iVar7 - 1];
            iVar7 = *piVar14;
            lVar15 = GetActiveNpcType();
            if ((lVar15 != 0) && (0 < iVar5)) {
                iVar6 = ((lVar15 + 256))->size();
                if (iVar5 <= iVar6) {
                    pbVar19 = (eastl::string*)(*((lVar15 + 256)))[(unsigned long)(iVar5 - 1)];
                    if (iVar7 == 0) {
                        local_50.StripTags(*pbVar19);
                    } else {
                        local_50 = eastl::string(*pbVar19);
                    }
                    iVar7 = field_136096;
                    field_136096 = iVar7 + 1;
                    pbVar20 = &field_104096[(long)iVar7];
                    *pbVar20 = &local_50;
                    goto LAB_10016c619;
                }
            }
            pLVar17 = logger::default_logger();
            if (lVar15 != 0) {
                eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            pcVar12 = "npc_getop error: npc: %s, op: %d";
            iVar7 = 297;
        LAB_10016c38d:
            uVar8 = 0;
            pLVar17->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_6700To6799.cpp",
                         iVar7, pcVar12);
            field_141000->Raise(1);
            break;
        case 6761:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 3U);
            puVar1 = &field_100092;
            piVar14 = (int*)(*puVar1)[lVar15 - 3U];
            iVar7 = *piVar14;
            puVar16 = (uint32_t*)(*puVar1)[lVar15 - 2];
            local_58 = (array<int, 1000ul>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*puVar16));
            piVar14 = (int*)(*puVar1)[lVar15 - 1];
            iVar5 = *piVar14;
            local_a0 = configdecoder::NpcType::List(iVar7);
            bVar3 = local_a0 != nullptr;
            if (bVar3) {
                local_50 = eastl::string();
                if ((int)local_58 == 0) {
                    lVar15 = local_a0.operator->();
                    local_78 = minimenu::Minimenu::GetNpcOpBase((lVar15 + 8), -1, -1);
                    local_50 = &local_78;
                } else {
                    lVar15 = local_a0.operator->();
                    lVar11 = local_a0.operator->();
                    iVar7 = *(int*)(lVar11 + 460);
                    lVar11 = this_00->field_52016.operator->();
                    local_78 = minimenu::Minimenu::GetNpcOpBase((lVar15 + 8), iVar7, *(int*)(lVar11 + 1128));
                    local_50 = &local_78;
                }
                if (iVar5 == 0) {
                    local_78.StripTags(local_50);
                } else {
                    local_78 = eastl::string(local_50);
                }
                iVar7 = field_136096;
                field_136096 = iVar7 + 1;
                pbVar20 = &field_104096[(long)iVar7];
                *pbVar20 = &local_78;
                uVar8 = 1;
            } else {
                pLVar17 = logger::default_logger();
                uVar8 = 0;
                pLVar17->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6700To6799.cpp",
                             326, "nc_getopbase error: NPC type invalid");
                field_141000->Raise(1);
            }
            pCVar23 = &local_a0;
            goto LAB_10016c672;
        case 6762:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 3U);
            puVar1 = &field_100092;
            piVar14 = (int*)(*puVar1)[lVar15 - 3U];
            iVar7 = *piVar14;
            piVar14 = (int*)(*puVar1)[lVar15 - 2];
            iVar5 = *piVar14;
            piVar14 = (int*)(*puVar1)[lVar15 - 1];
            iVar6 = *piVar14;
            local_78 = configdecoder::NpcType::List(iVar7);
            bVar3 = local_78 != nullptr;
            if ((!bVar3) || (iVar5 < 1)) {
            LAB_10016be97:
                pLVar17 = logger::default_logger();
                lVar15 = local_78.end();
                if (lVar15 == 0) {
                    pcVar12 = "not found";
                } else {
                    local_78.operator->();
                    pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                }
                uVar8 = 0;
                pLVar17->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6700To6799.cpp",
                             347, "nc_getop error: npc: %s, op: %d", pcVar12, iVar5);
                field_141000->Raise(1);
            } else {
                lVar15 = local_78.operator->();
                iVar7 = ((lVar15 + 256))->size();
                if (iVar7 < iVar5)
                    goto LAB_10016be97;
                lVar15 = local_78.operator->();
                pbVar19 = (eastl::string*)(*((lVar15 + 256)))[(unsigned long)(iVar5 - 1)];
                if (iVar6 == 0) {
                    local_50.StripTags(*pbVar19);
                } else {
                    local_50 = eastl::string(*pbVar19);
                }
                iVar7 = field_136096;
                field_136096 = iVar7 + 1;
                pbVar20 = &field_104096[(long)iVar7];
                *pbVar20 = &local_50;
                uVar8 = 1;
            }
            pCVar23 = &local_78;
            goto LAB_10016c672;
        case 6763:
            iVar7 = field_104092;
            uVar22 = (long)iVar7 - 2;
            field_104092 = (int)uVar22;
            puVar1 = &field_100092;
            piVar14 = (int*)(*puVar1)[uVar22];
            iVar5 = *piVar14;
            piVar14 = (int*)(*puVar1)[(long)iVar7 - 1];
            iVar7 = *piVar14;
            local_50 = configdecoder::NpcType::List(iVar5);
            bVar3 = local_50 != nullptr;
            if (bVar3) {
                if (iVar7 == -1) {
                    pNVar13 = (NpcType*)local_50.operator->();
                    pNVar13 = pNVar13->GetMultiNpcOrThis();
                } else {
                    pNVar13 = (NpcType*)local_50.operator->();
                    pNVar13 = (NpcType*)pNVar13->GetSpecifiedMultiNpcOrThis(iVar7);
                }
                uVar8 = pNVar13->field_0;
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar16 = (uint32_t*)(*puVar1)[(long)iVar7];
                *puVar16 = uVar8;
                uVar8 = 1;
            } else {
                pLVar17 = logger::default_logger();
                uVar8 = 0;
                pLVar17->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_6700To6799.cpp",
                             377, "lc_getmultinpc error: npc type %d not valid",
                             (((uint64_t)uVar24 << 32) | (uint32_t)iVar5));
                field_141000->Raise(1);
            }
            pCVar23 = &local_50;
        LAB_10016c672:
            pCVar23->~shared_ptr();
            break;
        case 6764:
            iVar7 = field_104092;
            uVar22 = (long)iVar7 - 2;
            field_104092 = (int)uVar22;
            puVar1 = &field_100092;
            piVar14 = (int*)(*puVar1)[uVar22];
            iVar5 = *piVar14;
            piVar14 = (int*)(*puVar1)[(long)iVar7 - 1];
            iVar7 = *piVar14;
            local_50 = configdecoder::NpcType::List(iVar5);
            bVar3 = local_50 != nullptr;
            if (bVar3) {
                pNVar13 = (NpcType*)local_50.operator->();
                uVar8 = pNVar13->GetHeadIconGraphic(iVar7);
                iVar5 = field_104092;
                field_104092 = iVar5 + 1;
                puVar16 = (uint32_t*)(*puVar1)[(long)iVar5];
                *puVar16 = uVar8;
                pNVar13 = (NpcType*)local_50.operator->();
                uVar8 = pNVar13->GetHeadIconIndex(iVar7);
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar16 = (uint32_t*)(*puVar1)[(long)iVar7];
                *puVar16 = uVar8;
            }
            goto LAB_10016c06b;
        case 6765:
            uVar22 = (long)field_104092 - 1;
            field_104092 = (int)uVar22;
            piVar14 = &field_100092[uVar22];
            local_50 = configdecoder::NpcType::List(*piVar14);
            cVar4 = shared_ptr::operator_cast_to_bool(&local_50);
            uVar8 = 0;
            if (cVar4) {
                lVar15 = local_50.operator->();
                uVar8 = *(uint32_t*)(lVar15 + 460);
            }
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar16 = &field_100092[(long)iVar7];
            *puVar16 = uVar8;
        LAB_10016c06b:
            pCVar23 = &local_50;
        LAB_10016c0ff:
            pCVar23->~shared_ptr();
            uVar8 = 1;
        }
        return uVar8;
    }

} // namespace jag::oldscape
