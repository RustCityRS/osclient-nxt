// projects/osclient/AccountAppealLogin.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::oldscape {
    class AccountAppealLogin {
    public:
        void GetChallengeId();
        int DoAccountAppealLogin(unsigned long long arg1, const eastl::string& str);
        static eastl::string SUBDOMAIN;  // = "services"
        static eastl::string LOGIN_PAGE; // = "m=accountappeal/login.ws"
        static jag::math::BigInteger
            KEY_E; // = BigInteger("80782894952180643741752986186714059433953886149239752893425047584684715842049", 10)
        static jag::math::BigInteger KEY_N; // initialised in its definition
        static eastl::string DESTINATION;   // = "passwordchoice.ws"

        uint8_t _unknown_0[1];
    };

    // 0x100f8acb0, set at startup by ___cxx_global_var_init.33
    eastl::string AccountAppealLogin::SUBDOMAIN = "services";

    // 0x100f8acd0, set at startup by ___cxx_global_var_init.31
    eastl::string AccountAppealLogin::LOGIN_PAGE = "m=accountappeal/login.ws";

    // 0x100f8acf0, set at startup by ___cxx_global_var_init.37
    jag::math::BigInteger AccountAppealLogin::KEY_E =
        BigInteger("80782894952180643741752986186714059433953886149239752893425047584684715842049", 10);

    // 0x100f8acf8, set at startup by ___cxx_global_var_init.39
    jag::math::BigInteger AccountAppealLogin::KEY_N =
        BigInteger("723730011730566748870718386172805276635816665505213772743979519125334012795507549963557510490152344"
                   "6809299097934591732635674173519120047404024393881551683",
                   10);

    // 0x100f8ad00, set at startup by ___cxx_global_var_init.35
    eastl::string AccountAppealLogin::DESTINATION = "passwordchoice.ws";

    // 0x10017a180
    void AccountAppealLogin::GetChallengeId() {
        Array<unsigned char>* arg1;
        uint64_t uVar2;
        eastl::string local_2f0;
        eastl::string local_2d0;

        HTTPRequest local_2b0(0);
        local_2b0.AddHTTPHeader("connection", "close");
        local_2b0.SetTotalTimeoutSeconds(5000);
        auto local_310 = Client::Instance()->GetBaseUrl(SUBDOMAIN, false);
        local_2d0 + local_310;
        local_2f0 + local_2d0;
        local_2b0.GetSync(&local_2f0);
        int iVar1 = local_2b0.GetState();
        if (iVar1 == 1) {
            iVar1 = local_2b0.GetCurrentValue();
            if (iVar1 == 0) {
                iVar1 = local_2b0.GetGridSize();
                if (iVar1 < 400) {
                    arg1 = (Array<unsigned char>*)local_2b0.GetMSAASampleCount();
                    local_2d0.Array<eastl::allocator>(*arg1);
                    local_2f0.PacketT(&local_2d0);
                    uVar2 = local_2f0.g8();
                    goto LAB_10017a290;
                }
            }
        }
        uVar2 = 0;
    LAB_10017a290:
        return uVar2;
    }

    // 0x10017a600
    int AccountAppealLogin::DoAccountAppealLogin(unsigned long long arg1, const eastl::string& str) {
        bool bVar1;
        char cVar2;
        uint8_t bVar3;
        Array<unsigned char>* arg1_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        char* pcVar18;
        char* pcVar19;
        Array<unsigned char, BucketAllocatorEASTL>* this_03;
        unsigned long uVar20;
        shared_ptr<ApplicationContext>* this_04;
        long* plVar21;
        eastl::string local_460;
        eastl::string local_420;
        eastl::string local_400;
        array<int, 4ul> local_3c0;
        eastl::string local_398;
        uint8_t local_378[64];
        eastl::string local_338;
        ReturnValue local_318;
        ReturnValue local_300;
        ReturnValue local_2f0;
        ReturnValue local_2e0;

        auto secureRandom = arg1->Create<>();
        local_2d0._0_4_ = 128;
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(&local_2f0, (int*)&local_2d0);
        local_2d0._0_4_ = 128;
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(&local_2e0, (int*)&local_2d0);
        unsigned int uVar4 = secureRandom->GetInt();
        unsigned int* local_3b0 = &local_3c0[0];
        *local_3b0 = uVar4;
        uVar4 = secureRandom->GetInt();
        unsigned int* local_3a8 = &local_3c0[1];
        *local_3a8 = uVar4;
        uint32_t* puVar6 = &local_3c0[2];
        *puVar6 = (int)(arg1 >> 32);
        puVar6 = &local_3c0[3];
        *puVar6 = (int)arg1;
        auto pPVar7 = local_2f0.operator->();
        pPVar7->p1<shared::LoginProt::ID>(10);
        int iVar24 = 4;
        do {
            pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2f0.operator->();
            uVar4 = secureRandom->GetInt();
            pPVar7->p4<int>((unsigned long)uVar4);
            iVar24 = iVar24 - 1;
        } while (iVar24 != 0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2f0.operator->();
        pPVar7->p4<int>((unsigned long)*local_3b0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2f0.operator->();
        pPVar7->p4<int>((unsigned long)*local_3a8);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2f0.operator->();
        pPVar7->p8<long long>(arg1);
        iVar24 = 4;
        do {
            pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2f0.operator->();
            uVar4 = secureRandom->GetInt();
            pPVar7->p4<int>((unsigned long)uVar4);
            iVar24 = iVar24 - 1;
        } while (iVar24 != 0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2f0.operator->();
        pPVar7->chunkRsaEncrypt(KEY_E, KEY_N);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2e0.operator->();
        pPVar7->p1<shared::LoginProt::ID>(10);
        iVar24 = 3;
        do {
            pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2e0.operator->();
            uVar4 = secureRandom->GetInt();
            pPVar7->p4<int>((unsigned long)uVar4);
            iVar24 = iVar24 - 1;
        } while (iVar24 != 0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2e0.operator->();
        unsigned long long uVar8 = secureRandom->GetInt64();
        pPVar7->p8<long long>(uVar8);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2e0.operator->();
        long long arg1_00 = secureRandom->GetInt64();
        pPVar7->p6<long long>(arg1_00);
        auto pCVar9 = Client::Instance();
        SuperPacket* superPacket = (SuperPacket*)*local_2e0;
        pCVar9->SerialiseCurrentPackedUIDToPacket(*superPacket);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2e0.operator->();
        uVar8 = secureRandom->GetInt64();
        pPVar7->p8<long long>(uVar8);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_2e0.operator->();
        pPVar7->chunkRsaEncrypt(KEY_E, KEY_N);
        iVar24 = str.size();
        unsigned int uVar22 = iVar24 + 1;
        uVar4 = iVar24 + 8;
        if (-1 < (int)uVar22) {
            uVar4 = uVar22;
        }
        int iVar23 = (iVar24 - (uVar4 & 4294967288)) + 1;
        unsigned int local_304 = (iVar24 - iVar23) + 9;
        if (iVar23 == 0) {
            local_304 = uVar22;
        }
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(&local_318, (int*)&local_304);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_318.operator->();
        pPVar7->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_318.operator->();
        pPVar7->SetPos((long)(int)local_304);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_318.operator->();
        auto pTVar10 = local_318.operator->();
        unsigned long uVar11 = pTVar10->GetTextureAtlas();
        pPVar7->tinyKeyEncrypt(local_3c0, 0, uVar11);
        auto phVar12 = local_2f0.operator->();
        long lVar13 = phVar12->size();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_2e0.operator->();
        long lVar14 = phVar12->size();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_318.operator->();
        long lVar15 = phVar12->size();
        local_2d0._0_8_ = lVar15 + lVar13 + lVar14 + 5;
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(&local_300,
                                                                                        (unsigned long*)&local_2d0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        pPVar7->p1<shared::LoginProt::ID>(2);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_2f0.operator->();
        auto PVar5 = phVar12->size();
        pPVar7->p1<shared::LoginProt::ID>(PVar5);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        auto pPVar16 = local_2f0.operator->();
        auto puVar17 = pPVar16->GetDataPtr();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_2f0.operator->();
        uVar11 = phVar12->size();
        pPVar7->pArrayBuffer(puVar17, 0, uVar11);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_2e0.operator->();
        PVar5 = phVar12->size();
        pPVar7->p1<shared::LoginProt::ID>(PVar5);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        pPVar16 = (PacketT<Array<unsigned char>>*)local_2e0.operator->();
        puVar17 = (unsigned char*)pPVar16->GetDataPtr();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_2e0.operator->();
        uVar11 = phVar12->size();
        pPVar7->pArrayBuffer(puVar17, 0, uVar11);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_318.operator->();
        uVar4 = phVar12->size();
        pPVar7->p2<int>(uVar4);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_300.operator->();
        pPVar16 = (PacketT<Array<unsigned char>>*)local_318.operator->();
        puVar17 = (unsigned char*)pPVar16->GetDataPtr();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)local_318.operator->();
        uVar11 = phVar12->size();
        pPVar7->pArrayBuffer(puVar17, 0, uVar11);
        eastl::string local_3e0;
        auto this_00 = Base64::Instance();
        pPVar16 = (PacketT<Array<unsigned char>>*)local_300.operator->();
        puVar17 = (unsigned char*)pPVar16->GetDataPtr();
        pTVar10 = (TextureAtlasReference*)local_300.operator->();
        uVar11 = pTVar10->GetTextureAtlas();
        this_00->Encode(local_3e0, puVar17, uVar11);
        HTTPRequest local_2d0(0);
        local_2d0.SetTotalTimeoutSeconds(5000);
        pCVar9 = Client::Instance();
        auto local_440 = pCVar9->GetBaseUrl(SUBDOMAIN, false);
        local_460 + local_440;
        local_398 + local_460;
        stringtools::URLEncodeCP1252<eastl::string>(&local_420);
        local_338 + local_398;
        (*((local_378 + 32))) + local_338;
        stringtools::URLEncodeCP1252<eastl::string>(&local_400);
        *local_378 + (*((local_378 + 32)));
        local_2d0.GetSync(local_378);
        ((local_378 + 32))->~basic_string();
        iVar24 = local_2d0.GetState();
        iVar23 = 5;
        if (((iVar24 == 1) && (iVar24 = local_2d0.GetCurrentValue(), iVar24 == 0)) &&
            (iVar24 = local_2d0.GetGridSize(), iVar24 < 400)) {
            arg1_01 = (Array<unsigned char>*)local_2d0.GetMSAASampleCount();
            ((local_378 + 32))->Array<eastl::allocator>(*arg1_01);
            local_378->PacketT((local_378 + 32));
            ((local_378 + 32))->~Array();
            lVar13 = local_378->size();
            lVar14 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_2d0.GetMSAASampleCount())->end();
            local_378->SetPos(lVar13 + lVar14);
            new ((local_378 + 32)) eastl::string();
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_378->SSOBeginPtr();
            pcVar18 = (char*)this_02->data();
            pcVar19 = (char*)this_02->end();
            if (pcVar18 != pcVar19) {
                do {
                    ((local_378 + 32))->push_back(*pcVar18);
                    pcVar18 = pcVar18 + 1;
                } while (pcVar18 != pcVar19);
            }
            local_338 = eastl::string("OFFLINE");
            bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(*((local_378 + 32)),
                                                                                                    local_338);
            iVar23 = 4;
            if (!bVar1) {
                local_338 = eastl::string("WRONG");
                bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                    *((local_378 + 32)), local_338);
                iVar23 = 7;
                if (!bVar1) {
                    new (&local_338) eastl::string("RELOAD");
                    bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                        *((local_378 + 32)), local_338);
                    iVar23 = 3;
                    if (!bVar1) {
                        local_338 = eastl::string("Not permitted for social network accounts.");
                        bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                            *((local_378 + 32)), local_338);
                        iVar23 = 6;
                        if (!bVar1) {
                            uVar11 = local_378->GetTextureAtlas();
                            local_378->tinyKeyDecrypt(local_3c0, 0, uVar11);
                            while (true) {
                                lVar13 = local_378->size();
                                if (lVar13 == 0) {
                                    cVar2 = '\0';
                                } else {
                                    lVar14 = local_378->GetDataArrayPtr();
                                    lVar15 = local_378->size();
                                    local_338 = Array<unsigned char, BucketAllocatorEASTL>(0);
                                    cVar2 = (*((lVar15 * 24 - 24 + lVar14))) == local_338;
                                    if (lVar13 != 0) {
                                    }
                                }
                                if (!cVar2)
                                    break;
                                lVar13 = local_378->size();
                                local_378->SetPos(lVar13 - 1);
                            }
                            ((local_378 + 32))->clear();
                            lVar13 = local_378->size();
                            if (lVar13 != 0) {
                                uVar11 = 0;
                                do {
                                    this_03 = (Array<unsigned char, BucketAllocatorEASTL>*)local_378->SSOBeginPtr();
                                    pcVar18 = (char*)(*this_03)[uVar11];
                                    ((local_378 + 32))->push_back(*pcVar18);
                                    uVar11 = uVar11 + 1;
                                    uVar20 = local_378->size();
                                } while (uVar11 < uVar20);
                            }
                            pCVar9 = Client::Instance();
                            this_04 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                            plVar21 = (long*)(*this_04).operator->();
                            bVar3 = (**(void (**)(...))(*plVar21 + 192))(plVar21, local_378 + 32, 1);
                            iVar23 = (unsigned int)(bVar3 ^ 1) * 3 + 2;
                        }
                    }
                }
            }
            ((local_378 + 32))->~basic_string();
        }
        return iVar23;
    }

} // namespace jag::oldscape
