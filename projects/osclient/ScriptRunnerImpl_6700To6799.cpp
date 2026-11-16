// projects/osclient/ScriptRunnerImpl_6700To6799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016b5f0, 208 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteAddGlobalMinimenuEntry(minimenu::Minimenu3DSubjectType)
    void ScriptRunnerImpl::ExecuteAddGlobalMinimenuEntry(undefined4 param_2) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        basic_string* pbVar4;
        long lVar5;
        ulong uVar6;
        eastl::string local_50[32];

        uVar6 = (long)field_104092 - 2;
        field_104092 = (int)uVar6;
        puVar3 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar6);
        uVar1 = *puVar3;
        uVar6 = (long)(int)field_136096 - 1;
        field_136096 = (uint)uVar6;
        pbVar4 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
            (array<eastl::string, 1000ul>*)&field_104096, uVar6);
        eastl::string::basic_string(local_50, pbVar4);
        puVar3 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                  (long)field_104092 + 1);
        uVar2 = *puVar3;
        lVar5 = Client::Instance();
        (*(Minimenu**)(lVar5 + 52344))->AddGlobalEntry(uVar1, local_50, uVar2, param_2);
        eastl::string::~basic_string(local_50);
    }

    // 0x10016b6c0, 64 bytes, placed by class name and debug map
    // ScriptRunnerImpl::GetActiveNpcType() const
    undefined8 ScriptRunnerImpl::GetActiveNpcType() {
        Client* this_00;
        long lVar1;
        undefined8 uVar2;

        this_00 = (Client*)Client::Instance();
        lVar1 = this_00->GetClientNpc(m_activeNPC);
        if (lVar1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = ((lVar1 + 1024))->end();
        }
        return uVar2;
    }

    // 0x10016b700, 4448 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand6700To6799(ScriptOp, ClientScript const&, bool)
    undefined4 ScriptRunnerImpl::ExecuteCommand6700To6799(undefined4 param_2) {
        undefined1* puVar1;
        uint uVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        Client* this_00;
        uint* puVar8;
        Client* this_01;
        ClientNpc* pCVar9;
        long lVar10;
        char* pcVar11;
        NpcType* pNVar12;
        int* piVar13;
        long lVar14;
        undefined4* puVar15;
        undefined8 uVar16;
        basic_string* pbVar17;
        eastl::string* pbVar18;
        ulong uVar19;
        ulong uVar20;
        Minimenu* pMVar21;
        CoordGrid* pCVar22;
        undefined8 uVar23;
        undefined8 in_stack_ffffffffffffff48;
        undefined4 uVar24;
        CoordGrid local_a0[2];
        int local_7c;
        CoordGrid local_78[2];
        array<int, 1000ul>* local_58;
        CoordGrid local_50[2];

        uVar24 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 32);
        uVar7 = 2;
        this_00 = (Client*)Client::Instance();
        switch (param_2) {
        case 6700:
            uVar16 = 0;
            goto LAB_10016b84a;
        case 6701:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            uVar7 = *puVar15;
            pMVar21 = this_00->field_52344;
            uVar16 = 0;
            goto LAB_10016b886;
        case 6702:
            uVar7 = 1;
            ExecuteAddGlobalMinimenuEntry(this, 1);
            break;
        case 6703:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            uVar7 = 1;
            (this_00->field_52344, *puVar15, 1)->RemoveGlobalEntry();
            break;
        case 6704:
            uVar16 = 2;
            goto LAB_10016b84a;
        case 6705:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            uVar7 = *puVar15;
            pMVar21 = this_00->field_52344;
            uVar16 = 2;
            goto LAB_10016b886;
        case 6706:
            uVar16 = 3;
            goto LAB_10016b84a;
        case 6707:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            uVar7 = *puVar15;
            pMVar21 = this_00->field_52344;
            uVar16 = 3;
            goto LAB_10016b886;
        case 6708:
            uVar16 = 4;
        LAB_10016b84a:
            ExecuteAddGlobalMinimenuEntry(this, uVar16);
            uVar7 = 1;
            break;
        case 6709:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            uVar7 = *puVar15;
            pMVar21 = this_00->field_52344;
            uVar16 = 4;
        LAB_10016b886:
            pMVar21->RemoveGlobalEntry(uVar7, uVar16);
            uVar7 = 1;
            break;
        case 6750:
            lVar14 = this_00->GetClientNpc(m_activeNPC);
            if (lVar14 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                123, "Active NPC doesn\'t exist");
            }
            local_50->GetDisplayName();
            uVar2 = field_136096;
            field_136096 = uVar2 + 1;
            pbVar18 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar2);
            eastl::string::operator=(pbVar18, (basic_string*)local_50);
            goto LAB_10016c619;
        case 6751:
            pCVar9 = (ClientNpc*)this_00->GetClientNpc(m_activeNPC);
            if (pCVar9 == (ClientNpc*)0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                138, "Active NPC doesn\'t exist");
            }
            uVar7 = pCVar9->GetUID();
            goto LAB_10016b9d5;
        case 6752:
            pCVar9 = (ClientNpc*)this_00->GetClientNpc(m_activeNPC);
            if (pCVar9 == (ClientNpc*)0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                153, "Active NPC doesn\'t exist");
            }
            uVar7 = pCVar9->GetCreationCycle();
            goto LAB_10016b9d5;
        case 6753:
            lVar14 = this_00->GetClientNpc(m_activeNPC);
            if (lVar14 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                168, "Active NPC doesn\'t exist");
            }
            puVar15 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)(lVar14 + 1024));
            uVar7 = *puVar15;
            goto LAB_10016b9d5;
        case 6754:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            local_78->List(*piVar13);
            bVar3 = local_78->operator_cast_to_bool();
            if (bVar3) {
                lVar14 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_78);
                new (local_50) eastl::string((basic_string*)(lVar14 + 8));
            } else {
                new (local_a0) eastl::allocator("EASTL basic_string");
                new (local_50) eastl::string("", local_a0);
            }
            uVar2 = field_136096;
            field_136096 = uVar2 + 1;
            pbVar18 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar2);
            eastl::string::operator=(pbVar18, (basic_string*)local_50);
            local_50->~basic_string();
            pCVar22 = local_78;
            goto LAB_10016c0ff;
        case 6755:
            lVar14 = this_00->GetClientNpc(m_activeNPC);
            if (lVar14 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                191, "Active NPC doesn\'t exist");
            }
            uVar7 = *(undefined4*)(lVar14 + 440);
        LAB_10016b9d5:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
        LAB_10016b9ed:
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6);
            *puVar15 = uVar7;
            uVar7 = 1;
            break;
        case 6756:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            puVar8 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            uVar2 = *puVar8;
            lVar14 = this_00->GetClientNpc(m_activeNPC);
            if (lVar14 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                216, "Active NPC doesn\'t exist");
            }
            if (*(int*)(lVar14 + 440) <= (int)uVar2) {
                shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)(lVar14 + 1024));
                uVar16 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                205, "Route index %d is invalid for NPC %s", (ulong)uVar2, uVar16);
            }
            local_58 = (array<int, 1000ul>*)CONCAT44(local_58._4_4_, this_00->m_playerLevel);
            piVar13 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar14 + 444), (long)(int)uVar2);
            local_7c = *piVar13;
            piVar13 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar14 + 484), (long)(int)uVar2);
            rs2lib::CoordGrid::CoordGrid(local_50, (int)local_58, local_7c, *piVar13);
            local_78->WorldCoordFromBuildCoord(this_00);
            uVar7 = local_78->ToBitPacked();
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            goto LAB_10016b9ed;
        case 6757:
            uVar20 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar20;
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
            uVar7 = *puVar15;
            lVar14 = this_00->GetClientNpc(m_activeNPC);
            if (lVar14 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                234, "Active NPC doesn\'t exist");
            }
            pbVar17 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar20);
            eastl::string::operator=((eastl::string*)(lVar14 + 112), pbVar17);
            *(undefined4*)(lVar14 + 148) = uVar7;
            uVar7 = 1;
            break;
        case 6758:
            local_58 = (array<int, 1000ul>*)&field_100092;
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar13 = (int*)std::array<int, 1000ul>::operator[](local_58, uVar20);
            iVar6 = *piVar13;
            iVar4 = ClientNpc::GetShortIDFromUID(iVar6);
            iVar6 = ClientNpc::GetTypeIDFromUID(iVar6);
            lVar14 = this_00->GetClientNpc(iVar4);
            if ((lVar14 == 0) || (piVar13 = (int*)shared_ptr<configdecoder::NpcType>::operator->(
                                      (shared_ptr<configdecoder::NpcType>*)(lVar14 + 1024)),
                                  *piVar13 != iVar6)) {
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar15 = (undefined4*)std::array<int, 1000ul>::operator[](local_58, (long)iVar6);
                *puVar15 = 0;
                uVar7 = 1;
            } else {
                m_activeNPC = iVar4;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar15 = (undefined4*)std::array<int, 1000ul>::operator[](local_58, (long)iVar6);
                *puVar15 = 1;
                uVar7 = 1;
            }
            break;
        case 6759:
            iVar6 = field_104092;
            uVar20 = (long)iVar6 - 2;
            field_104092 = (int)uVar20;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            iVar4 = *piVar13;
            puVar15 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 - 1);
            uVar7 = *puVar15;
            this_01 = (Client*)Client::Instance();
            pCVar9 = (ClientNpc*)this_01->GetClientNpc(m_activeNPC);
            if (pCVar9 == (ClientNpc*)0) {
                uVar16 = logger::default_logger();
                pcVar11 = "npc_getopbase error: active_npc not found";
                uVar23 = 277;
                goto LAB_10016c38d;
            }
            local_58 = (array<int, 1000ul>*)CONCAT44(local_58._4_4_, uVar7);
            pNVar12 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)&pCVar9->field_1024);
            pNVar12 = (NpcType*)pNVar12->GetMultiNpcOrThis();
            new (local_50) eastl::string();
            if (iVar4 == 0) {
                local_a0->GetDisplayName();
                local_78->GetNpcOpBase(local_a0, -1, -1);
                iVar6 = (int)local_58;
                eastl::string::operator=((eastl::string*)local_50, (basic_string*)local_78);
                local_78->~basic_string();
                local_a0->~basic_string();
            } else {
                lVar14 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
                local_78->GetNpcOpBase(pCVar9, pNVar12, *(int*)(lVar14 + 1128));
                eastl::string::operator=((eastl::string*)local_50, (basic_string*)local_78);
                local_78->~basic_string();
                iVar6 = (int)local_58;
            }
            if (iVar6 == 0) {
                local_78->StripTags(local_50);
            } else {
                new (local_78) eastl::string(local_50);
            }
            uVar2 = field_136096;
            field_136096 = uVar2 + 1;
            pbVar18 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar2);
            eastl::string::operator=(pbVar18, (basic_string*)local_78);
            local_78->~basic_string();
        LAB_10016c619:
            local_50->~basic_string();
            uVar7 = 1;
            break;
        case 6760:
            iVar6 = field_104092;
            uVar20 = (long)iVar6 - 2;
            field_104092 = (int)uVar20;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            iVar4 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 - 1);
            iVar6 = *piVar13;
            lVar14 = GetActiveNpcType(this);
            if ((lVar14 != 0) && (0 < iVar4)) {
                iVar5 = ((lVar14 + 256))->size();
                if (iVar4 <= iVar5) {
                    pbVar17 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar14 +
                                                                                                              256),
                        (ulong)(iVar4 - 1));
                    if (iVar6 == 0) {
                        local_50->StripTags(pbVar17);
                    } else {
                        new (local_50) eastl::string(pbVar17);
                    }
                    uVar2 = field_136096;
                    field_136096 = uVar2 + 1;
                    pbVar18 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar2);
                    eastl::string::operator=(pbVar18, (basic_string*)local_50);
                    goto LAB_10016c619;
                }
            }
            uVar16 = logger::default_logger();
            if (lVar14 != 0) {
                eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            pcVar11 = "npc_getop error: npc: %s, op: %d";
            uVar23 = 297;
        LAB_10016c38d:
            uVar7 = 0;
            logger::Logger::Log(uVar16, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_6700To6799.cpp",
                                uVar23, pcVar11);
            (&field_141000, 1)->Raise();
            break;
        case 6761:
            lVar14 = (long)field_104092;
            field_104092 = (int)(lVar14 - 3U);
            puVar1 = &field_100092;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar14 - 3U);
            iVar6 = *piVar13;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar14 - 2);
            local_58 = (array<int, 1000ul>*)CONCAT44(local_58._4_4_, *puVar15);
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar14 - 1);
            iVar4 = *piVar13;
            local_a0->List(iVar6);
            bVar3 = operator!=((shared_ptr*)local_a0, (_func_decltype_nullptr*)0);
            if (bVar3) {
                new (local_50) eastl::string();
                if ((int)local_58 == 0) {
                    lVar14 =
                        shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_a0);
                    local_78->GetNpcOpBase((basic_string*)(lVar14 + 8), -1, -1);
                    eastl::string::operator=((eastl::string*)local_50, (basic_string*)local_78);
                    local_78->~basic_string();
                } else {
                    lVar14 =
                        shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_a0);
                    lVar10 =
                        shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_a0);
                    iVar6 = *(int*)(lVar10 + 460);
                    lVar10 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
                    local_78->GetNpcOpBase((basic_string*)(lVar14 + 8), iVar6, *(int*)(lVar10 + 1128));
                    eastl::string::operator=((eastl::string*)local_50, (basic_string*)local_78);
                    local_78->~basic_string();
                }
                if (iVar4 == 0) {
                    local_78->StripTags(local_50);
                } else {
                    new (local_78) eastl::string(local_50);
                }
                uVar2 = field_136096;
                field_136096 = uVar2 + 1;
                pbVar18 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar2);
                eastl::string::operator=(pbVar18, (basic_string*)local_78);
                local_78->~basic_string();
                local_50->~basic_string();
                uVar7 = 1;
            } else {
                uVar16 = logger::default_logger();
                uVar7 = 0;
                logger::Logger::Log(uVar16, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6700To6799.cpp",
                                    326, "nc_getopbase error: NPC type invalid");
                (&field_141000, 1)->Raise();
            }
            pCVar22 = local_a0;
            goto LAB_10016c672;
        case 6762:
            lVar14 = (long)field_104092;
            field_104092 = (int)(lVar14 - 3U);
            puVar1 = &field_100092;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar14 - 3U);
            iVar6 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar14 - 2);
            iVar4 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar14 - 1);
            iVar5 = *piVar13;
            local_78->List(iVar6);
            bVar3 = operator!=((shared_ptr*)local_78, (_func_decltype_nullptr*)0);
            if ((!bVar3) || (iVar4 < 1)) {
            LAB_10016be97:
                uVar16 = logger::default_logger();
                lVar14 = local_78->end();
                if (lVar14 == 0) {
                    pcVar11 = "not found";
                } else {
                    shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_78);
                    pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                }
                uVar7 = 0;
                logger::Logger::Log(uVar16, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6700To6799.cpp",
                                    347, "nc_getop error: npc: %s, op: %d", pcVar11, iVar4);
                (&field_141000, 1)->Raise();
            } else {
                lVar14 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_78);
                iVar6 = ((lVar14 + 256))->size();
                if (iVar6 < iVar4)
                    goto LAB_10016be97;
                lVar14 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_78);
                pbVar17 = (basic_string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string,
                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar14 + 256),
                    (ulong)(iVar4 - 1));
                if (iVar5 == 0) {
                    local_50->StripTags(pbVar17);
                } else {
                    new (local_50) eastl::string(pbVar17);
                }
                uVar2 = field_136096;
                field_136096 = uVar2 + 1;
                pbVar18 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar2);
                eastl::string::operator=(pbVar18, (basic_string*)local_50);
                local_50->~basic_string();
                uVar7 = 1;
            }
            pCVar22 = local_78;
            goto LAB_10016c672;
        case 6763:
            iVar6 = field_104092;
            uVar20 = (long)iVar6 - 2;
            field_104092 = (int)uVar20;
            puVar1 = &field_100092;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar20);
            iVar4 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6 - 1);
            iVar6 = *piVar13;
            local_50->List(iVar4);
            bVar3 = operator!=((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar3) {
                if (iVar6 == -1) {
                    pNVar12 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)local_50);
                    puVar15 = (undefined4*)pNVar12->GetMultiNpcOrThis();
                } else {
                    pNVar12 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)local_50);
                    puVar15 = (undefined4*)pNVar12->GetSpecifiedMultiNpcOrThis(iVar6);
                }
                uVar7 = *puVar15;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6);
                *puVar15 = uVar7;
                uVar7 = 1;
            } else {
                uVar16 = logger::default_logger();
                uVar7 = 0;
                logger::Logger::Log(uVar16, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_6700To6799.cpp",
                                    377, "lc_getmultinpc error: npc type %d not valid", CONCAT44(uVar24, iVar4));
                (&field_141000, 1)->Raise();
            }
            pCVar22 = local_50;
        LAB_10016c672:
            pCVar22->~shared_ptr();
            break;
        case 6764:
            iVar6 = field_104092;
            uVar20 = (long)iVar6 - 2;
            field_104092 = (int)uVar20;
            puVar1 = &field_100092;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar20);
            iVar4 = *piVar13;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6 - 1);
            iVar6 = *piVar13;
            local_50->List(iVar4);
            bVar3 = operator!=((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar3) {
                pNVar12 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                    (shared_ptr<configdecoder::NpcType>*)local_50);
                uVar7 = pNVar12->GetHeadIconGraphic(iVar6);
                iVar4 = field_104092;
                field_104092 = iVar4 + 1;
                puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar4);
                *puVar15 = uVar7;
                pNVar12 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                    (shared_ptr<configdecoder::NpcType>*)local_50);
                uVar7 = pNVar12->GetHeadIconIndex(iVar6);
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar6);
                *puVar15 = uVar7;
            }
            goto LAB_10016c06b;
        case 6765:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar13 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar20);
            local_50->List(*piVar13);
            bVar3 = local_50->operator_cast_to_bool();
            uVar7 = 0;
            if (bVar3) {
                lVar14 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_50);
                uVar7 = *(undefined4*)(lVar14 + 460);
            }
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar15 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6);
            *puVar15 = uVar7;
        LAB_10016c06b:
            pCVar22 = local_50;
        LAB_10016c0ff:
            pCVar22->~shared_ptr();
            uVar7 = 1;
        }
        return uVar7;
    }

} // namespace jag::oldscape
