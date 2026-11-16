// libs/js5/Js5ResourceProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5ResourceProvider {
    public:
        // virtual methods in vtable order
        virtual ~Js5ResourceProvider();
        virtual uint8_t* IndexReady(const Js5ArchiveSettings& js5ArchiveSettings);
        virtual uint8_t* GetIndex(Js5Index** arg1, const Js5ArchiveSettings& js5ArchiveSettings);
        virtual uint8_t* GetMasterIndex(const Js5MasterIndex** arg1) const;
        virtual uint8_t* FileReady(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2, unsigned int arg3,
                                   const Priority* priority, bool arg5);
        virtual uint8_t* GroupPreloaded(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2, bool arg3,
                                        bool& arg4);
        virtual bool EnsureArchiveLoadedIfAvailableOnDisk(const Js5ArchiveSettings& js5ArchiveSettings);
        void GetJs5WorkerThread() const;
        Js5DiskCache* GetDiskCache() const;
        Js5MemoryCache* GetMemoryCache();
        Js5ResourceProvider(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                            SystemSettings* systemSettings, const PacketT<Array<unsigned char>>& arg5,
                            unsigned int arg6, Js5ArchiveSetSettings& js5ArchiveSetSettings, bool arg8,
                            math::BigInteger* bigInteger1, math::BigInteger* bigInteger2, const eastl::string& str4);
        bool IsLocalMode();
        uint64_t GetFile(PacketView& packetView, const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg3,
                         unsigned int arg4, const Priority* priority, bool arg6, bool arg7, bool arg8);
        void UpdateMissingGroupsCountForArchive(const Js5ArchiveSettings& js5ArchiveSettings);
        Js5ResourceProvider(const Array<eastl::string>& strs, SystemSettings* systemSettings,
                            Js5ArchiveSetSettings& js5ArchiveSetSettings, math::BigInteger* bigInteger1,
                            math::BigInteger* bigInteger2, math::BigInteger* bigInteger3, eastl::string str, bool arg8);
        void ProcessNewMasterIndex();
        void ProcessNewIndex(unsigned int arg1, const Js5Index& js5Index);
        bool IsDiskCacheReady() const;
        void ProcessNewMasterIndexFromHTTP();
        void ValidateHTTPArchiveIndices();
        void EnableDiskCacheValidation(bool arg1);
        bool CheckArchive(const Js5ArchiveSettings& js5ArchiveSettings) const;
        uint8_t* RequestIndex(unsigned int arg1, const Js5ArchiveSettings& js5ArchiveSettings);
        unsigned long RequestGroupFromDisk(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                           const Priority* priority, bool arg4);
        void RequestGroupFromServer(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2,
                                    const Priority* priority, bool arg4);
        uint8_t* GroupReady(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2, const Priority* priority,
                            bool arg4);
        uint8_t* GetFile(shared_ptr<PacketT<Array<unsigned char>>>& arg1, const Js5ArchiveSettings& js5ArchiveSettings,
                         unsigned int arg3, unsigned int arg4, const Priority* priority, bool arg6, bool arg7,
                         bool arg8);
        void IsRequested(unsigned int arg1, unsigned int arg2) const;
        void GetGroup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, const Js5ArchiveSettings& js5ArchiveSettings,
                      unsigned int arg3, const Priority* priority, bool arg5, bool arg6);
        void GetRequestArchiveStatus(const Js5ArchiveSettings& js5ArchiveSettings);
        void RequestArchive(const Js5ArchiveSettings& js5ArchiveSettings);
        void RequestGroupFromLocalArchive(const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg2);
        void SetRequested(unsigned int arg1, unsigned int arg2, const Priority* priority);
        void OnGroupLoaded(int arg1, int arg2, Array<unsigned char>&& arg3, unsigned int arg4, unsigned int arg5,
                           const Priority* priority, bool arg7, bool arg8, bool arg9);
        void ClearRequested(unsigned int arg1, unsigned int arg2);
        void OnGroupLoadFailed(int arg1, int arg2, const Priority* priority, bool arg4);
        void SaveLocalArchiveAssetToDisk(const Js5ArchiveSettings& js5ArchiveSettings, const Js5Index& js5Index,
                                         const shared_ptr<PacketT<Array<unsigned char>>>& arg3, unsigned int arg4,
                                         unsigned int arg5);
        void ChangeURLs(const char* str1, const char* str2, const char* str3);
        void WorkerOnMessage(PacketT<Array<unsigned char>>& arg1);
        void Service();
        void DataUpdate();
        void RerequestHTTPMasterIndex();
        void DeleteCaches();
        void ReinitialiseCaches();
        void DeleteCacheGroup(unsigned int arg1, unsigned int arg2);
        void Shutdown();
        void CheckIndexValid(const Js5ArchiveSettings& js5ArchiveSettings);
        uint8_t* GetIndex(const Js5Index** arg1, const Js5ArchiveSettings& js5ArchiveSettings);

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[16];
        uint32_t field_40;
        uint32_t field_44;
        uint8_t _unknown_48[32];
        Js5ArchiveSetSettings* field_80;
        uint8_t _unknown_88[16];
        BigInteger* field_104;
        BigInteger* field_112;
        uint8_t m_localMode;
        uint8_t _unknown_121[7];
        Array<eastl::string>* field_128;
        Array<std::unique_ptr<Js5LocalModeLoader>>* field_136;
        Js5MemoryCache* m_pMemoryCache;
        Js5DiskCache* m_pDiskCache;
        uint8_t _unknown_160[11184];
        uint8_t field_11344;
        uint8_t _unknown_11345[3];
        unsigned int field_11348;
        unsigned int field_11352;
        uint64_t field_11356;
        uint8_t field_11364;
        uint8_t _unknown_11365[3];
        uint8_t field_11368;
        uint8_t _unknown_11369[7];
        uint8_t field_11376;
        bool field_11377;
        uint8_t _unknown_11378[6];
        uint8_t field_11384;
        uint8_t _unknown_11385[54951];
        bool field_66336;
        uint8_t _unknown_66337[7];
        SystemSettings* field_66344;
    };

    // 0x10018a2a0
    Js5ResourceProvider::Js5ResourceProvider(const eastl::string& str1, const eastl::string& str2,
                                             const eastl::string& str3, SystemSettings* systemSettings,
                                             const PacketT<Array<unsigned char>>& arg5, unsigned int arg6,
                                             Js5ArchiveSetSettings& js5ArchiveSetSettings, bool arg8,
                                             math::BigInteger* bigInteger1, math::BigInteger* bigInteger2,
                                             const eastl::string& str4) {
        Js5WorkerThread* this_01;
        ReturnValue local_90;
        shared_ptr<Js5WorkerThread> local_68;

        shared_ptr<Js5WorkerThread>* local_78 = (shared_ptr<Js5WorkerThread>*)field_8;
        new (local_78) shared_ptr();
        uint8_t* this_00 = &field_24;
        new (this_00) shared_ptr();
        field_40 = 0;
        field_44 = 0;
        new (&field_48) eastl::string(str1);
        field_80 = js5ArchiveSetSettings;
        field_104 = bigInteger1;
        field_112 = bigInteger2;
        m_localMode = 0;
        field_128 = nullptr;
        field_136 = nullptr;
        m_pMemoryCache = nullptr;
        m_pDiskCache = nullptr;
        new (&field_160)
            std::array<eastl::map<unsigned int, Priority const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                       67ul>();
        new (&field_3392) std::array<std::mutex, 4ul>();
        new (&field_3648) std::array<std::mutex, 67ul>();
        new (&field_7936) std::array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>>, 67ul>();
        new (&field_11152) std::array<eastl::set<shared_ptr<Js5WorkerRequestMessage>>, 4ul>();
        field_11344 = 0;
        field_11348 = 0;
        field_11352 = 0;
        field_11356 = 0;
        field_11364 = 0;
        field_11368.unique_ptr<true, void>();
        field_11376 = 0;
        bool bVar1 = str3 != (*((value_type*)""));
        field_11377 = bVar1;
        field_11384.unique_ptr<true, void>();
        new (&field_11664) std::array<Js5Index, 67ul>();
        new (&field_29888) std::array<Js5Index, 67ul>();
        new (&field_48112) std::array<Js5Index, 67ul>();
        field_66336 = arg8;
        field_66344 = systemSettings;
        auto str = getTaskRunner();
        make_shared<Js5WorkerThread>(&local_90);
        TaskRunner::AddTask<Js5WorkerThread>(&local_68, str, (shared_ptr<Js5WorkerThread>*)"Js5WorkerThread");
        shared_ptr<Js5WorkerThread>* midiPlayerMainThread = local_78;
        *local_78 = local_68;
        bVar1 = *midiPlayerMainThread != nullptr;
        if (bVar1) {
            this_01 = (Js5WorkerThread*)(*local_78).operator->();
            std::function<void(PacketT<Array<unsigned char>>&)>::function<
                Js5ResourceProvider::Js5ResourceProvider(
                    eastl::stringconst&, eastl::stringconst&, eastl::stringconst&, SystemSettings*,
                    PacketT<Array<unsigned char>> const&, unsigned int, Js5ArchiveSetSettings&, bool, math::BigInteger*,
                    math::BigInteger*, eastl::stringconst&)::_lambda(PacketT<Array<unsigned char>>&) _1_,
                void>((function<void(PacketT<Array<unsigned char>>&)>*)&local_68,
                      (_lambda_jag__PacketT<Array<unsigned char> _> ___1_*)this);
            this_01->SetWorkerOnMessage(local_68);
        }
        int iVar2 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion<eastl::stringconst>(str2, false);
        int iVar3 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion<eastl::stringconst>(str3, false);
        int iVar4 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion<eastl::stringconst>(str4, false);
        long lVar5 = arg5.GetTextureAtlas();
        local_90[0] = (ReturnValue)(lVar5 + (iVar4 + iVar2 + iVar3 + 4) + 2);
        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned long>(&local_68);
        *this_00 = local_68;
        PacketT<Array<unsigned char>>* pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        pPVar6->p1<unsigned long>(2);
        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        pPVar6->pStringNoConversion<eastl::string>(str2, false);
        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        pPVar6->pStringNoConversion<eastl::string>(str3, false);
        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        pPVar6->pStringNoConversion<eastl::string>(str4, false);
        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        lVar5 = field_66344->GetSpritesArchive();
        pPVar6->p1<unsigned long>(*(ID*)(lVar5 + 8));
        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        unsigned short arg1 = arg5.GetTextureAtlas();
        pPVar6->p2<unsigned long>(arg1);
        lVar5 = arg5.GetTextureAtlas();
        if (lVar5 != 0) {
            pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
            pPVar6->pArrayBuffer(*((PacketT<Array<unsigned char> _>*)(TextureAtlasReference*)arg5));
        }
        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_00).operator->();
        pPVar6->p2<unsigned long>((unsigned short)arg6);
    }

    // 0x10019f030
    void Js5ResourceProvider::Js5ResourceProvider(eastl::string const&, eastl::string const&, eastl::string const&,
                                                  SystemSettings*, PacketT<Array<unsigned char>> const&, unsigned int,
                                                  Js5ArchiveSetSettings&, bool, math::BigInteger*, math::BigInteger*,
                                                  eastl::string const&)::{
        lambda(PacketT<Array<unsigned char>>&) #1
    }
    ::operator()(PacketT<Array<unsigned char>>& arg1) const {
        WorkerOnMessage(*(Js5ResourceProvider**)this, arg1);
    }

    // 0x1008cb920
    uint64_t Js5ResourceProvider::GetFile(PacketView& packetView, const Js5ArchiveSettings& js5ArchiveSettings,
                                          unsigned int arg3, unsigned int arg4, const Priority* priority, bool arg6,
                                          bool arg7, bool arg8) {
        PacketView local_78;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        uint64_t uVar1 = GetFile(local_50, js5ArchiveSettings, arg3, arg4, priority, arg6, arg7, arg8);
        local_78.PacketView<Array<unsigned char>>(local_50);
        packetView = local_78;
        return uVar1;
    }

    // 0x1009e10c0
    void Js5ResourceProvider::UpdateMissingGroupsCountForArchive(const Js5ArchiveSettings& js5ArchiveSettings) {
        unsigned int uVar1 = js5ArchiveSettings.GetX();
        GeometryBatchInstance* this_01 = &field_11664[(unsigned long)uVar1];
        auto this_02 = this_01->GetMaterial();
        auto arg1 = this_02->data();
        auto arg2 = this_02->end();
        uVar1 = std::count_if<unsigned int const*,
                              (Js5ArchiveSettings const&)->UpdateMissingGroupsCountForArchive()::_lambda(int) _1_>(
            arg1, arg2, (_lambda_int__1_*)this);
        m_pDiskCache->UpdateMissingGroupCount(js5ArchiveSettings.GetX(), uVar1);
    }

    // 0x1009e55e0
    void Js5ResourceProvider::IsRequested(unsigned int arg1, unsigned int arg2) const {
        rbtree<unsigned int, eastl::pair<unsigned int const, Priority const*>, eastl::less<unsigned int>,
               SafeBucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned int const, Priority const*>>, true,
               true>* this_00 = &field_160[(unsigned long)arg1];
        uint64_t local_28 = this_00->find(arg2);
        uint64_t local_20 = this_00->end();
        local_28 != local_20;
    }

    // 0x1009e5b10
    void Js5ResourceProvider::SetRequested(unsigned int arg1, unsigned int arg2, const Priority* priority) {
        uint64_t* puVar1;
        unsigned int local_14;

        map<unsigned int, Priority const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>* this_00 =
            &field_160[(unsigned long)arg1];
        if ((Priority*)Priority::NONE == priority) {
            this_00->erase(local_14);
        } else {
            puVar1 = (uint64_t*)(*this_00)[local_14];
            *puVar1 = priority;
        }
    }

    // 0x1009e61a0
    void Js5ResourceProvider::ClearRequested(unsigned int arg1, unsigned int arg2) {
        ((map<unsigned int, Priority const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>*)
             field_160[(unsigned long)arg1])
            ->erase(arg2);
    }

    // 0x1009ed5b0
    void Js5ResourceProvider::CheckIndexValid(const Js5ArchiveSettings& js5ArchiveSettings) {
        unsigned int uVar1 = js5ArchiveSettings.GetX();
        ((Js5Index*)field_11664[(unsigned long)uVar1])->IsValid();
    }

    // 0x1009f66e0
    uint8_t* Js5ResourceProvider::IndexReady(const Js5ArchiveSettings& js5ArchiveSettings) {
        if (&field_11368 == js5ArchiveSettings) {
            return DataStatus::NOTLOADED;
        }
        if (!(CheckArchive(js5ArchiveSettings))) {
            LogAssert("CheckArchive(archive)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.h",
                      110, nullptr);
        }
        unsigned int arg1 = js5ArchiveSettings.GetX();
        Js5Index* pJVar3 = &field_11664[(unsigned long)arg1];
        if (pJVar3->IsValid()) {
            if (!(m_pDiskCache->HasReadOnlyArchive(arg1))) {
                return DataStatus::READY;
            }
            if (m_pDiskCache->HasReadOnlyArchive(arg1)) {
                pJVar3 = &field_29888[(unsigned long)arg1];
                if (pJVar3->IsValid()) {
                    return DataStatus::READY;
                }
            }
        }
        return (uint8_t*)RequestIndex(arg1, js5ArchiveSettings);
    }

    // 0x1009f67d0
    uint8_t* Js5ResourceProvider::GetIndex(Js5Index** arg1, const Js5ArchiveSettings& js5ArchiveSettings) {
        unsigned int uVar2;
        uint64_t extraout_var;
        Js5Index* pJVar3;

        uint8_t uVar1 = IndexReady();
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
            uVar2 = js5ArchiveSettings.GetX();
            pJVar3 = &field_11664[(unsigned long)uVar2];
        } else {
            pJVar3 = nullptr;
        }
        *arg1 = pJVar3;
        return (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
    }

    // 0x1009f6830
    uint8_t* Js5ResourceProvider::GetMasterIndex(const Js5MasterIndex** arg1) const {
        uint8_t** ppuVar2;

        auto pJVar1 = field_11368.get();
        *arg1 = pJVar1;
        if (pJVar1 == nullptr) {
            ppuVar2 = &DataStatus::NOTLOADED;
        } else {
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x1009f6d00
    bool Js5ResourceProvider::UpdateMissingGroupsCountForArchive(Js5ArchiveSettings const&)::{
        lambda(int) #1
    }
    ::operator()(int arg1) const {
        lambda(int) #1
    }
    ::operator()(_lambda_int__1_* this, int arg1) {
        Js5DiskCache* this_00;
        char cVar1;
        int arg1_00;

        this_00 = *(Js5DiskCache**)(*(long*)this + 152);
        arg1_00 = (*(CoordMapSquare**)(this + 8))->GetX();
        cVar1 = this_00->CheckGroup(arg1_00, arg1);
        return cVar1 == '\x02';
    }

    // 0x1009f6dd0
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                             math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string,
                                             bool)::$_1::~$_1() {
        ((this + 16))->~pair();
    }

    // 0x1009fe8f0
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                             math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string,
                                             bool)::$_1::$_1($_1&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) Filename((arg1 + 16));
        uVar1 = *(uint64_t*)(arg1 + 328);
        *(uint64_t*)(this + 320) = *(uint64_t*)(arg1 + 320);
        *(uint64_t*)(this + 328) = uVar1;
    }

    // 0x1009fead0
    void Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                                  math::BigInteger*, math::BigInteger*, math::BigInteger*,
                                                  eastl::string, bool)::$_1::operator()() const {
        uint32_t uVar3;
        Logger* pLVar4;
        uint64_t uVar5;
        TcpConnectionMessageBase* pTVar6;
        uint64_t uVar7;
        unique_ptr<Js5LocalModeLoader> local_38;

        long lVar1 = *(long*)(this + 328);
        Js5LocalModeLoader* this_02 = (Js5LocalModeLoader*)operator new(656);
        MainLoopFrameTimer* this_00 = *(MainLoopFrameTimer**)(this + 8);
        bool arg3 = (bool)this_00->GetFastUpdateLoopEnabled();
        new (this_02) Js5LocalModeLoader(this_00, *((this + 16)), arg3, (bool)this[320]);
        local_38.unique_ptr<true, void>(this_02);
        auto this_03 = local_38.get();
        scoped_lock<std::mutex> local_40(*(*(mutex**)this));
        Array<std::unique_ptr<Js5LocalModeLoader>>* this_01 =
            *(Array<std::unique_ptr<Js5LocalModeLoader>>**)(lVar1 + 136);
        unsigned int uVar2 = (*(CoordMapSquare**)(this + 8))->GetX();
        ((unique_ptr<Js5LocalModeLoader>*)(*this_01)[(unsigned long)uVar2])->swap(local_38);
        if (this[320] == (__1)0) {
            pLVar4 = logger::default_logger();
            uVar5 = (*(RT7TextureDataProvider**)(this + 8))->GetSpritesArchive();
            pTVar6 = (TcpConnectionMessageBase*)this_03->GetLightSourcesDynamic();
            uVar3 = pTVar6->GetEndPosition();
            uVar7 = this_03->GetUncompressedLength();
            pLVar4->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                175,
                "Js5ResourceProvider: Loaded archive %s. Contains: %u groups, total uncompressed data size: %llu bytes",
                uVar5, uVar3, uVar7);
        } else {
            pLVar4 = logger::default_logger();
            uVar5 = (*(RT7TextureDataProvider**)(this + 8))->GetSpritesArchive();
            pTVar6 = (TcpConnectionMessageBase*)this_03->GetLightSourcesDynamic();
            uVar3 = pTVar6->GetEndPosition();
            pLVar4->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                171, "Js5ResourceProvider: Loaded index for archive %s. Contains: %u groups", uVar5, uVar3);
        }
    }

} // namespace jag

