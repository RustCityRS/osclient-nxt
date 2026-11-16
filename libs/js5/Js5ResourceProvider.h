// libs/js5/Js5ResourceProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5ResourceProvider {
    public:
        // virtual methods in vtable order
        virtual ~Js5ResourceProvider();
        virtual IndexReady(Js5ArchiveSettings const&);
        virtual GetIndex(Js5Index**, Js5ArchiveSettings const&);
        virtual GetMasterIndex(Js5MasterIndex const**) const;
        virtual FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool);
        virtual GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&);
        virtual bool EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&);
        GetJs5WorkerThread() const;
        Js5DiskCache* GetDiskCache() const;
        Js5MemoryCache* GetMemoryCache();
        Js5ResourceProvider(eastl::string const&, eastl::string const&, eastl::string const&, SystemSettings*,
                            PacketT<Array<unsigned char, eastl::allocator>> const&, unsigned int,
                            Js5ArchiveSetSettings&, bool, math::BigInteger*, math::BigInteger*, eastl::string const&);
        IsLocalMode();
        GetFile(PacketView&, Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool, bool, bool);
        void UpdateMissingGroupsCountForArchive(Js5ArchiveSettings const&);
        Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                            math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool);
        void ProcessNewMasterIndex();
        void ProcessNewIndex(unsigned int, Js5Index const&);
        bool IsDiskCacheReady() const;
        void ProcessNewMasterIndexFromHTTP();
        void ValidateHTTPArchiveIndices();
        void EnableDiskCacheValidation(bool);
        bool CheckArchive(Js5ArchiveSettings const&) const;
        RequestIndex(unsigned int, Js5ArchiveSettings const&);
        ulong RequestGroupFromDisk(Js5ArchiveSettings const&, unsigned int, Priority const*, bool);
        void RequestGroupFromServer(Js5ArchiveSettings const&, unsigned int, Priority const*, bool);
        GroupReady(Js5ArchiveSettings const&, unsigned int, Priority const*, bool);
        GetFile(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, Js5ArchiveSettings const&, unsigned int,
                unsigned int, Priority const*, bool, bool, bool);
        void IsRequested(unsigned int, unsigned int) const;
        GetGroup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, Js5ArchiveSettings const&, unsigned int,
                 Priority const*, bool, bool);
        void GetRequestArchiveStatus(Js5ArchiveSettings const&);
        void RequestArchive(Js5ArchiveSettings const&);
        void RequestGroupFromLocalArchive(Js5ArchiveSettings const&, unsigned int);
        void SetRequested(unsigned int, unsigned int, Priority const*);
        void OnGroupLoaded(int, int, Array<unsigned char, eastl::allocator>&&, unsigned int, unsigned int,
                           Priority const*, bool, bool, bool);
        void ClearRequested(unsigned int, unsigned int);
        void OnGroupLoadFailed(int, int, Priority const*, bool);
        void SaveLocalArchiveAssetToDisk(Js5ArchiveSettings const&, Js5Index const&,
                                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                         unsigned int, unsigned int);
        void ChangeURLs(char const*, char const*, char const*);
        void WorkerOnMessage(PacketT<Array<unsigned char, eastl::allocator>>&);
        void Service();
        void DataUpdate();
        void RerequestHTTPMasterIndex();
        void DeleteCaches();
        void ReinitialiseCaches();
        void DeleteCacheGroup(unsigned int, unsigned int);
        void Shutdown();
        void CheckIndexValid(Js5ArchiveSettings const&);
        GetIndex(Js5Index const**, Js5ArchiveSettings const&);

        // data members, from how the methods use this: 66352 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[16];
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        char _unknown_48[32];
        Js5ArchiveSetSettings* field_80; // offset 80
        char _unknown_88[16];
        BigInteger* field_104;  // offset 104
        BigInteger* field_112;  // offset 112
        undefined1 m_localMode; // offset 120
        char _unknown_121[7];
        Array<eastl::string, eastl::allocator>* field_128; // offset 128
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>*
            field_136;                  // offset 136
        Js5MemoryCache* m_pMemoryCache; // offset 144
        Js5DiskCache* m_pDiskCache;     // offset 152
        char _unknown_160[11184];
        undefined1 field_11344; // offset 11344
        char _unknown_11345[3];
        uint field_11348;       // offset 11348
        uint field_11352;       // offset 11352
        undefined8 field_11356; // offset 11356
        undefined1 field_11364; // offset 11364
        char _unknown_11365[11];
        undefined1 field_11376; // offset 11376
        bool field_11377;       // offset 11377
        char _unknown_11378[54958];
        bool field_66336; // offset 66336
        char _unknown_66337[7];
        SystemSettings* field_66344; // offset 66344
    };

    // 0x10018a2a0, 1216 bytes, base-object constructor, inline, placed by class name and debug map
    // Js5ResourceProvider::Js5ResourceProvider(eastl::string const&, eastl::string const&, eastl::string const&, SystemSettings*, PacketT<Array<unsigned char, eastl::allocator> > const&, unsigned int, Js5ArchiveSetSettings&, bool, math::BigInteger*, math::BigInteger*, eastl::string const&)
    void Js5ResourceProvider::Js5ResourceProvider(basic_string* param_1, basic_string* param_2, basic_string* param_3,
                                                  SystemSettings* param_4, PacketT* param_5, uint param_6,
                                                  Js5ArchiveSetSettings* param_7, bool param_8, BigInteger* param_9,
                                                  BigInteger* param_10, basic_string* param_11) {
        undefined1* this_00;
        shared_ptr* psVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        TaskRunner* this_01;
        Js5WorkerThread* this_02;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar6;
        long lVar7;
        ulong uVar8;
        undefined1 auVar10[16];
        shared_ptr local_90;
        shared_ptr* local_78;
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = &PTR__Js5ResourceProvider_100f1ccb0;
        local_78 = (shared_ptr*)field_8;
        new (local_78) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_00 = &field_24;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_40 = 0;
        field_44 = 0;
        new (&field_48, param_1) eastl::string();
        field_80 = param_7;
        field_104 = param_9;
        field_112 = param_10;
        m_localMode = 0;
        field_128 = (Array<eastl::string, eastl::allocator>*)0;
        field_136 =
            (Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>*)0;
        m_pMemoryCache = (Js5MemoryCache*)0;
        m_pDiskCache = (Js5DiskCache*)0;
        std::array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                   67ul>::array();
        new (&field_3392) std::array<std::mutex, 4ul>();
        new (&field_3648) std::array<std::mutex, 67ul>();
        new (&field_7936) std::array<
            eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>, eastl::allocator>,
            67ul>();
        new (&field_11152) std::array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                                 eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                                      4ul>();
        field_11344 = 0;
        field_11348 = 0;
        field_11352 = 0;
        field_11356 = 0;
        field_11364 = 0;
        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::unique_ptr<true, void>(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
        field_11376 = 0;
        bVar2 = eastl::operator!=(param_3, (value_type*)"");
        field_11377 = bVar2;
        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::unique_ptr<true, void>(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11384);
        new (&field_11664) std::array<Js5Index, 67ul>();
        new (&field_29888) std::array<Js5Index, 67ul>();
        new (&field_48112) std::array<Js5Index, 67ul>();
        field_66336 = param_8;
        field_66344 = param_4;
        this_01 = (TaskRunner*)getTaskRunner();
        make_shared<Js5WorkerThread>((jag*)&local_90);
        TaskRunner::AddTask<Js5WorkerThread>(local_68, this_01, "Js5WorkerThread", &local_90);
        psVar1 = local_78;
        shared_ptr<Js5WorkerThread>::operator=((shared_ptr<Js5WorkerThread>*)local_78, local_68);
        local_68->~shared_ptr();
        local_90.~shared_ptr();
        bVar2 = operator!=(psVar1, (_func_decltype_nullptr*)0);
        if (bVar2) {
            this_02 = (Js5WorkerThread*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)local_78);
            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::function<
                Js5ResourceProvider::Js5ResourceProvider(
                    eastl::stringconst&, eastl::stringconst&, eastl::stringconst&, SystemSettings*,
                    PacketT<Array<unsigned char, eastl::allocator>> const&, unsigned int, Js5ArchiveSetSettings&, bool,
                    math::BigInteger*, math::BigInteger*,
                    eastl::stringconst&)::_lambda(PacketT<Array<unsigned char, eastl::allocator>>&) _1_,
                void>(local_68, this);
            this_02->SetWorkerOnMessage(local_68);
            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::~function(
                (function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>*)local_68);
        }
        iVar3 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion<eastl::stringconst>(
            param_2, false);
        iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion<eastl::stringconst>(
            param_3, false);
        iVar5 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion<eastl::stringconst>(
            param_11, false);
        auVar10 = param_5->GetTextureAtlas();
        local_90._0_8_ = auVar10._0_8_ + (long)(iVar5 + iVar3 + iVar4 + 4) + 2;
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned long>(
            local_68, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_90,
            auVar10._8_8_);
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00, local_68);
        local_68->~shared_ptr();
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar6, 2);
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion<eastl::string>(pPVar6, param_2, false);
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion<eastl::string>(pPVar6, param_3, false);
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion<eastl::string>(pPVar6, param_11, false);
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        lVar7 = field_66344->GetSpritesArchive();
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar6, (ulong) * (uint*)(lVar7 + 8));
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        uVar8 = param_5->GetTextureAtlas();
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar6, uVar8);
        lVar7 = param_5->GetTextureAtlas();
        if (lVar7 != 0) {
            pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
            pPVar6->pArrayBuffer((PacketT*)(TextureAtlasReference*)param_5);
        }
        pPVar6 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar6, (ulong)param_6);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10019f030, 16 bytes, inline, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(eastl::string const&, eastl::string const&, eastl::string const&, SystemSettings*, PacketT<Array<unsigned char, eastl::allocator> > const&, unsigned int, Js5ArchiveSetSettings&, bool, math::BigInteger*, math::BigInteger*, eastl::string const&)::{lambda(PacketT<Array<unsigned char, eastl::allocator> >&)#1}::operator()(PacketT<Array<unsigned char, eastl::allocator> >&) const
    /* Js5ResourceProvider::Js5ResourceProvider(eastl::string const&,
   eastl::string const&, eastl::string
   const&, SystemSettings*, PacketT<Array<unsigned char, eastl::allocator> > const&,
   unsigned int, Js5ArchiveSetSettings&, bool, math::BigInteger*, math::BigInteger*,
   eastl::string const&)::{lambda(PacketT<Array<unsigned
   char, eastl::allocator> >&)#1}::TEMPNAMEPLACEHOLDERVALUE(PacketT<Array<unsigned char,
   eastl::allocator> >&) const */

    void Js5ResourceProvider::Js5ResourceProvider(eastl::stringconst&, eastl::stringconst&, eastl::stringconst&,
                                                  SystemSettings*,
                                                  PacketT<Array<unsigned char, eastl::allocator>> const&, unsigned int,
                                                  Js5ArchiveSetSettings&, bool, math::BigInteger*, math::BigInteger*,
                                                  eastl::stringconst&)::{
        lambda(PacketT<Array<unsigned char, eastl::allocator>>&) #1
    }
    ::operator()(_lambda_jag__PacketT<Array<unsigned char, eastl::allocator>> ___1_* this, PacketT * param_1) {
        WorkerOnMessage(*(Js5ResourceProvider**)this, param_1);
    }

    // 0x1008cb920, 192 bytes, inline, placed by class name
    // Js5ResourceProvider::GetFile(PacketView&, Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool, bool, bool)
    undefined8 Js5ResourceProvider::GetFile(PacketView* param_1, Js5ArchiveSettings* param_2, uint param_3,
                                            uint param_4, Priority* param_5, bool param_6, bool param_7, bool param_8) {
        undefined8 uVar1;
        PacketView local_78;
        shared_ptr local_50;

        new (&local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        uVar1 = GetFile(this, &local_50, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
        PacketView::PacketView<Array<unsigned char, eastl::allocator>>(&local_78, &local_50);
        PacketView::operator=(param_1, &local_78);
        local_78.~PacketView();
        local_50.~shared_ptr();
        return uVar1;
    }

    // 0x1009e10c0, 144 bytes, inline, placed by class name
    // Js5ResourceProvider::UpdateMissingGroupsCountForArchive(Js5ArchiveSettings const&)
    void Js5ResourceProvider::UpdateMissingGroupsCountForArchive(Js5ArchiveSettings* param_1) {
        Js5DiskCache* this_00;
        GeometryBatchInstance* this_01;
        undefined8 uVar1;
        undefined8 uVar2;
        uint uVar3;
        int iVar4;
        Array<int, eastl::allocator>* this_02;

        uVar3 = param_1->GetX();
        this_01 = (GeometryBatchInstance*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664,
                                                                                 (ulong)uVar3);
        this_02 = (Array<int, eastl::allocator>*)this_01->GetMaterial();
        uVar1 = this_02->data();
        uVar2 = this_02->end();
        uVar3 = std::count_if<unsigned int const*,
                              (Js5ArchiveSettings_const&)->UpdateMissingGroupsCountForArchive()::_lambda(int) _1_>(
            uVar1, uVar2, this, param_1);
        this_00 = m_pDiskCache;
        iVar4 = param_1->GetX();
        this_00->UpdateMissingGroupCount(iVar4, uVar3);
    }

    // 0x1009e33b0, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1::~$_1(): jumps straight to the base-object destructor

    // 0x1009e55e0, 80 bytes, inline, placed by class name
    // Js5ResourceProvider::IsRequested(unsigned int, unsigned int) const
    void Js5ResourceProvider::IsRequested(uint param_1, uint param_2) {
        uint* puVar1;
        undefined4 extraout_EDX;
        undefined4 extraout_var;
        undefined8 local_28;
        undefined8 local_20;
        uint local_14;

        local_14 = param_2;
        puVar1 = (uint*)
            std::array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                       67ul>::operator[]((array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>,
                                                           SafeBucketAllocatorEASTL>,
                                                67ul>*)&field_160,
                                         (ulong)param_1);
        local_28 =
            eastl::rbtree<unsigned int, eastl::pair<unsigned int const, Priority_const*>, eastl::less<unsigned int>,
                          SafeBucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned int const, Priority_const*>>,
                          true, true>::find(puVar1);
        local_20 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_20,
                          (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
    }

    // 0x1009e5b10, 80 bytes, inline, placed by class name
    // Js5ResourceProvider::SetRequested(unsigned int, unsigned int, Priority const*)
    void Js5ResourceProvider::SetRequested(uint param_1, uint param_2, Priority* param_3) {
        map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>* this_00;
        undefined8* puVar1;
        uint local_14;

        this_00 = (map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>*)
            std::array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                       67ul>::operator[]((array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>,
                                                           SafeBucketAllocatorEASTL>,
                                                67ul>*)&field_160,
                                         (ulong)param_1);
        if ((Priority*)Priority::NONE == param_3) {
            eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>::erase(
                (uint*)this_00);
        } else {
            puVar1 = (undefined8*)eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>,
                                             SafeBucketAllocatorEASTL>::operator[](this_00, &local_14);
            *puVar1 = param_3;
        }
    }

    // 0x1009e61a0, 48 bytes, inline, placed by class name
    // Js5ResourceProvider::ClearRequested(unsigned int, unsigned int)
    void Js5ResourceProvider::ClearRequested(uint param_1, uint param_2) {
        uint* puVar1;
        undefined4 in_register_0000003c;

        puVar1 = (uint*)
            std::array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                       67ul>::operator[]((array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>,
                                                           SafeBucketAllocatorEASTL>,
                                                67ul>*)(CONCAT44(in_register_0000003c, param_1) + 160),
                                         (ulong)param_2);
        eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>::erase(puVar1);
    }

    // 0x1009ed5b0, 64 bytes, inline, placed by class name
    // Js5ResourceProvider::CheckIndexValid(Js5ArchiveSettings const&)
    void Js5ResourceProvider::CheckIndexValid(Js5ArchiveSettings* param_1) {
        Js5Index* this_00;
        uint uVar1;

        uVar1 = param_1->GetX();
        this_00 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar1);
        this_00->IsValid();
    }

    // 0x1009f66e0, 240 bytes, inline, placed by class name
    // Js5ResourceProvider::IndexReady(Js5ArchiveSettings const&)
    undefined* Js5ResourceProvider::IndexReady(Js5ArchiveSettings* param_1) {
        char cVar2;
        uint uVar3;
        Js5Index* pJVar4;

        if (std::operator==((unique_ptr*)&field_11368, (_func_decltype_nullptr*)param_1)) {
            return DataStatus::NOTLOADED;
        }
        cVar2 = CheckArchive(this, param_1);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("CheckArchive(archive)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.h",
                      110, (char*)0);
        }
        uVar3 = param_1->GetX();
        pJVar4 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar3);
        cVar2 = pJVar4->IsValid();
        if (cVar2 != '\0') {
            cVar2 = (m_pDiskCache, uVar3)->HasReadOnlyArchive();
            if (cVar2 == '\0') {
                return DataStatus::READY;
            }
            cVar2 = (m_pDiskCache, uVar3)->HasReadOnlyArchive();
            if (cVar2 != '\0') {
                pJVar4 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_29888,
                                                                           (ulong)uVar3);
                cVar2 = pJVar4->IsValid();
                if (cVar2 != '\0') {
                    return DataStatus::READY;
                }
            }
        }
        return (undefined*)RequestIndex(this, uVar3, param_1);
    }

    // 0x1009f67d0, 96 bytes, inline, placed by class name
    // Js5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&)
    /* Js5ResourceProvider::GetIndex(Js5Index const**, Js5ArchiveSettings const&) */

    undefined* Js5ResourceProvider::GetIndex(Js5Index** param_1, Js5ArchiveSettings* param_2) {
        uint uVar1;
        undefined* puVar2;
        Js5Index* pJVar3;

        puVar2 = (undefined*)(*(code*)field_0[2])(this, param_2);
        if (puVar2 == DataStatus::READY) {
            uVar1 = param_2->GetX();
            pJVar3 =
                (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar1);
        } else {
            pJVar3 = (Js5Index*)0;
        }
        *param_1 = pJVar3;
        return puVar2;
    }

    // 0x1009f6830, 64 bytes, inline, placed by class name
    // Js5ResourceProvider::GetMasterIndex(Js5MasterIndex const**) const
    undefined* Js5ResourceProvider::GetMasterIndex(Js5MasterIndex** param_1) {
        Js5MasterIndex* pJVar1;
        undefined** ppuVar2;

        pJVar1 = (Js5MasterIndex*)(&field_11368)->get();
        *param_1 = pJVar1;
        if (pJVar1 == (Js5MasterIndex*)0) {
            ppuVar2 = &DataStatus::NOTLOADED;
        } else {
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x1009f6d00, 64 bytes, inline, placed by class name
    // Js5ResourceProvider::UpdateMissingGroupsCountForArchive(Js5ArchiveSettings const&)::{lambda(int)#1}::operator()(int) const
    /* Js5ResourceProvider::UpdateMissingGroupsCountForArchive(Js5ArchiveSettings
   const&)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

    bool Js5ResourceProvider::UpdateMissingGroupsCountForArchive(Js5ArchiveSettings_const&)::{
        lambda(int) #1
    }
    ::operator()(_lambda_int__1_* this, int param_1)

    {
        Js5DiskCache* this_00;
        int iVar2;

        this_00 = *(Js5DiskCache**)(*(long*)this + 152);
        iVar2 = (*(CoordMapSquare**)(this + 8))->GetX();
        return this_00->CheckGroup(iVar2, param_1) == '\x02';
    }

    // 0x1009f6dd0, 16 bytes, base-object destructor, inline, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1::~$_1()
    /* ~$_1() */

    void Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                  Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                  math::BigInteger*, eastl::string, bool)::$_1::~__1() {
        ((this + 16))->~pair();
    }

    // 0x1009fe8e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1::$_1($_1&&): jumps straight to the base-object constructor

    // 0x1009fe8f0, 64 bytes, base-object constructor, inline, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1::$_1($_1&&)
    /* $_1($_1&&) */

    void Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                  Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                  math::BigInteger*, eastl::string, bool)::$_1::__1(__1* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) Filename((Filename*)(param_1 + 16));
        uVar1 = *(undefined8*)(param_1 + 328);
        *(undefined8*)(this + 320) = *(undefined8*)(param_1 + 320);
        *(undefined8*)(this + 328) = uVar1;
    }

    // 0x1009fead0, 448 bytes, inline, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1::operator()() const
    /* Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                  Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                  math::BigInteger*, eastl::string, bool)::$_1::operator()() {
        long lVar1;
        MainLoopFrameTimer* this_00;
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>* this_01;
        bool bVar2;
        uint uVar3;
        undefined4 uVar4;
        Js5LocalModeLoader* this_02;
        MapSquarePointLights* this_03;
        unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>* this_04;
        undefined8 uVar5;
        undefined8 uVar6;
        TcpConnectionMessageBase* pTVar7;
        undefined8 uVar8;
        scoped_lock<std::mutex> local_40[8];
        unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>> local_38[8];

        lVar1 = *(long*)(this + 328);
        this_02 = operator_new(656);
        this_00 = *(MainLoopFrameTimer**)(this + 8);
        bVar2 = MainLoopFrameTimer::GetFastUpdateLoopEnabled(this_00);
        Js5LocalModeLoader::Js5LocalModeLoader(this_02, (Js5ArchiveSettings*)this_00, (Filename*)(this + 16), bVar2,
                                               (bool)this[320]);
        std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::unique_ptr<true, void>(local_38,
                                                                                                             this_02);
        this_03 =
            (MapSquarePointLights*)std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::get(
                local_38);
        std::scoped_lock<std::mutex>::scoped_lock(local_40, *(mutex**)this);
        this_01 = *(Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                          eastl::allocator>**)(lVar1 + 136);
        uVar3 = (*(CoordMapSquare**)(this + 8))->GetX();
        this_04 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>*)
            Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                  eastl::allocator>::operator[](this_01, (ulong)uVar3);
        std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::swap(this_04,
                                                                                           (unique_ptr*)local_38);
        if (this[320] == (__1)0) {
            uVar5 = logger::default_logger();
            uVar6 = (*(RT7TextureDataProvider**)(this + 8))->GetSpritesArchive();
            pTVar7 = (TcpConnectionMessageBase*)this_03->GetLightSourcesDynamic();
            uVar4 = pTVar7->GetEndPosition();
            uVar8 = this_03->GetUncompressedLength();
            logger::Logger::Log(
                uVar5, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                175,
                "Js5ResourceProvider: Loaded archive %s. Contains: %u groups, total uncompressed data size: %llu bytes",
                uVar6, uVar4, uVar8);
        } else {
            uVar5 = logger::default_logger();
            uVar6 = (*(RT7TextureDataProvider**)(this + 8))->GetSpritesArchive();
            pTVar7 = (TcpConnectionMessageBase*)this_03->GetLightSourcesDynamic();
            uVar4 = pTVar7->GetEndPosition();
            logger::Logger::Log(
                uVar5, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                171, "Js5ResourceProvider: Loaded index for archive %s. Contains: %u groups", uVar6, uVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::~unique_ptr(local_38);
    }

} // namespace jag

class Js5WorkerRequestMessage {
public:
    WorkerRespoonseError(Js5WorkerGetGroupResponseType);
    WorkerRespoonseError(Js5WorkerGetIndexResponseType);
    void Serialize(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    Js5WorkerRequestMessage();
    void Deserialize(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
};

// 0x1009e8410, 320 bytes, inline, placed by class header (inline)
// Js5WorkerRequestMessage::Serialize(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void Js5WorkerRequestMessage::Serialize(PacketT* param_1) {
    vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>* this_00;
    Js5WorkerRequestMessage JVar1;
    Js5WorkerRequestMessage JVar2;
    Js5WorkerRequestMessage JVar3;
    byte bVar4;
    char cVar5;
    long lVar6;
    uchar* puVar7;
    VBOMapper local_50;

    this_00 = (vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>*)(this + 48);
    lVar6 = eastl::vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>::end(this_00);
    new (&local_50) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>(lVar6 + 25);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::operator=(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, (PacketT*)&local_50);
    local_50.~VBOMapper();
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, (ulong) * (uint*)this);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, (ulong) * (uint*)(this + 4));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, *(int*)(this + 8));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, *(int*)(this + 12));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, (ulong) * (uint*)(*(long*)(this + 16) + 8));
    JVar1 = this[24];
    JVar2 = this[25];
    JVar3 = this[26];
    bVar4 = this_00->empty();
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1,
        (ulong)((uint)(this[27] == (Js5WorkerRequestMessage)2) << 4 | (uint)(bVar4 ^ 1) << 3 | (uint)(byte)JVar3 << 2 |
                (uint)(byte)JVar2 * 2 | (uint)(byte)JVar1));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, *(int*)(this + 28));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, *(int*)(this + 32));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_1, (ulong) * (uint*)(*(long*)(this + 40) + 8));
    cVar5 = this_00->empty();
    if (cVar5 == '\0') {
        puVar7 = (uchar*)this_00->data();
        param_1->pArrayBuffer(puVar7, 0, 64);
    }
}
