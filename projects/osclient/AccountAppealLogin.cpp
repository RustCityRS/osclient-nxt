// projects/osclient/AccountAppealLogin.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::oldscape {
    class AccountAppealLogin {
    public:
        GetChallengeId();
        int DoAccountAppealLogin(unsigned long long, eastl::string const&);
        static eastl::string /* 32 bytes */ SUBDOMAIN;  // = "services"
        static eastl::string /* 32 bytes */ LOGIN_PAGE; // = "m=accountappeal/login.ws"
        static jag::math::BigInteger                    /* 8 bytes */
            KEY_E; // = BigInteger("80782894952180643741752986186714059433953886149239752893425047584684715842049", 10)
        static jag::math::BigInteger /* 8 bytes */ KEY_N; // initialised in its definition
        static eastl::string /* 32 bytes */ DESTINATION;  // = "passwordchoice.ws"
    };

    // 0x100f8acb0, 32 bytes, __common; set at startup by ___cxx_global_var_init.33
    eastl::string AccountAppealLogin::SUBDOMAIN = "services";

    // 0x100f8acd0, 32 bytes, __common; set at startup by ___cxx_global_var_init.31
    eastl::string AccountAppealLogin::LOGIN_PAGE = "m=accountappeal/login.ws";

    // 0x100f8acf0, 8 bytes, __common; set at startup by ___cxx_global_var_init.37
    jag::math::BigInteger AccountAppealLogin::KEY_E =
        BigInteger("80782894952180643741752986186714059433953886149239752893425047584684715842049", 10);

    // 0x100f8acf8, 8 bytes, __common; set at startup by ___cxx_global_var_init.39
    jag::math::BigInteger AccountAppealLogin::KEY_N =
        BigInteger("723730011730566748870718386172805276635816665505213772743979519125334012795507549963557510490152344"
                   "6809299097934591732635674173519120047404024393881551683",
                   10);

    // 0x100f8ad00, 32 bytes, __common; set at startup by ___cxx_global_var_init.35
    eastl::string AccountAppealLogin::DESTINATION = "passwordchoice.ws";

    // 0x10017a180, 528 bytes, placed by class name and debug map
    // AccountAppealLogin::GetChallengeId()
    undefined8 AccountAppealLogin::GetChallengeId() {
        int iVar1;
        basic_string* pbVar2;
        Array* pAVar3;
        undefined8 uVar4;
        basic_string local_310[32];
        eastl local_2f0[32];
        eastl local_2d0[32];
        HTTPRequest local_2b0;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_2b0) http::HTTPRequest(0);
        local_2b0.AddHTTPHeader("connection", "close");
        local_2b0.SetTotalTimeoutSeconds(5000);
        pbVar2 = (basic_string*)Client::Instance();
        local_310->GetBaseUrl(pbVar2, true);
        eastl::operator+(local_2d0, local_310, (basic_string*)&LOGIN_PAGE);
        eastl::operator+(local_2f0, (basic_string*)local_2d0, (value_type*)"?data1=req");
        ((basic_string*)&local_2b0)->GetSync();
        local_2f0->~basic_string();
        local_2d0->~basic_string();
        local_310->~basic_string();
        iVar1 = local_2b0.GetState();
        if (iVar1 == 1) {
            iVar1 = local_2b0.GetCurrentValue();
            if (iVar1 == 0) {
                iVar1 = local_2b0.GetGridSize();
                if (iVar1 < 400) {
                    pAVar3 = (Array*)local_2b0.GetMSAASampleCount();
                    Array<unsigned char, BucketAllocatorEASTL>::Array<eastl::allocator>(
                        (Array<unsigned char, BucketAllocatorEASTL>*)local_2d0, pAVar3);
                    local_2f0->PacketT(local_2d0);
                    local_2d0->~Array();
                    uVar4 = local_2f0->g8();
                    local_2f0->~PacketJ();
                    goto LAB_10017a290;
                }
            }
        }
        uVar4 = 0;
    LAB_10017a290:
        local_2b0.~HTTPRequest();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4;
    }

    // 0x10017a600, 3328 bytes, placed by class name
    // AccountAppealLogin::DoAccountAppealLogin(unsigned long long, eastl::string const&)
    int AccountAppealLogin::DoAccountAppealLogin(ulonglong param_1, basic_string* param_2) {
        bool bVar1;
        char cVar2;
        byte bVar3;
        undefined4 uVar4;
        int iVar5;
        SecureRandom* this;
        undefined4* puVar6;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar7;
        longlong lVar8;
        Client* this_00;
        SuperPacket* pSVar9;
        TextureAtlasReference* pTVar10;
        ulong uVar11;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar12;
        long lVar13;
        long lVar14;
        long lVar15;
        undefined8 uVar16;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar17;
        uchar* puVar18;
        Base64* this_01;
        basic_string* pbVar19;
        Array* pAVar20;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        vector* pvVar21;
        char* pcVar22;
        char* pcVar23;
        ulong uVar24;
        undefined8* puVar25;
        shared_ptr<ApplicationContext>* this_03;
        long* plVar26;
        uint uVar27;
        uint uVar28;
        type* ptVar29;
        array* paVar30;
        int iVar31;
        eastl local_460[32];
        basic_string local_440[32];
        basic_string local_420[32];
        basic_string local_400[32];
        eastl::string local_3e0[32];
        array<int, 4ul> local_3c0[16];
        NXTPixToolkit* local_3b0;
        GraphicsApp* local_3a8;
        basic_string* local_3a0;
        eastl local_398[32];
        undefined1 local_378[64];
        eastl local_338[32];
        jag local_318[20];
        uint local_304;
        jag local_300[16];
        jag local_2f0[16];
        jag local_2e0[16];
        HTTPRequest local_2d0;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_3a0 = param_2;
        this = Singleton<SecureRandom>::Create<>((Singleton<SecureRandom>*)param_1);
        local_2d0._0_4_ = 128;
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(local_2f0, (int*)&local_2d0);
        local_2d0._0_4_ = 128;
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(local_2e0, (int*)&local_2d0);
        uVar4 = GetInt();
        local_3b0 = (NXTPixToolkit*)std::array<int, 4ul>::operator[](local_3c0, 0);
        *(undefined4*)&local_3b0->field_0 = uVar4;
        uVar4 = GetInt();
        local_3a8 = (GraphicsApp*)std::array<int, 4ul>::operator[](local_3c0, 1);
        *(undefined4*)&local_3a8->field_0 = uVar4;
        puVar6 = (undefined4*)std::array<int, 4ul>::operator[](local_3c0, 2);
        *puVar6 = (int)(param_1 >> 32);
        puVar6 = (undefined4*)std::array<int, 4ul>::operator[](local_3c0, 3);
        *puVar6 = (int)param_1;
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar7, 10);
        iVar31 = 4;
        do {
            pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                         shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
            iVar5 = GetInt();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar7, iVar5);
            iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar7, *(int*)&local_3b0->field_0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar7, *(int*)&local_3a8->field_0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(pPVar7, param_1);
        iVar31 = 4;
        do {
            pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                         shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
            iVar5 = GetInt();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar7, iVar5);
            iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        pPVar7->chunkRsaEncrypt((BigInteger*)&KEY_E, (BigInteger*)&KEY_N);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar7, 10);
        iVar31 = 3;
        do {
            pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                         shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
            iVar5 = GetInt();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar7, iVar5);
            iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        lVar8 = GetInt64();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(pPVar7, lVar8);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        lVar8 = GetInt64();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p6<long long>(pPVar7, lVar8);
        this_00 = (Client*)Client::Instance();
        pSVar9 = (SuperPacket*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*(
            (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        this_00->SerialiseCurrentPackedUIDToPacket(pSVar9);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        lVar8 = GetInt64();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(pPVar7, lVar8);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        pPVar7->chunkRsaEncrypt((BigInteger*)&KEY_E, (BigInteger*)&KEY_N);
        pbVar19 = local_3a0;
        iVar31 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar27 = iVar31 + 1;
        uVar28 = iVar31 + 8;
        if (-1 < (int)uVar27) {
            uVar28 = uVar27;
        }
        iVar5 = (iVar31 - (uVar28 & 4294967288)) + 1;
        local_304 = (iVar31 - iVar5) + 9;
        if (iVar5 == 0) {
            local_304 = uVar27;
        }
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(local_318, (int*)&local_304);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(pPVar7, pbVar19, false);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        pPVar7->SetPos((long)(int)local_304);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        pTVar10 = (TextureAtlasReference*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
            (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        uVar11 = pTVar10->GetTextureAtlas();
        pPVar7->tinyKeyEncrypt(local_3c0, 0, uVar11);
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        lVar13 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        lVar14 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        lVar15 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        local_2d0._0_8_ = lVar15 + lVar13 + lVar14 + 5;
        make_shared<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(local_300, (ulong*)&local_2d0);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar7, 2);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        uVar16 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar7, uVar16);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        pPVar17 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        puVar18 = (uchar*)pPVar17->GetDataPtr();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2f0);
        uVar11 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        pPVar7->pArrayBuffer(puVar18, 0, uVar11);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        uVar16 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar7, uVar16);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        pPVar17 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        puVar18 = (uchar*)pPVar17->GetDataPtr();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_2e0);
        uVar11 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        pPVar7->pArrayBuffer(puVar18, 0, uVar11);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        iVar31 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar7, iVar31);
        pPVar7 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                     shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        pPVar17 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        puVar18 = (uchar*)pPVar17->GetDataPtr();
        phVar12 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_318);
        uVar11 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
        pPVar7->pArrayBuffer(puVar18, 0, uVar11);
        eastl::string::basic_string(local_3e0);
        this_01 = (Base64*)Base64::Instance();
        pPVar17 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
                          (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        puVar18 = (uchar*)pPVar17->GetDataPtr();
        pTVar10 = (TextureAtlasReference*)shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->(
            (shared_ptr<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)local_300);
        uVar11 = pTVar10->GetTextureAtlas();
        this_01->Encode(local_3e0, puVar18, uVar11);
        new (&local_2d0) http::HTTPRequest(0);
        local_2d0.SetTotalTimeoutSeconds(5000);
        pbVar19 = (basic_string*)Client::Instance();
        local_440->GetBaseUrl(pbVar19, true);
        eastl::operator+(local_460, local_440, (basic_string*)&LOGIN_PAGE);
        eastl::operator+(local_398, (basic_string*)local_460, (value_type*)"?data2=");
        stringtools::URLEncodeCP1252<eastl::string>(local_420);
        eastl::operator+(local_338, (basic_string*)local_398, local_420);
        eastl::operator+((eastl*)(local_378 + 32), (basic_string*)local_338, (value_type*)"&dest=");
        stringtools::URLEncodeCP1252<eastl::string>(local_400);
        eastl::operator+((eastl*)local_378, (basic_string*)(local_378 + 32), local_400);
        ((basic_string*)&local_2d0)->GetSync();
        local_378->~basic_string();
        local_400->~basic_string();
        ((local_378 + 32))->~basic_string();
        local_338->~basic_string();
        local_420->~basic_string();
        local_398->~basic_string();
        local_460->~basic_string();
        local_440->~basic_string();
        iVar31 = local_2d0.GetState();
        iVar5 = 5;
        if (((iVar31 == 1) && (iVar31 = local_2d0.GetCurrentValue(), iVar31 == 0)) &&
            (iVar31 = local_2d0.GetGridSize(), iVar31 < 400)) {
            pAVar20 = (Array*)local_2d0.GetMSAASampleCount();
            Array<unsigned char, BucketAllocatorEASTL>::Array<eastl::allocator>(
                (Array<unsigned char, BucketAllocatorEASTL>*)(local_378 + 32), pAVar20);
            local_378->PacketT((Array*)(local_378 + 32));
            ((local_378 + 32))->~Array();
            lVar13 = local_378->size();
            this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_2d0.GetMSAASampleCount();
            lVar14 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            ptVar29 = (type*)(lVar13 + lVar14);
            local_378->SetPos((ulong)ptVar29);
            new ((local_378 + 32)) eastl::string();
            pvVar21 = local_378->SSOBeginPtr(ptVar29);
            pcVar22 = (char*)pvVar21->data();
            pcVar23 = (char*)pvVar21->end();
            if (pcVar22 != pcVar23) {
                do {
                    ((local_378 + 32))->push_back(*pcVar22);
                    pcVar22 = pcVar22 + 1;
                } while (pcVar22 != pcVar23);
            }
            new (local_398) eastl::allocator("EASTL basic_string");
            new (local_338) eastl::string("OFFLINE", local_398);
            bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                (basic_string*)(local_378 + 32), (basic_string*)local_338);
            local_338->~basic_string();
            iVar5 = 4;
            if (!bVar1) {
                new (local_398) eastl::allocator("EASTL basic_string");
                new (local_338) eastl::string("WRONG", local_398);
                bVar1 =
                    core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                        (basic_string*)(local_378 + 32), (basic_string*)local_338);
                local_338->~basic_string();
                iVar5 = 7;
                if (!bVar1) {
                    new (local_398) eastl::allocator("EASTL basic_string");
                    new (local_338) eastl::string("RELOAD", local_398);
                    bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                eastl::allocator>(
                        (basic_string*)(local_378 + 32), (basic_string*)local_338);
                    local_338->~basic_string();
                    iVar5 = 3;
                    if (!bVar1) {
                        new (local_398) eastl::allocator("EASTL basic_string");
                        new (local_338) eastl::string("Not permitted for social network accounts.", local_398);
                        bVar1 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                    eastl::allocator>(
                            (basic_string*)(local_378 + 32), (basic_string*)local_338);
                        local_338->~basic_string();
                        iVar5 = 6;
                        if (!bVar1) {
                            uVar11 = local_378->GetTextureAtlas();
                            paVar30 = (array*)local_3c0;
                            local_378->tinyKeyDecrypt(paVar30, 0, uVar11);
                            while (true) {
                                lVar13 = local_378->size();
                                if (lVar13 == 0) {
                                    cVar2 = '\0';
                                } else {
                                    lVar14 = local_378->GetDataArrayPtr();
                                    lVar15 = local_378->size();
                                    new (local_338) Array<unsigned char, BucketAllocatorEASTL>(0);
                                    paVar30 = (array*)local_338;
                                    cVar2 = Array<unsigned char, eastl::allocator>::operator==(
                                        (Array<unsigned char, eastl::allocator>*)(lVar15 * 24 + -24 + lVar14),
                                        (Array*)local_338);
                                    if (lVar13 != 0) {
                                        local_338->~Array();
                                    }
                                }
                                if (cVar2 == '\0')
                                    break;
                                lVar13 = local_378->size();
                                paVar30 = (array*)(lVar13 - 1);
                                local_378->SetPos((ulong)paVar30);
                            }
                            eastl::string::clear();
                            lVar13 = local_378->size();
                            if (lVar13 != 0) {
                                uVar11 = 0;
                                do {
                                    pvVar21 = local_378->SSOBeginPtr(paVar30);
                                    pcVar22 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                        (Array<unsigned char, BucketAllocatorEASTL>*)pvVar21, uVar11);
                                    paVar30 = (array*)(ulong)(uint)(int)*pcVar22;
                                    ((local_378 + 32))->push_back(*pcVar22);
                                    uVar11 = uVar11 + 1;
                                    uVar24 = local_378->size();
                                } while (uVar11 < uVar24);
                            }
                            puVar25 = (undefined8*)Client::Instance();
                            this_03 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar25)(puVar25);
                            plVar26 = (long*)shared_ptr<ApplicationContext>::operator->(this_03);
                            bVar3 = (**(code**)(*plVar26 + 192))(plVar26, local_378 + 32, 1);
                            iVar5 = (uint)(bVar3 ^ 1) * 3 + 2;
                        }
                    }
                }
            }
            ((local_378 + 32))->~basic_string();
            local_378->~PacketJ();
        }
        local_2d0.~HTTPRequest();
        eastl::string::~basic_string(local_3e0);
        local_300->~shared_ptr();
        local_318->~shared_ptr();
        local_2e0->~shared_ptr();
        local_2f0->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar5;
    }

    // 0x1001b6300, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AccountAppealLogin::LOGIN_PAGE) eastl::string("m=accountappeal/login.ws", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AccountAppealLogin::LOGIN_PAGE, 4294967296);
    }

    // 0x1001b6360, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AccountAppealLogin::SUBDOMAIN) eastl::string("services", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AccountAppealLogin::SUBDOMAIN, 4294967296);
    }

    // 0x1001b63c0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AccountAppealLogin::DESTINATION) eastl::string("passwordchoice.ws", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AccountAppealLogin::DESTINATION, 4294967296);
    }

    // 0x1001b6420, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        new (&AccountAppealLogin::KEY_E)
            jag::math::BigInteger("80782894952180643741752986186714059433953886149239752893425047584684715842049", 10);
        ___cxa_atexit(PTR__BigInteger_100ee6670, &AccountAppealLogin::KEY_E, 4294967296);
    }

    // 0x1001b6460, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        new (&AccountAppealLogin::KEY_N)
            jag::math::BigInteger("723730011730566748870718386172805276635816665505213772743979519125334012795507549963"
                                  "5575104901523446809299097934591732635674173519120047404024393881551683",
                                  10);
        ___cxa_atexit(PTR__BigInteger_100ee6670, &AccountAppealLogin::KEY_N, 4294967296);
    }

} // namespace jag::oldscape