class Js5WorkerRequestMessage {
public:
    void WorkerRespoonseError(Js5WorkerGetGroupResponseType js5WorkerGetGroupResponseType);
    void WorkerRespoonseError(Js5WorkerGetIndexResponseType js5WorkerGetIndexResponseType);
    void Serialize(jag::PacketT<jag::Array<unsigned char>>& arg1);
    Js5WorkerRequestMessage();
    void Deserialize(jag::PacketT<jag::Array<unsigned char>>& arg1);
};

// 0x1009e8410
void Js5WorkerRequestMessage::Serialize(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>* this_00 =
        (vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>*)(this + 48);
    long lVar6 = this_00->end();
    VBOMapper local_50(lVar6 + 25);
    arg1 = local_50;
    arg1.p1<unsigned long>(*(ID*)this);
    arg1.p1<unsigned long>(*(ID*)(this + 4));
    arg1.p4<int>(*(unsigned int*)(this + 8));
    arg1.p4<int>(*(unsigned int*)(this + 12));
    arg1.p1<unsigned long>(*(ID*)(*(long*)(this + 16) + 8));
    Js5WorkerRequestMessage JVar1 = this[24];
    Js5WorkerRequestMessage JVar2 = this[25];
    Js5WorkerRequestMessage JVar3 = this[26];
    uint8_t bVar4 = this_00->empty();
    arg1.p1<unsigned long>((unsigned int)(this[27] == (Js5WorkerRequestMessage)2) << 4 |
                           (unsigned int)(bVar4 ^ 1) << 3 | (unsigned int)(uint8_t)JVar3 << 2 |
                           (unsigned int)(uint8_t)JVar2 * 2 | (unsigned int)(uint8_t)JVar1);
    arg1.p4<int>(*(unsigned int*)(this + 28));
    arg1.p4<int>(*(unsigned int*)(this + 32));
    arg1.p1<unsigned long>(*(ID*)(*(long*)(this + 40) + 8));
    if (this_00->empty() == '\0') {
        arg1.pArrayBuffer((unsigned char*)this_00->data(), 0, 64);
    }
}
