// projects/osclient/client_utils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000b6590
    uint8_t* Client::GetObjectsOnTile(const rs2lib::CoordGrid& coordGrid) {
        if (ClientConstants::IsCoordInBuildArea(coordGrid) == '\0') {
            LogAssert(
                "ClientConstants::IsCoordInBuildArea(coord)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_utils.cpp",
                1191, nullptr);
        }
        int iVar2 = coordGrid.GetX();
        int iVar3 = coordGrid.GetZ();
        int iVar4 = coordGrid.GetPos();
        return field_1120504 + (long)iVar4 * 32 + (long)iVar3 * 3328 + (long)iVar2 * 346112 + 56;
    }

    // 0x100113540
    void Client::GetNPCPos(bool arg1, core::SuperPacket& superPacket) {
        int arg1_00;
        int* piVar2;
        shared_ptr<ClientNpc>* this_00;
        long lVar3;
        uint64_t uVar5;
        uint64_t uVar6;
        shared_ptr<configdecoder::ObjType>* objType;
        unsigned long uVar7;

        field_1120520 = 0;
        field_1103880 = 0;
        GetNPCPosOldVis(superPacket);
        GetNPCPosNewVis(arg1, superPacket);
        GetNPCPosExtended(superPacket);
        if (0 < field_1120520) {
            uVar7 = 0;
            do {
                piVar2 = &field_1120528[uVar7];
                arg1_00 = *piVar2;
                this_00 = &field_55272[(long)arg1_00];
                lVar3 = (*this_00).operator->();
                if (*(int*)(lVar3 + 420) != field_8488) {
                    DestroyNpc(arg1_00);
                }
                uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)field_1120520);
        }
        lVar3 = superPacket.size();
        long lVar4 = superPacket.GetTextureAtlas();
        if (lVar3 != lVar4) {
            uVar5 = superPacket.size();
            uVar6 = superPacket.GetTextureAtlas();
            LogAssert(
                "in.GetPos() == in.GetSize()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_utils.cpp",
                138, "gnp1 pos : %i psize : %i", uVar5, uVar6);
        }
        if (0 < (int)m_nPCCount) {
            uVar7 = 0;
            do {
                piVar2 = &field_1103856[uVar7];
                objType = &field_55272[(long)*piVar2];
                if (*objType == nullptr) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_utils.cpp",
                                    146, "gnp2 pos: %i size: %i", uVar7 & 4294967295, (unsigned long)m_nPCCount);
                }
                uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)m_nPCCount);
        }
    }

    // 0x1001136e0
    void Client::EnableClanVarValues() {
        ReturnValue local_28;

        if (field_52528 == nullptr) {
            make_shared<game::VarContainerSparse>(&local_28);
            field_52528 = local_28;
        }
    }

    // 0x100117690
    void Client::GetNPCPosOldVis(core::SuperPacket& superPacket) {
        uint8_t* this_00;
        uint8_t* this_01;
        unsigned int uVar1;
        int iVar3;
        uint32_t uVar4;
        int arg1;
        uint32_t* puVar5;
        int* piVar6;
        shared_ptr<ClientNpc>* this_02;
        ClientNpc* this_03;
        long lVar7;
        schar arg2;
        int iVar8;
        unsigned long uVar9;
        Array<int>* this_04;

        superPacket.GBitStart();
        unsigned int uVar2 = superPacket.gBit(8);
        if ((int)uVar2 < (int)m_nPCCount) {
            uVar9 = (unsigned long)(int)uVar2;
            do {
                puVar5 = &field_1103856[uVar9];
                uVar4 = *puVar5;
                iVar8 = field_1120520;
                field_1120520 = iVar8 + 1;
                puVar5 = &field_1120528[(long)iVar8];
                *puVar5 = uVar4;
                uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)m_nPCCount);
        }
        if ((int)m_nPCCount < (int)uVar2) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_utils.cpp",
                167, "Received more npcs (%i) than expected (%i)");
        }
        m_nPCCount = 0;
        if (0 < (int)uVar2) {
            this_00 = &field_1103856;
            this_01 = &field_1103888;
            uVar9 = 0;
            do {
                piVar6 = (int*)(*this_00)[uVar9];
                iVar8 = *piVar6;
                this_02 = &field_55272[(long)iVar8];
                this_03 = (ClientNpc*)**this_02;
                iVar3 = superPacket.gBit(1);
                if (iVar3 == 0) {
                    uVar1 = m_nPCCount;
                    m_nPCCount = uVar1 + 1;
                    piVar6 = (int*)(*this_00)[(long)(int)uVar1];
                    *piVar6 = iVar8;
                    *(int*)((long)&this_03->field_416 + 4) = field_8488;
                    goto switchD_100117863_default;
                }
                uVar4 = superPacket.gBit(2);
                switch (uVar4) {
                case 0:
                    uVar1 = m_nPCCount;
                    m_nPCCount = uVar1 + 1;
                    piVar6 = (int*)(*this_00)[(long)(int)uVar1];
                    *piVar6 = iVar8;
                    *(int*)((long)&this_03->field_416 + 4) = field_8488;
                    iVar3 = field_1103880;
                    field_1103880 = iVar3 + 1;
                    this_04 = (Array<int>*)this_01;
                    break;
                case 1:
                    uVar1 = m_nPCCount;
                    m_nPCCount = uVar1 + 1;
                    piVar6 = (int*)(*this_00)[(long)(int)uVar1];
                    *piVar6 = iVar8;
                    *(int*)((long)&this_03->field_416 + 4) = field_8488;
                    iVar3 = superPacket.gBit(3);
                    this_03->MoveCode(iVar3, '\x01');
                    iVar3 = superPacket.gBit(1);
                    if (iVar3 == 1) {
                        iVar3 = field_1103880;
                        field_1103880 = iVar3 + 1;
                        piVar6 = (int*)(*this_01)[(long)iVar3];
                        *piVar6 = iVar8;
                    }
                    ScriptRunner::SetActiveNPC(iVar8);
                    piVar6 = (int*)this_03->field_1024.operator->();
                    iVar8 = *piVar6;
                    goto LAB_100117a4f;
                case 2:
                    uVar1 = m_nPCCount;
                    m_nPCCount = uVar1 + 1;
                    piVar6 = (int*)(*this_00)[(long)(int)uVar1];
                    *piVar6 = iVar8;
                    *(int*)((long)&this_03->field_416 + 4) = field_8488;
                    iVar3 = superPacket.gBit(1);
                    arg1 = superPacket.gBit(3);
                    if (iVar3 == 1) {
                        this_03->MoveCode(arg1, '\x02');
                        arg1 = superPacket.gBit(3);
                        arg2 = '\x02';
                    } else {
                        arg2 = '\0';
                    }
                    this_03->MoveCode(arg1, arg2);
                    iVar3 = superPacket.gBit(1);
                    if (iVar3 == 1) {
                        iVar3 = field_1103880;
                        field_1103880 = iVar3 + 1;
                        piVar6 = (int*)(*this_01)[(long)iVar3];
                        *piVar6 = iVar8;
                    }
                    ScriptRunner::SetActiveNPC(iVar8);
                    piVar6 = (int*)this_03->field_1024.operator->();
                    iVar8 = *piVar6;
                LAB_100117a4f:
                    lVar7 = this_03->field_1024.operator->();
                    ScriptRunner::ExecuteScript(50, iVar8, *(int*)(lVar7 + 156), 500000);
                    goto switchD_100117863_default;
                case 3:
                    iVar3 = field_1120520;
                    field_1120520 = iVar3 + 1;
                    this_04 = (Array<int>*)&field_1120528;
                    break;
                default:
                    goto switchD_100117863_default;
                }
                piVar6 = (int*)(*this_04)[(long)iVar3];
                *piVar6 = iVar8;
            switchD_100117863_default:
                uVar9 = uVar9 + 1;
            } while (uVar2 != uVar9);
        }
    }

    // 0x100117aa0
    void Client::GetNPCPosNewVis(bool arg1, core::SuperPacket& superPacket) {
        unsigned int uVar1;
        uint32_t uVar2;
        shared_ptr<ClientPlayer>* this_00;
        int iVar3;
        int iVar4;
        int iVar5;
        shared_ptr<configdecoder::ObjType>* objType;
        shared_ptr<ClientNpc>* psVar6;
        ClientNpc* this_01;
        int* piVar7;
        SuperPacket* pSVar8;
        SuperPacket* pSVar9;
        Client* pCVar10;
        Client* this_02;
        long lVar11;
        uint64_t in_register_00000031;
        uint8_t* this_03;
        ReturnValue local_98;
        SuperShuffledPacketFactory local_88;
        int local_40;
        int local_38;
        char local_31;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        array<shared_ptr<ClientNpc>, 65536ul>* this_04 = (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272;
        Array<int>* local_78 = (Array<int>*)&field_1103856;
        Array<int>* local_58 = (Array<int>*)&field_1103888;
        shared_ptr<ClientPlayer>* local_60 = (shared_ptr<ClientPlayer>*)&field_52016;
        HighlightManager* local_50 = (HighlightManager*)m_highlightManager;
        TextureAtlasReference* local_70 = (TextureAtlasReference*)superPacket;
        array<shared_ptr<ClientNpc>, 65536ul>* local_68 = this_04;
        do {
            iVar3 = superPacket.GetTextureAtlas();
            iVar3 = superPacket.BitsLeft(iVar3);
            iVar4 = 3;
            if (27 < iVar3) {
                local_38 = superPacket.gBit(16);
                iVar4 = 3;
                if (local_38 != 65535) {
                    objType = (shared_ptr<configdecoder::ObjType>*)(*this_04)[(long)local_38];
                    local_31 = *objType == nullptr;
                    if (local_31) {
                        make_shared<ClientNpc, int&>((ReturnValue*)&local_88, &local_38);
                        psVar6 = (shared_ptr<ClientNpc>*)(*this_04)[(long)local_38];
                        *psVar6 = local_88;
                    }
                    psVar6 = (shared_ptr<ClientNpc>*)(*this_04)[(long)local_38];
                    this_01 = (ClientNpc*)**psVar6;
                    iVar3 = local_38;
                    pCVar10 = this;
                    uVar1 = m_nPCCount;
                    m_nPCCount = uVar1 + 1;
                    piVar7 = (int*)(*local_78)[(long)(int)uVar1];
                    *piVar7 = iVar3;
                    *(int*)((long)&this_01->field_416 + 4) = pCVar10->field_8488;
                    local_88 = SuperShuffledPacketFactory(superPacket);
                    pSVar8 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    pSVar9 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    if ((char)local_3c == '\0') {
                        iVar4 = pSVar9->gBit(5);
                        iVar3 = iVar4 - 32;
                        if (iVar4 < 16) {
                            iVar3 = iVar4;
                        }
                    } else {
                        iVar4 = pSVar8->gBit(8);
                        iVar3 = iVar4 - 256;
                        if (iVar4 < 128) {
                            iVar3 = iVar4;
                        }
                    }
                    pSVar8 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    pSVar9 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    iVar4 = pSVar8->gBit(1);
                    iVar5 = 0;
                    if (iVar4 == 1) {
                        iVar5 = pSVar9->gBit(32);
                    }
                    this_01->SetCreationCycle(iVar5);
                    pSVar8 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    local_40 = pSVar8->gBit(1);
                    pSVar8 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    iVar4 = pSVar8->gBit(3);
                    if (local_31 != '\0') {
                        uVar2 = *(uint32_t*)(PTR_FACING_MAP_100ee6b18 + (long)iVar4 * 4);
                        *(uint32_t*)&this_01->field_32 = uVar2;
                        *(uint32_t*)&this_01->field_428 = uVar2;
                    }
                    pSVar8 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    iVar4 = pSVar8->gBit(14);
                    local_98 = configdecoder::NpcType::List(iVar4);
                    this_03 = &this_01->field_1024;
                    *this_03 = local_98;
                    pSVar8 = (SuperPacket*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = pSVar8->gBit(1);
                    iVar4 = local_38;
                    if (iVar5 == 1) {
                        iVar5 = field_1103880;
                        field_1103880 = iVar5 + 1;
                        piVar7 = (int*)(*local_58)[(long)iVar5];
                        *piVar7 = iVar4;
                    }
                    pCVar10 = (Client*)ShuffledPacketFactory::p2_alt2();
                    this_02 = (Client*)ShuffledPacketFactory::p2_alt2();
                    if ((char)local_3c == '\0') {
                        iVar5 = this_02->gBit(5);
                        pCVar10 = this_02;
                        iVar4 = iVar5 - 32;
                        if (iVar5 < 16) {
                            iVar4 = iVar5;
                        }
                    } else {
                        iVar5 = pCVar10->gBit(8);
                        iVar4 = iVar5 - 256;
                        if (iVar5 < 128) {
                            iVar4 = iVar5;
                        }
                    }
                    ResetNpcAnim(pCVar10, this_01);
                    this_00 = local_60;
                    if (*(int*)((long)&this_01->field_432 + 4) == 0) {
                        *(uint32_t*)&this_01->field_32 = 0;
                    }
                    lVar11 = (*local_60).operator->();
                    piVar7 = (int*)(*((lVar11 + 444)))[0];
                    iVar5 = *piVar7;
                    lVar11 = (*this_00).operator->();
                    piVar7 = (int*)(*((lVar11 + 484)))[0];
                    this_01->Teleport(iVar3 + iVar5, iVar4 + *piVar7, local_40 == 1);
                    ScriptRunner::SetActiveNPC(local_38);
                    this_04 = local_68;
                    if (local_31 != '\0') {
                        psVar6 = (shared_ptr<ClientNpc>*)(*local_68)[(long)local_38];
                        local_50->OnNPCAdded(*psVar6);
                        piVar7 = (int*)(*this_03).operator->();
                        iVar3 = *piVar7;
                        lVar11 = (*this_03).operator->();
                        ScriptRunner::ExecuteScript(35, iVar3, *(int*)(lVar11 + 156), 500000);
                    }
                    piVar7 = (int*)(*this_03).operator->();
                    iVar3 = *piVar7;
                    lVar11 = (*this_03).operator->();
                    ScriptRunner::ExecuteScript(50, iVar3, *(int*)(lVar11 + 156), 500000);
                    iVar4 = 0;
                    superPacket = (SuperPacket*)local_70;
                }
            }
        } while (iVar4 == 0);
        superPacket.GBitEnd();
    }

    // 0x100117ec0
    void Client::GetNPCPosExtended(core::SuperPacket& superPacket) {
        bool bVar1;
        uint8_t bVar2;
        uint8_t uVar3;
        char cVar4;
        unsigned short uVar5;
        uint16_t uVar6;
        unsigned short uVar7;
        short sVar8;
        int iVar9;
        int arg4;
        int iVar10;
        unsigned int uVar11;
        int iVar12;
        uint32_t uVar13;
        int* piVar14;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ShuffledPacket3* pSVar15;
        ShuffledPacket2* pSVar16;
        ShuffledPacket4* pSVar17;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar18;
        unsigned long uVar19;
        unsigned int* puVar20;
        long lVar21;
        uint16_t* puVar22;
        ShuffledPacket3* pSVar23;
        ShuffledPacket4* pSVar24;
        Logger* pLVar25;
        ShuffledPacket4* pSVar26;
        ShuffledPacket4* this_00;
        int* piVar27;
        int* piVar28;
        uint32_t* puVar29;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar30;
        ShuffledPacket2* this_01;
        int arg2;
        unsigned long uVar31;
        unsigned long uVar32;
        ClientNpc* pCVar33;
        Client* pCVar34;
        unsigned int uVar35;
        ReturnValue local_1b8;
        ReturnValue local_1a8;
        unsigned long local_198;
        ShuffledPacket4* local_190;
        Array<int>* local_188;
        array<shared_ptr<ClientNpc>, 65536ul>* local_180;
        SuperPacket* local_178;
        Array<short> local_170;
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
        unsigned int local_cc;
        Array<short> local_c8;
        ReturnValue local_80;

        if (0 < field_1103880) {
            local_188 = (Array<int>*)&field_1103888;
            local_180 = (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272;
            uVar19 = 0;
            local_178 = superPacket;
            do {
                local_198 = uVar19;
                piVar14 = (int*)(*local_188)[uVar19];
                local_128 = (ShuffledPacket3*)(((uint64_t)local_128._4_4_ << 32) | (uint32_t)(*piVar14));
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_180)[(long)*piVar14];
                bVar1 = *midiPlayerMainThread != nullptr;
                if (!bVar1) {
                    LogAssert("m_npc[id] != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_utils.cpp",
                              384, nullptr);
                }
                local_d8 = (ClientNpc*)**midiPlayerMainThread;
                bVar2 = superPacket.g1();
                uVar35 = (unsigned int)bVar2;
                if ((bVar2 & 8) != 0) {
                    uVar3 = superPacket.g1();
                    uVar35 = (unsigned int)(((uint16_t)uVar3 << 8) | (uint8_t)bVar2);
                }
                if ((uVar35 & 2048) != 0) {
                    bVar2 = superPacket.g1();
                    uVar35 = uVar35 | (unsigned int)bVar2 << 16;
                }
                local_120 = SuperShuffledPacketFactory(superPacket);
                local_e8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar15 = (ShuffledPacket3*)SuperShuffledPacketFactory::gSmarts();
                local_158 = (ShuffledPacket3*)SuperShuffledPacketFactory::gSmarts();
                local_150 = (ShuffledPacket3*)SuperShuffledPacketFactory::gSmarts();
                local_148 = (ShuffledPacket4*)SuperShuffledPacketFactory::gSmarts();
                local_140 = (ShuffledPacket2*)SuperShuffledPacketFactory::gSmarts();
                local_138 = (ShuffledPacket4*)SuperShuffledPacketFactory::gSmarts();
                local_e0 = (ShuffledPacket3*)SuperShuffledPacketFactory::gSmarts();
                local_190 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar16 = (ShuffledPacket2*)SuperShuffledPacketFactory::gSmarts();
                pSVar17 = (ShuffledPacket4*)SuperShuffledPacketFactory::gSmarts();
                local_f8 = (ShuffledPacket4*)SuperShuffledPacketFactory::gSmarts();
                local_f0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_130 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_cc = uVar35;
                if ((char)uVar35 < '\0') {
                    local_110 = pSVar17;
                    local_108 = pSVar16;
                    bVar2 = local_e8->g1();
                    if (bVar2 != 0) {
                        uVar35 = (unsigned int)bVar2;
                        local_e8 = pSVar15;
                        do {
                            iVar12 = local_e8->gSmarts();
                            iVar10 = -1;
                            if (iVar12 == 32766) {
                                iVar9 = -1;
                                arg4 = -1;
                                iVar12 = -1;
                            } else if (iVar12 == 32767) {
                                iVar12 = local_158->gSmarts();
                                iVar9 = local_150->gSmarts();
                                arg4 = local_148->gSmarts();
                                iVar10 = local_140->gSmarts();
                            } else {
                                iVar9 = local_138->gSmarts();
                                arg4 = -1;
                            }
                            local_e0->gSmarts();
                            ClientEntity::AddHitmark((int)local_d8, iVar12, iVar9, arg4, iVar10, field_8488);
                            uVar35 = uVar35 - 1;
                        } while (uVar35 != 0);
                    }
                    bVar2 = local_190->g1();
                    if (bVar2 != 0) {
                        uVar35 = (unsigned int)bVar2;
                        pSVar17 = local_110;
                        pSVar16 = local_108;
                        do {
                            while (true) {
                                iVar12 = pSVar16->gSmarts();
                                iVar10 = pSVar17->gSmarts();
                                if (iVar10 == 32767)
                                    break;
                                iVar9 = local_f8->gSmarts();
                                bVar2 = local_f0->g1();
                                if (0 < iVar10) {
                                    local_130->g1();
                                }
                                ClientEntity::AddHeadbar((int)local_d8, iVar12, field_8488, iVar10, iVar9,
                                                         (unsigned int)bVar2);
                                uVar35 = uVar35 - 1;
                                pSVar17 = local_110;
                                pSVar16 = local_108;
                                if (uVar35 == 0)
                                    goto LAB_1001180d1;
                            }
                            local_d8->ClearHeadbar(iVar12);
                            uVar35 = uVar35 - 1;
                        } while (uVar35 != 0);
                    }
                }
            LAB_1001180d1:
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                pSVar16 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                local_e0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_f8 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 512) != 0) {
                    local_f0 = (ShuffledPacket3*)&local_d8->field_1024;
                    cVar4 = local_f0->operator_cast_to_bool();
                    if (!cVar4) {
                        LogAssert("npcType",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_utils.cpp",
                                  612, nullptr);
                    }
                    uVar19 = pPVar18->g1();
                    if ((uVar19 & 1) == 0) {
                        local_80 = eastl::vector<int>();
                        if ((uVar19 & 2) != 0) {
                            bVar2 = pSVar16->g1();
                            local_80.resize((unsigned long)bVar2);
                            if (bVar2 != 0) {
                                uVar31 = 0;
                                do {
                                    uVar5 = pSVar17->g2();
                                    puVar20 = &local_80[uVar31];
                                    uVar35 = (unsigned int)uVar5;
                                    if (uVar5 == 65535) {
                                        uVar35 = 4294967295;
                                    }
                                    *puVar20 = uVar35;
                                    uVar31 = uVar31 + 1;
                                } while (bVar2 != uVar31);
                            }
                        }
                        local_c8 = Array<short>();
                        if ((uVar19 & 4) != 0) {
                            lVar21 = (*local_f0).operator->();
                            uVar31 = ((lVar21 + 184))->end();
                            local_c8.set_min_size(uVar31, 0);
                            if (uVar31 != 0) {
                                uVar32 = 0;
                                do {
                                    uVar6 = local_e0->g2();
                                    puVar22 = &local_c8[uVar32];
                                    *puVar22 = uVar6;
                                    uVar32 = uVar32 + 1;
                                } while (uVar31 != uVar32);
                            }
                        }
                        local_170 = Array<short>();
                        if ((uVar19 & 8) != 0) {
                            lVar21 = (*local_f0).operator->();
                            uVar31 = ((lVar21 + 232))->end();
                            local_170.set_min_size(uVar31, 0);
                            if (uVar31 != 0) {
                                uVar32 = 0;
                                do {
                                    uVar6 = local_e8->g2();
                                    puVar22 = &local_170[uVar32];
                                    *puVar22 = uVar6;
                                    uVar32 = uVar32 + 1;
                                } while (uVar31 != uVar32);
                            }
                        }
                        if ((uVar19 & 16) == 0) {
                            bVar1 = false;
                        } else {
                            cVar4 = local_f8->g1();
                            bVar1 = cVar4 == '\x01';
                        }
                        local_d8->SetHeadCustomisation(local_80, local_c8, local_170, bVar1);
                    } else {
                        local_d8->ClearHeadCustomisation();
                    }
                }
                uVar35 = local_cc;
                pSVar15 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                pSVar23 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                if ((uVar35 & 32) != 0) {
                    uVar5 = pSVar15->g2();
                    uVar7 = pPVar18->g2();
                    cVar4 = pSVar23->g1();
                    uVar35 = local_cc;
                    local_d8->field_352 = cVar4;
                    if (m_serverMajorVersion < 212) {
                        uVar11 = (field_53220 * 2 - (unsigned int)uVar5) * 64 + local_d8->field_24;
                        iVar12 = (field_53224 * 2 - (unsigned int)uVar7) * 64 + local_d8->field_28;
                        if (uVar11 != 0 || iVar12 != 0) {
                            uVar13 = ((Conversion*)(unsigned long)uVar11)->Atan2InOldJagexAngles(iVar12, arg2);
                            local_d8->field_336 = uVar13;
                        }
                    } else {
                        local_d8->field_340.Set(0, (unsigned int)uVar5, (unsigned int)uVar7);
                        uVar35 = local_cc;
                    }
                }
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                if ((uVar35 & 64) != 0) {
                    uVar5 = pPVar18->g2();
                    uVar11 = (unsigned int)uVar5;
                    if (uVar5 == 65535) {
                        uVar11 = 4294967295;
                    }
                    bVar2 = pSVar17->g1();
                    if ((uVar11 == local_d8->field_372) && (uVar11 != 4294967295)) {
                        if (field_54760 != '\0') {
                            pLVar25 = logger::default_logger();
                            pLVar25->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_utils.cpp",
                                         407, "Duplicate npc anim: %d delay:%d", uVar11, (unsigned int)bVar2);
                        }
                        local_80 = configdecoder::SeqType::List(uVar11);
                        lVar21 = local_80.operator->();
                        iVar12 = *(int*)(lVar21 + 256);
                        uVar35 = local_cc;
                        if (iVar12 == 2) {
                            *(uint32_t*)&local_d8->field_388 = 0;
                        } else if (iVar12 == 1) {
                            *(uint64_t*)&local_d8->field_376 = 0;
                            local_d8->field_384 = (unsigned int)bVar2;
                            *(uint32_t*)&local_d8->field_388 = 0;
                        }
                    } else {
                        local_e0 =
                            (ShuffledPacket3*)(((uint64_t)local_e0._4_4_ << 32) | (uint32_t)((unsigned int)bVar2));
                        bVar1 = true;
                        if (local_d8->field_372 != 4294967295 && uVar5 != 65535) {
                            local_1b8 = configdecoder::SeqType::List(uVar11);
                            lVar21 = local_1b8.operator->();
                            iVar12 = *(int*)(lVar21 + 228);
                            local_1a8 = configdecoder::SeqType::List(local_d8->field_372);
                            lVar21 = local_1a8.operator->();
                            bVar1 = *(int*)(lVar21 + 228) <= iVar12;
                        }
                        uVar35 = local_cc;
                        iVar12 = (int)local_e0;
                        if (bVar1) {
                            if (field_54760 != '\0') {
                                pLVar25 = logger::default_logger();
                                pLVar25->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client_utils.cpp",
                                             423, "Got npc anim: %d delay:%d", uVar11, iVar12);
                            }
                            local_d8->field_372 = uVar11;
                            *(uint64_t*)&local_d8->field_376 = 0;
                            local_d8->field_384 = iVar12;
                            *(uint32_t*)&local_d8->field_388 = 0;
                            *(unsigned int*)((long)&local_d8->field_536 + 4) = local_d8->field_440;
                        } else if (field_54760 != '\0') {
                            pLVar25 = logger::default_logger();
                            pLVar25->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_utils.cpp",
                                         433, "Ignored npc anim: %d", uVar11);
                        }
                    }
                }
                pSVar15 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar24 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                local_e0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                if (((uVar35 & 131072) != 0) && (bVar2 = pSVar15->g1(), bVar2 != 0)) {
                    uVar35 = (unsigned int)bVar2;
                    do {
                        bVar2 = pSVar17->g1();
                        uVar5 = pSVar24->g2();
                        uVar11 = local_e0->g4();
                        local_d8->AddSpotAnim((unsigned int)bVar2, (unsigned int)uVar5, (int)uVar11 >> 16,
                                              uVar11 & 65535, field_8488);
                        uVar35 = uVar35 - 1;
                    } while (uVar35 != 0);
                }
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 4) != 0) {
                    uVar5 = pPVar18->g2();
                    pCVar34 = &local_80;
                    *pCVar34 = configdecoder::NpcType::List((unsigned int)uVar5);
                    pCVar33 = local_d8;
                    local_d8->field_1024 = *pCVar34;
                    pCVar34->~shared_ptr();
                    ResetNpcAnim(pCVar34, pCVar33);
                    pCVar33->ClearHeadIconCustomisation();
                }
                pSVar16 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 16) != 0) {
                    uVar5 = pSVar16->g2();
                    pCVar33 = local_d8;
                    local_d8->field_328 = (unsigned int)uVar5;
                    bVar2 = pSVar17->g1();
                    iVar12 = (unsigned int)bVar2 * 65536 + pCVar33->field_328;
                    if (iVar12 == 16777215) {
                        iVar12 = -1;
                    }
                    pCVar33->field_328 = iVar12;
                    if (field_54760 != '\0') {
                        pLVar25 = logger::default_logger();
                        pLVar25->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_utils.cpp",
                                     448, "Got npc faceentity: %d", local_d8->field_328);
                    }
                }
                pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar24 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar15 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar26 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                this_00 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 4096) != 0) {
                    cVar4 = pSVar17->g1s();
                    pCVar33 = local_d8;
                    *(int*)&local_d8->field_392 = (int)cVar4;
                    local_f8 = pSVar26;
                    cVar4 = pSVar24->g1s();
                    *(int*)&pCVar33->field_400 = (int)cVar4;
                    cVar4 = pSVar15->g1s();
                    *(int*)((long)&pCVar33->field_392 + 4) = (int)cVar4;
                    cVar4 = local_e8->g1s();
                    *(int*)((long)&pCVar33->field_400 + 4) = (int)cVar4;
                    uVar5 = local_e0->g2();
                    pCVar34 = this;
                    *(unsigned int*)&pCVar33->field_408 = (unsigned int)uVar5 + field_8488;
                    uVar5 = local_f8->g2();
                    *(unsigned int*)((long)&pCVar33->field_408 + 4) = (unsigned int)uVar5 + pCVar34->field_8488;
                    uVar5 = this_00->g2();
                    *(unsigned int*)&pCVar33->field_416 = (unsigned int)uVar5;
                    pCVar33->field_440 = 1;
                    *(uint32_t*)((long)&pCVar33->field_536 + 4) = 0;
                    piVar27 = &pCVar33->field_444[0];
                    *(int*)&pCVar33->field_392 = *(int*)&pCVar33->field_392 + *piVar27;
                    piVar28 = &pCVar33->field_484[0];
                    *(int*)&pCVar33->field_400 = *(int*)&pCVar33->field_400 + *piVar28;
                    piVar14 = (int*)((long)&pCVar33->field_392 + 4);
                    *piVar14 = *piVar14 + *piVar27;
                    piVar14 = (int*)((long)&pCVar33->field_400 + 4);
                    *piVar14 = *piVar14 + *piVar28;
                    ScriptRunner::SetActiveNPC((int)local_128);
                    piVar14 = (int*)pCVar33->field_1024.operator->();
                    iVar12 = *piVar14;
                    lVar21 = pCVar33->field_1024.operator->();
                    ScriptRunner::ExecuteScript(50, iVar12, *(int*)(lVar21 + 156), 500000);
                    if (pCVar34->field_54760 != '\0') {
                        pLVar25 = logger::default_logger();
                        pLVar25->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_utils.cpp",
                                     574, "Got npc exactmove: (%i,%i) -> (%i,%i) for times (%i) -> (%i) facing %i",
                                     *(uint32_t*)&local_d8->field_392, *(uint32_t*)&local_d8->field_400,
                                     *(uint32_t*)((long)&local_d8->field_392 + 4),
                                     *(uint32_t*)((long)&local_d8->field_400 + 4), *(uint32_t*)&local_d8->field_408,
                                     *(uint32_t*)((long)&local_d8->field_408 + 4), *(uint32_t*)&local_d8->field_416);
                    }
                }
                pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar24 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar15 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_140 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                local_148 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                local_150 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_158 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_110 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                local_138 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                local_108 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                local_f0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_f8 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                local_e8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar23 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar16 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 65536) != 0) {
                    local_130 = (ShuffledPacket3*)pSVar16;
                    local_128 = pSVar23;
                    uVar35 = pSVar17->g4s();
                    pCVar33 = local_d8;
                    if ((uVar35 & 1) == 0) {
                        lVar21 = local_d8->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 100);
                    } else {
                        uVar5 = pSVar24->g2();
                        uVar11 = (unsigned int)uVar5;
                        pCVar33 = local_d8;
                    }
                    pCVar33->field_52 = uVar11;
                    if ((uVar35 & 2) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 104);
                    } else {
                        uVar5 = pSVar15->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_56 = uVar11;
                    if ((uVar35 & 4) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 108);
                    } else {
                        uVar5 = local_140->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_60 = uVar11;
                    if ((uVar35 & 8) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 112);
                    } else {
                        uVar5 = local_148->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_64 = uVar11;
                    if ((uVar35 & 16) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 116);
                    } else {
                        uVar5 = local_150->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_68 = uVar11;
                    if ((uVar35 & 32) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 120);
                    } else {
                        uVar5 = local_158->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_72 = uVar11;
                    if ((uVar35 & 64) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 124);
                    } else {
                        uVar5 = local_110->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_76 = uVar11;
                    if ((char)uVar35 < '\0') {
                        uVar5 = local_138->g2();
                        uVar11 = (unsigned int)uVar5;
                    } else {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 128);
                    }
                    pCVar33->field_80 = uVar11;
                    if ((uVar35 & 256) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 132);
                    } else {
                        uVar5 = local_108->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_84 = uVar11;
                    if ((uVar35 & 512) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 136);
                    } else {
                        uVar5 = local_f0->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_88 = uVar11;
                    if ((uVar35 & 1024) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 140);
                    } else {
                        uVar5 = local_f8->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_92 = uVar11;
                    if ((uVar35 & 2048) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 144);
                    } else {
                        uVar5 = local_e8->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_96 = uVar11;
                    if ((uVar35 & 4096) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 148);
                    } else {
                        uVar5 = local_e0->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_100 = uVar11;
                    if ((uVar35 & 8192) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar11 = *(unsigned int*)(lVar21 + 152);
                    } else {
                        uVar5 = local_128->g2();
                        uVar11 = (unsigned int)uVar5;
                    }
                    pCVar33->field_104 = uVar11;
                    if ((uVar35 & 16384) == 0) {
                        lVar21 = pCVar33->field_1024.operator->();
                        uVar35 = *(unsigned int*)(lVar21 + 96);
                    } else {
                        uVar5 = local_130->g2();
                        uVar35 = (unsigned int)uVar5;
                    }
                    pCVar33->field_48 = uVar35;
                }
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 262144) != 0) {
                    uVar35 = pPVar18->g1();
                    local_80 = eastl::fixed_vector<int, 8ul>(8);
                    local_c8 = eastl::fixed_vector<int, 8ul>(8);
                    uVar19 = 0;
                    do {
                        if (((uVar35 & 255) >> ((unsigned int)uVar19 & 31) & 1) == 0) {
                            puVar29 = &local_80[uVar19];
                            *puVar29 = 4294967295;
                            puVar29 = &local_c8[uVar19];
                            *puVar29 = 4294967295;
                        } else {
                            uVar13 = pPVar18->gSmart2or4s();
                            puVar29 = &local_80[uVar19];
                            *puVar29 = uVar13;
                            sVar8 = pPVar18->gSmart1Or2Minus1();
                            piVar14 = &local_c8[uVar19];
                            *piVar14 = (int)sVar8;
                        }
                        uVar19 = uVar19 + 1;
                    } while (uVar19 != 8);
                    local_d8->SetHeadIcons(local_80, local_c8);
                }
                uVar35 = local_cc;
                bVar1 = (bool)ShuffledPacketFactory::p2_alt2();
                if ((short)uVar35 < 0) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(&local_80, bVar1);
                    local_d8->field_992 = &local_80;
                }
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                pPVar30 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                if ((uVar35 & 2) != 0) {
                    pPVar18->g2();
                    pPVar30->g4();
                }
                bVar1 = (bool)ShuffledPacketFactory::p2_alt2();
                if ((uVar35 & 1) != 0) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(&local_80, bVar1);
                    pCVar33 = local_d8;
                    local_d8->field_112 = &local_80;
                    *(uint32_t*)&pCVar33->field_148 = 100;
                }
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                pPVar30 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                local_e8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar15 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar16 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pCVar34 = this;
                if ((uVar35 & 8192) != 0) {
                    iVar12 = field_8488;
                    local_f8 = (ShuffledPacket4*)pSVar16;
                    local_f0 = pSVar15;
                    uVar5 = pPVar18->g2();
                    pCVar33 = local_d8;
                    local_d8->field_548 = (unsigned int)uVar5 + iVar12;
                    iVar12 = pCVar34->field_8488;
                    uVar5 = pPVar30->g2();
                    pCVar33->field_552 = (unsigned int)uVar5 + iVar12;
                    cVar4 = local_e8->g1s();
                    pCVar33->field_556 = cVar4;
                    cVar4 = local_e0->g1s();
                    pCVar33->field_557 = cVar4;
                    cVar4 = local_f0->g1s();
                    pCVar33->field_558 = cVar4;
                    uVar3 = local_f8->g1s();
                    pCVar33->field_559 = uVar3;
                }
                pSVar16 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                this_01 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar15 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e0 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_e8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_f8 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                if ((local_cc & 256) != 0) {
                    local_108 = (ShuffledPacket2*)&local_d8->field_1024;
                    cVar4 = local_108->operator_cast_to_bool();
                    if (!cVar4) {
                        LogAssert("npcType",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_utils.cpp",
                                  678, nullptr);
                    }
                    bVar2 = pSVar16->g1();
                    if ((bVar2 & 1) == 0) {
                        local_80 = eastl::vector<int>();
                        local_f0 = (ShuffledPacket3*)(((uint64_t)local_f0._1_7_ << 8) | (uint8_t)bVar2);
                        if ((bVar2 & 2) != 0) {
                            bVar2 = this_01->g1();
                            local_80.resize((unsigned long)bVar2);
                            if (bVar2 != 0) {
                                uVar19 = 0;
                                uVar31 = 1;
                                do {
                                    uVar5 = pSVar15->g2();
                                    puVar20 = &local_80[uVar19];
                                    uVar35 = (unsigned int)uVar5;
                                    if (uVar5 == 65535) {
                                        uVar35 = 4294967295;
                                    }
                                    *puVar20 = uVar35;
                                    bVar1 = uVar31 < bVar2;
                                    uVar19 = uVar31;
                                    uVar31 = (unsigned long)((int)uVar31 + 1);
                                } while (bVar1);
                            }
                        }
                        local_c8 = Array<short>();
                        if (((unsigned long)local_f0 & 4) != 0) {
                            lVar21 = (*local_108).operator->();
                            uVar19 = ((lVar21 + 184))->end();
                            local_c8.set_min_size(uVar19, 0);
                            if (uVar19 != 0) {
                                uVar31 = 0;
                                do {
                                    uVar6 = local_e0->g2();
                                    puVar22 = &local_c8[uVar31];
                                    *puVar22 = uVar6;
                                    uVar31 = uVar31 + 1;
                                } while (uVar19 != uVar31);
                            }
                        }
                        local_170 = Array<short>();
                        if (((unsigned long)local_f0 & 8) != 0) {
                            lVar21 = (*local_108).operator->();
                            uVar19 = ((lVar21 + 232))->end();
                            local_170.set_min_size(uVar19, 0);
                            if (uVar19 != 0) {
                                uVar31 = 0;
                                do {
                                    uVar6 = local_e8->g2();
                                    puVar22 = &local_170[uVar31];
                                    *puVar22 = uVar6;
                                    uVar31 = uVar31 + 1;
                                } while (uVar19 != uVar31);
                            }
                        }
                        if (((unsigned long)local_f0 & 16) == 0) {
                            bVar1 = false;
                        } else {
                            cVar4 = local_f8->g1();
                            bVar1 = cVar4 == '\x01';
                        }
                        local_d8->SetBodyCustomisation(local_80, local_c8, local_170, bVar1);
                    } else {
                        local_d8->ClearBodyCustomisation();
                    }
                }
                uVar35 = local_cc;
                pSVar16 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                if ((uVar35 & 16384) != 0) {
                    local_d8->SetEnabledOpsBitMask(pSVar16->g1());
                }
                pPVar18 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                    ShuffledPacketFactory::p2_alt2();
                pCVar34 = this;
                superPacket = local_178;
                if ((uVar35 & 1024) != 0) {
                    uVar13 = pPVar18->g4s();
                    *(uint32_t*)&local_d8->field_544 = uVar13;
                }
                uVar19 = local_198 + 1;
            } while ((long)uVar19 < (long)pCVar34->field_1103880);
        }
    }

    // 0x1001197b0
    void Client::DestroyNpc(int arg1) {
        ScriptRunner::SetActiveNPC(arg1);
        shared_ptr<ClientNpc>* this_00 = &field_55272[(long)arg1];
        long lVar1 = (*this_00).operator->();
        int* piVar2 = (int*)(*((lVar1 + 1024))).operator->();
        int arg2 = *piVar2;
        lVar1 = (*this_00).operator->();
        lVar1 = (*((lVar1 + 1024))).operator->();
        ScriptRunner::ExecuteScript(36, arg2, *(int*)(lVar1 + 156), 500000);
        auto local_50 = ((ClientEntity*)(*this_00).operator->())->GetScriptedOverlays();
        piVar2 = (int*)local_50.HeapBeginPtr();
        auto piVar3 = local_50.end();
        if (piVar2 != piVar3) {
            do {
                m_entityOverlays->DestroyOverlay(*piVar2);
                piVar2 = piVar2 + 2;
            } while (piVar2 != piVar3);
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        lVar1 = (*this_00).operator->();
        (*((lVar1 + 1024))) = local_38;
        local_38 = shared_ptr();
        *this_00 = local_38;
    }

    // 0x100119c70
    void Client::ResetNpcAnim(ClientNpc& clientNpc) {
        uint8_t* this_00 = &clientNpc.field_1024;
        long lVar1 = (*this_00).operator->();
        clientNpc.field_40 = *(int*)(lVar1 + 40);
        lVar1 = (*this_00).operator->();
        *(uint32_t*)((long)&clientNpc.field_432 + 4) = *(uint32_t*)(lVar1 + 484);
        lVar1 = (*this_00).operator->();
        clientNpc.field_60 = *(uint32_t*)(lVar1 + 108);
        lVar1 = (*this_00).operator->();
        clientNpc.field_64 = *(uint32_t*)(lVar1 + 112);
        lVar1 = (*this_00).operator->();
        clientNpc.field_68 = *(uint32_t*)(lVar1 + 116);
        lVar1 = (*this_00).operator->();
        clientNpc.field_72 = *(uint32_t*)(lVar1 + 120);
        lVar1 = (*this_00).operator->();
        clientNpc.field_48 = *(uint32_t*)(lVar1 + 96);
        lVar1 = (*this_00).operator->();
        clientNpc.field_52 = *(uint32_t*)(lVar1 + 100);
        lVar1 = (*this_00).operator->();
        clientNpc.field_56 = *(uint32_t*)(lVar1 + 104);
        lVar1 = (*this_00).operator->();
        clientNpc.field_76 = *(uint32_t*)(lVar1 + 124);
        lVar1 = (*this_00).operator->();
        clientNpc.field_80 = *(uint32_t*)(lVar1 + 128);
        lVar1 = (*this_00).operator->();
        clientNpc.field_84 = *(uint32_t*)(lVar1 + 132);
        lVar1 = (*this_00).operator->();
        clientNpc.field_88 = *(uint32_t*)(lVar1 + 136);
        lVar1 = (*this_00).operator->();
        clientNpc.field_92 = *(uint32_t*)(lVar1 + 140);
        lVar1 = (*this_00).operator->();
        clientNpc.field_96 = *(uint32_t*)(lVar1 + 144);
        lVar1 = (*this_00).operator->();
        clientNpc.field_100 = *(uint32_t*)(lVar1 + 148);
        lVar1 = (*this_00).operator->();
        clientNpc.field_104 = *(uint32_t*)(lVar1 + 152);
    }

    // 0x10011a8c0
    void Client::OnLoadLocation(const LocInfo& locInfo) {
        int arg2;
        int iVar1;
        uint8_t bVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        int* piVar8;
        long lVar9;
        world* pwVar10;
        Minimap* this_01;
        unsigned int arg3;
        unsigned int arg1;
        ReturnValue local_40;

        bool cVar2 = locInfo.IsSet();
        if (cVar2) {
            uVar5 = locInfo.GetRot();
            uVar6 = locInfo.GetDirectionMask();
            uVar7 = locInfo.GetShape();
            local_40 = locInfo.GetCompletionTask();
            piVar8 = (int*)local_40.operator->();
            arg2 = *piVar8;
            local_40 = locInfo.GetCompletionTask();
            lVar9 = local_40.operator->();
            uVar5 = uVar5 & 255;
            iVar1 = *(int*)(lVar9 + 200);
            arg1 = uVar7 & 255;
            arg3 = uVar6 & 255;
            if (iVar1 != 0) {
                switch (locInfo.GetStopExponent()) {
                case 0:
                    pwVar10 = (world*)field_19184.operator->();
                    local_40 = pwVar10->GetWall(arg1, uVar5, arg3);
                    m_highlightManager->OnWallLocAdded(local_40, arg2, uVar7 & 255, uVar5, uVar6 & 255);
                    break;
                case 1:
                    pwVar10 = (world*)field_19184.operator->();
                    local_40 = pwVar10->GetDecor(arg1, uVar5, arg3);
                    m_highlightManager->OnDecorLocAdded(local_40, arg2, arg1, uVar5, arg3);
                    break;
                case 2:
                    pwVar10 = (world*)field_19184.operator->();
                    local_40 = pwVar10->GetScene(arg1, uVar5, arg3);
                    m_highlightManager->OnSceneryLocAdded(local_40, arg2, arg1, uVar5, arg3);
                    break;
                case 3:
                    pwVar10 = (world*)field_19184.operator->();
                    local_40 = pwVar10->GetGroundDecor(arg1, uVar5, arg3);
                    m_highlightManager->OnGroundDecorLocAdded(local_40, arg2, arg1, uVar5, arg3);
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_utils.cpp",
                                    837, "Invalid loc layer");
                }
                ScriptRunner::SetActiveLoc(locInfo);
                local_40 = locInfo.GetCompletionTask();
                lVar9 = local_40.operator->();
                ScriptRunner::ExecuteScript(37, arg2, *(int*)(lVar9 + 440), 500000);
            }
            local_40 = locInfo.GetCompletionTask();
            cVar2 = ((LocType*)local_40.operator->())->HasBgSound();
            if (cVar2) {
                local_40 = locInfo.GetCompletionTask();
                bVar4 = locInfo.GetDeceleration();
                bgsound::AddSound(arg1, uVar5, arg3, local_40, (unsigned int)bVar4);
            }
            this_01 = (Minimap*)field_8152.operator->();
            local_40 = locInfo.GetCompletionTask();
            lVar9 = local_40.operator->();
            this_01->AddMelIcon(arg1, uVar5, arg3, *(int*)(lVar9 + 432));
        }
    }

    // 0x10011ad90
    void Client::LocChangeSetOld(LocChange& locChange) {
        char cVar1;
        unsigned int uVar2;
        uint32_t uVar3;
        world* pwVar4;
        long long arg4;
        unsigned int uVar5;

        if (locChange.field_12 == '\0') {
            pwVar4 = (world*)field_19184.operator->();
            arg4 = pwVar4->WallType(*(int*)locChange, *(int*)&locChange.field_4, *(int*)&locChange.field_8);
            cVar1 = locChange.field_12;
        } else {
            arg4 = 0;
            cVar1 = locChange.field_12;
        }
        if (cVar1 == '\x01') {
            pwVar4 = (world*)field_19184.operator->();
            arg4 = pwVar4->DecorType(*(int*)locChange, *(int*)&locChange.field_4, *(int*)&locChange.field_8);
        }
        if (locChange.field_12 == '\x02') {
            pwVar4 = (world*)field_19184.operator->();
            arg4 = pwVar4->SceneType(*(int*)locChange, *(int*)&locChange.field_4, *(int*)&locChange.field_8);
            cVar1 = locChange.field_12;
        } else {
            cVar1 = locChange.field_12;
        }
        if (cVar1 == '\x03') {
            pwVar4 = (world*)field_19184.operator->();
            arg4 = pwVar4->GdType(*(int*)locChange, *(int*)&locChange.field_4, *(int*)&locChange.field_8);
        }
        if (arg4 == 0) {
            uVar5 = 0;
            uVar3 = 4294967295;
            uVar2 = 0;
        } else {
            pwVar4 = (world*)field_19184.operator->();
            uVar2 = pwVar4->TypeCode2(*(int*)locChange, *(int*)&locChange.field_4, *(int*)&locChange.field_8, arg4);
            uVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(arg4);
            uVar5 = uVar2 & 31;
            uVar2 = uVar2 >> 6 & 3;
        }
        *(uint32_t*)&locChange.field_16 = uVar3;
        *(unsigned int*)&locChange.field_24 = uVar5;
        *(unsigned int*)&locChange.field_20 = uVar2;
    }

    // 0x10011af80
    Client* Client::FindLocChange(int arg1, int arg2, int arg3, int arg4) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        int iVar7;
        int iVar8;
        int* piVar10;
        uint32_t in_register_00000034;
        int in_R9D;

        int local_34 = in_R9D;
        new (this) LocChange();
        list<console::Line>* this_00 =
            (list<console::Line>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 2505008);
        auto local_48 = this_00->begin();
        auto local_50 = this_00->end();
        bool cVar9 = local_48 != local_50;
        if (cVar9) {
            do {
                piVar10 = (int*)*local_48;
                if ((((*piVar10 == arg2) && (piVar10[1] == arg3)) && (piVar10[2] == arg4)) &&
                    (piVar10[7] == local_34)) {
                    iVar7 = piVar10[0];
                    iVar8 = piVar10[1];
                    uVar1 = *(uint64_t*)(piVar10 + 2);
                    uVar2 = *(uint64_t*)(piVar10 + 4);
                    uVar3 = *(uint64_t*)(piVar10 + 6);
                    uVar4 = *(uint64_t*)(piVar10 + 8);
                    uVar5 = *(uint64_t*)(piVar10 + 10);
                    uVar6 = *(uint64_t*)((long)piVar10 + 49);
                    *(uint64_t*)(field_8 + 33) = *(uint64_t*)((long)piVar10 + 41);
                    *(uint64_t*)(field_8 + 41) = uVar6;
                    *(uint64_t*)(field_8 + 24) = uVar4;
                    *(uint64_t*)(field_8 + 32) = uVar5;
                    *(uint64_t*)(field_8 + 8) = uVar2;
                    *(uint64_t*)(field_8 + 16) = uVar3;
                    field_0 = iVar7;
                    field_4 = iVar8;
                    *(uint64_t*)field_8 = uVar1;
                    field_8[48] = 1;
                    return this;
                }
                ++local_48;
                cVar9 = local_48 != local_50;
            } while (cVar9);
        }
        return this;
    }

    // 0x10011b210
    void Client::LocChangeUnchecked(int arg1, LocLayer locLayer, int arg3, int arg4, int arg5, int arg6, int arg7,
                                    int arg8) {
        uint8_t bVar1;
        int iVar2;
        long arg1_00;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        long lVar3;
        world* pwVar4;
        CollisionMap* collisionMap;
        int arg2;
        shared_ptr<dash3d::Decor> local_90;
        LocInfo local_80;
        shared_ptr<dash3d::Decor> local_48;

        if (102 < arg3) {
            return;
        }
        if (arg3 < 1) {
            return;
        }
        if (arg4 < 1) {
            return;
        }
        if (102 < arg4) {
            return;
        }
        if ((m_lowMem != false) && (field_51984 != arg1)) {
            return;
        }
        unsigned long local_60 = (unsigned long)locLayer & 255;
        switch (local_60) {
        case 0:
            pwVar4 = (world*)field_19184.operator->();
            arg1_00 = pwVar4->WallType(arg1, arg3, arg4);
            break;
        case 1:
            pwVar4 = (world*)field_19184.operator->();
            arg1_00 = pwVar4->DecorType(arg1, arg3, arg4);
            break;
        case 2:
            pwVar4 = (world*)field_19184.operator->();
            arg1_00 = pwVar4->SceneType(arg1, arg3, arg4);
            break;
        case 3:
            pwVar4 = (world*)field_19184.operator->();
            arg1_00 = pwVar4->GdType(arg1, arg3, arg4);
            break;
        default:
            arg1_00 = 0;
        }
        if (arg1_00 != 0) {
            iVar2 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(arg1_00);
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(iVar2);
            local_48 = shared_ptr(groundDecor);
            lVar3 = local_48.operator->();
            if (*(int*)(lVar3 + 200) != 0) {
                local_90 = shared_ptr(&local_48);
                local_80 = LocInfo((unsigned char)arg1, (unsigned char)arg3, (unsigned char)arg4, (unsigned char)arg6,
                                   (LocLayer)local_60, &local_90);
                ScriptRunner::SetActiveLoc(local_80);
                lVar3 = local_48.operator->();
                ScriptRunner::ExecuteScript(38, iVar2, *(int*)(lVar3 + 440), 500000);
            }
            ((Minimap*)field_8152.operator->())->DeleteIcons((LocType*)local_48.end(), arg1, arg3, arg4);
            local_80 = rs2lib::CoordGrid(arg1, arg3, arg4);
            m_entityOverlays->DestroyStaticOverlays(local_80, (LocLayer)local_60);
            pwVar4 = (world*)field_19184.operator->();
            pwVar4->TypeCode2(arg1, arg3, arg4, arg1_00);
            if ((uint8_t)(uint8_t)locLayer < 4) {
                (*(void (*)(...))(&DAT_10011b780 + *(int*)(&DAT_10011b780 + local_60 * 4)))();
                return;
            }
            this = this;
        }
        iVar2 = arg1;
        if (-1 < arg5) {
            arg2 = arg1;
            if (arg1 < 3) {
                bVar1 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, 1, arg3, arg4);
                arg2 = (unsigned int)(bVar1 >> 1 & 1) + iVar2;
            }
            pwVar4 = (world*)*field_19184;
            collisionMap = &field_6814744[(long)iVar2];
            local_80.ChangeLocUnchecked(iVar2, arg2, arg3, arg4, arg5, arg6, arg7, arg8, *pwVar4, *collisionMap,
                                        field_8488);
            OnLoadLocation(local_80);
        }
    }

    // 0x10011b7e0
    void Client::CreatePlayer(int arg1) {
        ReturnValue local_30;

        make_shared<ClientPlayer>(&local_30);
        shared_ptr<ClientPlayer>* this_00 = &field_19216[(long)arg1];
        *this_00 = local_30;
        **this_00;
    }

    // 0x10011b8e0
    void Client::DestroyPlayer(int arg1) {
        ScriptRunner::SetActivePlayer(arg1);
        ScriptRunner::ExecuteScript(42, -1, -1, 500000);
        shared_ptr<ClientPlayer>* this_00 = &field_19216[(long)arg1];
        auto local_50 = ((ClientEntity*)(*this_00).operator->())->GetScriptedOverlays();
        auto piVar1 = local_50.HeapBeginPtr();
        auto piVar2 = local_50.end();
        if (piVar1 != piVar2) {
            do {
                m_entityOverlays->DestroyOverlay(*piVar1);
                piVar1 = piVar1 + 2;
            } while (piVar1 != piVar2);
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        *this_00 = local_38;
    }

    // 0x10011b9d0
    auto Client::GetClientNpcWeakPtr(int arg1) {
        weak_ptr<dash3d::GroundDecor>* groundDecor;

        if ((unsigned int)arg1 < 65536) {
            groundDecor = &field_55272[(long)arg1];
            auto result(*groundDecor);
        } else {
            new (&result) shared_ptr();
        }
        return result;
    }

    // 0x10011ba20
    unsigned int Client::GetLastNpcNum() {
        return m_nPCCount;
    }

    // 0x10011ba30
    uint32_t Client::GetLastNpcId(int arg1) {
        unsigned long uVar1;
        uint32_t* puVar2;

        uint32_t uVar3 = 4294967295;
        if (-1 < arg1) {
            uVar1 = field_1103856.end();
            if ((unsigned long)(long)arg1 < uVar1) {
                puVar2 = &field_1103856[(long)arg1];
                uVar3 = *puVar2;
            }
        }
        return uVar3;
    }

    // 0x10011ba80
    unsigned int Client::GetPriorityPlayerId() {
        return m_priorityPlayerId;
    }

    // 0x10011ba90
    auto Client::FindFirstClientObj(rs2lib::CoordGrid& coordGrid, int arg2) {
        list<console::Line>* this_00;
        shared_ptr<ClientObj>* this_01;
        long lVar2;
        uint64_t local_40;
        uint64_t local_38;

        bool cVar1 = ClientConstants::IsCoordInBuildArea(coordGrid);
        if (cVar1) {
            this_00 = (list<console::Line>*)GetObjectsOnTile(coordGrid);
            local_38 = this_00->begin();
            local_40 = this_00->end();
            cVar1 = local_38 != local_40;
            if (cVar1) {
                this_01 = (shared_ptr<ClientObj>*)*local_38;
                lVar2 = (*this_01).operator->();
                if (*(int*)(lVar2 + 24) != arg2) {
                    do {
                        ++local_38;
                        cVar1 = local_38 != local_40;
                        if (!cVar1)
                            goto LAB_10011bb64;
                        this_01 = (shared_ptr<ClientObj>*)*local_38;
                        lVar2 = (*this_01).operator->();
                    } while (*(int*)(lVar2 + 24) != arg2);
                }
                auto result(this_01);
                if (cVar1) {
                    return result;
                }
            }
        }
    LAB_10011bb64:
        new (&result) shared_ptr();
        return result;
    }

    // 0x10011bb80
    auto Client::FindClientObjInStack(rs2lib::CoordGrid& coordGrid, int arg2) {
        uint8_t bVar2;
        list<console::Line>* this_00;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        int iVar3;
        uint64_t local_48;
        uint64_t local_40;
        ReturnValue* local_38;

        if (ClientConstants::IsCoordInBuildArea(coordGrid) != '\0') {
            local_38 = &result;
            this_00 = (list<console::Line>*)GetObjectsOnTile(coordGrid);
            local_48 = this_00->begin();
            local_40 = this_00->end();
            bVar2 = local_48 != local_40;
            if (bVar2 != 0) {
                iVar3 = 0;
                do {
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)*local_48;
                    if (iVar3 == arg2) {
                        new (local_38) shared_ptr(groundDecor);
                        &result = local_38;
                        if ((bVar2 & 1) != 0) {
                            return local_38;
                        }
                        goto LAB_10011bc5b;
                    }
                    iVar3 = iVar3 + 1;
                    ++local_48;
                    bVar2 = local_48 != local_40;
                } while (bVar2 != 0);
            }
            &result = local_38;
        }
    LAB_10011bc5b:
        return auto();
    }

    // 0x10011bc90
    void Client::InjectRoutePoints(ClientPlayer* clientPlayer, int arg2, int arg3, unsigned char arg4) {
        schar arg3_00;
        uint32_t uVar3;
        RouteDestination* routeDestination;
        int iVar7;
        unsigned long arg1;
        uint64_t in_register_00000081;
        array<int, _50ul>* in_stack_ffffffffffffff98;
        ExactTileDestination local_60;
        array<int, 50ul>* local_40;
        unsigned long local_38;

        uint32_t local_44 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg3);
        unsigned int* puVar5 = (unsigned int*)clientPlayer->field_444[0];
        unsigned int uVar1 = *puVar5;
        int* piVar6 = &clientPlayer->field_484[0];
        int iVar4 = *piVar6;
        int iVar2 = clientPlayer->GetSize();
        if (((((iVar2 <= (int)uVar1) && (iVar7 = 104 - iVar2, (int)uVar1 < iVar7)) && (iVar2 <= iVar4)) &&
             ((iVar4 < iVar7 && (iVar2 <= arg2)))) &&
            ((arg2 < iVar7 && ((iVar2 <= (int)local_38 && ((int)local_38 < iVar7)))))) {
            uVar3 = clientPlayer->GetSize();
            local_40 = (array<int, 50ul>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar3);
            CreateExactTileDestination(&local_60, this, arg2, (int)local_38);
            routeDestination = (RouteDestination*)field_6814744[(long)clientPlayer->field_1204];
            iVar2 = (int)local_40;
            local_40 = (array<int, 50ul>*)&field_1115492;
            iVar4 = ((RouteFinding*)(unsigned long)uVar1)
                        ->FindRoute(iVar4, iVar2, (int)&local_60, *routeDestination, DAT_00000001,
                                    (uint8_t)(&field_1115292), field_1115492, *in_stack_ffffffffffffff98);
            if (1 < iVar4) {
                local_38 = (unsigned long)(iVar4 - 1);
                arg1 = 0;
                arg3_00 = (schar)local_44;
                do {
                    piVar6 = &field_1115292[arg1];
                    iVar4 = *piVar6;
                    piVar6 = (int*)(*local_40)[arg1];
                    clientPlayer->AddRoutePoint(iVar4, *piVar6, arg3_00);
                    arg1 = arg1 + 1;
                } while (local_38 != arg1);
            }
        }
    }

    // 0x10011bfc0
    void Client::HighlightRoute(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int arg7;
        RouteHighlighter* routeHighlighter;
        CollisionMap* collisionMap;
        uint64_t uVar1;
        int iVar2;
        uint32_t in_register_0000003c;
        int in_stack_00000008;

        long lVar3 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if (arg3 < in_stack_00000008) {
            uVar1 = 0;
        } else {
            iVar2 = 104 - in_stack_00000008;
            uVar1 = 0;
            if ((((arg3 < iVar2) && (in_stack_00000008 <= arg4)) && (arg4 < iVar2)) &&
                (((uVar1 = 0, in_stack_00000008 <= arg5 && (arg5 < iVar2)) &&
                  ((in_stack_00000008 <= arg6 && (arg6 < iVar2)))))) {
                routeHighlighter = (RouteHighlighter*)(*((lVar3 + 19208))).operator->();
                iVar2 = *(int*)(lVar3 + 53220);
                arg7 = *(int*)(lVar3 + 53224);
                collisionMap = (CollisionMap*)(*((lVar3 + 6814744)))[(long)arg2];
                uVar1 = routeHighlighter->HighlightRoute(arg2, arg3, arg4, arg5, arg6, iVar2, arg7, *collisionMap);
            }
        }
        return uVar1;
    }

    // 0x10011c0a0
    void Client::SetPlayerLevel(int arg1) {
        field_51984 = arg1;
        ((world*)field_19184.operator->())->SetMaxGroundPickingLevel(arg1);
    }

} // namespace jag::oldscape
