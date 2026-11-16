// libs/js5/caching/Js5DiskCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5DiskCache.h"

namespace jag {
    // 0x103bc2160
    int64_t Js5DiskCache::m_notificationHandler;

    // 0x1001a4060: Js5DiskCache::ActionCounter::ActionCounter() has the same machine code as math::Vector3T<float>::Vector3T()

    // 0x1002da630: Js5DiskCache::QueueRequestItem::~QueueRequestItem() has the same machine code as oldscape::jagex3::Js5RemoteRequestData::~Js5RemoteRequestData()

    // 0x1009e1150
    uint32_t Js5DiskCache::GetMissingGroupCount(int arg1) const {
        uint32_t* puVar1 = &field_67544[(long)arg1];
        return *puVar1;
    }

    // 0x1009e1420
    bool Js5DiskCache::IsValidated(int arg1) const {
        long lVar1 = field_8[(long)arg1];
        return *(char*)(lVar1 + 13) == '\0';
    }

    // 0x1009e3a30
    void Js5DiskCache::Validate(int arg1) {
        long lVar1 = field_8[(long)arg1];
        if (*(int*)(lVar1 + 28) != 0) {
            *(uint8_t*)(lVar1 + 13) = 1;
        }
    }

    // 0x1009e4080
    void Js5DiskCache::UpdateIndexSizesForArchives() {
        int iVar1;
        int iVar2;
        uint32_t* puVar3;
        int local_34;

        auto this_00 = field_70296->GetStart(local_34);
        if (this_00 != nullptr) {
            do {
                iVar1 = this_00->GetX();
                iVar2 = this_00->AlreadyWritten();
                puVar3 = &field_67544[(long)iVar1];
                *puVar3 = 0;
                ((puVar3 + 2))->resize((long)(iVar2 + 1));
                this_00 = (PCMPlayer*)field_70296->GetNext(local_34);
            } while (this_00 != nullptr);
        }
    }

