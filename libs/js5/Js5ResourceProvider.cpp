// libs/js5/Js5ResourceProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5ResourceProvider.h"

namespace jag {
    // 0x100009d50: Js5ResourceProvider::GetJs5WorkerThread() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100029c40: Js5ResourceProvider::GetDiskCache() const has the same machine code as oldscape::javapal::GameShell::GetGraphicsApp()

    // 0x10017f5b0: Js5ResourceProvider::GetMemoryCache() has the same machine code as oldscape::javapal::GameShell::GetPixToolkit()

    // 0x1004af330: Js5ResourceProvider::IsLocalMode() has the same machine code as game::MapArea::ShouldAutoFind() const

    // 0x1009e22e0
    Js5ResourceProvider::Js5ResourceProvider(const Array<eastl::string>& strs, SystemSettings* systemSettings,
                                             Js5ArchiveSetSettings& js5ArchiveSetSettings,
                                             math::BigInteger* bigInteger1, math::BigInteger* bigInteger2,
                                             math::BigInteger* bigInteger3, eastl::string str, bool arg8) {
        auto result;
        future<void>* this_00;
        bool bVar1;
        uint8_t* puVar2;
        bool cVar3;
        bool bVar4;
        unsigned int uVar7;
        int iVar8;
        unique_ptr<Js5LocalModeLoader>* puVar10;
        uint8_t* puVar11;
        fixed_string<char, _24>* str_00;
        char* pcVar13;
        Logger* pLVar14;
        ReturnValue result;
        Layout* this_02;
        unsigned long uVar15;
        uint64_t* puVar16;
        unsigned long long uVar17;
        unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader> _>* puVar18;
        MapSquarePointLights* pMVar19;
        AnimationParameters* this_03;
        Array<game::VarValue>* this_05;
        void* pvVar20;
        size_t sVar21;
        unsigned char* puVar22;
        unsigned long uVar23;
        Array<unsigned char, BucketAllocatorEASTL>* arg1;
        Js5Index* js5Index;
        uint8_t* puVar24;
        void* pvVar25;
        uint8_t* arg1_00;
        uint64_t in_stack_fffffffffffffb78;
        uint32_t uVar26;
        list<std::future<void>*> local_470[32];
        Array<unsigned char, BucketAllocatorEASTL> local_450;
        Array<unsigned char, BucketAllocatorEASTL> local_438;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_420;
        ReturnValue* local_380[4];
        ReturnValue local_348;
        int local_32c;
        BigInteger local_328;
        BigInteger local_320;
        RT7TextureDataProvider* local_310;
        uint8_t local_2f8[320];
        uint8_t local_1b8;
        Js5ResourceProvider* local_1b0;
        ReturnValue local_1a8;

        uint8_t* local_3e0 = field_8;
        new (local_3e0) shared_ptr();
        uint8_t* local_3d8 = &field_24;
        new (local_3d8) shared_ptr();
        field_40 = 0;
        field_44 = 0;
        uint8_t* local_3d0 = &field_48;
        new (local_3d0) eastl::string(*str);
        field_80 = js5ArchiveSetSettings;
        field_104 = bigInteger2;
        field_112 = bigInteger3;
        m_localMode = 1;
        field_128 = strs;
        Array<std::unique_ptr<Js5LocalModeLoader>>* this_01 =
            (Array<std::unique_ptr<Js5LocalModeLoader>>*)operator new(24);
        int iVar5 = js5ArchiveSetSettings.GetX();
        new (this_01) Array<std::unique_ptr<Js5LocalModeLoader>>((unsigned long)(iVar5 + 1));
        field_136 = this_01;
        uint8_t* local_3c8 = &field_160;
        m_pMemoryCache = nullptr;
        m_pDiskCache = nullptr;
        new (local_3c8)
            std::array<eastl::map<unsigned int, Priority const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                       67ul>();
        uint8_t* local_3c0 = &field_3392;
        new (local_3c0) std::array<std::mutex, 4ul>();
        uint8_t* local_3b8 = &field_3648;
        new (local_3b8) std::array<std::mutex, 67ul>();
        uint8_t* local_3b0 = &field_7936;
        new (local_3b0) std::array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>>, 67ul>();
        uint8_t* local_3a8 = &field_11152;
        new (local_3a8) std::array<eastl::set<shared_ptr<Js5WorkerRequestMessage>>, 4ul>();
        field_11344 = 0;
        unique_ptr<Js5MasterIndex>* local_350 = (unique_ptr<Js5MasterIndex>*)&field_11368;
        field_11348 = 0;
        field_11352 = 0;
        field_11356 = 0;
        field_11364 = 0;
        local_350->unique_ptr<true, void>();
        field_11376 = 0;
        field_11377 = false;
        &field_11384->unique_ptr<true, void>();
        uint8_t* local_398 = &field_11664;
        new (local_398) std::array<Js5Index, 67ul>();
        uint8_t* local_390 = &field_29888;
        new (local_390) std::array<Js5Index, 67ul>();
        uint8_t* local_388 = &field_48112;
        new (local_388) std::array<Js5Index, 67ul>();
        field_66336 = true;
        field_66344 = systemSettings;
        unsigned int uVar6 = js5ArchiveSetSettings.GetX();
        unsigned long long local_3f0 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        new (local_470) eastl::list<std::future<void>*>();
        mutex local_78;
        long lVar9 = field_136->end();
        if (lVar9 != 0) {
            puVar2 = &DAT_00000001;
            arg1_00 = nullptr;
            do {
                puVar24 = puVar2;
                puVar10 = (unique_ptr<Js5LocalModeLoader>*)(*field_136)[(unsigned long)arg1_00];
                *puVar10 = arg1_00;
                puVar11 = (uint8_t*)field_136->end();
                puVar2 = (uint8_t*)(unsigned long)((int)puVar24 + 1);
                arg1_00 = puVar24;
            } while (puVar24 < puVar11);
        }
        unsigned long local_318 = (unsigned long)uVar6;
        auto pRVar12 = js5ArchiveSetSettings.GetStart(local_32c);
        char* local_400 = "";
        if (arg8 != false) {
            local_400 = "(Index Only)";
        }
        int local_304 = 0;
        Array<eastl::string>* local_3f8 = strs;
        do {
            if (pRVar12 == nullptr) {
                *local_2f8 = local_470->begin();
                local_1a8 = local_470->end();
                cVar3 = *local_2f8 != local_1a8;
                uVar26 = (uint32_t)((unsigned long)in_stack_fffffffffffffb78 >> 32);
                if (cVar3) {
                    do {
                        **local_2f8;
                        std::future<void>::get();
                        puVar16 = (uint64_t*)**local_2f8;
                        this_00 = (future<void>*)*puVar16;
                        if (this_00 != nullptr) {
                            std::future<void>::~future(this_00);
                            operator delete(this_00);
                        }
                        ++*local_2f8;
                        local_1a8 = local_470->end();
                        cVar3 = *local_2f8 != local_1a8;
                        uVar26 = (uint32_t)((unsigned long)in_stack_fffffffffffffb78 >> 32);
                    } while (cVar3);
                }
                uVar17 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                uVar15 = local_318;
                pLVar14 = logger::default_logger();
                pLVar14->Log(
                    false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    202, "Took %.3f secs to load %d Js5s", (uint32_t)((double)((float)(uVar17 - local_3f0) * 0.001)),
                    (((uint64_t)uVar26 << 32) | (uint32_t)local_304));
                local_1a8 = PacketT(5000);
                local_1a8.p1<oldscape::shared::LoginProt::ID>(0);
                local_1a8.p4<int>(0);
                iVar5 = local_1a8.size();
                local_1a8.p1<oldscape::shared::LoginProt::ID>((int)uVar15 + 1);
                uVar6 = 0;
                do {
                    pvVar25 = (void*)(unsigned long)uVar6;
                    pvVar20 = pvVar25;
                    puVar18 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader> _>*)(*field_136)[(
                        unsigned long)pvVar25];
                    bVar4 = puVar18 == pvVar20;
                    if (bVar4) {
                        lVar9 = local_1a8.size();
                        local_1a8.SetPos(lVar9 + 80);
                    } else {
                        puVar10 = (unique_ptr<Js5LocalModeLoader>*)(*field_136)[(unsigned long)pvVar25];
                        pMVar19 = (MapSquarePointLights*)(*puVar10).operator->();
                        this_03 = (AnimationParameters*)pMVar19->GetLightSourcesDynamic();
                        uVar7 = this_03->GetX();
                        local_1a8.p4<int>((unsigned long)uVar7);
                        uVar7 = this_03->GetStatus();
                        local_1a8.p4<int>((unsigned long)uVar7);
                        iVar8 = this_03->GetAnimationLength();
                        local_1a8.p4<int>((unsigned long)(iVar8 + 1));
                        puVar10 = (unique_ptr<Js5LocalModeLoader>*)(*field_136)[(unsigned long)pvVar25];
                        uVar15 = ((Js5LocalModeLoader*)(*puVar10).operator->())->GetUncompressedLength();
                        local_1a8.p4<int>(uVar15);
                        this_05 = (Array<game::VarValue>*)this_03->second();
                        cVar3 = this_05->empty();
                        if (!cVar3) {
                            puVar22 = (unsigned char*)this_05->data();
                            local_1a8.pArrayBuffer(puVar22, 0, 64);
                            uVar15 = local_318;
                        } else {
                            lVar9 = local_1a8.size();
                            local_1a8.SetPos(lVar9 + 64);
                            uVar15 = local_318;
                        }
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 <= (unsigned int)uVar15);
                lVar9 = local_1a8.size();
                local_438 = Array<unsigned char, BucketAllocatorEASTL>(lVar9 - 5);
                pvVar20 = &local_438[0];
                lVar9 = local_1a8.GetDataPtr();
                sVar21 = local_438.end();
                _memcpy(pvVar20, (void*)(lVar9 + 5), sVar21);
                new (local_2f8) Whirlpool();
                puVar22 = (unsigned char*)local_438.data();
                uVar23 = local_438.end();
                local_2f8->Update(puVar22, uVar23);
                local_450 = Array<unsigned char, BucketAllocatorEASTL>(64);
                puVar22 = (unsigned char*)local_450.data();
                local_2f8->Final(puVar22);
                new (local_380) PacketT(65);
                local_380->p1<oldscape::shared::LoginProt::ID>(10);
                puVar22 = (unsigned char*)local_450.data();
                uVar23 = local_450.end();
                local_380->pArrayBuffer(puVar22, 0, uVar23);
                local_420 = PacketT();
                if ((bigInteger1 == nullptr) || (bigInteger3 == nullptr)) {
                    arg1 = (Array<unsigned char, BucketAllocatorEASTL>*)local_380->SSOBeginPtr();
                    local_348.Array<BucketAllocatorEASTL>(*arg1);
                    local_420.SetDataRaw(local_348);
                    uVar23 = local_380->size();
                    local_420.SetPos(uVar23);
                } else {
                    puVar22 = (unsigned char*)local_380->GetDataPtr();
                    uVar23 = local_380->size();
                    local_328 = math::BigInteger(puVar22, uVar23);
                    local_320.PowMod(&local_328, bigInteger1);
                    local_348 = local_320.Get();
                    uVar23 = local_348.size();
                    local_420.Reserve(uVar23);
                    puVar22 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar23 = local_348.size();
                    local_420.pArrayBuffer(puVar22, 0, uVar23);
                }
                uVar23 = local_420.size();
                local_1a8.pArrayBuffer(&local_420, 0, uVar23);
                iVar8 = local_1a8.size();
                local_1a8.pSize4(iVar8 - iVar5);
                local_348 = std::make_unique<Js5MasterIndex, math::BigInteger*&, math::BigInteger*&,
                                             PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                    bigInteger2, bigInteger3, local_1a8);
                *local_350 = &local_348;
                ProcessNewMasterIndex();
                uVar6 = 0;
                do {
                    pvVar25 = (void*)(unsigned long)uVar6;
                    pvVar20 = pvVar25;
                    puVar18 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader> _>*)(*field_136)[(
                        unsigned long)pvVar25];
                    bVar4 = puVar18 != pvVar20;
                    if (bVar4) {
                        puVar10 = (unique_ptr<Js5LocalModeLoader>*)(*field_136)[(unsigned long)pvVar25];
                        pMVar19 = (MapSquarePointLights*)(*puVar10).operator->();
                        js5Index = (Js5Index*)pMVar19->GetLightSourcesDynamic();
                        ProcessNewIndex(uVar6, *js5Index);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 <= (unsigned int)uVar15);
                std::mutex::~mutex(&local_78);
                return;
            }
            local_310 = pRVar12;
            lVar9 = strs.end();
            if (lVar9 == 0) {
                bVar4 = false;
            } else {
                bVar4 = false;
                uVar15 = 0;
                uVar23 = 1;
                do {
                    str_00 = &strs[uVar15];
                    local_1a8 = Filename(str_00);
                    pcVar13 = (char*)local_310->GetSpritesArchive();
                    local_1a8 /= pcVar13;
                    cVar3 = local_1a8.Exists();
                    bVar1 = true;
                    if ((cVar3) && (cVar3 = local_1a8.IsFile(), cVar3)) {
                        pLVar14 = logger::default_logger();
                        in_stack_fffffffffffffb78 = local_310->GetSpritesArchive();
                        pLVar14->Log(false, 8,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                     "Js5ResourceProvider.cpp",
                                     160, "Js5ResourceProvider: Loading archive in local mode: %s %s",
                                     in_stack_fffffffffffffb78, local_400);
                        &result = (ReturnValue*)operator new(8);
                        this_02 = (Layout*)8->Instance();
                        pcVar13 = (char*)this_02->SSOBeginPtr();
                        local_2f8._0_8_ = &local_78;
                        local_2f8._8_8_ = local_310;
                        new ((local_2f8 + 16)) Filename(&local_1a8);
                        local_1b8 = arg8;
                        local_1b0 = this;
                        ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
                            Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                            math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>(&result, pcVar13,
                                                                                             (__1*)local_2f8);
                        local_380[0] = &result;
                        local_470->push_back(*local_380);
                        Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                            math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string,
                                            bool)::$_1::~__1((__1*)local_2f8);
                        bVar4 = true;
                        bVar1 = false;
                        strs = local_3f8;
                    }
                    if (!bVar1)
                        break;
                    uVar15 = strs.end();
                    bVar1 = uVar23 < uVar15;
                    uVar15 = uVar23;
                    uVar23 = (unsigned long)((int)uVar23 + 1);
                } while (bVar1);
            }
            this = this;
            if (bVar4) {
                local_304 = local_304 + 1;
            } else {
                pLVar14 = logger::default_logger();
                in_stack_fffffffffffffb78 = local_310->GetSpritesArchive();
                pLVar14->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    190,
                    "Js5ResourceProvider: Specified archive doesn\'t exist in any of the provided pack directories: %s",
                    in_stack_fffffffffffffb78);
            }
            pRVar12 = (RT7TextureDataProvider*)js5ArchiveSetSettings.GetNext(local_32c);
        } while (true);
    }

    // 0x1009e3540
    void Js5ResourceProvider::ProcessNewMasterIndex() {
        unsigned int uVar1;
        int iVar2;
        Js5MasterIndex* pJVar3;
        long lVar4;
        int* piVar5;
        Js5Index* this_03;
        uint32_t* puVar6;
        unsigned int* puVar7;
        unsigned int* puVar8;
        Js5MemoryCache* this_04;
        Js5DiskCache* this_05;
        Js5ResourceProvider* pJVar9;
        Js5ResourceProvider* arg1;
        Js5Index local_160;
        array<Js5Index, 67ul>* local_50;
        array<unsigned int, 67ul>* local_48;
        int local_38;

        uint8_t* this_00 = &field_11368;
        unsigned int local_34 = ((CoordMapSquare*)(*this_00).operator->())->GetX();
        if (67 < local_34) {
            LogAssert(
                "Js5Constants::NUM_FIXED_ARCHIVES >= maximumArchiveID",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                393, nullptr);
        }
        auto this_02 = field_80->GetStart(local_38);
        if (this_02 != nullptr) {
            do {
                uVar1 = this_02->GetX();
                pJVar3 = (Js5MasterIndex*)(*this_00).operator->();
                lVar4 = pJVar3->GetArchiveData(uVar1);
                if (lVar4 != 0) {
                    this_02->SetGroupIDLimit(*(unsigned int*)(lVar4 + 32));
                    this_02->SetTotalSize(*(unsigned int*)(lVar4 + 36));
                }
                this_02 = (Js5ArchiveSettings*)field_80->GetNext(local_38);
            } while (this_02 != nullptr);
        }
        if (m_pMemoryCache == nullptr) {
            puVar7 = (unsigned int*)std::array<unsigned int, 67ul>::begin();
            puVar8 = (unsigned int*)std::array<unsigned int, 67ul>::end();
            eastl::fill<unsigned int>(puVar7, puVar8, 0);
            puVar7 = (unsigned int*)std::array<unsigned int, 4ul>::begin();
            puVar8 = (unsigned int*)std::array<unsigned int, 4ul>::end();
            eastl::fill<unsigned int>(puVar7, puVar8, 0);
            this_04 = (Js5MemoryCache*)operator new(327960);
            arg1 = (Js5ResourceProvider*)67108864;
            new (this_04) Js5MemoryCache(67108864, 1024);
            m_pMemoryCache = this_04;
            if (field_66336 != false) {
                this_05 = (Js5DiskCache*)operator new(1513232);
                pJVar9 = this;
                arg1 = this;
                new (this_05) Js5DiskCache(*this, field_48, field_66344, *field_80);
                pJVar9->m_pDiskCache = this_05;
            }
        } else {
            local_50 = (array<Js5Index, 67ul>*)&field_11664;
            local_48 = (array<unsigned int, 67ul>*)&field_11392;
            uVar1 = 0;
            do {
                pJVar3 = (Js5MasterIndex*)(*this_00).operator->();
                piVar5 = (int*)pJVar3->GetArchiveData(uVar1);
                pJVar9 = (Js5ResourceProvider*)(unsigned long)uVar1;
                arg1 = pJVar9;
                this_03 = (Js5Index*)(*local_50)[(unsigned long)pJVar9];
                iVar2 = this_03->GetStatus();
                if (iVar2 == piVar5[1]) {
                    iVar2 = this_03->GetX();
                    if (iVar2 != *piVar5)
                        goto LAB_1009e3693;
                } else {
                LAB_1009e3693:
                    local_160 = Js5Index();
                    *this_03 = local_160;
                    puVar6 = (uint32_t*)(*local_48)[(unsigned long)pJVar9];
                    *puVar6 = 0;
                    arg1 = pJVar9;
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 <= local_34);
        }
        pJVar9 = this;
        m_pDiskCache->UpdateIndexSizesForArchives();
        pJVar9->field_11384 = arg1;
        pJVar9->field_11376 = 0;
    }

    // 0x1009e37f0
    void Js5ResourceProvider::ProcessNewIndex(unsigned int arg1, const Js5Index& js5Index) {
        Js5Index* this_01;
        uint32_t* puVar3;

        auto this_00 = field_11368.operator->();
        auto piVar2 = this_00->GetArchiveData(arg1);
        if (js5Index.GetX() == *piVar2) {
            this_01 = &field_11664[(unsigned long)arg1];
            *this_01 = js5Index;
            puVar3 = &field_11392[(unsigned long)arg1];
            *puVar3 = 3;
            if (m_pDiskCache != nullptr) {
                m_pDiskCache->Validate(arg1);
            }
        } else {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    306, "Js5ResourceProvider: Index CRC failure for archive: %u", arg1);
        }
    }

    // 0x1009e3a50
    Js5ResourceProvider::~Js5ResourceProvider() {
        uint8_t* this_00 = field_8;
        if (this_00->operator_cast_to_bool() != '\0') {
            ((Task*)(*this_00).operator->())->Join();
            this_00->reset();
        }
        field_11368.reset(nullptr);
        field_11384.reset(nullptr);
        safe_delete<Js5MemoryCache>(&m_pMemoryCache);
        safe_delete<Js5DiskCache>(&m_pDiskCache);
        rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
               eastl::less<unsigned long long>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true,
               true>* this_02 =
            (rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                    eastl::less<unsigned long long>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true, true>*)
                std::array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>>, 67ul>::begin();
        rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
               eastl::less<unsigned long long>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true,
               true>* prVar2 =
            (rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                    eastl::less<unsigned long long>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true, true>*)
                std::array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>>, 67ul>::end();
        for (; this_02 != prVar2; this_02 = this_02 + 48) {
            this_02->clear();
        }
        safe_delete<Array<std::unique_ptr<Js5LocalModeLoader>>>(
            (Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader> _>>**)&field_136);
        field_48112.~array();
        field_29888.~array();
        field_11664.~array();
        field_11152.~array();
        field_7936.~array();
        field_3648.~array();
        field_3392.~array();
        field_160.~array();
        field_48.~basic_string();
        field_24.~shared_ptr();
        this_00->~shared_ptr();
    }

    // 0x1009e3dd0
    bool Js5ResourceProvider::IsDiskCacheReady() const {
        return m_pDiskCache != nullptr;
    }

    // 0x1009e3df0
    void Js5ResourceProvider::ProcessNewMasterIndexFromHTTP() {
        ValidateHTTPArchiveIndices();
    }

    // 0x1009e3e00
    void Js5ResourceProvider::ValidateHTTPArchiveIndices() {
        unsigned int arg1;
        Js5MasterIndex* pJVar2;
        int* piVar3;
        int* piVar4;
        bool arg1_00;
        int local_34;

        auto this_00 = field_80->GetStart(local_34);
        if (this_00 != nullptr) {
            do {
                if (this_00->GetFastUpdateLoopEnabled() != '\0') {
                    arg1 = this_00->GetX();
                    pJVar2 = (Js5MasterIndex*)field_11368.operator->();
                    piVar3 = (int*)pJVar2->GetArchiveData(arg1);
                    pJVar2 = (Js5MasterIndex*)field_11384.operator->();
                    piVar4 = (int*)pJVar2->GetArchiveData(arg1);
                    if ((piVar3 != nullptr) && (piVar4 != nullptr)) {
                        if (*piVar3 == *piVar4) {
                            arg1_00 = piVar3[1] == piVar4[1];
                        } else {
                            arg1_00 = false;
                        }
                        this_00->SetHTTPValidated(arg1_00);
                    }
                }
                this_00 = (MainLoopFrameTimer*)field_80->GetNext(local_34);
            } while (this_00 != nullptr);
        }
    }

    // 0x1009e3ee0
    void Js5ResourceProvider::EnableDiskCacheValidation(bool arg1) {
        if (m_pDiskCache != nullptr) {
            m_pDiskCache->EnableValidate(arg1);
        }
    }

    // 0x1009e4130
    bool Js5ResourceProvider::CheckArchive(const Js5ArchiveSettings& js5ArchiveSettings) const {
        auto pJVar1 = field_80->GetByArchiveID(js5ArchiveSettings.GetX());
        if (pJVar1 != js5ArchiveSettings) {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    471,
                    "Js5ResourceProvider: Can only request archives passed during initialisation, or INDEX_ARCHIVE");
        }
        return pJVar1 == js5ArchiveSettings;
    }

    // 0x1009e41e0
    uint8_t* Js5ResourceProvider::RequestIndex(unsigned int arg1, const Js5ArchiveSettings& js5ArchiveSettings) {
        PacketT<Array<unsigned char>>* pPVar3;
        Js5MasterIndex* pJVar4;
        unsigned int* puVar5;
        long lVar6;
        VBOMapper local_60;
        shared_ptr<PacketT<Array<unsigned char>>> local_40;

        unsigned int* puVar2 = &field_11392[(unsigned long)arg1];
        if (*puVar2 < 2) {
            if (RequestGroupFromDisk(js5ArchiveSettings, 4294967295, (Priority*)Priority::HIGHEST, true) == '\0') {
                local_60._0_4_ = 70;
                MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned int>(&local_40);
                pPVar3 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                pPVar3->p1<unsigned long>(20);
                pPVar3 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                pPVar3->p1<unsigned long>(arg1);
                pPVar3 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                pJVar4 = (Js5MasterIndex*)field_11368.operator->();
                puVar5 = (unsigned int*)pJVar4->GetArchiveData(arg1);
                pPVar3->p4<int>(*puVar5);
                pPVar3 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                pJVar4 = (Js5MasterIndex*)field_11368.operator->();
                lVar6 = pJVar4->GetArchiveData(arg1);
                local_60 = PacketT((lVar6 + 8));
                pPVar3->pArrayBuffer(local_60);
                ((Task*)(*field_8).operator->())->Message(local_40);
                *puVar2 = 2;
            }
        }
        return DataStatus::NOTLOADED;
    }

    // 0x1009e4360
    unsigned long Js5ResourceProvider::RequestGroupFromDisk(const Js5ArchiveSettings& js5ArchiveSettings,
                                                            unsigned int arg2, const Priority* priority, bool arg4) {
        uint8_t* this_00;
        Js5DiskCache* pJVar1;
        Priority* pPVar2;
        Js5Index* this_01;
        unsigned int arg1;
        unsigned int arg2_00;
        char cVar3;
        unsigned int uVar4;
        int iVar5;
        Js5MasterIndex* pJVar6;
        unsigned int* puVar7;
        long lVar8;
        Js5Index* pJVar9;
        uint64_t uVar10;
        int* piVar11;
        uint32_t* puVar12;
        uint64_t in_register_00000081;
        unsigned int uVar13;
        uint64_t unaff_R12;
        unsigned long uVar14;
        uint64_t uVar15;
        unsigned int uVar16;
        unsigned long arg1_00;
        bool bVar17;
        Js5Index local_178;
        unsigned int local_64;
        unsigned long local_60;
        Js5Index* local_48;
        unsigned int local_40;
        unsigned int local_3c;
        unsigned int local_34;

        if (m_localMode == '\0') {
            if (field_66336 != false) {
                local_40 = (unsigned int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
                uVar4 = js5ArchiveSettings.GetX();
                pJVar1 = m_pDiskCache;
                uVar14 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)1);
                if (pJVar1 == nullptr)
                    goto LAB_1009e4388;
                arg1_00 = (unsigned long)uVar4;
                if ((char)local_40 == '\0') {
                    iVar5 = js5ArchiveSettings.GetX();
                    cVar3 = pJVar1->IsValidated(iVar5);
                    if (!cVar3) {
                        uVar4 = js5ArchiveSettings.GetX();
                        LogAssert("urgent || m_diskCache->IsValidated(archive.GetArchiveID())",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                  "Js5ResourceProvider.cpp",
                                  786, "Non-urgent request for %d,%d sent before archive cache has been validated",
                                  (unsigned long)uVar4, (unsigned long)arg2);
                    }
                }
                uVar13 = arg2;
                local_60 = arg1_00;
                local_3c = uVar4;
                if (arg2 == 4294967295) {
                    pJVar6 = (Js5MasterIndex*)field_11368.operator->();
                    puVar7 = (unsigned int*)pJVar6->GetArchiveData(uVar4);
                    local_64 = *puVar7;
                    pJVar6 = (Js5MasterIndex*)field_11368.operator->();
                    lVar8 = pJVar6->GetArchiveData(uVar4);
                    local_34 = *(unsigned int*)(lVar8 + 4);
                    pJVar9 = &field_48112[local_60];
                    uVar13 = pJVar9->GetGroupCRC(4294967295);
                    uVar4 = local_64;
                    local_48 = pJVar9;
                    if ((uVar13 != local_64) || (uVar13 = pJVar9->GetGroupVersion(4294967295), uVar13 != local_34)) {
                        local_178.CreateDummyIndex(1, uVar4, local_34);
                        *pJVar9 = local_178;
                    }
                    uVar13 = arg2;
                    uVar4 = local_3c;
                } else {
                    local_48 = &field_11664[arg1_00];
                }
                cVar3 = m_pDiskCache->HasReadOnlyArchive(uVar4);
                if (!cVar3) {
                    local_34 = 0;
                } else {
                    pJVar9 = &field_29888[local_60];
                    cVar3 = pJVar9->IsValid();
                    if (!cVar3) {
                        local_34 = 0;
                        uVar4 = local_3c;
                    } else {
                        local_34 = pJVar9->GetGroupCRC(uVar13);
                        this_01 = local_48;
                        iVar5 = local_48->GetGroupCRC(uVar13);
                        if (local_34 == iVar5) {
                            local_34 = pJVar9->GetGroupVersion(arg2);
                            uVar10 = this_01->GetGroupVersion(arg2);
                            bVar17 = local_34 == (int)uVar10;
                            local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar10 >> 8)) << 8) |
                                                      (uint8_t)bVar17);
                            local_48 = this_01;
                            if (bVar17) {
                                local_48 = pJVar9;
                            }
                        } else {
                            local_34 = 0;
                        }
                        uVar13 = arg2;
                        uVar4 = local_3c;
                    }
                }
                cVar3 = m_pDiskCache->CheckGroup(uVar4, uVar13);
                if (cVar3 != '\x02') {
                    if (cVar3 != '\x03') {
                        uVar4 = *(unsigned int*)(priority + 8);
                        this_00 = &field_3376;
                        uVar14 = 0;
                        uVar13 = 0;
                        do {
                            piVar11 = (int*)(*this_00)[uVar14];
                            arg2_00 = arg2;
                            arg1 = local_3c;
                            uVar13 = uVar13 + *piVar11;
                            uVar16 = (int)uVar14 + 1;
                            uVar14 = (unsigned long)uVar16;
                        } while (uVar16 <= uVar4);
                        uVar15 = (uint64_t)(uint32_t)(uVar13 >> 8);
                        if (uVar13 < 9999) {
                            cVar3 = IsRequested(local_3c, arg2);
                            pPVar2 = priority;
                            uVar14 = (((uint64_t)uVar15 << 8) | (uint8_t)1);
                            if (!cVar3) {
                                SetRequested(arg1, arg2_00, priority);
                                piVar11 = (int*)(*this_00)[(unsigned long)*(unsigned int*)(pPVar2 + 8)];
                                *piVar11 = *piVar11 + 1;
                                if (arg2_00 == 4294967295) {
                                    puVar12 = &field_11392[local_60];
                                    *puVar12 = 1;
                                    pJVar1 = m_pDiskCache;
                                    cVar3 = js5ArchiveSettings.GetDiskEncodeType();
                                    uVar4 = local_3c;
                                    pJVar9 = local_48;
                                    bVar17 = (uint8_t)local_40;
                                    local_40 = local_40 & 255;
                                    pJVar1->GetGroup(local_3c, -1, local_48, (int)cVar3, priority, bVar17,
                                                     (uint8_t)local_34);
                                    cVar3 = m_pDiskCache->HasReadOnlyArchive(uVar4);
                                    if (cVar3) {
                                        pJVar1 = m_pDiskCache;
                                        cVar3 = js5ArchiveSettings.GetDiskEncodeType();
                                        pPVar2 = priority;
                                        pJVar1->GetGroup(uVar4, -1, pJVar9, (int)cVar3, priority, (uint8_t)local_40,
                                                         true);
                                        piVar11 = (int*)(*this_00)[(unsigned long)*(unsigned int*)(pPVar2 + 8)];
                                        *piVar11 = *piVar11 + 1;
                                    }
                                } else {
                                    pJVar1 = m_pDiskCache;
                                    cVar3 = js5ArchiveSettings.GetDiskEncodeType();
                                    pJVar1->GetGroup(local_3c, arg2_00, local_48, (int)cVar3, priority,
                                                     (uint8_t)local_40, (uint8_t)local_34);
                                }
                            }
                        } else {
                            uVar14 = (((uint64_t)uVar15 << 8) | (uint8_t)1);
                        }
                    }
                    goto LAB_1009e4388;
                }
            }
        } else {
            RequestGroupFromLocalArchive(js5ArchiveSettings, arg2);
        }
        uVar14 = 0;
    LAB_1009e4388:
        return uVar14 & 4294967295;
    }

    // 0x1009e4860
    uint8_t* Js5ResourceProvider::FileReady(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                            unsigned int arg3, const Priority* priority, bool arg5) {
        bool cVar2;
        unsigned int arg1;
        uint64_t extraout_var;
        Js5Index* this_00;

        uint8_t uVar1 = IndexReady();
        uint8_t* puVar3 = (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        uint8_t** ppuVar4 = &DataStatus::READY;
        if (puVar3 == DataStatus::READY) {
            arg1 = js5ArchiveSettings.GetX();
            this_00 = &field_11664[(unsigned long)arg1];
            cVar2 = this_00->DoesFileExist(arg2, arg3);
            if (!cVar2) {
                ppuVar4 = &DataStatus::MISSING;
            } else {
                cVar2 = m_pMemoryCache->CheckFile(arg1, arg2, arg3, *this_00);
                if (!cVar2) {
                    cVar2 = RequestGroupFromDisk(js5ArchiveSettings, arg2, priority, true);
                    ppuVar4 = &DataStatus::NOTLOADED;
                    if (!cVar2) {
                        RequestGroupFromServer(js5ArchiveSettings, arg2, priority, arg5);
                    }
                }
            }
            puVar3 = *ppuVar4;
        }
        return puVar3;
    }

    // 0x1009e4a40
    void Js5ResourceProvider::RequestGroupFromServer(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                                     const Priority* priority, bool arg4) {
        unsigned int uVar1;
        Priority* pPVar2;
        long lVar7;
        Array<unsigned char>* arg1;
        unsigned long arg1_01;
        scoped_lock<std::mutex>* this_03;
        shared_ptr<Js5WorkerRequestMessage>* psVar9;
        ReturnValue local_98;
        rbtree_iterator<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage> _>,
                        eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage> _> const*,
                        eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage> _> const&>* local_90;

        if (m_localMode != '\0') {
            RequestGroupFromLocalArchive(js5ArchiveSettings, arg2);
            return;
        }
        bool cVar3 = js5ArchiveSettings.GetFastUpdateLoopEnabled();
        if ((cVar3) && (cVar3 = js5ArchiveSettings.IsHTTPValidated(), !cVar3)) {
            return;
        }
        if (arg4) {
            uVar1 = field_11348;
        } else {
            uVar1 = field_11352;
        }
        if (1500 < uVar1) {
            return;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        unsigned int local_7c = js5ArchiveSettings.GetX();
        Js5Index* arg1_00 = (Js5Index*)(unsigned long)local_7c;
        mutex* pmVar6 = &field_3648[(unsigned long)arg1_00];
        scoped_lock<std::mutex> local_58(*pmVar6);
        Js5Index* local_50 = arg1_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>>, true, true>*
            this_00 = &field_7936[(unsigned long)arg1_00];
        auto local_78 = this_00->find(arg2);
        rbtree<unsigned int, eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>>, true, true>*
            local_88 = this_00;
        local_68.end();
        cVar3 = local_78 != local_68;
        if (cVar3) {
            lVar7 = *local_78;
            psVar9 = (shared_ptr<Js5WorkerRequestMessage>*)(lVar7 + 8);
            lVar7 = (*psVar9).operator->();
            pPVar2 = priority;
            if ((*(char*)(lVar7 + 26) != '\0') ||
                ((lVar7 = (*psVar9).operator->(),
                  *(Priority**)(lVar7 + 40) <= pPVar2 &&
                      ((!arg4 || (lVar7 = (*psVar9).operator->(), *(char*)(lVar7 + 25) != '\0')))))) {
                this_03 = &local_58;
                goto LAB_1009e4dca;
            }
            lVar7 = (*psVar9).operator->();
            arg1_01 = (unsigned long)*(unsigned int*)(*(long*)(lVar7 + 40) + 8);
            pmVar6 = &field_3392[arg1_01];
            local_68 = std::scoped_lock(*pmVar6);
            psVar9 = &field_11152[arg1_01];
            lVar7 = eastl::set<shared_ptr<Js5WorkerRequestMessage>>::erase(*psVar9);
            if (lVar7 == 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                          "Js5ResourceProvider.cpp",
                          1168, "Removed duplicate request from request map, but failed to find it in request list");
            }
            new (&local_90) eastl::ListIterator(&local_78);
            local_98 = local_88->erase(local_90);
        }
        local_50 = &field_11664[(unsigned long)local_50];
        MakeSharedPool<Js5WorkerRequestMessage, 768>::MakeShared<>();
        local_48 = local_68;
        lVar7 = local_48.operator->();
        uVar1 = arg2;
        *(unsigned int*)(lVar7 + 4) = local_7c;
        lVar7 = local_48.operator->();
        *(unsigned int*)(lVar7 + 8) = uVar1;
        uint32_t uVar5 = local_50->GetFileCount(arg2);
        lVar7 = local_48.operator->();
        *(uint32_t*)(lVar7 + 12) = uVar5;
        uint64_t uVar8 = js5ArchiveSettings.size();
        lVar7 = local_48.operator->();
        *(uint64_t*)(lVar7 + 16) = uVar8;
        uint8_t uVar4 = js5ArchiveSettings.GetFastUpdateLoopEnabled();
        lVar7 = local_48.operator->();
        *(uint8_t*)(lVar7 + 24) = uVar4;
        lVar7 = local_48.operator->();
        *(bool*)(lVar7 + 25) = arg4;
        lVar7 = local_48.operator->();
        *(uint8_t*)(lVar7 + 26) = 0;
        uVar5 = local_50->GetGroupCRC(arg2);
        lVar7 = local_48.operator->();
        *(uint32_t*)(lVar7 + 28) = uVar5;
        uVar5 = local_50->GetGroupVersion(arg2);
        lVar7 = local_48.operator->();
        *(uint32_t*)(lVar7 + 32) = uVar5;
        uVar4 = js5ArchiveSettings.GetDiskEncodeType();
        lVar7 = local_48.operator->();
        *(uint8_t*)(lVar7 + 27) = uVar4;
        lVar7 = local_48.operator->();
        *(Priority**)(lVar7 + 40) = priority;
        cVar3 = local_50->HasGroupWhirlpools();
        if (cVar3) {
            arg1 = (Array<unsigned char>*)local_50->GetGroupWhirlpool(arg2);
            lVar7 = local_48.operator->();
            (*((lVar7 + 48))) = *arg1;
        }
        psVar9 = (shared_ptr<Js5WorkerRequestMessage>*)(*local_88)[arg2];
        *psVar9 = local_48;
        pPVar2 = priority;
        pmVar6 = &field_3392[(unsigned long)*(unsigned int*)(priority + 8)];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_68(*pmVar6);
        ((rbtree<shared_ptr<Js5WorkerRequestMessage>, shared_ptr<Js5WorkerRequestMessage>,
                 eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator,
                 eastl::use_self<shared_ptr<Js5WorkerRequestMessage>>, false, true>*)
             field_11152[(unsigned long)*(unsigned int*)(pPVar2 + 8)])
            ->insert<shared_ptr<Js5WorkerRequestMessage>&, void>(local_48);
        this_03 = &local_68;
    LAB_1009e4dca:
        this_03->~scoped_lock();
    }

    // 0x1009e4e60
    uint8_t* Js5ResourceProvider::GroupPreloaded(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                                 bool arg3, bool& arg4) {
        int iVar4;
        uint64_t extraout_var;
        Js5Index* this_01;

        arg4 = false;
        uint8_t uVar1 = IndexReady();
        uint8_t** ppuVar5 = &DataStatus::NOTLOADED;
        if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == 0)
            goto LAB_1009e500b;
        int iVar3 = js5ArchiveSettings.GetX();
        Js5Index* this_00 = &field_11664[(long)iVar3];
        char cVar2 = this_00->DoesGroupExist(arg2);
        if (!cVar2) {
            ppuVar5 = &DataStatus::MISSING;
            goto LAB_1009e500b;
        }
        if (field_66336 == false) {
            cVar2 = '\x02';
        LAB_1009e4f2e:
            if (cVar2 == '\x01') {
            LAB_1009e4f32:
                ppuVar5 = &DataStatus::READY;
                goto LAB_1009e500b;
            }
            cVar2 = m_pDiskCache->HasReadOnlyArchive(iVar3);
            if (cVar2) {
                this_01 = &field_29888[(long)iVar3];
                cVar2 = this_01->IsValid();
                if (cVar2) {
                    iVar3 = this_01->GetGroupCRC(arg2);
                    iVar4 = this_00->GetGroupCRC(arg2);
                    if (iVar3 == iVar4) {
                        iVar3 = this_01->GetGroupVersion(arg2);
                        iVar4 = this_00->GetGroupVersion(arg2);
                        if (iVar3 == iVar4)
                            goto LAB_1009e4f32;
                    }
                }
            }
            cVar2 = RequestGroupFromDisk(js5ArchiveSettings, arg2, (Priority*)Priority::LOW, arg3);
            if (!cVar2) {
                RequestGroupFromServer(js5ArchiveSettings, arg2, (Priority*)Priority::LOW, arg3);
                arg4 = true;
            }
        } else {
            cVar2 = IsDiskCacheReady();
            if ((cVar2) && (cVar2 = m_pDiskCache->CheckGroup(iVar3, arg2), cVar2 != '\x03'))
                goto LAB_1009e4f2e;
        }
        ppuVar5 = &DataStatus::NOTLOADED;
    LAB_1009e500b:
        return *ppuVar5;
    }

    // 0x1009e51f0
    uint8_t* Js5ResourceProvider::GroupReady(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                             const Priority* priority, bool arg4) {
        bool cVar2;
        unsigned int arg1;
        uint64_t extraout_var;
        Js5Index* this_00;
        uint8_t** ppuVar4;
        uint64_t in_register_00000081;
        unsigned int local_3c;
        uint32_t local_34;

        uint8_t uVar1 = IndexReady();
        uint8_t* puVar3 = (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        if (puVar3 == DataStatus::READY) {
            local_34 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
            arg1 = js5ArchiveSettings.GetX();
            this_00 = &field_11664[(unsigned long)arg1];
            cVar2 = this_00->GetFirstFileID(arg2, local_3c);
            if (!cVar2) {
                ppuVar4 = &DataStatus::MISSING;
            } else {
                cVar2 = m_pMemoryCache->CheckFile(arg1, arg2, local_3c, *this_00);
                ppuVar4 = &DataStatus::READY;
                if (!cVar2) {
                    cVar2 = RequestGroupFromDisk(js5ArchiveSettings, arg2, priority, true);
                    ppuVar4 = &DataStatus::NOTLOADED;
                    if (!cVar2) {
                        RequestGroupFromServer(js5ArchiveSettings, arg2, priority, local_34._0_1_);
                        ppuVar4 = &DataStatus::NOTLOADED;
                    }
                }
            }
            puVar3 = *ppuVar4;
        }
        return puVar3;
    }

    // 0x1009e53e0
    uint8_t* Js5ResourceProvider::GetFile(shared_ptr<PacketT<Array<unsigned char>>>& arg1,
                                          const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg3,
                                          unsigned int arg4, const Priority* priority, bool arg6, bool arg7,
                                          bool arg8) {
        uint64_t extraout_var;
        uint8_t** ppuVar3;

        uint8_t uVar1 = IndexReady();
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != DataStatus::READY) {
            return (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        }
        unsigned int arg2 = js5ArchiveSettings.GetX();
        Js5Index* this_00 = &field_11664[(unsigned long)arg2];
        char cVar2 = this_00->DoesFileExist(arg3, arg4);
        if (!cVar2) {
            ppuVar3 = &DataStatus::MISSING;
        } else {
            cVar2 = m_pMemoryCache->GetFile(arg1, arg2, arg3, arg4, *this_00, arg7);
            if (!cVar2) {
                if (*(unsigned int*)(Priority::LOW + 8) <= *(unsigned int*)(priority + 8)) {
                    LogAssert("priority->id < Priority::LOW->id",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                              "Js5ResourceProvider.cpp",
                              668, nullptr);
                }
                cVar2 = RequestGroupFromDisk(js5ArchiveSettings, arg3, priority, true);
                if (cVar2) {
                    ppuVar3 = &DataStatus::NOTLOADED;
                    if ((!arg8) || (cVar2 = IsRequested(arg2, arg3), !cVar2))
                        goto LAB_1009e5590;
                    do {
                        m_pDiskCache->Service();
                        cVar2 = m_pMemoryCache->GetFile(arg1, arg2, arg3, arg4, *this_00, arg7);
                        if (cVar2)
                            goto LAB_1009e548b;
                        cVar2 = m_pDiskCache->CheckGroup(arg2, arg3);
                    } while (cVar2 != '\x02');
                }
                RequestGroupFromServer(js5ArchiveSettings, arg3, priority, arg6);
                ppuVar3 = &DataStatus::NOTLOADED;
            } else {
            LAB_1009e548b:
                ppuVar3 = &DataStatus::READY;
            }
        }
    LAB_1009e5590:
        return *ppuVar3;
    }

    // 0x1009e5750
    void Js5ResourceProvider::GetGroup(shared_ptr<PacketT<Array<unsigned char>>>& arg1,
                                       const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg3,
                                       const Priority* priority, bool arg5, bool arg6) {
        bool cVar1;
        unsigned int arg2;
        Js5Index* js5Index;
        uint8_t** ppuVar3;
        uint32_t in_register_00000014;
        uint64_t in_register_00000081;
        bool in_stack_00000008;

        Priority* priority_00 = (Priority*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        Js5ArchiveSettings* js5ArchiveSettings_00 =
            (Js5ArchiveSettings*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        uint8_t* puVar2 = (uint8_t*)(**(void (**)(...))(*(long*)arg1 + 16))(arg1, js5ArchiveSettings_00);
        if (puVar2 == DataStatus::READY) {
            arg2 = js5ArchiveSettings_00->GetX();
            js5Index = (Js5Index*)(*((arg1 + 11664)))[(unsigned long)arg2];
            cVar1 = js5Index->DoesGroupExist((unsigned int)priority);
            if (!cVar1) {
                ppuVar3 = &DataStatus::MISSING;
            } else {
                cVar1 = (*(Js5MemoryCache**)(arg1 + 144))
                            ->GetGroup(js5ArchiveSettings, arg2, (unsigned int)priority, *js5Index, in_stack_00000008);
                ppuVar3 = &DataStatus::READY;
                if (!cVar1) {
                    if (*(unsigned int*)(Priority::LOW + 8) <= *(unsigned int*)(priority_00 + 8)) {
                        LogAssert("priority->id < Priority::LOW->id",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                  "Js5ResourceProvider.cpp",
                                  724, nullptr);
                    }
                    cVar1 = RequestGroupFromDisk((Js5ResourceProvider*)arg1, js5ArchiveSettings_00,
                                                 (unsigned int)priority, priority_00, true);
                    ppuVar3 = &DataStatus::NOTLOADED;
                    if (!cVar1) {
                        RequestGroupFromServer((Js5ResourceProvider*)arg1, js5ArchiveSettings_00,
                                               (unsigned int)priority, priority_00, arg6);
                        ppuVar3 = &DataStatus::NOTLOADED;
                    }
                }
            }
            puVar2 = *ppuVar3;
        }
        return puVar2;
    }

    // 0x1009e58b0
    bool Js5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(const Js5ArchiveSettings& js5ArchiveSettings) {
        int iVar1 = GetRequestArchiveStatus(js5ArchiveSettings);
        if (iVar1 == 0) {
            RequestArchive(js5ArchiveSettings);
        }
        return iVar1 == 4;
    }

    // 0x1009e58e0
    void Js5ResourceProvider::GetRequestArchiveStatus(const Js5ArchiveSettings& js5ArchiveSettings) {
        m_pDiskCache->GetStateFulllArchiveLoad(js5ArchiveSettings.GetX());
    }

    // 0x1009e5910
    void Js5ResourceProvider::RequestArchive(const Js5ArchiveSettings& js5ArchiveSettings) {
        uint64_t extraout_var;

        uint8_t uVar1 = IndexReady();
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
            m_pDiskCache->RequestFullArchive(js5ArchiveSettings.GetX());
        }
    }

    // 0x1009e59f0
    void Js5ResourceProvider::RequestGroupFromLocalArchive(const Js5ArchiveSettings& js5ArchiveSettings,
                                                           unsigned int arg2) {
        ReturnValue local_40;

        unsigned int arg1 = js5ArchiveSettings.GetX();
        Js5Index* this_01 = &field_11664[(unsigned long)arg1];
        unique_ptr<Js5LocalModeLoader>* this_02 = (unique_ptr<Js5LocalModeLoader>*)(*field_136)[(unsigned long)arg1];
        VBOMapper local_60 = ((Js5LocalModeLoader*)(*this_02).operator->())->GetGroupData(arg2);
        make_shared<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>>(
            &local_40, (PacketT<Array<unsigned char> _>*)&local_60);
        Js5MemoryCache* this_00 = m_pMemoryCache;
        unsigned int arg3 = this_01->GetGroupVersion(arg2);
        unsigned int arg4 = this_01->GetGroupCRC(arg2);
        this_00->ProvideGroup(arg1, arg2, arg3, arg4, local_40);
    }

    // 0x1009e5d30
    void Js5ResourceProvider::OnGroupLoaded(int arg1, int arg2, Array<unsigned char>&& arg3, unsigned int arg4,
                                            unsigned int arg5, const Priority* priority, bool arg7, bool arg8,
                                            bool arg9) {
        uint8_t* this_00;
        Js5ResourceProvider* pJVar1;
        Js5MasterIndex* pJVar2;
        unsigned int* puVar3;
        Js5Index* pJVar4;
        int* piVar5;
        Js5Index local_170;
        VBOMapper local_60;
        int* local_40;

        Js5ResourceProvider* local_38 = this;
        if (arg2 == -1) {
            if (arg9) {
                pJVar2 = (Js5MasterIndex*)field_11368.operator->();
                puVar3 = (unsigned int*)pJVar2->GetArchiveData(arg1);
                local_60 = PacketT(arg3);
                local_170 = Js5Index(*puVar3, (puVar3 + 2), &local_60);
                pJVar4 = &field_29888[(long)arg1];
                *pJVar4 = local_170;
            } else {
                piVar5 = &field_11392[(long)arg1];
                if (*piVar5 == 3)
                    goto LAB_1009e5ef4;
                local_40 = piVar5;
                pJVar2 = (Js5MasterIndex*)local_38->field_11368.operator->();
                puVar3 = (unsigned int*)pJVar2->GetArchiveData(arg1);
                local_60 = PacketT(arg3);
                local_170 = Js5Index(*puVar3, *puVar3, *((puVar3 + 2)), *((puVar3 + 2)), puVar3[1], local_60);
                pJVar1 = local_38;
                pJVar4 = &local_38->field_11664[(long)arg1];
                *pJVar4 = local_170;
                *local_40 = 3;
                if (pJVar1->m_pDiskCache != nullptr) {
                    pJVar1->m_pDiskCache->Validate(arg1);
                }
            }
        } else if (arg7) {
            MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<Array<unsigned char>>(
                (Array<unsigned char>*)&local_170);
            local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg1);
            local_38->m_pMemoryCache->ProvideGroup(arg1, arg2, arg5, arg4, local_170);
            arg1 = (unsigned int)local_40;
        }
    LAB_1009e5ef4:
        pJVar1 = local_38;
        if (!arg8) {
            this_00 = &local_38->field_3376;
            piVar5 = (int*)(*this_00)[(unsigned long)*(unsigned int*)(priority + 8)];
            if (*piVar5 == 0) {
                LogAssert(
                    "m_diskRequestCount[priority->id] >= 1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    981, nullptr);
            }
            piVar5 = (int*)(*this_00)[(unsigned long)*(unsigned int*)(priority + 8)];
            *piVar5 = *piVar5 - 1;
            ClearRequested(pJVar1, arg1, arg2);
        }
    }

    // 0x1009e61d0
    void Js5ResourceProvider::OnGroupLoadFailed(int arg1, int arg2, const Priority* priority, bool arg4) {
        Js5ArchiveSettings* js5ArchiveSettings;
        PacketT<Array<unsigned char>>* pPVar1;
        Js5MasterIndex* pJVar2;
        unsigned int* puVar3;
        long lVar4;
        uint32_t* puVar5;
        VBOMapper local_68;
        shared_ptr<PacketT<Array<unsigned char>>> local_48;

        if (arg2 == -1) {
            local_68._0_4_ = 70;
            MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned int>(&local_48);
            pPVar1 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pPVar1->p1<unsigned long>(20);
            pPVar1 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pPVar1->p1<unsigned long>(arg1);
            pPVar1 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pJVar2 = (Js5MasterIndex*)field_11368.operator->();
            puVar3 = (unsigned int*)pJVar2->GetArchiveData(arg1);
            pPVar1->p4<int>(*puVar3);
            pPVar1 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pJVar2 = (Js5MasterIndex*)field_11368.operator->();
            lVar4 = pJVar2->GetArchiveData(arg1);
            local_68 = PacketT((lVar4 + 8));
            pPVar1->pArrayBuffer(local_68);
            ((Task*)(*field_8).operator->())->Message(local_48);
            puVar5 = &field_11392[(long)arg1];
            *puVar5 = 2;
        } else if (arg4) {
            js5ArchiveSettings = field_80->GetByArchiveID(arg1);
            RequestGroupFromServer(*js5ArchiveSettings, (unsigned int)arg2, priority, true);
        }
        int* piVar6 = &field_3376[(unsigned long)*(unsigned int*)(priority + 8)];
        if (*piVar6 == 0) {
            LogAssert(
                "m_diskRequestCount[priority->id] >= 1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1028, nullptr);
        }
        piVar6 = &field_3376[(unsigned long)*(unsigned int*)(priority + 8)];
        *piVar6 = *piVar6 - 1;
        ClearRequested(arg1, (unsigned int)arg2);
    }

    // 0x1009e6440
    void Js5ResourceProvider::SaveLocalArchiveAssetToDisk(const Js5ArchiveSettings& js5ArchiveSettings,
                                                          const Js5Index& js5Index,
                                                          const shared_ptr<PacketT<Array<unsigned char>>>& arg3,
                                                          unsigned int arg4, unsigned int arg5) {
        Js5DiskCache* pJVar1;
        char cVar2;
        unsigned int uVar3;
        Js5DiskCacheFormat JVar4;
        unsigned int arg4_00;
        PacketT<Array<unsigned char> _>* pPVar5;
        VBOMapper local_90;
        uint8_t local_70[32];
        ReturnValue local_50;
        Js5DiskCache* local_40;

        if (arg4 == 4294967295) {
            local_50[0]._0_4_ = 1;
            pPVar5 = (PacketT<Array<unsigned char> _>*)arg3;
            *local_70 = Js5Compression::Decompress(*pPVar5, *((local_70 + 32)));
            if (local_50[0]._0_4_ != 0) {
                LogAssert(
                    "status == Js5Compression::JS5DecompressionResult::DECOMPRESSION_SUCCEEDED",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1049, "Failed to decompress index from local loader: archive=%i", (unsigned long)arg5);
            }
            pJVar1 = m_pDiskCache;
            make_shared<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>&>(
                (ReturnValue*)&local_90, (PacketT<Array<unsigned char> _>*)local_70);
            uVar3 = js5Index.GetX();
            JVar4 = js5Index.GetStatus();
            Js5DiskCache::ProvideGroup((int)pJVar1, arg5, *4294967295, (unsigned int)&local_90, uVar3, JVar4);
        } else {
            cVar2 = js5ArchiveSettings.GetDiskEncodeType();
            if (cVar2 == '\x02') {
                local_40 = m_pDiskCache;
                uVar3 = js5Index.GetGroupCRC(arg4);
                JVar4 = js5Index.GetGroupVersion(arg4);
                js5ArchiveSettings.GetDiskEncodeType();
                Js5DiskCache::ProvideGroup((int)local_40, arg5,
                                           *((shared_ptr<PacketT<Array<unsigned char> _> _>*)(unsigned long)arg4),
                                           (unsigned int)arg3, uVar3, JVar4);
                return;
            }
            local_40 = (Js5DiskCache*)js5ArchiveSettings;
            cVar2 = js5ArchiveSettings.GetDiskEncodeType();
            if (cVar2 != '\x01') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1090, "Invalid Disk Encode Type Specified");
            }
            pPVar5 = (PacketT<Array<unsigned char> _>*)arg3;
            *local_70 = Js5Compression::Decompress(*pPVar5, 1);
            if (1 != 0) {
                LogAssert(
                    "status == Js5Compression::JS5DecompressionResult::DECOMPRESSION_SUCCEEDED",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1069, "Failed to decompress group from local loader: archive=%i, group=%i", (unsigned long)arg5,
                    (unsigned long)arg4);
            }
            local_90 = PacketT();
            uVar3 = js5Index.GetFileCount(arg4);
            if (1 < (int)uVar3) {
                arg4_00 = local_70->GetTextureAtlas();
                Js5DiskFileFormat::DechunkGroupFiles(local_90, *local_70, 0, arg4_00, uVar3);
                *local_70 = local_90;
            }
            if ((uint8_t*)local_40->size() == EncodeType::PNG_MIPPED) {
                Js5Compression::DecodePNG(*local_70);
            }
            pJVar1 = m_pDiskCache;
            make_shared<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>&>(
                (ReturnValue*)(local_70 + 32), (PacketT<Array<unsigned char> _>*)local_70);
            uVar3 = js5Index.GetGroupCRC(arg4);
            JVar4 = js5Index.GetGroupVersion(arg4);
            local_40->GetDiskEncodeType();
            Js5DiskCache::ProvideGroup((int)pJVar1, arg5,
                                       *((shared_ptr<PacketT<Array<unsigned char> _> _>*)(unsigned long)arg4),
                                       (int)local_70 + 32, uVar3, JVar4);
            ((local_70 + 32))->~shared_ptr();
        }
    }

    // 0x1009e6e50
    void Js5ResourceProvider::ChangeURLs(const char* str1, const char* str2, const char* str3) {
        int iVar2;
        int iVar3;
        PacketT<Array<unsigned char>>* pPVar4;
        shared_ptr<PacketT<Array<unsigned char>>> local_48;
        int local_34;

        if (field_8->operator_cast_to_bool() != '\0') {
            iVar2 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(str1, false);
            iVar3 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(str2, false);
            local_34 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(str3, false);
            local_34 = local_34 + iVar3 + iVar2;
            MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<int>(&local_48);
            pPVar4 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pPVar4->pStringNoConversion(str1, false);
            pPVar4 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pPVar4->pStringNoConversion(str2, false);
            pPVar4 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pPVar4->pStringNoConversion(str3, false);
            ((Task*)(*field_8).operator->())->Message(local_48);
        }
    }

    // 0x1009e70c0
    void Js5ResourceProvider::WorkerOnMessage(PacketT<Array<unsigned char>>& arg1) {
        unsigned int arg1_00;
        Js5DiskCache* pJVar1;
        unsigned int* puVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        uint8_t bVar5;
        bool bVar6;
        unsigned short uVar8;
        unsigned int uVar11;
        Js5DiskCacheFormat js5DiskCacheFormat;
        Logger* pLVar12;
        Js5MasterIndex* this_00;
        PacketT<Array<unsigned char>>* this_01;
        long lVar13;
        uint32_t* puVar14;
        Js5Index* pJVar16;
        Js5ArchiveSettings* this_02;
        unsigned char* puVar17;
        uint64_t uVar18;
        mutex* pmVar19;
        rbtree<unsigned int, eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>>, true, true>*
            this_03;
        long lVar20;
        LogLevel logLevel;
        shared_ptr<Js5WorkerRequestMessage>* psVar21;
        char* str2;
        unsigned long uVar22;
        uint64_t in_stack_fffffffffffffe38;
        uint64_t in_stack_fffffffffffffe40;
        rbtree_iterator<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage> _>,
                        eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage> _> const*,
                        eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage> _> const&>* local_1a8;
        unsigned int* local_1a0;
        unsigned int local_194;
        unsigned int local_190;
        unsigned int local_18c;
        ReturnValue local_188;
        unsigned int local_174;
        ReturnValue local_170;
        uint8_t local_161;
        Js5Index local_160;

        uint32_t uVar23 = (uint32_t)((unsigned long)in_stack_fffffffffffffe40 >> 32);
        uint32_t uVar10 = (uint32_t)((unsigned long)in_stack_fffffffffffffe38 >> 32);
        PacketT<Array<unsigned char> _>* pPVar15 = arg1;
        int iVar9 = arg1.g1();
        field_11344 = 1;
        switch (iVar9 - 1U & 255) {
        case 0:
            local_160 = eastl::fixed_string<char, 256>();
            arg1.gStringNoConversion<256, true>(local_160, false);
            pLVar12 = logger::default_logger();
            uVar18 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar12->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1360, "LOG> %s", uVar18);
        default:
            pLVar12 = logger::default_logger();
            pLVar12->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1458, "Js5ResourceProvider: Received unknown message from js5 worker: %d",
                (((uint64_t)uVar10 << 32) | (uint32_t)iVar9) & 18446744069414584575);
            break;
        case 2:
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1353, "Not implemented");
        case 5:
            uVar10 = arg1.g4();
            field_40 = uVar10;
            uVar10 = arg1.g4s();
            field_44 = uVar10;
            field_11344 = 0;
            break;
        case 9:
            uVar8 = arg1.g2();
            if (uVar8 == 0) {
                field_11364 = 0;
                break;
            }
            local_160 = PacketT((unsigned long)uVar8);
            puVar17 = (unsigned char*)local_160.GetDataPtr();
            arg1.gArrayBuffer(puVar17, 0, (unsigned long)uVar8);
            local_188 =
                std::make_unique<Js5MasterIndex, math::BigInteger const*&, math::BigInteger const*&,
                                 PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(field_104, field_112, local_160);
            field_11368 = &local_188;
            ProcessNewMasterIndex();
            goto LAB_1009e764a;
        case 19:
            bVar3 = arg1.g1();
            uVar22 = (unsigned long)bVar3;
            bVar5 = arg1.g1();
            uVar11 = (unsigned int)bVar3;
            if (bVar5 != 3) {
                if (bVar5 == 0) {
                    local_170._0_4_ = arg1.g4();
                    if ((&field_11368)->operator_cast_to_bool()) {
                        this_00 = (Js5MasterIndex*)field_11368.operator->();
                        local_1a0 = (unsigned int*)this_00->GetArchiveData(uVar11);
                        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<int&>(&local_188);
                        this_01 = (PacketT<Array<unsigned char>>*)local_188.operator->();
                        lVar20 = arg1.GetDataPtr();
                        lVar13 = arg1.size();
                        this_01->pArrayBuffer((lVar20 + lVar13), 0, (long)(int)local_170._0_4_);
                        puVar2 = local_1a0;
                        arg1_00 = *local_1a0;
                        pPVar15 = (PacketT<Array<unsigned char> _>*)*local_188;
                        local_160 = Js5Index(arg1_00, (puVar2 + 2), pPVar15);
                        pJVar16 = &field_11664[uVar22];
                        *pJVar16 = local_160;
                        if ((field_66336 != false) && (m_pDiskCache != nullptr)) {
                            Js5DiskCache::ProvideGroup((int)m_pDiskCache, uVar11, *4294967295, (unsigned int)&local_188,
                                                       *puVar2, puVar2[1]);
                            m_pDiskCache->Validate(uVar11);
                        }
                        puVar14 = &field_11392[uVar22];
                        *puVar14 = 3;
                        break;
                    }
                    pLVar12 = logger::default_logger();
                    str2 = "Received an index with no master index - need to re-request it";
                    logLevel = 3;
                    iVar9 = 1376;
                } else {
                    pLVar12 = logger::default_logger();
                    Js5WorkerRequestMessage::WorkerRespoonseError((unsigned int)bVar5);
                    str2 = "Js5ResourceProvider: Index failure for archive: %d with %s";
                    logLevel = 2;
                    iVar9 = 1400;
                }
                pLVar12->Log(
                    false, logLevel,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    iVar9, str2);
            }
            puVar14 = &field_11392[uVar22];
            *puVar14 = 0;
            break;
        case 29:
            bVar3 = arg1.g1();
            uVar11 = arg1.g4();
            uVar4 = arg1.g1();
            local_1a0 = (unsigned int*)(((uint64_t)local_1a0._1_7_ << 8) | (uint8_t)uVar4);
            bVar5 = arg1.g1();
            local_174 = (unsigned int)bVar3;
            uVar22 = (unsigned long)local_174;
            local_161 = bVar5;
            if (bVar5 != 6) {
                local_18c = uVar11;
                if (bVar5 == 0) {
                    local_170._0_4_ = arg1.g4();
                    MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned int&>(
                        &local_160.m_indexCRC);
                    pPVar15 = (PacketT<Array<unsigned char> _>*)*local_160;
                    arg1.gArrayBuffer<PacketT<Array<unsigned char>>>(*pPVar15,
                                                                     (unsigned long)(unsigned int)local_170._0_4_);
                    pJVar16 = &field_11664[uVar22];
                    uVar11 = local_18c;
                    local_190 = pJVar16->GetGroupCRC(local_18c);
                    js5DiskCacheFormat = pJVar16->GetGroupVersion(uVar11);
                    if ((field_66336 != false) && (m_pDiskCache != nullptr)) {
                        this_02 = field_80->GetByArchiveID(local_174);
                        pJVar1 = m_pDiskCache;
                        this_02->GetDiskEncodeType();
                        uVar11 = local_18c;
                        Js5DiskCache::ProvideGroup(
                            (int)pJVar1, local_174,
                            *((shared_ptr<PacketT<Array<unsigned char> _> _>*)(unsigned long)local_18c),
                            (unsigned int)&local_160, local_190, js5DiskCacheFormat);
                    }
                    if ((char)local_1a0 == '\x01') {
                        local_194 = arg1.g4();
                        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned int&>(&local_188);
                        pPVar15 = (PacketT<Array<unsigned char> _>*)*local_188;
                        arg1.gArrayBuffer<PacketT<Array<unsigned char>>>(*pPVar15, (unsigned long)local_194);
                        m_pMemoryCache->ProvideGroup(local_174, uVar11, js5DiskCacheFormat, local_190, local_188);
                    }
                } else {
                    pLVar12 = logger::default_logger();
                    uVar18 = Js5WorkerRequestMessage::WorkerRespoonseError((unsigned int)bVar5);
                    uVar11 = local_18c;
                    pLVar12->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                 "Js5ResourceProvider.cpp",
                                 1294, "Js5ResourceProvider::WorkerOnMessage: Failed to receive group: %d, %d (%s)",
                                 (((uint64_t)uVar10 << 32) | (uint32_t)local_174),
                                 (((uint64_t)uVar23 << 32) | (uint32_t)local_18c), uVar18);
                }
            }
            pmVar19 = &field_3648[uVar22];
            local_160 = std::scoped_lock(*pmVar19);
            this_03 = &field_7936[uVar22];
            local_170._0_4_ = uVar11;
            local_188 = this_03->find(local_170);
            local_170.end();
            if (local_188 != local_170) {
                lVar20 = *local_188;
                psVar21 = (shared_ptr<Js5WorkerRequestMessage>*)(lVar20 + 8);
                if (local_161 == 6) {
                    lVar20 = (*psVar21).operator->();
                    *(uint8_t*)(lVar20 + 26) = 0;
                } else {
                    lVar20 = (*psVar21).operator->();
                    pmVar19 = &field_3392[(unsigned long)*(unsigned int*)(*(long*)(lVar20 + 40) + 8)];
                    new (&local_170) std::scoped_lock(*pmVar19);
                    lVar20 = (*psVar21).operator->();
                    psVar21 = &field_11152[(unsigned long)*(unsigned int*)(*(long*)(lVar20 + 40) + 8)];
                    eastl::set<shared_ptr<Js5WorkerRequestMessage>>::erase(*psVar21);
                    new (&local_1a8) eastl::ListIterator(&local_188);
                    local_170 = this_03->erase(local_1a8);
                }
            }
            if ((char)local_1a0 == '\x01') {
                if (field_11348 == 0) {
                    LogAssert("m_serverUrgentRequestCount > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                              "Js5ResourceProvider.cpp",
                              1340, nullptr);
                }
                field_11348 = field_11348 - 1;
            } else {
                if (field_11352 == 0) {
                    LogAssert("m_serverPrefetchRequestCount > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                              "Js5ResourceProvider.cpp",
                              1345, nullptr);
                }
                field_11352 = field_11352 - 1;
            }
            break;
        case 39:
            uVar8 = arg1.g2();
            if ((uVar8 == 0) || (bVar6 = &field_11368 != pPVar15, !bVar6)) {
                field_11376 = 0;
                break;
            }
            local_160 = PacketT((unsigned long)uVar8);
            puVar17 = (unsigned char*)local_160.GetDataPtr();
            arg1.gArrayBuffer(puVar17, 0, (unsigned long)uVar8);
            local_188 =
                std::make_unique<Js5MasterIndex, math::BigInteger const*&, math::BigInteger const*&,
                                 PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(field_104, field_112, local_160);
            field_11384 = &local_188;
            ProcessNewMasterIndexFromHTTP();
        LAB_1009e764a:
        }
    }

    // 0x1009e7f10
    void Js5ResourceProvider::Service() {
        uint8_t* puVar1;
        int* piVar2;
        unsigned int uVar3;
        bool bVar6;
        long lVar8;
        Js5WorkerThread* pJVar9;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_01;
        mutex* mutex;
        shared_ptr<Js5WorkerRequestMessage>* this_02;
        Js5WorkerRequestMessage* this_03;
        PacketT<Array<unsigned char> _>* arg1;
        shared_ptr<PacketT<Array<unsigned char> _> _>* in_RSI;
        unsigned long arg1_00;
        uint64_t local_78;
        uint64_t local_70;
        array<eastl::set<shared_ptr<Js5WorkerRequestMessage>>, 4ul>* local_68;
        array<std::mutex, 4ul>* local_60;
        scoped_lock<std::mutex> local_58;
        shared_ptr<PacketT<Array<unsigned char> _> _> local_50;

        shared_ptr<Js5WorkerThread>* local_40 = (shared_ptr<Js5WorkerThread>*)field_8;
        Js5ResourceProvider* local_38 = this;
        Task* pTVar7 = (Task*)(*local_40).operator->();
        bool cVar5 = pTVar7->IsReady();
        Js5ResourceProvider* pJVar4 = local_38;
        if (cVar5) {
            puVar1 = &local_38->field_24;
            lVar8 = ((TextureAtlasReference*)(*puVar1).operator->())->GetTextureAtlas();
            if (lVar8 != 0) {
                pTVar7 = (Task*)(*local_40).operator->();
                pTVar7->Message(*puVar1);
                in_RSI = &local_50;
                MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<>();
                *puVar1 = *in_RSI;
            }
            puVar1 = &pJVar4->field_11368;
            bVar6 = puVar1 == in_RSI;
            if ((bVar6) && (pJVar4->field_11364 == '\0')) {
                pJVar9 = (Js5WorkerThread*)(*local_40).operator->();
                in_RSI = (shared_ptr<PacketT<Array<unsigned char> _> _>*)10;
                pJVar9->Post(10);
                pJVar4->field_11364 = 1;
            }
            if ((((pJVar4->field_11377 != false) && (bVar6 = puVar1 != in_RSI, bVar6)) &&
                 (bVar6 = &pJVar4->field_11384 == in_RSI, bVar6)) &&
                (pJVar4->field_11376 == '\0')) {
                pJVar9 = (Js5WorkerThread*)(*local_40).operator->();
                pJVar9->Post(40);
                pJVar4->field_11376 = 1;
            }
            cVar5 = puVar1->operator_cast_to_bool();
            if (!cVar5) {
                return;
            }
            cVar5 = (&local_38->field_11384)->operator_cast_to_bool();
            if ((!cVar5) && (local_38->field_11377 != false)) {
                return;
            }
        }
        pJVar4 = local_38;
        if (local_38->m_pDiskCache != nullptr) {
            local_38->m_pDiskCache->Service();
        }
        if (pJVar4->m_pMemoryCache != nullptr) {
            pJVar4->m_pMemoryCache->Service();
        }
        pTVar7 = (Task*)(*local_40).operator->();
        cVar5 = pTVar7->IsReady();
        if ((cVar5) && (local_38->field_11348 < 500)) {
            local_68 = (array<eastl::set<shared_ptr<Js5WorkerRequestMessage>>, 4ul>*)&local_38->field_11152;
            local_60 = (array<std::mutex, 4ul>*)&local_38->field_3392;
            arg1_00 = 0;
            do {
                this_01 =
                    (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                            eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                            eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)(*local_68)[arg1_00];
                cVar5 = this_01->empty();
                if (!cVar5) {
                    mutex = (mutex*)(*local_60)[arg1_00];
                    local_58 = std::scoped_lock(*mutex);
                    local_78 = this_01->begin();
                    local_70 = this_01->end();
                    while (cVar5 = local_78 != local_70, cVar5) {
                        this_02 = (shared_ptr<Js5WorkerRequestMessage>*)*local_78;
                        lVar8 = (*this_02).operator->();
                        if (*(char*)(lVar8 + 26) == '\0') {
                            lVar8 = (*this_02).operator->();
                            if (*(char*)(lVar8 + 25) == '\0') {
                                uVar3 = local_38->field_11352;
                            } else {
                                uVar3 = local_38->field_11348;
                            }
                            if (uVar3 < 500) {
                                MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<>();
                                this_03 = (Js5WorkerRequestMessage*)(*this_02).operator->();
                                arg1 = (PacketT<Array<unsigned char> _>*)*local_50;
                                this_03->Serialize(*arg1);
                                pTVar7 = (Task*)(*local_40).operator->();
                                pTVar7->Message(local_50);
                                lVar8 = (*this_02).operator->();
                                *(uint8_t*)(lVar8 + 26) = 1;
                                lVar8 = (*this_02).operator->();
                                if (*(char*)(lVar8 + 25) == '\0') {
                                    local_38->field_11352 = local_38->field_11352 + 1;
                                    piVar2 = (int*)((long)&local_38->field_11356 + 4);
                                    *piVar2 = *piVar2 + 1;
                                } else {
                                    local_38->field_11348 = local_38->field_11348 + 1;
                                    *(int*)&local_38->field_11356 = *(int*)&local_38->field_11356 + 1;
                                }
                            }
                        }
                        ++local_78;
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 4);
        }
    }

    // 0x1009e8550
    void Js5ResourceProvider::DataUpdate() {
        void* in_RSI;

        field_11368 = in_RSI;
        field_11364 = 0;
    }

    // 0x1009e8580
    void Js5ResourceProvider::RerequestHTTPMasterIndex() {
        void* in_RSI;

        field_11384 = in_RSI;
        field_11376 = 0;
    }

    // 0x1009e85b0
    void Js5ResourceProvider::DeleteCaches() {
        m_pMemoryCache->DeleteCache();
        if ((field_66336 != false) && (m_pDiskCache != nullptr)) {
            m_pDiskCache->DeleteCache();
        }
    }

    // 0x1009e8670
    void Js5ResourceProvider::ReinitialiseCaches() {
        m_pMemoryCache->DeleteCache();
        m_pDiskCache->ClearFullArchiveRequestState();
        m_pDiskCache->Shutdown();
        m_pDiskCache->Startup();
    }

    // 0x1009e8b40
    void Js5ResourceProvider::DeleteCacheGroup(unsigned int arg1, unsigned int arg2) {
        m_pMemoryCache->DeleteGroup(arg1, arg2);
    }

    // 0x1009e8b90
    void Js5ResourceProvider::Shutdown() {
        if (m_pDiskCache != nullptr) {
            m_pDiskCache->Shutdown();
        }
    }

    // 0x1009f67d0: Js5ResourceProvider::GetIndex(Js5Index const**, Js5ArchiveSettings const&) has the same machine code as Js5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&)

} // namespace jag

// 0x1009e7c40
void Js5WorkerRequestMessage::WorkerRespoonseError(Js5WorkerGetGroupResponseType js5WorkerGetGroupResponseType) {
    if (js5WorkerGetGroupResponseType < 7) {
        return (&PTR_s_SUCCESS_100f1d088)[js5WorkerGetGroupResponseType];
    }
    return nullptr;
}

// 0x1009e7e70
void Js5WorkerRequestMessage::WorkerRespoonseError(Js5WorkerGetIndexResponseType js5WorkerGetIndexResponseType) {
    if (js5WorkerGetIndexResponseType < 4) {
        return (&PTR_s_SUCCESS_100f1d0c0)[js5WorkerGetIndexResponseType];
    }
    return nullptr;
}
