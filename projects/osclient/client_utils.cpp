// projects/osclient/client_utils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000b6590, 144 bytes, placed by class name and debug map
    // Client::GetObjectsOnTile(rs2lib::CoordGrid const&)
    undefined1* Client::GetObjectsOnTile(CoordGrid* param_1) {
        int iVar2;
        int iVar3;
        int iVar4;

        if (ClientConstants::IsCoordInBuildArea(param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ClientConstants::IsCoordInBuildArea(coord)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_utils.cpp",
                1191, (char*)0);
        }
        iVar2 = param_1->GetX();
        iVar3 = param_1->GetZ();
        iVar4 = param_1->GetPos();
        return field_1120504 + (long)iVar4 * 32 + (long)iVar3 * 3328 + (long)iVar2 * 346112 + 56;
    }

    // 0x100113540, 416 bytes, placed by __FILE__ string
    // Client::GetNPCPos(bool, core::SuperPacket&)
    void Client::GetNPCPos(bool param_1, SuperPacket* param_2) {
        int iVar1;
        int* piVar3;
        shared_ptr<ClientNpc>* this_00;
        long lVar4;
        long lVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        shared_ptr* psVar8;
        ulong uVar9;

        field_1120520 = 0;
        field_1103880 = 0;
        GetNPCPosOldVis(this, param_2);
        GetNPCPosNewVis(this, param_1, param_2);
        GetNPCPosExtended(this, param_2);
        if (0 < field_1120520) {
            uVar9 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1120528,
                                                                        uVar9);
                iVar1 = *piVar3;
                this_00 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)iVar1);
                lVar4 = shared_ptr<ClientNpc>::operator->(this_00);
                if (*(int*)(lVar4 + 420) != field_8488) {
                    DestroyNpc(this, iVar1);
                }
                uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)field_1120520);
        }
        lVar4 = param_2->size();
        lVar5 = param_2->GetTextureAtlas();
        if (lVar4 != lVar5) {
            uVar6 = param_2->size();
            uVar7 = param_2->GetTextureAtlas();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "in.GetPos() == in.GetSize()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_utils.cpp",
                138, "gnp1 pos : %i psize : %i", uVar6, uVar7);
        }
        if (0 < (int)m_nPCCount) {
            uVar9 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1103856,
                                                                        uVar9);
                psVar8 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)*piVar3);
                if (operator==(psVar8, (_func_decltype_nullptr*)0)) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_utils.cpp",
                                    146, "gnp2 pos: %i size: %i", uVar9 & 4294967295, (ulong)m_nPCCount);
                }
                uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)m_nPCCount);
        }
    }

    // 0x1001136e0, 96 bytes, placed by class name and neighbouring functions
    // Client::EnableClanVarValues()
    void Client::EnableClanVarValues() {
        shared_ptr local_28;

        if (operator==((shared_ptr*)field_52528, (_func_decltype_nullptr*)0)) {
            make_shared<game::VarContainerSparse>((jag*)&local_28);
            shared_ptr<game::VarContainerSparse>::operator=((shared_ptr<game::VarContainerSparse>*)field_52528,
                                                            &local_28);
            local_28.~shared_ptr();
        }
    }

    // 0x100117690, 1040 bytes, placed by __FILE__ string
    // Client::GetNPCPosOldVis(core::SuperPacket&)
    void Client::GetNPCPosOldVis(SuperPacket* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        undefined4 uVar5;
        undefined4* puVar6;
        int* piVar7;
        shared_ptr<ClientNpc>* this_02;
        ClientNpc* pCVar8;
        long lVar9;
        undefined8 uVar10;
        ulong uVar11;
        Array<int, eastl::allocator>* this_03;

        param_1->GBitStart();
        uVar3 = param_1->gBit(8);
        if ((int)uVar3 < (int)m_nPCCount) {
            uVar11 = (ulong)(int)uVar3;
            do {
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_1103856, uVar11);
                uVar5 = *puVar6;
                iVar1 = field_1120520;
                field_1120520 = iVar1 + 1;
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_1120528, (long)iVar1);
                *puVar6 = uVar5;
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)m_nPCCount);
        }
        if ((int)m_nPCCount < (int)uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_utils.cpp",
                167, "Received more npcs (%i) than expected (%i)");
        }
        m_nPCCount = 0;
        if (0 < (int)uVar3) {
            this_00 = &field_1103856;
            this_01 = &field_1103888;
            uVar11 = 0;
            do {
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar11);
                iVar1 = *piVar7;
                this_02 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)iVar1);
                pCVar8 = (ClientNpc*)shared_ptr<ClientNpc>::operator*(this_02);
                iVar4 = param_1->gBit(1);
                if (iVar4 == 0) {
                    uVar2 = m_nPCCount;
                    m_nPCCount = uVar2 + 1;
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                            (long)(int)uVar2);
                    *piVar7 = iVar1;
                    *(int*)((long)&pCVar8->field_416 + 4) = field_8488;
                    goto switchD_100117863_default;
                }
                uVar5 = param_1->gBit(2);
                switch (uVar5) {
                case 0:
                    uVar2 = m_nPCCount;
                    m_nPCCount = uVar2 + 1;
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                            (long)(int)uVar2);
                    *piVar7 = iVar1;
                    *(int*)((long)&pCVar8->field_416 + 4) = field_8488;
                    iVar4 = field_1103880;
                    field_1103880 = iVar4 + 1;
                    this_03 = (Array<int, eastl::allocator>*)this_01;
                    break;
                case 1:
                    uVar2 = m_nPCCount;
                    m_nPCCount = uVar2 + 1;
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                            (long)(int)uVar2);
                    *piVar7 = iVar1;
                    *(int*)((long)&pCVar8->field_416 + 4) = field_8488;
                    uVar5 = param_1->gBit(3);
                    pCVar8->MoveCode(uVar5, 1);
                    iVar4 = param_1->gBit(1);
                    if (iVar4 == 1) {
                        iVar4 = field_1103880;
                        field_1103880 = iVar4 + 1;
                        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                                (long)iVar4);
                        *piVar7 = iVar1;
                    }
                    ScriptRunner::SetActiveNPC(iVar1);
                    puVar6 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar8->field_1024);
                    uVar5 = *puVar6;
                    goto LAB_100117a4f;
                case 2:
                    uVar2 = m_nPCCount;
                    m_nPCCount = uVar2 + 1;
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                            (long)(int)uVar2);
                    *piVar7 = iVar1;
                    *(int*)((long)&pCVar8->field_416 + 4) = field_8488;
                    iVar4 = param_1->gBit(1);
                    uVar5 = param_1->gBit(3);
                    if (iVar4 == 1) {
                        pCVar8->MoveCode(uVar5, 2);
                        uVar5 = param_1->gBit(3);
                        uVar10 = 2;
                    } else {
                        uVar10 = 0;
                    }
                    pCVar8->MoveCode(uVar5, uVar10);
                    iVar4 = param_1->gBit(1);
                    if (iVar4 == 1) {
                        iVar4 = field_1103880;
                        field_1103880 = iVar4 + 1;
                        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                                (long)iVar4);
                        *piVar7 = iVar1;
                    }
                    ScriptRunner::SetActiveNPC(iVar1);
                    puVar6 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar8->field_1024);
                    uVar5 = *puVar6;
                LAB_100117a4f:
                    lVar9 = shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar8->field_1024);
                    ScriptRunner::ExecuteScript(50, uVar5, *(undefined4*)(lVar9 + 156), 500000);
                    goto switchD_100117863_default;
                case 3:
                    iVar4 = field_1120520;
                    field_1120520 = iVar4 + 1;
                    this_03 = (Array<int, eastl::allocator>*)&field_1120528;
                    break;
                default:
                    goto switchD_100117863_default;
                }
                piVar7 = (int*)Array<int, eastl::allocator>::operator[](this_03, (long)iVar4);
                *piVar7 = iVar1;
            switchD_100117863_default:
                uVar11 = uVar11 + 1;
            } while (uVar3 != uVar11);
        }
    }

    // 0x100117aa0, 1056 bytes, placed by class name and neighbouring functions
    // Client::GetNPCPosNewVis(bool, core::SuperPacket&)
    void Client::GetNPCPosNewVis(bool param_1, SuperPacket* param_2) {
        uint uVar1;
        undefined4 uVar2;
        shared_ptr<ClientPlayer>* this_00;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        shared_ptr* psVar7;
        shared_ptr<ClientNpc>* psVar8;
        ClientNpc* this_01;
        uint* puVar9;
        SuperPacket* pSVar10;
        SuperPacket* pSVar11;
        Client* pCVar12;
        Client* this_02;
        long lVar13;
        int* piVar14;
        undefined4* puVar15;
        undefined7 in_register_00000031;
        undefined1* this_03;
        array<shared_ptr<ClientNpc>, 65536ul>* this_04;
        undefined1 local_98[16];
        SuperShuffledPacketFactory local_88;
        Array<int, eastl::allocator>* local_78;
        TextureAtlasReference* local_70;
        array<shared_ptr<ClientNpc>, 65536ul>* local_68;
        shared_ptr<ClientPlayer>* local_60;
        Array<int, eastl::allocator>* local_58;
        HighlightManager* local_50;
        int local_40;
        char local_3c;
        uint local_38;
        char local_31;

        _local_3c = (undefined4)CONCAT71(in_register_00000031, param_1);
        this_04 = (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272;
        local_78 = (Array<int, eastl::allocator>*)&field_1103856;
        local_58 = (Array<int, eastl::allocator>*)&field_1103888;
        local_60 = (shared_ptr<ClientPlayer>*)field_52016;
        local_50 = (HighlightManager*)m_highlightManager;
        local_70 = (TextureAtlasReference*)param_2;
        local_68 = this_04;
        do {
            iVar4 = param_2->GetTextureAtlas();
            iVar4 = param_2->BitsLeft(iVar4);
            iVar5 = 3;
            if (27 < iVar4) {
                local_38 = param_2->gBit(16);
                iVar5 = 3;
                if (local_38 != 65535) {
                    psVar7 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](this_04,
                                                                                                 (long)(int)local_38);
                    local_31 = operator==(psVar7, (_func_decltype_nullptr*)0);
                    if ((bool)local_31) {
                        make_shared<ClientNpc, int&>((jag*)&local_88, (int*)&local_38);
                        psVar8 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                            this_04, (long)(int)local_38);
                        shared_ptr<ClientNpc>::operator=(psVar8, (shared_ptr*)&local_88);
                        local_88.~shared_ptr();
                    }
                    psVar8 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                        this_04, (long)(int)local_38);
                    this_01 = (ClientNpc*)shared_ptr<ClientNpc>::operator*(psVar8);
                    uVar3 = local_38;
                    pCVar12 = (Client*)this;
                    uVar1 = ((Client*)this)->m_nPCCount;
                    ((Client*)this)->m_nPCCount = uVar1 + 1;
                    puVar9 = (uint*)Array<int, eastl::allocator>::operator[](local_78, (long)(int)uVar1);
                    *puVar9 = uVar3;
                    *(int*)((long)&this_01->field_416 + 4) = pCVar12->field_8488;
                    new (&local_88) SuperShuffledPacketFactory(param_2);
                    pSVar10 = (SuperPacket*)local_88.p2_alt2();
                    pSVar11 = (SuperPacket*)local_88.p2_alt2();
                    if (local_3c == '\0') {
                        iVar5 = pSVar11->gBit(5);
                        iVar4 = iVar5 + -32;
                        if (iVar5 < 16) {
                            iVar4 = iVar5;
                        }
                    } else {
                        iVar5 = pSVar10->gBit(8);
                        iVar4 = iVar5 + -256;
                        if (iVar5 < 128) {
                            iVar4 = iVar5;
                        }
                    }
                    pSVar10 = (SuperPacket*)local_88.p2_alt2();
                    pSVar11 = (SuperPacket*)local_88.p2_alt2();
                    iVar5 = pSVar10->gBit(1);
                    iVar6 = 0;
                    if (iVar5 == 1) {
                        iVar6 = pSVar11->gBit(32);
                    }
                    this_01->SetCreationCycle(iVar6);
                    pSVar10 = (SuperPacket*)local_88.p2_alt2();
                    local_40 = pSVar10->gBit(1);
                    pSVar10 = (SuperPacket*)local_88.p2_alt2();
                    iVar5 = pSVar10->gBit(3);
                    if (local_31 != '\0') {
                        uVar2 = *(undefined4*)(PTR_FACING_MAP_100ee6b18 + (long)iVar5 * 4);
                        *(undefined4*)&this_01->field_32 = uVar2;
                        *(undefined4*)((long)&this_01->field_424 + 4) = uVar2;
                    }
                    pSVar10 = (SuperPacket*)local_88.p2_alt2();
                    iVar5 = pSVar10->gBit(14);
                    local_98->List(iVar5);
                    this_03 = &this_01->field_1024;
                    shared_ptr<configdecoder::NpcType>::operator=((shared_ptr<configdecoder::NpcType>*)this_03,
                                                                  (shared_ptr*)local_98);
                    local_98->~shared_ptr();
                    pSVar10 = (SuperPacket*)local_88.p2_alt2();
                    iVar5 = pSVar10->gBit(1);
                    uVar1 = local_38;
                    if (iVar5 == 1) {
                        iVar5 = ((Client*)this)->field_1103880;
                        ((Client*)this)->field_1103880 = iVar5 + 1;
                        puVar9 = (uint*)Array<int, eastl::allocator>::operator[](local_58, (long)iVar5);
                        *puVar9 = uVar1;
                    }
                    pCVar12 = (Client*)local_88.p2_alt2();
                    this_02 = (Client*)local_88.p2_alt2();
                    if (local_3c == '\0') {
                        iVar6 = this_02->gBit(5);
                        pCVar12 = this_02;
                        iVar5 = iVar6 + -32;
                        if (iVar6 < 16) {
                            iVar5 = iVar6;
                        }
                    } else {
                        iVar6 = pCVar12->gBit(8);
                        iVar5 = iVar6 + -256;
                        if (iVar6 < 128) {
                            iVar5 = iVar6;
                        }
                    }
                    ResetNpcAnim(pCVar12, this_01);
                    this_00 = local_60;
                    if (*(int*)((long)&this_01->field_432 + 4) == 0) {
                        *(undefined4*)&this_01->field_32 = 0;
                    }
                    lVar13 = shared_ptr<ClientPlayer>::operator->(local_60);
                    piVar14 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar13 + 444), 0);
                    iVar6 = *piVar14;
                    lVar13 = shared_ptr<ClientPlayer>::operator->(this_00);
                    piVar14 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar13 + 484), 0);
                    this_01->Teleport(iVar4 + iVar6, iVar5 + *piVar14, local_40 == 1);
                    ScriptRunner::SetActiveNPC(local_38);
                    this_04 = local_68;
                    if (local_31 != '\0') {
                        psVar7 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                            local_68, (long)(int)local_38);
                        local_50->OnNPCAdded(psVar7);
                        puVar15 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)this_03);
                        uVar2 = *puVar15;
                        lVar13 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)this_03);
                        ScriptRunner::ExecuteScript(35, uVar2, *(undefined4*)(lVar13 + 156), 500000);
                    }
                    puVar15 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)this_03);
                    uVar2 = *puVar15;
                    lVar13 =
                        shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_03);
                    ScriptRunner::ExecuteScript(50, uVar2, *(undefined4*)(lVar13 + 156));
                    iVar5 = 0;
                    param_2 = (SuperPacket*)local_70;
                }
            }
        } while (iVar5 == 0);
        param_2->GBitEnd();
    }

    // 0x100117ec0, 6384 bytes, placed by __FILE__ string
    // Client::GetNPCPosExtended(core::SuperPacket&)
    void Client::GetNPCPosExtended(SuperPacket* param_1) {
        bool bVar1;
        byte bVar2;
        undefined1 uVar3;
        char cVar4;
        uchar uVar5;
        ushort uVar6;
        undefined2 uVar7;
        ushort uVar8;
        short sVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        uint uVar13;
        int iVar14;
        undefined4 uVar15;
        int* piVar16;
        shared_ptr* this_00;
        ShuffledPacket3* pSVar17;
        ShuffledPacket2* pSVar18;
        ShuffledPacket4* pSVar19;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar20;
        ulong uVar21;
        uint* puVar22;
        long lVar23;
        undefined2* puVar24;
        ShuffledPacket3* pSVar25;
        ShuffledPacket4* pSVar26;
        undefined8 uVar27;
        ShuffledPacket4* pSVar28;
        ShuffledPacket4* this_01;
        int* piVar29;
        int* piVar30;
        undefined4* puVar31;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar32;
        ShuffledPacket2* this_02;
        ulong uVar33;
        ulong uVar34;
        ClientNpc* pCVar35;
        int iVar36;
        Client* pCVar37;
        uint uVar38;
        undefined1 local_1b8[16];
        undefined1 local_1a8[32];
        Array<int, eastl::allocator>* local_188;
        array<shared_ptr<ClientNpc>, 65536ul>* local_180;
        SuperPacket* local_178;
        Array<short, eastl::allocator> local_170[24];
        ShuffledPacket3* local_158;
        ShuffledPacket3* local_150;
        ShuffledPacket4* local_148;
        ShuffledPacket2* local_140;
        ShuffledPacket4* local_138;
        ShuffledPacket3* local_130;
        ShuffledPacket3* local_128;
        SuperShuffledPacketFactory local_120;
        ShuffledPacket4* local_110;
        ShuffledPacket2* local_108;
        ShuffledPacket4* local_f8;
        ShuffledPacket3* local_f0;
        ShuffledPacket3* local_e8;
        ShuffledPacket3* local_e0;
        ClientNpc* local_d8;
        uint local_cc;
        Array<short, eastl::allocator> local_c8[72];
        vector<int, eastl::allocator> local_80[72];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (0 < field_1103880) {
            local_188 = (Array<int, eastl::allocator>*)&field_1103888;
            local_180 = (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272;
            uVar21 = 0;
            local_178 = param_1;
            do {
                local_1a8._16_8_ = uVar21;
                piVar16 = (int*)Array<int, eastl::allocator>::operator[](local_188, uVar21);
                local_128 = (ShuffledPacket3*)CONCAT44(local_128._4_4_, *piVar16);
                this_00 =
                    (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](local_180, (long)*piVar16);
                bVar1 = operator!=(this_00, (_func_decltype_nullptr*)0);
                if (!bVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_npc[id] != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_utils.cpp",
                              384, (char*)0);
                }
                local_d8 = (ClientNpc*)shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)this_00);
                bVar2 = param_1->g1();
                uVar38 = (uint)bVar2;
                if ((bVar2 & 8) != 0) {
                    uVar3 = param_1->g1();
                    uVar38 = (uint)CONCAT11(uVar3, bVar2);
                }
                if ((uVar38 & 2048) != 0) {
                    bVar2 = param_1->g1();
                    uVar38 = uVar38 | (uint)bVar2 << 16;
                }
                new (&local_120) SuperShuffledPacketFactory(param_1);
                local_e8 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar17 = (ShuffledPacket3*)local_120.gSmarts();
                local_158 = (ShuffledPacket3*)local_120.gSmarts();
                local_150 = (ShuffledPacket3*)local_120.gSmarts();
                local_148 = (ShuffledPacket4*)local_120.gSmarts();
                local_140 = (ShuffledPacket2*)local_120.gSmarts();
                local_138 = (ShuffledPacket4*)local_120.gSmarts();
                local_e0 = (ShuffledPacket3*)local_120.gSmarts();
                local_1a8._24_8_ = local_120.p2_alt2();
                pSVar18 = (ShuffledPacket2*)local_120.gSmarts();
                pSVar19 = (ShuffledPacket4*)local_120.gSmarts();
                local_f8 = (ShuffledPacket4*)local_120.gSmarts();
                local_f0 = (ShuffledPacket3*)local_120.p2_alt2();
                local_130 = (ShuffledPacket3*)local_120.p2_alt2();
                local_cc = uVar38;
                if ((char)uVar38 < '\0') {
                    local_110 = pSVar19;
                    local_108 = pSVar18;
                    bVar2 = local_e8->g1();
                    if (bVar2 != 0) {
                        uVar38 = (uint)bVar2;
                        local_e8 = pSVar17;
                        do {
                            iVar14 = local_e8->gSmarts();
                            iVar36 = -1;
                            if (iVar14 == 32766) {
                                iVar11 = -1;
                                iVar12 = -1;
                                iVar14 = -1;
                            } else if (iVar14 == 32767) {
                                iVar14 = local_158->gSmarts();
                                iVar11 = local_150->gSmarts();
                                iVar12 = local_148->gSmarts();
                                iVar36 = local_140->gSmarts();
                            } else {
                                iVar11 = local_138->gSmarts();
                                iVar12 = -1;
                            }
                            iVar10 = local_e0->gSmarts();
                            local_d8->AddHitmark(iVar14, iVar11, iVar12, iVar36, ((Client*)this)->field_8488, iVar10);
                            uVar38 = uVar38 - 1;
                        } while (uVar38 != 0);
                    }
                    bVar2 = local_1a8._24_8_->g1();
                    if (bVar2 != 0) {
                        uVar38 = (uint)bVar2;
                        pSVar19 = local_110;
                        pSVar18 = local_108;
                        do {
                            while (true) {
                                iVar14 = pSVar18->gSmarts();
                                iVar36 = pSVar19->gSmarts();
                                if (iVar36 == 32767)
                                    break;
                                iVar11 = local_f8->gSmarts();
                                bVar2 = local_f0->g1();
                                uVar13 = (uint)bVar2;
                                if (0 < iVar36) {
                                    bVar2 = local_130->g1();
                                }
                                local_d8->AddHeadbar(iVar14, ((Client*)this)->field_8488, iVar36, iVar11, uVar13,
                                                     (uint)bVar2);
                                uVar38 = uVar38 - 1;
                                pSVar19 = local_110;
                                pSVar18 = local_108;
                                if (uVar38 == 0)
                                    goto LAB_1001180d1;
                            }
                            local_d8->ClearHeadbar(iVar14);
                            uVar38 = uVar38 - 1;
                        } while (uVar38 != 0);
                    }
                }
            LAB_1001180d1:
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                pSVar18 = (ShuffledPacket2*)local_120.p2_alt2();
                pSVar19 = (ShuffledPacket4*)local_120.p2_alt2();
                local_e0 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e8 = (ShuffledPacket3*)local_120.p2_alt2();
                local_f8 = (ShuffledPacket4*)local_120.p2_alt2();
                if ((local_cc & 512) != 0) {
                    local_f0 = (ShuffledPacket3*)&local_d8->field_1024;
                    bVar1 = local_f0->operator_cast_to_bool();
                    if (!bVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("npcType",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_utils.cpp",
                                  612, (char*)0);
                    }
                    uVar21 = pPVar20->g1();
                    if ((uVar21 & 1) == 0) {
                        eastl::vector<int, eastl::allocator>::vector(local_80);
                        if ((uVar21 & 2) != 0) {
                            bVar2 = pSVar18->g1();
                            eastl::vector<int, eastl::allocator>::resize((ulong)local_80);
                            if (bVar2 != 0) {
                                uVar33 = 0;
                                do {
                                    uVar6 = pSVar19->g2();
                                    puVar22 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_80, uVar33);
                                    uVar38 = (uint)uVar6;
                                    if (uVar6 == 65535) {
                                        uVar38 = 4294967295;
                                    }
                                    *puVar22 = uVar38;
                                    uVar33 = uVar33 + 1;
                                } while (bVar2 != uVar33);
                            }
                        }
                        Array<short, eastl::allocator>::Array(local_c8);
                        if ((uVar21 & 4) != 0) {
                            lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)local_f0);
                            uVar33 = ((lVar23 + 184))->end();
                            local_c8->set_min_size(uVar33, 0);
                            if (uVar33 != 0) {
                                uVar34 = 0;
                                do {
                                    uVar7 = local_e0->g2();
                                    puVar24 = (undefined2*)Array<short, eastl::allocator>::operator[](local_c8, uVar34);
                                    *puVar24 = uVar7;
                                    uVar34 = uVar34 + 1;
                                } while (uVar33 != uVar34);
                            }
                        }
                        Array<short, eastl::allocator>::Array(local_170);
                        if ((uVar21 & 8) != 0) {
                            lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)local_f0);
                            uVar33 = ((lVar23 + 232))->end();
                            local_170->set_min_size(uVar33, 0);
                            if (uVar33 != 0) {
                                uVar34 = 0;
                                do {
                                    uVar7 = local_e8->g2();
                                    puVar24 =
                                        (undefined2*)Array<short, eastl::allocator>::operator[](local_170, uVar34);
                                    *puVar24 = uVar7;
                                    uVar34 = uVar34 + 1;
                                } while (uVar33 != uVar34);
                            }
                        }
                        if ((uVar21 & 16) == 0) {
                            bVar1 = false;
                        } else {
                            cVar4 = local_f8->g1();
                            bVar1 = cVar4 == '\x01';
                        }
                        local_d8->SetHeadCustomisation(local_80, local_c8, local_170, bVar1);
                        local_170->~Array();
                        local_c8->~Array();
                        eastl::vector<int, eastl::allocator>::~vector(local_80);
                    } else {
                        local_d8->ClearHeadCustomisation();
                    }
                }
                uVar38 = local_cc;
                pSVar17 = (ShuffledPacket3*)local_120.p2_alt2();
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                pSVar25 = (ShuffledPacket3*)local_120.p2_alt2();
                if ((uVar38 & 32) != 0) {
                    uVar6 = pSVar17->g2();
                    uVar8 = pPVar20->g2();
                    cVar4 = pSVar25->g1();
                    uVar38 = local_cc;
                    local_d8->field_352 = cVar4 != '\0';
                    if (((Client*)this)->m_serverMajorVersion < 212) {
                        iVar36 = (((Client*)this)->field_53220 * 2 - (uint)uVar6) * 64 + local_d8->field_24;
                        iVar14 = (((Client*)this)->field_53224 * 2 - (uint)uVar8) * 64 + local_d8->field_28;
                        if (iVar36 != 0 || iVar14 != 0) {
                            uVar15 = game::Conversion::Atan2InOldJagexAngles(iVar36, iVar14);
                            local_d8->field_336 = uVar15;
                        }
                    } else {
                        (&local_d8->field_340, 0, (uint)uVar6, (uint)uVar8)->Set();
                        uVar38 = local_cc;
                    }
                }
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                pSVar19 = (ShuffledPacket4*)local_120.p2_alt2();
                if ((uVar38 & 64) != 0) {
                    uVar6 = pPVar20->g2();
                    uVar13 = (uint)uVar6;
                    if (uVar6 == 65535) {
                        uVar13 = 4294967295;
                    }
                    bVar2 = pSVar19->g1();
                    if ((uVar13 == local_d8->field_372) && (uVar13 != 4294967295)) {
                        if (((Client*)this)->field_54760 != '\0') {
                            uVar27 = logger::default_logger();
                            logger::Logger::Log(uVar27, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_utils.cpp",
                                                407, "Duplicate npc anim: %d delay:%d", uVar13, (uint)bVar2);
                        }
                        local_80->List(uVar13);
                        lVar23 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)local_80);
                        iVar14 = *(int*)(lVar23 + 256);
                        local_80->~shared_ptr();
                        uVar38 = local_cc;
                        if (iVar14 == 2) {
                            *(undefined4*)((long)&local_d8->field_384 + 4) = 0;
                        } else if (iVar14 == 1) {
                            local_d8->field_376 = 0;
                            *(uint*)&local_d8->field_384 = (uint)bVar2;
                            *(undefined4*)((long)&local_d8->field_384 + 4) = 0;
                        }
                    } else {
                        local_e0 = (ShuffledPacket3*)CONCAT44(local_e0._4_4_, (uint)bVar2);
                        bVar1 = true;
                        if (local_d8->field_372 != 4294967295 && uVar6 != 65535) {
                            local_1b8->List(uVar13);
                            lVar23 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)local_1b8);
                            iVar14 = *(int*)(lVar23 + 228);
                            local_1a8->List(local_d8->field_372);
                            lVar23 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)local_1a8);
                            bVar1 = *(int*)(lVar23 + 228) <= iVar14;
                            local_1a8->~shared_ptr();
                            local_1b8->~shared_ptr();
                        }
                        uVar38 = local_cc;
                        uVar15 = local_e0._0_4_;
                        if (bVar1) {
                            if (((Client*)this)->field_54760 != '\0') {
                                uVar27 = logger::default_logger();
                                logger::Logger::Log(uVar27, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client_utils.cpp",
                                                    423, "Got npc anim: %d delay:%d", uVar13, uVar15);
                            }
                            local_d8->field_372 = uVar13;
                            local_d8->field_376 = 0;
                            *(undefined4*)&local_d8->field_384 = uVar15;
                            *(undefined4*)((long)&local_d8->field_384 + 4) = 0;
                            *(uint*)((long)&local_d8->field_536 + 4) = local_d8->field_440;
                        } else if (((Client*)this)->field_54760 != '\0') {
                            uVar27 = logger::default_logger();
                            logger::Logger::Log(uVar27, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_utils.cpp",
                                                433, "Ignored npc anim: %d", uVar13);
                        }
                    }
                }
                pSVar17 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar19 = (ShuffledPacket4*)local_120.p2_alt2();
                pSVar26 = (ShuffledPacket4*)local_120.p2_alt2();
                local_e0 = (ShuffledPacket3*)local_120.p2_alt2();
                if (((uVar38 & 131072) != 0) && (bVar2 = pSVar17->g1(), bVar2 != 0)) {
                    uVar38 = (uint)bVar2;
                    do {
                        bVar2 = pSVar19->g1();
                        uVar6 = pSVar26->g2();
                        uVar13 = local_e0->g4();
                        local_d8->AddSpotAnim((uint)bVar2, (uint)uVar6, (int)uVar13 >> 16, uVar13 & 65535,
                                              ((Client*)this)->field_8488);
                        uVar38 = uVar38 - 1;
                    } while (uVar38 != 0);
                }
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                if ((local_cc & 4) != 0) {
                    uVar6 = pPVar20->g2();
                    pCVar37 = (Client*)local_80;
                    pCVar37->List((uint)uVar6);
                    pCVar35 = local_d8;
                    shared_ptr<configdecoder::NpcType>::operator=(
                        (shared_ptr<configdecoder::NpcType>*)&local_d8->field_1024, (shared_ptr*)pCVar37);
                    pCVar37->~shared_ptr();
                    ResetNpcAnim(pCVar37, pCVar35);
                    pCVar35->ClearHeadIconCustomisation();
                }
                pSVar18 = (ShuffledPacket2*)local_120.p2_alt2();
                pSVar19 = (ShuffledPacket4*)local_120.p2_alt2();
                if ((local_cc & 16) != 0) {
                    uVar6 = pSVar18->g2();
                    pCVar35 = local_d8;
                    local_d8->field_328 = (uint)uVar6;
                    bVar2 = pSVar19->g1();
                    iVar14 = (uint)bVar2 * 65536 + pCVar35->field_328;
                    if (iVar14 == 16777215) {
                        iVar14 = -1;
                    }
                    pCVar35->field_328 = iVar14;
                    if (((Client*)this)->field_54760 != '\0') {
                        uVar27 = logger::default_logger();
                        logger::Logger::Log(uVar27, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_utils.cpp",
                                            448, "Got npc faceentity: %d", local_d8->field_328);
                    }
                }
                pSVar19 = (ShuffledPacket4*)local_120.p2_alt2();
                pSVar26 = (ShuffledPacket4*)local_120.p2_alt2();
                pSVar17 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e8 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e0 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar28 = (ShuffledPacket4*)local_120.p2_alt2();
                this_01 = (ShuffledPacket4*)local_120.p2_alt2();
                if ((local_cc & 4096) != 0) {
                    cVar4 = pSVar19->g1s();
                    pCVar35 = local_d8;
                    *(int*)&local_d8->field_392 = (int)cVar4;
                    local_f8 = pSVar28;
                    cVar4 = pSVar26->g1s();
                    *(int*)&pCVar35->field_400 = (int)cVar4;
                    cVar4 = pSVar17->g1s();
                    *(int*)((long)&pCVar35->field_392 + 4) = (int)cVar4;
                    cVar4 = local_e8->g1s();
                    *(int*)((long)&pCVar35->field_400 + 4) = (int)cVar4;
                    uVar6 = local_e0->g2();
                    pCVar37 = (Client*)this;
                    *(uint*)&pCVar35->field_408 = (uint)uVar6 + ((Client*)this)->field_8488;
                    uVar6 = local_f8->g2();
                    *(uint*)((long)&pCVar35->field_408 + 4) = (uint)uVar6 + pCVar37->field_8488;
                    uVar6 = this_01->g2();
                    *(uint*)&pCVar35->field_416 = (uint)uVar6;
                    pCVar35->field_440 = 1;
                    *(undefined4*)((long)&pCVar35->field_536 + 4) = 0;
                    piVar29 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&pCVar35->field_444, 0);
                    *(int*)&pCVar35->field_392 = *(int*)&pCVar35->field_392 + *piVar29;
                    piVar30 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&pCVar35->field_484, 0);
                    *(int*)&pCVar35->field_400 = *(int*)&pCVar35->field_400 + *piVar30;
                    piVar16 = (int*)((long)&pCVar35->field_392 + 4);
                    *piVar16 = *piVar16 + *piVar29;
                    piVar16 = (int*)((long)&pCVar35->field_400 + 4);
                    *piVar16 = *piVar16 + *piVar30;
                    ScriptRunner::SetActiveNPC((int)local_128);
                    puVar31 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                    uVar15 = *puVar31;
                    lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                    ScriptRunner::ExecuteScript(50, uVar15, *(undefined4*)(lVar23 + 156));
                    if (pCVar37->field_54760 != '\0') {
                        uVar27 = logger::default_logger();
                        logger::Logger::Log(
                            uVar27, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "client_utils.cpp",
                            574, "Got npc exactmove: (%i,%i) -> (%i,%i) for times (%i) -> (%i) facing %i",
                            *(undefined4*)&local_d8->field_392, *(undefined4*)&local_d8->field_400,
                            *(undefined4*)((long)&local_d8->field_392 + 4),
                            *(undefined4*)((long)&local_d8->field_400 + 4), *(undefined4*)&local_d8->field_408,
                            *(undefined4*)((long)&local_d8->field_408 + 4), *(undefined4*)&local_d8->field_416);
                    }
                }
                pSVar19 = (ShuffledPacket4*)local_120.p2_alt2();
                pSVar26 = (ShuffledPacket4*)local_120.p2_alt2();
                pSVar17 = (ShuffledPacket3*)local_120.p2_alt2();
                local_140 = (ShuffledPacket2*)local_120.p2_alt2();
                local_148 = (ShuffledPacket4*)local_120.p2_alt2();
                local_150 = (ShuffledPacket3*)local_120.p2_alt2();
                local_158 = (ShuffledPacket3*)local_120.p2_alt2();
                local_110 = (ShuffledPacket4*)local_120.p2_alt2();
                local_138 = (ShuffledPacket4*)local_120.p2_alt2();
                local_108 = (ShuffledPacket2*)local_120.p2_alt2();
                local_f0 = (ShuffledPacket3*)local_120.p2_alt2();
                local_f8 = (ShuffledPacket4*)local_120.p2_alt2();
                local_e8 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e0 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar25 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar18 = (ShuffledPacket2*)local_120.p2_alt2();
                if ((local_cc & 65536) != 0) {
                    local_130 = (ShuffledPacket3*)pSVar18;
                    local_128 = pSVar25;
                    uVar38 = pSVar19->g4s();
                    pCVar35 = local_d8;
                    if ((uVar38 & 1) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&local_d8->field_1024);
                        uVar13 = *(uint*)(lVar23 + 100);
                    } else {
                        uVar6 = pSVar26->g2();
                        uVar13 = (uint)uVar6;
                        pCVar35 = local_d8;
                    }
                    pCVar35->field_52 = uVar13;
                    if ((uVar38 & 2) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 104);
                    } else {
                        uVar6 = pSVar17->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_56 = uVar13;
                    if ((uVar38 & 4) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 108);
                    } else {
                        uVar6 = local_140->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_60 = uVar13;
                    if ((uVar38 & 8) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 112);
                    } else {
                        uVar6 = local_148->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_64 = uVar13;
                    if ((uVar38 & 16) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 116);
                    } else {
                        uVar6 = local_150->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_68 = uVar13;
                    if ((uVar38 & 32) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 120);
                    } else {
                        uVar6 = local_158->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_72 = uVar13;
                    if ((uVar38 & 64) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 124);
                    } else {
                        uVar6 = local_110->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_76 = uVar13;
                    if ((char)uVar38 < '\0') {
                        uVar6 = local_138->g2();
                        uVar13 = (uint)uVar6;
                    } else {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 128);
                    }
                    pCVar35->field_80 = uVar13;
                    if ((uVar38 & 256) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 132);
                    } else {
                        uVar6 = local_108->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_84 = uVar13;
                    if ((uVar38 & 512) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 136);
                    } else {
                        uVar6 = local_f0->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_88 = uVar13;
                    if ((uVar38 & 1024) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 140);
                    } else {
                        uVar6 = local_f8->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_92 = uVar13;
                    if ((uVar38 & 2048) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 144);
                    } else {
                        uVar6 = local_e8->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_96 = uVar13;
                    if ((uVar38 & 4096) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 148);
                    } else {
                        uVar6 = local_e0->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_100 = uVar13;
                    if ((uVar38 & 8192) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar13 = *(uint*)(lVar23 + 152);
                    } else {
                        uVar6 = local_128->g2();
                        uVar13 = (uint)uVar6;
                    }
                    pCVar35->field_104 = uVar13;
                    if ((uVar38 & 16384) == 0) {
                        lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)&pCVar35->field_1024);
                        uVar38 = *(uint*)(lVar23 + 96);
                    } else {
                        uVar6 = local_130->g2();
                        uVar38 = (uint)uVar6;
                    }
                    pCVar35->field_48 = uVar38;
                }
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                if ((local_cc & 262144) != 0) {
                    uVar38 = pPVar20->g1();
                    eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)local_80);
                    eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)local_c8);
                    uVar21 = 0;
                    do {
                        if (((uVar38 & 255) >> ((uint)uVar21 & 31) & 1) == 0) {
                            puVar31 = (undefined4*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    local_80,
                                uVar21);
                            *puVar31 = 4294967295;
                            puVar31 = (undefined4*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    local_c8,
                                uVar21);
                            *puVar31 = 4294967295;
                        } else {
                            uVar15 = pPVar20->gSmart2or4s();
                            puVar31 = (undefined4*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    local_80,
                                uVar21);
                            *puVar31 = uVar15;
                            sVar9 = pPVar20->gSmart1Or2Minus1();
                            piVar16 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    local_c8,
                                uVar21);
                            *piVar16 = (int)sVar9;
                        }
                        uVar21 = uVar21 + 1;
                    } while (uVar21 != 8);
                    local_d8->SetHeadIcons(local_80, local_c8);
                    local_c8->~fixed_vector();
                    local_80->~fixed_vector();
                }
                uVar38 = local_cc;
                bVar1 = (bool)local_120.p2_alt2();
                if ((short)uVar38 < 0) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_80, bVar1);
                    eastl::string::operator=((eastl::string*)&local_d8->field_992, (basic_string*)local_80);
                    local_80->~basic_string();
                }
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                pPVar32 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                if ((uVar38 & 2) != 0) {
                    pPVar20->g2();
                    pPVar32->g4();
                }
                bVar1 = (bool)local_120.p2_alt2();
                if ((uVar38 & 1) != 0) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_80, bVar1);
                    pCVar35 = local_d8;
                    eastl::string::operator=((eastl::string*)&local_d8->field_112, (basic_string*)local_80);
                    local_80->~basic_string();
                    *(undefined4*)&pCVar35->field_148 = 100;
                }
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                pPVar32 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                local_e8 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e0 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar17 = (ShuffledPacket3*)local_120.p2_alt2();
                pSVar18 = (ShuffledPacket2*)local_120.p2_alt2();
                pCVar37 = (Client*)this;
                if ((uVar38 & 8192) != 0) {
                    iVar14 = ((Client*)this)->field_8488;
                    local_f8 = (ShuffledPacket4*)pSVar18;
                    local_f0 = pSVar17;
                    uVar6 = pPVar20->g2();
                    pCVar35 = local_d8;
                    *(uint*)((long)&local_d8->field_544 + 4) = (uint)uVar6 + iVar14;
                    iVar14 = pCVar37->field_8488;
                    uVar6 = pPVar32->g2();
                    pCVar35->field_552 = (uint)uVar6 + iVar14;
                    uVar3 = local_e8->g1s();
                    pCVar35->field_556 = uVar3;
                    uVar3 = local_e0->g1s();
                    pCVar35->field_557 = uVar3;
                    uVar3 = local_f0->g1s();
                    pCVar35->field_558 = uVar3;
                    uVar3 = local_f8->g1s();
                    pCVar35->field_559 = uVar3;
                }
                pSVar18 = (ShuffledPacket2*)local_120.p2_alt2();
                this_02 = (ShuffledPacket2*)local_120.p2_alt2();
                pSVar17 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e0 = (ShuffledPacket3*)local_120.p2_alt2();
                local_e8 = (ShuffledPacket3*)local_120.p2_alt2();
                local_f8 = (ShuffledPacket4*)local_120.p2_alt2();
                if ((local_cc & 256) != 0) {
                    local_108 = (ShuffledPacket2*)&local_d8->field_1024;
                    bVar1 = local_108->operator_cast_to_bool();
                    if (!bVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("npcType",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_utils.cpp",
                                  678, (char*)0);
                    }
                    bVar2 = pSVar18->g1();
                    if ((bVar2 & 1) == 0) {
                        eastl::vector<int, eastl::allocator>::vector(local_80);
                        local_f0 = (ShuffledPacket3*)CONCAT71(local_f0._1_7_, bVar2);
                        if ((bVar2 & 2) != 0) {
                            bVar2 = this_02->g1();
                            eastl::vector<int, eastl::allocator>::resize((ulong)local_80);
                            if (bVar2 != 0) {
                                uVar21 = 0;
                                uVar33 = 1;
                                do {
                                    uVar6 = pSVar17->g2();
                                    puVar22 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_80, uVar21);
                                    uVar38 = (uint)uVar6;
                                    if (uVar6 == 65535) {
                                        uVar38 = 4294967295;
                                    }
                                    *puVar22 = uVar38;
                                    bVar1 = uVar33 < bVar2;
                                    uVar21 = uVar33;
                                    uVar33 = (ulong)((int)uVar33 + 1);
                                } while (bVar1);
                            }
                        }
                        Array<short, eastl::allocator>::Array(local_c8);
                        if (((ulong)local_f0 & 4) != 0) {
                            lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)local_108);
                            uVar21 = ((lVar23 + 184))->end();
                            local_c8->set_min_size(uVar21, 0);
                            if (uVar21 != 0) {
                                uVar33 = 0;
                                do {
                                    uVar7 = local_e0->g2();
                                    puVar24 = (undefined2*)Array<short, eastl::allocator>::operator[](local_c8, uVar33);
                                    *puVar24 = uVar7;
                                    uVar33 = uVar33 + 1;
                                } while (uVar21 != uVar33);
                            }
                        }
                        Array<short, eastl::allocator>::Array(local_170);
                        if (((ulong)local_f0 & 8) != 0) {
                            lVar23 = shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)local_108);
                            uVar21 = ((lVar23 + 232))->end();
                            local_170->set_min_size(uVar21, 0);
                            if (uVar21 != 0) {
                                uVar33 = 0;
                                do {
                                    uVar7 = local_e8->g2();
                                    puVar24 =
                                        (undefined2*)Array<short, eastl::allocator>::operator[](local_170, uVar33);
                                    *puVar24 = uVar7;
                                    uVar33 = uVar33 + 1;
                                } while (uVar21 != uVar33);
                            }
                        }
                        if (((ulong)local_f0 & 16) == 0) {
                            bVar1 = false;
                        } else {
                            cVar4 = local_f8->g1();
                            bVar1 = cVar4 == '\x01';
                        }
                        local_d8->SetBodyCustomisation(local_80, local_c8, local_170, bVar1);
                        local_170->~Array();
                        local_c8->~Array();
                        eastl::vector<int, eastl::allocator>::~vector(local_80);
                    } else {
                        local_d8->ClearBodyCustomisation();
                    }
                }
                uVar38 = local_cc;
                pSVar18 = (ShuffledPacket2*)local_120.p2_alt2();
                if ((uVar38 & 16384) != 0) {
                    uVar5 = pSVar18->g1();
                    local_d8->SetEnabledOpsBitMask(uVar5);
                }
                pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_120.p2_alt2();
                pCVar37 = (Client*)this;
                param_1 = local_178;
                if ((uVar38 & 1024) != 0) {
                    uVar15 = pPVar20->g4s();
                    *(undefined4*)&local_d8->field_544 = uVar15;
                }
                uVar21 = local_1a8._16_8_ + 1;
            } while ((long)uVar21 < (long)pCVar37->field_1103880);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001197b0, 352 bytes, placed by class name and neighbouring functions
    // Client::DestroyNpc(int)
    void Client::DestroyNpc(int param_1) {
        undefined4 uVar1;
        shared_ptr<ClientNpc>* this_00;
        long lVar2;
        undefined4* puVar3;
        int* piVar4;
        int* piVar5;
        vector<unsigned long, BucketAllocatorEASTL> local_50[24];
        shared_ptr local_38;

        ScriptRunner::SetActiveNPC(param_1);
        this_00 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
            (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_1);
        lVar2 = shared_ptr<ClientNpc>::operator->(this_00);
        puVar3 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
            (shared_ptr<configdecoder::NpcType>*)(lVar2 + 1024));
        uVar1 = *puVar3;
        lVar2 = shared_ptr<ClientNpc>::operator->(this_00);
        lVar2 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)(lVar2 + 1024));
        ScriptRunner::ExecuteScript(36, uVar1, *(undefined4*)(lVar2 + 156), 500000);
        shared_ptr<ClientNpc>::operator->(this_00);
        local_50->GetScriptedOverlays();
        piVar4 = (int*)local_50->HeapBeginPtr();
        piVar5 = (int*)local_50->end();
        if (piVar4 != piVar5) {
            do {
                (m_entityOverlays, *piVar4)->DestroyOverlay();
                piVar4 = piVar4 + 2;
            } while (piVar4 != piVar5);
        }
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        lVar2 = shared_ptr<ClientNpc>::operator->(this_00);
        shared_ptr<configdecoder::NpcType>::operator=((shared_ptr<configdecoder::NpcType>*)(lVar2 + 1024), &local_38);
        local_38.~shared_ptr();
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<ClientNpc>::operator=(this_00, &local_38);
        local_38.~shared_ptr();
        eastl::vector<unsigned long, BucketAllocatorEASTL>::~vector(local_50);
    }

    // 0x100119c70, 288 bytes, placed by class name and neighbouring functions
    // Client::ResetNpcAnim(ClientNpc&)
    void Client::ResetNpcAnim(ClientNpc* param_1) {
        undefined1* this_00;
        long lVar1;

        this_00 = &param_1->field_1024;
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_40 = *(int*)(lVar1 + 40);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        *(undefined4*)((long)&param_1->field_432 + 4) = *(undefined4*)(lVar1 + 484);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_60 = *(undefined4*)(lVar1 + 108);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_64 = *(undefined4*)(lVar1 + 112);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_68 = *(undefined4*)(lVar1 + 116);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_72 = *(undefined4*)(lVar1 + 120);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_48 = *(undefined4*)(lVar1 + 96);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_52 = *(undefined4*)(lVar1 + 100);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_56 = *(undefined4*)(lVar1 + 104);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_76 = *(undefined4*)(lVar1 + 124);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_80 = *(undefined4*)(lVar1 + 128);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_84 = *(undefined4*)(lVar1 + 132);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_88 = *(undefined4*)(lVar1 + 136);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_92 = *(undefined4*)(lVar1 + 140);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_96 = *(undefined4*)(lVar1 + 144);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_100 = *(undefined4*)(lVar1 + 148);
        lVar1 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        param_1->field_104 = *(undefined4*)(lVar1 + 152);
    }

    // 0x10011a8c0, 960 bytes, placed by __FILE__ string
    // Client::OnLoadLocation(LocInfo const&)
    void Client::OnLoadLocation(LocInfo* param_1) {
        int iVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        int* piVar9;
        long lVar10;
        LocType* this_00;
        Minimap* this_01;
        uint uVar11;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];

        cVar2 = param_1->IsSet();
        if (cVar2 != '\0') {
            uVar5 = param_1->GetRot();
            uVar6 = param_1->GetDirectionMask();
            uVar7 = param_1->GetShape();
            local_40->GetCompletionTask();
            piVar9 =
                (int*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_40);
            iVar1 = *piVar9;
            local_40->~shared_ptr();
            local_40->GetCompletionTask();
            lVar10 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_40);
            uVar5 = uVar5 & 255;
            iVar8 = *(int*)(lVar10 + 200);
            local_40->~shared_ptr();
            uVar11 = uVar7 & 255;
            if (iVar8 != 0) {
                uVar3 = param_1->GetStopExponent();
                switch (uVar3) {
                case 0:
                    iVar8 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
                    dash3d::world::GetWall((int)local_40, iVar8, uVar11);
                    highlight::HighlightManager::OnWallLocAdded((shared_ptr*)m_highlightManager, (int)local_40, iVar1,
                                                                uVar7 & 255, uVar5);
                    local_40->~shared_ptr();
                    break;
                case 1:
                    iVar8 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
                    dash3d::world::GetDecor((int)local_40, iVar8, uVar11);
                    highlight::HighlightManager::OnDecorLocAdded((shared_ptr*)m_highlightManager, (int)local_40, iVar1,
                                                                 uVar11, uVar5);
                    local_40->~shared_ptr();
                    break;
                case 2:
                    iVar8 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
                    dash3d::world::GetScene((int)local_40, iVar8, uVar11);
                    highlight::HighlightManager::OnSceneryLocAdded((shared_ptr*)m_highlightManager, (int)local_40,
                                                                   iVar1, uVar11, uVar5);
                    local_40->~shared_ptr();
                    break;
                case 3:
                    iVar8 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
                    dash3d::world::GetGroundDecor((int)local_40, iVar8, uVar11);
                    highlight::HighlightManager::OnGroundDecorLocAdded((shared_ptr*)m_highlightManager, (int)local_40,
                                                                       iVar1, uVar11, uVar5);
                    local_40->~shared_ptr();
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_utils.cpp",
                                    837, "Invalid loc layer");
                }
                ScriptRunner::SetActiveLoc(param_1);
                local_40->GetCompletionTask();
                lVar10 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_40);
                ScriptRunner::ExecuteScript(37, iVar1, *(undefined4*)(lVar10 + 440), 500000);
                local_40->~shared_ptr();
            }
            local_40->GetCompletionTask();
            this_00 =
                (LocType*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_40);
            cVar2 = this_00->HasBgSound();
            local_40->~shared_ptr();
            if (cVar2 != '\0') {
                local_40->GetCompletionTask();
                bVar4 = param_1->GetDeceleration();
                bgsound::AddSound(uVar11, uVar5, uVar6 & 255, (shared_ptr*)local_40, (uint)bVar4);
                local_40->~shared_ptr();
            }
            this_01 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
            local_40->GetCompletionTask();
            lVar10 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_40);
            this_01->AddMelIcon(uVar11, uVar5, uVar6 & 255, *(int*)(lVar10 + 432));
            local_40->~shared_ptr();
        }
    }

    // 0x10011ad90, 352 bytes, placed by class name and neighbouring functions
    // Client::LocChangeSetOld(LocChange&)
    void Client::LocChangeSetOld(LocChange* param_1) {
        char cVar1;
        uint uVar2;
        undefined4 uVar3;
        world* pwVar4;
        longlong lVar5;
        uint uVar6;

        if (param_1->field_12 == '\0') {
            pwVar4 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar5 = pwVar4->WallType(*(int*)param_1, *(int*)&param_1->field_4, *(int*)&param_1->field_8);
            cVar1 = param_1->field_12;
        } else {
            lVar5 = 0;
            cVar1 = param_1->field_12;
        }
        if (cVar1 == '\x01') {
            pwVar4 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar5 = pwVar4->DecorType(*(int*)param_1, *(int*)&param_1->field_4, *(int*)&param_1->field_8);
        }
        if (param_1->field_12 == '\x02') {
            pwVar4 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar5 = pwVar4->SceneType(*(int*)param_1, *(int*)&param_1->field_4, *(int*)&param_1->field_8);
            cVar1 = param_1->field_12;
        } else {
            cVar1 = param_1->field_12;
        }
        if (cVar1 == '\x03') {
            pwVar4 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar5 = pwVar4->GdType(*(int*)param_1, *(int*)&param_1->field_4, *(int*)&param_1->field_8);
        }
        if (lVar5 == 0) {
            uVar6 = 0;
            uVar3 = 4294967295;
            uVar2 = 0;
        } else {
            pwVar4 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            uVar2 = pwVar4->TypeCode2(*(int*)param_1, *(int*)&param_1->field_4, *(int*)&param_1->field_8, lVar5);
            uVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            uVar6 = uVar2 & 31;
            uVar2 = uVar2 >> 6 & 3;
        }
        *(undefined4*)&param_1->field_16 = uVar3;
        *(uint*)&param_1->field_24 = uVar6;
        *(uint*)&param_1->field_20 = uVar2;
    }

    // 0x10011af80, 240 bytes, placed by class name and neighbouring functions
    // Client::FindLocChange(int, int, int, int)
    Client* Client::FindLocChange(int param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        int iVar7;
        int iVar8;
        bool bVar9;
        int* piVar10;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        int in_R9D;
        list<console::Line, eastl::allocator> local_50[8];
        list<console::Line, eastl::allocator> local_48[8];
        int local_34;

        local_34 = in_R9D;
        new (this) LocChange();
        eastl::list<console::Line, eastl::allocator>::begin(local_48);
        eastl::list<console::Line, eastl::allocator>::end(local_50);
        bVar9 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_50,
                                  (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
        if (bVar9) {
            do {
                piVar10 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                if ((((*piVar10 == param_2) && (piVar10[1] == param_3)) && (piVar10[2] == param_4)) &&
                    (piVar10[7] == local_34)) {
                    iVar7 = piVar10[0];
                    iVar8 = piVar10[1];
                    uVar1 = *(undefined8*)(piVar10 + 2);
                    uVar2 = *(undefined8*)(piVar10 + 4);
                    uVar3 = *(undefined8*)(piVar10 + 6);
                    uVar4 = *(undefined8*)(piVar10 + 8);
                    uVar5 = *(undefined8*)(piVar10 + 10);
                    uVar6 = *(undefined8*)((long)piVar10 + 49);
                    *(undefined8*)(((Client*)this)->field_8 + 33) = *(undefined8*)((long)piVar10 + 41);
                    *(undefined8*)(((Client*)this)->field_8 + 41) = uVar6;
                    *(undefined8*)(((Client*)this)->field_8 + 24) = uVar4;
                    *(undefined8*)(((Client*)this)->field_8 + 32) = uVar5;
                    *(undefined8*)(((Client*)this)->field_8 + 8) = uVar2;
                    *(undefined8*)(((Client*)this)->field_8 + 16) = uVar3;
                    ((Client*)this)->field_0 = iVar7;
                    ((Client*)this)->field_4 = iVar8;
                    *(undefined8*)((Client*)this)->field_8 = uVar1;
                    ((Client*)this)->field_8[48] = 1;
                    return (Client*)this;
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                bVar9 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_50,
                                          (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
            } while (bVar9);
        }
        return (Client*)this;
    }

    // 0x10011b210, 1408 bytes, placed by class name and neighbouring functions
    // Client::LocChangeUnchecked(int, LocLayer, int, int, int, int, int, int)
    void Client::LocChangeUnchecked(int param_1, ulong param_3, uint param_4, int param_5, int param_6, uint param_7,
                                    int param_8, int param_9) {
        byte bVar1;
        int iVar2;
        long lVar3;
        shared_ptr* psVar4;
        long lVar5;
        Minimap* this_00;
        LocType* pLVar6;
        world* pwVar7;
        CollisionMap* pCVar8;
        int iVar9;
        shared_ptr<dash3d::Decor> local_90[16];
        LocInfo local_80;
        ulong local_60;
        shared_ptr local_48;

        if (102 < (int)param_4) {
            return;
        }
        if ((int)param_4 < 1) {
            return;
        }
        if (param_5 < 1) {
            return;
        }
        if (102 < param_5) {
            return;
        }
        if ((m_lowMem != false) && (m_playerLevel != param_1)) {
            return;
        }
        local_60 = param_3 & 255;
        switch (local_60) {
        case 0:
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar3 = pwVar7->WallType(param_1, param_4, param_5);
            break;
        case 1:
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar3 = pwVar7->DecorType(param_1, param_4, param_5);
            break;
        case 2:
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar3 = pwVar7->SceneType(param_1, param_4, param_5);
            break;
        case 3:
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            lVar3 = pwVar7->GdType(param_1, param_4, param_5);
            break;
        default:
            lVar3 = 0;
        }
        if (lVar3 != 0) {
            iVar2 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar3);
            psVar4 = (shared_ptr*)configdecoder::LocType::List(iVar2);
            new (&local_48) shared_ptr<dash3d::Decor>(psVar4);
            lVar5 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_48);
            if (*(int*)(lVar5 + 200) != 0) {
                shared_ptr<dash3d::Decor>::shared_ptr(local_90, &local_48);
                new (&local_80)
                    LocInfo((undefined1)param_1, param_4 & 255, (undefined1)param_5, param_7 & 255, local_60, local_90);
                ScriptRunner::SetActiveLoc(&local_80);
                local_80.~pair();
                local_90->~shared_ptr();
                lVar5 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_48);
                ScriptRunner::ExecuteScript(38, iVar2, *(undefined4*)(lVar5 + 440), 500000);
            }
            this_00 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
            pLVar6 = (LocType*)local_48.end();
            this_00->DeleteIcons(pLVar6, param_1, param_4, param_5);
            new (&local_80) rs2lib::CoordGrid(param_1, param_4, param_5);
            (m_entityOverlays, &local_80, local_60)->DestroyStaticOverlays();
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            pwVar7->TypeCode2(param_1, param_4, param_5, lVar3);
            if ((byte)(int)param_3 < 4) {
                /* WARNING: Could not recover jumptable at 4296127593. Too many branches */
                /* WARNING: Treating indirect jump as call */
                (*(code*)(&DAT_10011b780 + *(int*)(&DAT_10011b780 + local_60 * 4)))();
                return;
            }
            local_48.~shared_ptr();
            this = (Client*)this;
        }
        iVar2 = param_1;
        if (-1 < param_6) {
            iVar9 = param_1;
            if (param_1 < 3) {
                bVar1 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, 1, param_4, param_5);
                iVar9 = (uint)(bVar1 >> 1 & 1) + iVar2;
            }
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator*(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            pCVar8 = (CollisionMap*)eastl::vector<
                movement::CollisionMap, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<movement::CollisionMap,
                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_6814744,
                (long)iVar2);
            local_80.ChangeLocUnchecked(iVar2, iVar9, param_4, param_5, param_6, param_7, param_8, param_9, pwVar7,
                                        pCVar8, field_8488);
            OnLoadLocation(this, &local_80);
            local_80.~pair();
        }
    }

    // 0x10011b7e0, 112 bytes, placed by class name and neighbouring functions
    // Client::CreatePlayer(int)
    void Client::CreatePlayer(int param_1) {
        shared_ptr<ClientPlayer>* this_00;
        shared_ptr local_30;

        make_shared<ClientPlayer>((jag*)&local_30);
        this_00 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_1);
        shared_ptr<ClientPlayer>::operator=(this_00, &local_30);
        local_30.~shared_ptr();
        shared_ptr<ClientPlayer>::operator*(this_00);
    }

    // 0x10011b8e0, 240 bytes, placed by class name and neighbouring functions
    // Client::DestroyPlayer(int)
    void Client::DestroyPlayer(int param_1) {
        shared_ptr<ClientPlayer>* this_00;
        int* piVar1;
        int* piVar2;
        vector<unsigned long, BucketAllocatorEASTL> local_50[24];
        shared_ptr local_38;

        ScriptRunner::SetActivePlayer(param_1);
        ScriptRunner::ExecuteScript(42, 4294967295, 4294967295, 500000);
        this_00 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_1);
        shared_ptr<ClientPlayer>::operator->(this_00);
        local_50->GetScriptedOverlays();
        piVar1 = (int*)local_50->HeapBeginPtr();
        piVar2 = (int*)local_50->end();
        if (piVar1 != piVar2) {
            do {
                (m_entityOverlays, *piVar1)->DestroyOverlay();
                piVar1 = piVar1 + 2;
            } while (piVar1 != piVar2);
        }
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<ClientPlayer>::operator=(this_00, &local_38);
        local_38.~shared_ptr();
        eastl::vector<unsigned long, BucketAllocatorEASTL>::~vector(local_50);
    }

    // 0x10011b9d0, 80 bytes, placed by class name and neighbouring functions
    // Client::GetClientNpcWeakPtr(int)
    Client* Client::GetClientNpcWeakPtr(int param_1) {
        weak_ptr* pwVar1;
        uint in_EDX;
        undefined4 in_register_00000034;

        if (in_EDX < 65536) {
            pwVar1 = (weak_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)((_func_decltype_nullptr*)CONCAT44(in_register_00000034,
                                                                                           param_1) +
                                                         55272),
                (long)(int)in_EDX);
            new (this) weak_ptr<dash3d::Decor>(pwVar1);
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
                (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        }
        return this;
    }

    // 0x10011ba20, 16 bytes, placed by class name and neighbouring functions
    // Client::GetLastNpcNum()
    uint Client::GetLastNpcNum() {
        return m_nPCCount;
    }

    // 0x10011ba30, 80 bytes, placed by class name and neighbouring functions
    // Client::GetLastNpcId(int)
    undefined4 Client::GetLastNpcId(int param_1) {
        ulong uVar1;
        undefined4* puVar2;
        undefined4 uVar3;

        uVar3 = 4294967295;
        if (-1 < param_1) {
            uVar1 = (&field_1103856)->end();
            if ((ulong)(long)param_1 < uVar1) {
                puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_1103856, (long)param_1);
                uVar3 = *puVar2;
            }
        }
        return uVar3;
    }

    // 0x10011ba80, 16 bytes, placed by class name and neighbouring functions
    // Client::GetPriorityPlayerId()
    uint Client::GetPriorityPlayerId() {
        return m_priorityPlayerId;
    }

    // 0x10011ba90, 240 bytes, placed by class name and neighbouring functions
    // Client::FindFirstClientObj(rs2lib::CoordGrid&, int)
    Client* Client::FindFirstClientObj(CoordGrid* param_1, int param_2) {
        bool bVar2;
        shared_ptr* this_00;
        long lVar3;
        int in_ECX;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 in_register_00000014;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        undefined8 local_40;
        undefined8 local_38;

        if (ClientConstants::IsCoordInBuildArea((CoordGrid*)CONCAT44(in_register_00000014, param_2)) != '\0') {
            GetObjectsOnTile((Client*)param_1, (CoordGrid*)CONCAT44(in_register_00000014, param_2));
            local_38 = eastl::list<console::Line, eastl::allocator>::begin();
            local_40 = eastl::list<console::Line, eastl::allocator>::end();
            bVar2 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40,
                                      (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
            if (bVar2) {
                this_00 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                lVar3 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00);
                bVar2 = true;
                if (*(int*)(lVar3 + 24) != in_ECX) {
                    do {
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                        bVar2 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40,
                                                  (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                        if (!bVar2)
                            goto LAB_10011bb64;
                        this_00 =
                            (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                        lVar3 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00);
                    } while (*(int*)(lVar3 + 24) != in_ECX);
                }
                new (this) shared_ptr<dash3d::Decor>(this_00);
                if (bVar2 != false) {
                    return this;
                }
            }
        }
    LAB_10011bb64:
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x10011bb80, 272 bytes, placed by class name and neighbouring functions
    // Client::FindClientObjInStack(rs2lib::CoordGrid&, int)
    Client* Client::FindClientObjInStack(CoordGrid* param_1, int param_2) {
        bool bVar2;
        shared_ptr* psVar3;
        int in_ECX;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 in_register_00000014;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        int iVar4;
        undefined8 local_48;
        undefined8 local_40;

        if (ClientConstants::IsCoordInBuildArea((CoordGrid*)CONCAT44(in_register_00000014, param_2)) != '\0') {
            GetObjectsOnTile((Client*)param_1, (CoordGrid*)CONCAT44(in_register_00000014, param_2));
            local_48 = eastl::list<console::Line, eastl::allocator>::begin();
            local_40 = eastl::list<console::Line, eastl::allocator>::end();
            bVar2 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40,
                                      (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
            if (bVar2) {
                iVar4 = 0;
                do {
                    psVar3 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                    if (iVar4 == in_ECX) {
                        new ((Client*)this) shared_ptr<dash3d::Decor>(psVar3);
                        return (Client*)this;
                    }
                    iVar4 = iVar4 + 1;
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                    bVar2 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                } while (bVar2);
            }
            this = (Client*)this;
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x10011bc90, 368 bytes, placed by class name and neighbouring functions
    // Client::InjectRoutePoints(ClientPlayer*, int, int, unsigned char)
    void Client::InjectRoutePoints(ClientPlayer* param_1, int param_2, int param_3, uchar param_4) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        int iVar4;
        int* piVar5;
        CollisionMap* pCVar6;
        undefined4* puVar7;
        int iVar8;
        ulong uVar9;
        undefined7 in_register_00000081;
        RouteDestination local_60;
        char local_44;
        array<int, 50ul>* local_40;
        ulong local_38;

        _local_44 = (undefined4)CONCAT71(in_register_00000081, param_4);
        local_38 = CONCAT44(local_38._4_4_, param_3);
        piVar5 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_444, 0);
        iVar4 = *piVar5;
        piVar5 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_484, 0);
        iVar1 = *piVar5;
        iVar2 = param_1->GetSize();
        if (((((iVar2 <= iVar4) && (iVar8 = 104 - iVar2, iVar4 < iVar8)) && (iVar2 <= iVar1)) &&
             ((iVar1 < iVar8 && (iVar2 <= param_2)))) &&
            ((param_2 < iVar8 && ((iVar2 <= (int)local_38 && ((int)local_38 < iVar8)))))) {
            uVar3 = param_1->GetSize();
            local_40 = (array<int, 50ul>*)CONCAT44(local_40._4_4_, uVar3);
            CreateExactTileDestination((Client*)&local_60, (int)this, param_2);
            pCVar6 = (CollisionMap*)eastl::vector<
                movement::CollisionMap, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<movement::CollisionMap,
                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_6814744,
                (long)param_1->field_1204);
            iVar2 = (int)local_40;
            local_40 = (array<int, 50ul>*)&field_1115492;
            iVar4 = movement::RouteFinding::FindRoute(iVar4, iVar1, iVar2, &local_60, pCVar6, true,
                                                      (array*)&field_1115292, (array*)&field_1115492);
            if (1 < iVar4) {
                local_38 = (ulong)(iVar4 - 1);
                uVar9 = 0;
                iVar4 = (int)local_44;
                do {
                    puVar7 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_1115292, uVar9);
                    uVar3 = *puVar7;
                    puVar7 = (undefined4*)std::array<int, 50ul>::operator[](local_40, uVar9);
                    param_1->AddRoutePoint(uVar3, *puVar7, iVar4);
                    uVar9 = uVar9 + 1;
                } while (local_38 != uVar9);
            }
        }
    }

    // 0x10011bfc0, 224 bytes, placed by class name and neighbouring functions
    // Client::HighlightRoute(int, int, int, int, int, int)
    undefined8 Client::HighlightRoute(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        uint uVar1;
        uint uVar2;
        RouteHighlighter* this_00;
        CollisionMap* pCVar3;
        undefined8 uVar4;
        int iVar5;

        if (param_2 < param_6) {
            uVar4 = 0;
        } else {
            iVar5 = 104 - param_6;
            uVar4 = 0;
            if ((((param_2 < iVar5) && (param_6 <= param_3)) && (param_3 < iVar5)) &&
                (((uVar4 = 0, param_6 <= param_4 && (param_4 < iVar5)) &&
                  ((param_6 <= param_5 && (param_5 < iVar5)))))) {
                this_00 = (RouteHighlighter*)
                              std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
                                  (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19208);
                uVar1 = field_53220;
                uVar2 = field_53224;
                pCVar3 = (CollisionMap*)eastl::vector<
                    movement::CollisionMap,
                    eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<movement::CollisionMap,
                            eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_6814744,
                    (long)param_1);
                uVar4 = this_00->HighlightRoute(param_1, param_2, param_3, param_4, param_5, uVar1, uVar2, pCVar3);
            }
        }
        return uVar4;
    }

    // 0x10011c0a0, 48 bytes, placed by class name and neighbouring functions
    // Client::SetPlayerLevel(int)
    void Client::SetPlayerLevel(int param_1) {
        world* this_00;

        m_playerLevel = param_1;
        this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        this_00->SetMaxGroundPickingLevel(param_1);
    }

} // namespace jag::oldscape