    // 0x1009e5070
    int Js5DiskCache::CheckGroup(int arg1, int arg2) const {
        if (66 < arg1) {
            LogAssert(
                "archiveID < (int)m_archivesInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                396, nullptr);
        }
        long lVar2 = field_67544[(long)arg1];
        if (((lVar2 + 8))->size() <= arg2 + 1) {
            LogAssert(
                "groupID < (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                398, nullptr);
        }
        char* pcVar3 = (char*)(*((lVar2 + 8)))[(long)(arg2 + 1)];
        return (int)*pcVar3;
    }

    // 0x1009e5630
    void Js5DiskCache::Service() {
        int* piVar2;
        int* piVar3;

        vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL> local_48;
        scoped_lock<std::mutex> local_30(field_1512768);
        field_1512832.swap(local_48);
        if (local_48.empty() == '\0') {
            piVar2 = (int*)local_48.HeapBeginPtr();
            piVar3 = (int*)local_48.end();
            for (; piVar2 != piVar3; piVar2 = piVar2 + 18) {
                if (*piVar2 == 1) {
                    if (piVar2[10] == 1) {
                        field_70312->OnGroupLoaded(piVar2[1], piVar2[2], *((piVar2 + 12)), piVar2[4], piVar2[3],
                                                   *(Priority**)(piVar2 + 6), (uint8_t)piVar2[8],
                                                   *(bool*)((long)piVar2 + 33), *(bool*)((long)piVar2 + 34));
                    } else {
                        field_70312->OnGroupLoadFailed(piVar2[1], piVar2[2], *(Priority**)(piVar2 + 6),
                                                       (uint8_t)piVar2[8]);
                    }
                }
            }
        }
        local_48.~vector();
    }

    // 0x1009e5b60
    void Js5DiskCache::GetGroup(int arg1, int arg2, const Js5Index* js5Index, Js5DiskCacheFormat js5DiskCacheFormat,
                                const Priority* priority, bool arg6, bool arg7) {
        QueueRequestItem* queueRequestItem;

        mutex* mutex = &field_63256[(long)arg1];
        scoped_lock<std::mutex> local_38(*mutex);
        long lVar3 = field_67544[(long)arg1];
        int iVar1 = ((lVar3 + 8))->size();
        if (iVar1 <= arg2) {
            LogAssert(
                "groupID + Js5Constants::NUM_SPECIAL_GROUPS <= (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                413, nullptr);
        }
        uint8_t* puVar4 = (uint8_t*)(*((lVar3 + 8)))[(long)(arg2 + 1)];
        *puVar4 = 3;
        field_1513228 = field_1513228 + 1;
        iVar1 = field_70416;
        int iVar2 = field_70424.max_size();
        if (iVar1 == iVar2) {
            MoveFromInsertionQueue();
        }
        local_38 = std::scoped_lock(field_1512208);
        field_70416 = field_70416 + 1;
        queueRequestItem = (QueueRequestItem*)field_70424.push_back();
        queueRequestItem->field_4 = arg1;
        queueRequestItem->field_8 = arg2;
        queueRequestItem->field_24 = (Pix32*)priority;
        queueRequestItem->field_32 = arg6;
        iVar1 = js5Index->GetGroupCRC(arg2);
        queueRequestItem->field_16 = iVar1;
        iVar1 = js5Index->GetGroupVersion(arg2);
        queueRequestItem->field_12 = iVar1;
        queueRequestItem->field_0 = 1;
        queueRequestItem->field_36 = (int)(char)js5DiskCacheFormat;
        queueRequestItem->field_34 = arg7;
        IncrementCounterForJob(*queueRequestItem, true);
        if (arg6) {
            lVar3 = FrameTime::GetCurrentTimeMS();
            field_1512728 = lVar3 + 2000;
            lVar3 = FrameTime::GetCurrentTimeMS();
            field_1512736 = lVar3 + 750;
        }
        std::condition_variable::notify_all();
    }

    // 0x1009e6790
    void Js5DiskCache::ProvideGroup(int arg1, int arg2, const shared_ptr<PacketT<Array<unsigned char>>>& arg3,
                                    unsigned int arg4, unsigned int arg5, Js5DiskCacheFormat js5DiskCacheFormat) {
        QueueRequestItem* queueRequestItem;
        uint32_t in_register_0000000c;
        uint32_t in_register_0000003c;
        char in_stack_00000008;

        Js5DiskCache* js5DiskCache = (Js5DiskCache*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        mutex* mutex = &js5DiskCache->field_63256[(long)arg2];
        scoped_lock<std::mutex> local_38(*mutex);
        long lVar3 = js5DiskCache->field_67544[(long)arg2];
        int iVar1 = ((lVar3 + 8))->size();
        if (iVar1 <= (int)arg3) {
            LogAssert(
                "groupID + Js5Constants::NUM_SPECIAL_GROUPS <= (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                357, nullptr);
        }
        uint8_t* puVar4 = (uint8_t*)(*((lVar3 + 8)))[(long)((int)arg3 + 1)];
        *puVar4 = 3;
        js5DiskCache->field_1513228 = js5DiskCache->field_1513228 + 1;
        iVar1 = js5DiskCache->field_70416;
        int iVar2 = js5DiskCache->field_70424.max_size();
        if (iVar1 == iVar2) {
            MoveFromInsertionQueue(js5DiskCache);
        }
        local_38 = std::scoped_lock(js5DiskCache->field_1512208);
        js5DiskCache->field_70416 = js5DiskCache->field_70416 + 1;
        queueRequestItem = (QueueRequestItem*)js5DiskCache->field_70424.push_back();
        queueRequestItem->field_0 = 2;
        queueRequestItem->field_4 = arg2;
        queueRequestItem->field_8 = (int)arg3;
        queueRequestItem->field_12 = js5DiskCacheFormat;
        queueRequestItem->field_16 = arg5;
        queueRequestItem->field_40 = (*(
            (shared_ptr<PacketT<Array<unsigned char> _> _>*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4)));
        queueRequestItem->field_24 = (Pix32*)Priority::LOW;
        queueRequestItem->field_32 = 1;
        queueRequestItem->field_36 = (int)in_stack_00000008;
        IncrementCounterForJob(js5DiskCache, queueRequestItem, true);
        std::condition_variable::notify_all();
    }

    // 0x1009e8600
    void Js5DiskCache::DeleteCache() {
        Shutdown();
        long lVar1 = std::array<Js5DiskCache::Database, 67ul>::begin();
        long lVar2 = std::array<Js5DiskCache::Database, 67ul>::end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 472) {
            ((lVar1 + 48))->RemoveFile(nullptr);
        }
        Startup();
    }

    // 0x1009e8700
    void Js5DiskCache::Shutdown() {
        StopThreads();
    }

    // 0x1009e8710
    void Js5DiskCache::Startup() {
        bool cVar1;
        int iVar3;
        PCMPlayer* this_00;
        int* piVar4;
        uint64_t* puVar5;
        Logger* this_01;
        uint64_t uVar6;
        uint8_t* puVar7;
        thread* this_02;
        __3* arg1;
        unsigned long arg1_00;
        uint8_t local_2b8[20];
        int local_2a4[3];
        thread local_298;
        ReturnValue local_168;

        int iVar2 = (&field_70368)->operator_cast_to_int();
        if (iVar2 < 1) {
            field_70356 = 0;
            this_00 = (PCMPlayer*)field_70296->GetStart(*local_2a4);
            if (this_00 != nullptr) {
                do {
                    iVar2 = this_00->GetX();
                    iVar3 = this_00->AlreadyWritten();
                    arg1_00 = (unsigned long)iVar2;
                    local_2a4[2] = iVar2;
                    piVar4 = &field_67544[arg1_00];
                    ((piVar4 + 2))->resize((long)(iVar3 + 1));
                    puVar5 = &field_8[arg1_00];
                    *(int*)(puVar5 + 1) = iVar2;
                    *puVar5 = this;
                    iVar2 = this_00->GetMaxLineWidth();
                    *(bool*)(puVar5 + 4) = iVar2 == -1;
                    local_2b8._8_8_ = puVar5;
                    GetDatabaseFilename(&local_168, (int)this, (uint8_t)local_2a4[2]);
                    cVar1 = local_168.Exists();
                    if (!cVar1) {
                        *piVar4 = iVar3 + 1;
                    } else {
                        GetDatabaseFilename(&local_298, (int)this, (uint8_t)local_2a4[2]);
                        local_168 = local_298 + "_dummy";
                        cVar1 = local_168.Exists();
                        if (cVar1) {
                            new (local_2b8) callstack::Callstack();
                            local_168.Remove(local_2b8);
                            cVar1 = local_2b8->IsValid();
                            if (cVar1) {
                                this_01 = logger::default_logger();
                                local_298 = local_2b8->GetErrorString();
                                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_01->Log(false, 8,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "js5/caching/Js5DiskCache.cpp",
                                             108, "Error removing dummy file: %s", uVar6);
                            }
                            *(uint8_t*)(local_2b8._8_8_ + 32) = 1;
                        }
                        puVar5 = &field_31632[arg1_00];
                        *(int*)(puVar5 + 1) = local_2a4[2];
                        *puVar5 = this;
                        *(uint32_t*)((long)puVar5 + 28) = 0;
                        *(uint32_t*)(local_2b8._8_8_ + 28) = 2;
                        puVar7 = &field_1512656[arg1_00];
                        *puVar7 = 1;
                    }
                    iVar2 = this_00->GetMaxLineWidth();
                    if (iVar2 == -1) {
                        if ((uint8_t*)this_00->GetPrefetchPriority() != Priority::NONE) {
                            LogAssert(
                                "archive->GetOpenPriority() != -1 || archive->GetPrefetchPriority() == Priority::NONE",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                "Js5DiskCache.cpp",
                                130,
                                "Js5Archive marked for reset but does not have preload priority NONE, this is probably "
                                "not intended.");
                        }
                    }
                    field_70356 = field_70356 + 1;
                    this_00 = (PCMPlayer*)field_70296->GetNext(*local_2a4);
                } while (this_00 != nullptr);
            }
            field_70352 = '\0';
            GetDatabaseRootFolder(&local_168, this);
            local_168.CreateDirectories(nullptr);
            DeleteOldArchives();
            std::__atomic_base<int, true>::operator++();
            local_2a4[1] = 1;
            arg1 = (__3*)local_2b8;
            local_2b8._0_8_ = this;
            std::thread::thread<Js5DiskCache::Startup()::__3, int, void>(&local_298, arg1, local_2a4 + 1);
            this_02 = &field_70408[(unsigned long)arg1];
            *this_02 = local_298;
            std::thread::~thread(&local_298);
        }
    }

    // 0x1009e8bb0
    Js5DiskCache::Js5DiskCache(Js5ResourceProvider& js5ResourceProvider, const eastl::string& str,
                               SystemSettings* systemSettings, Js5ArchiveSetSettings& js5ArchiveSetSettings)
        : SystemPathsCallbackInterface(), field_70272(0), field_70280(0), field_70256(0), field_70264(0),
          field_70240(0), field_70248(0), field_70224(0), field_70232(0) {
        FullArchiveRequestStatus* fullArchiveRequestStatus1;
        FullArchiveRequestStatus* fullArchiveRequestStatus2;
        ReturnValue local_168;

        *(uint32_t*)((long)&field_70280 + 7) = 0;
        field_70296 = js5ArchiveSetSettings;
        field_70304 = systemSettings;
        field_70312 = js5ResourceProvider;
        new (&field_70320) eastl::string(str);
        field_70352 = '\0';
        field_70356 = 0;
        field_70364 = 1;
        new (&field_70376) thread_specific_ptr<int>(Js5DiskCache(
            Js5ResourceProvider&, eastl::stringconst&, SystemSettings*, Js5ArchiveSetSettings&)::$_2::__invoke);
        m_usageBytes = 0;
        field_70392 = 1;
        field_70400 = 0;
        new (&field_70408) std::array<std::thread, 1ul>();
        field_70416 = 0;
        field_70420 = 0;
        new (&field_70424) eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul>();
        new (&field_790504) eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul>();
        new (&field_1510600) std::array<Js5DiskCache::ActionCounter, 67ul>();
        new (&field_1511404) std::array<Js5DiskCache::ActionCounter, 67ul>();
        new (&field_1512208) std::mutex();
        new (&field_1512272) std::mutex();
        new (&field_1512336) std::condition_variable();
        field_1512384 = 0;
        field_1512728 = 0;
        field_1512736 = 0;
        field_1512744 = 1;
        field_1512752 = 0;
        field_1512760 = 0;
        new (&field_1512768) std::mutex();
        new (&field_1512832) eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>();
        new (&field_1512856) std::mutex();
        new (&field_1512920) Filename();
        field_1513224 = 0;
        field_1513228 = 0;
        field_1513225 = true;
        field_1513226 = 1;
        unsigned char* arg1 = (unsigned char*)std::array<signed char, 67ul>::begin();
        unsigned char* arg2 = (unsigned char*)std::array<signed char, 67ul>::end();
        local_168[0]._0_4_ = local_168[0]._0_4_ & 4294967040;
        eastl::fill(arg1, arg2, &local_168);
        unsigned int* arg1_00 = (unsigned int*)std::array<int, 4ul>::begin();
        unsigned int* arg2_00 = (unsigned int*)std::array<int, 4ul>::end();
        eastl::fill<unsigned int>(arg1_00, arg2_00, 0);
        fullArchiveRequestStatus1 = (FullArchiveRequestStatus*)std::array<FullArchiveRequestStatus, 67ul>::begin();
        fullArchiveRequestStatus2 = (FullArchiveRequestStatus*)std::array<FullArchiveRequestStatus, 67ul>::end();
        local_168[0]._0_4_ = 0;
        eastl::fill<FullArchiveRequestStatus*, FullArchiveRequestStatus>(fullArchiveRequestStatus1,
                                                                         fullArchiveRequestStatus2, local_168);
        LODLevel* lodLevel1 = (LODLevel*)std::array<bool, 67ul>::begin();
        LODLevel* lodLevel2 = (LODLevel*)std::array<bool, 67ul>::end();
        local_168[0]._0_4_ = local_168[0]._0_4_ & 4294967040;
        eastl::fill<bool*, bool>(lodLevel1, lodLevel2, local_168);
        int iVar2 = (int)lodLevel2;
        field_70368 = iVar2;
        field_70360 = iVar2;
        GetDatabaseRootFolder(&local_168, this);
        field_1512920 = local_168;
        field_1512752 = FrameTime::GetCurrentTimeMS() + 15000;
        iVar2 = SystemPaths::GetInstanceNumber();
        field_70364 = (unsigned int)(iVar2 == 0);
        if (iVar2 == 0) {
            if (js5ResourceProvider.IsMembersServer() == '\0')
                goto LAB_1009e8f66;
        }
        field_1512760 = 1;
        field_1512744 = 0;
        field_1513225 = false;
    LAB_1009e8f66:
        SystemPaths::RegisterPathChangeCallback(this);
        Startup();
    }

    // 0x1009e9210
    auto Js5DiskCache::GetDatabaseRootFolder() {
        auto this_00 = SystemPaths::GetCacheFolder();
        auto result = *this_00 / &field_70320;
        return result;
    }

    // 0x1009e92e0
    Js5DiskCache::~Js5DiskCache() {
        SystemPaths::UnregisterPathChangeCallback(this);
        Shutdown();
        field_1512920.~pair();
        (&field_1512856)->~mutex();
        field_1512832.~vector();
        (&field_1512768)->~mutex();
        (&field_1512336)->~condition_variable();
        (&field_1512272)->~mutex();
        (&field_1512208)->~mutex();
        field_790504.~fixed_list();
        field_70424.~fixed_list();
        field_70376.~thread_specific_ptr();
        field_70320.~basic_string();
        field_67544.~array();
        field_63256.~array();
        field_31632.~array();
        field_8.~array();
    }

    // 0x1009e9580
    void Js5DiskCache::GetDatabaseFilename(int arg1, bool arg2) {
        Js5ArchiveSettings* pJVar3;
        long lVar4;
        char in_CL;
        uint64_t in_register_00000011;
        uint32_t in_register_00000034;
        Filename local_3c0;
        ReturnValue local_160;

        Js5DiskCache* this_00 = (Js5DiskCache*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        GetDatabaseRootFolder(&local_160, this_00);
        auto puVar2 = this_00->field_70304->GetAuthWrapper();
        unsigned int arg1_00 = (unsigned int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (puVar2 != Language::EN) {
            pJVar3 = this_00->field_70296->GetByArchiveID(arg1_00);
            if (pJVar3 != nullptr) {
                pJVar3 = this_00->field_70296->GetByArchiveID(arg1_00);
                if (pJVar3->IsLangSpecific()) {
                    local_3c0 = local_160 / "translate";
                    lVar4 = this_00->field_70304->GetAuthWrapper();
                    local_290 = local_3c0 / (*(char**)(lVar4 + 16));
                    local_160 = local_290;
                    if (!(local_160.Exists())) {
                        local_160.CreateDirectories(nullptr);
                    }
                }
            }
        }
        Filename local_290;
        char* pcVar5 = "";
        if (in_CL != '\0') {
            pcVar5 = "core-";
        }
        local_290.sprintf("%sjs5-%d.jcache", pcVar5,
                          (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) & 4294967295);
        *this = local_160 / &local_290;
    }

    // 0x1009e97e0
    void Js5DiskCache::DeleteOldArchives() {
        unsigned int uVar2;
        uint8_t local_158[304];

        field_70296->GetX();
        unsigned int arg1 = 0;
        do {
            if (field_70296->GetByArchiveID(arg1) == nullptr) {
                GetDatabaseFilename((Js5DiskCache*)local_158, (int)this, (uint8_t)arg1);
                if (local_158->Exists() != '\0') {
                    local_158->RemoveFile(nullptr);
                }
                local_158->~pair();
            }
            arg1 = arg1 + 1;
            uVar2 = field_70296->GetX();
        } while (arg1 <= uVar2);
    }

    // 0x1009e9910
    void Js5DiskCache::StopThreads() {
        unsigned long in_RSI;

        field_70352 = '\x01';
        if ((&field_70368)->operator_cast_to_int() != 0) {
            std::condition_variable::notify_all();
            if (((thread*)field_70408[in_RSI])->joinable() != '\0') {
                std::thread::join();
            }
        }
    }

    // 0x1009e9980
    int Js5DiskCache::GetNextVacuumCandidate() {
        bool cVar1;
        unsigned long uVar2;
        long lVar3;
        long lVar4;
        DatabasePageStatus* databasePageStatus1;
        int* piVar5;
        uint8_t auVar7[12];
        uint8_t auVar8[16];
        unique_lock<std::mutex> local_290;
        unsigned int local_27c;
        fixed_vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus, 67ul> local_278[576];
        long local_38;

        int iVar6 = -1;
        if (field_1512760 == '\0') {
            auVar7 = FrameTime::GetCurrentTimeMS();
            uVar2 = auVar7._0_8_;
            if (field_1512752 <= uVar2) {
                local_290 = std::unique_lock<std::mutex>(field_1512856, auVar7._8_4_);
                cVar1 = local_290.try_lock();
                iVar6 = -1;
                if ((cVar1) && (field_1512752 <= uVar2)) {
                    field_1512752 = uVar2 + 15000;
                    new (local_278)
                        eastl::fixed_vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus, 67ul>();
                    lVar3 = std::array<Js5DiskCache::Database, 67ul>::begin();
                    lVar4 = std::array<Js5DiskCache::Database, 67ul>::end();
                    if (lVar3 != lVar4) {
                        do {
                            if (((*(long*)(lVar3 + 376) != 0) && (*(char*)(lVar3 + 364) == '\0')) &&
                                (*(int*)(lVar3 + 360) != 0)) {
                                local_27c = (unsigned int)(*(int*)(lVar3 + 360) * 100) / *(unsigned int*)(lVar3 + 356);
                                if (4 < local_27c) {
                                    local_278->emplace_back<int&, unsigned int&>(*((lVar3 + 8)), local_27c);
                                }
                            }
                            lVar3 = lVar3 + 472;
                        } while (lVar3 != lVar4);
                    }
                    cVar1 = local_278->empty();
                    if (!cVar1) {
                        databasePageStatus1 = (DatabasePageStatus*)local_278->begin();
                        auVar8 = local_278->end();
                        eastl::sort<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus*,
                                    Js5DiskCache::GetNextVacuumCandidate()::__4>(databasePageStatus1, auVar8._0_8_,
                                                                                 auVar8._8_8_);
                        piVar5 = (int*)local_278->front();
                        lVar3 = field_8[(long)*piVar5];
                        if (*(char*)(lVar3 + 364) != '\0') {
                            LogAssert("!m_databases[entry.archiveID].m_hasBeenVacuumed",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      240, nullptr);
                        }
                        lVar3 = field_8[(long)*piVar5];
                        if (*(int*)(lVar3 + 360) == 0) {
                            LogAssert("m_databases[entry.archiveID].m_freePages > 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      241, nullptr);
                        }
                        iVar6 = *piVar5;
                    } else {
                        field_1512760 = 1;
                        iVar6 = -1;
                    }
                }
            }
        }
        return iVar6;
    }

    // 0x1009e9d80
    void Js5DiskCache::CloseDatabases() {
        Database* pDVar1 = (Database*)std::array<Js5DiskCache::Database, 67ul>::begin();
        Database* pDVar2 = (Database*)std::array<Js5DiskCache::Database, 67ul>::end();
        for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
            if (pDVar1->field_376 != 0) {
                pDVar1->Close();
            }
        }
        pDVar1 = (Database*)std::array<Js5DiskCache::Database, 67ul>::begin();
        pDVar2 = (Database*)std::array<Js5DiskCache::Database, 67ul>::end();
        for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
            if (pDVar1->field_376 != 0) {
                pDVar1->Close();
            }
        }
    }

    // 0x1009e9e30
    uint8_t Js5DiskCache::Database::Close() {
        int arg1;
        unsigned long long uVar12;
        long lVar13;

        Database* this_00 = this;
        if (field_14 != '\0') {
            if (field_15 == '\0') {
                field_15 = '\x01';
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                *(unsigned long long*)&field_16 = uVar12;
            }
            lVar13 = this_thread::GetThreadID();
            if (lVar13 != field_40) {
                while (field_14 != '\0') {
                    this_00 = (Database*)&DAT_00000001;
                    this_thread::Sleep(1);
                }
            }
        }
        uint8_t bVar1 = ClearStatement(this_00, &field_456);
        uint8_t bVar2 = ClearStatement(this_00, &field_464);
        uint8_t bVar3 = ClearStatement(this_00, &field_400);
        uint8_t bVar4 = ClearStatement(this_00, &field_416);
        uint8_t bVar5 = ClearStatement(this_00, &field_440);
        uint8_t bVar6 = ClearStatement(this_00, &field_408);
        uint8_t bVar7 = ClearStatement(this_00, &field_424);
        uint8_t bVar8 = ClearStatement(this_00, &field_432);
        uint8_t bVar9 = ClearStatement(this_00, &field_448);
        uint8_t bVar10 = ClearStatement(this_00, &field_384);
        uint8_t bVar11 = ClearStatement(this_00, &field_392);
        uint8_t bVar14 = 1;
        if (field_376 != 0) {
            arg1 = _jag_sqlite3_close();
            if (arg1 == 0) {
                field_24 = 1;
                field_376 = 0;
                bVar14 = 1;
                lVar13 = field_376;
                goto joined_r0x0001009e9f82;
            }
            HandleSQLError(arg1);
            bVar14 = 0;
        }
        lVar13 = field_376;
    joined_r0x0001009e9f82:
        if (lVar13 == 0) {
            bVar14 = bVar8 & bVar9 & bVar10 & bVar11 & bVar5 & bVar6 & bVar7 & bVar3 & bVar4 & bVar1 & bVar2 & bVar14;
        } else {
            bVar14 = 0;
        }
        return bVar14;
    }

    // 0x1009e9fe0
    void Js5DiskCache::UpdateMissingGroupCount(int arg1, unsigned int arg2) {
        unsigned int* puVar1 = &field_67544[(long)arg1];
        *puVar1 = arg2;
    }

    // 0x1009ea050
    void Js5DiskCache::MoveFromInsertionQueue() {
        fixed_list<float, 1920ul>* this_01;
        uint64_t uVar2;
        QueueRequestItem* queueRequestItem;
        int* piVar3;
        uint64_t in_RCX;
        adopt_lock_t adopt_lock_t;
        adopt_lock_t adopt_lock_t_00;
        ReturnValue local_88;
        ReturnValue local_80;
        ReturnValue local_78;
        unique_lock<std::mutex> local_70;
        ReturnValue local_60;
        lock_guard<std::mutex> local_58;
        ReturnValue local_50;
        fixed_list<float, 1920ul>* local_48;
        unsigned int local_34;

        uint8_t* this_00 = &field_70424;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            std::lock<std::mutex, std::mutex>(field_1512272, field_1512208);
            local_58 = std::lock_guard(field_1512272, adopt_lock_t);
            local_70 = std::unique_lock<std::mutex>(field_1512208, adopt_lock_t_00);
            cVar1 = this_00->empty();
            if (!cVar1) {
                local_50 = this_00->begin();
                local_60 = this_00->end();
                local_48 = (fixed_list<float, 1920ul>*)&field_790504;
                uVar2 = local_50 != local_60;
                local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
                if ((char)uVar2 != '\0') {
                    local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar2 >> 8)) << 8) | (uint8_t)1);
                    do {
                        queueRequestItem = (QueueRequestItem*)*local_50;
                        cVar1 = local_48->full();
                        if (!cVar1) {
                            DecrementCounterForJob(*queueRequestItem, true);
                            IncrementCounterForJob(*queueRequestItem, false);
                            ((QueueRequestItem*)local_48->push_back())->swap(*queueRequestItem);
                            field_70420 = field_70420 + 1;
                            field_70416 = field_70416 - 1;
                        } else {
                            while (true) {
                                local_88 = this_00->begin();
                                piVar3 = (int*)*local_88;
                                if (*piVar3 != 0)
                                    break;
                                this_00->pop_front();
                            }
                            local_34 = 0;
                            if (cVar1)
                                break;
                        }
                        ++local_50;
                        cVar1 = local_50 != local_60;
                    } while (cVar1);
                }
                if (((local_34 & 1) != 0) && (this_00->clear(), field_70416 != 0)) {
                    LogAssert("m_insertQueueSize == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              941, nullptr);
                }
                local_70.unlock();
                this_01 = local_48;
                local_80 = local_48->begin();
                local_78 = this_01->end();
                eastl::insertion_sort<eastl::ListIterator<
                    Js5DiskCache::QueueRequestItem, Js5DiskCache::QueueRequestItem*, Js5DiskCache::QueueRequestItem&>>(
                    &local_80, &local_78);
            }
        }
    }

    // 0x1009ea320
    void Js5DiskCache::IncrementCounterForJob(const Js5DiskCache::QueueRequestItem& queueRequestItem, bool arg2) {
        uint64_t in_register_00000011;

        array<Js5DiskCache::ActionCounter, 67ul>* this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1510600;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1511404;
        }
        int* piVar1 = (int*)(*this_00)[(long)queueRequestItem.field_4];
        switch (queueRequestItem.field_0) {
        case 1:
            break;
        case 2:
        case 4:
            piVar1 = piVar1 + 1;
            break;
        case 3:
            piVar1 = piVar1 + 2;
            break;
        default:
            goto switchD_1009ea369_default;
        }
        *piVar1 = *piVar1 + 1;
    switchD_1009ea369_default:
        if (arg2) {
            piVar1 = &field_1510584[(unsigned long)*(unsigned int*)&queueRequestItem.field_24->field_8];
            *piVar1 = *piVar1 + 1;
        }
    }

