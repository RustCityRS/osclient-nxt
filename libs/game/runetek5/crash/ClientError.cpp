// libs/game/runetek5/crash/ClientError.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class ClientError {
    public:
        void ReportError(const callstack::JagException& jagException, const char* str, unsigned char arg3);
        void ReportError(const char* str, const callstack::Callstack* callstack, unsigned char arg3);
        uint32_t FilterError(const char* str, const callstack::Callstack* callstack);
        unsigned int GetErrorCRC(const char* str, const callstack::Callstack* callstack);

    private:
        uint64_t* field_0;
        uint8_t _unknown_8[56];
    };

    // 0x1004c0fe0
    void ClientError::ReportError(const callstack::JagException& jagException, const char* str, unsigned char arg3) {
        if (str == nullptr) {
            str = (char*)jagException.GetText();
        }
        auto callstack = jagException.GetCallstackRaw();
        ReportError(str, callstack, arg3);
    }

    // 0x1004c1030
    void ClientError::ReportError(const char* str, const callstack::Callstack* callstack, unsigned char arg3) {
        uint32_t uVar3;
        int iVar4;
        unsigned int uVar5;
        int iVar6;
        unsigned int* puVar7;
        long lVar8;
        Logger* pLVar9;
        uint64_t uVar10;
        uint32_t* puVar11;
        time_t tVar12;
        uint64_t uVar13;
        unsigned long long uVar14;
        Base64* this_00;
        unsigned char* arg2;
        char* pcVar15;
        char* str2;
        uint64_t in_register_00000009;
        unsigned long uVar16;
        ClientError* this_01;
        uint8_t* this_02;
        AddMemberOldV1* this_03;
        unsigned int uVar17;
        uint64_t in_stack_ffffffffffffde18;
        uint64_t in_stack_ffffffffffffde20;
        eastl::string local_21b8;
        uint8_t local_2198[64];
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>> local_2158;
        eastl::string local_2138;
        unsigned int local_2118[8];
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_20f8;
        uint64_t local_20d8;
        uint64_t local_20d0;
        unsigned int local_20bc;
        uint8_t local_20b8[48];
        HTTPRequest local_2088;
        fixed_string<char, 4096> local_1060;

        uint32_t uVar18 = (uint32_t)((unsigned long)in_stack_ffffffffffffde18 >> 32);
        uint32_t uVar2 = (uint32_t)((unsigned long)in_stack_ffffffffffffde20 >> 32);
        local_20b8._40_8_ = this;
        (**(void (**)(...))*field_0)(local_2198 + 32);
        if ((arg3 & 4) != 0) {
            this_01 = (ClientError*)local_20b8._40_8_;
            if (FilterError((ClientError*)local_20b8._40_8_, str, callstack)) {
                local_2118[0] = GetErrorCRC(this_01, str, callstack);
                this_02 = (uint8_t*)(local_20b8._40_8_ + 56);
                puVar7 = (unsigned int*)(*this_02)[*local_2118];
                uVar17 = *puVar7;
                if (uVar17 < 101) {
                    local_1060 = eastl::fixed_string<char, 4096>(str);
                    lVar8 = local_1060.find('\n', 0);
                    if (lVar8 != -1) {
                        local_2088 = local_1060.substr(0, lVar8 - 1);
                        local_1060 = &local_2088;
                    }
                    if (uVar17 == 100) {
                        if ((arg3 & 2) != 0) {
                            pLVar9 = logger::default_logger();
                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            puVar11 = (uint32_t*)(*this_02)[*local_2118];
                            pLVar9->Log(false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/crash/ClientError.cpp",
                                        47, "%s [x%u] Not showing this error any more", uVar10,
                                        (((uint64_t)uVar2 << 32) | (uint32_t)(*puVar11)));
                        }
                    } else if ((arg3 & 2) != 0) {
                        pLVar9 = logger::default_logger();
                        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        puVar11 = (uint32_t*)(*this_02)[*local_2118];
                        pLVar9->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/crash/ClientError.cpp",
                                    51, "%s [x%u]", uVar10, (((uint64_t)uVar2 << 32) | (uint32_t)(*puVar11)));
                    }
                }
                goto LAB_1004c17aa;
            }
        }
        if (!(((local_2198 + 32))->empty())) {
            if ((arg3 & 2) != 0) {
                pLVar9 = logger::default_logger();
                pcVar15 = str;
                pLVar9->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/crash/"
                            "ClientError.cpp",
                            62, "%s", str);
                uVar18 = (uint32_t)((unsigned long)pcVar15 >> 32);
            }
            (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 32))(&local_1060);
            stringtools::URLEncodeCP1252<eastl::string>((eastl::string*)local_2118);
            (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 16))(&local_1060);
            stringtools::URLEncodeCP1252<eastl::string>(&local_21b8);
            (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 8))(&local_1060);
            stringtools::URLEncodeCP1252<eastl::string>((eastl::string*)local_2198);
            tVar12 = _time(nullptr);
            local_20b8._36_4_ = (uint32_t)((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3));
            local_1060 = eastl::fixed_string<char, 1024>();
            local_20d8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_03 = (AddMemberOldV1*)local_2198;
            local_20d0 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_20bc = Version::GetClientVersion();
            uVar2 = this_03->GetID();
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 24))();
            local_1060.sprintf(
                "%s/nxtclienterror.ws?clientToken=%s&timeStamp=%llu&c=%d&cs=%d&nxt=%s&u=%s&cid=%d&devbuild=%d",
                local_20d8, local_20d0, tVar12 * 1000, (unsigned long)local_20bc,
                (((uint64_t)uVar18 << 32) | (uint32_t)uVar2), uVar10, uVar13, uVar3, 1);
            (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 64))(&local_2158);
            uVar5 = 0;
            iVar4 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252(str, false);
            uVar17 = local_20b8._36_4_;
            if ((((uint8_t)local_20b8[36] & 1) != 0) && (callstack != nullptr)) {
                uVar5 = callstack->GetX();
            }
            if ((int)uVar5 < 1) {
                iVar4 = iVar4 + 2;
            } else {
                iVar4 = iVar4 + uVar5 * 8 + 12;
                if (!(local_2158.empty())) {
                    iVar6 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(local_2158,
                                                                                                           false);
                    iVar4 = iVar6 + iVar4;
                }
            }
            local_20f8 = PacketT();
            (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 56))(*(uint64_t**)local_20b8._40_8_, &local_20f8);
            iVar6 = local_20f8.size();
            new (local_20b8) PacketT((unsigned long)(iVar4 + iVar6 + 4));
            local_20b8->pStringUTF8ToCP1252(str, false);
            if ((int)uVar5 < 1) {
                local_20b8->p2<int>(0);
            } else {
                local_20b8->p2<int>(uVar5);
                local_20b8->p1<oldscape::shared::LoginProt::ID>(8);
                uVar14 = callstack::GetBinaryAddress(callstack::g_mainPtr);
                local_20b8->p8<long long>(uVar14);
                uVar16 = 0;
                do {
                    lVar8 = callstack->GetStack();
                    uVar14 = callstack::GetBinaryAddress(*(void**)(lVar8 + uVar16 * 8));
                    local_20b8->p8<long long>(uVar14);
                    uVar16 = uVar16 + 1;
                } while (uVar5 != uVar16);
                if (!(local_2158.empty())) {
                    local_20b8->p1<oldscape::shared::LoginProt::ID>(1);
                    uVar17 = local_20b8._36_4_;
                    local_20b8->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(local_2158, false);
                } else {
                    local_20b8->p1<oldscape::shared::LoginProt::ID>(0);
                    uVar17 = local_20b8._36_4_;
                }
            }
            uVar5 = local_20f8.size();
            local_20b8->p2<int>(uVar5);
            lVar8 = local_20f8.size();
            if (lVar8 != 0) {
                uVar16 = local_20f8.size();
                local_20b8->pArrayBuffer(&local_20f8, 0, uVar16);
            }
            uVar5 = (**(void (**)(...))(**(uint64_t**)local_20b8._40_8_ + 48))();
            local_20b8->p2<int>(uVar5);
            local_2138 = eastl::string();
            uVar5 = local_20b8->GetTextureAtlas();
            local_2138.reserve((unsigned long)uVar5);
            local_2138 += "data=";
            this_00 = Base64::Instance();
            arg2 = (unsigned char*)local_20b8->GetDataPtr();
            uVar16 = local_20b8->GetTextureAtlas();
            this_00->EncodeAlt(local_2138, arg2, uVar16);
            if ((uVar17 & 2) != 0) {
                pLVar9 = logger::default_logger();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar9->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/crash/"
                            "ClientError.cpp",
                            164, "Reporting error to \'%s\'...", uVar10);
            }
            local_2088 = http::HTTPRequest(0);
            pcVar15 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_2088.PostSync(pcVar15, str2);
            if ((uVar17 & 2) != 0) {
                pLVar9 = logger::default_logger();
                pLVar9->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/crash/"
                            "ClientError.cpp",
                            170, "Finished reporting error via HTTP");
            }
        }
        pLVar9 = logger::default_logger();
        pLVar9->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/crash/ClientError.cpp",
            58, "Following error occurred but was not reported due to no world address:\n%s", str);
    LAB_1004c17aa:
        ((local_2198 + 32))->~basic_string();
    }

    // 0x1004c1950
    uint32_t ClientError::FilterError(const char* str, const callstack::Callstack* callstack) {
        unsigned int local_1c = GetErrorCRC(str, callstack);
        int* piVar2 = &field_56[local_1c];
        *piVar2 = *piVar2 + 1;
        uint8_t* this_00 = &field_8;
        uint64_t local_30 = this_00->find(local_1c);
        uint64_t local_28 = this_00->end();
        uint32_t uVar1 = local_30 != local_28;
        if ((char)uVar1 == '\0') {
            this_00->insert<unsigned int&, void>(local_1c);
        }
        return uVar1;
    }

    // 0x1004c19d0
    unsigned int ClientError::GetErrorCRC(const char* str, const callstack::Callstack* callstack) {
        int iVar2;
        int iVar4;

        size_t arg2 = _strlen(str);
        unsigned int uVar1 = CRC32((unsigned char*)str, arg2, 4294967295);
        if ((callstack != nullptr) && (iVar2 = callstack->GetX(), 0 < iVar2)) {
            iVar2 = 0;
            do {
                uVar1 = callstack->GetFrameAddress(iVar2) ^ (uVar1 << 24 | uVar1 >> 8);
                iVar2 = iVar2 + 1;
                iVar4 = callstack->GetX();
            } while (iVar2 < iVar4);
        }
        return uVar1;
    }

} // namespace jag::game
