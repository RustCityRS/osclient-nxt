// libs/js5/caching/Js5DiskCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5DiskCache.h"

namespace jag {
    // 0x103bc2160, 8 bytes, __common; zero-initialised
    Js5DiskCache::m_notificationHandler;

    // 0x10017a110: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    Js5DiskCache::ActionCounter::ActionCounter();

    // 0x1001a4060: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    Js5DiskCache::ActionCounter::ActionCounter();

    // 0x1002bb7e0: the linker folded this into oldscape::jagex3::Js5RemoteRequestData::~Js5RemoteRequestData(), which has identical code
    Js5DiskCache::QueueRequestItem::~QueueRequestItem();

    // 0x1002da630: the linker folded this into oldscape::jagex3::Js5RemoteRequestData::~Js5RemoteRequestData(), which has identical code
    Js5DiskCache::QueueRequestItem::~QueueRequestItem();

    // 0x1009e1150, 32 bytes, placed by class name and debug map
    // Js5DiskCache::GetMissingGroupCount(int) const
    undefined4 Js5DiskCache::GetMissingGroupCount(int param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)param_1);
        return *puVar1;
    }

    // 0x1009e1420, 32 bytes, placed by class name and debug map
    // Js5DiskCache::IsValidated(int) const
    bool Js5DiskCache::IsValidated(int param_1) {
        long lVar1;

        lVar1 = std::array<Js5DiskCache::Database, 67ul>::operator[]((array<Js5DiskCache::Database, 67ul>*)&field_8,
                                                                     (long)param_1);
        return *(char*)(lVar1 + 13) == '\0';
    }

    // 0x1009e3a30, 32 bytes, placed by class name
    // Js5DiskCache::Validate(int)
    void Js5DiskCache::Validate(int param_1) {
        long lVar1;

        lVar1 = std::array<Js5DiskCache::Database, 67ul>::operator[]((array<Js5DiskCache::Database, 67ul>*)&field_8,
                                                                     (long)param_1);
        if (*(int*)(lVar1 + 28) != 0) {
            *(undefined1*)(lVar1 + 13) = 1;
        }
    }

    // 0x1009e3fa0, 16 bytes, complete-object constructor, placed by class name
    // Js5DiskCache::Js5DiskCache(Js5ResourceProvider&, eastl::string const&, SystemSettings*, Js5ArchiveSetSettings&): jumps straight to the base-object constructor

    // 0x1009e4080, 160 bytes, placed by class name
    // Js5DiskCache::UpdateIndexSizesForArchives()
    void Js5DiskCache::UpdateIndexSizesForArchives() {
        int iVar1;
        PCMPlayer* this_00;
        undefined4* puVar2;
        int local_34;

        this_00 = (PCMPlayer*)(field_70296, &local_34)->GetStart();
        if (this_00 != (PCMPlayer*)0) {
            do {
                iVar1 = this_00->GetX();
                this_00->AlreadyWritten();
                puVar2 = (undefined4*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                    (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)iVar1);
                *puVar2 = 0;
                eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::resize((ulong)(puVar2 + 2));
                this_00 = (PCMPlayer*)(field_70296, &local_34)->GetNext();
            } while (this_00 != (PCMPlayer*)0);
        }
    }

    // 0x1009e5070, 160 bytes, placed by class name
    // Js5DiskCache::CheckGroup(int, int) const
    int Js5DiskCache::CheckGroup(int param_1, int param_2) {
        int iVar1;
        long lVar2;
        char* pcVar3;

        if (66 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "archiveID < (int)m_archivesInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                396, (char*)0);
        }
        lVar2 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)param_1);
        iVar1 = ((lVar2 + 8))->size();
        if (iVar1 <= param_2 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "groupID < (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                398, (char*)0);
        }
        pcVar3 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar2 + 8), (long)(param_2 + 1));
        return (int)*pcVar3;
    }

    // 0x1009e5630, 288 bytes, placed by class name
    // Js5DiskCache::Service()
    void Js5DiskCache::Service() {
        char cVar1;
        int* piVar2;
        int* piVar3;
        vector local_48[24];
        scoped_lock<std::mutex> local_30[8];

        eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::vector();
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_1512768);
        (&field_1512832, local_48)->swap();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        cVar1 = local_48->empty();
        if (cVar1 == '\0') {
            piVar2 = (int*)local_48->HeapBeginPtr();
            piVar3 = (int*)local_48->end();
            for (; piVar2 != piVar3; piVar2 = piVar2 + 18) {
                if (*piVar2 == 1) {
                    if (piVar2[10] == 1) {
                        (field_70312, piVar2[1], piVar2[2], (Array*)(piVar2 + 12), piVar2[4], piVar2[3],
                         *(Priority**)(piVar2 + 6), SUB41(piVar2[8])->OnGroupLoaded(0), *(bool*)((long)piVar2 + 33),
                         *(bool*)((long)piVar2 + 34));
                    } else {
                        (field_70312, piVar2[1], piVar2[2], *(Priority**)(piVar2 + 6),
                         SUB41(piVar2[8])->OnGroupLoadFailed(0));
                    }
                }
            }
        }
        local_48->~vector();
    }

    // 0x1009e5b60, 448 bytes, placed by class name
    // Js5DiskCache::GetGroup(int, int, Js5Index const*, Js5DiskCacheFormat, Priority const*, bool, bool)
    void Js5DiskCache::GetGroup(uint param_1, uint param_2, Js5Index* param_3, char param_5, Pix8* param_6,
                                char param_7, undefined1 param_8) {
        int iVar1;
        int iVar2;
        uint uVar3;
        mutex* pmVar4;
        long lVar5;
        undefined1* puVar6;
        QueueRequestItem* pQVar7;
        scoped_lock<std::mutex> local_38[8];

        pmVar4 = (mutex*)std::array<std::mutex, 67ul>::operator[]((array<std::mutex, 67ul>*)&field_63256,
                                                                  (long)(int)param_1);
        std::scoped_lock<std::mutex>::scoped_lock(local_38, pmVar4);
        lVar5 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)(int)param_1);
        iVar1 = ((lVar5 + 8))->size();
        if (iVar1 <= (int)param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "groupID + Js5Constants::NUM_SPECIAL_GROUPS <= (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                413, (char*)0);
        }
        puVar6 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar5 + 8), (long)(int)(param_2 + 1));
        *puVar6 = 3;
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        field_1513228 = field_1513228 + 1;
        iVar1 = field_70416;
        iVar2 = eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul, true, eastl::allocator>::max_size();
        if (iVar1 == iVar2) {
            MoveFromInsertionQueue(this);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_1512208);
        field_70416 = field_70416 + 1;
        pQVar7 = (QueueRequestItem*)(&field_70424)->push_back();
        pQVar7->field_4 = param_1;
        pQVar7->field_8 = param_2;
        pQVar7->field_24 = param_6;
        *(char*)&pQVar7->field_32 = param_7;
        uVar3 = param_3->GetGroupCRC(param_2);
        pQVar7->field_16 = uVar3;
        uVar3 = param_3->GetGroupVersion(param_2);
        pQVar7->field_12 = uVar3;
        pQVar7->field_0 = 1;
        pQVar7->field_36 = (int)param_5;
        *(undefined1*)((long)&pQVar7->field_32 + 2) = param_8;
        IncrementCounterForJob(this, pQVar7, true);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        if (param_7 != '\0') {
            lVar5 = FrameTime::GetCurrentTimeMS();
            field_1512728 = lVar5 + 2000;
            lVar5 = FrameTime::GetCurrentTimeMS();
            field_1512736 = lVar5 + 750;
        }
        std::condition_variable::notify_all();
    }

    // 0x1009e6790, 400 bytes, placed by class name
    // Js5DiskCache::ProvideGroup(int, int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&, unsigned int, unsigned int, Js5DiskCacheFormat)
    void Js5DiskCache::ProvideGroup(uint param_1, uint param_2, shared_ptr* param_3, uint param_4, uint param_5,
                                    char param_7) {
        int iVar1;
        int iVar2;
        mutex* pmVar3;
        long lVar4;
        undefined1* puVar5;
        QueueRequestItem* pQVar6;
        scoped_lock<std::mutex> local_38[8];

        pmVar3 = (mutex*)std::array<std::mutex, 67ul>::operator[]((array<std::mutex, 67ul>*)&field_63256,
                                                                  (long)(int)param_1);
        std::scoped_lock<std::mutex>::scoped_lock(local_38, pmVar3);
        lVar4 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)(int)param_1);
        iVar1 = ((lVar4 + 8))->size();
        if (iVar1 <= (int)param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "groupID + Js5Constants::NUM_SPECIAL_GROUPS <= (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                357, (char*)0);
        }
        puVar5 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar4 + 8), (long)(int)(param_2 + 1));
        *puVar5 = 3;
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        field_1513228 = field_1513228 + 1;
        iVar1 = field_70416;
        iVar2 = eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul, true, eastl::allocator>::max_size();
        if (iVar1 == iVar2) {
            MoveFromInsertionQueue(this);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_1512208);
        field_70416 = field_70416 + 1;
        pQVar6 = (QueueRequestItem*)(&field_70424)->push_back();
        pQVar6->field_0 = 2;
        pQVar6->field_4 = param_1;
        pQVar6->field_8 = param_2;
        pQVar6->field_12 = param_5;
        pQVar6->field_16 = param_4;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&pQVar6->field_40, param_3);
        pQVar6->field_24 = (Pix8*)Priority::LOW;
        *(undefined1*)&pQVar6->field_32 = 1;
        pQVar6->field_36 = (int)param_7;
        IncrementCounterForJob(this, pQVar6, true);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        std::condition_variable::notify_all();
    }

    // 0x1009e8600, 112 bytes, placed by class name
    // Js5DiskCache::DeleteCache()
    void Js5DiskCache::DeleteCache() {
        long lVar1;
        long lVar2;

        Shutdown(this);
        lVar1 = (&field_8)->begin();
        lVar2 = (&field_8)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 472) {
            ((lVar1 + 48))->RemoveFile(0);
        }
        Startup(this);
    }

    // 0x1009e8700, 16 bytes, placed by class name
    // Js5DiskCache::Shutdown()
    void Js5DiskCache::Shutdown() {
        StopThreads(this);
    }

    // 0x1009e8710, 1072 bytes, placed by class name
    // Js5DiskCache::Startup()
    void Js5DiskCache::Startup() {
        char cVar1;
        int iVar2;
        int iVar3;
        PCMPlayer* this_00;
        int* piVar4;
        undefined8* puVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined1* puVar8;
        undefined* puVar9;
        thread* this_01;
        ulong uVar10;
        undefined1 local_2b8[20];
        int local_2a4[3];
        thread local_298[304];
        pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int> local_168[304];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar2 = (&field_70368)->operator_cast_to_int();
        if (iVar2 < 1) {
            field_70356 = 0;
            this_00 = (PCMPlayer*)(field_70296, local_2a4)->GetStart();
            if (this_00 != (PCMPlayer*)0) {
                do {
                    iVar2 = this_00->GetX();
                    iVar3 = this_00->AlreadyWritten();
                    uVar10 = (ulong)iVar2;
                    local_2a4[2] = iVar2;
                    piVar4 = (int*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                        (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, uVar10);
                    eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::resize((ulong)(piVar4 + 2));
                    puVar5 = (undefined8*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                        (array<Js5DiskCache::Database, 67ul>*)&field_8, uVar10);
                    *(int*)(puVar5 + 1) = iVar2;
                    *puVar5 = this;
                    iVar2 = this_00->GetMaxLineWidth();
                    *(bool*)(puVar5 + 4) = iVar2 == -1;
                    local_2b8._8_8_ = puVar5;
                    GetDatabaseFilename((Js5DiskCache*)local_168, (int)this, SUB41(local_2a4[2], 0));
                    cVar1 = local_168->Exists();
                    eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>::~pair(local_168);
                    if (cVar1 == '\0') {
                        *piVar4 = iVar3 + 1;
                    } else {
                        GetDatabaseFilename((Js5DiskCache*)local_298, (int)this, SUB41(local_2a4[2], 0));
                        Filename::operator+((Filename*)local_168, (char*)local_298);
                        local_298->~pair();
                        cVar1 = local_168->Exists();
                        if (cVar1 != '\0') {
                            new (local_2b8) callstack::Callstack();
                            local_168->Remove(local_2b8);
                            cVar1 = local_2b8->IsValid();
                            if (cVar1 != '\0') {
                                uVar6 = logger::default_logger();
                                local_298->GetErrorString();
                                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar6, 0, 8,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/js5/caching/Js5DiskCache.cpp",
                                                    108, "Error removing dummy file: %s", uVar7);
                                local_298->~basic_string();
                            }
                            *(undefined1*)(local_2b8._8_8_ + 32) = 1;
                        }
                        puVar5 = (undefined8*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                            (array<Js5DiskCache::Database, 67ul>*)&field_31632, uVar10);
                        *(int*)(puVar5 + 1) = local_2a4[2];
                        *puVar5 = this;
                        *(undefined4*)((long)puVar5 + 28) = 0;
                        *(undefined4*)(local_2b8._8_8_ + 28) = 2;
                        puVar8 =
                            (undefined1*)std::array<bool, 67ul>::operator[]((array<bool, 67ul>*)&field_1512656, uVar10);
                        *puVar8 = 1;
                        eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>::~pair(
                            local_168);
                    }
                    iVar2 = this_00->GetMaxLineWidth();
                    if (iVar2 == -1) {
                        puVar9 = (undefined*)this_00->GetPrefetchPriority();
                        if (puVar9 != Priority::NONE) {
                            /* WARNING: Subroutine does not return */
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
                    this_00 = (PCMPlayer*)(field_70296, local_2a4)->GetNext();
                } while (this_00 != (PCMPlayer*)0);
            }
            field_70352 = '\0';
            GetDatabaseRootFolder((Js5DiskCache*)local_168);
            local_168->CreateDirectories(0);
            DeleteOldArchives(this);
            std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_70368);
            local_2a4[1] = 1;
            local_2b8._0_8_ = this;
            std::thread::thread<Js5DiskCache::Startup()::__3, int, void>(local_298, (__3*)local_2b8, local_2a4 + 1);
            this_01 = (thread*)std::array<std::thread, 1ul>::operator[]((ulong)&field_70408);
            std::thread::operator=(this_01, local_298);
            std::thread::~thread(local_298);
            eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>::~pair(local_168);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009e8bb0, 1296 bytes, base-object constructor, placed by class name
    // Js5DiskCache::Js5DiskCache(Js5ResourceProvider&, eastl::string const&, SystemSettings*, Js5ArchiveSetSettings&)
    void Js5DiskCache::Js5DiskCache(Js5ResourceProvider* param_1, basic_string* param_2, SystemSettings* param_3,
                                    Js5ArchiveSetSettings* param_4) {
        int iVar2;
        signed* psVar3;
        signed* psVar4;
        uint* puVar5;
        uint* puVar6;
        FullArchiveRequestStatus* pFVar7;
        FullArchiveRequestStatus* pFVar8;
        bool* pbVar9;
        bool* pbVar10;
        Filename* this_00;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) SystemPathsCallbackInterface();
        field_0 = &PTR_OnCacheFolderChanged_100f1cd08;
        new (&field_8) std::array<Js5DiskCache::Database, 67ul>();
        new (&field_31632) std::array<Js5DiskCache::Database, 67ul>();
        new (&field_63256) std::array<std::mutex, 67ul>();
        new (&field_67544) std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>();
        field_70272 = 0;
        field_70280 = 0;
        field_70256 = 0;
        field_70264 = 0;
        field_70240 = 0;
        field_70248 = 0;
        field_70224 = 0;
        field_70232 = 0;
        *(undefined4*)((long)&field_70280 + 7) = 0;
        field_70296 = param_4;
        field_70304 = param_3;
        field_70312 = param_1;
        new (&field_70320, param_2) eastl::string();
        field_70352 = '\0';
        field_70356 = 0;
        field_70364 = 1;
        new (&field_70376, Js5DiskCache(Js5ResourceProvider&) thread_specific_ptr<int>(
                               eastl::stringconst&, SystemSettings*, Js5ArchiveSetSettings&)::$_2::__invoke);
        m_usageBytes = 0;
        field_70392 = 1;
        field_70400 = 0;
        new (&field_70408) std::array<std::thread, 1ul>();
        field_70416 = 0;
        field_70420 = 0;
        new (&field_70424) eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul, true, eastl::allocator>();
        new (&field_790504) eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul, true, eastl::allocator>();
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
        eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::vector();
        new (&field_1512856) std::mutex();
        new (field_1512920) Filename();
        field_1513224 = 0;
        field_1513228 = 0;
        field_1513225 = true;
        field_1513226 = 1;
        psVar3 = (signed*)(&field_70224)->begin();
        psVar4 = (signed*)(&field_70224)->end();
        local_168[0]._0_4_ = local_168[0]._0_4_ & 4294967040;
        eastl::fill(psVar3, psVar4, (signed*)local_168);
        puVar5 = (uint*)(&field_1510584)->begin();
        puVar6 = (uint*)(&field_1510584)->end();
        eastl::fill<unsigned int>(puVar5, puVar6, 0);
        pFVar7 = (FullArchiveRequestStatus*)(&field_1512388)->begin();
        pFVar8 = (FullArchiveRequestStatus*)(&field_1512388)->end();
        local_168[0]._0_4_ = 0;
        eastl::fill<FullArchiveRequestStatus*, FullArchiveRequestStatus>(pFVar7, pFVar8,
                                                                         (FullArchiveRequestStatus*)local_168);
        pbVar9 = (bool*)(&field_1512656)->begin();
        pbVar10 = (bool*)(&field_1512656)->end();
        local_168[0]._0_4_ = local_168[0]._0_4_ & 4294967040;
        eastl::fill<bool*, bool>(pbVar9, pbVar10, (bool*)local_168);
        iVar2 = (int)pbVar10;
        std::atomic<int>::operator=((atomic<int>*)&field_70368, iVar2);
        std::atomic<int>::operator=((atomic<int>*)&field_70360, iVar2);
        GetDatabaseRootFolder((Js5DiskCache*)local_168);
        Filename::operator=((Filename*)field_1512920, local_168);
        this_00 = local_168;
        this_00->~pair();
        field_1512752 = FrameTime::GetCurrentTimeMS() + 15000;
        iVar2 = this_00->GetInstanceNumber();
        field_70364 = (uint)(iVar2 == 0);
        if (iVar2 == 0) {
            if (param_1->IsMembersServer() == '\0')
                goto LAB_1009e8f66;
        }
        field_1512760 = 1;
        field_1512744 = 0;
        field_1513225 = false;
    LAB_1009e8f66:
        SystemPaths::RegisterPathChangeCallback((SystemPathsCallbackInterface*)this);
        Startup(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009e9210, 48 bytes, placed by class name
    // Js5DiskCache::GetDatabaseRootFolder()
    Js5DiskCache* Js5DiskCache::GetDatabaseRootFolder() {
        Filename* this_00;
        long in_RSI;

        this_00 = (Filename*)GetCacheFolder();
        Filename::operator/((Filename*)this, this_00, (fixed_string*)(in_RSI + 70320));
        return this;
    }

    // 0x1009e92e0, 448 bytes, base-object destructor, placed by class name
    // Js5DiskCache::~Js5DiskCache()
    void Js5DiskCache::~Js5DiskCache() {
        field_0 = &PTR_OnCacheFolderChanged_100f1cd08;
        SystemPaths::UnregisterPathChangeCallback((SystemPathsCallbackInterface*)this);
        Shutdown(this);
        field_1512920->~pair();
        (&field_1512856)->~mutex();
        (&field_1512832)->~vector();
        (&field_1512768)->~mutex();
        (&field_1512336)->~condition_variable();
        (&field_1512272)->~mutex();
        (&field_1512208)->~mutex();
        (&field_790504)->~fixed_list();
        (&field_70424)->~fixed_list();
        (&field_70408)->~array();
        (&field_70376)->~thread_specific_ptr();
        (&field_70320)->~basic_string();
        (&field_67544)->~array();
        (&field_63256)->~array();
        (&field_31632)->~array();
        (&field_8)->~array();
    }

    // 0x1009e94d0, 16 bytes, complete-object destructor, placed by class name
    // Js5DiskCache::~Js5DiskCache(): jumps straight to the base-object destructor

    // 0x1009e94e0, 32 bytes, deleting destructor, placed by class name
    // Js5DiskCache::~Js5DiskCache()
    void Js5DiskCache::~Js5DiskCache() {
        ~Js5DiskCache(this);
        operator_delete(this);
    }

    // 0x1009e9580, 512 bytes, placed by class name
    // Js5DiskCache::GetDatabaseFilename(int, bool)
    void Js5DiskCache::GetDatabaseFilename(int param_1, bool param_2) {
        char cVar1;
        undefined* puVar2;
        long lVar3;
        Js5ArchiveSettings* this_00;
        char in_CL;
        undefined7 in_register_00000011;
        char* pcVar4;
        undefined4 in_register_00000034;
        long lVar5;
        uint uVar6;
        Filename local_3c0[19];
        Filename local_290[19];
        Filename local_160[19];
        undefined8 local_30;

        lVar5 = CONCAT44(in_register_00000034, param_1);
        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        GetDatabaseRootFolder((Js5DiskCache*)local_160);
        puVar2 = (undefined*)(*(LoginManager**)(lVar5 + 70304))->GetAuthWrapper();
        uVar6 = (uint)CONCAT71(in_register_00000011, param_2);
        if (puVar2 != Language::EN) {
            lVar3 = (*(Js5ArchiveSetSettings**)(lVar5 + 70296))->GetByArchiveID(uVar6);
            if (lVar3 != 0) {
                this_00 = (Js5ArchiveSettings*)(*(Js5ArchiveSetSettings**)(lVar5 + 70296))->GetByArchiveID(uVar6);
                cVar1 = this_00->IsLangSpecific();
                if (cVar1 != '\0') {
                    Filename::operator/(local_3c0, (char*)local_160);
                    (*(LoginManager**)(lVar5 + 70304))->GetAuthWrapper();
                    Filename::operator/(local_290, (char*)local_3c0);
                    Filename::operator=(local_160, local_290);
                    local_290->~pair();
                    local_3c0->~pair();
                    cVar1 = local_160->Exists();
                    if (cVar1 == '\0') {
                        local_160->CreateDirectories(0);
                    }
                }
            }
        }
        new (local_290) eastl::fixed_string<char, 64, true, eastl::allocator>();
        pcVar4 = "";
        if (in_CL != '\0') {
            pcVar4 = "core-";
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_290, "%sjs5-%d.jcache", pcVar4, CONCAT71(in_register_00000011, param_2) & 4294967295);
        Filename::operator/((Filename*)this, local_160, (fixed_string*)local_290);
        /* WARNING: Subroutine does not return */
        local_290->~fixed_string();
    }

    // 0x1009e97e0, 208 bytes, placed by class name
    // Js5DiskCache::DeleteOldArchives()
    void Js5DiskCache::DeleteOldArchives() {
        uint uVar2;
        uint uVar4;
        undefined1 local_158[304];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_70296->GetX();
        uVar4 = 0;
        do {
            if ((field_70296, uVar4)->GetByArchiveID() == 0) {
                GetDatabaseFilename((Js5DiskCache*)local_158, (int)this, SUB41(uVar4, 0));
                if (local_158->Exists() != '\0') {
                    local_158->RemoveFile(0);
                }
                local_158->~pair();
            }
            uVar4 = uVar4 + 1;
            uVar2 = field_70296->GetX();
        } while (uVar4 <= uVar2);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009e9910, 96 bytes, placed by class name
    // Js5DiskCache::StopThreads()
    void Js5DiskCache::StopThreads() {
        thread* this_00;

        field_70352 = '\x01';
        if ((&field_70368)->operator_cast_to_int() != 0) {
            std::condition_variable::notify_all();
            this_00 = (thread*)std::array<std::thread, 1ul>::operator[]((ulong)&field_70408);
            if (std::thread::joinable(this_00) != '\0') {
                std::thread::join();
            }
        }
    }

    // 0x1009e9980, 592 bytes, placed by class name
    // Js5DiskCache::GetNextVacuumCandidate()
    int Js5DiskCache::GetNextVacuumCandidate() {
        undefined1* this_00;
        char cVar1;
        ulong uVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        int* piVar7;
        int iVar8;
        unique_lock<std::mutex> local_290[20];
        uint local_27c;
        fixed_vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus, 67ul, true, eastl::allocator>
            local_278[576];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar8 = -1;
        if (field_1512760 == '\0') {
            uVar2 = FrameTime::GetCurrentTimeMS();
            if (field_1512752 <= uVar2) {
                std::unique_lock<std::mutex>::unique_lock(local_290, &field_1512856);
                cVar1 = std::unique_lock<std::mutex>::try_lock(local_290);
                iVar8 = -1;
                if ((cVar1 != '\0') && (field_1512752 <= uVar2)) {
                    field_1512752 = uVar2 + 15000;
                    eastl::fixed_vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus, 67ul, true,
                                        eastl::allocator>::fixed_vector(local_278);
                    this_00 = &field_8;
                    lVar3 = this_00->begin();
                    lVar4 = this_00->end();
                    if (lVar3 != lVar4) {
                        do {
                            if (((*(long*)(lVar3 + 376) != 0) && (*(char*)(lVar3 + 364) == '\0')) &&
                                (*(int*)(lVar3 + 360) != 0)) {
                                local_27c = (uint)(*(int*)(lVar3 + 360) * 100) / *(uint*)(lVar3 + 356);
                                if (4 < local_27c) {
                                    eastl::vector<
                                        Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                        eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>::
                                        emplace_back<int&, unsigned int&>(
                                            (vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                                    eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true,
                                                                                  eastl::allocator>>*)local_278,
                                            (int*)(lVar3 + 8), &local_27c);
                                }
                            }
                            lVar3 = lVar3 + 472;
                        } while (lVar3 != lVar4);
                    }
                    cVar1 = eastl::vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                          eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>::
                        empty((vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                      eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>*)
                                  local_278);
                    if (cVar1 == '\0') {
                        uVar5 =
                            eastl::vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                          eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>::
                                begin((
                                    vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                           eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>*)
                                          local_278);
                        uVar6 =
                            eastl::vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                          eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>::
                                end((
                                    vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                           eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>*)
                                        local_278);
                        eastl::sort<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus*,
                                    Js5DiskCache::GetNextVacuumCandidate()::__4>(uVar5, uVar6);
                        piVar7 = (int*)
                            eastl::vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                          eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>::
                                front((
                                    vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus,
                                           eastl::fixed_vector_allocator<8ul, 67ul, 4ul, 0ul, true, eastl::allocator>>*)
                                          local_278);
                        lVar3 = std::array<Js5DiskCache::Database, 67ul>::operator[](
                            (array<Js5DiskCache::Database, 67ul>*)this_00, (long)*piVar7);
                        if (*(char*)(lVar3 + 364) != '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("!m_databases[entry.archiveID].m_hasBeenVacuumed",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      240, (char*)0);
                        }
                        lVar3 = std::array<Js5DiskCache::Database, 67ul>::operator[](
                            (array<Js5DiskCache::Database, 67ul>*)this_00, (long)*piVar7);
                        if (*(int*)(lVar3 + 360) == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_databases[entry.archiveID].m_freePages > 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      241, (char*)0);
                        }
                        iVar8 = *piVar7;
                    } else {
                        field_1512760 = 1;
                        iVar8 = -1;
                    }
                    eastl::fixed_vector<Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus, 67ul, true,
                                        eastl::allocator>::~fixed_vector(local_278);
                }
                std::unique_lock<std::mutex>::~unique_lock(local_290);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar8;
    }

    // 0x1009e9d80, 176 bytes, placed by class name
    // Js5DiskCache::CloseDatabases()
    void Js5DiskCache::CloseDatabases() {
        Database* pDVar1;
        Database* pDVar2;

        pDVar1 = (Database*)(&field_8)->begin();
        pDVar2 = (Database*)(&field_8)->end();
        for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
            if (pDVar1->field_376 != 0) {
                pDVar1->Close();
            }
        }
        pDVar1 = (Database*)(&field_31632)->begin();
        pDVar2 = (Database*)(&field_31632)->end();
        for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
            if (pDVar1->field_376 != 0) {
                pDVar1->Close();
            }
        }
    }

    // 0x1009e9e30, 400 bytes, placed by class name
    // Js5DiskCache::Database::Close()
    byte Js5DiskCache::Database::Close() {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        byte bVar7;
        byte bVar8;
        byte bVar9;
        byte bVar10;
        byte bVar11;
        int iVar12;
        ulonglong uVar13;
        long lVar14;
        Database* this_00;
        byte bVar15;

        this_00 = this;
        if (field_14 != '\0') {
            if (field_15 == '\0') {
                field_15 = '\x01';
                uVar13 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
                *(ulonglong*)&field_16 = uVar13;
            }
            lVar14 = this_thread::GetThreadID();
            if (lVar14 != field_40) {
                while (field_14 != '\0') {
                    this_00 = (Database*)&DAT_00000001;
                    this_thread::Sleep(1);
                }
            }
        }
        bVar1 = ClearStatement(this_00, &field_456);
        bVar2 = ClearStatement(this_00, &field_464);
        bVar3 = ClearStatement(this_00, &field_400);
        bVar4 = ClearStatement(this_00, &field_416);
        bVar5 = ClearStatement(this_00, &field_440);
        bVar6 = ClearStatement(this_00, &field_408);
        bVar7 = ClearStatement(this_00, &field_424);
        bVar8 = ClearStatement(this_00, &field_432);
        bVar9 = ClearStatement(this_00, &field_448);
        bVar10 = ClearStatement(this_00, &field_384);
        bVar11 = ClearStatement(this_00, &field_392);
        bVar15 = 1;
        if (field_376 != 0) {
            iVar12 = _jag_sqlite3_close();
            if (iVar12 == 0) {
                field_24 = 1;
                field_376 = 0;
                bVar15 = 1;
                lVar14 = field_376;
                goto joined_r0x0001009e9f82;
            }
            HandleSQLError(this, iVar12);
            bVar15 = 0;
        }
        lVar14 = field_376;
    joined_r0x0001009e9f82:
        if (lVar14 == 0) {
            bVar15 = bVar8 & bVar9 & bVar10 & bVar11 & bVar5 & bVar6 & bVar7 & bVar3 & bVar4 & bVar1 & bVar2 & bVar15;
        } else {
            bVar15 = 0;
        }
        return bVar15;
    }

    // 0x1009e9fe0, 32 bytes, placed by class name
    // Js5DiskCache::UpdateMissingGroupCount(int, unsigned int)
    void Js5DiskCache::UpdateMissingGroupCount(int param_1, uint param_2) {
        uint* puVar1;

        puVar1 = (uint*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)param_1);
        *puVar1 = param_2;
    }

    // 0x1009ea050, 576 bytes, placed by class name
    // Js5DiskCache::MoveFromInsertionQueue()
    /* WARNING: Removing unreachable block (ram,4305363372) */
    /* Js5DiskCache::MoveFromInsertionQueue() */

    void Js5DiskCache::MoveFromInsertionQueue() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        undefined7 extraout_var;
        QueueRequestItem* pQVar3;
        int* piVar4;
        QueueRequestItem* this_02;
        undefined8 in_RCX;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_88[8];
        list<console::Line, eastl::allocator> local_80[8];
        list<console::Line, eastl::allocator> local_78[8];
        unique_lock<std::mutex> local_70[16];
        list<console::Line, eastl::allocator> local_60[8];
        lock_guard<std::mutex> local_58[8];
        list<console::Line, eastl::allocator> local_50[8];
        fixed_list<float, 1920ul, true, eastl::allocator>* local_48;
        uint local_34;

        this_00 = &field_70424;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            std::lock<std::mutex, std::mutex>((mutex*)&field_1512272, (mutex*)&field_1512208);
            std::lock_guard<std::mutex>::lock_guard(local_58, &field_1512272);
            std::unique_lock<std::mutex>::unique_lock(local_70, &field_1512208);
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                eastl::list<console::Line, eastl::allocator>::begin(local_50);
                eastl::list<console::Line, eastl::allocator>::end(local_60);
                local_48 = (fixed_list<float, 1920ul, true, eastl::allocator>*)&field_790504;
                bVar2 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_60, extraout_RDX);
                local_34 = (uint)CONCAT71((int7)((ulong)in_RCX >> 8), 1);
                if (bVar2) {
                    local_34 = (uint)CONCAT71(extraout_var, 1);
                    do {
                        pQVar3 = (QueueRequestItem*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_50);
                        cVar1 = eastl::fixed_list<float, 1920ul, true, eastl::allocator>::full(local_48);
                        if (cVar1 == '\0') {
                            DecrementCounterForJob((Js5DiskCache*)this, pQVar3, true);
                            IncrementCounterForJob((Js5DiskCache*)this, pQVar3, false);
                            this_02 = (QueueRequestItem*)local_48->push_back();
                            this_02->swap(pQVar3);
                            ((Js5DiskCache*)this)->field_70420 = ((Js5DiskCache*)this)->field_70420 + 1;
                            ((Js5DiskCache*)this)->field_70416 = ((Js5DiskCache*)this)->field_70416 + -1;
                        } else {
                            while (true) {
                                eastl::list<console::Line, eastl::allocator>::begin(local_88);
                                piVar4 =
                                    (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_88);
                                if (*piVar4 != 0)
                                    break;
                                this_00->pop_front();
                            }
                            local_34 = 0;
                            if (cVar1 != '\0')
                                break;
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_50);
                        bVar2 =
                            eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_60, extraout_RDX_00);
                    } while (bVar2);
                }
                if (((local_34 & 1) != 0) && (this_00->clear(), ((Js5DiskCache*)this)->field_70416 != 0)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_insertQueueSize == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              941, (char*)0);
                }
                std::unique_lock<std::mutex>::unlock(local_70);
                eastl::list<console::Line, eastl::allocator>::begin(local_80);
                eastl::list<console::Line, eastl::allocator>::end(local_78);
                eastl::insertion_sort<eastl::ListIterator<
                    Js5DiskCache::QueueRequestItem, Js5DiskCache::QueueRequestItem*, Js5DiskCache::QueueRequestItem&>>(
                    local_80, local_78);
            }
            std::unique_lock<std::mutex>::~unique_lock(local_70);
            local_58->~lock_guard();
        }
    }

    // 0x1009ea320, 160 bytes, placed by class name
    // Js5DiskCache::IncrementCounterForJob(Js5DiskCache::QueueRequestItem const&, bool)
    void Js5DiskCache::IncrementCounterForJob(QueueRequestItem* param_1, bool param_2) {
        int* piVar1;
        undefined7 in_register_00000011;
        array<Js5DiskCache::ActionCounter, 67ul>* this_00;

        this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1510600;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1511404;
        }
        piVar1 = (int*)std::array<Js5DiskCache::ActionCounter, 67ul>::operator[](this_00, (long)(int)param_1->field_4);
        switch (param_1->field_0) {
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
        if (param_2) {
            piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&field_1510584,
                                                            (ulong)(uint)param_1->field_24->field_8);
            *piVar1 = *piVar1 + 1;
        }
    }

    // 0x1009ea400, 368 bytes, placed by class name
    // Js5DiskCache::DeleteGroup(int, int)
    void Js5DiskCache::DeleteGroup(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        mutex* pmVar3;
        long lVar4;
        undefined1* puVar5;
        QueueRequestItem* pQVar6;
        scoped_lock<std::mutex> local_38[8];

        pmVar3 =
            (mutex*)std::array<std::mutex, 67ul>::operator[]((array<std::mutex, 67ul>*)&field_63256, (long)param_1);
        std::scoped_lock<std::mutex>::scoped_lock(local_38, pmVar3);
        lVar4 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)param_1);
        iVar1 = ((lVar4 + 8))->size();
        if (iVar1 <= param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "groupID + Js5Constants::NUM_SPECIAL_GROUPS <= (int)groupInCache.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                462, (char*)0);
        }
        puVar5 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar4 + 8), (long)(param_2 + 1));
        *puVar5 = 3;
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        field_1513228 = field_1513228 + 1;
        iVar1 = field_70416;
        iVar2 = eastl::fixed_list<Js5DiskCache::QueueRequestItem, 9999ul, true, eastl::allocator>::max_size();
        if (iVar1 == iVar2) {
            MoveFromInsertionQueue(this);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_1512208);
        field_70416 = field_70416 + 1;
        pQVar6 = (QueueRequestItem*)(&field_70424)->push_back();
        pQVar6->field_4 = param_1;
        pQVar6->field_8 = param_2;
        pQVar6->field_0 = 3;
        pQVar6->field_24 = (Pix8*)Priority::LOW;
        *(undefined1*)&pQVar6->field_32 = 1;
        IncrementCounterForJob(this, pQVar6, true);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        lVar4 = FrameTime::GetCurrentTimeMS();
        field_1512728 = lVar4 + 2000;
        lVar4 = FrameTime::GetCurrentTimeMS();
        field_1512736 = lVar4 + 750;
        std::condition_variable::notify_all();
    }

    // 0x1009ea570, 208 bytes, placed by class name
    // Js5DiskCache::HandleCrash(callstack::JagException const&, int)
    void Js5DiskCache::HandleCrash(JagException* param_1, int param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        Database* this_00;
        undefined1* puVar3;
        ulong uVar4;

        uVar4 = (ulong)(uint)param_2;
        if (param_2 == -1) {
            uVar4 = (&field_70376)->get();
            param_2 = (int)uVar4;
        }
        if ((uint)param_2 < 67) {
            uVar1 = logger::default_logger();
            uVar2 = (*(code*)param_1->field_0[2])(param_1);
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                518, "Crash in Js5DiskCache archive %d:\n%s", uVar4, uVar2);
            this_00 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                (array<Js5DiskCache::Database, 67ul>*)&field_8, (long)(int)uVar4);
            this_00->HandleSQLErrorImpl(11);
            puVar3 = (undefined1*)std::array<signed char, 67ul>::operator[]((array<signed char, 67ul>*)&field_70224,
                                                                            (long)(int)uVar4);
            *puVar3 = 0;
        }
    }

    // 0x1009ea650, 208 bytes, placed by class name
    // Js5DiskCache::Database::HandleSQLErrorImpl(int)
    void Js5DiskCache::Database::HandleSQLErrorImpl(int param_1) {
        undefined4 uVar1;
        undefined8 uVar3;
        undefined8 uVar4;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "rc != 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2292, (char*)0);
        }
        uVar3 = logger::default_logger();
        uVar1 = field_8;
        uVar4 = _jag_sqlite3_errmsg(field_376);
        logger::Logger::Log(
            uVar3, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp", 2293,
            "SQLError in %d: [err=%d]: %s", uVar1, param_1, uVar4);
        if (SQLInit::IsDBCorruptionError(param_1) != '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2297, "Js5DiskCache corruption in archive %d. Deleting", field_8);
            field_32 = 1;
        }
    }

    // 0x1009ea730, 544 bytes, placed by class name
    // Js5DiskCache::ThreadRunnerWrapper(int)
    void Js5DiskCache::ThreadRunnerWrapper(int param_1) {
        char cVar1;
        char* pcVar2;
        eastl::string local_40[32];

        eastl::string::basic_string(local_40, "SQLCache-%d", param_1);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_thread::SetThreadName(pcVar2);
        eastl::string::~basic_string(local_40);
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
        cVar1 = SQLInit::Initialise();
        if (cVar1 != '\0') {
            cVar1 = field_70352;
            while (cVar1 == '\0') {
                ThreadRunnerSEHWrapper(this, param_1);
                cVar1 = field_70352;
            }
            if (param_1 == 1) {
                CloseDatabasesSEHWrapper(this);
            }
            SQLInit::Destroy();
        }
    }

    // 0x1009ea950, 144 bytes, placed by class name
    // Js5DiskCache::ThreadRunnerSEHWrapper(int)
    void Js5DiskCache::ThreadRunnerSEHWrapper(int param_1) {
        int* piVar1;
        SignalState local_d8;

        new (&local_d8) callstack::SignalState(Js5DiskCacheCrashHandler, this, 18446744073709551615);
        piVar1 = (int*)local_d8.second();
        if (_setjmp(piVar1) == 0) {
            ThreadRunner(this, param_1);
        }
        local_d8.~SignalState();
    }

    // 0x1009ea9e0, 128 bytes, placed by class name
    // Js5DiskCache::CloseDatabasesSEHWrapper()
    void Js5DiskCache::CloseDatabasesSEHWrapper() {
        int* piVar1;
        SignalState local_d0;

        new (&local_d0) callstack::SignalState(Js5DiskCacheCrashHandler, this, 18446744073709551615);
        piVar1 = (int*)local_d0.second();
        if (_setjmp(piVar1) == 0) {
            CloseDatabases(this);
        }
        local_d0.~SignalState();
    }

    // 0x1009eaa60, 48 bytes, placed by neighbouring functions
    // Js5DiskCacheCrashHandler(callstack::JagException const&, void*, void*)
    undefined8 Js5DiskCacheCrashHandler(JagException* param_1, void* param_2, void* param_3) {
        param_2->HandleCrash(param_1, (int)param_3);
        callstack::CrashHandler::DispatchProgramCrash(param_1);
        return 0;
    }

    // 0x1009eaa90, 16 bytes, placed by class name
    // Js5DiskCache::ThreadRunner(int)
    void Js5DiskCache::ThreadRunner(int param_1) {
        ServiceLoop(this, param_1);
    }

    // 0x1009eaaa0, 1568 bytes, placed by class name
    // Js5DiskCache::ServiceLoop(int)
    void Js5DiskCache::ServiceLoop(int param_1) {
        byte bVar1;
        ulonglong uVar2;
        array<Js5DiskCache::Database, 67ul>* this_00;
        char cVar3;
        bool bVar4;
        int iVar5;
        ulonglong uVar6;
        int* piVar7;
        QueueRequestItem* pQVar8;
        char* pcVar9;
        long lVar10;
        Database* this_01;
        long lVar11;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar12;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        long lVar13;
        list<console::Line, eastl::allocator> local_e0[8];
        undefined1 local_d8[8];
        undefined8 local_d0;
        condition_variable* local_c8;
        undefined1* local_c0;
        QueueRequestItem local_b8;
        thread_specific_ptr<render::RenderContext>* local_80;
        ArchiveInUseGuard local_78;
        int local_64;
        undefined4 local_60[2];
        array<Js5DiskCache::Database, 67ul>* local_58;
        array* local_50;
        unique_lock<std::mutex> local_48[16];
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* local_38;

        std::unique_lock<std::mutex>::unique_lock(local_48, &field_1512272);
        local_38 =
            (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_790504;
        local_50 = (array*)&field_70224;
        local_c8 = (condition_variable*)&field_1512336;
        local_58 = (array<Js5DiskCache::Database, 67ul>*)&field_8;
        local_c0 = &field_1512856;
        local_80 = (thread_specific_ptr<render::RenderContext>*)&field_70376;
        local_64 = param_1;
        do {
            if (field_70352 != '\0')
                break;
            this_02 = local_38;
            cVar3 =
                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::empty(
                    local_38);
            if (((cVar3 != '\0') ||
                 (uVar2 = field_70400, uVar6 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_02),
                  uVar2 + 5000 < uVar6)) &&
                (field_1513224 == '\0')) {
                UpdateDiskCacheSize(this);
                MoveFromInsertionQueue(this);
            }
            std::unique_lock<std::mutex>::lock(local_48);
            new (&local_78) ArchiveInUseGuard(local_50, param_1);
            cVar3 =
                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::empty(
                    local_38);
            if (((cVar3 != '\0') && (field_1512384 == 0)) &&
                ((field_1513226 == 0 || ((field_1512744 == '\0' || (field_1513225 == false)))))) {
                ClearSQLSoftCache(this);
                local_60[0] = 500;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)&local_b8,
                                                                                       (type*)local_60);
                std::condition_variable::wait_for<long long, std::ratio<1l, 1000l>>(local_c8, (unique_lock*)local_48,
                                                                                    (duration*)&local_b8);
            }
            LoadFullArchiveService(this);
            if (field_70352 == '\0') {
                cVar3 = eastl::list<
                    Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::empty(local_38);
                this_00 = local_58;
                if (cVar3 == '\0') {
                    new (&local_b8) QueueRequestItem();
                    local_60->end();
                    eastl::list<console::Line, eastl::allocator>::begin(local_e0);
                    phVar12 = extraout_RDX;
                    while (bVar4 = eastl::operator!=((eastl*)local_e0, (hashtable_iterator_base*)local_60, phVar12),
                           bVar4) {
                        lVar11 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_e0);
                        iVar5 = *(int*)(lVar11 + 4);
                        lVar11 = std::array<Js5DiskCache::Database, 67ul>::operator[](local_58, (long)iVar5);
                        if (((*(char*)(lVar11 + 33) == '\0') ||
                             (piVar7 =
                                  (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                      (ListIterator<console::Line, console::Line*, console::Line&>*)local_e0),
                              *piVar7 == 4)) &&
                            (cVar3 = local_78.Lock(iVar5), cVar3 != '\0')) {
                            pQVar8 = (QueueRequestItem*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_e0);
                            local_b8.swap(pQVar8);
                            new (&local_d0)
                                eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                                    local_e0);
                            eastl::list<Js5DiskCache::QueueRequestItem,
                                        eastl::fixed_node_allocator<72ul, 9999ul, 8ul, 0ul, true, eastl::allocator>>::
                                erase(local_d8, local_38, local_d0);
                            field_70420 = field_70420 + -1;
                            DecrementCounterForJob(this, &local_b8, false);
                            break;
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_e0);
                        phVar12 = extraout_RDX_00;
                    }
                    if ((local_b8.field_0 == 0) ||
                        (cVar3 = AnythingMoreImportant(this, (Priority*)local_b8.field_24), cVar3 == '\0')) {
                        std::unique_lock<std::mutex>::unlock(local_48);
                        iVar5 = 0;
                        bVar4 = true;
                        if (local_b8.field_0 != 0) {
                            lVar11 = FrameTime::GetCurrentTimeMS();
                            field_1512752 = lVar11 + 15000;
                            pcVar9 = (char*)std::array<signed char, 67ul>::operator[](
                                (array<signed char, 67ul>*)local_50, (long)(int)local_b8.field_4);
                            if (*pcVar9 != param_1) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m_archivesInUse[qi.m_archive] == threadNumber",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                          "caching/Js5DiskCache.cpp",
                                          1076, (char*)0);
                            }
                            ProcessRequest(this, &local_b8);
                            pcVar9 = (char*)std::array<signed char, 67ul>::operator[](
                                (array<signed char, 67ul>*)local_50, (long)(int)local_b8.field_4);
                            if (*pcVar9 != param_1) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m_archivesInUse[qi.m_archive] == threadNumber",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                          "caching/Js5DiskCache.cpp",
                                          1080, (char*)0);
                            }
                        }
                    } else {
                        local_38->push_back(&local_b8);
                        field_70420 = field_70420 + 1;
                        std::unique_lock<std::mutex>::unlock(local_48);
                        MoveFromInsertionQueue(this);
                        iVar5 = 2;
                        bVar4 = false;
                    }
                    local_b8.~QueueRequestItem();
                    if (!bVar4)
                        goto LAB_1009eab3e;
                } else if ((field_1513225 == false) || (field_1512744 == '\0')) {
                    std::unique_lock<std::mutex>::unlock(local_48);
                } else {
                    iVar5 = -1;
                    if (field_1513224 == '\0') {
                        field_1513226 = 0;
                        lVar11 = std::array<Js5DiskCache::Database, 67ul>::begin(local_58);
                        iVar5 = -1;
                        lVar10 = std::array<Js5DiskCache::Database, 67ul>::end(this_00);
                        if (lVar11 != lVar10) {
                            iVar5 = -1;
                            do {
                                lVar13 = lVar11 + 472;
                                bVar1 = *(byte*)(lVar11 + 13);
                                field_1513226 = field_1513226 | bVar1;
                                if ((((bVar1 != 0) && (*(char*)(lVar11 + 14) == '\0')) &&
                                     (*(int*)(lVar11 + 28) != 0)) &&
                                    (cVar3 = local_78.Lock(*(int*)(lVar11 + 8)), cVar3 != '\0')) {
                                    iVar5 = *(int*)(lVar11 + 8);
                                    break;
                                }
                                lVar11 = lVar13;
                            } while (lVar13 != lVar10);
                        }
                    }
                    std::unique_lock<std::mutex>::unlock(local_48);
                    param_1 = local_64;
                    if (iVar5 == -1) {
                        iVar5 = GetNextVacuumCandidate(this);
                        if ((iVar5 != -1) && (cVar3 = local_78.Lock(iVar5), cVar3 != '\0')) {
                            new (&local_b8) std::unique_lock<std::mutex>(local_c0);
                            cVar3 = local_b8.try_lock();
                            if (cVar3 != '\0') {
                                this_01 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](local_58,
                                                                                                          (long)iVar5);
                                local_80->reset((RenderContext*)(long)(int)this_01->field_8);
                                this_01->Vacuum();
                                lVar11 = FrameTime::GetCurrentTimeMS();
                                field_1512752 = lVar11 + 15000;
                            }
                            local_b8.~unique_lock();
                        }
                    } else {
                        cVar3 = local_78.IsLocked(iVar5);
                        if (cVar3 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("useGuard.IsLocked(doValidation)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      1110, (char*)0);
                        }
                        ValidateDatabase(this, iVar5);
                    }
                }
                iVar5 = 0;
                local_80->reset(18446744073709551615);
            } else {
                iVar5 = 3;
                std::unique_lock<std::mutex>::unlock(local_48);
            }
        LAB_1009eab3e:
            local_78.~ArchiveInUseGuard();
        } while (iVar5 != 3);
        std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_70368);
        std::unique_lock<std::mutex>::~unique_lock(local_48);
    }

    // 0x1009eb0f0, 736 bytes, placed by class name
    // Js5DiskCache::ProcessOpen(Js5DiskCache::Database&)
    void Js5DiskCache::ProcessOpen(Database* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        undefined4 uVar2;
        mutex* pmVar3;
        long lVar4;
        char* pcVar5;
        char* pcVar6;
        undefined4* puVar7;
        undefined1 local_168[304];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        param_1->field_24 = 0;
        this_00 = param_1->field_48;
        this_01 = &field_67544;
        do {
            if (field_70352 != '\0')
                goto LAB_1009eb377;
            cVar1 = param_1->IsOpen();
            if (cVar1 == '\0') {
                GetDatabaseFilename((Js5DiskCache*)local_168, (int)this, SUB41(param_1->field_8, 0));
                Filename::operator=((Filename*)this_00, (Filename*)local_168);
                local_168->~pair();
            }
            if ((param_1->field_32 != '\0') && (param_1->field_28 != 0)) {
                param_1->field_12 = 0;
                param_1->field_32 = 0;
                pmVar3 = (mutex*)std::array<std::mutex, 67ul>::operator[]((array<std::mutex, 67ul>*)&field_63256,
                                                                          (long)(int)param_1->field_8);
                new (local_168) std::scoped_lock<std::mutex>(pmVar3);
                cVar1 = param_1->IsOpen();
                if (cVar1 != '\0') {
                    std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_70360);
                    param_1->Close();
                    cVar1 = param_1->IsOpen();
                    if (cVar1 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!slot.IsOpen()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                  "Js5DiskCache.cpp",
                                  663, (char*)0);
                    }
                }
                this_00->RemoveFile(0);
                lVar4 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                    (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)this_01, (long)(int)param_1->field_8);
                pcVar5 = (char*)((lVar4 + 8))->HeapBeginPtr();
                pcVar6 = (char*)((lVar4 + 8))->end();
                for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 1) {
                    if (*pcVar5 == '\x01') {
                        *pcVar5 = '\0';
                    }
                }
                lVar4 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                    (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)this_01, (long)(int)param_1->field_8);
                uVar2 = ((lVar4 + 8))->size();
                puVar7 = (undefined4*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                    (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)this_01, (long)(int)param_1->field_8);
                *puVar7 = uVar2;
                local_168->~scoped_lock();
            }
            cVar1 = param_1->IsOpen();
            if (cVar1 != '\0')
                goto LAB_1009eb377;
            param_1->field_12 = 0;
            cVar1 = this_00->Exists();
            if ((cVar1 == '\0') && (param_1->field_28 == 1)) {
                puVar7 = (undefined4*)std::array<FullArchiveRequestStatus, 67ul>::operator[](
                    (array<FullArchiveRequestStatus, 67ul>*)&field_1512388, (long)(int)param_1->field_8);
                *puVar7 = 2;
            }
            cVar1 = param_1->Open();
        } while (cVar1 == '\0');
        cVar1 = param_1->IsOpen();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "slot.IsOpen()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                698, (char*)0);
        }
        param_1->field_12 = 1;
        std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_70360);
        field_70392 = 1;
    LAB_1009eb377:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009eb410, 192 bytes, placed by class name
    // Js5DiskCache::Database::Open()
    undefined8 Js5DiskCache::Database::Open() {
        long* plVar1;
        byte bVar2;
        int iVar3;
        char* pcVar4;
        undefined8 uVar5;
        undefined8 local_30;

        bVar2 = field_48->IsFile();
        pcVar4 = field_48->operator_cast_to_char_();
        plVar1 = &field_376;
        iVar3 = _jag_sqlite3_open(pcVar4, plVar1);
        if (iVar3 == 0) {
            local_30 = 0;
            iVar3 = _jag_sqlite3_exec(*plVar1,
                                      "CREATE TABLE IF NOT EXISTS cache(KEY INTEGER PRIMARY KEY,DATA BLOB,VERSION "
                                      "INTEGER,CRC INTEGER);CREATE TABLE IF NOT EXISTS cache_index(KEY INTEGER PRIMARY "
                                      "KEY,DATA BLOB,VERSION INTEGER,CRC INTEGER);",
                                      0, 0, &local_30);
            if (iVar3 == 0) {
                SetProperties(this, (bool)(bVar2 ^ 1));
            } else {
                _jag_sqlite3_close(*plVar1);
                *plVar1 = 0;
                if (iVar3 != 0)
                    goto LAB_1009eb48c;
            }
            uVar5 = 1;
        } else {
        LAB_1009eb48c:
            if (iVar3 == 1) {
                field_32 = 1;
            }
            HandleSQLError(this, iVar3);
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x1009eb4d0, 1392 bytes, placed by class name
    // Js5DiskCache::ValidateDatabase(int)
    void Js5DiskCache::ValidateDatabase(int param_1) {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        char cVar1;
        byte bVar2;
        bool bVar3;
        int iVar4;
        undefined4 uVar5;
        uint uVar6;
        ulong uVar7;
        Database* this_01;
        undefined8 uVar8;
        int* piVar9;
        Js5ArchiveSettings* pJVar10;
        undefined* puVar11;
        char* pcVar12;
        char* pcVar13;
        char* pcVar14;
        mutex* pmVar15;
        long lVar16;
        ulong uVar17;
        uint* puVar18;
        uint* puVar19;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* pvVar20;
        Js5DiskCache* this_02;
        Js5ResourceProvider* this_03;
        int iVar21;
        ulong uVar22;
        RenderContext* pRVar23;
        ulong uVar24;
        undefined8 local_108;
        Js5ArchiveSettings* local_100;
        int* local_f8;
        Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL> local_f0[24];
        scoped_lock<std::mutex> local_d8[8];
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* local_d0;
        uint local_c8;
        undefined4 local_c4;
        int local_c0;
        int local_bc;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_b8;
        GeometryBatchInstance* local_b0;
        undefined8 local_a8;
        fixed_string<char, 64, true, eastl::allocator> local_a0[104];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pRVar23 = (RenderContext*)(long)param_1;
        (&field_70376, pRVar23)->reset();
        if (field_1512744 != '\0') {
            uVar7 = FrameTime::GetCurrentTimeMS();
            if (field_1512728 <= uVar7) {
                this_02 = (Js5DiskCache*)&field_8;
                this_01 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                    (array<Js5DiskCache::Database, 67ul>*)this_02, (ulong)pRVar23);
                if (this_01->field_24 != '\0') {
                    this_02 = this;
                    ProcessOpen(this, this_01);
                }
                this_01->field_14 = '\x01';
                this_01->field_15 = '\0';
                *(undefined8*)&this_01->field_16 = 0;
                uVar8 = this_thread::GetThreadID();
                this_01->field_40 = uVar8;
                SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                if (this_01->field_24 != '\0') {
                    ProcessOpen(this, this_01);
                }
                piVar9 = (int*)std::array<FullArchiveRequestStatus, 67ul>::operator[](
                    (array<FullArchiveRequestStatus, 67ul>*)&field_1512388, (ulong)pRVar23);
                if (*piVar9 == 4) {
                    *(undefined2*)&this_01->field_13 = 0;
                } else {
                    pJVar10 = (Js5ArchiveSettings*)(field_70296, param_1)->GetByArchiveID();
                    this_03 = field_70312;
                    puVar11 = (undefined*)(*(code*)this_03->field_0[3])(this_03, &local_b0, pJVar10);
                    if (puVar11 == DataStatus::READY) {
                        local_108 = 0;
                        local_100 = pJVar10;
                        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(
                            local_a0, "SELECT KEY, CRC, VERSION FROM cache");
                        lVar16 = this_01->field_376;
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        iVar4 = _jag_sqlite3_prepare_v2(lVar16, uVar8, 4294967295, &local_a8, &local_108);
                        if (iVar4 == 0) {
                            if (66 < param_1) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("archiveID < (int)m_archivesInCache.size()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                          "caching/Js5DiskCache.cpp",
                                          770, (char*)0);
                            }
                            local_f8 = (int*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                                (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (ulong)pRVar23);
                            pvVar20 =
                                (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                     eastl::allocator>>*)(local_f8 + 2);
                            uVar7 = eastl::vector<unsigned char,
                                                  eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::size(pvVar20);
                            Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL>::Array(local_f0, uVar7);
                            pcVar12 = (char*)pvVar20->HeapBeginPtr();
                            local_d0 = pvVar20;
                            pcVar13 = (char*)pvVar20->end();
                            pcVar14 = (char*)local_f0->data();
                            eastl::copy<char*, char*>(pcVar12, pcVar13, pcVar14);
                            uVar5 = local_b0->GetAnimationLength();
                            local_b8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                                              eastl::allocator>*)CONCAT44(local_b8._4_4_, uVar5);
                            while ((field_70352 == '\0' && (field_1513224 == '\0' && this_01->field_15 == '\0'))) {
                                iVar4 = _jag_sqlite3_step(local_a8);
                                if (iVar4 != 100)
                                    break;
                                if (field_1512744 == '\0') {
                                LAB_1009eb97e:
                                    *(undefined8*)&this_01->field_16 = 0;
                                    goto LAB_1009eb986;
                                }
                                uVar7 = FrameTime::GetCurrentTimeMS();
                                if (uVar7 < field_1512728)
                                    goto LAB_1009eb97e;
                                uVar6 = _jag_sqlite3_column_int(local_a8, 0);
                                if ((int)uVar6 < 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("id >= 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/caching/Js5DiskCache.cpp",
                                              792, (char*)0);
                                }
                                if ((int)uVar6 <= (int)local_b8) {
                                    local_c4 = _jag_sqlite3_column_int(local_a8, 1);
                                    local_c0 = _jag_sqlite3_column_int(local_a8, 2);
                                    uVar5 = local_b0->GetGroupCRC(uVar6);
                                    local_bc = local_b0->GetGroupVersion(uVar6);
                                    pcVar12 = (char*)Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL>::operator[](
                                        local_f0, (long)(int)(uVar6 + 1));
                                    if (*pcVar12 == '\0') {
                                        cVar1 = local_100->GetDiskEncodeType();
                                        bVar2 = IsCRCValid(local_c4, uVar5, (int)cVar1);
                                        pcVar12 =
                                            (char*)Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL>::operator[](
                                                local_f0, (long)(int)(uVar6 + 1));
                                        *pcVar12 = '\x02' - (bVar2 & local_c0 == local_bc);
                                    }
                                }
                            }
                            if (field_70352 == '\0' && this_01->field_15 == '\0') {
                                pmVar15 = (mutex*)std::array<std::mutex, 67ul>::operator[](
                                    (array<std::mutex, 67ul>*)&field_63256, (ulong)pRVar23);
                                std::scoped_lock<std::mutex>::scoped_lock(local_d8, pmVar15);
                                local_b8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                                  std::default_delete<LoadingScreenScript::AnimLayer>>,
                                                  eastl::allocator>*)local_b0->GetMaterial();
                                pvVar20 = local_d0;
                                lVar16 = eastl::vector<unsigned char,
                                                       eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                     eastl::allocator>>::size(local_d0);
                                if (lVar16 == 0) {
                                    iVar4 = 0;
                                } else {
                                    iVar4 = 0;
                                    uVar7 = 1;
                                    uVar24 = 0;
                                    do {
                                        uVar22 = uVar7;
                                        pcVar12 =
                                            (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                                                (vector<Js5DiskCacheFileStatus, eastl::allocator>*)pvVar20, uVar24);
                                        if (*pcVar12 == '\0') {
                                            pcVar13 =
                                                (char*)Array<Js5DiskCacheFileStatus, BucketAllocatorEASTL>::operator[](
                                                    local_f0, uVar24);
                                            cVar1 = *pcVar13;
                                            if (*pcVar13 == '\0') {
                                                cVar1 = '\x02';
                                            }
                                            *pcVar12 = cVar1;
                                        }
                                        this_00 = local_b8;
                                        iVar21 = (int)uVar22;
                                        if ((iVar21 != 1) && (*pcVar12 == '\x02')) {
                                            local_c8 = iVar21 - 2;
                                            puVar18 = (uint*)local_b8->data();
                                            puVar19 = (uint*)this_00->end();
                                            bVar3 = std::binary_search<unsigned int const*, unsigned int>(
                                                puVar18, puVar19, &local_c8);
                                            iVar4 = iVar4 + (uint)bVar3;
                                        }
                                        pvVar20 = local_d0;
                                        uVar17 = eastl::vector<unsigned char, eastl::fixed_vector_allocator<
                                                                                  1ul, 8ul, 1ul, 0ul, true,
                                                                                  eastl::allocator>>::size(local_d0);
                                        uVar7 = (ulong)(iVar21 + 1);
                                        uVar24 = uVar22;
                                    } while (uVar22 < uVar17);
                                }
                                *local_f8 = iVar4;
                                this_01->field_13 = 0;
                                std::scoped_lock<std::mutex>::~scoped_lock(local_d8);
                            }
                        LAB_1009eb986:
                            local_f0->~Array();
                        } else {
                            uVar8 = logger::default_logger();
                            logger::Logger::Log(uVar8, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "js5/caching/Js5DiskCache.cpp",
                                                877, "No index to check against in archive %d", param_1);
                        }
                        _jag_sqlite3_finalize(local_a8);
                        this_01->Close();
                        /* WARNING: Subroutine does not return */
                        local_a0->~fixed_string();
                    }
                    SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_03);
                    this_01->field_14 = '\0';
                }
                this_01->field_40 = 0;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009ebc40, 160 bytes, placed by class name
    // Js5DiskCache::DecrementCounterForJob(Js5DiskCache::QueueRequestItem const&, bool)
    void Js5DiskCache::DecrementCounterForJob(QueueRequestItem* param_1, bool param_2) {
        int* piVar1;
        undefined7 in_register_00000011;
        array<Js5DiskCache::ActionCounter, 67ul>* this_00;

        this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1510600;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            this_00 = (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1511404;
        }
        piVar1 = (int*)std::array<Js5DiskCache::ActionCounter, 67ul>::operator[](this_00, (long)(int)param_1->field_4);
        switch (param_1->field_0) {
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
        *piVar1 = *piVar1 + -1;
    switchD_1009ebc89_default:
        if (param_2) {
            piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&field_1510584,
                                                            (ulong)(uint)param_1->field_24->field_8);
            *piVar1 = *piVar1 + -1;
        }
    }

    // 0x1009ebda0, 112 bytes, placed by class name
    // Js5DiskCache::AnythingMoreImportant(Priority const*)
    ulong Js5DiskCache::AnythingMoreImportant(Priority* param_1) {
        int* piVar1;
        ulong uVar2;
        ulong uVar3;
        undefined8 unaff_R15;
        undefined7 uVar5;
        ulong uVar4;

        uVar3 = (ulong) * (uint*)(param_1 + 8);
        uVar5 = (undefined7)((ulong)unaff_R15 >> 8);
        uVar4 = CONCAT71(uVar5, uVar3 != 0);
        if (uVar3 != 0) {
            piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&field_1510584, 0);
            uVar4 = CONCAT71(uVar5, 1);
            if (*piVar1 < 1) {
                uVar2 = 1;
                do {
                    uVar4 = CONCAT71((int7)(uVar4 >> 8), uVar2 < uVar3);
                    if (uVar3 == uVar2)
                        break;
                    piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&field_1510584, uVar2);
                    uVar2 = uVar2 + 1;
                } while (*piVar1 < 1);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1009ebe20, 192 bytes, placed by class name
    // Js5DiskCache::UpdateDiskCacheSize()
    void Js5DiskCache::UpdateDiskCacheSize() {
        Database* pDVar1;
        Database* pDVar2;
        long lVar3;
        Database* pDVar4;
        long lVar6;

        if (field_70392 != '\0') {
            pDVar1 = (Database*)(&field_8)->begin();
            pDVar2 = (Database*)(&field_8)->end();
            if (pDVar1 == pDVar2) {
                lVar6 = 0;
            } else {
                lVar6 = 0;
                do {
                    lVar3 = pDVar1->GetSizeOnDisk();
                    lVar6 = lVar6 + lVar3;
                    pDVar1 = pDVar1 + 1;
                } while (pDVar1 != pDVar2);
            }
            pDVar1 = (Database*)&field_31632;
            pDVar2 = (Database*)pDVar1->begin();
            pDVar4 = (Database*)pDVar1->end();
            for (; pDVar2 != pDVar4; pDVar2 = pDVar2 + 1) {
                pDVar1 = pDVar2;
                lVar3 = pDVar2->GetSizeOnDisk();
                lVar6 = lVar6 + lVar3;
            }
            m_usageBytes = lVar6;
            field_70400 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)pDVar1);
            field_70392 = 0;
        }
    }

    // 0x1009ebf40, 64 bytes, placed by class name
    // Js5DiskCache::ClearSQLSoftCache()
    void Js5DiskCache::ClearSQLSoftCache() {
        ulong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        if (field_1512736 < uVar1) {
            CloseDatabases(this);
            field_1512736 = field_1512736 + 750;
        }
    }

    // 0x1009ec0b0, 96 bytes, placed by class name
    // Js5DiskCache::LoadFullArchiveService()
    void Js5DiskCache::LoadFullArchiveService() {
        int* piVar1;
        ulong uVar2;

        uVar2 = 0;
        do {
            piVar1 = (int*)std::array<FullArchiveRequestStatus, 67ul>::operator[](
                (array<FullArchiveRequestStatus, 67ul>*)&field_1512388, uVar2);
            if (*piVar1 - 1U < 2) {
                LoadFullArchive(this, (int)uVar2);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 67);
    }

    // 0x1009ec200, 352 bytes, placed by class name
    // Js5DiskCache::ProcessRequest(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::ProcessRequest(QueueRequestItem* param_1) {
        char cVar1;
        Database* pDVar2;
        Database* pDVar3;
        RenderContext* pRVar4;

        pRVar4 = (RenderContext*)(long)(int)param_1->field_4;
        (&field_70376, pRVar4)->reset();
        pDVar2 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
            (array<Js5DiskCache::Database, 67ul>*)&field_8, (ulong)pRVar4);
        if (pDVar2->field_24 != '\0') {
            ProcessOpen(this, pDVar2);
        }
        if (((*(char*)((long)&param_1->field_32 + 2) != '\0') &&
             (pDVar3 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                  (array<Js5DiskCache::Database, 67ul>*)&field_31632, (ulong)pRVar4),
              pDVar3->field_24 != '\0')) &&
            (param_1->field_0 == 1)) {
            ProcessOpen(this, pDVar3);
        }
        if ((*(char*)((long)&param_1->field_32 + 2) != '\0') && (param_1->field_0 != 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!(qi.m_readOnlyRequest && qi.m_requestType != RequestType::REQUEST_READ)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1249, "Error - Tried to write to the read-only archive: %i", (ulong)param_1->field_4);
        }
        switch (param_1->field_0) {
        case 1:
            ProcessRead(this, param_1);
            cVar1 = pDVar2->field_32;
            break;
        case 2:
            ProcessWrite(this, param_1);
            cVar1 = pDVar2->field_32;
            break;
        case 3:
            ProcessDelete(this, param_1);
            cVar1 = pDVar2->field_32;
            goto joined_r0x0001009ec332;
        case 4:
            ProcessDelayedEnd(this, param_1);
            cVar1 = pDVar2->field_32;
        joined_r0x0001009ec332:
            if (cVar1 == '\0') {
                return;
            }
            goto LAB_1009ec334;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1258, (char*)0);
        }
        if (cVar1 != '\0') {
        LAB_1009ec334:
            ProcessOpen(this, pDVar2);
        }
    }

    // 0x1009ec380, 112 bytes, placed by class name
    // Js5DiskCache::Database::Vacuum()
    bool Js5DiskCache::Database::Vacuum() {
        int iVar2;
        undefined8 local_20;

        local_20 = 0;
        iVar2 = _jag_sqlite3_exec(field_376, "VACUUM; PRAGMA page_count;", SQLcallback, this, &local_20);
        if (HandleSQLError(this, iVar2) != '\0') {
            field_360 = 0;
            field_364 = 1;
        }
        return iVar2 == 0;
    }

    // 0x1009ec430, 64 bytes, placed by class name
    // Js5DiskCache::ProcessRead(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::ProcessRead(QueueRequestItem* param_1) {
        Database* pDVar1;
        array<Js5DiskCache::Database, 67ul>* this_00;

        this_00 = (array<Js5DiskCache::Database, 67ul>*)&field_31632;
        if (*(char*)((long)&param_1->field_32 + 2) == '\0') {
            this_00 = (array<Js5DiskCache::Database, 67ul>*)&field_8;
        }
        pDVar1 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](this_00, (long)(int)param_1->field_4);
        PerformRead(this, pDVar1, param_1);
    }

    // 0x1009ec470, 688 bytes, placed by class name
    // Js5DiskCache::ProcessWrite(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::ProcessWrite(QueueRequestItem* param_1) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        bool bVar3;
        Database* this_01;
        long lVar4;
        QueueRequestItem* pQVar5;
        undefined8 uVar6;
        int iVar7;
        hashtable_iterator_base* extraout_RDX;
        QueueRequestItem local_98;
        undefined8 local_60;
        undefined8 local_58;
        scoped_lock<std::mutex> local_50[8];
        undefined1* local_48;
        undefined8 local_40;
        undefined4 local_34;

        uVar1 = param_1->field_4;
        this_01 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
            (array<Js5DiskCache::Database, 67ul>*)&field_8, (long)(int)uVar1);
        this_01->DoBeginTransaction();
        cVar2 = PerformWrite(this, this_01, param_1, true);
        if (((cVar2 != '\0') && (cVar2 = field_70312->IsMembersServer(), cVar2 == '\0')) && (field_70352 == '\0')) {
            this_00 = &field_790504;
            cVar2 = this_00->empty();
            if (cVar2 == '\0') {
                std::scoped_lock<std::mutex>::scoped_lock(local_50, (mutex*)&field_1512272);
                local_48 = this_00;
                cVar2 = this_00->empty();
                if ((cVar2 == '\0') &&
                    (lVar4 = std::array<Js5DiskCache::ActionCounter, 67ul>::operator[](
                         (array<Js5DiskCache::ActionCounter, 67ul>*)&field_1510600, (long)(int)uVar1),
                     iVar7 = *(int*)(lVar4 + 8) + *(int*)(lVar4 + 4),
                     iVar7 != 0 && SCARRY4(*(int*)(lVar4 + 8), *(int*)(lVar4 + 4)) == iVar7 < 0)) {
                    local_40.begin();
                    while (field_70352 == '\0') {
                        local_98.end();
                        bVar3 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_98, extraout_RDX);
                        if ((!bVar3) ||
                            ((param_1->field_24 == (Pix8*)Priority::LOW &&
                              (cVar2 = AnythingMoreImportant(this, (Priority*)param_1->field_24), cVar2 != '\0'))))
                            break;
                        pQVar5 = (QueueRequestItem*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                        if ((pQVar5->field_4 == uVar1) && ((pQVar5->field_0 & 4294967294) == 2)) {
                            new (&local_98) QueueRequestItem();
                            local_98.swap(pQVar5);
                            new (&local_58)
                                eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                                    (ListIterator*)&local_40);
                            eastl::list<Js5DiskCache::QueueRequestItem,
                                        eastl::fixed_node_allocator<72ul, 9999ul, 8ul, 0ul, true, eastl::allocator>>::
                                erase(&local_60, local_48, local_58);
                            local_40 = local_60;
                            field_70420 = field_70420 + -1;
                            DecrementCounterForJob(this, &local_98, false);
                            if (local_98.field_0 == 3) {
                                uVar6 = PerformDelete(this, this_01, &local_98);
                            } else {
                                if (local_98.field_0 != 2) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("qi2.m_requestType == RequestType::REQUEST_DELETE",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/caching/Js5DiskCache.cpp",
                                              1785, (char*)0);
                                }
                                uVar6 = PerformWrite(this, this_01, &local_98, false);
                            }
                            if ((char)uVar6 == '\0') {
                                iVar7 = 5;
                                local_34 = 0;
                            } else {
                                iVar7 = 0;
                                local_34 = (undefined4)CONCAT71((int7)((ulong)uVar6 >> 8), 1);
                            }
                            local_98.~QueueRequestItem();
                            if ((char)local_34 != '\0')
                                goto LAB_1009ec63f;
                        } else {
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                        LAB_1009ec63f:
                            iVar7 = 0;
                        }
                        if (iVar7 != 0)
                            break;
                    }
                }
                std::scoped_lock<std::mutex>::~scoped_lock(local_50);
            }
        }
        cVar2 = this_01->DoEndTransaction();
        if ((cVar2 != '\0') && (cVar2 = this_01->HandleSQLError(0), cVar2 != '\0')) {
            PerformInfoStatement(this, this_01);
        }
    }

    // 0x1009ec720, 48 bytes, placed by class name
    // Js5DiskCache::ProcessDelete(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::ProcessDelete(QueueRequestItem* param_1) {
        Database* pDVar1;

        pDVar1 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
            (array<Js5DiskCache::Database, 67ul>*)&field_8, (long)(int)param_1->field_4);
        PerformDelete(this, pDVar1, param_1);
    }

    // 0x1009ec750, 32 bytes, placed by class name
    // Js5DiskCache::ProcessDelayedEnd(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::ProcessDelayedEnd(QueueRequestItem* param_1) {
        Database* this_00;

        this_00 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
            (array<Js5DiskCache::Database, 67ul>*)&field_8, (long)(int)param_1->field_4);
        this_00->DoEndTransaction();
    }

    // 0x1009ec770, 96 bytes, placed by class name
    // Js5DiskCache::Database::BuildStatement(char const*, sqlite3_stmt*&)
    sqlite3_stmt* Js5DiskCache::Database::BuildStatement(char* param_1, sqlite3_stmt** param_2) {
        int iVar2;
        undefined8 local_20;

        if (*param_2 == (sqlite3_stmt*)0) {
            local_20 = 0;
            iVar2 = _jag_sqlite3_prepare_v2(field_376, param_1, 4294967295, param_2, &local_20);
            if (HandleSQLError(this, iVar2) == '\0') {
                return (sqlite3_stmt*)0;
            }
        }
        return *param_2;
    }

    // 0x1009ec7f0, 1168 bytes, placed by class name
    // Js5DiskCache::PerformWrite(Js5DiskCache::Database&, Js5DiskCache::QueueRequestItem const&, bool)
    ulong Js5DiskCache::PerformWrite(Database* param_1, QueueRequestItem* param_2, bool param_3) {
        undefined1* puVar1;
        undefined4 uVar2;
        char cVar3;
        int iVar4;
        mutex* pmVar5;
        long lVar6;
        char* pcVar7;
        undefined8 uVar8;
        undefined1* puVar9;
        TextureAtlasReference* pTVar10;
        uLong uVar11;
        long lVar12;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar13;
        Bytef* source;
        undefined7 in_register_00000009;
        vector<Js5DiskCacheFileStatus, eastl::allocator>* this_00;
        undefined7 uVar15;
        ulong uVar14;
        char cVar16;
        QueueResultItem local_f0;
        VBOMapper local_a8;
        array<std::mutex, 67ul>* local_80;
        uLong local_78;
        undefined1 local_70[52];
        undefined4 local_3c;
        long local_38;

        if (param_1->field_28 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1290, "Tried to write an entry in read-only archive: %i", (ulong)param_2->field_4);
        }
        uVar2 = (undefined4)CONCAT71(in_register_00000009, param_3);
        local_80 = (array<std::mutex, 67ul>*)&field_63256;
        pmVar5 = (mutex*)std::array<std::mutex, 67ul>::operator[](local_80, (long)(int)param_2->field_4);
        new (&local_f0) std::scoped_lock<std::mutex>(pmVar5);
        puVar1 = &field_67544;
        lVar6 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)puVar1, (long)(int)param_2->field_4);
        this_00 = (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar6 + 8);
        pcVar7 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            this_00, (long)(int)param_2->field_8 + 1);
        if (*pcVar7 != '\x03') {
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1301, "slotState for %d, %d was not STATE_BUSY during PerformWrite", param_2->field_4,
                param_2->field_8);
            puVar9 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                this_00, (long)(int)param_2->field_8 + 1);
            *puVar9 = 3;
        }
        local_f0.~scoped_lock();
        local_70._32_8_ = puVar1;
        local_3c = uVar2;
        if (param_2->field_8 == 4294967295) {
            local_38 = param_1->GetInsertIndexStatement();
            iVar4 = 0;
            if (local_38 == 0)
                goto LAB_1009eca9a;
            local_70._40_4_ = 1;
            local_70[44] = 0;
            local_70._45_3_ = 0;
        } else {
            local_38 = param_1->GetInsertStatement();
            if (local_38 == 0) {
            LAB_1009eca9a:
                uVar14 = 0;
                goto LAB_1009ecc03;
            }
            iVar4 = _jag_sqlite3_bind_int(local_38, 1, param_2->field_8);
            local_70._40_4_ = 2;
            local_70[44] = 0;
            local_70._45_3_ = 0;
        }
        new (&local_f0) QueueResultItem(param_2);
        local_f0.field_40 = 3;
        cVar16 = '\x03';
        if (iVar4 == 0) {
            new (local_70) PacketT<Array<unsigned char, eastl::allocator>>();
            puVar1 = &param_2->field_40;
            if (param_2->field_36 == 1) {
                pTVar10 =
                    (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
                iVar4 = pTVar10->GetTextureAtlas();
                uVar11 = _compressBound((long)iVar4);
                new (&local_a8) PacketT<Array<unsigned char, eastl::allocator>>(uVar11 + 8);
                PacketT<Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_70, (PacketT*)&local_a8);
                local_78 = (long)iVar4;
                local_a8.~VBOMapper();
                local_a8._0_8_ = local_70->GetTextureAtlas();
                local_a8._0_8_ = local_a8._0_8_ + -8;
                local_70->pArrayBuffer("ZLB\x01\x10", 0, 4);
                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_70, iVar4);
                lVar6 = local_70->GetDataPtr();
                lVar12 = local_70->size();
                pPVar13 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                  (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
                source = (Bytef*)pPVar13->GetDataPtr();
                this_00 = (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar6 + lVar12);
                iVar4 = _compress((Bytef*)this_00, (uLongf*)&local_a8, source, local_78);
                if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("zlibResult == Z_OK",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              1350, (char*)0);
                }
                uVar8 = local_70->GetDataPtr();
                lVar6 = local_a8._0_8_ + 8;
            } else {
                pPVar13 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                  (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
                uVar8 = pPVar13->GetDataPtr();
                pTVar10 =
                    (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
                lVar6 = pTVar10->GetTextureAtlas();
            }
            iVar4 = _jag_sqlite3_bind_blob(local_38, local_70._40_8_, uVar8, lVar6, 18446744073709551615);
            cVar16 = '\x03';
            if (iVar4 == 0) {
                iVar4 = _jag_sqlite3_bind_int(local_38, local_70._40_4_ + 1, param_2->field_12);
                if (iVar4 == 0) {
                    iVar4 = _jag_sqlite3_bind_int(local_38, local_70._40_4_ + 2, param_2->field_36 + param_2->field_16);
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
            local_70->~VBOMapper();
        }
        cVar3 = SQLInit::IsDBLockedError(iVar4);
        uVar15 = (undefined7)((ulong)this_00 >> 8);
        if (cVar3 == '\0') {
            uVar14 = CONCAT71(uVar15, iVar4 == 0);
            if (iVar4 != 0) {
                cVar16 = '\x02';
                param_1->HandleSQLError(iVar4);
            }
            if (cVar16 == '\x03') {
                /* WARNING: Subroutine does not return */
                LogAssert("slotState != Js5DiskCacheFileStatus::STATE_BUSY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          1403, (char*)0);
            }
            pmVar5 = (mutex*)std::array<std::mutex, 67ul>::operator[](local_80, (long)(int)param_2->field_4);
            new (local_70) std::scoped_lock<std::mutex>(pmVar5);
            lVar6 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)local_70._32_8_, (long)(int)param_2->field_4);
            pcVar7 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar6 + 8), (long)(int)param_2->field_8 + 1);
            *pcVar7 = cVar16;
            local_70->~scoped_lock();
        } else {
            uVar14 = CONCAT71(uVar15, 1);
            RescheduleRequest((Js5DiskCache*)this, param_2, local_3c._0_1_);
        }
        local_f0.~Js5WorkerRequestMessage();
    LAB_1009ecc03:
        return uVar14 & 4294967295;
    }

    // 0x1009eccd0, 112 bytes, placed by class name
    // Js5DiskCache::RescheduleRequest(Js5DiskCache::QueueRequestItem const&, bool)
    void Js5DiskCache::RescheduleRequest(QueueRequestItem* param_1, bool param_2) {
        undefined3 in_register_00000011;
        scoped_lock<std::mutex> local_20[8];

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            RescheduleRequestInner(this, param_1);
        } else {
            std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_1512272);
            RescheduleRequestInner(this, param_1);
            std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        }
    }

    // 0x1009ecd50, 256 bytes, placed by neighbouring functions
    // SQLcallback(void*, int, char**, char**)
    undefined8 SQLcallback(void* param_1, int param_2, char** param_3, char** param_4) {
        char* pcVar1;
        int iVar2;
        long lVar3;
        ulong uVar4;

        if (0 < param_2) {
            uVar4 = 0;
            do {
                pcVar1 = param_4[uVar4];
                iVar2 = _strcmp(pcVar1, "page_size");
                if (iVar2 == 0) {
                    lVar3 = _strtol(param_3[uVar4], (char**)0, 10);
                    *(int*)((long)param_1 + 352) = (int)lVar3;
                } else {
                    iVar2 = _strcmp(pcVar1, "page_count");
                    if (iVar2 == 0) {
                        lVar3 = _strtol(param_3[uVar4], (char**)0, 10);
                        if (*(int*)((long)param_1 + 356) != (int)lVar3) {
                            *(int*)((long)param_1 + 356) = (int)lVar3;
                            *(undefined1*)(*(long*)param_1 + 70392) = 1;
                        }
                    } else {
                        iVar2 = _strcmp(pcVar1, "freelist_count");
                        if (iVar2 == 0) {
                            lVar3 = _strtol(param_3[uVar4], (char**)0, 10);
                            *(int*)((long)param_1 + 360) = (int)lVar3;
                        }
                    }
                }
                uVar4 = uVar4 + 1;
            } while ((uint)param_2 != uVar4);
        }
        return 0;
    }

    // 0x1009ece50, 112 bytes, placed by class name
    // Js5DiskCache::Database::DoBeginTransaction()
    bool Js5DiskCache::Database::DoBeginTransaction() {
        int iVar1;
        long lVar2;
        bool bVar3;

        if (field_33 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1448, (char*)0);
        }
        lVar2 = GetBeginStatement(this);
        if (lVar2 == 0) {
            bVar3 = false;
        } else {
            iVar1 = _jag_sqlite3_step(lVar2);
            if (iVar1 == 101) {
                field_33 = 1;
                iVar1 = 0;
            }
            HandleSQLError(this, iVar1);
            bVar3 = iVar1 == 0;
        }
        return bVar3;
    }

    // 0x1009ecee0, 112 bytes, placed by class name
    // Js5DiskCache::Database::DoEndTransaction()
    bool Js5DiskCache::Database::DoEndTransaction() {
        int iVar2;
        long lVar3;
        bool bVar4;

        if (field_33 == '\0') {
            return true;
        }
        lVar3 = GetEndStatement(this);
        if (lVar3 == 0) {
        LAB_1009ecf2d:
            bVar4 = false;
        } else {
            iVar2 = _jag_sqlite3_step(lVar3);
            if (iVar2 == 101) {
                field_33 = 0;
                iVar2 = 0;
            } else {
                if (SQLInit::IsDBLockedError(iVar2) != '\0') {
                    DelayedEndTransaction(field_0, field_8);
                    goto LAB_1009ecf2d;
                }
            }
            HandleSQLError(this, iVar2);
            bVar4 = iVar2 == 0;
        }
        return bVar4;
    }

    // 0x1009ecf70, 144 bytes, placed by class name
    // Js5DiskCache::DelayedEndTransaction(int)
    void Js5DiskCache::DelayedEndTransaction(int param_1) {
        QueueRequestItem* pQVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_1512272);
        pQVar1 = (QueueRequestItem*)(&field_790504)->push_front();
        pQVar1->field_4 = param_1;
        pQVar1->field_0 = 4;
        *(undefined1*)&pQVar1->field_32 = 1;
        pQVar1->field_24 = (Pix8*)Priority::HIGHEST;
        field_70420 = field_70420 + 1;
        IncrementCounterForJob(this, pQVar1, false);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1009ed040, 1392 bytes, placed by class name
    // Js5DiskCache::LoadFullArchive(int)
    void Js5DiskCache::LoadFullArchive(int param_1) {
        vector<Js5DiskCacheFileStatus, eastl::allocator>* this_00;
        Js5DiskCache* pJVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        Js5ArchiveSettings* pJVar9;
        undefined* puVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        uint* puVar11;
        uint* puVar12;
        undefined1* puVar13;
        long lVar14;
        int* piVar15;
        uchar* puVar16;
        QueueResultItem* pQVar17;
        QueueResultItem* pQVar18;
        mutex* pmVar19;
        int* piVar20;
        char* pcVar21;
        undefined8 uVar22;
        Database* this_02;
        ulong uVar23;
        vector_map<int, Js5DiskCacheFileStatus, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, Js5DiskCacheFileStatus>, eastl::allocator>>
            local_f8[40];
        vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL> local_d0[24];
        Js5ArchiveSettings* local_b8;
        undefined1 local_b0[72];
        array<FullArchiveRequestStatus, 67ul>* local_68;
        Database* local_60;
        ulong local_58;
        GeometryBatchInstance* local_50;
        int* local_48;
        Js5DiskCache* local_40;
        int local_34;

        local_34 = param_1;
        pJVar9 = (Js5ArchiveSettings*)(field_70296, param_1)->GetByArchiveID();
        cVar2 = (field_70312, pJVar9)->CheckIndexValid();
        if (cVar2 != '\0') {
            puVar10 = (undefined*)(*(code*)field_70312->field_0[3])(field_70312, &local_50, pJVar9);
            if (puVar10 == DataStatus::READY) {
                uVar23 = (ulong)local_34;
                local_60 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                    (array<Js5DiskCache::Database, 67ul>*)&field_8, uVar23);
                if (local_60->field_24 != '\0') {
                    ProcessOpen(this, local_60);
                }
                local_58 = uVar23;
                local_40 = this;
                eastl::vector_map<
                    int, Js5DiskCacheFileStatus, eastl::less<int>, eastl::allocator,
                    eastl::vector<eastl::pair<int, Js5DiskCacheFileStatus>, eastl::allocator>>::vector_map(local_f8);
                this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)local_50->GetMaterial();
                puVar11 = (uint*)this_01->data();
                puVar12 = (uint*)this_01->end();
                if (puVar11 != puVar12) {
                    do {
                        local_b0._0_4_ = *puVar11;
                        puVar13 = (undefined1*)
                            eastl::vector_map<int, Js5DiskCacheFileStatus, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, Js5DiskCacheFileStatus>,
                                                            eastl::allocator>>::operator[](local_f8, (int*)local_b0);
                        *puVar13 = 2;
                        puVar11 = puVar11 + 1;
                    } while (puVar11 != puVar12);
                }
                eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::vector();
                iVar3 = local_50->GetEndPosition();
                eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::resize(local_d0, (long)iVar3);
                this_02 = local_60;
                if (local_60->field_24 != '\0') {
                    ProcessOpen(local_40, local_60);
                }
                lVar14 = this_02->GetSelectAllStatement();
                if (lVar14 == 0) {
                    uVar22 = logger::default_logger();
                    logger::Logger::Log(uVar22, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                        "caching/Js5DiskCache.cpp",
                                        1581, "Error loading SQL SelectAllStatement");
                } else {
                    local_b8 = pJVar9;
                    local_48 = (int*)lVar14;
                    SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_02);
                    local_68 = (array<FullArchiveRequestStatus, 67ul>*)&local_40->field_1512388;
                    while (true) {
                        piVar20 = local_48;
                        iVar3 = _jag_sqlite3_step(local_48);
                        if (iVar3 != 100)
                            break;
                        iVar3 = _jag_sqlite3_column_int(piVar20, 1);
                        uVar4 = _jag_sqlite3_column_int(piVar20, 2);
                        uVar5 = _jag_sqlite3_column_int(piVar20, 3);
                        iVar6 = local_50->GetGroupCRC(uVar5);
                        iVar7 = local_50->GetGroupVersion(uVar5);
                        cVar2 = local_b8->GetDiskEncodeType();
                        cVar2 = IsCRCValid(uVar4, iVar6, (int)cVar2);
                        if ((cVar2 == '\0') || (iVar3 != iVar7)) {
                            uVar8 = local_50->GetAnimationLength();
                            if (uVar5 <= uVar8) {
                                if (iVar6 + 1U < 2) {
                                    DeleteGroup(local_40, local_34, uVar5);
                                } else {
                                    local_b0._0_4_ = uVar5;
                                    puVar13 = (undefined1*)eastl::vector_map<
                                        int, Js5DiskCacheFileStatus, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, Js5DiskCacheFileStatus>,
                                                      eastl::allocator>>::operator[](local_f8, (int*)local_b0);
                                    *puVar13 = 2;
                                }
                            }
                        } else {
                            local_b0._0_4_ = uVar5;
                            puVar13 = (undefined1*)
                                eastl::vector_map<int, Js5DiskCacheFileStatus, eastl::less<int>, eastl::allocator,
                                                  eastl::vector<eastl::pair<int, Js5DiskCacheFileStatus>,
                                                                eastl::allocator>>::operator[](local_f8,
                                                                                               (int*)local_b0);
                            *puVar13 = 1;
                            piVar15 = (int*)std::array<FullArchiveRequestStatus, 67ul>::operator[](local_68, local_58);
                            piVar20 = local_48;
                            if (*piVar15 != 2) {
                                puVar16 = (uchar*)_jag_sqlite3_column_blob(local_48, 0);
                                iVar3 = _jag_sqlite3_column_bytes(piVar20, 0);
                                new (local_b0) QueueResultItem();
                                local_b0._4_4_ = local_34;
                                local_b0._40_4_ = 1;
                                local_b0._0_4_ = 1;
                                local_b0[32] = 1;
                                local_b0[33] = 1;
                                local_b0._24_8_ = Priority::HIGHEST;
                                local_b0._8_4_ = uVar5;
                                local_b0._12_4_ = iVar7;
                                local_b0._16_4_ = iVar6;
                                cVar2 = UnpackReadData(local_40, puVar16, iVar3, (QueueResultItem*)local_b0);
                                if (cVar2 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("success",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/caching/Js5DiskCache.cpp",
                                              1653, (char*)0);
                                }
                                ((local_b0 + 48))->end();
                                eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::push_back(
                                    local_d0, (QueueResultItem*)local_b0);
                                local_b0->~Js5WorkerRequestMessage();
                            }
                        }
                    }
                    local_60->Close();
                    pJVar1 = local_40;
                    new (local_b0) std::scoped_lock<std::mutex>((mutex*)&local_40->field_1512768);
                    pQVar17 = (QueueResultItem*)(&pJVar1->field_1512832)->end();
                    pQVar18 = (QueueResultItem*)local_d0->HeapBeginPtr();
                    local_d0->end();
                    eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::insert<
                        Js5DiskCache::QueueResultItem*>((QueueResultItem*)&pJVar1->field_1512832, pQVar17, pQVar18);
                    local_b0->~scoped_lock();
                    uVar23 = local_58;
                    pmVar19 = (mutex*)std::array<std::mutex, 67ul>::operator[](
                        (array<std::mutex, 67ul>*)&pJVar1->field_63256, local_58);
                    new (local_b0) std::scoped_lock<std::mutex>(pmVar19);
                    local_48 = (int*)std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                        (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&pJVar1->field_67544, uVar23);
                    piVar20 = (int*)local_f8->HeapBeginPtr();
                    piVar15 = (int*)local_f8->end();
                    iVar3 = 0;
                    if (piVar20 != piVar15) {
                        this_00 = (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(local_48 + 2);
                        iVar3 = 0;
                        do {
                            pcVar21 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                                this_00, (long)*piVar20 + 1);
                            if (*pcVar21 != '\x03') {
                                iVar6 = piVar20[1];
                                *pcVar21 = (char)iVar6;
                                iVar3 = iVar3 + (uint)((char)iVar6 == '\x02');
                            }
                            piVar20 = piVar20 + 2;
                        } while (piVar20 != piVar15);
                    }
                    local_b0->~scoped_lock();
                    piVar20 = (int*)std::array<FullArchiveRequestStatus, 67ul>::operator[](local_68, local_58);
                    iVar6 = 0;
                    if (*piVar20 == 2) {
                        iVar6 = iVar3;
                    }
                    *piVar20 = (*piVar20 == 2) + 3;
                    *local_48 = iVar6;
                }
                eastl::vector<Js5DiskCache::QueueResultItem, SafeBucketAllocatorEASTL>::~vector(local_d0);
                eastl::vector_map<
                    int, Js5DiskCacheFileStatus, eastl::less<int>, eastl::allocator,
                    eastl::vector<eastl::pair<int, Js5DiskCacheFileStatus>, eastl::allocator>>::~vector_map(local_f8);
            }
        }
    }

    // 0x1009ed7a0, 832 bytes, placed by class name
    // Js5DiskCache::UnpackReadData(unsigned char const*, int, Js5DiskCache::QueueResultItem&)
    ulong Js5DiskCache::UnpackReadData(uchar* param_1, int param_2, QueueResultItem* param_3) {
        undefined4 uVar1;
        undefined4 uVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        Bytef* dest;
        undefined* puVar8;
        char* pcVar9;
        ulong uVar10;
        char* pcVar11;
        undefined8 unaff_R14;
        undefined7 uVar13;
        ulong uVar12;
        TextureAtlasReference* this_00;
        Js5Index* local_98[4];
        undefined1 local_78[32];
        VBOMapper local_58;
        int local_34;

        if (param_1 == (uchar*)0) {
            uVar12 = 0;
        } else if (*(int*)param_1 == 21122138) {
            local_78._0_4_ = *(undefined4*)(param_1 + 4);
            ReorderToBE<int>((int*)local_78);
            local_58._0_8_ = ZEXT48((uint)local_78._0_4_);
            uVar13 = (undefined7)((ulong)unaff_R14 >> 8);
            uVar12 = CONCAT71(uVar13, 1);
            if ((8 < param_2) && (local_78._0_4_ != 0)) {
                (&param_3->field_48, local_58._0_8_, 4)->set_max_size();
                dest = (Bytef*)(&param_3->field_48)->data();
                iVar3 = _uncompress(dest, (uLongf*)(local_78 + 32), param_1 + 8, (long)(param_2 + -8));
                uVar12 = CONCAT71(uVar13, iVar3 == 0);
                if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("zlibResult == Z_OK",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              2103, (char*)0);
                }
                if (local_58._0_8_ != (ulong)(uint)local_78._0_4_) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("zlibSize == (uLongf)uncompressedSize",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                              "Js5DiskCache.cpp",
                              2104, (char*)0);
                }
            }
        } else {
            if (param_3->field_36 != 2) {
                /* WARNING: Subroutine does not return */
                LogAssert("result.m_diskCacheFormat == (uint)Js5DiskCacheFormat::SERVER_COMPRESSED",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          2085, (char*)0);
            }
            new ((local_78 + 32)) PacketT<Array<unsigned char, eastl::allocator>>((long)param_2);
            ((local_78 + 32))->pArrayBuffer(param_1, 0, (long)param_2);
            local_34 = 1;
            this_00 = (TextureAtlasReference*)local_78;
            this_00->Decompress((PacketT*)(local_78 + 32), (JS5DecompressionResult*)&local_34);
            if (local_34 == 1) {
                uVar6 = logger::default_logger();
                uVar1 = param_3->field_4;
                uVar2 = param_3->field_8;
                local_98->ToString();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                    "Js5DiskCache.cpp",
                                    2048, "Error decompressing packet: archive=%i, group=%i, packet=%s", uVar1, uVar2,
                                    uVar7);
                local_98->~basic_string();
                uVar12 = 0;
            } else {
                uVar6 = (field_70296, param_3->field_4)->GetByArchiveID();
                puVar8 = (undefined*)(*(code*)field_70312->field_0[3])(field_70312, local_98, uVar6);
                uVar12 = CONCAT71((int7)((ulong)this >> 8), puVar8 == DataStatus::READY);
                if (puVar8 == DataStatus::READY) {
                    uVar4 = local_98[0]->GetFileCount(param_3->field_8);
                    if ((int)uVar4 < 2) {
                        pcVar9 = (char*)this_00->GetDataPtr();
                    } else {
                        uVar5 = local_78->GetTextureAtlas();
                        this_00 = (TextureAtlasReference*)(local_78 + 32);
                        Js5DiskFileFormat::DechunkGroupFiles((PacketT*)this_00, (PacketT*)local_78, 0, uVar5, uVar4);
                        pcVar9 = (char*)this_00->GetDataPtr();
                    }
                    uVar10 = this_00->GetTextureAtlas();
                    (&param_3->field_48, uVar10, 4)->set_max_size();
                    pcVar11 = (char*)(&param_3->field_48)->data();
                    eastl::copy<char*, char*>(pcVar9, pcVar9 + uVar10, pcVar11);
                } else {
                    uVar6 = logger::default_logger();
                    logger::Logger::Log(
                        uVar6, 0, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                        "Js5DiskCache.cpp",
                        2058,
                        "Warning - Attempted to request JS5Index for archive %i, before resource provider was ready!",
                        param_3->field_4);
                }
            }
            local_78->~VBOMapper();
            ((local_78 + 32))->~VBOMapper();
        }
        return uVar12 & 4294967295;
    }

    // 0x1009edb70, 624 bytes, placed by class name
    // Js5DiskCache::PerformDelete(Js5DiskCache::Database&, Js5DiskCache::QueueRequestItem const&)
    undefined8 Js5DiskCache::PerformDelete(Database* param_1, QueueRequestItem* param_2) {
        char cVar1;
        uint uVar2;
        mutex* pmVar3;
        long lVar4;
        char* pcVar5;
        undefined8 uVar6;
        undefined1* puVar7;
        int iVar8;
        ulong uVar9;
        undefined7 uVar10;
        QueueResultItem local_90;
        array<std::mutex, 67ul>* local_40;
        scoped_lock<std::mutex> local_38[8];

        if (param_1->field_28 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2145, "Tried to delete an entry in read-only archive: %i", (ulong)param_2->field_4);
        }
        local_40 = (array<std::mutex, 67ul>*)&field_63256;
        pmVar3 = (mutex*)std::array<std::mutex, 67ul>::operator[](local_40, (long)(int)param_2->field_4);
        new (&local_90) std::scoped_lock<std::mutex>(pmVar3);
        lVar4 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)(int)param_2->field_4);
        pcVar5 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar4 + 8), (long)(int)param_2->field_8 + 1);
        if (*pcVar5 != '\x03') {
            uVar6 = logger::default_logger();
            logger::Logger::Log(
                uVar6, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2156, "slotState for %d, %d was not STATE_BUSY during PerformDelete", param_2->field_4,
                param_2->field_8);
            puVar7 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar4 + 8), (long)(int)param_2->field_8 + 1);
            *puVar7 = 3;
        }
        local_90.~scoped_lock();
        if (param_2->field_8 == 4294967295) {
            lVar4 = param_1->GetDeleteIndexStatement();
            uVar9 = 0;
            if (lVar4 == 0) {
                return 0;
            }
        } else {
            lVar4 = param_1->GetDeleteStatement();
            if (lVar4 == 0) {
                return 0;
            }
            uVar2 = _jag_sqlite3_bind_int(lVar4, 1, param_2->field_8);
            uVar9 = (ulong)uVar2;
        }
        new (&local_90) QueueResultItem(param_2);
        if ((int)uVar9 == 0) {
            uVar2 = _jag_sqlite3_step(lVar4);
            local_90.field_40 = (uint)(uVar2 != 101) * 2 + 1;
            uVar9 = 0;
            if (uVar2 != 101) {
                uVar9 = (ulong)uVar2;
            }
            _jag_sqlite3_reset(lVar4);
        } else {
            local_90.field_40 = 3;
        }
        iVar8 = (int)uVar9;
        cVar1 = SQLInit::IsDBLockedError(iVar8);
        uVar10 = (undefined7)(uVar9 >> 8);
        if (cVar1 == '\0') {
            param_1->HandleSQLError(iVar8);
            pmVar3 = (mutex*)std::array<std::mutex, 67ul>::operator[](local_40, (long)(int)param_2->field_4);
            std::scoped_lock<std::mutex>::scoped_lock(local_38, pmVar3);
            lVar4 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
                (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)&field_67544, (long)(int)param_2->field_4);
            puVar7 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar4 + 8), (long)(int)param_2->field_8 + 1);
            *puVar7 = 2;
            std::scoped_lock<std::mutex>::~scoped_lock(local_38);
            uVar6 = CONCAT71(uVar10, iVar8 == 0);
        } else {
            uVar6 = CONCAT71(uVar10, 1);
            RescheduleRequest((Js5DiskCache*)this, param_2, true);
        }
        local_90.~Js5WorkerRequestMessage();
        return uVar6;
    }

    // 0x1009edde0, 320 bytes, placed by class name
    // Js5DiskCache::PerformInfoStatement(Js5DiskCache::Database&)
    void Js5DiskCache::PerformInfoStatement(Database* param_1) {
        int iVar1;
        int iVar2;
        uint uVar3;
        long lVar4;
        char* pcVar5;

        if (param_1->field_368 == 1) {
            lVar4 = param_1->GetFreeListCountStatement();
        } else {
            if (param_1->field_368 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                                "Js5DiskCache.cpp",
                                1834, (char*)0);
            }
            lVar4 = param_1->GetPageCountStatement();
            param_1->field_368 = 1;
        }
        if (lVar4 != 0) {
            iVar1 = param_1->field_368 + 1;
            iVar2 = 0;
            if (iVar1 != 2) {
                iVar2 = iVar1;
            }
            param_1->field_368 = iVar2;
            iVar2 = _jag_sqlite3_step(lVar4);
            if (iVar2 != 101) {
                if (iVar2 == 100) {
                    pcVar5 = (char*)_jag_sqlite3_column_name(lVar4, 0);
                    if (pcVar5 != (char*)0) {
                        iVar2 = _strcmp(pcVar5, "page_count");
                        if (iVar2 == 0) {
                            uVar3 = _jag_sqlite3_column_int(lVar4, 0);
                            if (uVar3 != param_1->field_356) {
                                field_70392 = 1;
                                param_1->field_356 = uVar3;
                            }
                        } else {
                            iVar2 = _strcmp(pcVar5, "freelist_count");
                            if ((iVar2 == 0) &&
                                (iVar2 = _jag_sqlite3_column_int(lVar4, 0), iVar2 != param_1->field_360)) {
                                param_1->field_360 = iVar2;
                            }
                        }
                    }
                    _jag_sqlite3_reset(lVar4);
                } else {
                    param_1->HandleSQLError(iVar2);
                }
            }
        }
    }

    // 0x1009edf60, 976 bytes, placed by class name
    // Js5DiskCache::PerformRead(Js5DiskCache::Database&, Js5DiskCache::QueueRequestItem const&)
    undefined8 Js5DiskCache::PerformRead(Database* param_1, QueueRequestItem* param_2) {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        undefined4 uVar3;
        int iVar4;
        mutex* pmVar5;
        long lVar6;
        char* pcVar7;
        undefined8 uVar8;
        undefined1* puVar9;
        uchar* puVar10;
        ulong uVar11;
        undefined7 uVar12;
        QueueResultItem local_a8;
        array<std::mutex, 67ul>* local_60;
        array<Js5DiskCache::ArchiveCacheStatusData, 67ul>* local_58;
        uint local_4c;
        scoped_lock<std::mutex> local_48[8];
        char local_31;

        local_60 = (array<std::mutex, 67ul>*)&field_63256;
        pmVar5 = (mutex*)std::array<std::mutex, 67ul>::operator[](local_60, (long)(int)param_2->field_4);
        new (&local_a8) std::scoped_lock<std::mutex>(pmVar5);
        this_00 = &field_67544;
        lVar6 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](
            (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)this_00, (long)(int)param_2->field_4);
        pcVar7 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
            (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar6 + 8), (long)(int)param_2->field_8 + 1);
        if (*pcVar7 != '\x03') {
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                1901, "slotState for %d, %d was not STATE_BUSY during PerformRead", param_2->field_4, param_2->field_8);
            puVar9 = (undefined1*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar6 + 8), (long)(int)param_2->field_8 + 1);
            *puVar9 = 3;
        }
        local_a8.~scoped_lock();
        local_58 = (array<Js5DiskCache::ArchiveCacheStatusData, 67ul>*)this_00;
        if (param_2->field_8 == 4294967295) {
            lVar6 = param_1->GetSelectIndexStatement();
            uVar11 = 0;
            if (lVar6 == 0) {
                return 0;
            }
        } else {
            lVar6 = param_1->GetSelectStatement();
            if (lVar6 == 0) {
                return 0;
            }
            uVar2 = _jag_sqlite3_bind_int(lVar6, 1, param_2->field_8);
            uVar11 = (ulong)uVar2;
        }
        new (&local_a8) QueueResultItem(param_2);
        local_a8.field_40 = 3;
        local_31 = '\x03';
        if ((int)uVar11 != 0)
            goto LAB_1009ee1a2;
        uVar2 = _jag_sqlite3_step(lVar6);
        uVar11 = (ulong)uVar2;
        local_31 = '\x02';
        if (uVar2 == 101) {
            uVar3 = 2;
        LAB_1009ee194:
            uVar11 = 0;
            local_a8.field_40 = uVar3;
        } else {
            if (uVar2 == 100) {
                uVar3 = _jag_sqlite3_column_int(lVar6, 2);
                cVar1 = '\x01';
                local_4c = _jag_sqlite3_column_int(lVar6, 1);
                if (param_2->field_8 != 4294967295) {
                    cVar1 = (char)param_2->field_36;
                }
                cVar1 = IsCRCValid(uVar3, param_2->field_16, (int)cVar1);
                if (((cVar1 == '\0') || (local_4c != param_2->field_12)) &&
                    ((param_2->field_8 != 4294967295 || (*(char*)((long)&param_2->field_32 + 2) == '\0')))) {
                    uVar3 = 2;
                    PerformDelete(this, param_1, param_2);
                } else {
                    iVar4 = _jag_sqlite3_column_bytes(lVar6, 0);
                    puVar10 = (uchar*)_jag_sqlite3_column_blob(lVar6, 0);
                    cVar1 = UnpackReadData(this, puVar10, iVar4, &local_a8);
                    if (cVar1 == '\0') {
                        uVar3 = 2;
                        PerformDelete(this, param_1, param_2);
                    } else {
                        local_31 = '\x01';
                        uVar3 = 1;
                    }
                }
                goto LAB_1009ee194;
            }
            local_31 = '\x03';
        }
        _jag_sqlite3_reset(lVar6);
    LAB_1009ee1a2:
        iVar4 = (int)uVar11;
        cVar1 = SQLInit::IsDBLockedError(iVar4);
        uVar12 = (undefined7)(uVar11 >> 8);
        if (cVar1 == '\0') {
            param_1->HandleSQLError(iVar4);
            std::scoped_lock<std::mutex>::scoped_lock(local_48, (mutex*)&field_1512768);
            (&field_1512832, &local_a8)->push_back();
            if (((local_a8.field_4 != param_2->field_4) || (local_a8.field_8 != param_2->field_8)) ||
                (local_a8.field_0 != param_2->field_0)) {
                /* WARNING: Subroutine does not return */
                LogAssert("result.m_archive == qi.m_archive && result.m_group == qi.m_group && result.m_requestType == "
                          "qi.m_requestType",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          1995, (char*)0);
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
            uVar8 = CONCAT71(uVar12, iVar4 == 0);
            cVar1 = '\x02';
            if (iVar4 == 0) {
                cVar1 = local_31;
            }
            if (cVar1 == '\x03') {
                /* WARNING: Subroutine does not return */
                LogAssert("slotState != Js5DiskCacheFileStatus::STATE_BUSY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskCache.cpp",
                          2004, (char*)0);
            }
            pmVar5 = (mutex*)std::array<std::mutex, 67ul>::operator[](local_60, (long)(int)param_2->field_4);
            std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar5);
            lVar6 = std::array<Js5DiskCache::ArchiveCacheStatusData, 67ul>::operator[](local_58,
                                                                                       (long)(int)param_2->field_4);
            pcVar7 = (char*)eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>::operator[](
                (vector<Js5DiskCacheFileStatus, eastl::allocator>*)(lVar6 + 8), (long)(int)param_2->field_8 + 1);
            *pcVar7 = cVar1;
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        } else {
            uVar8 = CONCAT71(uVar12, 1);
            RescheduleRequest(this, param_2, true);
        }
        local_a8.~Js5WorkerRequestMessage();
        return uVar8;
    }

    // 0x1009ee370, 64 bytes, placed by class name
    // Js5DiskCache::RescheduleRequestInner(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::RescheduleRequestInner(QueueRequestItem* param_1) {
        field_70420 = field_70420 + 1;
        (&field_790504, param_1)->push_back();
        IncrementCounterForJob(this, param_1, false);
    }

    // 0x1009ee400, 304 bytes, placed by class name
    // Js5DiskCache::Database::SetProperties(bool)
    void Js5DiskCache::Database::SetProperties(bool param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined8 local_258;
        fixed_string<char, 512, true, eastl::allocator> local_250[552];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_250);
        local_250->append("PRAGMA page_size;PRAGMA page_count;PRAGMA freelist_count;PRAGMA temp_store=MEMORY;PRAGMA "
                          "journal_mode=OFF;PRAGMA synchronous=OFF;PRAGMA auto_vacuum=NONE;");
        if (param_1) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_250, "%s=%u;%s=%u;", "PRAGMA application_id", 1701737810,
                               "PRAGMA user_version", 2);
        } else {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_250, "%s;%s;", "PRAGMA application_id", "PRAGMA user_version");
        }
        local_258 = 0;
        lVar1 = field_376;
        uVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        _jag_sqlite3_exec(lVar1, uVar2, SQLcallback, this, &local_258);
        /* WARNING: Subroutine does not return */
        local_250->~fixed_string();
    }

    // 0x1009ee530, 48 bytes, placed by class name
    // Js5DiskCache::Database::ClearStatement(sqlite3_stmt*&)
    bool Js5DiskCache::Database::ClearStatement(sqlite3_stmt** param_1) {
        int iVar1;
        bool bVar2;

        if (*param_1 == (sqlite3_stmt*)0) {
            bVar2 = true;
        } else {
            iVar1 = _jag_sqlite3_finalize();
            *param_1 = (sqlite3_stmt*)0;
            bVar2 = iVar1 == 0;
        }
        return bVar2;
    }

    // 0x1009ee560, 160 bytes, placed by class name
    // Js5DiskCache::OnCacheFolderChanged(Filename const&, Filename const&)
    void Js5DiskCache::OnCacheFolderChanged(Filename* param_1, Filename* param_2) {
        char cVar1;
        __5 local_30;
        thread local_28[8];

        cVar1 = Filename::operator!=(param_1, param_2);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "_oldPath != _newPath",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2430, (char*)0);
        }
        local_30.field_0 = this;
        std::thread::thread<Js5DiskCache::OnCacheFolderChanged(Filename_const&, Filename_const&)::__5, Filename_const&,
                            Filename_const&, void>(local_28, &local_30, param_1, param_2);
        cVar1 = std::thread::joinable(local_28);
        if (cVar1 != '\0') {
            std::thread::detach();
        }
        std::thread::~thread(local_28);
    }

    // 0x1009ee620, 2112 bytes, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)
    void Js5DiskCache::OnCacheFolderChangedImpl(Filename* param_1, Filename* param_2) {
        long* plVar1;
        undefined4 uVar2;
        char cVar3;
        undefined1 uVar4;
        bool bVar5;
        undefined8 uVar6;
        long lVar7;
        long lVar8;
        ulonglong uVar9;
        undefined4* puVar10;
        ArchiveToMove* pAVar11;
        Database* this_00;
        char* pcVar12;
        int* piVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        undefined1* this_01;
        Js5DiskCache* this_02;
        ArchiveInUseGuard* this_03;
        SystemTimer* this_04;
        ulong uVar16;
        VBOMapper local_5e18;
        mutex* local_5df8;
        undefined1 local_5df0[24];
        array* local_5dd8;
        XPlotBlender<oldscape::graphics::XPlot_NormalAlpha> local_5dd0[8];
        undefined8 local_5dc8;
        Js5DiskCache* local_5dc0;
        int* local_5db8;
        undefined1 local_5db0[16];
        Filename local_5da0[19];
        ArchiveInUseGuard local_5c70[15];
        undefined1 local_5b40[312];
        fixed_list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove, 67ul, true,
                   eastl::allocator>
            local_5a08[22384];
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::operator/(local_168, param_1, (fixed_string*)&field_70320);
        Filename::operator/(local_298, param_2, (fixed_string*)&field_70320);
        this_01 = field_1512920;
        local_5dc0 = this;
        cVar3 = Filename::operator!=((Filename*)this_01, local_168);
        if (cVar3 == '\0') {
            local_5dc0->field_1513224 = 1;
            Filename::operator=((Filename*)this_01, local_298);
            this_01->CreateDirectories(0);
            eastl::fixed_list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                              67ul, true, eastl::allocator>::fixed_list(local_5a08);
            this_02 = (Js5DiskCache*)&local_5dc0->field_8;
            lVar7 = this_02->begin();
            local_5df0._16_8_ = this_02;
            lVar8 = this_02->end();
            if (lVar7 != lVar8) {
                do {
                    if (*(int*)(lVar7 + 8) != -1) {
                        if (*(char*)(lVar7 + 15) == '\0') {
                            *(undefined1*)(lVar7 + 15) = 1;
                            uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                            *(ulonglong*)(lVar7 + 16) = uVar9;
                        }
                        puVar10 = (undefined4*)eastl::list<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                            push_back(
                                (list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                             Filename_const&)::ArchiveToMove,
                                      eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_5a08);
                        *puVar10 = *(undefined4*)(lVar7 + 8);
                        GetDatabaseFilename((Js5DiskCache*)local_5b40, (int)local_5dc0,
                                            SUB41(*(undefined4*)(lVar7 + 8), 0));
                        Filename::operator=((Filename*)(puVar10 + 2), (Filename*)local_5b40);
                        this_02 = (Js5DiskCache*)local_5b40;
                        local_5b40->~pair();
                        plVar1 = m_notificationHandler;
                        if (m_notificationHandler != (long*)0) {
                            local_5db8 = (int*)((lVar7 + 48))->GetName();
                            uVar6 = ((puVar10 + 2))->GetName();
                            (**(code**)*plVar1)((Js5DiskCache*)local_5b40, plVar1, local_5db8, uVar6);
                            (**(code**)(*m_notificationHandler + 16))();
                            this_02 = (Js5DiskCache*)local_5b40;
                            local_5b40->~VBOMapper();
                        }
                    }
                    lVar7 = lVar7 + 472;
                } while (lVar7 != lVar8);
            }
            uVar9 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_02);
            local_5db0._8_8_ = uVar9 + 10000;
            local_5dd8 = (array*)&local_5dc0->field_70224;
            local_5df8 = (mutex*)&local_5dc0->field_1512272;
            do {
                cVar3 = eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                           Filename_const&)::ArchiveToMove,
                                    eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                    empty(
                        (list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                              eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)local_5a08);
                if (cVar3 != '\0')
                    break;
                pAVar11 = (ArchiveToMove*)
                    eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                                eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::front();
                OnCacheFolderChangedImpl(Filename_const&, Filename_const&) new (local_5b40)::ArchiveToMove(pAVar11);
                uVar2 = local_5b40._0_4_;
                uVar16 = (ulong)(int)local_5b40._0_4_;
                eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                    pop_front(
                        (list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                              eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)local_5a08);
                this_00 = (Database*)std::array<Js5DiskCache::Database, 67ul>::operator[](
                    (array<Js5DiskCache::Database, 67ul>*)local_5df0._16_8_, uVar16);
                this_04 = (SystemTimer*)this_00->field_48;
                new (local_5c70) Filename(this_04);
                Filename::Filename(local_5da0, (Filename*)(local_5b40 + 8));
                this_03 = local_5c70;
                cVar3 = Filename::operator!=((Filename*)this_03, local_5da0);
                if (cVar3 != '\0') {
                    new (local_5df0) ArchiveInUseGuard(local_5dd8, -1);
                    new (&local_5e18) std::scoped_lock<std::mutex>(local_5df8);
                    cVar3 = local_5df0->Lock(uVar2);
                    local_5e18.~scoped_lock();
                    local_5db8 = (int*)CONCAT71(local_5db8._1_7_, cVar3);
                    if (cVar3 == '\0') {
                    LAB_1009eea50:
                        eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                           Filename_const&)::ArchiveToMove,
                                    eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                            push_back(
                                (list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                             Filename_const&)::ArchiveToMove,
                                      eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_5a08,
                                (ArchiveToMove*)local_5b40);
                        new (&local_5e18) callstack::Callstack();
                        local_5b40._4_4_ = local_5e18._0_4_;
                    } else {
                        cVar3 = this_00->Close();
                        if (cVar3 == '\0')
                            goto LAB_1009eea50;
                        new (local_5db0) callstack::Callstack();
                        cVar3 = local_5c70->Rename(local_5da0, local_5db0);
                        local_5dc8 = CONCAT71(local_5dc8._1_7_, cVar3);
                        if (cVar3 == '\0') {
                            cVar3 = local_5db0->IsErrorFileExists();
                            if (cVar3 != '\0') {
                                cVar3 = local_5da0->RemoveFile(local_5db0);
                                if (cVar3 != '\0') {
                                    uVar4 = local_5c70->Rename(local_5da0, local_5db0);
                                    local_5dc8 = CONCAT71(local_5dc8._1_7_, uVar4);
                                }
                            }
                        }
                        if ((char)local_5dc8 == '\0') {
                            local_5b40._4_4_ = local_5db0._0_4_;
                            eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                               Filename_const&)::ArchiveToMove,
                                        eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                                push_back(
                                    (list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                                 Filename_const&)::ArchiveToMove,
                                          eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        local_5a08,
                                    (ArchiveToMove*)local_5b40);
                        } else {
                            local_5db0._8_8_ = m_notificationHandler;
                            if (m_notificationHandler != (long*)0) {
                                oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<
                                    int>(local_5dd0, 0);
                                local_5dc8 = local_5c70->GetName();
                                uVar6 = local_5da0->GetName();
                                (**(code**)(*(long*)local_5db0._8_8_ + 8))(&local_5e18, local_5db0._8_8_, local_5dd0,
                                                                           local_5dc8, uVar6);
                                (**(code**)(*m_notificationHandler + 16))(m_notificationHandler, &local_5e18);
                                local_5e18.~VBOMapper();
                            }
                            Filename::operator=((Filename*)this_04, local_5da0);
                            uVar9 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_04);
                            local_5db0._8_8_ = uVar9 + 10000;
                        }
                        this_00->Open();
                    }
                    if ((char)local_5db8 == '\0') {
                        this_03 = (ArchiveInUseGuard*)local_5df0;
                        this_03->~ArchiveInUseGuard();
                    } else {
                        pcVar12 = (char*)std::array<signed char, 67ul>::operator[](
                            (array<signed char, 67ul>*)local_5dd8, uVar16);
                        if (*pcVar12 != -1) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("!okToClose || m_archivesInUse[archiveID] == -1",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      2578, (char*)0);
                        }
                        this_03 = (ArchiveInUseGuard*)local_5df0;
                        this_03->~ArchiveInUseGuard();
                        if (((char)local_5db8 != '\0') && (*pcVar12 != '\0')) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("!okToClose || m_archivesInUse[archiveID] == 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "caching/Js5DiskCache.cpp",
                                      2581, (char*)0);
                        }
                    }
                }
                uVar9 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_03);
                local_5da0->~pair();
                local_5c70->~pair();
                OnCacheFolderChangedImpl(Filename_const&, Filename_const&) local_5b40->~ArchiveToMove();
            } while (uVar9 <= (ulong)local_5db0._8_8_);
            cVar3 = eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                                eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                empty((list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)local_5a08);
            if (cVar3 == '\0') {
                eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                    begin(
                        (list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                              eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)local_5c70);
                eastl::list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>::
                    end((list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                              eastl::fixed_node_allocator<328ul, 67ul, 8ul, 0ul, true, eastl::allocator>>*)local_5da0);
                bVar5 = eastl::operator!=((ListIterator*)local_5c70, (ListIterator*)local_5da0);
                if (bVar5) {
                    do {
                        piVar13 = (int*)eastl::ListIterator<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove*,
                            (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove&>::
                        operator*((
                            ListIterator<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                                Filename_const&)::ArchiveToMove,
                                         (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove*,
                                         (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove&>*)
                                      local_5c70);
                        lVar7 = std::array<Js5DiskCache::Database, 67ul>::operator[](
                            (array<Js5DiskCache::Database, 67ul>*)local_5df0._16_8_, (long)*piVar13);
                        plVar1 = m_notificationHandler;
                        if (m_notificationHandler != (long*)0) {
                            local_5db8 = piVar13 + 1;
                            local_5db0._8_8_ = ((lVar7 + 48))->GetName();
                            uVar6 = ((piVar13 + 2))->GetName();
                            (**(code**)(*plVar1 + 8))((VBOMapper*)local_5b40, plVar1, local_5db8, local_5db0._8_8_,
                                                      uVar6);
                            (**(code**)(*m_notificationHandler + 16))(m_notificationHandler, (VBOMapper*)local_5b40);
                            local_5b40->~VBOMapper();
                        }
                        uVar6 = logger::default_logger();
                        uVar14 = ((lVar7 + 48))->GetName();
                        local_5b40->GetErrorString();
                        uVar15 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar6, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                            "caching/Js5DiskCache.cpp",
                                            2604, "Could not move database %s (%s)", uVar14, uVar15);
                        local_5b40->~basic_string();
                        eastl::ListIterator<
                            Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                            (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove*,
                            (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove&>::
                        operator++((
                            ListIterator<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                                                Filename_const&)::ArchiveToMove,
                                         (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove*,
                                         (Filename_const&)->OnCacheFolderChangedImpl(Filename_const&)::ArchiveToMove&>*)
                                       local_5c70);
                        bVar5 = eastl::operator!=((ListIterator*)local_5c70, (ListIterator*)local_5da0);
                    } while (bVar5);
                }
            }
            local_168->RemoveEmptyDirectory(0);
            local_5dc0->field_1513224 = 0;
            eastl::fixed_list<Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove,
                              67ul, true, eastl::allocator>::~fixed_list(local_5a08);
        } else {
            uVar6 = logger::default_logger();
            logger::Logger::Log(
                uVar6, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.cpp",
                2457, "Can\'t move databases as the oldPath does not match our cache location");
        }
        local_298->~pair();
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009eef30, 16 bytes, complete-object constructor, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::ArchiveToMove(ArchiveToMove const&): jumps straight to the base-object constructor

    // 0x1009eefd0, 16 bytes, complete-object destructor, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::~ArchiveToMove(): jumps straight to the base-object destructor

    // 0x1009f9710, 32 bytes, base-object constructor, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::ArchiveToMove(ArchiveToMove const&)
    /* ArchiveToMove(ArchiveToMove const&) */

    void Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&,
                                                Filename_const&)::ArchiveToMove::ArchiveToMove(ArchiveToMove* param_1) {
        field_0 = param_1->field_0;
        new (field_8, (Filename*)param_1->field_8) Filename();
    }

    // 0x1009f9730, 16 bytes, base-object destructor, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::~ArchiveToMove()
    /* ~ArchiveToMove() */

    void Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove::~ArchiveToMove() {
        field_8->~pair();
    }

    // 0x100a02660, 16 bytes, placed by class name
    // Js5DiskCache::Startup()::$_3::operator()(int) const
    /* Js5DiskCache::Startup()::$_3::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void Js5DiskCache::Startup()::$_3::operator()(int param_1) {
        ThreadRunnerWrapper(field_0, param_1);
    }

    // 0x100a02990, 16 bytes, complete-object constructor, placed by class name
    // Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus::DatabasePageStatus(int, unsigned int): jumps straight to the base-object constructor

    // 0x100a02a90, 16 bytes, base-object constructor, placed by class name
    // Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus::DatabasePageStatus(int, unsigned int)
    /* DatabasePageStatus(int, unsigned int) */

    void Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus::DatabasePageStatus(int param_1, uint param_2) {
        field_0 = param_1;
        field_4 = param_2;
    }

    // 0x100a03230, 16 bytes, placed by class name
    // Js5DiskCache::GetNextVacuumCandidate()::$_4::operator()(Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus const&, Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus const&) const
    /* Js5DiskCache::GetNextVacuumCandidate()::$_4::TEMPNAMEPLACEHOLDERVALUE(Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus
   const&, Js5DiskCache::GetNextVacuumCandidate()::DatabasePageStatus const&) const */

    undefined4 Js5DiskCache::GetNextVacuumCandidate()::$_4::operator()(DatabasePageStatus* param_1,
                                                                       DatabasePageStatus* param_2) {
        return CONCAT31((int3)(param_1->field_4 >> 8), param_2->field_4 < param_1->field_4);
    }

    // 0x100a05970, 64 bytes, placed by class name
    // Js5DiskCache::OnCacheFolderChanged(Filename const&, Filename const&)::$_5::operator()(Filename const&, Filename const&) const
    /* Js5DiskCache::OnCacheFolderChanged(Filename const&, Filename
   const&)::$_5::TEMPNAMEPLACEHOLDERVALUE(Filename const&, Filename const&) const */

    void Js5DiskCache::OnCacheFolderChanged(Filename_const&, Filename_const&)::$_5::operator()(Filename* param_1,
                                                                                               Filename* param_2) {
        Js5DiskCache* this_00;

        this_00 = field_0;
        this_thread::SetThreadName("Js5Cache-Move");
        OnCacheFolderChangedImpl(this_00, param_1, param_2);
    }

    // 0x100a05cf0, 16 bytes, complete-object constructor, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::ArchiveToMove(): jumps straight to the base-object constructor

    // 0x100a05df0, 48 bytes, base-object constructor, placed by class name
    // Js5DiskCache::OnCacheFolderChangedImpl(Filename const&, Filename const&)::ArchiveToMove::ArchiveToMove()
    /* ArchiveToMove() */

    void Js5DiskCache::OnCacheFolderChangedImpl(Filename_const&, Filename_const&)::ArchiveToMove::ArchiveToMove() {
        new (((long)&field_0 + 4)) callstack::Callstack();
        new (field_8) Filename();
    }

} // namespace jag
