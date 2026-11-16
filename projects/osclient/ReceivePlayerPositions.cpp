// projects/osclient/ReceivePlayerPositions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::oldscape {
    class ReceivePlayerPositions {
    public:
        void GetAbsolutePlayerPositions(core::SuperPacket&);
        void GetPlayerInfo(core::SuperPacket&, int);
        void GetPlayerPositions(core::SuperPacket&);
        void GetPlayerPositionsExtended(core::SuperPacket&);
        void ReadStationary(core::SuperPacket&);
        void GetHighResPlayerPosition(core::SuperPacket&, int);
        GetLowResPlayerPosition(core::SuperPacket&, int);
        void DecodeExtend(core::SuperPacket&, int, ClientPlayer&, int);
        void Reset();
        static /* 2048 bytes */ m_plStationary;
        static /* 2048 bytes */ m_plMoveSpeed;
        static /* 32768 bytes */ m_apCache;
        static /* 16 bytes */ m_lastNum;
        static /* 8192 bytes */ m_lastID;
        static /* 16 bytes */ m_lastLowRes;
        static /* 8192 bytes */ m_lowResPlayerID;
        static /* 8192 bytes */ m_lowResPosition;
        static /* 8192 bytes */ m_lowResFacing;
        static /* 8192 bytes */ m_lowResFaceEntity;
        static /* 16 bytes */ m_extendCo;
        static /* 8192 bytes */ m_extendList;
        static /* 16 bytes */ m_tempP;
        static /* 8 bytes */ m_debugPrinted;
        static eastl::fixed_vector<int, 2048ul, true, eastl::allocator> /* 8232 bytes */
            m_newVisIDs; // = fixed_vector<int,2048ul,true,eastl::allocator>()
        static eastl::fixed_vector<int, 2048ul, true, eastl::allocator> /* 8232 bytes */
            m_updatedRouteIDs; // = fixed_vector<int,2048ul,true,eastl::allocator>()
    };

    // 0x100f8d710, 2048 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_plStationary;

    // 0x100f8df10, 2048 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_plMoveSpeed;

    // 0x100f8e710, 32768 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_apCache;

    // 0x100f96710, 16 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lastNum;

    // 0x100f96720, 8192 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lastID;

    // 0x100f98720, 16 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lastLowRes;

    // 0x100f98730, 8192 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lowResPlayerID;

    // 0x100f9a730, 8192 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lowResPosition;

    // 0x100f9c730, 8192 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lowResFacing;

    // 0x100f9e730, 8192 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_lowResFaceEntity;

    // 0x100fa0730, 16 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_extendCo;

    // 0x100fa0740, 8192 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_extendList;

    // 0x100fa2740, 16 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_tempP;

    // 0x100fa2750, 8 bytes, __common; zero-initialised
    ReceivePlayerPositions::m_debugPrinted;

    // 0x100fa2758, 8232 bytes, __common; set at startup by ___cxx_global_var_init.196
    eastl::fixed_vector<int, 2048ul, true, eastl::allocator> ReceivePlayerPositions::m_newVisIDs =
        fixed_vector<int, 2048ul, true, eastl::allocator>();

    // 0x100fa4780, 8232 bytes, __common; set at startup by ___cxx_global_var_init.197
    eastl::fixed_vector<int, 2048ul, true, eastl::allocator> ReceivePlayerPositions::m_updatedRouteIDs =
        fixed_vector<int, 2048ul, true, eastl::allocator>();

    // 0x10018bf90, 560 bytes, placed by class name and debug map
    // ReceivePlayerPositions::GetAbsolutePlayerPositions(core::SuperPacket&)
    void ReceivePlayerPositions::GetAbsolutePlayerPositions(SuperPacket* param_1) {
        uint uVar1;
        bool bVar2;
        uint uVar3;
        int iVar4;
        Client* this;
        shared_ptr* psVar5;
        ClientPlayer* this_00;
        int* piVar6;
        PacketJ* pPVar7;
        long lVar8;
        int iVar9;
        ulong uVar10;

        param_1->GBitStart();
        this = (Client*)Client::Instance();
        uVar1 = field_51988;
        CreatePlayer(uVar1);
        psVar5 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)(int)uVar1);
        shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)field_52016, psVar5);
        this_00 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)field_52016);
        this_00->field_1208 = uVar1;
        uVar3 = param_1->gBit(30);
        iVar9 = (uVar3 >> 14 & 16383) - field_53220;
        piVar6 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_444);
        *piVar6 = iVar9;
        iVar4 = this_00->GetSize();
        this_00->field_24 = iVar4 * 64 + iVar9 * 128;
        iVar9 = (uVar3 & 16383) - field_53224;
        piVar6 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_484);
        *piVar6 = iVar9;
        iVar4 = this_00->GetSize();
        this_00->field_28 = iVar4 * 64 + iVar9 * 128;
        uVar3 = (int)uVar3 >> 28 & 255;
        this_00->field_1204 = uVar3;
        SetPlayerLevel(uVar3);
        bVar2 = operator!=((shared_ptr*)(&m_apCache + (long)(int)uVar1 * 16), (_func_decltype_nullptr*)0);
        if (bVar2) {
            pPVar7 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)(&m_apCache + (long)(int)uVar1 * 16));
            this_00->SetAppearance(pPVar7);
        }
        m_lastNum = 1;
        m_lastID = uVar1;
        (&m_plStationary)[(int)uVar1] = 0;
        eastl::fixed_vector<int, 2048ul, true, eastl::allocator>::push_back((int*)&m_newVisIDs);
        m_lastLowRes = 0;
        uVar10 = 1;
        do {
            if (uVar10 != uVar1) {
                uVar3 = param_1->gBit(18);
                *(uint*)(&m_lowResPosition + uVar10 * 4) = (uVar3 & 152832) << 6 | uVar3 & 597 | (uVar3 & 983040) << 12;
                *(undefined4*)(&m_lowResFacing + uVar10 * 4) = 0;
                *(undefined4*)(&m_lowResFaceEntity + uVar10 * 4) = 4294967295;
                lVar8 = (long)m_lastLowRes;
                m_lastLowRes = m_lastLowRes + 1;
                (&m_lowResPlayerID)[lVar8] = (int)uVar10;
                (&m_plStationary)[uVar10] = 0;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 != 2048);
        param_1->GBitEnd();
    }

    // 0x10018c280, 320 bytes, placed by class name and debug map
    // ReceivePlayerPositions::GetPlayerInfo(core::SuperPacket&, int)
    void ReceivePlayerPositions::GetPlayerInfo(SuperPacket* param_1, int param_2) {
        int iVar1;
        long lVar2;
        int* piVar3;
        int* piVar4;

        lVar2 = param_1->size();
        m_debugPrinted._0_1_ = 0;
        m_extendCo = 0;
        GetPlayerPositions(param_1);
        GetPlayerPositionsExtended(param_1);
        iVar1 = param_1->size();
        if (iVar1 - (int)lVar2 != param_2) {
            iVar1 = param_1->size();
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            123, "Did not consume the correct number of bytes! %d expected, %d actual",
                            (ulong)(uint)param_2, iVar1 - lVar2);
        }
        piVar3 = (int*)m_newVisIDs.HeapBeginPtr();
        piVar4 = (int*)m_newVisIDs.end();
        for (; piVar3 != piVar4; piVar3 = piVar3 + 1) {
            ScriptRunner::SetActivePlayer(*piVar3);
            ScriptRunner::ExecuteScript(41, 4294967295, 4294967295, 500000);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        piVar3 = (int*)m_updatedRouteIDs.HeapBeginPtr();
        piVar4 = (int*)m_updatedRouteIDs.end();
        for (; piVar3 != piVar4; piVar3 = piVar3 + 1) {
            ScriptRunner::SetActivePlayer(*piVar3);
            ScriptRunner::ExecuteScript(49, 4294967295, 4294967295, 500000);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10018c3c0, 1008 bytes, placed by class name and debug map
    // ReceivePlayerPositions::GetPlayerPositions(core::SuperPacket&)
    void ReceivePlayerPositions::GetPlayerPositions(SuperPacket* param_1) {
        int iVar1;
        byte bVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        uint uVar6;
        shared_ptr* psVar7;
        undefined4* puVar8;
        int* piVar9;
        ulong uVar10;
        long lVar11;

        param_1->GBitStart();
        if (m_lastNum < 1) {
            uVar6 = 0;
        } else {
            lVar11 = 0;
            piVar9 = &m_lastID;
            uVar6 = 0;
            do {
                iVar1 = *piVar9;
                if (((&m_plStationary)[iVar1] & 1) == 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = param_1->gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(param_1);
                            (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                        } else {
                            GetHighResPlayerPosition(param_1, iVar1);
                        }
                    } else {
                        uVar6 = uVar6 - 1;
                        (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                    }
                }
                lVar11 = lVar11 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar11 < m_lastNum);
        }
        param_1->GBitEnd();
        if (uVar6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            175, "numstationary non-zero at 0 of getplayerpositions - %i", (ulong)uVar6);
        }
        param_1->GBitStart();
        uVar6 = 0;
        if (0 < m_lastNum) {
            piVar9 = &m_lastID;
            lVar11 = 0;
            do {
                iVar1 = *piVar9;
                if (((&m_plStationary)[iVar1] & 1) != 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = param_1->gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(param_1);
                            (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                        } else {
                            GetHighResPlayerPosition(param_1, iVar1);
                        }
                    } else {
                        uVar6 = uVar6 - 1;
                        (&m_plStationary)[iVar1] = (&m_plStationary)[iVar1] | 2;
                    }
                }
                lVar11 = lVar11 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar11 < m_lastNum);
        }
        param_1->GBitEnd();
        if (uVar6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            207, "numstationary non-zero at 1 of getplayerpositions - %i", (ulong)uVar6);
        }
        param_1->GBitStart();
        uVar6 = 0;
        if (0 < m_lastLowRes) {
            piVar9 = &m_lowResPlayerID;
            lVar11 = 0;
            do {
                iVar1 = *piVar9;
                bVar2 = (&m_plStationary)[iVar1];
                if ((bVar2 & 1) != 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = param_1->gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(param_1);
                        } else {
                            cVar3 = GetLowResPlayerPosition(param_1, iVar1);
                            if (cVar3 == '\0')
                                goto LAB_10018c5aa;
                        }
                        bVar2 = (&m_plStationary)[iVar1];
                    } else {
                        uVar6 = uVar6 - 1;
                    }
                    (&m_plStationary)[iVar1] = bVar2 | 2;
                }
            LAB_10018c5aa:
                lVar11 = lVar11 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar11 < m_lastLowRes);
        }
        param_1->GBitEnd();
        if (uVar6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            242, "numstationary non-zero at 2 of getplayerpositions - %i", (ulong)uVar6);
        }
        param_1->GBitStart();
        uVar6 = 0;
        if (0 < m_lastLowRes) {
            piVar9 = &m_lowResPlayerID;
            lVar11 = 0;
            do {
                iVar1 = *piVar9;
                bVar2 = (&m_plStationary)[iVar1];
                if ((bVar2 & 1) == 0) {
                    if ((int)uVar6 < 1) {
                        iVar5 = param_1->gBit(1);
                        if (iVar5 == 0) {
                            uVar6 = ReadStationary(param_1);
                        } else {
                            cVar3 = GetLowResPlayerPosition(param_1, iVar1);
                            if (cVar3 == '\0')
                                goto LAB_10018c67a;
                        }
                        bVar2 = (&m_plStationary)[iVar1];
                    } else {
                        uVar6 = uVar6 - 1;
                    }
                    (&m_plStationary)[iVar1] = bVar2 | 2;
                }
            LAB_10018c67a:
                lVar11 = lVar11 + 1;
                piVar9 = piVar9 + 1;
            } while (lVar11 < m_lastLowRes);
        }
        param_1->GBitEnd();
        if (uVar6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "ReceivePlayerPositions.cpp",
                            277, "numstationary non-zero at 3 of getplayerpositions - %i", (ulong)uVar6);
        }
        m_lastNum = 0;
        m_lastLowRes = 0;
        uVar10 = 1;
        do {
            (&m_plStationary)[uVar10] = (char)(&m_plStationary)[uVar10] >> 1;
            lVar11 = Client::Instance();
            psVar7 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar11 + 19216), uVar10);
            bVar4 = operator!=(psVar7, (_func_decltype_nullptr*)0);
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
            puVar8[iVar1] = (int)uVar10;
            uVar10 = uVar10 + 1;
        } while (uVar10 != 2048);
    }

    // 0x10018c7b0, 240 bytes, placed by class name and debug map
    // ReceivePlayerPositions::GetPlayerPositionsExtended(core::SuperPacket&)
    void ReceivePlayerPositions::GetPlayerPositionsExtended(SuperPacket* param_1) {
        int iVar1;
        byte bVar2;
        undefined1 uVar3;
        long lVar4;
        shared_ptr<ClientPlayer>* this;
        ClientPlayer* pCVar5;
        uint uVar6;
        int* piVar7;
        long lVar8;

        if (0 < m_extendCo) {
            piVar7 = &m_extendList;
            lVar8 = 0;
            do {
                iVar1 = *piVar7;
                lVar4 = Client::Instance();
                this = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar4 + 19216), (long)iVar1);
                pCVar5 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator*(this);
                bVar2 = param_1->g1();
                uVar6 = (uint)bVar2;
                if ((bVar2 & 1) != 0) {
                    uVar3 = param_1->g1();
                    uVar6 = (uint)CONCAT11(uVar3, bVar2);
                }
                if ((short)uVar6 < 0) {
                    bVar2 = param_1->g1();
                    uVar6 = uVar6 | (uint)bVar2 << 16;
                }
                DecodeExtend(param_1, iVar1, pCVar5, uVar6);
                lVar8 = lVar8 + 1;
                piVar7 = piVar7 + 1;
            } while (lVar8 < m_extendCo);
        }
    }

    // 0x10018c8e0, 80 bytes, placed by class name
    // ReceivePlayerPositions::ReadStationary(core::SuperPacket&)
    void ReceivePlayerPositions::ReadStationary(SuperPacket* param_1) {
        int iVar1;

        iVar1 = param_1->gBit(2);
        if (iVar1 != 0) {
            if (iVar1 == 1) {
                iVar1 = 5;
            } else if (iVar1 == 2) {
                iVar1 = 8;
            } else {
                iVar1 = 11;
            }
            param_1->gBit(iVar1);
        }
    }

    // 0x10018c930, 1552 bytes, placed by class name
    // ReceivePlayerPositions::GetHighResPlayerPosition(core::SuperPacket&, int)
    void ReceivePlayerPositions::GetHighResPlayerPosition(SuperPacket* param_1, int param_2) {
        char cVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        Client* pCVar6;
        shared_ptr<ClientPlayer>* this;
        ClientPlayer* this_00;
        int* piVar7;
        uint uVar8;
        long lVar9;
        int iVar10;
        uint uVar11;

        pCVar6 = (Client*)Client::Instance();
        iVar2 = param_1->gBit(1);
        if (iVar2 == 1) {
            lVar9 = (long)m_extendCo;
            m_extendCo = m_extendCo + 1;
            (&m_extendList)[lVar9] = param_2;
        }
        iVar3 = param_1->gBit(2);
        this = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
            (array<shared_ptr<ClientPlayer>, 2048ul>*)&pCVar6->field_19216, (long)param_2);
        this_00 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator*(this);
        if (iVar3 == 0) {
            if (iVar2 == 1) {
                this_00->field_1212 = 0;
                return;
            }
            if (param_2 == pCVar6->field_51988) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ReceivePlayerPositions.cpp",
                                346, "Self was moved to low resolution!");
            }
            iVar2 = this_00->field_1204;
            uVar5 = pCVar6->field_53220;
            piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_444);
            iVar3 = *piVar7;
            uVar8 = pCVar6->field_53224;
            piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_484);
            lVar9 = (long)param_2;
            *(uint*)(&m_lowResPosition + lVar9 * 4) =
                ((int)(uVar8 + *piVar7) >> 13) + iVar2 * 268435456 + (uVar5 + iVar3 & 4294959104) * 2;
            iVar2 = this_00->field_336;
            if (iVar2 == -1) {
                iVar2 = *(int*)((long)&this_00->field_424 + 4);
            }
            *(int*)(&m_lowResFacing + lVar9 * 4) = iVar2;
            *(undefined4*)(&m_lowResFaceEntity + lVar9 * 4) = this_00->field_328;
            pCVar6->DestroyPlayer(param_2);
            iVar2 = param_1->gBit(1);
            if (iVar2 == 0) {
                return;
            }
            GetLowResPlayerPosition(param_1, param_2);
            return;
        }
        eastl::fixed_vector<int, 2048ul, true, eastl::allocator>::push_back((int*)&m_updatedRouteIDs);
        if (iVar3 != 2) {
            if (iVar3 != 1) {
                iVar3 = param_1->gBit(1);
                if (iVar3 == 0) {
                    uVar5 = param_1->gBit(12);
                    uVar11 = uVar5 >> 10;
                    uVar8 = uVar5 >> 5 & 31;
                    piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_444);
                    iVar10 = ((uint)(uVar8 < 16) << 5 | uVar8) + *piVar7 + -32;
                    piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_484);
                    iVar3 = *piVar7 + ((uint)((uVar5 & 31) < 16) << 5 | uVar5 & 31) + -32;
                    if ((param_2 != pCVar6->field_51988) ||
                        ((((1535 < this_00->field_24 && (this_00->field_28 < 11776)) && (1535 < this_00->field_28)) &&
                          (this_00->field_24 < 11776)))) {
                        if (iVar2 == 1) {
                            this_00->field_1212 = 1;
                            *(int*)&this_00->field_1216 = iVar10;
                            *(int*)&this_00->field_1220 = iVar3;
                            goto LAB_10018cda4;
                        }
                        this_00->field_1212 = 0;
                        cVar1 = (&m_plMoveSpeed)[param_2];
                        goto LAB_10018cd9f;
                    }
                } else {
                    uVar5 = param_1->gBit(30);
                    uVar11 = uVar5 >> 28;
                    piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_444);
                    iVar10 = ((uVar5 >> 14) + *piVar7 + pCVar6->field_53220 & 16383) - pCVar6->field_53220;
                    piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_484);
                    iVar3 = (uVar5 + *piVar7 + pCVar6->field_53224 & 16383) - pCVar6->field_53224;
                    if ((param_2 != pCVar6->field_51988) ||
                        (((1535 < this_00->field_24 && (this_00->field_28 < 11776)) &&
                          ((1535 < this_00->field_28 && (this_00->field_24 < 11776)))))) {
                        if (iVar2 == 1) {
                            this_00->field_1212 = 1;
                            *(int*)&this_00->field_1216 = iVar10;
                            *(int*)&this_00->field_1220 = iVar3;
                            goto LAB_10018cda4;
                        }
                        this_00->field_1212 = 0;
                        cVar1 = (&m_plMoveSpeed)[param_2];
                    LAB_10018cd9f:
                        this_00->AddToRoute(iVar10, iVar3, (int)cVar1);
                        goto LAB_10018cda4;
                    }
                }
                this_00->InstantMove(iVar10, iVar3);
                this_00->field_1212 = 0;
            LAB_10018cda4:
                this_00->field_1204 = uVar11 + this_00->field_1204 & 3;
                if (param_2 == pCVar6->field_51988) {
                    pCVar6 = (Client*)Client::Instance();
                    pCVar6->SetPlayerLevel(this_00->field_1204);
                    return;
                }
                return;
            }
            uVar4 = param_1->gBit(3);
            piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_444);
            iVar3 = *piVar7;
            piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_484);
            iVar10 = *piVar7;
            switch (uVar4) {
            case 0:
                iVar3 = iVar3 + -1;
            case 1:
                iVar10 = iVar10 + -1;
                break;
            case 2:
                iVar3 = iVar3 + 1;
                iVar10 = iVar10 + -1;
                break;
            case 3:
                iVar3 = iVar3 + -1;
                break;
            case 4:
                iVar3 = iVar3 + 1;
                break;
            case 5:
                iVar3 = iVar3 + -1;
            case 6:
            switchD_10018ca15_caseD_6:
                iVar10 = iVar10 + 1;
                break;
            case 7:
                iVar3 = iVar3 + 1;
                goto switchD_10018ca15_caseD_6;
            }
            goto switchD_10018ca15_default;
        }
        uVar4 = param_1->gBit(4);
        piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_444);
        iVar3 = *piVar7;
        piVar7 = (int*)std::array<int, 10ul>::operator[]((ulong)&this_00->field_484);
        iVar10 = *piVar7;
        switch (uVar4) {
        case 0:
            iVar3 = iVar3 + -2;
            iVar10 = iVar10 + -2;
            break;
        case 1:
            iVar3 = iVar3 + -1;
        case 2:
            iVar10 = iVar10 + -2;
            break;
        case 3:
            iVar3 = iVar3 + 1;
            iVar10 = iVar10 + -2;
            break;
        case 4:
            iVar3 = iVar3 + 2;
            iVar10 = iVar10 + -2;
            break;
        case 5:
            iVar3 = iVar3 + -2;
            iVar10 = iVar10 + -1;
            break;
        case 6:
            iVar3 = iVar3 + 2;
            iVar10 = iVar10 + -1;
            break;
        case 7:
            iVar3 = iVar3 + -2;
            break;
        case 8:
            iVar3 = iVar3 + 2;
            break;
        case 9:
            iVar3 = iVar3 + -2;
            goto switchD_10018ca15_caseD_6;
        case 10:
            iVar3 = iVar3 + 2;
            goto switchD_10018ca15_caseD_6;
        case 11:
            iVar3 = iVar3 + -2;
            goto switchD_10018ca82_caseD_d;
        case 12:
            iVar3 = iVar3 + -1;
        case 13:
            goto switchD_10018ca82_caseD_d;
        case 14:
            iVar3 = iVar3 + 1;
            goto switchD_10018ca82_caseD_d;
        case 15:
            iVar3 = iVar3 + 2;
        switchD_10018ca82_caseD_d:
            iVar10 = iVar10 + 2;
        }
    switchD_10018ca15_default:
        if ((param_2 == pCVar6->field_51988) && (((this_00->field_24 < 1536 || (11775 < this_00->field_28)) ||
                                                  ((this_00->field_28 < 1536 || (11775 < this_00->field_24)))))) {
            this_00->InstantMove(iVar3, iVar10);
            this_00->field_1212 = 0;
        } else if (iVar2 == 1) {
            this_00->field_1212 = 1;
            *(int*)&this_00->field_1216 = iVar3;
            *(int*)&this_00->field_1220 = iVar10;
        } else {
            this_00->field_1212 = 0;
            this_00->AddToRoute(iVar3, iVar10, (int)(char)(&m_plMoveSpeed)[param_2]);
        }
    }

    // 0x10018cf40, 848 bytes, placed by class name
    // ReceivePlayerPositions::GetLowResPlayerPosition(core::SuperPacket&, int)
    undefined8 ReceivePlayerPositions::GetLowResPlayerPosition(SuperPacket* param_1, int param_2) {
        undefined1 uVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        uint uVar6;
        uint uVar7;
        Client* this;
        shared_ptr* psVar8;
        shared_ptr<ClientPlayer>* this_00;
        ClientPlayer* this_01;
        PacketJ* pPVar9;
        undefined1* puVar10;
        long lVar11;
        uint uVar12;

        this = (Client*)Client::Instance();
        iVar3 = param_1->gBit(2);
        if (iVar3 == 2) {
            uVar6 = param_1->gBit(5);
            uVar12 = uVar6 & 7;
            uVar7 = *(uint*)(&m_lowResPosition + (long)param_2 * 4);
            *(uint*)(&m_lowResPosition + (long)param_2 * 4) =
                (((uVar7 & 255) + (uint)(uVar12 == 0) * -16385) - (uint)(uVar12 == 1)) + (uint)(uVar12 == 2) * 16383 +
                (uint)(uVar12 == 5) * -16383 + (uint)(uVar12 == 6) + (uint)(uVar12 == 7) * 16385 +
                ((uVar6 & 24) * 33554432 + uVar7 & 805306368) + (uVar7 & 4177920) + (uint)(uVar12 == 3) * -16384 +
                (uint)(uVar12 == 4) * 16384;
        } else if (iVar3 == 1) {
            iVar3 = param_1->gBit(2);
            *(uint*)(&m_lowResPosition + (long)param_2 * 4) =
                *(uint*)(&m_lowResPosition + (long)param_2 * 4) & 268435455 |
                iVar3 * 268435456 + *(uint*)(&m_lowResPosition + (long)param_2 * 4) & 805306368;
        } else {
            if (iVar3 == 0) {
                iVar3 = param_1->gBit(1);
                if (iVar3 != 0) {
                    GetLowResPlayerPosition(param_1, param_2);
                }
                iVar3 = param_1->gBit(13);
                iVar4 = param_1->gBit(13);
                if (param_1->gBit(1) == 1) {
                    lVar11 = (long)m_extendCo;
                    m_extendCo = m_extendCo + 1;
                    (&m_extendList)[lVar11] = param_2;
                }
                psVar8 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_2);
                bVar2 = operator!=(psVar8, (_func_decltype_nullptr*)0);
                if (bVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ReceivePlayerPositions.cpp",
                                    670, "high res player when expecting low res");
                }
                CreatePlayer(param_2);
                this_00 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_2);
                this_01 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator*(this_00);
                this_01->field_1208 = param_2;
                bVar2 = operator!=((shared_ptr*)(&m_apCache + (long)param_2 * 16), (_func_decltype_nullptr*)0);
                if (bVar2) {
                    pPVar9 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)(&m_apCache +
                                                                                           (long)param_2 * 16));
                    this_01->SetAppearance(pPVar9);
                }
                lVar11 = (long)param_2;
                *(undefined4*)((long)&this_01->field_424 + 4) = *(undefined4*)(&m_lowResFacing + lVar11 * 4);
                this_01->field_328 = *(undefined4*)(&m_lowResFaceEntity + lVar11 * 4);
                uVar7 = *(uint*)(&m_lowResPosition + lVar11 * 4);
                uVar1 = (&m_plMoveSpeed)[lVar11];
                puVar10 = (undefined1*)std::array<signed char, 10ul>::operator[]((ulong)&this_01->field_524);
                *puVar10 = uVar1;
                this_01->field_1204 = (int)uVar7 >> 28 & 255;
                this_01->InstantMove(((uVar7 >> 1 & 2088960) + iVar3) - field_53220,
                                     ((uVar7 & 255) * 8192 + iVar4) - field_53224);
                this_01->field_1212 = 0;
                eastl::fixed_vector<int, 2048ul, true, eastl::allocator>::push_back((int*)&m_newVisIDs);
                eastl::fixed_vector<int, 2048ul, true, eastl::allocator>::push_back((int*)&m_updatedRouteIDs);
                return 1;
            }
            uVar7 = param_1->gBit(18);
            iVar3 = *(int*)(&m_lowResPosition + (long)param_2 * 4);
            *(uint*)(&m_lowResPosition + (long)param_2 * 4) = (uVar7 & 65280) * 64 + iVar3 & 4177920 |
                                                              (uVar7 & 196608) * 4096 + iVar3 & 805306368 |
                                                              iVar3 + uVar7 & 255;
        }
        return 0;
    }

    // 0x10018d2c0, 4608 bytes, placed by class name
    // ReceivePlayerPositions::DecodeExtend(core::SuperPacket&, int, ClientPlayer&, int)
    void ReceivePlayerPositions::DecodeExtend(SuperPacket* param_1, int param_2, ClientPlayer* param_3, int param_4) {
        undefined1* puVar1;
        byte bVar2;
        char cVar3;
        bool bVar4;
        char cVar5;
        undefined1 uVar6;
        ushort uVar7;
        undefined2 uVar8;
        uint uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        undefined4 uVar13;
        int iVar14;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar15;
        ShuffledPacket3* pSVar16;
        long lVar17;
        PacketT* pPVar18;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar19;
        ShuffledPacket4* pSVar20;
        ShuffledPacket2* pSVar21;
        ShuffledPacket4* pSVar22;
        FriendSystem* pFVar23;
        DisplayName* pDVar24;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar25;
        WordPack* pWVar26;
        char* pcVar27;
        ulong uVar28;
        undefined1* puVar29;
        ClientPlayer* pCVar30;
        long lVar31;
        basic_string* pbVar32;
        ShuffledPacket3* this;
        ShuffledPacket3* this_00;
        ShuffledPacket3* pSVar33;
        int* piVar34;
        ClientPlayer* pCVar35;
        int* piVar36;
        int* piVar37;
        ShuffledPacket2* pSVar38;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* pPVar39;
        uint uVar40;
        Client* pCVar41;
        uint uVar42;
        eastl local_168[32];
        StringConstants local_148[32];
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_128;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_120;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_118;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* local_110;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* local_108;
        uint local_100[8];
        basic_string local_e0[24];
        ShuffledPacket3* local_c8;
        undefined8 local_c0;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_b8;
        shared_ptr<rs2lib::social::DisplayName>* local_b0;
        shared_ptr local_a8[2];
        SuperShuffledPacketFactory local_88;
        SuperPacket* local_78;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_68;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* local_60;
        ShuffledPacket4* local_58;
        Client* local_48;
        ShuffledPacket2* local_40;
        ClientPlayer* local_38;

        local_48 = (Client*)Client::Instance();
        local_78 = param_1;
        new (&local_88) SuperShuffledPacketFactory(param_1);
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        pSVar16 = (ShuffledPacket3*)local_88.p2_alt2();
        if ((param_4 & 8U) != 0) {
            bVar2 = pPVar15->g1();
            local_100[0] = (uint)bVar2;
            make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>((jag*)local_a8, (int*)local_100);
            lVar17 = (long)param_2;
            shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator=(
                (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)(&m_apCache + lVar17 * 16), local_a8);
            local_a8->~shared_ptr();
            pPVar18 = (PacketT*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)(&m_apCache + lVar17 * 16));
            pSVar16->gArrayBuffer(pPVar18, (long)(int)local_100[0]);
            param_3->SetAppearance(pPVar18);
        }
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        local_38 = param_3;
        local_40 = (ShuffledPacket2*)local_88.p2_alt2();
        local_58 = (ShuffledPacket4*)local_88.p2_alt2();
        pPVar19 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        pCVar41 = local_48;
        if ((((uint)param_4 & 65536) != 0) && (bVar2 = pPVar15->g1(), bVar2 != 0)) {
            uVar40 = (uint)bVar2;
            do {
                bVar2 = local_40->g1();
                uVar7 = local_58->g2();
                uVar9 = pPVar19->g4();
                local_38->AddSpotAnim((uint)bVar2, (uint)uVar7, (int)uVar9 >> 16, uVar9 & 65535, pCVar41->field_8488);
                uVar40 = uVar40 - 1;
            } while (uVar40 != 0);
        }
        pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
        pCVar35 = local_38;
        uVar40 = (uint)param_4;
        if (((uint)param_4 & 64) != 0) {
            uVar7 = pSVar20->g2();
            pCVar35->field_336 = (uint)uVar7;
            if (pCVar35->field_440 == 0) {
                *(uint*)((long)&pCVar35->field_424 + 4) = (uint)uVar7;
                pCVar35->ClearPendingFacing();
            }
        }
        pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
        pSVar21 = (ShuffledPacket2*)local_88.p2_alt2();
        if ((uVar40 & 16) != 0) {
            uVar7 = pSVar20->g2();
            pCVar35->field_328 = (uint)uVar7;
            bVar2 = pSVar21->g1();
            iVar10 = (uint)bVar2 * 65536 + pCVar35->field_328;
            iVar12 = -1;
            if (iVar10 != 16777215) {
                iVar12 = iVar10;
            }
            pCVar35->field_328 = iVar12;
        }
        pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
        pSVar21 = (ShuffledPacket2*)local_88.p2_alt2();
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        local_40 = (ShuffledPacket2*)local_88.p2_alt2();
        pSVar16 = (ShuffledPacket3*)local_88.p2_alt2();
        pSVar22 = (ShuffledPacket4*)local_88.p2_alt2();
        if (((uint)param_4 & 4096) != 0) {
            local_c8 = pSVar16;
            local_58 = pSVar22;
            uVar9 = pSVar20->g2();
            bVar2 = pSVar21->g1();
            local_c0 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(CONCAT44(local_c0._4_4_, uVar9) &
                                                                              18446744069414649855);
            uVar42 = (uVar9 & 65535) >> 8;
            uVar40 = uVar42 - 12;
            if (2047 < (uVar9 - 3328 & 65535)) {
                uVar40 = 0;
            }
            local_60 =
                (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)constants::ChatCrownType::FromId((uint)bVar2);
            cVar3 = pPVar15->g1();
            local_b8 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)CONCAT71(local_b8._1_7_, cVar3);
            bVar2 = local_40->g1();
            lVar17 = local_78->size();
            local_b0 = (shared_ptr<rs2lib::social::DisplayName>*)&local_38->field_992;
            bVar4 = operator!=((shared_ptr*)local_b0, (_func_decltype_nullptr*)0);
            pPVar39 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(long)(int)uVar40;
            pSVar16 = (ShuffledPacket3*)(ulong)bVar2;
            if (bVar4) {
                local_68 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(long)(int)uVar40;
                local_40 = (ShuffledPacket2*)(ulong)bVar2;
                bVar4 = operator!=((shared_ptr*)&local_38->field_1008, (_func_decltype_nullptr*)0);
                pPVar39 = local_68;
                pSVar16 = (ShuffledPacket3*)local_40;
                if (bVar4) {
                    if (*(char*)((long)local_60 + 6) != '\0') {
                        pFVar23 =
                            (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&local_48->field_52768);
                        pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(local_b0);
                        cVar5 = pFVar23->IsIgnored(pDVar24);
                        pPVar39 = local_68;
                        pSVar16 = (ShuffledPacket3*)local_40;
                        if (cVar5 != '\0')
                            goto LAB_10018d93a;
                    }
                    pPVar39 = local_68;
                    pSVar16 = (ShuffledPacket3*)local_40;
                    if ((local_48->field_52440 == 0) && (local_38->field_1200 == '\0')) {
                        pPVar25 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                        pPVar25->SetPos(0);
                        pPVar18 = (PacketT*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                            (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                        local_c8->gArrayBuffer(pPVar18, (ulong)local_40);
                        pPVar25 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                        pPVar25->SetPos(0);
                        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                        pWVar26 =
                            (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                                (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)&local_48
                                                                                                       ->field_54172 +
                                                                                                   4));
                        pPVar18 = (PacketT*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                            (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                        pWVar26->UnpackCP1252AsUTF8(local_e0, pPVar18);
                        pcVar27 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar28 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        local_a8->Escape(pcVar27, uVar28);
                        core::stringtools::general::StringTools::ForceCapitalisationOfWords((basic_string*)local_a8);
                        puVar1 = &local_38->field_112;
                        eastl::string::operator=((eastl::string*)puVar1, (basic_string*)local_a8);
                        puVar1->trim();
                        *(uint*)((long)&local_38->field_148 + 4) = uVar42;
                        local_38->field_156 = (uint)(byte)local_c0;
                        *(undefined4*)&local_38->field_148 = 150;
                        *(bool*)&local_38->field_144 = cVar3 == '\x01';
                        *(undefined1*)((long)&local_38->field_144 + 1) = 0;
                        puVar1 = &local_38->field_160;
                        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                        if ((uVar40 - 1 < 8) &&
                            (eastl::vector<unsigned char,
                                           eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                         eastl::allocator>>::resize((ulong)puVar1),
                             0 < (int)uVar40)) {
                            uVar28 = 0;
                            do {
                                uVar6 = local_58->g1();
                                puVar29 = (undefined1*)eastl::vector<
                                    unsigned char,
                                    eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<unsigned char,
                                            eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
                                        puVar1,
                                    uVar28);
                                *puVar29 = uVar6;
                                uVar28 = uVar28 + 1;
                            } while (uVar40 != uVar28);
                        }
                        new (local_100) eastl::string(local_a8);
                        eastl::string::make_lower();
                        pCVar35 = local_38;
                        pCVar30 = (ClientPlayer*)local_48->field_52016->end();
                        if (pCVar30 == pCVar35) {
                        LAB_10018d83d:
                            bVar4 = false;
                        } else if (*(char*)((long)local_60 + 6) == '\0') {
                            bVar4 = false;
                        } else {
                            puVar1 = &local_48->field_53320;
                            bVar4 = eastl::operator!=((basic_string*)puVar1, (value_type*)"");
                            if (!bVar4)
                                goto LAB_10018d83d;
                            lVar31 = local_100->find(puVar1, 0);
                            bVar4 = lVar31 == -1;
                        }
                        *(bool*)((long)&pCVar35->field_144 + 1) = bVar4;
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
                            pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(local_b0);
                            pbVar32 = (basic_string*)pDVar24->GetDisplayName();
                            local_48->AddChat(iVar10, pbVar32, local_a8);
                        } else {
                            local_148->TAG_IMG(*(int*)local_60);
                            pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(local_b0);
                            pbVar32 = (basic_string*)pDVar24->GetDisplayName();
                            eastl::operator+(local_168, (basic_string*)local_148, pbVar32);
                            local_48->AddChat(iVar10, local_168, local_a8);
                            local_168->~basic_string();
                            local_148->~basic_string();
                        }
                        local_100->~basic_string();
                        local_a8->~basic_string();
                        local_e0->~basic_string();
                        pPVar39 = local_68;
                        pSVar16 = (ShuffledPacket3*)local_40;
                    }
                }
            }
        LAB_10018d93a:
            local_78->SetPos((ulong)(&pSVar16->field_0 + (long)pPVar39 + lVar17));
        }
        pSVar16 = (ShuffledPacket3*)local_88.p2_alt2();
        this = (ShuffledPacket3*)local_88.p2_alt2();
        this_00 = (ShuffledPacket3*)local_88.p2_alt2();
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        pSVar33 = (ShuffledPacket3*)local_88.p2_alt2();
        if (((uint)param_4 & 32) != 0) {
            local_40 = (ShuffledPacket2*)pSVar33;
            uVar8 = pSVar16->g2();
            local_58 = (ShuffledPacket4*)CONCAT62(local_58._2_6_, uVar8);
            bVar2 = g1();
            piVar34 = (int*)constants::ChatCrownType::FromId((uint)bVar2);
            cVar3 = this_00->g1();
            local_68 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)CONCAT71(local_68._1_7_, cVar3);
            local_60 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)CONCAT71(local_60._1_7_, cVar3 == '\x01');
            bVar2 = pPVar15->g1();
            lVar17 = local_78->size();
            puVar1 = &local_38->field_992;
            bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
            pSVar21 = (ShuffledPacket2*)(ulong)bVar2;
            if ((bVar4) &&
                (bVar4 = operator!=((shared_ptr*)&local_38->field_1008, (_func_decltype_nullptr*)0), bVar4)) {
                if (*(char*)((long)piVar34 + 6) != '\0') {
                    pFVar23 =
                        (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&local_48->field_52768);
                    pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                        (shared_ptr<rs2lib::social::DisplayName>*)puVar1);
                    cVar3 = pFVar23->IsIgnored(pDVar24);
                    if (cVar3 != '\0')
                        goto LAB_10018dcd5;
                }
                if ((local_48->field_52440 == 0) && (local_38->field_1200 == '\0')) {
                    pPVar25 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                    pPVar25->SetPos(0);
                    pPVar18 = (PacketT*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                    pSVar38 = local_40;
                    local_40 = pSVar21;
                    pSVar38->gArrayBuffer(pPVar18, (ulong)pSVar21);
                    pPVar25 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                                      (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                    pPVar25->SetPos(0);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    pWVar26 =
                        (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                            (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)&local_48
                                                                                                   ->field_54172 +
                                                                                               4));
                    pPVar18 = (PacketT*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&m_tempP);
                    pWVar26->UnpackCP1252AsUTF8(local_e0, pPVar18);
                    pcVar27 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar28 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    local_a8->Escape(pcVar27, uVar28);
                    core::stringtools::general::StringTools::ForceCapitalisationOfWords((basic_string*)local_a8);
                    pSVar21 = local_40;
                    puVar29 = &local_38->field_112;
                    eastl::string::operator=((eastl::string*)puVar29, (basic_string*)local_a8);
                    puVar29->trim();
                    *(uint*)((long)&local_38->field_148 + 4) = (uint)((ushort)local_58 >> 8);
                    local_38->field_156 = (uint)(byte)local_58;
                    *(undefined4*)&local_38->field_148 = 150;
                    *(undefined1*)&local_38->field_144 = local_60._0_1_;
                    *(undefined1*)((long)&local_38->field_144 + 1) = 0;
                    new (local_100) eastl::string(local_a8);
                    eastl::string::make_lower();
                    pCVar35 = (ClientPlayer*)local_48->field_52016->end();
                    if ((pCVar35 == local_38) || (*(char*)((long)piVar34 + 6) == '\0')) {
                    LAB_10018dbec:
                        bVar4 = false;
                    } else {
                        puVar29 = &local_48->field_53320;
                        bVar4 = eastl::operator!=((basic_string*)puVar29, (value_type*)"");
                        if (!bVar4)
                            goto LAB_10018dbec;
                        lVar31 = local_100->find(puVar29, 0);
                        bVar4 = lVar31 == -1;
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
                    if (*(char*)((long)piVar34 + 5) != '\0') {
                        iVar10 = iVar12;
                    }
                    if (*piVar34 == -1) {
                        pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                            (shared_ptr<rs2lib::social::DisplayName>*)puVar1);
                        pbVar32 = (basic_string*)pDVar24->GetDisplayName();
                        local_48->AddChat(iVar10, pbVar32, local_a8);
                    } else {
                        local_148->TAG_IMG(*piVar34);
                        pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                            (shared_ptr<rs2lib::social::DisplayName>*)puVar1);
                        pbVar32 = (basic_string*)pDVar24->GetDisplayName();
                        eastl::operator+(local_168, (basic_string*)local_148, pbVar32);
                        local_48->AddChat(iVar10, local_168, local_a8);
                        local_168->~basic_string();
                        local_148->~basic_string();
                    }
                    local_100->~basic_string();
                    local_a8->~basic_string();
                    local_e0->~basic_string();
                }
            }
        LAB_10018dcd5:
            local_78->SetPos((ulong)(&((ShuffledPacket3*)pSVar21)->field_0 + lVar17));
        }
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        local_60 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        local_c0 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        local_b8 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        local_128 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        local_120 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        local_118 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        local_68 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.gSmarts();
        pPVar19 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        local_58 = (ShuffledPacket4*)local_88.gSmarts();
        local_78 = (SuperPacket*)local_88.gSmarts();
        local_b0 = (shared_ptr<rs2lib::social::DisplayName>*)local_88.gSmarts();
        local_c8 = (ShuffledPacket3*)local_88.p2_alt2();
        local_110 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        pCVar35 = local_38;
        if (((uint)param_4 & 4) != 0) {
            local_108 = pPVar19;
            bVar2 = pPVar15->g1();
            if (bVar2 != 0) {
                uVar40 = (uint)bVar2;
                do {
                    iVar12 = local_60->gSmarts();
                    iVar10 = -1;
                    if (iVar12 == 32766) {
                        local_40 = (ShuffledPacket2*)CONCAT44(local_40._4_4_, 4294967295);
                        iVar14 = -1;
                        iVar12 = -1;
                    } else if (iVar12 == 32767) {
                        iVar12 = local_c0->gSmarts();
                        uVar13 = local_b8->gSmarts();
                        local_40 = (ShuffledPacket2*)CONCAT44(local_40._4_4_, uVar13);
                        iVar14 = local_128->gSmarts();
                        iVar10 = local_120->gSmarts();
                    } else {
                        uVar13 = local_118->gSmarts();
                        local_40 = (ShuffledPacket2*)CONCAT44(local_40._4_4_, uVar13);
                        iVar14 = -1;
                    }
                    iVar11 = local_68->gSmarts();
                    lVar17 = Client::Instance();
                    pCVar35 = local_38;
                    local_38->AddHitmark(iVar12, (int)local_40, iVar14, iVar10, *(int*)(lVar17 + 8488), iVar11);
                    uVar40 = uVar40 - 1;
                } while (uVar40 != 0);
            }
            bVar2 = local_108->g1();
            if (bVar2 != 0) {
                uVar40 = (uint)bVar2;
                do {
                    while (true) {
                        iVar12 = local_58->gSmarts();
                        iVar10 = local_78->gSmarts();
                        if (iVar10 == 32767)
                            break;
                        uVar13 = local_b0->gSmarts();
                        local_40 = (ShuffledPacket2*)CONCAT44(local_40._4_4_, uVar13);
                        bVar2 = local_c8->g1();
                        uVar9 = (uint)bVar2;
                        if (0 < iVar10) {
                            bVar2 = local_110->g1();
                        }
                        lVar17 = Client::Instance();
                        pCVar35 = local_38;
                        local_38->AddHeadbar(iVar12, *(int*)(lVar17 + 8488), iVar10, (int)local_40, uVar9, (uint)bVar2);
                        uVar40 = uVar40 - 1;
                        if (uVar40 == 0)
                            goto LAB_10018df6b;
                    }
                    pCVar35->ClearHeadbar(iVar12);
                    uVar40 = uVar40 - 1;
                } while (uVar40 != 0);
            }
        }
    LAB_10018df6b:
        pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
        pSVar21 = (ShuffledPacket2*)local_88.p2_alt2();
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        local_58 = (ShuffledPacket4*)local_88.p2_alt2();
        local_40 = (ShuffledPacket2*)local_88.p2_alt2();
        pSVar16 = (ShuffledPacket3*)local_88.p2_alt2();
        pCVar35 = local_38;
        pSVar22 = (ShuffledPacket4*)local_88.p2_alt2();
        if (((uint)param_4 & 512) != 0) {
            cVar3 = pSVar20->g1s();
            *(int*)&pCVar35->field_392 = (int)cVar3;
            cVar3 = pSVar21->g1s();
            *(int*)&pCVar35->field_400 = (int)cVar3;
            cVar3 = pPVar15->g1s();
            *(int*)((long)&pCVar35->field_392 + 4) = (int)cVar3;
            cVar3 = local_58->g1s();
            *(int*)((long)&pCVar35->field_400 + 4) = (int)cVar3;
            uVar7 = local_40->g2();
            pCVar41 = local_48;
            *(uint*)&pCVar35->field_408 = (uint)uVar7 + local_48->field_8488;
            uVar7 = pSVar16->g2();
            *(uint*)((long)&pCVar35->field_408 + 4) = (uint)uVar7 + pCVar41->field_8488;
            uVar7 = pSVar22->g2();
            *(uint*)&pCVar35->field_416 = (uint)uVar7;
            bVar4 = pCVar35->field_1212 == '\0';
            if (bVar4) {
                piVar36 = (int*)std::array<int, 10ul>::operator[]((ulong)&pCVar35->field_444);
                *(int*)&pCVar35->field_392 = *(int*)&pCVar35->field_392 + *piVar36;
                piVar37 = (int*)std::array<int, 10ul>::operator[]((ulong)&pCVar35->field_484);
                *(int*)&pCVar35->field_400 = *(int*)&pCVar35->field_400 + *piVar37;
                piVar34 = (int*)((long)&pCVar35->field_392 + 4);
                *piVar34 = *piVar34 + *piVar36;
                iVar12 = *piVar37;
            } else {
                iVar12 = *(int*)&pCVar35->field_1220;
                *(int*)&pCVar35->field_392 = *(int*)&pCVar35->field_392 + *(int*)&pCVar35->field_1216;
                *(int*)&pCVar35->field_400 = *(int*)&pCVar35->field_400 + iVar12;
                piVar34 = (int*)((long)&pCVar35->field_392 + 4);
                *piVar34 = *piVar34 + *(int*)&pCVar35->field_1216;
            }
            piVar34 = (int*)((long)&pCVar35->field_400 + 4);
            *piVar34 = *piVar34 + iVar12;
            pCVar35->field_440 = (uint)bVar4;
            *(undefined4*)((long)&pCVar35->field_536 + 4) = 0;
        }
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        uVar40 = (uint)param_4;
        if (((uint)param_4 & 2048) != 0) {
            uVar6 = pPVar15->g1s();
            (&m_plMoveSpeed)[param_2] = uVar6;
        }
        bVar4 = (bool)local_88.p2_alt2();
        if (-1 < (char)uVar40)
            goto LAB_10018e215;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_a8, bVar4);
        puVar1 = &pCVar35->field_112;
        eastl::string::operator=((eastl::string*)puVar1, (basic_string*)local_a8);
        local_a8->~basic_string();
        pcVar27 = (char*)eastl::string::operator[]((eastl::string*)puVar1, 0);
        pCVar41 = local_48;
        if (*pcVar27 == '~') {
            eastl::string::substr((ulong)local_a8, (ulong)puVar1);
            eastl::string::operator=((eastl::string*)puVar1, (basic_string*)local_a8);
            local_a8->~basic_string();
            pCVar41 = local_48;
        LAB_10018e1c9:
            pDVar24 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                (shared_ptr<rs2lib::social::DisplayName>*)&pCVar35->field_992);
            pbVar32 = (basic_string*)pDVar24->GetDisplayName();
            pCVar41->AddChat(2, pbVar32, puVar1);
        } else {
            pCVar30 = (ClientPlayer*)local_48->field_52016->end();
            if (pCVar30 == pCVar35)
                goto LAB_10018e1c9;
        }
        *(undefined1*)&pCVar35->field_144 = 0;
        pCVar35->field_156 = 0;
        pCVar35->field_148 = 150;
        uVar40 = (uint)param_4;
    LAB_10018e215:
        pSVar21 = (ShuffledPacket2*)local_88.p2_alt2();
        pSVar38 = (ShuffledPacket2*)local_88.p2_alt2();
        pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
        local_58 = (ShuffledPacket4*)local_88.p2_alt2();
        local_40 = (ShuffledPacket2*)local_88.p2_alt2();
        pSVar16 = (ShuffledPacket3*)local_88.p2_alt2();
        if ((uVar40 & 16384) != 0) {
            lVar17 = Client::Instance();
            iVar12 = *(int*)(lVar17 + 8488);
            uVar7 = pSVar21->g2();
            pCVar35 = local_38;
            *(uint*)((long)&local_38->field_544 + 4) = (uint)uVar7 + iVar12;
            lVar17 = Client::Instance();
            iVar12 = *(int*)(lVar17 + 8488);
            uVar7 = pSVar38->g2();
            pCVar35->field_552 = (uint)uVar7 + iVar12;
            uVar6 = pSVar20->g1s();
            pCVar35->field_556 = uVar6;
            uVar6 = local_58->g1s();
            pCVar35->field_557 = uVar6;
            uVar6 = local_40->g1s();
            pCVar35->field_558 = uVar6;
            uVar6 = pSVar16->g1s();
            pCVar35->field_559 = uVar6;
        }
        bVar4 = (bool)local_88.p2_alt2();
        pCVar35 = local_38;
        uVar40 = (uint)param_4;
        if (((uint)param_4 & 8192) != 0) {
            lVar17 = 0;
            do {
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_a8,
                                   bVar4);
                eastl::string::operator=((eastl::string*)(pCVar35->field_276 + lVar17 + 756), (basic_string*)local_a8);
                local_a8->~basic_string();
                lVar17 = lVar17 + 32;
            } while (lVar17 != 96);
        }
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        cVar3 = -1;
        if ((uVar40 & 1024) != 0) {
            cVar3 = pPVar15->g1s();
        }
        pPVar15 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_88.p2_alt2();
        pSVar21 = (ShuffledPacket2*)local_88.p2_alt2();
        if ((uVar40 & 2) != 0) {
            uVar7 = pPVar15->g2();
            uVar40 = 4294967295;
            if (uVar7 != 65535) {
                uVar40 = (uint)uVar7;
            }
            bVar2 = pSVar21->g1();
            local_48->TriggerPlayerAnim(local_38, uVar40, (uint)bVar2);
        }
        if (local_38->field_1212 != '\0') {
            if (cVar3 == -1) {
                cVar3 = (&m_plMoveSpeed)[param_2];
            } else if (cVar3 == '\x7f') {
                local_38->InstantMove(*(int*)&local_38->field_1216, *(int*)&local_38->field_1220);
                return;
            }
            local_38->AddToRoute(*(undefined4*)&local_38->field_1216, *(undefined4*)&local_38->field_1220, (int)cVar3);
        }
    }

    // 0x10018ea10, 96 bytes, placed by class name
    // ReceivePlayerPositions::Reset()
    void ReceivePlayerPositions::Reset() {
        long lVar1;

        m_lastNum = 0;
        lVar1 = 0;
        do {
            shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::reset();
            (&m_plMoveSpeed)[lVar1] = 1;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 2048);
    }

    // 0x1001b7040, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.196
    void ___cxx_global_var_init_196() {
        new (&ReceivePlayerPositions::m_newVisIDs) eastl::fixed_vector<int, 2048ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cd8, &ReceivePlayerPositions::m_newVisIDs, 4294967296);
    }

    // 0x1001b7080, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.197
    void ___cxx_global_var_init_197() {
        new (&ReceivePlayerPositions::m_updatedRouteIDs) eastl::fixed_vector<int, 2048ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cd8, &ReceivePlayerPositions::m_updatedRouteIDs, 4294967296);
    }

} // namespace jag::oldscape
