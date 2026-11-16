// libs/game/runetek5/crash/ClientError.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class ClientError {
    public:
        void ReportError(callstack::JagException const&, char const*, unsigned char);
        void ReportError(char const*, callstack::Callstack const*, unsigned char);
        ulong FilterError(char const*, callstack::Callstack const*);
        uint GetErrorCRC(char const*, callstack::Callstack const*);

        // data members, from how the methods use this: 64 bytes
        undefined8* field_0; // offset 0
        uint field_8;        // offset 8
        char _unknown_12[52];
    };

    // 0x1004c0fe0, 80 bytes, placed by class name and debug map
    // ClientError::ReportError(callstack::JagException const&, char const*, unsigned char)
    void ClientError::ReportError(JagException* param_1, char* param_2, uchar param_3) {
        Callstack* pCVar1;

        if (param_2 == (char*)0) {
            param_2 = (char*)param_1->GetText();
        }
        pCVar1 = (Callstack*)param_1->GetCallstackRaw();
        ReportError(this, param_2, pCVar1, param_3);
    }

    // 0x1004c1030, 2320 bytes, placed by class name and debug map
    // ClientError::ReportError(char const*, callstack::Callstack const*, unsigned char)
    void ClientError::ReportError(char* param_1, Callstack* param_2, uchar param_3) {
        char cVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        uint* puVar7;
        long lVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined4* puVar11;
        time_t tVar12;
        longlong lVar13;
        Base64* this_00;
        uchar* puVar14;
        char* pcVar15;
        char* pcVar16;
        undefined7 in_register_00000009;
        ulong uVar17;
        ClientError* this_01;
        undefined1* this_02;
        AddMemberOldV1* this_03;
        uint uVar18;
        undefined8 in_stack_ffffffffffffde18;
        undefined4 uVar19;
        undefined8 in_stack_ffffffffffffde20;
        basic_string local_21b8[32];
        undefined1 local_2198[64];
        basic_string local_2158[32];
        eastl::string local_2138[32];
        uint local_2118[8];
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_20f8[32];
        undefined8 local_20d8;
        undefined8 local_20d0;
        uint local_20bc;
        undefined1 local_20b8[48];
        HTTPRequest local_2088[6];
        fixed_string<char, 4096, true, eastl::allocator> local_1060[4136];
        long local_38;

        uVar19 = (undefined4)((ulong)in_stack_ffffffffffffde18 >> 32);
        uVar2 = (undefined4)((ulong)in_stack_ffffffffffffde20 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_20b8._40_8_ = this;
        (**(code**)*field_0)(local_2198 + 32);
        if ((param_3 & 4) != 0) {
            this_01 = (ClientError*)local_20b8._40_8_;
            cVar1 = FilterError((ClientError*)local_20b8._40_8_, param_1, param_2);
            if (cVar1 != '\0') {
                local_2118[0] = GetErrorCRC(this_01, param_1, param_2);
                this_02 = (undefined1*)(local_20b8._40_8_ + 56);
                puVar7 = (uint*)
                    eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                        (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)this_02,
                        local_2118);
                uVar18 = *puVar7;
                if (uVar18 < 101) {
                    eastl::fixed_string<char, 4096, true, eastl::allocator>::fixed_string(local_1060, param_1);
                    lVar8 = local_1060->find('\n', 0);
                    if (lVar8 != -1) {
                        eastl::fixed_string<char, 4096, true, eastl::allocator>::substr((ulong)local_2088,
                                                                                        (ulong)local_1060);
                        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(local_1060,
                                                                                           (fixed_string*)local_2088);
                        /* WARNING: Subroutine does not return */
                        local_2088->~fixed_string();
                    }
                    if (uVar18 == 100) {
                        if ((param_3 & 2) != 0) {
                            uVar9 = logger::default_logger();
                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            puVar11 = (undefined4*)
                                eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::
                                operator[](
                                    (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)
                                        this_02,
                                    local_2118);
                            logger::Logger::Log(uVar9, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/crash/ClientError.cpp",
                                                47, "%s [x%u] Not showing this error any more", uVar10,
                                                CONCAT44(uVar2, *puVar11));
                        }
                    } else if ((param_3 & 2) != 0) {
                        uVar9 = logger::default_logger();
                        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        puVar11 = (undefined4*)eastl::
                            map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
                                (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)this_02,
                                local_2118);
                        logger::Logger::Log(uVar9, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/crash/ClientError.cpp",
                                            51, "%s [x%u]", uVar10, CONCAT44(uVar2, *puVar11));
                    }
                    /* WARNING: Subroutine does not return */
                    local_1060->~fixed_string();
                }
                goto LAB_1004c17aa;
            }
        }
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            if ((param_3 & 2) != 0) {
                uVar9 = logger::default_logger();
                pcVar15 = param_1;
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/crash/ClientError.cpp",
                                    62, &DAT_100e377c0, param_1);
                uVar19 = (undefined4)((ulong)pcVar15 >> 32);
            }
            (**(code**)(**(undefined8**)local_20b8._40_8_ + 32))(local_1060);
            stringtools::URLEncodeCP1252<eastl::string>((basic_string*)local_2118);
            local_1060->~basic_string();
            (**(code**)(**(undefined8**)local_20b8._40_8_ + 16))(local_1060);
            stringtools::URLEncodeCP1252<eastl::string>(local_21b8);
            local_1060->~basic_string();
            (**(code**)(**(undefined8**)local_20b8._40_8_ + 8))(local_1060);
            stringtools::URLEncodeCP1252<eastl::string>((basic_string*)local_2198);
            local_1060->~basic_string();
            tVar12 = _time((time_t*)0);
            local_20b8._36_4_ = SUB84(CONCAT71(in_register_00000009, param_3), 0);
            new (local_1060) eastl::fixed_string<char, 1024, true, eastl::allocator>();
            local_20d8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_03 = (AddMemberOldV1*)local_2198;
            local_20d0 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_20bc = Version::GetClientVersion();
            uVar2 = this_03->GetID();
            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = (**(code**)(**(undefined8**)local_20b8._40_8_ + 24))();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_1060,
                        "%s/nxtclienterror.ws?clientToken=%s&timeStamp=%llu&c=%d&cs=%d&nxt=%s&u=%s&cid=%d&devbuild=%d",
                        local_20d8, local_20d0, tVar12 * 1000, (ulong)local_20bc, CONCAT44(uVar19, uVar2), uVar9,
                        uVar10, uVar3, 1);
            (**(code**)(**(undefined8**)local_20b8._40_8_ + 64))(local_2158);
            uVar5 = 0;
            iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252(param_1, false);
            uVar18 = local_20b8._36_4_;
            if ((((byte)local_20b8[36] & 1) != 0) && (param_2 != (Callstack*)0)) {
                uVar5 = param_2->GetX();
            }
            if ((int)uVar5 < 1) {
                iVar4 = iVar4 + 2;
            } else {
                iVar4 = iVar4 + uVar5 * 8 + 12;
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    iVar6 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>(local_2158, false);
                    iVar4 = iVar6 + iVar4;
                }
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_20f8);
            (**(code**)(**(undefined8**)local_20b8._40_8_ + 56))(*(undefined8**)local_20b8._40_8_, local_20f8);
            iVar6 = local_20f8->size();
            new (local_20b8) PacketT<Array<unsigned char, BucketAllocatorEASTL>>((ulong)(iVar4 + iVar6 + 4));
            local_20b8->pStringUTF8ToCP1252(param_1, false);
            if ((int)uVar5 < 1) {
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, 0);
            } else {
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, uVar5);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, 8);
                lVar13 = callstack::GetBinaryAddress(callstack::g_mainPtr);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, lVar13);
                uVar17 = 0;
                do {
                    lVar8 = param_2->GetStack();
                    lVar13 = callstack::GetBinaryAddress(*(void**)(lVar8 + uVar17 * 8));
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, lVar13);
                    uVar17 = uVar17 + 1;
                } while (uVar5 != uVar17);
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, 1);
                    uVar18 = local_20b8._36_4_;
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, local_2158, false);
                } else {
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, 0);
                    uVar18 = local_20b8._36_4_;
                }
            }
            iVar4 = local_20f8->size();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, iVar4);
            lVar8 = local_20f8->size();
            if (lVar8 != 0) {
                uVar17 = local_20f8->size();
                local_20b8->pArrayBuffer(local_20f8, 0, uVar17);
            }
            iVar4 = (**(code**)(**(undefined8**)local_20b8._40_8_ + 48))();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_20b8, iVar4);
            eastl::string::basic_string(local_2138);
            uVar5 = local_20b8->GetTextureAtlas();
            eastl::string::reserve(local_2138, (ulong)uVar5);
            eastl::string::operator+=(local_2138, "data=");
            this_00 = (Base64*)Base64::Instance();
            puVar14 = (uchar*)local_20b8->GetDataPtr();
            uVar17 = local_20b8->GetTextureAtlas();
            this_00->EncodeAlt(local_2138, puVar14, uVar17);
            if ((uVar18 & 2) != 0) {
                uVar9 = logger::default_logger();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/crash/ClientError.cpp",
                                    164, "Reporting error to \'%s\'...", uVar10);
            }
            http::HTTPRequest::HTTPRequest(local_2088, 0);
            pcVar15 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_2088->PostSync(pcVar15, pcVar16);
            if ((uVar18 & 2) != 0) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/crash/ClientError.cpp",
                                    170, "Finished reporting error via HTTP");
            }
            local_2088->~HTTPRequest();
            eastl::string::~basic_string(local_2138);
            local_20b8->~PacketT();
            local_20f8->~PacketT();
            local_2158->~basic_string();
            /* WARNING: Subroutine does not return */
            local_1060->~fixed_string();
        }
        uVar9 = logger::default_logger();
        logger::Logger::Log(
            uVar9, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/crash/ClientError.cpp",
            58, "Following error occurred but was not reported due to no world address:\n%s", param_1);
    LAB_1004c17aa:
        ((local_2198 + 32))->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004c1950, 128 bytes, placed by class name
    // ClientError::FilterError(char const*, callstack::Callstack const*)
    ulong ClientError::FilterError(char* param_1, Callstack* param_2) {
        bool bVar1;
        int* piVar2;
        undefined7 extraout_var;
        undefined1 auVar3[16];
        undefined8 local_30;
        undefined8 local_28;
        uint local_1c;

        local_1c = GetErrorCRC(this, param_1, param_2);
        piVar2 = (int*)eastl::map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>::operator[](
            (map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator>*)&field_56, &local_1c);
        *piVar2 = *piVar2 + 1;
        local_30 = eastl::rbtree<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                 eastl::use_self<unsigned int>, false, true>::find(&field_8);
        auVar3 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_28 = auVar3._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, auVar3._8_8_);
        if (!bVar1) {
            eastl::rbtree<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                          eastl::use_self<unsigned int>, false, true>::insert<unsigned int&,
                                                                              void>(
                (rbtree<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_self<unsigned int>, false, true>*)&field_8,
                &local_1c);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1004c19d0, 128 bytes, placed by class name
    // ClientError::GetErrorCRC(char const*, callstack::Callstack const*)
    uint ClientError::GetErrorCRC(char* param_1, Callstack* param_2) {
        uint uVar1;
        int iVar2;
        int iVar4;
        size_t sVar5;

        sVar5 = _strlen(param_1);
        uVar1 = CRC32((uchar*)param_1, sVar5, 4294967295);
        if ((param_2 != (Callstack*)0) && (iVar2 = param_2->GetX(), 0 < iVar2)) {
            iVar2 = 0;
            do {
                uVar1 = param_2->GetFrameAddress(iVar2) ^ (uVar1 << 24 | uVar1 >> 8);
                iVar2 = iVar2 + 1;
                iVar4 = param_2->GetX();
            } while (iVar2 < iVar4);
        }
        return uVar1;
    }

} // namespace jag::game
