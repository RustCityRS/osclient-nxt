// libs/hal/filesystem/sqlite/FileSystem_SQLite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.filesystem

#include "FileSystem_SQLite.h"
#include "libs/hal/filesystem/FileSystem.h"

namespace jag {
    // 0x100009e70: FileSystem_SQLite::UpdateStats() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: FileSystem_SQLite::ProcessAllQueuedRequests() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10000b2a0: FileSystem_SQLite::SQLStatement::Get() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100b1f5e0
    auto FileSystem::NewFileSystem(const Filename& filename, FileSystem::Scope scope, const char* str, bool arg4) {
        auto result;
        bool bVar1;
        bool cVar3;
        weak_ptr<oldscape::rs2lib::IfType>* weak_ptr;
        long lVar4;

        char* local_68 = str;
        Scope local_38 = scope;
        bool local_31 = arg4;
        auto local_60 = m_FileSystemList.end();
        auto local_58 = m_FileSystemList.begin();
        uint8_t bVar2 = local_58 != local_60;
        if (bVar2 != 0) {
            do {
                weak_ptr = (weak_ptr<oldscape::rs2lib::IfType>*)*local_58;
                result = weak_ptr->lock();
                cVar3 = result.operator_cast_to_bool();
                if (!cVar3) {
                LAB_100b1f6b0:
                    bVar1 = true;
                    result.~shared_ptr();
                } else {
                    lVar4 = (result).operator->();
                    cVar3 = (*((lVar4 + 8))) == filename;
                    if ((!cVar3) || (lVar4 = (result).operator->(), *(Scope*)(lVar4 + 616) != local_38))
                        goto LAB_100b1f6b0;
                    cVar3 = IsSettingsStyle((FileSystem*)(result).operator->());
                    if (local_31 != (bool)cVar3)
                        goto LAB_100b1f6b0;
                    bVar1 = false;
                }
                if (!bVar1) {
                    if ((bVar2 & 1) != 0) {
                        return result;
                    }
                    break;
                }
                ++local_58;
                bVar2 = local_58 != local_60;
            } while (bVar2 != 0);
        }
        make_shared<FileSystem_SQLite, Filename const&, FileSystem::Scope&, char const*&, bool&>(
            &local_48, filename, &local_38, &local_68, &local_31);
        local_58.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
        weak_ptr local_48(local_58);
        m_FileSystemList.push_back(local_48);
        result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_58);
        return result;
    }

    // 0x100b1f7c0
    shared_ptr_if_not_array<FileSystem_SQLite>::type
    make_shared<FileSystem_SQLite, Filename const&, FileSystem::Scope&, char const*&, bool&>(const Filename& filename,
                                                                                             FileSystem::Scope& scope,
                                                                                             const char*& arg3,
                                                                                             bool& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        FileSystem_SQLite* local_40[2];

        auto arg1 = aligned_alloc(2624, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<FileSystem_SQLite>::type result;
        } else {
            local_40[0] = placement_new<FileSystem_SQLite, Filename const&, FileSystem::Scope&, char const*&, bool&>(
                (void*)((long)arg1 + 32), filename, scope, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<FileSystem_SQLite>, int, FileSystem_SQLite*&>(arg1, &local_44,
                                                                                               local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100b1f8e0
    FileSystem_SQLite::FileSystem_SQLite(const Filename& filename, FileSystem::Scope scope, const char* str, bool arg4)
        : FileSystem(filename, scope, str, arg4) {
        unsigned int uVar2;
        Logger* this_00;
        char* pcVar3;
        int* arg2;
        ReturnValue local_2d8;
        fixed_string<char, 24> local_1a8;
        ReturnValue local_168;

        field_2336 = '\0';
        m_usageBytes = 0;
        field_2352 = '\0';
        field_2356 = 0;
        field_2360 = 0;
        field_2364 = 0;
        new (&field_2368) std::mutex();
        new (&field_2432) eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>();
        new (&field_2464) std::function<Array<unsigned char>*(int)>();
        new (&field_2512) std::thread();
        new (&field_2520) std::mutex();
        if (field_616 == 1) {
            uVar2 = SystemPaths::GetInstanceNumber();
            if (0 < (int)uVar2) {
                GetDatabaseFilename(&local_168, this);
                local_1a8 = eastl::fixed_string<char, 24>();
                local_1a8.sprintf("-%d", (unsigned long)uVar2);
                local_2d8 = Filename(&local_1a8);
                field_8 += &local_2d8;
                local_2d8.~pair();
                if (local_168.IsFile()) {
                    GetDatabaseFilename(&local_2d8, this);
                    if (!(local_2d8.IsFile())) {
                        local_168.Copy(local_2d8, false, nullptr);
                    }
                }
            }
        }
        if (!(field_312.CreateDirectories(nullptr))) {
            field_657 = 1;
            this_00 = logger::default_logger();
            pcVar3 = field_312.GetName();
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                         "FileSystem_SQLite.cpp",
                         72, "Failed to create root folder %s", pcVar3);
        } else {
            FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*, bool)::workerNumber =
                FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*, bool)::workerNumber + 1;
            local_2d8[0] = (ReturnValue)this;
            std::thread::thread<FileSystem_SQLite::FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*,
                                                                     bool)::__1,
                                int&, void>(&local_168, &local_2d8, arg2);
            field_2328 = local_168;
            std::thread::~thread(&local_168);
            field_656 = 1;
        }
    }

    // 0x100b1fc80
    auto FileSystem_SQLite::GetDatabaseFilename() {
        auto local_150 = field_312 / &field_8;
        auto result = local_150 + ".jcache";
        return result;
    }

    // 0x100b1fe90
    FileSystem_SQLite::~FileSystem_SQLite() {

        field_2336 = '\x01';
        std::condition_variable::notify_all();
        if (field_2328.joinable()) {
            std::thread::join();
        }
        if (field_2512.joinable()) {
            std::thread::join();
        }
        (&field_2520)->~mutex();
        (&field_2512)->~thread();
        field_2464.~function();
        field_2432.~list();
        (&field_2368)->~mutex();
        (&field_2328)->~thread();
        field_1008.~fixed_map();
        field_920->~Database();
    }

    // 0x100b20010
    void PageCountCallback(void* arg1, int arg2, char** arg3, char** arg4) {
        char* pcVar1;
        int iVar2;
        unsigned long uVar3;
        long lVar4;
        unsigned long uVar5;

        if (0 < arg2) {
            uVar5 = 0;
            do {
                pcVar1 = arg4[uVar5];
                iVar2 = _strcmp(pcVar1, "page_size");
                if (iVar2 == 0) {
                    lVar4 = _strtol(arg3[uVar5], nullptr, 10);
                    *(int*)((long)arg1 + 2356) = (int)lVar4;
                } else {
                    iVar2 = _strcmp(pcVar1, "page_count");
                    if (iVar2 == 0) {
                        lVar4 = _strtol(arg3[uVar5], nullptr, 10);
                        *(unsigned long*)((long)arg1 + 2344) =
                            (unsigned long)(unsigned int)((int)lVar4 * *(int*)((long)arg1 + 2356));
                    } else {
                        iVar2 = _strcmp(pcVar1, "user_version");
                        if (iVar2 == 0) {
                            uVar3 = _strtoul(arg3[uVar5], nullptr, 10);
                            *(int*)((long)arg1 + 2360) = (int)uVar3;
                        } else {
                            iVar2 = _strcmp(pcVar1, "application_id");
                            if (iVar2 == 0) {
                                uVar3 = _strtoul(arg3[uVar5], nullptr, 10);
                                *(int*)((long)arg1 + 2364) = (int)uVar3;
                            }
                        }
                    }
                }
                uVar5 = uVar5 + 1;
            } while ((unsigned int)arg2 != uVar5);
        }
        return 0;
    }

    // 0x100b20140
    void FileSystem_SQLite::MoveFileSystem(const Filename& filename) {
        long* plVar1;
        uint64_t uVar4;
        uint64_t uVar5;
        Logger* pLVar6;
        char* pcVar7;
        char* pcVar8;
        char* pcVar9;
        ReturnValue local_510;
        uint8_t local_4f8[304];
        ReturnValue local_3c8;
        ReturnValue local_298;

        uint8_t* filename_00 = &field_312;
        Filename local_168(filename_00);
        GetDatabaseFilename(&local_298, this);
        *filename_00 = filename;
        GetDatabaseFilename(&local_3c8, this);
        bool cVar2 = filename_00->CreateDirectories(nullptr);
        if (!cVar2) {
            *filename_00 = local_168;
        } else {
            new (local_4f8) callstack::Callstack();
            cVar2 = local_298 != &local_3c8;
            plVar1 = FileSystem::m_notificationHandler;
            if (!cVar2) {
                *filename_00 = local_168;
            } else {
                if (FileSystem::m_notificationHandler != nullptr) {
                    uVar4 = Filename::operator_cast_to_char_(&local_298);
                    uVar5 = Filename::operator_cast_to_char_(&local_3c8);
                    (**(void (**)(...))*plVar1)(local_4f8 + 8, plVar1, uVar4, uVar5);
                    (**(void (**)(...))(*FileSystem::m_notificationHandler + 16))();
                    ((local_4f8 + 8))->~VBOMapper();
                }
                cVar2 = SQLClose();
                if (cVar2) {
                    new ((local_4f8 + 8)) eastl::fixed_string<char, 256>();
                    pLVar6 = logger::default_logger();
                    pcVar7 = field_8.GetName();
                    pcVar8 = local_298.GetName();
                    pcVar9 = local_3c8.GetName();
                    pLVar6->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                "sqlite/FileSystem_SQLite.cpp",
                                158, "Moving FileSystem %s from %s to %s", pcVar7, pcVar8, pcVar9);
                    cVar2 = local_298.Rename(local_3c8, local_4f8);
                    if (!cVar2) {
                        pLVar6 = logger::default_logger();
                        local_510.GetFile(&local_3c8);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar7 = local_4f8->GetErrorString<eastl::fixed_string<char, 256>>(*((local_4f8 + 8)));
                        pLVar6->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                    "filesystem/sqlite/FileSystem_SQLite.cpp",
                                    163, "Could not rename %s : %s", uVar4, pcVar7);
                        if (local_4f8->IsErrorFileExists()) {
                            if (!(local_3c8.RemoveFile(local_4f8))) {
                                pLVar6 = logger::default_logger();
                                local_510.GetFile(&local_3c8);
                                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pcVar7 = local_4f8->GetErrorString<eastl::fixed_string<char, 256>>(*((local_4f8 + 8)));
                                pLVar6->Log(false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "filesystem/sqlite/FileSystem_SQLite.cpp",
                                            168, "Could not remove existing %s : %s", uVar4, pcVar7);
                            } else {
                                cVar2 = local_298.Rename(local_3c8, local_4f8);
                            }
                        }
                    }
                    if (!cVar2) {
                        *filename_00 = local_168;
                        pLVar6 = logger::default_logger();
                        pcVar7 = field_8.GetName();
                        local_510.GetFile(&local_298);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar8 = local_3c8.GetName();
                        pcVar9 = local_4f8->GetErrorString<eastl::fixed_string<char, 256>>(*((local_4f8 + 8)));
                        pLVar6->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                    "filesystem/sqlite/FileSystem_SQLite.cpp",
                                    181, "Could not move %s from %s to %s : %s", pcVar7, uVar4, pcVar8, pcVar9);
                    } else {
                        local_168.RemoveEmptyDirectory(nullptr);
                    }
                    SQLOpen();
                    ((local_4f8 + 8))->~fixed_string();
                }
                if (FileSystem::m_notificationHandler != nullptr) {
                    cVar2 = local_4f8->IsValid();
                    plVar1 = FileSystem::m_notificationHandler;
                    if (!cVar2) {
                        LogAssert("moved == !err.IsError()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                  "filesystem/sqlite/FileSystem_SQLite.cpp",
                                  194, nullptr);
                    }
                    uVar4 = Filename::operator_cast_to_char_(&local_298);
                    uVar5 = Filename::operator_cast_to_char_(&local_3c8);
                    (**(void (**)(...))(*plVar1 + 8))(local_4f8 + 8, plVar1, local_4f8, uVar4, uVar5);
                    (**(void (**)(...))(*FileSystem::m_notificationHandler + 16))(FileSystem::m_notificationHandler,
                                                                                  local_4f8 + 8);
                    ((local_4f8 + 8))->~VBOMapper();
                }
            }
        }
    }

    // 0x100b206c0
    void FileSystem_SQLite::SQLClose() {
        PerformClose(*field_920);
    }

    // 0x100b20710
    unsigned long FileSystem_SQLite::SQLOpen() {
        uint8_t bVar2;
        int arg1;
        Logger* this_00;
        unsigned long uVar5;
        int iVar6;
        bool local_299;
        ReturnValue local_298;
        ReturnValue local_168;

        GetDatabaseFilename(&local_168, this);
        uint8_t bVar1 = local_168.IsFile();
        uint8_t* database = field_920;
        do {
            arg1 = _jag_sqlite3_open(Filename::operator_cast_to_char_(&local_168), database);
            local_299 = false;
            if (arg1 == 0) {
                arg1 = SQLCheckProperties(*database, local_299, (bool)(bVar1 ^ 1));
                if (arg1 != 0)
                    goto LAB_100b207dc;
                if (field_658 == false) {
                    local_298[0] = (ReturnValue)0;
                    arg1 = _jag_sqlite3_exec(
                        *(uint64_t*)database,
                        "CREATE TABLE IF NOT EXISTS cache(KEY      STRING PRIMARY KEY UNIQUE,DATA     BLOB);", 0, 0,
                        &local_298);
                    iVar6 = 1;
                } else {
                    GetCurrentTableList(field_1008);
                    iVar6 = 1;
                    arg1 = 0;
                }
            } else {
            LAB_100b207dc:
                if (local_299 == false) {
                    bVar2 = SQLInit::IsDBCorruptionError(arg1);
                    iVar6 = 2;
                    if ((bVar2 | arg1 == 1) != 1)
                        goto LAB_100b2078b;
                }
                if (PerformClose(*database) == '\0') {
                    this_00 = logger::default_logger();
                    iVar6 = 0;
                    this_00->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                 "sqlite/FileSystem_SQLite.cpp",
                                 934, "Could not close database");
                } else {
                    GetDatabaseFilename(&local_298, this);
                    local_298.RemoveFile(nullptr);
                    field_1008.clear();
                    iVar6 = 0;
                }
            }
        LAB_100b2078b:
            if (iVar6 != 0) {
                if (iVar6 == 2) {
                    HandleSQLError(*database, arg1);
                    uVar5 = 0;
                } else {
                    uVar5 = (((uint64_t)((int64_t)((unsigned long)database >> 8)) << 8) | (uint8_t)1);
                }
                local_168.~pair();
                return uVar5 & 4294967295;
            }
        } while (true);
    }

    // 0x100b20950
    void FileSystem_SQLite::ThreadRunnerWrapper(int arg1) {
        eastl::string local_38;

        new (&local_38) eastl::string((CtorSprintf*)"FileSystemSQL-%d", arg1);
        this_thread::SetThreadName(&local_38);
        ThreadRunnerSEHWrapper();
    }

    // 0x100b209d0
    void FileSystem_SQLite::ThreadRunnerSEHWrapper() {
        bool cVar1 = field_2336;
        while (((!cVar1 || (cVar1 = field_888.empty(), !cVar1)) && (field_657 == '\0'))) {
            ThreadRunner();
            cVar1 = field_2336;
        }
    }

    // 0x100b20a20
    void FileSystem_SQLite::ThreadRunner() {
        uint8_t* this_00;
        uint8_t* mutex;
        int* piVar2;
        QueueItem* pQVar3;
        type* arg2;
        duration<long long, std::ratio<1l, 1000l>> local_278;
        QueueItem local_268;

        BucketManager::Init(16, 0);
        BucketManager::CreateBucket(4, 16, 4);
        BucketManager::CreateBucket(8, 32, 8);
        BucketManager::CreateBucket(16, 32, 16);
        BucketManager::CreateBucket(32, 32, 32);
        BucketManager::CreateBucket(48, 8, 16);
        BucketManager::CreateBucket(64, 8, 64);
        BucketManager::CreateBucket(96, 24, 32);
        BucketManager::CreateBucket(128, 64, 64);
        BucketManager::CreateBucket(512, 8, 64);
        BucketManager::CreateBucket(1024, 8, 64);
        BucketManager::CreateBucket(2048, 2, 64);
        BucketManager::CreateBucket(4096, 2, 64);
        bool cVar1 = SQLInit::Initialise();
        if ((!cVar1) || (cVar1 = SQLOpen(), !cVar1)) {
            field_657 = 1;
        } else {
            this_00 = &field_888;
            mutex = &field_776;
        LAB_100b20b9d:
            if ((field_2336 == '\0') || (cVar1 = this_00->empty(), !cVar1)) {
                cVar1 = this_00->empty();
                if (cVar1) {
                    local_268 = std::unique_lock<std::mutex>(*mutex);
                    local_278.duration<int>(500, arg2);
                    field_840.wait_for<long long, std::ratio<1l, 1000l>>(local_268, local_278);
                }
                if (FileSystem::m_resetPending != '\0') {
                    local_278 = std::scoped_lock(*mutex);
                    if ((FileSystem::m_resetPending == '\0') || (FileSystem::m_runningReset != '\0')) {
                        goto LAB_100b20b9d;
                    }
                    FileSystem::m_runningReset = '\x01';
                    while (piVar2 = (int*)this_00->front(), *piVar2 != 3) {
                        this_00->pop_front();
                    }
                    cVar1 = this_00->empty();
                    if (!cVar1) {
                        piVar2 = (int*)this_00->front();
                        if (*piVar2 == 3) {
                            local_268 = filesystem::QueueItem();
                            pQVar3 = (QueueItem*)this_00->front();
                            local_268.swap(*pQVar3);
                            this_00->pop_front();
                            ProcessRequest(local_268);
                        }
                    } else {
                        FileSystem::m_resetPending = '\0';
                        FileSystem::m_runningReset = '\0';
                    }
                }
                cVar1 = this_00->empty();
                if (!cVar1) {
                    local_268 = filesystem::QueueItem();
                    local_278 = std::scoped_lock(*mutex);
                    cVar1 = this_00->empty();
                    if (!cVar1) {
                        pQVar3 = (QueueItem*)this_00->front();
                        local_268.swap(*pQVar3);
                        this_00->pop_front();
                    }
                    if ((local_268.field_0 != -1) && ((field_2336 == '\0' || (local_268.field_0 != 0)))) {
                        ProcessRequest(local_268);
                    }
                }
                goto LAB_100b20b9d;
            }
            SQLInit::Destroy();
            SQLClose();
        }
    }

    // 0x100b20e10
    void FileSystem_SQLite::ServiceInstance() {
        QueueItem* queueItem;
        int iVar2;
        unique_lock<std::mutex> local_278;
        QueueItem local_268;

        uint8_t* this_00 = &field_2432;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            local_278 = std::unique_lock<std::mutex>(field_2368);
            cVar1 = this_00->empty();
            if (!cVar1) {
                iVar2 = -100;
                do {
                    iVar2 = iVar2 + 1;
                    if (iVar2 == 0)
                        break;
                    local_268 = filesystem::QueueItem();
                    queueItem = (QueueItem*)this_00->front();
                    local_268.swap(*queueItem);
                    this_00->pop_front();
                    local_278.unlock();
                    &local_278->ProcessResponse(local_268);
                    local_278.lock();
                    cVar1 = this_00->empty();
                } while (!cVar1);
            }
        }
    }

    // 0x100b20f30
    void FileSystem_SQLite::GetUsageQuota() {}

    // 0x100b20f40
    void FileSystem_SQLite::HandleSQLErrorImpl(FileSystem_SQLite::Database& database, int arg2) {
        uint64_t uVar4;
        int arg4;
        char* pcVar5;
        uint64_t in_stack_fffffffffffffe58;
        ReturnValue local_190;
        uint8_t local_170[312];

        uint32_t uVar6 = (uint32_t)((unsigned long)in_stack_fffffffffffffe58 >> 32);
        if (arg2 == 0) {
            LogAssert("rc != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      367, nullptr);
        }
        long lVar1 = database.field_0;
        auto pLVar3 = logger::default_logger();
        if (lVar1 == 0) {
            pcVar5 = "SQLError[%d]";
            arg4 = 374;
        } else {
            _jag_sqlite3_errmsg(database.field_0);
            pcVar5 = "SQLError[%d]: %s";
            arg4 = 370;
        }
        pLVar3->Log(false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                    "FileSystem_SQLite.cpp",
                    arg4, pcVar5, (((uint64_t)uVar6 << 32) | (uint32_t)arg2));
        if (SQLInit::IsDBCorruptionError(arg2)) {
            GetDatabaseFilename((ReturnValue*)(local_170 + 8), this);
            pLVar3 = logger::default_logger();
            pcVar5 = ((local_170 + 8))->GetName();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                        "FileSystem_SQLite.cpp",
                        381, "Database corrupted, deleting %s and starting again", pcVar5);
            SQLClose();
            new (local_170) callstack::Callstack();
            if (!(((local_170 + 8))->RemoveFile(local_170))) {
                pLVar3 = logger::default_logger();
                local_190 = local_170->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar3->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                            "sqlite/FileSystem_SQLite.cpp",
                            387, "Database was corrupted, but file could not be deleted to recover: %s", uVar4);
            }
            field_1008.clear();
            SQLOpen();
            ((local_170 + 8))->~pair();
        }
    }

    // 0x100b21180
    void FileSystem_SQLite::CheckSettingsTable(const char* str, bool arg2) {
        uint64_t in_register_00000011;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        auto local_48 = field_1008.find(stringtools::hash32(str));
        local_40.end();
        if ((local_48 == local_40 == '\x01') && ((char)local_34 != '\0')) {
            CreateTable(str);
        }
    }

    // 0x100b212e0
    void FileSystem_SQLite::CreateTable(const char* str) {
        eastl::string* this_00;
        unsigned int local_15c;

        fixed_string<char, 256> local_158;
        local_158.sprintf("CREATE TABLE IF NOT EXISTS \'%s\'(KEY STRING PRIMARY KEY UNIQUE,DATA TEXT);PRAGMA "
                          "page_size;PRAGMA page_count;",
                          str);
        uint64_t local_168 = 0;
        uint64_t uVar1 = *(uint64_t*)field_920;
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int arg2 = _jag_sqlite3_exec(uVar1, uVar2, PageCountCallback, this, &local_168);
        if (arg2 == 0) {
            local_15c = stringtools::hash32(str);
            this_00 = &field_1008[local_15c];
            eastl::string::assign(this_00, str);
        }
        HandleSQLError(*field_920, arg2);
    }

    // 0x100b21400
    void FileSystem_SQLite::BeginTransactionImpl() {
        int arg2;

        if (field_2352 == '\0') {
            arg2 = _jag_sqlite3_step(field_920->GetBeginStatement());
            if (arg2 == 101) {
                field_2352 = '\x01';
                arg2 = 0;
            }
            HandleSQLError(*field_920, arg2);
        }
    }

    // 0x100b21490
    void FileSystem_SQLite::EndTransactionImpl() {
        int arg2;

        if (field_2352 != '\0') {
            arg2 = _jag_sqlite3_step(field_920->GetEndStatement());
            if (arg2 == 101) {
                field_2352 = '\0';
                arg2 = 0;
            }
            HandleSQLError(*field_920, arg2);
        }
    }

    // 0x100b21500
    unsigned long FileSystem_SQLite::PerformWrite(FileSystem_SQLite::Database& database,
                                                  const filesystem::QueueItem& queueItem) {
        int arg2;
        unsigned int uVar2;
        uint32_t uVar3;
        char* pcVar4;
        long lVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        unsigned long unaff_RBX;
        ReturnValue local_520;
        Filename local_4f0;
        fixed_string<char, 256> local_3c0;
        Filename local_298;

        SQLStatement local_508(database);
        Filename local_168(&queueItem.field_8);
        if (field_658 == false) {
            uVar6 = database.GetInsertStatement();
            pcVar4 = local_168.GetName();
            arg2 = _jag_sqlite3_bind_text(uVar6, 1, pcVar4, 4294967295, 18446744073709551615);
            if (arg2 == 0) {
                uVar2 = IsSettingsStyle();
                unaff_RBX = (unsigned long)uVar2;
                uVar7 = queueItem.field_312.data();
                uVar3 = queueItem.field_312.end();
                if ((char)uVar2 == '\0') {
                    arg2 = _jag_sqlite3_bind_blob(uVar6, 2, uVar7, uVar3, 18446744073709551615);
                } else {
                    arg2 = _jag_sqlite3_bind_text(uVar6, 2, uVar7, uVar3, 18446744073709551615);
                }
                if (arg2 == 0) {
                    arg2 = _jag_sqlite3_step(uVar6);
                    _jag_sqlite3_reset(uVar6);
                    _jag_sqlite3_clear_bindings(uVar6);
                    unaff_RBX = (((uint64_t)((uint64_t)(uint32_t)(uVar2 >> 8)) << 8) | (uint8_t)1);
                    if (arg2 == 101)
                        goto LAB_100b217b4;
                }
            }
            HandleSQLError(database, arg2);
            unaff_RBX = (((uint64_t)((int64_t)(unaff_RBX >> 8)) << 8) | (uint8_t)(arg2 == 0));
        } else {
            local_298 = local_168.GetParentPath();
            pcVar4 = (char*)Filename::operator_cast_to_char_(&local_298);
            if (CheckSettingsTable(pcVar4, true) != '\0') {
                local_3c0 = eastl::fixed_string<char, 256>();
                pcVar4 = local_298.GetName();
                local_3c0.sprintf("INSERT OR REPLACE INTO \'%s\'(KEY,DATA) VALUES(?,?);", pcVar4);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_508.Prepare(pcVar4);
                local_508.end();
                pcVar4 = local_298.GetName();
                lVar5 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar4, 47);
                if (lVar5 == 0) {
                    pcVar4 = local_298.GetName();
                    lVar5 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar4, 92);
                    if (lVar5 == 0) {
                        local_520.GetFile(&local_168);
                        local_4f0 = Filename(&local_520);
                        local_168 = local_4f0;
                    }
                }
                LogAssert("strchr(parent.GetName(), \'/\') == nullptr && strchr(parent.GetName(), \'\\\\\') == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                          "FileSystem_SQLite.cpp",
                          467, "Invalid filename. Must only contain a single parent path key");
            }
            unaff_RBX = 0;
        }
    LAB_100b217b4:
        return unaff_RBX & 4294967295;
    }

    // 0x100b21870
    void FileSystem_SQLite::SQLStatement::Prepare(const char* str) {
        if (*field_0 == 0) {
            LogAssert("m_database",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      1060, nullptr);
        }
        Reset();
        long lVar1 = *field_0;
        size_t sVar2 = _strlen(str);
        _jag_sqlite3_prepare_v2(lVar1, str, sVar2 & 4294967295, &field_8, 0);
    }

    // 0x100b21910
    void FileSystem_SQLite::WriteFileImpl(filesystem::QueueItem&& queueItem) {
        uint32_t local_28[2];

        if (queueItem.field_336 != '\0') {
            LogAssert("!qi.m_append",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      508, nullptr);
        }
        SetDiskState(queueItem.field_8, 1);
        bool cVar1 = PerformWrite(*field_920, queueItem);
        SetDiskState(queueItem, 4294967295);
        if (!cVar1) {
            local_28->XPlotBlender<int>(5);
            *(uint32_t*)queueItem.field_544 = local_28[0];
        } else {
            UpdateCacheSize();
        }
        scoped_lock<std::mutex> local_30(field_2368);
        field_2432.push_back(queueItem);
    }

    // 0x100b21a00
    void FileSystem_SQLite::UpdateCacheSize() {
        if (field_2356 == 0) {
            LogAssert("m_databasePageSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      585, nullptr);
        }
        _jag_sqlite3_exec(*(uint64_t*)field_920, "PRAGMA page_count;", PageCountCallback, this, 0);
    }

    // 0x100b21ac0
    uint64_t FileSystem_SQLite::PerformReadAll(FileSystem_SQLite::Database& database,
                                               filesystem::QueueItem& queueItem) {
        int arg2;
        int iVar2;
        uint64_t uVar4;
        unsigned char* arg1;
        size_t sVar5;
        SQLStatement local_620;
        mutex* local_608;
        list<filesystem::QueueItem, SafeBucketAllocatorEASTL>* local_600;
        Filename local_5f8;
        uint8_t local_4c8[312];
        Array<unsigned char, SafeBucketAllocatorEASTL> local_390;
        fixed_string<char, 256> local_290;

        Filename local_168 = queueItem.field_8.GetParentPath();
        auto pcVar3 = Filename::operator_cast_to_char_(&local_168);
        if (CheckSettingsTable(pcVar3, false) != '\0') {
            local_290 = eastl::fixed_string<char, 256>();
            pcVar3 = local_168.GetName();
            local_290.sprintf("SELECT KEY,DATA FROM \'%s\';", pcVar3);
            local_620 = oldscape::SuperShuffledPacketFactory(database);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg2 = local_620.Prepare(pcVar3);
            if (arg2 == 0) {
                local_608 = (mutex*)&field_2368;
                local_600 = (list<filesystem::QueueItem, SafeBucketAllocatorEASTL>*)&field_2432;
                while (true) {
                    uVar4 = local_620.end();
                    iVar2 = _jag_sqlite3_step(uVar4);
                    if (iVar2 != 100)
                        break;
                    uVar4 = local_620.end();
                    pcVar3 = (char*)_jag_sqlite3_column_text(uVar4, 0);
                    uVar4 = local_620.end();
                    arg1 = (unsigned char*)_jag_sqlite3_column_text(uVar4);
                    if ((pcVar3 != nullptr) && (arg1 != nullptr)) {
                        new (local_4c8) filesystem::QueueItem(*queueItem);
                        local_5f8 = Filename(pcVar3);
                        (*((local_4c8 + 8))) = local_5f8;
                        sVar5 = _strlen((char*)arg1);
                        local_5f8 = Array<unsigned char, SafeBucketAllocatorEASTL>(arg1, arg1 + sVar5);
                        local_390 = local_5f8;
                        local_5f8 = std::scoped_lock(*local_608);
                        local_600->push_back(*local_4c8);
                    }
                }
                arg2 = 0;
                if (iVar2 != 101) {
                    arg2 = iVar2;
                }
                new (local_4c8) filesystem::QueueItem(*queueItem);
                local_5f8 = Filename("--end--");
                (*((local_4c8 + 8))) = local_5f8;
                local_5f8.~pair();
                local_5f8 = std::scoped_lock(*local_608);
                local_600->push_back(*local_4c8);
            }
            HandleSQLError(database, arg2);
        }
        return 0;
    }

    // 0x100b21e70
    uint64_t FileSystem_SQLite::PerformRead(FileSystem_SQLite::Database& database, filesystem::QueueItem& queueItem) {
        uint32_t uVar2;
        SideBarData* pSVar5;
        uint32_t local_50[2];
        uint32_t local_48[2];
        SideBarData* local_40;
        SideBarData* local_38;

        if (IsSettingsStyle() != '\0') {
            LogAssert("!IsSettingsStyle()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      591, "This shouldn\'t happen");
        }
        uint64_t uVar3 = database.GetSelectStatement();
        auto pcVar4 = queueItem.field_8.GetName();
        unsigned int arg2 = _jag_sqlite3_bind_text(uVar3, 1, pcVar4, 4294967295, 18446744073709551615);
        if (arg2 == 0) {
            arg2 = _jag_sqlite3_step(uVar3);
            if (arg2 == 101) {
                local_48->XPlotBlender<int>(2);
                *(uint32_t*)queueItem.field_544 = local_48[0];
                queueItem.field_312.clear();
            } else if (arg2 == 100) {
                uVar2 = _jag_sqlite3_column_bytes(uVar3, 0);
                local_38 = (SideBarData*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar2);
                pSVar5 = (SideBarData*)_jag_sqlite3_column_blob(uVar3, 0);
                if (pSVar5 == nullptr) {
                    local_50->XPlotBlender<int>(2);
                    *(uint32_t*)queueItem.field_544 = local_50[0];
                } else {
                    local_40 = (SideBarData*)(long)(int)local_38;
                    local_38 = pSVar5;
                    queueItem.field_312.set_max_size((unsigned long)local_40, 0);
                    local_40 = (SideBarData*)((long)&local_38->field_0 + (long)local_40);
                    pSVar5 = (SideBarData*)queueItem.field_312.data();
                    eastl::copy<char*, char*>(local_38, local_40, pSVar5);
                }
            }
            _jag_sqlite3_reset(uVar3);
            if ((arg2 & 4294967294) == 100) {
                return 1;
            }
        }
        HandleSQLError(database, arg2);
        return 0;
    }

    // 0x100b22050
    void FileSystem_SQLite::ReadFileImpl(filesystem::QueueItem&& queueItem) {
        int iVar2;
        ReturnValue local_48;

        if (queueItem.field_336 != '\0') {
            LogAssert("!qi.m_append",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      635, nullptr);
        }
        SetDiskState(queueItem.field_8, 0);
        bool cVar1 = IsSettingsStyle();
        if (!cVar1) {
            cVar1 = PerformRead(*field_920, queueItem);
            SetDiskState(queueItem, 4294967295);
            if (!cVar1) {
                local_48.XPlotBlender<int>(5);
                *(uint32_t*)queueItem.field_544 = local_48[0]._0_4_;
                local_48 = std::scoped_lock(field_2368);
                field_2432.push_back(queueItem);
            } else {
                local_48 = std::scoped_lock(field_2368);
                field_2432.push_back(queueItem);
            }
        } else {
            local_48.GetFile(&queueItem.field_8);
            iVar2 = local_48.compare("*");
            if (iVar2 != 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                "sqlite/FileSystem_SQLite.cpp",
                                659, nullptr);
            }
            SetDiskState(queueItem, 4294967295);
            cVar1 = PerformReadAll(*field_920, queueItem);
            if (cVar1) {
                return;
            }
            local_48.XPlotBlender<int>(2);
            *(uint32_t*)queueItem.field_544 = local_48[0]._0_4_;
            local_48 = std::scoped_lock(field_2368);
            field_2432.push_back(queueItem);
        }
    }

    // 0x100b22230
    uint64_t FileSystem_SQLite::PerformDelete(FileSystem_SQLite::Database& database, filesystem::QueueItem& queueItem) {
        unsigned int uVar3;
        char* pcVar4;
        uint64_t uVar5;
        long lVar6;
        unsigned long uVar7;
        ReturnValue local_518;
        Filename local_4f0;
        fixed_string<char, 256> local_3c0;
        Filename local_298;

        Filename local_168(&queueItem.field_8);
        SQLStatement local_500(database);
        if (field_658 == false) {
            uVar5 = database.GetDeleteStatement();
            pcVar4 = local_168.GetName();
            uVar3 = _jag_sqlite3_bind_text(uVar5, 1, pcVar4, 4294967295, 18446744073709551615);
            uVar7 = (unsigned long)uVar3;
            if (uVar3 == 0) {
                uVar3 = _jag_sqlite3_step(uVar5);
                uVar7 = 0;
                if (uVar3 != 101) {
                    uVar7 = (unsigned long)uVar3;
                }
                _jag_sqlite3_reset(uVar5);
            }
            HandleSQLError(database, (int)uVar7);
            uVar5 = (((uint64_t)((int64_t)(uVar7 >> 8)) << 8) | (uint8_t)((int)uVar7 == 0));
        } else {
            local_298 = local_168.GetParentPath();
            pcVar4 = (char*)Filename::operator_cast_to_char_(&local_298);
            if (CheckSettingsTable(pcVar4, true) != '\0') {
                local_3c0 = eastl::fixed_string<char, 256>();
                pcVar4 = local_298.GetName();
                local_3c0.sprintf("DELETE FROM \'%s\' WHERE KEY = ?;", pcVar4);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                if (local_500.Prepare(pcVar4) == 0) {
                    local_500.end();
                }
                pcVar4 = local_298.GetName();
                lVar6 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar4, 47);
                if (lVar6 == 0) {
                    pcVar4 = local_298.GetName();
                    lVar6 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar4, 92);
                    if (lVar6 == 0) {
                        local_518.GetFile(&local_168);
                        local_4f0 = Filename(&local_518);
                        local_168 = local_4f0;
                    }
                }
                LogAssert("strchr(parent.GetName(), \'/\') == nullptr && strchr(parent.GetName(), \'\\\\\') == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                          "FileSystem_SQLite.cpp",
                          709, "Invalid filename. Must only contain a single parent path key");
            }
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x100b22540
    void FileSystem_SQLite::DeleteFileImpl(filesystem::QueueItem&& queueItem) {
        uint32_t local_28[2];

        if (queueItem.field_336 != '\0') {
            LogAssert("!qi.m_append",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      736, nullptr);
        }
        SetDiskState(queueItem.field_8, 2);
        bool cVar1 = PerformDelete(*field_920, queueItem);
        SetDiskState(queueItem, 4294967295);
        if (!cVar1) {
            local_28->XPlotBlender<int>(5);
            *(uint32_t*)queueItem.field_544 = local_28[0];
        }
        scoped_lock<std::mutex> local_30(field_2368);
        field_2432.push_back(queueItem);
    }

    // 0x100b22620
    void FileSystem_SQLite::ResetImpl(filesystem::QueueItem&& queueItem) {

        SQLClose();
        field_312.RemoveDirectoryContents(nullptr);
        FileSystem::m_resetPending = 0;
        FileSystem::m_runningReset = 0;
        field_312.CreateDirectories(nullptr);
        field_1008.clear();
        SQLOpen();
        ResetDiskState();
        scoped_lock<std::mutex> local_28(field_2368);
        field_2432.push_back(queueItem);
    }

    // 0x100b226d0
    void FileSystem_SQLite::GetCurrentTableList(eastl::fixed_map<unsigned int, eastl::string, 16ul>& fixed_map) {
        uint64_t local_20 = 0;
        int arg2 = _jag_sqlite3_exec(*(uint64_t*)field_920, "SELECT name FROM sqlite_master WHERE type = \'table\';",
                                     TableQueryCallback, fixed_map, &local_20);
        HandleSQLError(*field_920, arg2);
    }

    // 0x100b22730
    void TableQueryCallback(void* arg1, int arg2, char** arg3, char** arg4) {
        char* str;
        eastl::string* basic_string;
        unsigned long uVar2;
        unsigned int local_34;

        if (0 < arg2) {
            uVar2 = 0;
            do {
                if (_strcmp(arg4[uVar2], "name") != 0) {
                    LogAssert("strcmp(azColName[i], \"name\") == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                              "sqlite/FileSystem_SQLite.cpp",
                              787, nullptr);
                }
                str = arg3[uVar2];
                local_34 = stringtools::hash32(str);
                basic_string = (eastl::string*)(*arg1)[local_34];
                eastl::string::assign(basic_string, str);
                uVar2 = uVar2 + 1;
            } while ((unsigned int)arg2 != uVar2);
        }
        return 0;
    }

    // 0x100b227e0
    uint64_t FileSystem_SQLite::UpdateAllTableSchemasFromVersion1to2() {
        bool cVar3;
        char* str2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_1598;

        fixed_map<unsigned int, eastl::string, 16ul> local_560;
        bool cVar2 = GetCurrentTableList(local_560);
        if (!cVar2) {
            return 0;
        }
        field_1008 = local_560;
        cVar2 = field_2352;
        fixed_string<char, 4096> local_1588;
        if (cVar2) {
            EndTransactionImpl();
        }
        local_1588 = "BEGIN;";
        auto local_1590 = local_560.rbegin();
        local_1598.end();
        while (true) {
            cVar3 = local_1590 != local_1598;
            if (!cVar3)
                break;
            *local_1590;
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            GetTableSchemaUpdateString<eastl::fixed_string<char, 4096>>(&local_1588, str2);
            ++local_1590;
        }
        local_1588.append_sprintf("PRAGMA user_version=%u;", 2);
        local_1588 += "END;";
        local_1588 += "VACUUM;";
        local_1590 = (ReturnValue)0;
        uint64_t uVar1 = *(uint64_t*)field_920;
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int arg2 = _jag_sqlite3_exec(uVar1, uVar4, PageCountCallback, this, &local_1590);
        cVar3 = HandleSQLError(*field_920, arg2);
        if (!cVar3) {
        }
        if (cVar2) {
            BeginTransactionImpl();
        }
    }

    // 0x100b22a30
    void GetTableSchemaUpdateString<eastl::fixed_string<char, 4096>>(eastl::fixed_string<char, 4096>& str1,
                                                                     const char* str2) {
        str1.append_sprintf(
            "ALTER TABLE \'%s\' RENAME TO \'OLD_%s\';CREATE TABLE IF NOT EXISTS \'%s\'( KEY STRING PRIMARY KEY UNIQUE, "
            "DATA TEXT );INSERT INTO \'%s\' SELECT * FROM \'OLD_%s\';DROP TABLE \'OLD_%s\';",
            str2, str2, str2, str2, str2, str2);
    }

    // 0x100b22be0
    void FileSystem_SQLite::SQLCheckProperties(FileSystem_SQLite::Database& database, bool& arg2, bool arg3) {
        fixed_string<char, 512> local_260;
        local_260.append("PRAGMA temp_store=MEMORY;PRAGMA journal_mode=OFF;PRAGMA synchronous=OFF;PRAGMA "
                         "auto_vacuum=NONE;PRAGMA page_size;PRAGMA page_count;");
        if (arg3) {
            local_260.append_sprintf("%s=%u;%s=%u;", "PRAGMA application_id", 1701737810, "PRAGMA user_version", 2);
        } else {
            local_260.append_sprintf("%s;%s;", "PRAGMA application_id", "PRAGMA user_version");
        }
        uint64_t local_268 = 0;
        uint64_t uVar1 = database.field_0;
        uint64_t uVar3 = local_260.begin();
        if (_jag_sqlite3_exec(uVar1, uVar3, PageCountCallback, this, &local_268) == 0) {
            if (field_2364 == 1701737810) {
                if (field_2360 < 2) {
                    UpdateAllTableSchemasFromVersion1to2();
                }
            } else {
                arg2 = true;
            }
        }
    }

    // 0x100b22d40
    unsigned long FileSystem_SQLite::PerformClose(FileSystem_SQLite::Database& database) {
        int arg2;
        uint64_t unaff_R15;

        database.field_56.Reset();
        database.field_72.Reset();
        database.field_8.Reset();
        database.field_24.Reset();
        database.field_40.Reset();
        unsigned long uVar1 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (database.field_0 != 0) {
            arg2 = _jag_sqlite3_close();
            if (arg2 == 0) {
                database.field_0 = 0;
            } else {
                HandleSQLError(database, arg2);
                uVar1 = 0;
            }
        }
        return uVar1 & 4294967295;
    }

    // 0x100b22dc0
    bool FileSystem_SQLite::ClearStatement(sqlite3_stmt*& arg1) {
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

    // 0x100b22df0
    void FileSystem_SQLite::SQLStatement::Reset() {
        if (field_8 != 0) {
            _jag_sqlite3_finalize();
            field_8 = 0;
        }
    }

    // 0x100b22e20
    uint64_t FileSystem_SQLite::Database::BuildStatement(const char* str,
                                                         FileSystem_SQLite::SQLStatement& sqlStatement) {
        int iVar1;
        uint64_t uVar3;
        Logger* this_00;

        if ((sqlStatement.end() == 0) && (iVar1 = sqlStatement.Prepare(str), iVar1 != 0)) {
            this_00 = logger::default_logger();
            uVar3 = _jag_sqlite3_errmsg(field_0);
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                         "FileSystem_SQLite.cpp",
                         1051, "sqlite3_prepare_v2 error: %s", uVar3);
            return 0;
        }
        uVar3 = sqlStatement.end();
        return uVar3;
    }

    // 0x100b23ca0
    FileSystem::DeleteDirectory(Filename const&)::$_0::~$_0() {}

    // 0x100b26020
    FileSystem::DeleteDirectory(Filename const&)::$_0::$_0($_0&& arg1) : Filename(arg1) {}

    // 0x100b26110
    void FileSystem::DeleteDirectory(Filename const&)::$_0::operator()() const {
        DeleteDirectory((Filename*)this);
    }

    // 0x100b292b0
    void FileSystem_SQLite::FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*,
                                              bool)::$_1::operator()(int arg1) const {
        ThreadRunnerWrapper(field_0, arg1);
    }

} // namespace jag

// 0x100b218e0
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
