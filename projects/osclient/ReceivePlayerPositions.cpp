// projects/osclient/ReceivePlayerPositions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::oldscape {
    class ReceivePlayerPositions {
    public:
        void GetAbsolutePlayerPositions(core::SuperPacket& superPacket);
        void GetPlayerInfo(core::SuperPacket& superPacket, int arg2);
        void GetPlayerPositions(core::SuperPacket& superPacket);
        void GetPlayerPositionsExtended(core::SuperPacket& superPacket);
        void ReadStationary(core::SuperPacket& superPacket);
        void GetHighResPlayerPosition(core::SuperPacket& superPacket, int arg2);
        void GetLowResPlayerPosition(core::SuperPacket& superPacket, int arg2);
        void DecodeExtend(core::SuperPacket& superPacket, int arg2, ClientPlayer& clientPlayer, int arg4);
        void Reset();
        static uint8_t m_plStationary[2048];
        static uint8_t m_plMoveSpeed[2048];
        static shared_ptr<PacketJ<Array<unsigned char>>> m_apCache;
        static uint8_t m_lastNum[16];
        static uint8_t m_lastID[8192];
        static uint8_t m_lastLowRes[16];
        static uint8_t m_lowResPlayerID[8192];
        static uint8_t m_lowResPosition[8192];
        static uint8_t m_lowResFacing[8192];
        static uint8_t m_lowResFaceEntity[8192];
        static uint8_t m_extendCo[16];
        static uint8_t m_extendList[8192];
        static shared_ptr<PacketJ<Array<unsigned char>>> m_tempP;
        static int64_t m_debugPrinted;
        static eastl::fixed_vector<int, 2048ul> m_newVisIDs;       // = fixed_vector<int, 2048ul>()
        static eastl::fixed_vector<int, 2048ul> m_updatedRouteIDs; // = fixed_vector<int, 2048ul>()

        uint8_t _unknown_0[1];
    };

    // 0x100f8d710
    uint8_t ReceivePlayerPositions::m_plStationary[2048];

    // 0x100f8df10
    uint8_t ReceivePlayerPositions::m_plMoveSpeed[2048];

    // 0x100f8e710
    shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>> ReceivePlayerPositions::m_apCache;

    // 0x100f96710
    uint8_t ReceivePlayerPositions::m_lastNum[16];

    // 0x100f96720
    uint8_t ReceivePlayerPositions::m_lastID[8192];

    // 0x100f98720
    uint8_t ReceivePlayerPositions::m_lastLowRes[16];

    // 0x100f98730
    uint8_t ReceivePlayerPositions::m_lowResPlayerID[8192];

    // 0x100f9a730
    uint8_t ReceivePlayerPositions::m_lowResPosition[8192];

    // 0x100f9c730
    uint8_t ReceivePlayerPositions::m_lowResFacing[8192];

    // 0x100f9e730
    uint8_t ReceivePlayerPositions::m_lowResFaceEntity[8192];

    // 0x100fa0730
    uint8_t ReceivePlayerPositions::m_extendCo[16];

    // 0x100fa0740
    uint8_t ReceivePlayerPositions::m_extendList[8192];

    // 0x100fa2740
    shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>> ReceivePlayerPositions::m_tempP;

    // 0x100fa2750
    int64_t ReceivePlayerPositions::m_debugPrinted;

    // 0x100fa2758, set at startup by ___cxx_global_var_init.196
    eastl::fixed_vector<int, 2048ul> ReceivePlayerPositions::m_newVisIDs = fixed_vector<int, 2048ul>();

    // 0x100fa4780, set at startup by ___cxx_global_var_init.197
    eastl::fixed_vector<int, 2048ul> ReceivePlayerPositions::m_updatedRouteIDs = fixed_vector<int, 2048ul>();

    // 0x10018bf90
    void ReceivePlayerPositions::GetAbsolutePlayerPositions(core::SuperPacket& superPacket) {
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* packetJ;
        long lVar5;

        superPacket.GBitStart();
        auto client = Client::Instance();
        unsigned int local_34 = client->field_51988;
        client->CreatePlayer(local_34);
        shared_ptr<ClientPlayer>* clientPlayer = &client->field_19216[(long)(int)local_34];
        client->field_52016 = *clientPlayer;
        ClientPlayer* this_00 = (ClientPlayer*)*client->field_52016;
        this_00->field_1208 = local_34;
        unsigned long uVar7 = 30;
        unsigned int uVar2 = superPacket.gBit(30);
        int iVar6 = (uVar2 >> 14 & 16383) - client->field_53220;
        int* piVar4 = &this_00->field_444[uVar7];
        *piVar4 = iVar6;
        int iVar3 = this_00->GetSize();
        this_00->field_24 = iVar3 * 64 + iVar6 * 128;
        iVar6 = (uVar2 & 16383) - client->field_53224;
        piVar4 = &this_00->field_484[uVar7];
        *piVar4 = iVar6;
        iVar3 = this_00->GetSize();
        this_00->field_28 = iVar3 * 64 + iVar6 * 128;
        uVar2 = (int)uVar2 >> 28 & 255;
        this_00->field_1204 = uVar2;
        client->SetPlayerLevel(uVar2);
        if ((*((shared_ptr<midi2::MidiPlayerMainThread>*)(&m_apCache + (long)(int)local_34 * 16))) != nullptr) {
            packetJ = (PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)*(
                *((shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)(&m_apCache +
                                                                                     (long)(int)local_34 * 16)));
            this_00->SetAppearance(*packetJ);
        }
        m_lastNum = 1;
        m_lastID = local_34;
        (&m_plStationary)[local_34] = 0;
        m_newVisIDs.push_back(local_34);
        m_lastLowRes = 0;
        uVar7 = 1;
        do {
            if (uVar7 != local_34) {
                uVar2 = superPacket.gBit(18);
                *(unsigned int*)(&m_lowResPosition + uVar7 * 4) =
                    (uVar2 & 152832) << 6 | uVar2 & 597 | (uVar2 & 983040) << 12;
                *(uint32_t*)(&m_lowResFacing + uVar7 * 4) = 0;
                *(uint32_t*)(&m_lowResFaceEntity + uVar7 * 4) = 4294967295;
                lVar5 = (long)m_lastLowRes;
                m_lastLowRes = m_lastLowRes + 1;
                (&m_lowResPlayerID)[lVar5] = (int)uVar7;
                (&m_plStationary)[uVar7] = 0;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 2048);
        superPacket.GBitEnd();
    }

    // 0x10018c280
    void ReceivePlayerPositions::GetPlayerInfo(core::SuperPacket& superPacket, int arg2) {
        long lVar2 = superPacket.size();
        m_debugPrinted._0_1_ = 0;
        m_extendCo = 0;
        GetPlayerPositions(superPacket);
        GetPlayerPositionsExtended(superPacket);
        int iVar1 = superPacket.size();
        if (iVar1 - (int)lVar2 != arg2) {
            iVar1 = superPacket.size();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            123, "Did not consume the correct number of bytes! %d expected, %d actual",
                            (unsigned long)(unsigned int)arg2, iVar1 - lVar2);
        }
        auto piVar3 = m_newVisIDs.HeapBeginPtr();
        auto piVar4 = m_newVisIDs.end();
        for (; piVar3 != piVar4; piVar3 = piVar3 + 1) {
            ScriptRunner::SetActivePlayer(*piVar3);
            ScriptRunner::ExecuteScript(41, -1, -1, 500000);
        }
        m_newVisIDs.clear();
        piVar3 = (int*)m_updatedRouteIDs.HeapBeginPtr();
        piVar4 = (int*)m_updatedRouteIDs.end();
        for (; piVar3 != piVar4; piVar3 = piVar3 + 1) {
            ScriptRunner::SetActivePlayer(*piVar3);
            ScriptRunner::ExecuteScript(49, -1, -1, 500000);
        }
        m_updatedRouteIDs.clear();
    }

    // 0x10018c3c0
    void ReceivePlayerPositions::GetPlayerPositions(core::SuperPacket& superPacket) {
        int iVar1;
        uint8_t bVar2;
        bool cVar3;
        bool bVar4;
        int iVar5;
        unsigned int uVar6;
        Client* pCVar7;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        uint32_t* puVar8;
        int* piVar9;
        long lVar10;

        superPacket.GBitStart();
        if (m_lastNum < 1) {
            uVar6 = 0;
        } else {
            lVar10 = 0;
            piVar9 = &m_lastID;
            uVar6 = 0;
            do {
                iVar1 = *piVar9;
                if (((&m_plStationary)[iVar1] & 1) == 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = superPacket.gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(superPacket);
                            (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                        } else {
                            GetHighResPlayerPosition(superPacket, iVar1);
                        }
                    } else {
                        uVar6 = uVar6 - 1;
                        (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                    }
                }
                lVar10 = lVar10 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar10 < m_lastNum);
        }
        superPacket.GBitEnd();
        if (uVar6 != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            175, "numstationary non-zero at 0 of getplayerpositions - %i", (unsigned long)uVar6);
        }
        superPacket.GBitStart();
        uVar6 = 0;
        if (0 < m_lastNum) {
            piVar9 = &m_lastID;
            lVar10 = 0;
            do {
                iVar1 = *piVar9;
                if (((&m_plStationary)[iVar1] & 1) != 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = superPacket.gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(superPacket);
                            (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                        } else {
                            GetHighResPlayerPosition(superPacket, iVar1);
                        }
                    } else {
                        uVar6 = uVar6 - 1;
                        (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                    }
                }
                lVar10 = lVar10 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar10 < m_lastNum);
        }
        superPacket.GBitEnd();
        if (uVar6 != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            207, "numstationary non-zero at 1 of getplayerpositions - %i", (unsigned long)uVar6);
        }
        superPacket.GBitStart();
        uVar6 = 0;
        if (0 < m_lastLowRes) {
            piVar9 = &m_lowResPlayerID;
            lVar10 = 0;
            do {
                iVar1 = *piVar9;
                bVar2 = (&m_plStationary)[iVar1];
                if ((bVar2 & 1) != 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = superPacket.gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(superPacket);
                        } else {
                            cVar3 = GetLowResPlayerPosition(superPacket, iVar1);
                            if (!cVar3)
                                goto LAB_10018c5aa;
                        }
                        bVar2 = (&m_plStationary)[iVar1];
                    } else {
                        uVar6 = uVar6 - 1;
                    }
                    (&m_plStationary)[iVar1] = bVar2 | 2;
                }
            LAB_10018c5aa:
                lVar10 = lVar10 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar10 < m_lastLowRes);
        }
        superPacket.GBitEnd();
        if (uVar6 != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            242, "numstationary non-zero at 2 of getplayerpositions - %i", (unsigned long)uVar6);
        }
        superPacket.GBitStart();
        uVar6 = 0;
        if (0 < m_lastLowRes) {
            piVar9 = &m_lowResPlayerID;
            lVar10 = 0;
            do {
                iVar1 = *piVar9;
                bVar2 = (&m_plStationary)[iVar1];
                if ((bVar2 & 1) == 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = superPacket.gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(superPacket);
                        } else {
                            cVar3 = GetLowResPlayerPosition(superPacket, iVar1);
                            if (!cVar3)
                                goto LAB_10018c67a;
                        }
                        bVar2 = (&m_plStationary)[iVar1];
                    } else {
                        uVar6 = uVar6 - 1;
                    }
                    (&m_plStationary)[iVar1] = bVar2 | 2;
                }
            LAB_10018c67a:
                lVar10 = lVar10 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar10 < m_lastLowRes);
        }
        superPacket.GBitEnd();
        if (uVar6 != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            277, "numstationary non-zero at 3 of getplayerpositions - %i", (unsigned long)uVar6);
        }
        m_lastNum = 0;
        m_lastLowRes = 0;
        unsigned long arg1 = 1;
        do {
            (&m_plStationary)[arg1] = (char)(&m_plStationary)[arg1] >> 1;
            pCVar7 = Client::Instance();
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)pCVar7->field_19216[arg1];
            bVar4 = *midiPlayerMainThread != nullptr;
            piVar9 = &m_lastLowRes;
            if (bVar4) {
                piVar9 = &m_lastNum;
            }
            puVar8 = &m_lowResPlayerID;
            if (bVar4) {
                puVar8 = &m_lastID;
            }
            iVar1 = *piVar9;
            *piVar9 = iVar1 + 1;
            puVar8[iVar1] = (int)arg1;
            arg1 = arg1 + 1;
        } while (arg1 != 2048);
    }

    // 0x10018c7b0
    void ReceivePlayerPositions::GetPlayerPositionsExtended(core::SuperPacket& superPacket) {
        int arg2;
        uint8_t bVar1;
        uint8_t uVar2;
        Client* pCVar3;
        shared_ptr<ClientPlayer>* shared_ptr;
        ClientPlayer* clientPlayer;
        unsigned int arg4;
        int* piVar4;
        long lVar5;

        if (0 < m_extendCo) {
            piVar4 = &m_extendList;
            lVar5 = 0;
            do {
                arg2 = *piVar4;
                pCVar3 = Client::Instance();
                shared_ptr = &pCVar3->field_19216[(long)arg2];
                clientPlayer = (ClientPlayer*)**shared_ptr;
                bVar1 = superPacket.g1();
                arg4 = (unsigned int)bVar1;
                if ((bVar1 & 1) != 0) {
                    uVar2 = superPacket.g1();
                    arg4 = (unsigned int)(((uint16_t)uVar2 << 8) | (uint8_t)bVar1);
                }
                if ((short)arg4 < 0) {
                    bVar1 = superPacket.g1();
                    arg4 = arg4 | (unsigned int)bVar1 << 16;
                }
                DecodeExtend(superPacket, arg2, clientPlayer, arg4);
                lVar5 = lVar5 + 1;
                piVar4 = piVar4 + 1;
            } while (lVar5 < m_extendCo);
        }
    }

    // 0x10018c8e0
    void ReceivePlayerPositions::ReadStationary(core::SuperPacket& superPacket) {
        int iVar1 = superPacket.gBit(2);
        if (iVar1 != 0) {
            if (iVar1 == 1) {
                iVar1 = 5;
            } else if (iVar1 == 2) {
                iVar1 = 8;
            } else {
                iVar1 = 11;
            }
            superPacket.gBit(iVar1);
        }
    }

    // 0x10018c930
    void ReceivePlayerPositions::GetHighResPlayerPosition(core::SuperPacket& superPacket, int arg2) {
        uint32_t uVar3;
        unsigned int uVar4;
        int* piVar6;
        schar arg3;
        unsigned int uVar7;
        long lVar8;
        int iVar9;
        unsigned int uVar11;

        auto pCVar5 = Client::Instance();
        int iVar1 = superPacket.gBit(1);
        if (iVar1 == 1) {
            lVar8 = (long)m_extendCo;
            m_extendCo = m_extendCo + 1;
            (&m_extendList)[lVar8] = arg2;
        }
        int iVar2 = superPacket.gBit(2);
        unsigned long uVar10 = (unsigned long)arg2;
        shared_ptr<ClientPlayer>* shared_ptr = &pCVar5->field_19216[uVar10];
        ClientPlayer* this_00 = (ClientPlayer*)**shared_ptr;
        if (iVar2 == 0) {
            if (iVar1 == 1) {
                this_00->field_1212 = 0;
                return;
            }
            if (arg2 == pCVar5->field_51988) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ReceivePlayerPositions.cpp",
                                346, "Self was moved to low resolution!");
            }
            iVar1 = this_00->field_1204;
            uVar4 = pCVar5->field_53220;
            piVar6 = &this_00->field_444[uVar10];
            iVar2 = *piVar6;
            uVar7 = pCVar5->field_53224;
            piVar6 = &this_00->field_484[uVar10];
            lVar8 = (long)arg2;
            *(unsigned int*)(&m_lowResPosition + lVar8 * 4) =
                ((int)(uVar7 + *piVar6) >> 13) + iVar1 * 268435456 + (uVar4 + iVar2 & 4294959104) * 2;
            iVar1 = this_00->field_336;
            if (iVar1 == -1) {
                iVar1 = this_00->field_428;
            }
            *(int*)(&m_lowResFacing + lVar8 * 4) = iVar1;
            *(uint32_t*)(&m_lowResFaceEntity + lVar8 * 4) = this_00->field_328;
            pCVar5->DestroyPlayer(arg2);
            iVar1 = superPacket.gBit(1);
            if (iVar1 == 0) {
                return;
            }
            GetLowResPlayerPosition(superPacket, arg2);
            return;
        }
        m_updatedRouteIDs.push_back(arg2);
        if (iVar2 != 2) {
            if (iVar2 != 1) {
                iVar2 = superPacket.gBit(1);
                if (iVar2 == 0) {
                    uVar10 = 12;
                    uVar4 = superPacket.gBit(12);
                    uVar11 = uVar4 >> 10;
                    uVar7 = uVar4 >> 5 & 31;
                    piVar6 = &this_00->field_444[uVar10];
                    iVar9 = ((unsigned int)(uVar7 < 16) << 5 | uVar7) + *piVar6 - 32;
                    piVar6 = &this_00->field_484[uVar10];
                    iVar2 = *piVar6 + ((unsigned int)((uVar4 & 31) < 16) << 5 | uVar4 & 31) - 32;
                    if ((arg2 != pCVar5->field_51988) ||
                        ((((1535 < this_00->field_24 && (this_00->field_28 < 11776)) && (1535 < this_00->field_28)) &&
                          (this_00->field_24 < 11776)))) {
                        if (iVar1 == 1) {
                            this_00->field_1212 = 1;
                            *(int*)&this_00->field_1216 = iVar9;
                            *(int*)&this_00->field_1220 = iVar2;
                            goto LAB_10018cda4;
                        }
                        this_00->field_1212 = 0;
                        arg3 = (&m_plMoveSpeed)[arg2];
                        goto LAB_10018cd9f;
                    }
                } else {
                    uVar10 = 30;
                    uVar4 = superPacket.gBit(30);
                    uVar11 = uVar4 >> 28;
                    piVar6 = &this_00->field_444[uVar10];
                    iVar9 = ((uVar4 >> 14) + *piVar6 + pCVar5->field_53220 & 16383) - pCVar5->field_53220;
                    piVar6 = &this_00->field_484[uVar10];
                    iVar2 = (uVar4 + *piVar6 + pCVar5->field_53224 & 16383) - pCVar5->field_53224;
                    if ((arg2 != pCVar5->field_51988) ||
                        (((1535 < this_00->field_24 && (this_00->field_28 < 11776)) &&
                          ((1535 < this_00->field_28 && (this_00->field_24 < 11776)))))) {
                        if (iVar1 == 1) {
                            this_00->field_1212 = 1;
                            *(int*)&this_00->field_1216 = iVar9;
                            *(int*)&this_00->field_1220 = iVar2;
                            goto LAB_10018cda4;
                        }
                        this_00->field_1212 = 0;
                        arg3 = (&m_plMoveSpeed)[arg2];
                    LAB_10018cd9f:
                        this_00->AddToRoute(iVar9, iVar2, arg3);
                        goto LAB_10018cda4;
                    }
                }
                this_00->InstantMove(iVar9, iVar2);
                this_00->field_1212 = 0;
            LAB_10018cda4:
                this_00->field_1204 = uVar11 + this_00->field_1204 & 3;
                if (arg2 == pCVar5->field_51988) {
                    pCVar5 = Client::Instance();
                    pCVar5->SetPlayerLevel(this_00->field_1204);
                    return;
                }
                return;
            }
            uVar10 = 3;
            uVar3 = superPacket.gBit(3);
            piVar6 = &this_00->field_444[uVar10];
            iVar2 = *piVar6;
            piVar6 = &this_00->field_484[uVar10];
            iVar9 = *piVar6;
            switch (uVar3) {
            case 0:
                iVar2 = iVar2 - 1;
            case 1:
                iVar9 = iVar9 - 1;
                break;
            case 2:
                iVar2 = iVar2 + 1;
                iVar9 = iVar9 - 1;
                break;
            case 3:
                iVar2 = iVar2 - 1;
                break;
            case 4:
                iVar2 = iVar2 + 1;
                break;
            case 5:
                iVar2 = iVar2 - 1;
            case 6:
            switchD_10018ca15_caseD_6:
                iVar9 = iVar9 + 1;
                break;
            case 7:
                iVar2 = iVar2 + 1;
                goto switchD_10018ca15_caseD_6;
            }
            goto switchD_10018ca15_default;
        }
        uVar10 = 4;
        uVar3 = superPacket.gBit(4);
        piVar6 = &this_00->field_444[uVar10];
        iVar2 = *piVar6;
        piVar6 = &this_00->field_484[uVar10];
        iVar9 = *piVar6;
        switch (uVar3) {
        case 0:
            iVar2 = iVar2 - 2;
            iVar9 = iVar9 - 2;
            break;
        case 1:
            iVar2 = iVar2 - 1;
        case 2:
            iVar9 = iVar9 - 2;
            break;
        case 3:
            iVar2 = iVar2 + 1;
            iVar9 = iVar9 - 2;
            break;
        case 4:
            iVar2 = iVar2 + 2;
            iVar9 = iVar9 - 2;
            break;
        case 5:
            iVar2 = iVar2 - 2;
            iVar9 = iVar9 - 1;
            break;
        case 6:
            iVar2 = iVar2 + 2;
            iVar9 = iVar9 - 1;
            break;
        case 7:
            iVar2 = iVar2 - 2;
            break;
        case 8:
            iVar2 = iVar2 + 2;
            break;
        case 9:
            iVar2 = iVar2 - 2;
            goto switchD_10018ca15_caseD_6;
        case 10:
            iVar2 = iVar2 + 2;
            goto switchD_10018ca15_caseD_6;
        case 11:
            iVar2 = iVar2 - 2;
            goto switchD_10018ca82_caseD_d;
        case 12:
            iVar2 = iVar2 - 1;
        case 13:
            goto switchD_10018ca82_caseD_d;
        case 14:
            iVar2 = iVar2 + 1;
            goto switchD_10018ca82_caseD_d;
        case 15:
            iVar2 = iVar2 + 2;
        switchD_10018ca82_caseD_d:
            iVar9 = iVar9 + 2;
        }
    switchD_10018ca15_default:
        if ((arg2 == pCVar5->field_51988) && (((this_00->field_24 < 1536 || (11775 < this_00->field_28)) ||
                                               ((this_00->field_28 < 1536 || (11775 < this_00->field_24)))))) {
            this_00->InstantMove(iVar2, iVar9);
            this_00->field_1212 = 0;
        } else if (iVar1 == 1) {
            this_00->field_1212 = 1;
            *(int*)&this_00->field_1216 = iVar2;
            *(int*)&this_00->field_1220 = iVar9;
        } else {
            this_00->field_1212 = 0;
            this_00->AddToRoute(iVar2, iVar9, (&m_plMoveSpeed)[arg2]);
        }
    }

    // 0x10018cf40
    void ReceivePlayerPositions::GetLowResPlayerPosition(core::SuperPacket& superPacket, int arg2) {
        uint8_t uVar1;
        int iVar4;
        unsigned int uVar6;
        unsigned int uVar7;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<ClientPlayer>* this_00;
        ClientPlayer* this_01;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* packetJ;
        uint8_t* puVar8;
        long lVar9;
        unsigned int uVar10;

        auto client = Client::Instance();
        int iVar3 = superPacket.gBit(2);
        if (iVar3 == 2) {
            uVar6 = superPacket.gBit(5);
            uVar10 = uVar6 & 7;
            uVar7 = *(unsigned int*)(&m_lowResPosition + (long)arg2 * 4);
            *(unsigned int*)(&m_lowResPosition + (long)arg2 * 4) =
                (((uVar7 & 255) + (unsigned int)(uVar10 == 0) * -16385) - (unsigned int)(uVar10 == 1)) +
                (unsigned int)(uVar10 == 2) * 16383 + (unsigned int)(uVar10 == 5) * -16383 +
                (unsigned int)(uVar10 == 6) + (unsigned int)(uVar10 == 7) * 16385 +
                ((uVar6 & 24) * 33554432 + uVar7 & 805306368) + (uVar7 & 4177920) +
                (unsigned int)(uVar10 == 3) * -16384 + (unsigned int)(uVar10 == 4) * 16384;
        } else if (iVar3 == 1) {
            iVar3 = superPacket.gBit(2);
            *(unsigned int*)(&m_lowResPosition + (long)arg2 * 4) =
                *(unsigned int*)(&m_lowResPosition + (long)arg2 * 4) & 268435455 |
                iVar3 * 268435456 + *(unsigned int*)(&m_lowResPosition + (long)arg2 * 4) & 805306368;
        } else {
            if (iVar3 == 0) {
                iVar3 = superPacket.gBit(1);
                if (iVar3 != 0) {
                    GetLowResPlayerPosition(superPacket, arg2);
                }
                iVar3 = superPacket.gBit(13);
                iVar4 = superPacket.gBit(13);
                if (superPacket.gBit(1) == 1) {
                    lVar9 = (long)m_extendCo;
                    m_extendCo = m_extendCo + 1;
                    (&m_extendList)[lVar9] = arg2;
                }
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)client->field_19216[(long)arg2];
                if (*midiPlayerMainThread != nullptr) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ReceivePlayerPositions.cpp",
                                    670, "high res player when expecting low res");
                }
                client->CreatePlayer(arg2);
                this_00 = &client->field_19216[(long)arg2];
                this_01 = (ClientPlayer*)**this_00;
                this_01->field_1208 = arg2;
                packetJ = nullptr;
                if ((*((shared_ptr<midi2::MidiPlayerMainThread>*)(&m_apCache + (long)arg2 * 16))) != nullptr) {
                    packetJ = (PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)*(
                        *((shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)(&m_apCache +
                                                                                             (long)arg2 * 16)));
                    this_01->SetAppearance(*packetJ);
                }
                lVar9 = (long)arg2;
                this_01->field_428 = *(int*)(&m_lowResFacing + lVar9 * 4);
                this_01->field_328 = *(uint32_t*)(&m_lowResFaceEntity + lVar9 * 4);
                uVar7 = *(unsigned int*)(&m_lowResPosition + lVar9 * 4);
                uVar1 = (&m_plMoveSpeed)[lVar9];
                puVar8 = &this_01->field_524[(unsigned long)packetJ];
                *puVar8 = uVar1;
                this_01->field_1204 = (int)uVar7 >> 28 & 255;
                this_01->InstantMove(((uVar7 >> 1 & 2088960) + iVar3) - client->field_53220,
                                     ((uVar7 & 255) * 8192 + iVar4) - client->field_53224);
                this_01->field_1212 = 0;
                m_newVisIDs.push_back(arg2);
                m_updatedRouteIDs.push_back(arg2);
                return 1;
            }
            uVar7 = superPacket.gBit(18);
            iVar3 = *(int*)(&m_lowResPosition + (long)arg2 * 4);
            *(unsigned int*)(&m_lowResPosition + (long)arg2 * 4) = (uVar7 & 65280) * 64 + iVar3 & 4177920 |
                                                                   (uVar7 & 196608) * 4096 + iVar3 & 805306368 |
                                                                   iVar3 + uVar7 & 255;
        }
        return 0;
    }

    // 0x10018d2c0
    void ReceivePlayerPositions::DecodeExtend(core::SuperPacket& superPacket, int arg2, ClientPlayer& clientPlayer,
                                              int arg4) {
        uint8_t* puVar1;
        uint8_t bVar2;
        char cVar3;
        bool bVar4;
        bool cVar5;
        uint8_t uVar6;
        unsigned short uVar7;
        uint16_t uVar8;
        unsigned int uVar9;
        int iVar10;
        uint32_t uVar11;
        int iVar12;
        long lVar15;
        FriendSystem* pFVar20;
        DisplayName* pDVar21;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar22;
        PacketT<Array<unsigned char, BucketAllocatorEASTL> _>* pPVar23;
        WordPack* pWVar24;
        char* pcVar25;
        unsigned long uVar26;
        uint8_t* puVar27;
        ClientPlayer* pCVar28;
        long lVar29;
        int* piVar31;
        int* piVar34;
        int* piVar35;
        eastl::string* pbVar36;
        ShuffledPacket2* pSVar37;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* pPVar38;
        unsigned int uVar39;
        unsigned int uVar40;
        eastl::string local_168;
        ReturnValue local_148;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* local_108;
        unsigned int local_100[8];
        basic_string<char, BucketAllocatorEASTL> local_e0;
        ShuffledPacket3* local_c8;
        uint64_t local_c0;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_b8;
        shared_ptr<rs2lib::social::DisplayName>* local_b0;
        ReturnValue local_a8;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_68;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_60;

        auto local_48 = Client::Instance();
        SuperPacket* local_78 = superPacket;
        SuperShuffledPacketFactory local_88(superPacket);
        auto pPVar13 = ShuffledPacketFactory::p2_alt2();
        auto pSVar14 = ShuffledPacketFactory::p2_alt2();
        if ((arg4 & 8U) != 0) {
            bVar2 = pPVar13->g1();
            local_100[0] = (unsigned int)bVar2;
            make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(&local_a8, (int*)local_100);
            lVar15 = (long)arg2;
            (*((&m_apCache + lVar15 * 16))) = local_a8;
            superPacket = (SuperPacket*)*(*((&m_apCache + lVar15 * 16)));
            pSVar14->gArrayBuffer(superPacket, (long)(int)local_100[0]);
            clientPlayer.SetAppearance(superPacket);
        }
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        ClientPlayer* local_38 = clientPlayer;
        auto local_40 = ShuffledPacketFactory::p2_alt2();
        auto local_58 = ShuffledPacketFactory::p2_alt2();
        auto pPVar16 = ShuffledPacketFactory::p2_alt2();
        Client* pCVar33 = local_48;
        if ((((unsigned int)arg4 & 65536) != 0) && (bVar2 = pPVar13->g1(), bVar2 != 0)) {
            uVar39 = (unsigned int)bVar2;
            do {
                bVar2 = local_40->g1();
                superPacket = (SuperPacket*)(unsigned long)bVar2;
                uVar7 = local_58->g2();
                uVar9 = pPVar16->g4();
                local_38->AddSpotAnim((unsigned int)bVar2, (unsigned int)uVar7, (int)uVar9 >> 16, uVar9 & 65535,
                                      pCVar33->field_8488);
                uVar39 = uVar39 - 1;
            } while (uVar39 != 0);
        }
        auto pSVar17 = ShuffledPacketFactory::p2_alt2();
        ClientPlayer* pCVar32 = local_38;
        uVar39 = (unsigned int)arg4;
        if (((unsigned int)arg4 & 64) != 0) {
            uVar7 = pSVar17->g2();
            pCVar32->field_336 = (unsigned int)uVar7;
            if (pCVar32->field_440 == 0) {
                pCVar32->field_428 = (unsigned int)uVar7;
                pCVar32->ClearPendingFacing();
            }
        }
        pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        auto pSVar18 = ShuffledPacketFactory::p2_alt2();
        if ((uVar39 & 16) != 0) {
            uVar7 = pSVar17->g2();
            pCVar32->field_328 = (unsigned int)uVar7;
            bVar2 = pSVar18->g1();
            iVar10 = (unsigned int)bVar2 * 65536 + pCVar32->field_328;
            iVar12 = -1;
            if (iVar10 != 16777215) {
                iVar12 = iVar10;
            }
            pCVar32->field_328 = iVar12;
        }
        pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        pSVar18 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        local_40 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pSVar14 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
        auto pSVar19 = ShuffledPacketFactory::p2_alt2();
        if (((unsigned int)arg4 & 4096) != 0) {
            local_c8 = pSVar14;
            local_58 = pSVar19;
            uVar9 = pSVar17->g2();
            bVar2 = pSVar18->g1();
            local_c0 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)((((uint64_t)local_c0._4_4_ << 32) |
                                                                               (uint32_t)uVar9) &
                                                                              18446744069414649855);
            uVar40 = (uVar9 & 65535) >> 8;
            uVar39 = uVar40 - 12;
            if (2047 < (uVar9 - 3328 & 65535)) {
                uVar39 = 0;
            }
            local_60 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)constants::ChatCrownType::FromId(
                (unsigned int)bVar2);
            cVar3 = pPVar13->g1();
            local_b8 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(((uint64_t)local_b8._1_7_ << 8) |
                                                                              (uint8_t)cVar3);
            bVar2 = local_40->g1();
            lVar15 = local_78->size();
            local_b0 = (shared_ptr<rs2lib::social::DisplayName>*)&local_38->field_992;
            bVar4 = *local_b0 != nullptr;
            pPVar38 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(long)(int)uVar39;
            pSVar14 = (ShuffledPacket3*)(unsigned long)bVar2;
            if (bVar4) {
                local_68 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(long)(int)uVar39;
                local_40 = (ShuffledPacket2*)(unsigned long)bVar2;
                bVar4 = local_38->field_1008 != nullptr;
                pPVar38 = local_68;
                pSVar14 = (ShuffledPacket3*)local_40;
                if (bVar4) {
                    if (*(char*)((long)local_60 + 6) != '\0') {
                        pFVar20 = (FriendSystem*)local_48->field_52768.operator->();
                        pDVar21 = (DisplayName*)**local_b0;
                        cVar5 = pFVar20->IsIgnored(*pDVar21);
                        pPVar38 = local_68;
                        pSVar14 = (ShuffledPacket3*)local_40;
                        if (cVar5)
                            goto LAB_10018d93a;
                    }
                    pPVar38 = local_68;
                    pSVar14 = (ShuffledPacket3*)local_40;
                    if ((local_48->field_52440 == 0) && (local_38->field_1200 == '\0')) {
                        pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)m_tempP.operator->();
                        pPVar22->SetPos(0);
                        pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL> _>*)*m_tempP;
                        local_c8->gArrayBuffer(*pPVar23, (unsigned long)local_40);
                        pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)m_tempP.operator->();
                        pPVar22->SetPos(0);
                        local_e0 = eastl::basic_string<char, BucketAllocatorEASTL>();
                        pWVar24 = (WordPack*)local_48->field_54176.operator->();
                        pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL> _>*)*m_tempP;
                        pWVar24->UnpackCP1252AsUTF8(local_e0, *pPVar23);
                        pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar26 = local_e0.size();
                        local_a8 = jstring::PixfontGeneric::Escape(pcVar25, uVar26);
                        core::stringtools::general::StringTools::ForceCapitalisationOfWords(local_a8);
                        puVar1 = &local_38->field_112;
                        *puVar1 = &local_a8;
                        puVar1->trim();
                        *(unsigned int*)((long)&local_38->field_148 + 4) = uVar40;
                        local_38->field_156 = (unsigned int)(uint8_t)local_c0;
                        *(uint32_t*)&local_38->field_148 = 150;
                        *(bool*)&local_38->field_144 = cVar3 == '\x01';
                        *(uint8_t*)((long)&local_38->field_144 + 1) = 0;
                        puVar1 = &local_38->field_160;
                        puVar1->clear();
                        if ((uVar39 - 1 < 8) && (puVar1->resize((unsigned long)local_68), 0 < (int)uVar39)) {
                            uVar26 = 0;
                            do {
                                uVar6 = local_58->g1();
                                puVar27 = (uint8_t*)(*puVar1)[uVar26];
                                *puVar27 = uVar6;
                                uVar26 = uVar26 + 1;
                            } while (uVar39 != uVar26);
                        }
                        new (local_100) eastl::string(local_a8);
                        local_100->make_lower();
                        pCVar32 = local_38;
                        pCVar28 = (ClientPlayer*)local_48->field_52016.end();
                        if (pCVar28 == pCVar32) {
                        LAB_10018d83d:
                            bVar4 = false;
                        } else if (*(char*)((long)local_60 + 6) == '\0') {
                            bVar4 = false;
                        } else {
                            puVar1 = &local_48->field_53320;
                            bVar4 = *puVar1 != (*((value_type*)""));
                            if (!bVar4)
                                goto LAB_10018d83d;
                            lVar29 = local_100->find(puVar1, 0);
                            bVar4 = lVar29 == -1;
                        }
                        *(bool*)((long)&pCVar32->field_144 + 1) = bVar4;
                        iVar12 = 1;
                        if ((char)local_b8 == '\x01') {
                            iVar12 = 91;
                        }
                        iVar10 = 2;
                        if ((char)local_b8 == '\x01') {
                            iVar10 = 90;
                        }
                        if (*(char*)((long)local_60 + 5) != '\0') {
                            iVar10 = iVar12;
                        }
                        if (*(int*)local_60 == -1) {
                            pDVar21 = (DisplayName*)(*local_b0).operator->();
                            pbVar36 = pDVar21->GetDisplayName();
                            local_48->AddChat(iVar10, *pbVar36, local_a8);
                        } else {
                            local_148 = StringConstants::TAG_IMG(*(int*)local_60);
                            pDVar21 = (DisplayName*)(*local_b0).operator->();
                            pDVar21->GetDisplayName();
                            local_168 + local_148;
                            local_48->AddChat(iVar10, local_168, local_a8);
                        }
                        pPVar38 = local_68;
                        pSVar14 = (ShuffledPacket3*)local_40;
                    }
                }
            }
        LAB_10018d93a:
            superPacket = (SuperPacket*)(&pSVar14->field_0 + (long)pPVar38 + lVar15);
            local_78->SetPos((unsigned long)superPacket);
        }
        pSVar14 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
        auto shuffledPacket3 = ShuffledPacketFactory::p2_alt2();
        auto this_00 = ShuffledPacketFactory::p2_alt2();
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        auto pSVar30 = ShuffledPacketFactory::p2_alt2();
        if (((unsigned int)arg4 & 32) != 0) {
            local_40 = (ShuffledPacket2*)pSVar30;
            uVar8 = pSVar14->g2();
            local_58 = (ShuffledPacket4*)(((uint64_t)local_58._2_6_ << 16) | (uint16_t)uVar8);
            bVar2 = shuffledPacket3->g1();
            piVar31 = (int*)constants::ChatCrownType::FromId((unsigned int)bVar2);
            cVar3 = this_00->g1();
            local_68 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(((uint64_t)local_68._1_7_ << 8) |
                                                                              (uint8_t)cVar3);
            local_60 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(((uint64_t)local_60._1_7_ << 8) |
                                                                              (uint8_t)(cVar3 == '\x01'));
            bVar2 = pPVar13->g1();
            lVar15 = local_78->size();
            puVar1 = &local_38->field_992;
            bVar4 = *puVar1 != nullptr;
            pSVar18 = (ShuffledPacket2*)(unsigned long)bVar2;
            if ((bVar4) && (bVar4 = local_38->field_1008 != nullptr, bVar4)) {
                if (*(char*)((long)piVar31 + 6) != '\0') {
                    pFVar20 = (FriendSystem*)local_48->field_52768.operator->();
                    pDVar21 = (DisplayName*)**puVar1;
                    cVar3 = pFVar20->IsIgnored(*pDVar21);
                    if (cVar3)
                        goto LAB_10018dcd5;
                }
                if ((local_48->field_52440 == 0) && (local_38->field_1200 == '\0')) {
                    pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)m_tempP.operator->();
                    pPVar22->SetPos(0);
                    pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL> _>*)*m_tempP;
                    pSVar37 = local_40;
                    local_40 = pSVar18;
                    pSVar37->gArrayBuffer(*pPVar23, (unsigned long)pSVar18);
                    pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)m_tempP.operator->();
                    pPVar22->SetPos(0);
                    local_e0 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    pWVar24 = (WordPack*)local_48->field_54176.operator->();
                    pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL> _>*)*m_tempP;
                    pWVar24->UnpackCP1252AsUTF8(local_e0, *pPVar23);
                    pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar26 = local_e0.size();
                    local_a8 = jstring::PixfontGeneric::Escape(pcVar25, uVar26);
                    core::stringtools::general::StringTools::ForceCapitalisationOfWords(local_a8);
                    pSVar18 = local_40;
                    puVar27 = &local_38->field_112;
                    *puVar27 = &local_a8;
                    puVar27->trim();
                    *(unsigned int*)((long)&local_38->field_148 + 4) = (unsigned int)((unsigned short)local_58 >> 8);
                    local_38->field_156 = (unsigned int)(uint8_t)local_58;
                    *(uint32_t*)&local_38->field_148 = 150;
                    *(uint8_t*)&local_38->field_144 = local_60._0_1_;
                    *(uint8_t*)((long)&local_38->field_144 + 1) = 0;
                    new (local_100) eastl::string(local_a8);
                    local_100->make_lower();
                    pCVar32 = (ClientPlayer*)local_48->field_52016.end();
                    if ((pCVar32 == local_38) || (*(char*)((long)piVar31 + 6) == '\0')) {
                    LAB_10018dbec:
                        bVar4 = false;
                    } else {
                        puVar27 = &local_48->field_53320;
                        bVar4 = *puVar27 != (*((value_type*)""));
                        if (!bVar4)
                            goto LAB_10018dbec;
                        lVar29 = local_100->find(puVar27, 0);
                        bVar4 = lVar29 == -1;
                    }
                    *(bool*)((long)&local_38->field_144 + 1) = bVar4;
                    iVar12 = 1;
                    if ((char)local_68 == '\x01') {
                        iVar12 = 91;
                    }
                    iVar10 = 2;
                    if ((char)local_68 == '\x01') {
                        iVar10 = 90;
                    }
                    if (*(char*)((long)piVar31 + 5) != '\0') {
                        iVar10 = iVar12;
                    }
                    if (*piVar31 == -1) {
                        pDVar21 = (DisplayName*)(*puVar1).operator->();
                        pbVar36 = pDVar21->GetDisplayName();
                        local_48->AddChat(iVar10, *pbVar36, local_a8);
                    } else {
                        local_148 = StringConstants::TAG_IMG(*piVar31);
                        pDVar21 = (DisplayName*)(*puVar1).operator->();
                        pDVar21->GetDisplayName();
                        local_168 + local_148;
                        local_48->AddChat(iVar10, local_168, local_a8);
                    }
                }
            }
        LAB_10018dcd5:
            superPacket = (SuperPacket*)(&((ShuffledPacket3*)pSVar18)->field_0 + lVar15);
            local_78->SetPos((unsigned long)superPacket);
        }
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        local_60 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)SuperShuffledPacketFactory::gSmarts();
        local_c0 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)SuperShuffledPacketFactory::gSmarts();
        local_b8 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)SuperShuffledPacketFactory::gSmarts();
        auto local_128 = SuperShuffledPacketFactory::gSmarts();
        auto local_120 = SuperShuffledPacketFactory::gSmarts();
        auto local_118 = SuperShuffledPacketFactory::gSmarts();
        local_68 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)SuperShuffledPacketFactory::gSmarts();
        pPVar16 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        local_58 = (ShuffledPacket4*)SuperShuffledPacketFactory::gSmarts();
        local_78 = (SuperPacket*)SuperShuffledPacketFactory::gSmarts();
        local_b0 = (shared_ptr<rs2lib::social::DisplayName>*)SuperShuffledPacketFactory::gSmarts();
        local_c8 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
        auto local_110 = ShuffledPacketFactory::p2_alt2();
        pCVar32 = local_38;
        if (((unsigned int)arg4 & 4) != 0) {
            local_108 = pPVar16;
            bVar2 = pPVar13->g1();
            if (bVar2 != 0) {
                uVar39 = (unsigned int)bVar2;
                do {
                    uVar9 = local_60->gSmarts();
                    iVar12 = -1;
                    if (uVar9 == 32766) {
                        local_40 = (ShuffledPacket2*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)4294967295);
                        iVar10 = -1;
                        uVar9 = 4294967295;
                    } else if (uVar9 == 32767) {
                        uVar9 = local_c0->gSmarts();
                        uVar11 = local_b8->gSmarts();
                        local_40 = (ShuffledPacket2*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar11);
                        iVar10 = local_128->gSmarts();
                        iVar12 = local_120->gSmarts();
                    } else {
                        uVar11 = local_118->gSmarts();
                        local_40 = (ShuffledPacket2*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar11);
                        iVar10 = -1;
                    }
                    local_68->gSmarts();
                    pCVar33 = Client::Instance();
                    pCVar32 = local_38;
                    superPacket = (SuperPacket*)(unsigned long)uVar9;
                    ClientEntity::AddHitmark((int)local_38, uVar9, (int)local_40, iVar10, iVar12, pCVar33->field_8488);
                    uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
            }
            bVar2 = local_108->g1();
            if (bVar2 != 0) {
                uVar39 = (unsigned int)bVar2;
                do {
                    while (true) {
                        uVar9 = local_58->gSmarts();
                        superPacket = (SuperPacket*)(unsigned long)uVar9;
                        iVar12 = local_78->gSmarts();
                        if (iVar12 == 32767)
                            break;
                        uVar11 = local_b0->gSmarts();
                        local_40 = (ShuffledPacket2*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar11);
                        bVar2 = local_c8->g1();
                        if (0 < iVar12) {
                            local_110->g1();
                        }
                        pCVar33 = Client::Instance();
                        pCVar32 = local_38;
                        superPacket = (SuperPacket*)(unsigned long)uVar9;
                        ClientEntity::AddHeadbar((int)local_38, uVar9, pCVar33->field_8488, iVar12, (int)local_40,
                                                 (unsigned int)bVar2);
                        uVar39 = uVar39 - 1;
                        if (uVar39 == 0)
                            goto LAB_10018df6b;
                    }
                    pCVar32->ClearHeadbar(uVar9);
                    uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
            }
        }
    LAB_10018df6b:
        pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        pSVar18 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        local_58 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        local_40 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pSVar14 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
        pCVar32 = local_38;
        pSVar19 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        if (((unsigned int)arg4 & 512) != 0) {
            cVar3 = pSVar17->g1s();
            *(int*)&pCVar32->field_392 = (int)cVar3;
            cVar3 = pSVar18->g1s();
            *(int*)&pCVar32->field_400 = (int)cVar3;
            cVar3 = pPVar13->g1s();
            *(int*)((long)&pCVar32->field_392 + 4) = (int)cVar3;
            cVar3 = local_58->g1s();
            *(int*)((long)&pCVar32->field_400 + 4) = (int)cVar3;
            uVar7 = local_40->g2();
            pCVar33 = local_48;
            *(unsigned int*)&pCVar32->field_408 = (unsigned int)uVar7 + local_48->field_8488;
            uVar7 = pSVar14->g2();
            *(unsigned int*)((long)&pCVar32->field_408 + 4) = (unsigned int)uVar7 + pCVar33->field_8488;
            uVar7 = pSVar19->g2();
            *(unsigned int*)&pCVar32->field_416 = (unsigned int)uVar7;
            bVar4 = pCVar32->field_1212 == '\0';
            if (bVar4) {
                piVar34 = &pCVar32->field_444[(unsigned long)superPacket];
                *(int*)&pCVar32->field_392 = *(int*)&pCVar32->field_392 + *piVar34;
                piVar35 = &pCVar32->field_484[(unsigned long)superPacket];
                *(int*)&pCVar32->field_400 = *(int*)&pCVar32->field_400 + *piVar35;
                piVar31 = (int*)((long)&pCVar32->field_392 + 4);
                *piVar31 = *piVar31 + *piVar34;
                iVar12 = *piVar35;
            } else {
                iVar12 = *(int*)&pCVar32->field_1220;
                *(int*)&pCVar32->field_392 = *(int*)&pCVar32->field_392 + *(int*)&pCVar32->field_1216;
                *(int*)&pCVar32->field_400 = *(int*)&pCVar32->field_400 + iVar12;
                piVar31 = (int*)((long)&pCVar32->field_392 + 4);
                *piVar31 = *piVar31 + *(int*)&pCVar32->field_1216;
            }
            piVar31 = (int*)((long)&pCVar32->field_400 + 4);
            *piVar31 = *piVar31 + iVar12;
            pCVar32->field_440 = (unsigned int)bVar4;
            *(uint32_t*)((long)&pCVar32->field_536 + 4) = 0;
        }
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        uVar39 = (unsigned int)arg4;
        if (((unsigned int)arg4 & 2048) != 0) {
            uVar6 = pPVar13->g1s();
            (&m_plMoveSpeed)[arg2] = uVar6;
        }
        bVar4 = (bool)ShuffledPacketFactory::p2_alt2();
        if (-1 < (char)uVar39)
            goto LAB_10018e215;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            &local_a8, bVar4);
        puVar1 = &pCVar32->field_112;
        *puVar1 = &local_a8;
        pcVar25 = (char*)(*puVar1)[0];
        pCVar33 = local_48;
        if (*pcVar25 == '~') {
            local_a8 = puVar1->substr(1, 18446744073709551615);
            *puVar1 = &local_a8;
            pCVar33 = local_48;
        LAB_10018e1c9:
            pDVar21 = (DisplayName*)pCVar32->field_992.operator->();
            pbVar36 = pDVar21->GetDisplayName();
            pCVar33->AddChat(2, *pbVar36, *puVar1);
        } else {
            pCVar28 = (ClientPlayer*)local_48->field_52016.end();
            if (pCVar28 == pCVar32)
                goto LAB_10018e1c9;
        }
        *(uint8_t*)&pCVar32->field_144 = 0;
        pCVar32->field_156 = 0;
        pCVar32->field_148 = 150;
        uVar39 = (unsigned int)arg4;
    LAB_10018e215:
        pSVar18 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pSVar37 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pSVar17 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        local_58 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        local_40 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pSVar14 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
        if ((uVar39 & 16384) != 0) {
            pCVar33 = Client::Instance();
            iVar12 = pCVar33->field_8488;
            uVar7 = pSVar18->g2();
            pCVar32 = local_38;
            local_38->field_548 = (unsigned int)uVar7 + iVar12;
            pCVar33 = Client::Instance();
            iVar12 = pCVar33->field_8488;
            uVar7 = pSVar37->g2();
            pCVar32->field_552 = (unsigned int)uVar7 + iVar12;
            cVar3 = pSVar17->g1s();
            pCVar32->field_556 = cVar3;
            cVar3 = local_58->g1s();
            pCVar32->field_557 = cVar3;
            cVar3 = local_40->g1s();
            pCVar32->field_558 = cVar3;
            uVar6 = pSVar14->g1s();
            pCVar32->field_559 = uVar6;
        }
        bVar4 = (bool)ShuffledPacketFactory::p2_alt2();
        pCVar32 = local_38;
        uVar39 = (unsigned int)arg4;
        if (((unsigned int)arg4 & 8192) != 0) {
            lVar15 = 0;
            do {
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>(&local_a8, bVar4);
                (*((pCVar32->field_276 + lVar15 + 756))) = &local_a8;
                lVar15 = lVar15 + 32;
            } while (lVar15 != 96);
        }
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        schar arg3 = -1;
        if ((uVar39 & 1024) != 0) {
            arg3 = pPVar13->g1s();
        }
        pPVar13 =
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)ShuffledPacketFactory::p2_alt2();
        pSVar18 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        if ((uVar39 & 2) != 0) {
            uVar7 = pPVar13->g2();
            uVar39 = 4294967295;
            if (uVar7 != 65535) {
                uVar39 = (unsigned int)uVar7;
            }
            bVar2 = pSVar18->g1();
            local_48->TriggerPlayerAnim(*local_38, uVar39, (unsigned int)bVar2);
        }
        if (local_38->field_1212 != '\0') {
            if (arg3 == -1) {
                arg3 = (&m_plMoveSpeed)[arg2];
            } else if (arg3 == '\x7f') {
                local_38->InstantMove(*(int*)&local_38->field_1216, *(int*)&local_38->field_1220);
                return;
            }
            local_38->AddToRoute(*(int*)&local_38->field_1216, *(int*)&local_38->field_1220, arg3);
        }
    }

    // 0x10018ea10
    void ReceivePlayerPositions::Reset() {
        shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>* shared_ptr;

        m_lastNum = 0;
        shared_ptr = (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_apCache;
        long lVar1 = 0;
        do {
            shared_ptr->reset();
            (&m_plMoveSpeed)[lVar1] = 1;
            lVar1 = lVar1 + 1;
            shared_ptr = shared_ptr + 16;
        } while (lVar1 != 2048);
    }

} // namespace jag::oldscape