    // 0x1009ea400
    void Js5DiskCache::DeleteGroup(int arg1, int arg2) {
        QueueRequestItem* queueRequestItem;

        mutex* mutex = &field_63256[(long)arg1];
        scoped_lock<std::mutex> local_38(*mutex);
        long lVar3 = field_67544[(long)arg1];
        int iVar1 = ((lVar3 + 8))->size();
        if (iVar1 <= arg2) {
            LogAssert(
                "groupID + Js5Constants::NUM_SPECIAL_GROUPS <= (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                462, nullptr);
        }
        uint8_t* puVar4 = (uint8_t*)(*((lVar3 + 8)))[(long)(arg2 + 1)];
        *puVar4 = 3;
        field_1513228 = field_1513228 + 1;
        iVar1 = field_70416;
        int iVar2 = field_70424.max_size();
        if (iVar1 == iVar2) {
            MoveFromInsertionQueue();
        }
        local_38 = std::scoped_lock(field_1512208);
        field_70416 = field_70416 + 1;
        queueRequestItem = (QueueRequestItem*)field_70424.push_back();
        queueRequestItem->field_4 = arg1;
        queueRequestItem->field_8 = arg2;
        queueRequestItem->field_0 = 3;
        queueRequestItem->field_24 = (Pix32*)Priority::LOW;
        queueRequestItem->field_32 = 1;
        IncrementCounterForJob(*queueRequestItem, true);
        lVar3 = FrameTime::GetCurrentTimeMS();
        field_1512728 = lVar3 + 2000;
        lVar3 = FrameTime::GetCurrentTimeMS();
        field_1512736 = lVar3 + 750;
        std::condition_variable::notify_all();
    }

    // 0x1009ea570
    void Js5DiskCache::HandleCrash(const callstack::JagException& jagException, int arg2) {
        uint8_t uVar1;
        Logger* this_00;
        uint64_t extraout_var;
        uint8_t* puVar2;

        unsigned long uVar3 = (unsigned long)(unsigned int)arg2;
        if (arg2 == -1) {
            uVar3 = field_70376.get();
            arg2 = (int)uVar3;
        }
        if ((unsigned int)arg2 < 67) {
            this_00 = logger::default_logger();
            uVar1 = (jagException._vptr->what)(jagException);
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                518, "Crash in Js5DiskCache archive %d:\n%s", uVar3, (((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
            ((Database*)field_8[(long)(int)uVar3])->HandleSQLErrorImpl(11);
            puVar2 = &field_70224[(long)(int)uVar3];
            *puVar2 = 0;
        }
    }

    // 0x1009ea650
    void Js5DiskCache::Database::HandleSQLErrorImpl(int arg1) {
        if (arg1 == 0) {
            LogAssert(
                "rc != 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2292, nullptr);
        }
        auto pLVar3 = logger::default_logger();
        unsigned int uVar1 = field_8;
        uint64_t uVar4 = _jag_sqlite3_errmsg(field_376);
        pLVar3->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp", 2293,
            "SQLError in %d: [err=%d]: %s", (unsigned long)uVar1, arg1, uVar4);
        if (SQLInit::IsDBCorruptionError(arg1) != '\0') {
            pLVar3 = logger::default_logger();
            pLVar3->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2297, "Js5DiskCache corruption in archive %d. Deleting", (unsigned long)field_8);
            field_32 = 1;
        }
    }

    // 0x1009ea730
    void Js5DiskCache::ThreadRunnerWrapper(int arg1) {
        eastl::string local_40((CtorSprintf*)"SQLCache-%d", (char*)(unsigned long)(unsigned int)arg1);
        this_thread::SetThreadName((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        this_thread::SetAffinity(4);
        this_thread::GetThreadName();
        BucketManager::Init(128, 0);
        BucketManager::CreateBucket(4, 256, 4);
        BucketManager::CreateBucket(8, 1024, 8);
        BucketManager::CreateBucket(16, 768, 16);
        BucketManager::CreateBucket(32, 512, 32);
        BucketManager::CreateBucket(48, 256, 16);
        BucketManager::CreateBucket(64, 128, 64);
        BucketManager::CreateBucket(96, 128, 32);
        BucketManager::CreateBucket(128, 256, 64);
        BucketManager::CreateBucket(352, 64, 16);
        BucketManager::CreateBucket(512, 8, 64);
        BucketManager::CreateBucket(1024, 64, 64);
        BucketManager::CreateBucket(2048, 32, 64);
        BucketManager::CreateBucket(4096, 32, 64);
        BucketManager::CreateBucket(4608, 2048, 64);
        BucketManager::CreateBucket(8192, 4, 64);
        BucketManager::CreateBucket(16384, 4, 64);
        BucketManager::CreateBucket(32768, 2, 64);
        BucketManager::CreateBucket(65536, 2, 64);
        bool cVar1 = SQLInit::Initialise();
        if (cVar1) {
            cVar1 = field_70352;
            while (!cVar1) {
                ThreadRunnerSEHWrapper(arg1);
                cVar1 = field_70352;
            }
            if (arg1 == 1) {
                CloseDatabasesSEHWrapper();
            }
            SQLInit::Destroy();
        }
    }

    // 0x1009ea950
    void Js5DiskCache::ThreadRunnerSEHWrapper(int arg1) {

        SignalState local_d8(Js5DiskCacheCrashHandler, this, 18446744073709551615);
        if (_setjmp((int*)local_d8.second()) == 0) {
            ThreadRunner(arg1);
        }
    }

    // 0x1009ea9e0
    void Js5DiskCache::CloseDatabasesSEHWrapper() {

        SignalState local_d0(Js5DiskCacheCrashHandler, this, 18446744073709551615);
        if (_setjmp((int*)local_d0.second()) == 0) {
            CloseDatabases();
        }
    }

    // 0x1009eaa60
    void Js5DiskCacheCrashHandler(const callstack::JagException& jagException, void* arg2, void* arg3) {
        arg2->HandleCrash(jagException, (int)arg3);
        callstack::CrashHandler::DispatchProgramCrash(jagException);
        return 0;
    }

    // 0x1009eaa90
    void Js5DiskCache::ThreadRunner(int arg1) {
        ServiceLoop(arg1);
    }

    // 0x1009eaaa0
    void Js5DiskCache::ServiceLoop(int arg1) {
        uint8_t bVar1;
        unsigned long long uVar2;
        bool bVar3;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>* this_00;
        bool cVar4;
        int iVar5;
        unsigned long long uVar6;
        int* piVar7;
        QueueRequestItem* queueRequestItem;
        char* pcVar8;
        long lVar9;
        Database* this_01;
        long lVar10;
        defer_lock_t in_EDX;
        defer_lock_t defer_lock_t;
        type* arg2;
        long lVar11;
        ReturnValue local_e0;
        ReturnValue local_d8;
        ListIterator<Js5DiskCache::QueueRequestItem, Js5DiskCache::QueueRequestItem const*,
                     Js5DiskCache::QueueRequestItem const&>* local_d0;
        QueueRequestItem local_b8;
        ArchiveInUseGuard local_78;
        ReturnValue local_60;

        unique_lock<std::mutex> local_48(field_1512272, in_EDX);
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>* local_38 =
            (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)&field_790504;
        array<signed char, _67ul>* local_50 = (array<signed char, _67ul>*)&field_70224;
        condition_variable* local_c8 = (condition_variable*)&field_1512336;
        array<Js5DiskCache::Database, 67ul>* local_58 = (array<Js5DiskCache::Database, 67ul>*)&field_8;
        mutex* local_c0 = (mutex*)&field_1512856;
        thread_specific_ptr<render::RenderContext>* local_80 =
            (thread_specific_ptr<render::RenderContext>*)&field_70376;
        int local_64 = arg1;
        do {
            if (field_70352 != '\0')
                break;
            cVar4 = local_38->empty();
            if (((cVar4) || (uVar2 = field_70400, uVar6 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(),
                             uVar2 + 5000 < uVar6)) &&
                (field_1513224 == '\0')) {
                UpdateDiskCacheSize();
                MoveFromInsertionQueue();
            }
            local_48.lock();
            local_78 = ArchiveInUseGuard(*local_50, arg1);
            cVar4 = local_38->empty();
            if (((cVar4) && (field_1512384 == 0)) &&
                ((field_1513226 == 0 || ((field_1512744 == '\0' || (field_1513225 == false)))))) {
                ClearSQLSoftCache();
                local_60._0_4_ = 500;
                local_b8.duration<int>(local_60, arg2);
                local_c8->wait_for<long long, std::ratio<1l, 1000l>>(local_48, local_b8);
            }
            LoadFullArchiveService();
            if (field_70352 == '\0') {
                cVar4 = local_38->empty();
                if (!cVar4) {
                    local_b8 = QueueRequestItem();
                    this_00 = local_38;
                    local_60 = local_38->end();
                    local_e0 = this_00->begin();
                    while (cVar4 = local_e0 != local_60, cVar4) {
                        lVar10 = *local_e0;
                        iVar5 = *(int*)(lVar10 + 4);
                        lVar10 = (*local_58)[(long)iVar5];
                        if (((*(char*)(lVar10 + 33) == '\0') || (piVar7 = (int*)*local_e0, *piVar7 == 4)) &&
                            (cVar4 = local_78.Lock(iVar5), cVar4)) {
                            queueRequestItem = (QueueRequestItem*)*local_e0;
                            local_b8.swap(*queueRequestItem);
                            new (&local_d0) eastl::ListIterator(&local_e0);
                            local_d8 = local_38->erase(local_d0);
                            field_70420 = field_70420 - 1;
                            DecrementCounterForJob(local_b8, false);
                            break;
                        }
                        ++local_e0;
                    }
                    if ((local_b8.field_0 == 0) || (cVar4 = AnythingMoreImportant(local_b8.field_24), !cVar4)) {
                        local_48.unlock();
                        iVar5 = 0;
                        bVar3 = true;
                        if (local_b8.field_0 != 0) {
                            lVar10 = FrameTime::GetCurrentTimeMS();
                            field_1512752 = lVar10 + 15000;
                            pcVar8 = (char*)(*local_50)[(long)local_b8.field_4];
                            if (*pcVar8 != arg1) {
                                LogAssert("m_archivesInUse[qi.m_archive] == threadNumber",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                          "caching/Js5DiskCache.cpp",
                                          1076, nullptr);
                            }
                            ProcessRequest(local_b8);
                            pcVar8 = (char*)(*local_50)[(long)local_b8.field_4];
                            if (*pcVar8 != arg1) {
                                LogAssert("m_archivesInUse[qi.m_archive] == threadNumber",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                          "caching/Js5DiskCache.cpp",
                                          1080, nullptr);
                            }
                        }
                    } else {
                        local_38->push_back(local_b8);
                        field_70420 = field_70420 + 1;
                        local_48.unlock();
                        MoveFromInsertionQueue();
                        iVar5 = 2;
                        bVar3 = false;
                    }
                    if (!bVar3)
                        goto LAB_1009eab3e;
                } else if ((field_1513225 == false) || (field_1512744 == '\0')) {
                    local_48.unlock();
                } else {
                    iVar5 = -1;
                    if (field_1513224 == '\0') {
                        field_1513226 = 0;
                        lVar10 = std::array<Js5DiskCache::Database, 67ul>::begin();
                        iVar5 = -1;
                        lVar9 = std::array<Js5DiskCache::Database, 67ul>::end();
                        if (lVar10 != lVar9) {
                            iVar5 = -1;
                            do {
                                lVar11 = lVar10 + 472;
                                bVar1 = *(uint8_t*)(lVar10 + 13);
                                field_1513226 = field_1513226 | bVar1;
                                if ((((bVar1 != 0) && (*(char*)(lVar10 + 14) == '\0')) &&
                                     (*(int*)(lVar10 + 28) != 0)) &&
                                    (cVar4 = local_78.Lock(*(int*)(lVar10 + 8)), cVar4)) {
                                    iVar5 = *(int*)(lVar10 + 8);
                                    break;
                                }
                                lVar10 = lVar11;
                            } while (lVar11 != lVar9);
                        }
                    }
                    local_48.unlock();
                    arg1 = local_64;
                    if (iVar5 == -1) {
                        iVar5 = GetNextVacuumCandidate();
                        if ((iVar5 != -1) && (cVar4 = local_78.Lock(iVar5), cVar4)) {
                            local_b8 = std::unique_lock<std::mutex>(*local_c0, defer_lock_t);
                            cVar4 = local_b8.try_lock();
                            if (cVar4) {
                                this_01 = (Database*)(*local_58)[(long)iVar5];
                                local_80->reset((int*)(long)(int)this_01->field_8);
                                this_01->Vacuum();
                                lVar10 = FrameTime::GetCurrentTimeMS();
                                field_1512752 = lVar10 + 15000;
                            }
                        }
                    } else {
                        cVar4 = local_78.IsLocked(iVar5);
                        if (!cVar4) {
                            LogAssert("useGuard.IsLocked(doValidation)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      1110, nullptr);
                        }
                        ValidateDatabase(iVar5);
                    }
                }
                iVar5 = 0;
                local_80->reset(18446744073709551615);
            } else {
                iVar5 = 3;
                local_48.unlock();
            }
        LAB_1009eab3e:
        } while (iVar5 != 3);
        std::__atomic_base<int, true>::operator--();
    }

    // 0x1009eb0f0
    void Js5DiskCache::ProcessOpen(Js5DiskCache::Database& database) {
        bool cVar1;
        uint32_t uVar2;
        mutex* mutex;
        long lVar3;
        char* pcVar4;
        char* pcVar5;
        uint32_t* puVar6;
        uint8_t local_168[304];

        database.field_24 = 0;
        uint8_t* this_00 = &database.field_48;
        uint8_t* this_01 = &field_67544;
        do {
            if (field_70352 != '\0')
                goto LAB_1009eb377;
            cVar1 = database.IsOpen();
            if (!cVar1) {
                GetDatabaseFilename((Js5DiskCache*)local_168, (int)this, (uint8_t)database.field_8);
                *this_00 = *local_168;
                local_168->~pair();
            }
            if ((database.field_32 != '\0') && (database.field_28 != 0)) {
                database.field_12 = 0;
                database.field_32 = 0;
                mutex = &field_63256[(long)(int)database.field_8];
                new (local_168) std::scoped_lock(*mutex);
                cVar1 = database.IsOpen();
                if (cVar1) {
                    std::__atomic_base<int, true>::operator--();
                    database.Close();
                    cVar1 = database.IsOpen();
                    if (cVar1) {
                        LogAssert("!slot.IsOpen()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                  "Js5DiskCache.cpp",
                                  663, nullptr);
                    }
                }
                this_00->RemoveFile(nullptr);
                lVar3 = (*this_01)[(long)(int)database.field_8];
                pcVar4 = (char*)((lVar3 + 8))->HeapBeginPtr();
                pcVar5 = (char*)((lVar3 + 8))->end();
                for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
                    if (*pcVar4 == '\x01') {
                        *pcVar4 = '\0';
                    }
                }
                lVar3 = (*this_01)[(long)(int)database.field_8];
                uVar2 = ((lVar3 + 8))->size();
                puVar6 = (uint32_t*)(*this_01)[(long)(int)database.field_8];
                *puVar6 = uVar2;
            }
            cVar1 = database.IsOpen();
            if (cVar1)
                goto LAB_1009eb377;
            database.field_12 = 0;
            cVar1 = this_00->Exists();
            if ((!cVar1) && (database.field_28 == 1)) {
                puVar6 = &field_1512388[(long)(int)database.field_8];
                *puVar6 = 2;
            }
            cVar1 = database.Open();
        } while (!cVar1);
        cVar1 = database.IsOpen();
        if (!cVar1) {
            LogAssert(
                "slot.IsOpen()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                698, nullptr);
        }
        database.field_12 = 1;
        std::__atomic_base<int, true>::operator++();
        field_70392 = 1;
    LAB_1009eb377:
    }

    // 0x1009eb410
    uint64_t Js5DiskCache::Database::Open() {
        uint64_t local_30;

        uint8_t bVar2 = field_48.IsFile();
        uint64_t uVar3 = (&field_48)->operator_cast_to_char_();
        long* plVar1 = &field_376;
        int arg1 = _jag_sqlite3_open(uVar3, plVar1);
        if (arg1 == 0) {
            local_30 = 0;
            arg1 = _jag_sqlite3_exec(*plVar1,
                                     "CREATE TABLE IF NOT EXISTS cache(KEY INTEGER PRIMARY KEY,DATA BLOB,VERSION "
                                     "INTEGER,CRC INTEGER);CREATE TABLE IF NOT EXISTS cache_index(KEY INTEGER PRIMARY "
                                     "KEY,DATA BLOB,VERSION INTEGER,CRC INTEGER);",
                                     0, 0, &local_30);
            if (arg1 == 0) {
                SetProperties((bool)(bVar2 ^ 1));
            } else {
                _jag_sqlite3_close(*plVar1);
                *plVar1 = 0;
                if (arg1 != 0)
                    goto LAB_1009eb48c;
            }
            uVar3 = 1;
        } else {
        LAB_1009eb48c:
            if (arg1 == 1) {
                field_32 = 1;
            }
            HandleSQLError(arg1);
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1009eb4d0
    void Js5DiskCache::ValidateDatabase(int arg1) {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_00;
        uint8_t uVar1;
        char cVar2;
        uint8_t bVar3;
        bool bVar4;
        int iVar5;
        uint32_t uVar6;
        unsigned int arg1_00;
        unsigned int arg2;
        unsigned long uVar7;
        Database* database;
        uint64_t uVar8;
        int* piVar9;
        Js5ArchiveSettings* pJVar10;
        uint64_t extraout_var;
        SideBarData* sideBarData1;
        SideBarData* sideBarData2;
        SideBarData* sideBarData3;
        char* pcVar11;
        mutex* mutex;
        long lVar12;
        unsigned long uVar13;
        char* pcVar14;
        unsigned int* arg1_01;
        unsigned int* arg2_00;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* pvVar15;
        int iVar16;
        unsigned long uVar17;
        unsigned long arg1_03;
        uint64_t local_108;
        Js5ArchiveSettings* local_100;
        int* local_f8;
        Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL> local_f0;
        scoped_lock<std::mutex> local_d8;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* local_d0;
        unsigned int local_c8;
        unsigned int local_c4;
        int local_c0;
        int local_bc;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_b8;
        GeometryBatchInstance* local_b0;
        Priority* local_a8;
        fixed_string<char, 64> local_a0;

        int* arg1_02 = (int*)(long)arg1;
        field_70376.reset(arg1_02);
        if (field_1512744 != '\0') {
            uVar7 = FrameTime::GetCurrentTimeMS();
            if (field_1512728 <= uVar7) {
                database = &field_8[(unsigned long)arg1_02];
                if (database->field_24 != '\0') {
                    ProcessOpen(*database);
                }
                database->field_14 = '\x01';
                database->field_15 = '\0';
                *(uint64_t*)&database->field_16 = 0;
                uVar8 = this_thread::GetThreadID();
                database->field_40 = uVar8;
                SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                if (database->field_24 != '\0') {
                    ProcessOpen(*database);
                }
                piVar9 = &field_1512388[(unsigned long)arg1_02];
                if (*piVar9 == 4) {
                    *(uint16_t*)&database->field_13 = 0;
                } else {
                    pJVar10 = field_70296->GetByArchiveID(arg1);
                    uVar1 = (**(void (**)(...)) & ((Js5Index*)field_70312->_vptr)->field_24)(
                        (Js5Index**)field_70312, (Js5ArchiveSettings*)&local_b0);
                    if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
                        local_108 = 0;
                        local_100 = pJVar10;
                        local_a0 = eastl::fixed_string<char, 64>("SELECT KEY, CRC, VERSION FROM cache");
                        lVar12 = database->field_376;
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        iVar5 = _jag_sqlite3_prepare_v2(lVar12, uVar8, 4294967295, &local_a8, &local_108);
                        if (iVar5 == 0) {
                            if (66 < arg1) {
                                LogAssert("archiveID < (int)m_archivesInCache.size()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                          "caching/Js5DiskCache.cpp",
                                          770, nullptr);
                            }
                            local_f8 = &field_67544[(unsigned long)arg1_02];
                            pvVar15 = (vector<unsigned char,
                                              eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*)(local_f8 + 2);
                            uVar7 = pvVar15->size();
                            local_f0 = Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL>(uVar7);
                            sideBarData1 = (SideBarData*)pvVar15->HeapBeginPtr();
                            local_d0 = pvVar15;
                            sideBarData2 = (SideBarData*)pvVar15->end();
                            sideBarData3 = (SideBarData*)local_f0.data();
                            eastl::copy<char*, char*>(sideBarData1, sideBarData2, sideBarData3);
                            uVar6 = local_b0->GetAnimationLength();
                            local_b8 =
                                (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(((uint64_t)local_b8._4_4_
                                                                                           << 32) |
                                                                                          (uint32_t)uVar6);
                            while ((field_70352 == '\0' && (field_1513224 == '\0' && database->field_15 == '\0'))) {
                                iVar5 = _jag_sqlite3_step(local_a8);
                                if (iVar5 != 100)
                                    break;
                                if (field_1512744 == '\0') {
                                LAB_1009eb97e:
                                    *(uint64_t*)&database->field_16 = 0;
                                    goto LAB_1009eb986;
                                }
                                uVar7 = FrameTime::GetCurrentTimeMS();
                                if (uVar7 < field_1512728)
                                    goto LAB_1009eb97e;
                                arg1_00 = _jag_sqlite3_column_int(local_a8, 0);
                                if ((int)arg1_00 < 0) {
                                    LogAssert("id >= 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/caching/Js5DiskCache.cpp",
                                              792, nullptr);
                                }
                                if ((int)arg1_00 <= (int)local_b8) {
                                    local_c4 = _jag_sqlite3_column_int(local_a8, 1);
                                    local_c0 = _jag_sqlite3_column_int(local_a8, 2);
                                    arg2 = local_b0->GetGroupCRC(arg1_00);
                                    local_bc = local_b0->GetGroupVersion(arg1_00);
                                    pcVar11 = &local_f0[(long)(int)(arg1_00 + 1)];
                                    if (*pcVar11 == '\0') {
                                        cVar2 = local_100->GetDiskEncodeType();
                                        bVar3 = IsCRCValid(local_c4, arg2, (int)cVar2);
                                        pcVar11 = &local_f0[(long)(int)(arg1_00 + 1)];
                                        *pcVar11 = '\x02' - (bVar3 & local_c0 == local_bc);
                                    }
                                }
                            }
                            if (field_70352 == '\0' && database->field_15 == '\0') {
                                mutex = &field_63256[(unsigned long)arg1_02];
                                local_d8 = std::scoped_lock(*mutex);
                                local_b8 =
                                    (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_b0->GetMaterial();
                                pvVar15 = local_d0;
                                lVar12 = local_d0->size();
                                if (lVar12 == 0) {
                                    iVar5 = 0;
                                } else {
                                    iVar5 = 0;
                                    uVar7 = 1;
                                    arg1_03 = 0;
                                    do {
                                        uVar17 = uVar7;
                                        pcVar11 = (char*)(*pvVar15)[arg1_03];
                                        if (*pcVar11 == '\0') {
                                            pcVar14 = &local_f0[arg1_03];
                                            cVar2 = *pcVar14;
                                            if (*pcVar14 == '\0') {
                                                cVar2 = '\x02';
                                            }
                                            *pcVar11 = cVar2;
                                        }
                                        this_00 = local_b8;
                                        iVar16 = (int)uVar17;
                                        if ((iVar16 != 1) && (*pcVar11 == '\x02')) {
                                            local_c8 = iVar16 - 2;
                                            arg1_01 = (unsigned int*)local_b8->data();
                                            arg2_00 = (unsigned int*)this_00->end();
                                            bVar4 = std::binary_search<unsigned int const*, unsigned int>(
                                                arg1_01, arg2_00, local_c8);
                                            iVar5 = iVar5 + (unsigned int)bVar4;
                                        }
                                        pvVar15 = local_d0;
                                        uVar13 = local_d0->size();
                                        uVar7 = (unsigned long)(iVar16 + 1);
                                        arg1_03 = uVar17;
                                    } while (uVar17 < uVar13);
                                }
                                *local_f8 = iVar5;
                                database->field_13 = 0;
                            }
                        LAB_1009eb986:
                        } else {
                            (logger::default_logger())
                                ->Log(false, 2,
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      877, "No index to check against in archive %d", arg1);
                        }
                        _jag_sqlite3_finalize(local_a8);
                        database->Close();
                    }
                    SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                    database->field_14 = '\0';
                }
                database->field_40 = 0;
            }
        }
    }

    // 0x1009ebc40
    void Js5DiskCache::DecrementCounterForJob(const Js5DiskCache::QueueRequestItem& queueRequestItem, bool arg2) {
        uint64_t in_register_00000011;

        array<Js5DiskCache::ActionCounter, 67ul>* this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1510600;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1511404;
        }
        int* piVar1 = (int*)(*this_00)[(long)queueRequestItem.field_4];
        switch (queueRequestItem.field_0) {
        case 1:
            break;
        case 2:
        case 4:
            piVar1 = piVar1 + 1;
            break;
        case 3:
            piVar1 = piVar1 + 2;
            break;
        default:
            goto switchD_1009ebc89_default;
        }
        *piVar1 = *piVar1 - 1;
    switchD_1009ebc89_default:
        if (arg2) {
            piVar1 = &field_1510584[(unsigned long)*(unsigned int*)&queueRequestItem.field_24->field_8];
            *piVar1 = *piVar1 - 1;
        }
    }

    // 0x1009ebda0
    unsigned long Js5DiskCache::AnythingMoreImportant(const Priority* priority) {
        int* piVar1;
        unsigned long arg1;
        uint64_t unaff_R15;

        unsigned long uVar2 = (unsigned long)*(unsigned int*)(priority + 8);
        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        unsigned long uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(uVar2 != 0));
        if (uVar2 != 0) {
            piVar1 = &field_1510584[0];
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
            if (*piVar1 < 1) {
                arg1 = 1;
                do {
                    uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)(arg1 < uVar2));
                    if (uVar2 == arg1)
                        break;
                    piVar1 = &field_1510584[arg1];
                    arg1 = arg1 + 1;
                } while (*piVar1 < 1);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1009ebe20
    void Js5DiskCache::UpdateDiskCacheSize() {
        Database* pDVar1;
        Database* pDVar2;
        long lVar3;
        long lVar5;

        if (field_70392 != '\0') {
            pDVar1 = (Database*)std::array<Js5DiskCache::Database, 67ul>::begin();
            pDVar2 = (Database*)std::array<Js5DiskCache::Database, 67ul>::end();
            if (pDVar1 == pDVar2) {
                lVar5 = 0;
            } else {
                lVar5 = 0;
                do {
                    lVar3 = pDVar1->GetSizeOnDisk();
                    lVar5 = lVar5 + lVar3;
                    pDVar1 = pDVar1 + 1;
                } while (pDVar1 != pDVar2);
            }
            pDVar1 = (Database*)std::array<Js5DiskCache::Database, 67ul>::begin();
            pDVar2 = (Database*)std::array<Js5DiskCache::Database, 67ul>::end();
            for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
                lVar3 = pDVar1->GetSizeOnDisk();
                lVar5 = lVar5 + lVar3;
            }
            m_usageBytes = lVar5;
            field_70400 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            field_70392 = 0;
        }
    }

    // 0x1009ebf40
    void Js5DiskCache::ClearSQLSoftCache() {
        unsigned long uVar1 = FrameTime::GetCurrentTimeMS();
        if (field_1512736 < uVar1) {
            CloseDatabases();
            field_1512736 = field_1512736 + 750;
        }
    }

    // 0x1009ec0b0
    void Js5DiskCache::LoadFullArchiveService() {
        int* piVar1;

        unsigned long arg1 = 0;
        do {
            piVar1 = &field_1512388[arg1];
            if (*piVar1 - 1U < 2) {
                LoadFullArchive((int)arg1);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 67);
    }

    // 0x1009ec200
    void Js5DiskCache::ProcessRequest(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        bool cVar1;
        Database* database_00;

        int* arg1 = (int*)(long)queueRequestItem.field_4;
        field_70376.reset(arg1);
        Database* database = &field_8[(unsigned long)arg1];
        if (database->field_24 != '\0') {
            ProcessOpen(*database);
        }
        if (((queueRequestItem.field_34 != '\0') &&
             (database_00 = (Database*)field_31632[(unsigned long)arg1], database_00->field_24 != '\0')) &&
            (queueRequestItem.field_0 == 1)) {
            ProcessOpen(*database_00);
        }
        if ((queueRequestItem.field_34 != '\0') && (queueRequestItem.field_0 != 1)) {
            LogAssert(
                "!(qi.m_readOnlyRequest && qi.m_requestType != RequestType::REQUEST_READ)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1249, "Error - Tried to write to the read-only archive: %i",
                (unsigned long)(unsigned int)queueRequestItem.field_4);
        }
        switch (queueRequestItem.field_0) {
        case 1:
            ProcessRead(queueRequestItem);
            cVar1 = database->field_32;
            break;
        case 2:
            ProcessWrite(queueRequestItem);
            cVar1 = database->field_32;
            break;
        case 3:
            ProcessDelete(queueRequestItem);
            cVar1 = database->field_32;
            goto joined_r0x0001009ec332;
        case 4:
            ProcessDelayedEnd(queueRequestItem);
            cVar1 = database->field_32;
        joined_r0x0001009ec332:
            if (!cVar1) {
                return;
            }
            goto LAB_1009ec334;
        default:
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1258, nullptr);
        }
        if (cVar1) {
        LAB_1009ec334:
            ProcessOpen(*database);
        }
    }

    // 0x1009ec380
    bool Js5DiskCache::Database::Vacuum() {
        uint64_t local_20 = 0;
        int arg1 = _jag_sqlite3_exec(field_376, "VACUUM; PRAGMA page_count;", SQLcallback, this, &local_20);
        if (HandleSQLError(arg1) != '\0') {
            field_360 = 0;
            field_364 = 1;
        }
        return arg1 == 0;
    }

    // 0x1009ec430
    void Js5DiskCache::ProcessRead(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        array<Js5DiskCache::Database, 67ul>* this_00 = (array<Js5DiskCache::Database, 67ul>*)&field_31632;
        if (queueRequestItem.field_34 == '\0') {
            this_00 = (array<Js5DiskCache::Database, 67ul>*)&field_8;
        }
        Database* database = (Database*)(*this_00)[(long)queueRequestItem.field_4];
        PerformRead(*database, queueRequestItem);
    }

    // 0x1009ec470
    void Js5DiskCache::ProcessWrite(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        uint8_t* this_00;
        long lVar3;
        QueueRequestItem* queueRequestItem_00;
        uint64_t uVar4;
        int iVar5;
        QueueRequestItem local_98;
        ListIterator<Js5DiskCache::QueueRequestItem, Js5DiskCache::QueueRequestItem const*,
                     Js5DiskCache::QueueRequestItem const&>* local_58;
        scoped_lock<std::mutex> local_50;
        list<console::Line>* local_48;
        ReturnValue local_40;
        uint32_t local_34;

        int iVar1 = queueRequestItem.field_4;
        Database* this_01 = &field_8[(long)iVar1];
        this_01->DoBeginTransaction();
        bool cVar2 = PerformWrite(*this_01, queueRequestItem, true);
        if (((cVar2) && (cVar2 = field_70312->IsMembersServer(), !cVar2)) && (field_70352 == '\0')) {
            this_00 = &field_790504;
            cVar2 = this_00->empty();
            if (!cVar2) {
                local_50 = std::scoped_lock(field_1512272);
                local_48 = (list<console::Line>*)this_00;
                cVar2 = this_00->empty();
                if ((!cVar2) && (lVar3 = field_1510600[(long)iVar1], iVar5 = *(int*)(lVar3 + 8) + *(int*)(lVar3 + 4),
                                 iVar5 != 0 && SCARRY4(*(int*)(lVar3 + 8), *(int*)(lVar3 + 4)) == iVar5 < 0)) {
                    local_40 = local_48->begin();
                    while (field_70352 == '\0') {
                        local_98 = local_48->end();
                        cVar2 = local_40 != local_98;
                        if ((!cVar2) || ((queueRequestItem.field_24 == (Pix32*)Priority::LOW &&
                                          (cVar2 = AnythingMoreImportant(queueRequestItem.field_24), cVar2))))
                            break;
                        queueRequestItem_00 = (QueueRequestItem*)*local_40;
                        if ((queueRequestItem_00->field_4 == iVar1) &&
                            ((queueRequestItem_00->field_0 & 4294967294) == 2)) {
                            local_98 = QueueRequestItem();
                            local_98.swap(*queueRequestItem_00);
                            new (&local_58) eastl::ListIterator(&local_40);
                            local_40 = local_48->erase(local_58);
                            field_70420 = field_70420 - 1;
                            DecrementCounterForJob(local_98, false);
                            if (local_98.field_0 == 3) {
                                uVar4 = PerformDelete(*this_01, local_98);
                            } else {
                                if (local_98.field_0 != 2) {
                                    LogAssert("qi2.m_requestType == RequestType::REQUEST_DELETE",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/caching/Js5DiskCache.cpp",
                                              1785, nullptr);
                                }
                                uVar4 = PerformWrite(*this_01, local_98, false);
                            }
                            if ((char)uVar4 == '\0') {
                                iVar5 = 5;
                                local_34 = 0;
                            } else {
                                iVar5 = 0;
                                local_34 =
                                    (uint32_t)(((uint64_t)((int64_t)((unsigned long)uVar4 >> 8)) << 8) | (uint8_t)1);
                            }
                            if ((char)local_34 != '\0')
                                goto LAB_1009ec63f;
                        } else {
                            ++local_40;
                        LAB_1009ec63f:
                            iVar5 = 0;
                        }
                        if (iVar5 != 0)
                            break;
                    }
                }
            }
        }
        cVar2 = this_01->DoEndTransaction();
        if ((cVar2) && (cVar2 = this_01->HandleSQLError(0), cVar2)) {
            PerformInfoStatement(*this_01);
        }
    }

    // 0x1009ec720
    void Js5DiskCache::ProcessDelete(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        Database* database = &field_8[(long)queueRequestItem.field_4];
        PerformDelete(*database, queueRequestItem);
    }

    // 0x1009ec750
    void Js5DiskCache::ProcessDelayedEnd(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        ((Database*)field_8[(long)queueRequestItem.field_4])->DoEndTransaction();
    }

    // 0x1009ec770
    sqlite3_stmt* Js5DiskCache::Database::BuildStatement(const char* str, sqlite3_stmt*& arg2) {
        int arg1;
        uint64_t local_20;

        if (arg2 == nullptr) {
            local_20 = 0;
            arg1 = _jag_sqlite3_prepare_v2(field_376, str, 4294967295, arg2, &local_20);
            if (HandleSQLError(arg1) == '\0') {
                return nullptr;
            }
        }
        return arg2;
    }

    // 0x1009ec7f0
    unsigned long Js5DiskCache::PerformWrite(Js5DiskCache::Database& database,
                                             const Js5DiskCache::QueueRequestItem& queueRequestItem, bool arg3) {
        int iVar4;
        unsigned int arg1;
        uint8_t* puVar8;
        TextureAtlasReference* pTVar9;
        uLong uVar10;
        long lVar11;
        PacketT<Array<unsigned char>>* pPVar12;
        Bytef* source;
        uint64_t uVar13;
        uint64_t in_register_00000009;
        unsigned long uVar14;
        VBOMapper local_a8;
        uLong local_78;
        uint8_t local_70[52];
        long local_38;

        if (database.field_28 == 0) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1290, "Tried to write an entry in read-only archive: %i",
                (unsigned long)(unsigned int)queueRequestItem.field_4);
        }
        uint32_t uVar2 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        array<std::mutex, 67ul>* local_80 = (array<std::mutex, 67ul>*)&field_63256;
        mutex* pmVar5 = (mutex*)(*local_80)[(long)queueRequestItem.field_4];
        QueueResultItem local_f0(*pmVar5);
        uint8_t* puVar1 = &field_67544;
        long lVar6 = (*puVar1)[(long)queueRequestItem.field_4];
        vector<Js5DiskCacheFileStatus>* this_01 = (vector<Js5DiskCacheFileStatus>*)(lVar6 + 8);
        char* pcVar7 = (char*)(*this_01)[(long)queueRequestItem.field_8 + 1];
        if (*pcVar7 != '\x03') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskCache.cpp",
                      1301, "slotState for %d, %d was not STATE_BUSY during PerformWrite", queueRequestItem.field_4,
                      queueRequestItem.field_8);
            puVar8 = (uint8_t*)(*this_01)[(long)queueRequestItem.field_8 + 1];
            *puVar8 = 3;
        }
        local_70._32_8_ = puVar1;
        uint32_t local_3c = uVar2;
        if (queueRequestItem.field_8 == -1) {
            local_38 = database.GetInsertIndexStatement();
            iVar4 = 0;
            if (local_38 == 0)
                goto LAB_1009eca9a;
            local_70._40_4_ = 1;
            local_70[44] = 0;
            local_70._45_3_ = 0;
        } else {
            local_38 = database.GetInsertStatement();
            if (local_38 == 0) {
            LAB_1009eca9a:
                uVar14 = 0;
                goto LAB_1009ecc03;
            }
            iVar4 = _jag_sqlite3_bind_int(local_38, 1, queueRequestItem.field_8);
            local_70._40_4_ = 2;
            local_70[44] = 0;
            local_70._45_3_ = 0;
        }
        local_f0 = QueueResultItem(queueRequestItem);
        local_f0.field_40 = 3;
        char cVar16 = '\x03';
        if (iVar4 == 0) {
            new (local_70) PacketT();
            puVar1 = &queueRequestItem.field_40;
            if (queueRequestItem.field_36 == 1) {
                pTVar9 = (TextureAtlasReference*)(*puVar1).operator->();
                arg1 = pTVar9->GetTextureAtlas();
                uVar10 = _compressBound((long)(int)arg1);
                local_a8 = PacketT(uVar10 + 8);
                *local_70 = local_a8;
                local_78 = (long)(int)arg1;
                local_a8._0_8_ = local_70->GetTextureAtlas();
                local_a8._0_8_ = local_a8._0_8_ - 8;
                local_70->pArrayBuffer("ZLB\x01\x10", 0, 4);
                local_70->p4<int>(arg1);
                lVar6 = local_70->GetDataPtr();
                lVar11 = local_70->size();
                pPVar12 = (PacketT<Array<unsigned char>>*)(*puVar1).operator->();
                source = (Bytef*)pPVar12->GetDataPtr();
                this_01 = (vector<Js5DiskCacheFileStatus>*)(lVar6 + lVar11);
                iVar4 = _compress((Bytef*)this_01, (uLongf*)&local_a8, source, local_78);
                if (iVar4 != 0) {
                    LogAssert("zlibResult == Z_OK",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              1350, nullptr);
                }
                uVar13 = local_70->GetDataPtr();
                lVar6 = local_a8._0_8_ + 8;
            } else {
                pPVar12 = (PacketT<Array<unsigned char>>*)(*puVar1).operator->();
                uVar13 = pPVar12->GetDataPtr();
                pTVar9 = (TextureAtlasReference*)(*puVar1).operator->();
                lVar6 = pTVar9->GetTextureAtlas();
            }
            iVar4 = _jag_sqlite3_bind_blob(local_38, local_70._40_8_, uVar13, lVar6, 18446744073709551615);
            cVar16 = '\x03';
            if (iVar4 == 0) {
                iVar4 = _jag_sqlite3_bind_int(local_38, local_70._40_4_ + 1, queueRequestItem.field_12);
                if (iVar4 == 0) {
                    iVar4 = _jag_sqlite3_bind_int(local_38, local_70._40_4_ + 2,
                                                  queueRequestItem.field_36 + queueRequestItem.field_16);
                    if (iVar4 == 0) {
                        iVar4 = _jag_sqlite3_step(local_38);
                        if (iVar4 == 101) {
                            local_f0.field_40 = 1;
                            cVar16 = '\x01';
                            iVar4 = 0;
                        } else {
                            cVar16 = '\x03';
                        }
                        _jag_sqlite3_reset(local_38);
                    }
                }
            }
        }
        bool cVar3 = SQLInit::IsDBLockedError(iVar4);
        uint64_t uVar15 = (uint64_t)((unsigned long)this_01 >> 8);
        if (!cVar3) {
            uVar14 = (((uint64_t)uVar15 << 8) | (uint8_t)(iVar4 == 0));
            if (iVar4 != 0) {
                cVar16 = '\x02';
                database.HandleSQLError(iVar4);
            }
            if (cVar16 == '\x03') {
                LogAssert("slotState != Js5DiskCacheFileStatus::STATE_BUSY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          1403, nullptr);
            }
            pmVar5 = (mutex*)(*local_80)[(long)queueRequestItem.field_4];
            new (local_70) std::scoped_lock(*pmVar5);
            lVar6 = (*local_70._32_8_)[(long)queueRequestItem.field_4];
            pcVar7 = (char*)(*((lVar6 + 8)))[(long)queueRequestItem.field_8 + 1];
            *pcVar7 = cVar16;
        } else {
            uVar14 = (((uint64_t)uVar15 << 8) | (uint8_t)1);
            RescheduleRequest(queueRequestItem, local_3c._0_1_);
        }
    LAB_1009ecc03:
        return uVar14 & 4294967295;
    }

    // 0x1009eccd0
    void Js5DiskCache::RescheduleRequest(const Js5DiskCache::QueueRequestItem& queueRequestItem, bool arg2) {
        uint32_t in_register_00000011;
        scoped_lock<std::mutex> local_20;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            RescheduleRequestInner(queueRequestItem);
        } else {
            local_20 = std::scoped_lock(field_1512272);
            RescheduleRequestInner(queueRequestItem);
        }
    }

    // 0x1009ecd50
    void SQLcallback(void* arg1, int arg2, char** arg3, char** arg4) {
        char* pcVar1;
        int iVar2;
        long lVar3;
        unsigned long uVar4;

        if (0 < arg2) {
            uVar4 = 0;
            do {
                pcVar1 = arg4[uVar4];
                iVar2 = _strcmp(pcVar1, "page_size");
                if (iVar2 == 0) {
                    lVar3 = _strtol(arg3[uVar4], nullptr, 10);
                    *(int*)((long)arg1 + 352) = (int)lVar3;
                } else {
                    iVar2 = _strcmp(pcVar1, "page_count");
                    if (iVar2 == 0) {
                        lVar3 = _strtol(arg3[uVar4], nullptr, 10);
                        if (*(int*)((long)arg1 + 356) != (int)lVar3) {
                            *(int*)((long)arg1 + 356) = (int)lVar3;
                            *(uint8_t*)(*(long*)arg1 + 70392) = 1;
                        }
                    } else {
                        iVar2 = _strcmp(pcVar1, "freelist_count");
                        if (iVar2 == 0) {
                            lVar3 = _strtol(arg3[uVar4], nullptr, 10);
                            *(int*)((long)arg1 + 360) = (int)lVar3;
                        }
                    }
                }
                uVar4 = uVar4 + 1;
            } while ((unsigned int)arg2 != uVar4);
        }
        return 0;
    }

    // 0x1009ece50
    bool Js5DiskCache::Database::DoBeginTransaction() {
        int arg1;
        bool bVar2;

        if (field_33 != '\0') {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1448, nullptr);
        }
        long lVar1 = GetBeginStatement();
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            arg1 = _jag_sqlite3_step(lVar1);
            if (arg1 == 101) {
                field_33 = 1;
                arg1 = 0;
            }
            HandleSQLError(arg1);
            bVar2 = arg1 == 0;
        }
        return bVar2;
    }

    // 0x1009ecee0
    bool Js5DiskCache::Database::DoEndTransaction() {
        int arg1;
        bool bVar3;

        if (field_33 == '\0') {
            return true;
        }
        long lVar2 = GetEndStatement();
        if (lVar2 == 0) {
        LAB_1009ecf2d:
            bVar3 = false;
        } else {
            arg1 = _jag_sqlite3_step(lVar2);
            if (arg1 == 101) {
                field_33 = 0;
                arg1 = 0;
            } else {
                if (SQLInit::IsDBLockedError(arg1) != '\0') {
                    DelayedEndTransaction(field_0, field_8);
                    goto LAB_1009ecf2d;
                }
            }
            HandleSQLError(arg1);
            bVar3 = arg1 == 0;
        }
        return bVar3;
    }

    // 0x1009ecf70
    void Js5DiskCache::DelayedEndTransaction(int arg1) {
        QueueRequestItem* queueRequestItem;

        scoped_lock<std::mutex> local_20(field_1512272);
        queueRequestItem = (QueueRequestItem*)field_790504.push_front();
        queueRequestItem->field_4 = arg1;
        queueRequestItem->field_0 = 4;
        queueRequestItem->field_32 = 1;
        queueRequestItem->field_24 = (Pix32*)Priority::HIGHEST;
        field_70420 = field_70420 + 1;
        IncrementCounterForJob(*queueRequestItem, false);
    }

    // 0x1009ed040
    void Js5DiskCache::LoadFullArchive(int arg1) {
        vector<Js5DiskCacheFileStatus>* this_00;
        Database* this_01;
        Js5DiskCache* pJVar1;
        uint8_t uVar3;
        int iVar4;
        unsigned int uVar5;
        unsigned int arg1_00;
        unsigned int arg2;
        int iVar6;
        uint64_t extraout_var;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        unsigned int* puVar7;
        unsigned int* puVar8;
        uint8_t* puVar9;
        Priority* pPVar10;
        int* piVar11;
        unsigned char* arg1_01;
        QueueResultItem* queueResultItem1;
        QueueResultItem* queueResultItem2;
        QueueResultItem* queueResultItem3;
        mutex* mutex;
        int* piVar12;
        char* pcVar13;
        unsigned long uVar14;
        vector_map<int, Js5DiskCacheFileStatus> local_f8;
        vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL> local_d0;
        Js5ArchiveSettings* local_b8;
        uint8_t local_b0[72];
        array<FullArchiveRequestStatus, 67ul>* local_68;
        Database* local_60;
        unsigned long local_58;
        GeometryBatchInstance* local_50;
        Priority* local_48;
        Js5DiskCache* local_40;

        auto js5ArchiveSettings = field_70296->GetByArchiveID(arg1);
        bool cVar2 = field_70312->CheckIndexValid(*js5ArchiveSettings);
        if (cVar2) {
            uVar3 = (**(void (**)(...)) & ((Js5Index*)field_70312->_vptr)->field_24)((Js5Index**)field_70312,
                                                                                     (Js5ArchiveSettings*)&local_50);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::READY) {
                uVar14 = (unsigned long)arg1;
                local_60 = &field_8[uVar14];
                if (local_60->field_24 != '\0') {
                    ProcessOpen(*local_60);
                }
                local_58 = uVar14;
                local_40 = this;
                local_f8 = eastl::vector_map<int, Js5DiskCacheFileStatus>();
                this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_50->GetMaterial();
                puVar7 = (unsigned int*)this_02->data();
                puVar8 = (unsigned int*)this_02->end();
                if (puVar7 != puVar8) {
                    do {
                        local_b0._0_4_ = *puVar7;
                        puVar9 = &local_f8[*local_b0];
                        *puVar9 = 2;
                        puVar7 = puVar7 + 1;
                    } while (puVar7 != puVar8);
                }
                local_d0 = eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>();
                iVar4 = local_50->GetEndPosition();
                local_d0.resize((long)iVar4);
                this_01 = local_60;
                if (local_60->field_24 != '\0') {
                    ProcessOpen(local_40, local_60);
                }
                pPVar10 = (Priority*)this_01->GetSelectAllStatement();
                if (pPVar10 == nullptr) {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              1581, "Error loading SQL SelectAllStatement");
                } else {
                    local_b8 = js5ArchiveSettings;
                    local_48 = pPVar10;
                    SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                    local_68 = (array<FullArchiveRequestStatus, 67ul>*)&local_40->field_1512388;
                    while (true) {
                        pPVar10 = local_48;
                        iVar4 = _jag_sqlite3_step(local_48);
                        if (iVar4 != 100)
                            break;
                        iVar4 = _jag_sqlite3_column_int(pPVar10, 1);
                        uVar5 = _jag_sqlite3_column_int(pPVar10, 2);
                        arg1_00 = _jag_sqlite3_column_int(pPVar10, 3);
                        arg2 = local_50->GetGroupCRC(arg1_00);
                        iVar6 = local_50->GetGroupVersion(arg1_00);
                        cVar2 = local_b8->GetDiskEncodeType();
                        cVar2 = IsCRCValid(uVar5, arg2, (int)cVar2);
                        if ((!cVar2) || (iVar4 != iVar6)) {
                            uVar5 = local_50->GetAnimationLength();
                            if (arg1_00 <= uVar5) {
                                if (arg2 + 1 < 2) {
                                    DeleteGroup(local_40, arg1, arg1_00);
                                } else {
                                    local_b0._0_4_ = arg1_00;
                                    puVar9 = &local_f8[*local_b0];
                                    *puVar9 = 2;
                                }
                            }
                        } else {
                            local_b0._0_4_ = arg1_00;
                            puVar9 = &local_f8[*local_b0];
                            *puVar9 = 1;
                            piVar11 = (int*)(*local_68)[local_58];
                            pPVar10 = local_48;
                            if (*piVar11 != 2) {
                                arg1_01 = (unsigned char*)_jag_sqlite3_column_blob(local_48, 0);
                                iVar4 = _jag_sqlite3_column_bytes(pPVar10, 0);
                                new (local_b0) QueueResultItem();
                                local_b0._4_4_ = arg1;
                                local_b0._40_4_ = 1;
                                local_b0._0_4_ = 1;
                                local_b0[32] = 1;
                                local_b0[33] = 1;
                                local_b0._24_8_ = Priority::HIGHEST;
                                local_b0._8_4_ = arg1_00;
                                local_b0._12_4_ = iVar6;
                                local_b0._16_4_ = arg2;
                                cVar2 = UnpackReadData(local_40, arg1_01, iVar4, (QueueResultItem*)local_b0);
                                if (!cVar2) {
                                    LogAssert("success",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/caching/Js5DiskCache.cpp",
                                              1653, nullptr);
                                }
                                ((local_b0 + 48))->end();
                                local_d0.push_back(*local_b0);
                                local_b0->~Js5WorkerRequestMessage();
                            }
                        }
                    }
                    local_60->Close();
                    pJVar1 = local_40;
                    new (local_b0) std::scoped_lock(local_40->field_1512768);
                    queueResultItem1 = (QueueResultItem*)pJVar1->field_1512832.end();
                    queueResultItem2 = (QueueResultItem*)local_d0.HeapBeginPtr();
                    queueResultItem3 = (QueueResultItem*)local_d0.end();
                    pJVar1->field_1512832.insert<Js5DiskCache::QueueResultItem*>(queueResultItem1, queueResultItem2,
                                                                                 queueResultItem3);
                    uVar14 = local_58;
                    mutex = &pJVar1->field_63256[local_58];
                    new (local_b0) std::scoped_lock(*mutex);
                    local_48 = &pJVar1->field_67544[uVar14];
                    piVar11 = (int*)local_f8.HeapBeginPtr();
                    piVar12 = (int*)local_f8.end();
                    iVar4 = 0;
                    if (piVar11 != piVar12) {
                        this_00 = (vector<Js5DiskCacheFileStatus>*)(local_48 + 8);
                        iVar4 = 0;
                        do {
                            pcVar13 = (char*)(*this_00)[(long)*piVar11 + 1];
                            if (*pcVar13 != '\x03') {
                                iVar6 = piVar11[1];
                                *pcVar13 = (char)iVar6;
                                iVar4 = iVar4 + (unsigned int)((char)iVar6 == '\x02');
                            }
                            piVar11 = piVar11 + 2;
                        } while (piVar11 != piVar12);
                    }
                    piVar11 = (int*)(*local_68)[local_58];
                    iVar6 = 0;
                    if (*piVar11 == 2) {
                        iVar6 = iVar4;
                    }
                    *piVar11 = (*piVar11 == 2) + 3;
                    *(int*)local_48 = iVar6;
                }
            }
        }
    }

    // 0x1009ed7a0
    unsigned long Js5DiskCache::UnpackReadData(const unsigned char* arg1, int arg2,
                                               Js5DiskCache::QueueResultItem& queueResultItem) {
        uint32_t uVar1;
        uint32_t uVar2;
        uint8_t uVar3;
        int iVar4;
        unsigned int arg5;
        unsigned int arg4;
        Logger* pLVar5;
        uint64_t uVar6;
        uint64_t extraout_var;
        SideBarData* sideBarData1;
        unsigned long arg1_00;
        SideBarData* sideBarData3;
        uint64_t unaff_R14;
        uint64_t uVar8;
        unsigned long uVar7;
        TextureAtlasReference* this_00;
        bool bVar9;
        uint8_t local_98[32];
        uint8_t local_78[32];
        VBOMapper local_58;

        if (arg1 == nullptr) {
            uVar7 = 0;
        } else if (*(int*)arg1 == 21122138) {
            local_78._0_4_ = *(uint32_t*)(arg1 + 4);
            ReorderToBE<int>((unsigned int*)local_78);
            local_58._0_8_ = (uint64_t)((unsigned int)local_78._0_4_);
            uVar8 = (uint64_t)((unsigned long)unaff_R14 >> 8);
            uVar7 = (((uint64_t)uVar8 << 8) | (uint8_t)1);
            if ((8 < arg2) && (local_78._0_4_ != 0)) {
                queueResultItem.field_48.set_max_size(local_58._0_8_, 4);
                iVar4 = _uncompress((Bytef*)queueResultItem.field_48.data(), (uLongf*)(local_78 + 32), arg1 + 8,
                                    (long)(arg2 - 8));
                uVar7 = (((uint64_t)uVar8 << 8) | (uint8_t)(iVar4 == 0));
                if (iVar4 != 0) {
                    LogAssert("zlibResult == Z_OK",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              2103, nullptr);
                }
                if (local_58._0_8_ != (unsigned long)(unsigned int)local_78._0_4_) {
                    LogAssert("zlibSize == (uLongf)uncompressedSize",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              2104, nullptr);
                }
            }
        } else {
            if (queueResultItem.field_36 != 2) {
                LogAssert("result.m_diskCacheFormat == (uint)Js5DiskCacheFormat::SERVER_COMPRESSED",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          2085, nullptr);
            }
            new ((local_78 + 32)) PacketT((long)arg2);
            ((local_78 + 32))->pArrayBuffer(arg1, 0, (long)arg2);
            this_00 = (TextureAtlasReference*)local_78;
            *this_00 = Js5Compression::Decompress(*((local_78 + 32)), 1);
            if (1 == 1) {
                pLVar5 = logger::default_logger();
                uVar1 = queueResultItem.field_4;
                uVar2 = queueResultItem.field_8;
                *local_98 = ((local_78 + 32))->ToString();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar5->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                            "Js5DiskCache.cpp",
                            2048, "Error decompressing packet: archive=%i, group=%i, packet=%s", uVar1, uVar2, uVar6);
                uVar7 = 0;
            } else {
                field_70296->GetByArchiveID(queueResultItem.field_4);
                uVar3 = (**(void (**)(...)) & ((Js5Index*)field_70312->_vptr)->field_24)((Js5Index**)field_70312,
                                                                                         (Js5ArchiveSettings*)local_98);
                bVar9 = (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::READY;
                uVar7 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)bVar9);
                if (bVar9) {
                    arg5 = local_98._0_8_->GetFileCount(queueResultItem.field_8);
                    if ((int)arg5 < 2) {
                        sideBarData1 = (SideBarData*)this_00->GetDataPtr();
                    } else {
                        arg4 = local_78->GetTextureAtlas();
                        this_00 = (TextureAtlasReference*)(local_78 + 32);
                        Js5DiskFileFormat::DechunkGroupFiles(*this_00, *local_78, 0, arg4, arg5);
                        sideBarData1 = (SideBarData*)this_00->GetDataPtr();
                    }
                    arg1_00 = this_00->GetTextureAtlas();
                    queueResultItem.field_48.set_max_size(arg1_00, 4);
                    sideBarData3 = (SideBarData*)queueResultItem.field_48.data();
                    eastl::copy<char*, char*>(sideBarData1, (SideBarData*)((long)&sideBarData1->field_0 + arg1_00),
                                              sideBarData3);
                } else {
                    pLVar5 = logger::default_logger();
                    pLVar5->Log(
                        false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                        "Js5DiskCache.cpp",
                        2058,
                        "Warning - Attempted to request JS5Index for archive %i, before resource provider was ready!",
                        queueResultItem.field_4);
                }
            }
            ((local_78 + 32))->~VBOMapper();
        }
        return uVar7 & 4294967295;
    }

    // 0x1009edb70
    uint64_t Js5DiskCache::PerformDelete(Js5DiskCache::Database& database,
                                         const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        unsigned int uVar2;
        uint8_t* puVar6;
        unsigned long uVar7;
        uint64_t uVar8;
        scoped_lock<std::mutex> local_38;

        if (database.field_28 == 0) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2145, "Tried to delete an entry in read-only archive: %i",
                (unsigned long)(unsigned int)queueRequestItem.field_4);
        }
        array<std::mutex, 67ul>* local_40 = (array<std::mutex, 67ul>*)&field_63256;
        mutex* pmVar3 = (mutex*)(*local_40)[(long)queueRequestItem.field_4];
        QueueResultItem local_90(*pmVar3);
        long lVar4 = field_67544[(long)queueRequestItem.field_4];
        char* pcVar5 = (char*)(*((lVar4 + 8)))[(long)queueRequestItem.field_8 + 1];
        if (*pcVar5 != '\x03') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskCache.cpp",
                      2156, "slotState for %d, %d was not STATE_BUSY during PerformDelete", queueRequestItem.field_4,
                      queueRequestItem.field_8);
            puVar6 = (uint8_t*)(*((lVar4 + 8)))[(long)queueRequestItem.field_8 + 1];
            *puVar6 = 3;
        }
        if (queueRequestItem.field_8 == -1) {
            lVar4 = database.GetDeleteIndexStatement();
            uVar7 = 0;
            if (lVar4 == 0) {
                return 0;
            }
        } else {
            lVar4 = database.GetDeleteStatement();
            if (lVar4 == 0) {
                return 0;
            }
            uVar2 = _jag_sqlite3_bind_int(lVar4, 1, queueRequestItem.field_8);
            uVar7 = (unsigned long)uVar2;
        }
        local_90 = QueueResultItem(queueRequestItem);
        if ((int)uVar7 == 0) {
            uVar2 = _jag_sqlite3_step(lVar4);
            local_90.field_40 = (unsigned int)(uVar2 != 101) * 2 + 1;
            uVar7 = 0;
            if (uVar2 != 101) {
                uVar7 = (unsigned long)uVar2;
            }
            _jag_sqlite3_reset(lVar4);
        } else {
            local_90.field_40 = 3;
        }
        int arg1 = (int)uVar7;
        bool cVar1 = SQLInit::IsDBLockedError(arg1);
        uint64_t uVar9 = (uint64_t)(uVar7 >> 8);
        if (!cVar1) {
            database.HandleSQLError(arg1);
            pmVar3 = (mutex*)(*local_40)[(long)queueRequestItem.field_4];
            local_38 = std::scoped_lock(*pmVar3);
            lVar4 = field_67544[(long)queueRequestItem.field_4];
            puVar6 = (uint8_t*)(*((lVar4 + 8)))[(long)queueRequestItem.field_8 + 1];
            *puVar6 = 2;
            uVar8 = (((uint64_t)uVar9 << 8) | (uint8_t)(arg1 == 0));
        } else {
            uVar8 = (((uint64_t)uVar9 << 8) | (uint8_t)1);
            RescheduleRequest(queueRequestItem, true);
        }
        return uVar8;
    }

    // 0x1009edde0
    void Js5DiskCache::PerformInfoStatement(Js5DiskCache::Database& database) {
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        long lVar4;
        char* pcVar5;

        if (database.field_368 == 1) {
            lVar4 = database.GetFreeListCountStatement();
        } else {
            if (database.field_368 != 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                "Js5DiskCache.cpp",
                                1834, nullptr);
            }
            lVar4 = database.GetPageCountStatement();
            database.field_368 = 1;
        }
        if (lVar4 != 0) {
            iVar1 = database.field_368 + 1;
            iVar2 = 0;
            if (iVar1 != 2) {
                iVar2 = iVar1;
            }
            database.field_368 = iVar2;
            iVar2 = _jag_sqlite3_step(lVar4);
            if (iVar2 != 101) {
                if (iVar2 == 100) {
                    pcVar5 = (char*)_jag_sqlite3_column_name(lVar4, 0);
                    if (pcVar5 != nullptr) {
                        iVar2 = _strcmp(pcVar5, "page_count");
                        if (iVar2 == 0) {
                            uVar3 = _jag_sqlite3_column_int(lVar4, 0);
                            if (uVar3 != database.field_356) {
                                field_70392 = 1;
                                database.field_356 = uVar3;
                            }
                        } else {
                            iVar2 = _strcmp(pcVar5, "freelist_count");
                            if ((iVar2 == 0) &&
                                (iVar2 = _jag_sqlite3_column_int(lVar4, 0), iVar2 != database.field_360)) {
                                database.field_360 = iVar2;
                            }
                        }
                    }
                    _jag_sqlite3_reset(lVar4);
                } else {
                    database.HandleSQLError(iVar2);
                }
            }
        }
    }

    // 0x1009edf60
    uint64_t Js5DiskCache::PerformRead(Js5DiskCache::Database& database,
                                       const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        char cVar1;
        unsigned int uVar2;
        int iVar3;
        uint8_t* puVar7;
        uint32_t uVar8;
        unsigned long uVar9;
        uint64_t uVar10;
        int local_4c;
        scoped_lock<std::mutex> local_48;

        array<std::mutex, 67ul>* local_60 = (array<std::mutex, 67ul>*)&field_63256;
        mutex* pmVar4 = (mutex*)(*local_60)[(long)queueRequestItem.field_4];
        QueueResultItem local_a8(*pmVar4);
        uint8_t* this_00 = &field_67544;
        long lVar5 = (*this_00)[(long)queueRequestItem.field_4];
        char* pcVar6 = (char*)(*((lVar5 + 8)))[(long)queueRequestItem.field_8 + 1];
        if (*pcVar6 != '\x03') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskCache.cpp",
                      1901, "slotState for %d, %d was not STATE_BUSY during PerformRead", queueRequestItem.field_4,
                      queueRequestItem.field_8);
            puVar7 = (uint8_t*)(*((lVar5 + 8)))[(long)queueRequestItem.field_8 + 1];
            *puVar7 = 3;
        }
        array<Js5DiskCache::ArchiveCacheStatusData, 67ul>* local_58 =
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)this_00;
        if (queueRequestItem.field_8 == -1) {
            lVar5 = database.GetSelectIndexStatement();
            uVar9 = 0;
            if (lVar5 == 0) {
                return 0;
            }
        } else {
            lVar5 = database.GetSelectStatement();
            if (lVar5 == 0) {
                return 0;
            }
            uVar2 = _jag_sqlite3_bind_int(lVar5, 1, queueRequestItem.field_8);
            uVar9 = (unsigned long)uVar2;
        }
        local_a8 = QueueResultItem(queueRequestItem);
        local_a8.field_40 = 3;
        char local_31 = '\x03';
        if ((int)uVar9 != 0)
            goto LAB_1009ee1a2;
        uVar2 = _jag_sqlite3_step(lVar5);
        uVar9 = (unsigned long)uVar2;
        local_31 = '\x02';
        if (uVar2 == 101) {
            uVar8 = 2;
        LAB_1009ee194:
            uVar9 = 0;
            local_a8.field_40 = uVar8;
        } else {
            if (uVar2 == 100) {
                uVar2 = _jag_sqlite3_column_int(lVar5, 2);
                cVar1 = '\x01';
                local_4c = _jag_sqlite3_column_int(lVar5, 1);
                if (queueRequestItem.field_8 != -1) {
                    cVar1 = (char)queueRequestItem.field_36;
                }
                cVar1 = IsCRCValid(uVar2, queueRequestItem.field_16, (int)cVar1);
                if (((!cVar1) || (local_4c != queueRequestItem.field_12)) &&
                    ((queueRequestItem.field_8 != -1 || (queueRequestItem.field_34 == '\0')))) {
                    uVar8 = 2;
                    PerformDelete(database, queueRequestItem);
                } else {
                    iVar3 = _jag_sqlite3_column_bytes(lVar5, 0);
                    cVar1 = UnpackReadData((unsigned char*)_jag_sqlite3_column_blob(lVar5, 0), iVar3, local_a8);
                    if (!cVar1) {
                        uVar8 = 2;
                        PerformDelete(database, queueRequestItem);
                    } else {
                        local_31 = '\x01';
                        uVar8 = 1;
                    }
                }
                goto LAB_1009ee194;
            }
            local_31 = '\x03';
        }
        _jag_sqlite3_reset(lVar5);
    LAB_1009ee1a2:
        iVar3 = (int)uVar9;
        cVar1 = SQLInit::IsDBLockedError(iVar3);
        uint64_t uVar11 = (uint64_t)(uVar9 >> 8);
        if (!cVar1) {
            database.HandleSQLError(iVar3);
            local_48 = std::scoped_lock(field_1512768);
            field_1512832.push_back(local_a8);
            if (((local_a8.field_4 != queueRequestItem.field_4) || (local_a8.field_8 != queueRequestItem.field_8)) ||
                (local_a8.field_0 != queueRequestItem.field_0)) {
                LogAssert("result.m_archive == qi.m_archive && result.m_group == qi.m_group && result.m_requestType == "
                          "qi.m_requestType",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          1995, nullptr);
            }
            uVar10 = (((uint64_t)uVar11 << 8) | (uint8_t)(iVar3 == 0));
            cVar1 = '\x02';
            if (iVar3 == 0) {
                cVar1 = local_31;
            }
            if (cVar1 == '\x03') {
                LogAssert("slotState != Js5DiskCacheFileStatus::STATE_BUSY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          2004, nullptr);
            }
            pmVar4 = (mutex*)(*local_60)[(long)queueRequestItem.field_4];
            local_48 = std::scoped_lock(*pmVar4);
            lVar5 = (*local_58)[(long)queueRequestItem.field_4];
            pcVar6 = (char*)(*((lVar5 + 8)))[(long)queueRequestItem.field_8 + 1];
            *pcVar6 = cVar1;
        } else {
            uVar10 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
            RescheduleRequest(queueRequestItem, true);
        }
        return uVar10;
    }

    // 0x1009ee370
    void Js5DiskCache::RescheduleRequestInner(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        field_70420 = field_70420 + 1;
        field_790504.push_back(queueRequestItem);
        IncrementCounterForJob(queueRequestItem, false);
    }

    // 0x1009ee400
    void Js5DiskCache::Database::SetProperties(bool arg1) {
        fixed_string<char, 512> local_250;
        local_250.append("PRAGMA page_size;PRAGMA page_count;PRAGMA freelist_count;PRAGMA temp_store=MEMORY;PRAGMA "
                         "journal_mode=OFF;PRAGMA synchronous=OFF;PRAGMA auto_vacuum=NONE;");
        if (arg1) {
            local_250.append_sprintf("%s=%u;%s=%u;", "PRAGMA application_id", 1701737810, "PRAGMA user_version", 2);
        } else {
            local_250.append_sprintf("%s;%s;", "PRAGMA application_id", "PRAGMA user_version");
        }
        uint64_t local_258 = 0;
        long lVar1 = field_376;
        uint64_t uVar2 = local_250.begin();
        _jag_sqlite3_exec(lVar1, uVar2, SQLcallback, this, &local_258);
    }

    // 0x1009ee530
    bool Js5DiskCache::Database::ClearStatement(sqlite3_stmt*& arg1) {
        int iVar1;
        bool bVar2;

        if (arg1 == nullptr) {
            bVar2 = true;
        } else {
            iVar1 = _jag_sqlite3_finalize();
            arg1 = nullptr;
            bVar2 = iVar1 == 0;
        }
        return bVar2;
    }

    // 0x1009ee560
    void Js5DiskCache::OnCacheFolderChanged(const Filename& filename1, const Filename& filename2) {
        thread local_28;

        if (!(filename1 != filename2)) {
            LogAssert(
                "_oldPath != _newPath",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2430, nullptr);
        }
        Js5DiskCache* local_30 = this;
        std::thread::thread<Js5DiskCache::OnCacheFolderChanged(Filename const&, Filename const&)::__5, Filename const&,
                            Filename const&, void>(&local_28, (__5*)&local_30, filename1, filename2);
        if (local_28.joinable()) {
            std::thread::detach();
        }
        std::thread::~thread(&local_28);
    }

    // 0x1009ee620
    void Js5DiskCache::OnCacheFolderChangedImpl(const Filename& filename1, const Filename& filename2) {
        long* plVar1;
        uint32_t arg1;
        uint8_t uVar3;
        bool bVar4;
        Logger* pLVar5;
        long lVar6;
        long lVar7;
        unsigned long long uVar8;
        uint32_t* puVar9;
        char* pcVar10;
        ArchiveToMove* archiveToMove;
        Database* this_00;
        int* piVar11;
        uint64_t uVar12;
        unsigned long arg1_00;
        VBOMapper local_5e18;
        mutex* local_5df8;
        uint8_t local_5df0[24];
        array<signed char, _67ul>* local_5dd8;
        XPlotBlender<oldscape::graphics::XPlot_NormalAlpha> local_5dd0;
        char* local_5dc8;
        int* local_5db8;
        uint8_t local_5db0[16];
        ReturnValue local_5da0;
        ReturnValue local_5c70;
        uint8_t local_5b40[312];
        fixed_list<Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove, 67ul>
            local_5a08[22384];
        long local_38;

        auto local_168 = filename1 / &field_70320;
        auto local_298 = filename2 / &field_70320;
        uint8_t* puVar13 = &field_1512920;
        Js5DiskCache* local_5dc0 = this;
        bool cVar2 = *puVar13 != &local_168;
        if (!cVar2) {
            local_5dc0->field_1513224 = 1;
            *puVar13 = local_298;
            puVar13->CreateDirectories(nullptr);
            new (local_5a08) eastl::fixed_list<
                Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove, 67ul>();
            puVar13 = &local_5dc0->field_8;
            lVar6 = std::array<Js5DiskCache::Database, 67ul>::begin();
            local_5df0._16_8_ = puVar13;
            lVar7 = std::array<Js5DiskCache::Database, 67ul>::end();
            if (lVar6 != lVar7) {
                do {
                    if (*(int*)(lVar6 + 8) != -1) {
                        if (*(char*)(lVar6 + 15) == '\0') {
                            *(uint8_t*)(lVar6 + 15) = 1;
                            uVar8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                            *(unsigned long long*)(lVar6 + 16) = uVar8;
                        }
                        puVar9 = (uint32_t*)local_5a08->push_back();
                        *puVar9 = *(uint32_t*)(lVar6 + 8);
                        GetDatabaseFilename((Js5DiskCache*)local_5b40, (int)local_5dc0,
                                            (uint8_t)(*(uint32_t*)(lVar6 + 8)));
                        (*((puVar9 + 2))) = *local_5b40;
                        plVar1 = m_notificationHandler;
                        if (m_notificationHandler != nullptr) {
                            local_5db8 = (int*)((lVar6 + 48))->GetName();
                            pcVar10 = ((puVar9 + 2))->GetName();
                            (**(void (**)(...))*plVar1)((Js5DiskCache*)local_5b40, plVar1, local_5db8, pcVar10);
                            (**(void (**)(...))(*m_notificationHandler + 16))();
                        }
                    }
                    lVar6 = lVar6 + 472;
                } while (lVar6 != lVar7);
            }
            uVar8 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            local_5db0._8_8_ = uVar8 + 10000;
            local_5dd8 = (array<signed char, _67ul>*)&local_5dc0->field_70224;
            local_5df8 = (mutex*)&local_5dc0->field_1512272;
            do {
                cVar2 = local_5a08->empty();
                if (cVar2)
                    break;
                archiveToMove = (ArchiveToMove*)local_5a08->front();
                OnCacheFolderChangedImpl(Filename const&,
                                         Filename const&) new (local_5b40)::ArchiveToMove(*archiveToMove);
                arg1 = local_5b40._0_4_;
                arg1_00 = (unsigned long)(int)local_5b40._0_4_;
                local_5a08->pop_front();
                this_00 = (Database*)(*local_5df0._16_8_)[arg1_00];
                local_5c70 = Filename(&this_00->field_48);
                local_5da0 = Filename((local_5b40 + 8));
                cVar2 = local_5c70 != &local_5da0;
                if (cVar2) {
                    new (local_5df0) ArchiveInUseGuard(*local_5dd8, -1);
                    new (&local_5e18) std::scoped_lock(*local_5df8);
                    cVar2 = local_5df0->Lock(arg1);
                    local_5db8 = (int*)(((uint64_t)local_5db8._1_7_ << 8) | (uint8_t)cVar2);
                    if (!cVar2) {
                    LAB_1009eea50:
                        local_5a08->push_back(*local_5b40);
                        local_5e18 = callstack::Callstack();
                        local_5b40._4_4_ = local_5e18._0_4_;
                    } else {
                        cVar2 = this_00->Close();
                        if (!cVar2)
                            goto LAB_1009eea50;
                        new (local_5db0) callstack::Callstack();
                        cVar2 = local_5c70.Rename(local_5da0, local_5db0);
                        local_5dc8 = (char*)(((uint64_t)local_5dc8._1_7_ << 8) | (uint8_t)cVar2);
                        if (!cVar2) {
                            cVar2 = local_5db0->IsErrorFileExists();
                            if (cVar2) {
                                cVar2 = local_5da0.RemoveFile(local_5db0);
                                if (cVar2) {
                                    uVar3 = local_5c70.Rename(local_5da0, local_5db0);
                                    local_5dc8 = (char*)(((uint64_t)local_5dc8._1_7_ << 8) | (uint8_t)uVar3);
                                }
                            }
                        }
                        if ((char)local_5dc8 == '\0') {
                            local_5b40._4_4_ = local_5db0._0_4_;
                            local_5a08->push_back(*local_5b40);
                        } else {
                            local_5db0._8_8_ = m_notificationHandler;
                            if (m_notificationHandler != nullptr) {
                                local_5dd0.XPlotBlender<int>(0);
                                local_5dc8 = local_5c70.GetName();
                                pcVar10 = local_5da0.GetName();
                                (**(void (**)(...))(*(long*)local_5db0._8_8_ + 8))(&local_5e18, local_5db0._8_8_,
                                                                                   &local_5dd0, local_5dc8, pcVar10);
                                (**(void (**)(...))(*m_notificationHandler + 16))(m_notificationHandler, &local_5e18);
                            }
                            this_00->field_48 = local_5da0;
                            uVar8 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                            local_5db0._8_8_ = uVar8 + 10000;
                        }
                        this_00->Open();
                    }
                    if ((char)local_5db8 == '\0') {
                    } else {
                        pcVar10 = (char*)(*local_5dd8)[arg1_00];
                        if (*pcVar10 != -1) {
                            LogAssert("!okToClose || m_archivesInUse[archiveID] == -1",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      2578, nullptr);
                        }
                        if (((char)local_5db8 != '\0') && (*pcVar10 != '\0')) {
                            LogAssert("!okToClose || m_archivesInUse[archiveID] == 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      2581, nullptr);
                        }
                    }
                }
                pcVar10 = (char*)SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                OnCacheFolderChangedImpl(Filename const&, Filename const&) local_5b40->~ArchiveToMove();
            } while (pcVar10 <= (unsigned long)local_5db0._8_8_);
            cVar2 = local_5a08->empty();
            if (!cVar2) {
                local_5c70 = local_5a08->begin();
                local_5da0 = local_5a08->end();
                bVar4 = (*((ListIterator<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove,
                            (Filename const&)->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove*,
                            (Filename const&)
                                ->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove&>*)&local_5c70)) !=
                        (*((ListIterator<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove,
                            (Filename const&)->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove*,
                            (Filename const&)
                                ->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove&>*)&local_5da0));
                if (bVar4) {
                    do {
                        piVar11 = (int*)eastl::ListIterator<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove,
                            (Filename const&)->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove*,
                            (Filename const&)->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove&>::
                        operator*((
                            ListIterator<Js5DiskCache::OnCacheFolderChangedImpl(Filename const&,
                                                                                Filename const&)::ArchiveToMove,
                                         (Filename const&)->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove*,
                                         (Filename const&)
                                             ->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove&>*)&local_5c70);
                        lVar6 = (*local_5df0._16_8_)[(long)*piVar11];
                        plVar1 = m_notificationHandler;
                        if (m_notificationHandler != nullptr) {
                            local_5db8 = piVar11 + 1;
                            local_5db0._8_8_ = ((lVar6 + 48))->GetName();
                            pcVar10 = ((piVar11 + 2))->GetName();
                            (**(void (**)(...))(*plVar1 + 8))((VBOMapper*)local_5b40, plVar1, local_5db8,
                                                              local_5db0._8_8_, pcVar10);
                            (**(void (**)(...))(*m_notificationHandler + 16))(m_notificationHandler,
                                                                              (VBOMapper*)local_5b40);
                        }
                        pLVar5 = logger::default_logger();
                        pcVar10 = ((lVar6 + 48))->GetName();
                        *local_5b40 = ((piVar11 + 1))->GetErrorString();
                        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar5->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                    "Js5DiskCache.cpp",
                                    2604, "Could not move database %s (%s)", pcVar10, uVar12);
                        eastl::ListIterator<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove,
                            (Filename const&)->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove*,
                            (Filename const&)->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove&>::
                        operator++((
                            ListIterator<Js5DiskCache::OnCacheFolderChangedImpl(Filename const&,
                                                                                Filename const&)::ArchiveToMove,
                                         (Filename const&)->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove*,
                                         (Filename const&)
                                             ->OnCacheFolderChangedImpl(Filename const&)::ArchiveToMove&>*)&local_5c70);
                        bVar4 =
                            (*((ListIterator<
                                Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove,
                                (Filename const&)->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove*,
                                (Filename const&)
                                    ->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove&>*)&local_5c70)) !=
                            (*((ListIterator<
                                Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove,
                                (Filename const&)->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove*,
                                (Filename const&)
                                    ->OnCacheFolderChangedImpl(_jag::Filename const&)::ArchiveToMove&>*)&local_5da0));
                    } while (bVar4);
                }
            }
            local_168.RemoveEmptyDirectory(nullptr);
            local_5dc0->field_1513224 = 0;
        } else {
            pLVar5 = logger::default_logger();
            pLVar5->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2457, "Can\'t move databases as the oldPath does not match our cache location");
        }
    }

    // 0x1009f9710
    Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::ArchiveToMove(
        const ArchiveToMove& archiveToMove) {
        *(uint64_t*)this = *(uint64_t*)archiveToMove;
        new ((field_4 + 4)) Filename((archiveToMove + 8));
    }

    // 0x1009f9730
    Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::~ArchiveToMove() {
        ((field_4 + 4))->~pair();
    }

    // 0x100a02660
    void Js5DiskCache::Startup()::$_3::operator()(int arg1) const {
        ThreadRunnerWrapper(field_0, arg1);
    }

    // 0x100a02a90
    Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus::DatabasePageStatus(int arg1, unsigned int arg2)
        : field_0(arg1), field_4(arg2) {}

    // 0x100a03230
    uint32_t Js5DiskCache::GetNextVacuumCandidate()::$_4::operator()(
        const Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus& databasePageStatus1,
        const Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus& databasePageStatus2) const {
        return databasePageStatus1.field_4 < field_4;
    }

    // 0x100a05970
    void Js5DiskCache::OnCacheFolderChanged(Filename const&,
                                            Filename const&)::$_5::operator()(const Filename& filename1,
                                                                              const Filename& filename2) const {
        Js5DiskCache* this_00 = field_0;
        this_thread::SetThreadName("Js5Cache-Move");
        OnCacheFolderChangedImpl(this_00, filename1, filename2);
    }

    // 0x100a05df0
    Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::ArchiveToMove() {
        new (field_4) callstack::Callstack();
        new ((field_4 + 4)) Filename();
    }

} // namespace jag
