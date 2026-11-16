// libs/hal/filesystem/sqlite/FileSystem_SQLite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.filesystem

#include "FileSystem_SQLite.h"
#include "libs/hal/filesystem/FileSystem.h"

namespace jag {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    FileSystem_SQLite::UpdateStats();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    FileSystem_SQLite::ProcessAllQueuedRequests();

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    FileSystem_SQLite::SQLStatement::Get() const;

    // 0x100b1f5e0, 464 bytes, placed by class name and debug map
    // FileSystem::NewFileSystem(Filename const&, FileSystem::Scope, char const*, bool)
    FileSystem* FileSystem::NewFileSystem(Filename* param_1, int param_3, char* param_4, char param_5) {
        bool bVar1;
        char cVar2;
        long lVar3;
        FileSystem* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        char* local_68;
        list<console::Line, eastl::allocator> local_60[8];
        shared_ptr local_58;
        shared_ptr local_48;
        int local_38;
        bool local_31;

        local_68 = param_4;
        local_38 = param_3;
        local_31 = (bool)param_5;
        eastl::list<console::Line, eastl::allocator>::end(local_60);
        local_58.begin();
        bVar1 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)local_60, extraout_RDX);
        if (bVar1) {
            do {
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                weak_ptr<oldscape::rs2lib::IfType>::lock();
                bVar1 = operator_cast_to_bool();
                if (bVar1) {
                    lVar3 = shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)this);
                    cVar2 = Filename::operator==((Filename*)(lVar3 + 8), param_1);
                    if ((cVar2 == '\0') || (lVar3 = shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)this),
                                            *(int*)(lVar3 + 616) != local_38))
                        goto LAB_100b1f6b0;
                    this_00 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)this);
                    cVar2 = IsSettingsStyle(this_00);
                    if (local_31 != (bool)cVar2)
                        goto LAB_100b1f6b0;
                    bVar1 = false;
                } else {
                LAB_100b1f6b0:
                    bVar1 = true;
                    ~shared_ptr();
                }
                if (!bVar1) {
                    return this;
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_58);
                bVar1 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)local_60, extraout_RDX_00);
            } while (bVar1);
        }
        make_shared<FileSystem_SQLite, Filename_const&, FileSystem::Scope&, char const*&, bool&>(
            (jag*)&local_48, param_1, (Scope*)&local_38, &local_68, &local_31);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_58, &local_48);
        local_48.~shared_ptr();
        new (&local_48) weak_ptr<oldscape::dash3d::Decor>((weak_ptr*)&local_58);
        m_FileSystemList.push_back((weak_ptr*)&local_48);
        local_48.~weak_ptr();
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_58);
        local_58.~shared_ptr();
        return this;
    }

    // 0x100b1f7c0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<FileSystem_SQLite>::type make_shared<FileSystem_SQLite, Filename const&, FileSystem::Scope&, char const*&, bool&>(Filename const&, FileSystem::Scope&, char const*&, bool&)
    jag* jag::make_shared<FileSystem_SQLite, Filename_const&, FileSystem::Scope&, char const*&, bool&>(
        Filename* param_1, Scope* param_2, char** param_3, bool* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        FileSystem_SQLite* local_40[2];

        pvVar1 = (void*)aligned_alloc(2624, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<FileSystem_SQLite, Filename_const&, FileSystem::Scope&, char const*&, bool&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<FileSystem_SQLite>, int, FileSystem_SQLite*&>(pvVar1, &local_44,
                                                                                                    local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100b1f8e0, 880 bytes, base-object constructor, placed by class name and debug map
    // FileSystem_SQLite::FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*, bool)
    void FileSystem_SQLite::FileSystem_SQLite() {
        char cVar1;
        uint uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        int* extraout_RDX;
        SystemPaths* this_00;
        Filename local_2d8[19];
        fixed_string<char, 24, true, eastl::allocator> local_1a8[64];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        FileSystem::FileSystem();
        field_0 = &PTR_OnCacheFolderChanged_100f25688;
        new (field_920) Database();
        new (&field_1008)
            eastl::fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>, eastl::allocator>();
        new (&field_2328) std::thread();
        field_2336 = '\0';
        m_usageBytes = 0;
        field_2352 = '\0';
        field_2356 = 0;
        field_2360 = 0;
        field_2364 = 0;
        new (&field_2368) std::mutex();
        eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::list();
        std::function<Array<unsigned char, eastl::allocator>*(int)>::function(
            (function<Array<unsigned char, eastl::allocator>*(int)>*)&field_2464);
        new (&field_2512) std::thread();
        this_00 = (SystemPaths*)&field_2520;
        new (this_00) std::mutex();
        if (field_616 == 1) {
            uVar2 = this_00->GetInstanceNumber();
            if (0 < (int)uVar2) {
                GetDatabaseFilename((FileSystem_SQLite*)local_168);
                eastl::fixed_string<char, 24, true, eastl::allocator>::fixed_string(local_1a8);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_1a8, &DAT_100e37017, (ulong)uVar2);
                Filename::Filename(local_2d8, (basic_string*)local_1a8);
                Filename::operator+=((Filename*)field_8, local_2d8);
                local_2d8->~pair();
                cVar1 = local_168->IsFile();
                if (cVar1 != '\0') {
                    GetDatabaseFilename((FileSystem_SQLite*)local_2d8);
                    cVar1 = local_2d8->IsFile();
                    if (cVar1 == '\0') {
                        local_168->Copy(local_2d8, false, 0);
                    }
                    local_2d8->~pair();
                }
                /* WARNING: Subroutine does not return */
                local_1a8->~fixed_string();
            }
        }
        cVar1 = (field_312, (Error*)0)->CreateDirectories();
        if (cVar1 == '\0') {
            field_657 = 1;
            uVar3 = logger::default_logger();
            uVar4 = field_312->GetName();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                "sqlite/FileSystem_SQLite.cpp",
                                72, "Failed to create root folder %s", uVar4);
        } else {
            FileSystem_SQLite(Filename_const&, FileSystem::Scope, char const*, bool)::workerNumber =
                FileSystem_SQLite(Filename_const&, FileSystem::Scope, char const*, bool)::workerNumber + 1;
            local_2d8[0]._0_8_ = this;
            std::thread::thread<FileSystem_SQLite::FileSystem_SQLite(Filename_const&, FileSystem::Scope, char const*,
                                                                     bool)::__1,
                                int&, void>((thread*)local_168, (__1*)local_2d8, extraout_RDX);
            std::thread::operator=((thread*)&field_2328, (thread*)local_168);
            local_168->~thread();
            field_656 = 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1fc80, 160 bytes, placed by class name and debug map
    // FileSystem_SQLite::GetDatabaseFilename()
    FileSystem_SQLite* FileSystem_SQLite::GetDatabaseFilename() {
        long in_RSI;
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::operator/(local_150, (Filename*)(in_RSI + 312));
        Filename::operator+((Filename*)this, (char*)local_150);
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100b1fe80, 16 bytes, complete-object constructor, placed by class name and debug map
    // FileSystem_SQLite::FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*, bool): jumps straight to the base-object constructor

    // 0x100b1fe90, 320 bytes, base-object destructor, placed by class name and debug map
    // FileSystem_SQLite::~FileSystem_SQLite()
    void FileSystem_SQLite::~FileSystem_SQLite() {
        char cVar1;

        field_0 = &PTR_OnCacheFolderChanged_100f25688;
        field_2336 = '\x01';
        std::condition_variable::notify_all();
        cVar1 = (&field_2328)->joinable();
        if (cVar1 != '\0') {
            std::thread::join();
        }
        cVar1 = (&field_2512)->joinable();
        if (cVar1 != '\0') {
            std::thread::join();
        }
        (&field_2520)->~mutex();
        (&field_2512)->~thread();
        std::function<Array<unsigned char, eastl::allocator>*(int)>::~function(
            (function<Array<unsigned char, eastl::allocator>*(int)>*)&field_2464);
        (&field_2432)->~list();
        (&field_2368)->~mutex();
        (&field_2328)->~thread();
        (&field_1008)->~fixed_map();
        field_920->~Database();
        ~FileSystem();
    }

    // 0x100b1ffe0, 16 bytes, complete-object destructor, placed by class name and debug map
    // FileSystem_SQLite::~FileSystem_SQLite(): jumps straight to the base-object destructor

    // 0x100b1fff0, 32 bytes, deleting destructor, placed by class name and debug map
    // FileSystem_SQLite::~FileSystem_SQLite()
    void FileSystem_SQLite::~FileSystem_SQLite() {
        ~FileSystem_SQLite(this);
        operator_delete(this);
    }

    // 0x100b20010, 304 bytes, placed by neighbouring functions
    // PageCountCallback(void*, int, char**, char**)
    undefined8 PageCountCallback(void* param_1, int param_2, char** param_3, char** param_4) {
        char* pcVar1;
        int iVar2;
        ulong uVar3;
        long lVar4;
        ulong uVar5;

        if (0 < param_2) {
            uVar5 = 0;
            do {
                pcVar1 = param_4[uVar5];
                iVar2 = _strcmp(pcVar1, "page_size");
                if (iVar2 == 0) {
                    lVar4 = _strtol(param_3[uVar5], (char**)0, 10);
                    *(int*)((long)param_1 + 2356) = (int)lVar4;
                } else {
                    iVar2 = _strcmp(pcVar1, "page_count");
                    if (iVar2 == 0) {
                        lVar4 = _strtol(param_3[uVar5], (char**)0, 10);
                        *(ulong*)((long)param_1 + 2344) = (ulong)(uint)((int)lVar4 * *(int*)((long)param_1 + 2356));
                    } else {
                        iVar2 = _strcmp(pcVar1, "user_version");
                        if (iVar2 == 0) {
                            uVar3 = _strtoul(param_3[uVar5], (char**)0, 10);
                            *(int*)((long)param_1 + 2360) = (int)uVar3;
                        } else {
                            iVar2 = _strcmp(pcVar1, "application_id");
                            if (iVar2 == 0) {
                                uVar3 = _strtoul(param_3[uVar5], (char**)0, 10);
                                *(int*)((long)param_1 + 2364) = (int)uVar3;
                            }
                        }
                    }
                }
                uVar5 = uVar5 + 1;
            } while ((uint)param_2 != uVar5);
        }
        return 0;
    }

    // 0x100b20140, 1408 bytes, placed by class name and debug map
    // FileSystem_SQLite::MoveFileSystem(Filename const&)
    void FileSystem_SQLite::MoveFileSystem(Filename* param_1) {
        undefined1* this_00;
        long* plVar1;
        char cVar2;
        char cVar3;
        char* pcVar4;
        char* pcVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        Filename local_510;
        undefined1 local_4f8[304];
        Filename local_3c8[19];
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_312;
        Filename::Filename(local_168, (Filename*)this_00);
        GetDatabaseFilename((FileSystem_SQLite*)local_298);
        Filename::operator=((Filename*)this_00, param_1);
        GetDatabaseFilename((FileSystem_SQLite*)local_3c8);
        cVar2 = this_00->CreateDirectories(0);
        if (cVar2 == '\0') {
            Filename::operator=((Filename*)this_00, local_168);
        } else {
            new (local_4f8) callstack::Callstack();
            cVar2 = Filename::operator!=(local_298, local_3c8);
            plVar1 = FileSystem::m_notificationHandler;
            if (cVar2 == '\0') {
                Filename::operator=((Filename*)this_00, local_168);
            } else {
                if (FileSystem::m_notificationHandler != (long*)0) {
                    pcVar4 = Filename::operator_cast_to_char_(local_298);
                    pcVar5 = Filename::operator_cast_to_char_(local_3c8);
                    (**(code**)*plVar1)(local_4f8 + 8, plVar1, pcVar4, pcVar5);
                    (**(code**)(*FileSystem::m_notificationHandler + 16))(FileSystem::m_notificationHandler,
                                                                          local_4f8 + 8);
                    ((local_4f8 + 8))->~VBOMapper();
                }
                cVar2 = SQLClose(this);
                if (cVar2 != '\0') {
                    new ((local_4f8 + 8)) eastl::fixed_string<char, 256, true, eastl::allocator>();
                    uVar6 = logger::default_logger();
                    uVar7 = field_8->GetName();
                    uVar8 = local_298->GetName();
                    uVar9 = local_3c8->GetName();
                    logger::Logger::Log(uVar6, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "filesystem/sqlite/FileSystem_SQLite.cpp",
                                        158, "Moving FileSystem %s from %s to %s", uVar7, uVar8, uVar9);
                    cVar2 = local_298->Rename(local_3c8, local_4f8);
                    if (cVar2 == '\0') {
                        uVar6 = logger::default_logger();
                        local_510.GetFile();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar4 = Error::GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                            (Error*)local_4f8, (fixed_string*)(local_4f8 + 8));
                        logger::Logger::Log(uVar6, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "filesystem/sqlite/FileSystem_SQLite.cpp",
                                            163, "Could not rename %s : %s", uVar7, pcVar4);
                        local_510.~basic_string();
                        cVar3 = local_4f8->IsErrorFileExists();
                        if (cVar3 != '\0') {
                            cVar3 = local_3c8->RemoveFile(local_4f8);
                            if (cVar3 == '\0') {
                                uVar6 = logger::default_logger();
                                local_510.GetFile();
                                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pcVar4 = Error::GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                                    (Error*)local_4f8, (fixed_string*)(local_4f8 + 8));
                                logger::Logger::Log(uVar6, 0, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/filesystem/sqlite/FileSystem_SQLite.cpp",
                                                    168, "Could not remove existing %s : %s", uVar7, pcVar4);
                                local_510.~basic_string();
                            } else {
                                cVar2 = local_298->Rename(local_3c8, local_4f8);
                            }
                        }
                    }
                    if (cVar2 == '\0') {
                        Filename::operator=((Filename*)this_00, local_168);
                        uVar6 = logger::default_logger();
                        uVar7 = field_8->GetName();
                        local_510.GetFile();
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar9 = local_3c8->GetName();
                        pcVar4 = Error::GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                            (Error*)local_4f8, (fixed_string*)(local_4f8 + 8));
                        logger::Logger::Log(uVar6, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "filesystem/sqlite/FileSystem_SQLite.cpp",
                                            181, "Could not move %s from %s to %s : %s", uVar7, uVar8, uVar9, pcVar4);
                        local_510.~basic_string();
                    } else {
                        local_168->RemoveEmptyDirectory(0);
                    }
                    SQLOpen(this);
                    /* WARNING: Subroutine does not return */
                    ((local_4f8 + 8))->~fixed_string();
                }
                if (FileSystem::m_notificationHandler != (long*)0) {
                    cVar2 = local_4f8->IsValid();
                    plVar1 = FileSystem::m_notificationHandler;
                    if (cVar2 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("moved == !err.IsError()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                  "filesystem/sqlite/FileSystem_SQLite.cpp",
                                  194, (char*)0);
                    }
                    pcVar4 = Filename::operator_cast_to_char_(local_298);
                    pcVar5 = Filename::operator_cast_to_char_(local_3c8);
                    (**(code**)(*plVar1 + 8))(local_4f8 + 8, plVar1, local_4f8, pcVar4, pcVar5);
                    (**(code**)(*FileSystem::m_notificationHandler + 16))(FileSystem::m_notificationHandler,
                                                                          local_4f8 + 8);
                    ((local_4f8 + 8))->~VBOMapper();
                }
            }
        }
        local_3c8->~pair();
        local_298->~pair();
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b206c0, 32 bytes, placed by class name and debug map
    // FileSystem_SQLite::SQLClose()
    void FileSystem_SQLite::SQLClose() {
        PerformClose(this, (Database*)field_920);
    }

    // 0x100b20710, 576 bytes, placed by class name and debug map
    // FileSystem_SQLite::SQLOpen()
    ulong FileSystem_SQLite::SQLOpen() {
        undefined1* puVar1;
        byte bVar2;
        byte bVar3;
        int iVar5;
        char* pcVar6;
        undefined8 uVar7;
        ulong uVar8;
        int iVar9;
        bool local_299;
        undefined** local_298[38];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetDatabaseFilename((FileSystem_SQLite*)local_168);
        bVar2 = local_168->IsFile();
        puVar1 = field_920;
        do {
            pcVar6 = Filename::operator_cast_to_char_(local_168);
            iVar5 = _jag_sqlite3_open(pcVar6, puVar1);
            local_299 = false;
            if (iVar5 == 0) {
                iVar5 = SQLCheckProperties(this, (Database*)puVar1, &local_299, (bool)(bVar2 ^ 1));
                if (iVar5 != 0)
                    goto LAB_100b207dc;
                if (field_658 == '\0') {
                    local_298[0] = (undefined**)0;
                    iVar5 = _jag_sqlite3_exec(
                        *(undefined8*)puVar1,
                        "CREATE TABLE IF NOT EXISTS cache(KEY      STRING PRIMARY KEY UNIQUE,DATA     BLOB);", 0, 0,
                        (FileSystem_SQLite*)local_298);
                    iVar9 = 1;
                } else {
                    GetCurrentTableList(this, (fixed_map*)&field_1008);
                    iVar9 = 1;
                    iVar5 = 0;
                }
            } else {
            LAB_100b207dc:
                if (local_299 == false) {
                    bVar3 = SQLInit::IsDBCorruptionError(iVar5);
                    iVar9 = 2;
                    if ((bVar3 | iVar5 == 1) != 1)
                        goto LAB_100b2078b;
                }
                if (PerformClose(this, (Database*)puVar1) == '\0') {
                    uVar7 = logger::default_logger();
                    iVar9 = 0;
                    logger::Logger::Log(uVar7, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "filesystem/sqlite/FileSystem_SQLite.cpp",
                                        934, "Could not close database");
                } else {
                    GetDatabaseFilename((FileSystem_SQLite*)local_298);
                    local_298->RemoveFile(0);
                    (&field_1008)->clear();
                    local_298->~pair();
                    iVar9 = 0;
                }
            }
        LAB_100b2078b:
            if (iVar9 != 0) {
                if (iVar9 == 2) {
                    HandleSQLError(this, (Database*)puVar1, iVar5);
                    uVar8 = 0;
                } else {
                    uVar8 = CONCAT71((int7)((ulong)puVar1 >> 8), 1);
                }
                local_168->~pair();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return uVar8 & 4294967295;
            }
        } while (true);
    }

    // 0x100b20950, 96 bytes, placed by class name and debug map
    // FileSystem_SQLite::ThreadRunnerWrapper(int)
    void FileSystem_SQLite::ThreadRunnerWrapper(int param_1) {
        basic_string local_38[32];

        eastl::string::basic_string(local_38, "FileSystemSQL-%d", param_1);
        this_thread::SetThreadName(local_38);
        local_38->~basic_string();
        ThreadRunnerSEHWrapper(this);
    }

    // 0x100b209d0, 80 bytes, placed by class name
    // FileSystem_SQLite::ThreadRunnerSEHWrapper()
    void FileSystem_SQLite::ThreadRunnerSEHWrapper() {
        char cVar1;

        cVar1 = field_2336;
        while (((cVar1 == '\0' || (cVar1 = (&field_888)->empty(), cVar1 == '\0')) && (field_657 == '\0'))) {
            ThreadRunner(this);
            cVar1 = field_2336;
        }
    }

    // 0x100b20a20, 992 bytes, placed by class name
    // FileSystem_SQLite::ThreadRunner()
    void FileSystem_SQLite::ThreadRunner() {
        undefined1* this_00;
        undefined1* puVar1;
        char cVar2;
        int* piVar3;
        QueueItem* pQVar4;
        duration local_278[12];
        undefined4 local_26c;
        QueueItem local_268;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
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
        cVar2 = SQLInit::Initialise();
        if ((cVar2 == '\0') || (cVar2 = SQLOpen(this), cVar2 == '\0')) {
            field_657 = 1;
        } else {
            this_00 = &field_888;
            puVar1 = &field_776;
        LAB_100b20b9d:
            if ((field_2336 == '\0') || (cVar2 = this_00->empty(), cVar2 == '\0')) {
                cVar2 = this_00->empty();
                if (cVar2 != '\0') {
                    new (&local_268) std::unique_lock<std::mutex>(puVar1);
                    local_26c = 500;
                    std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_278,
                                                                                           (type*)&local_26c);
                    std::condition_variable::wait_for<long long, std::ratio<1l, 1000l>>(
                        (condition_variable*)&field_840, (unique_lock*)&local_268, local_278);
                    local_268.~unique_lock();
                }
                if (FileSystem::m_resetPending != '\0') {
                    new (local_278) std::scoped_lock<std::mutex>(puVar1);
                    if ((FileSystem::m_resetPending == '\0') || (FileSystem::m_runningReset != '\0')) {
                        local_278->~scoped_lock();
                        goto LAB_100b20b9d;
                    }
                    FileSystem::m_runningReset = '\x01';
                    while (piVar3 = (int*)eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::front(),
                           *piVar3 != 3) {
                        this_00->pop_front();
                    }
                    cVar2 = this_00->empty();
                    if (cVar2 == '\0') {
                        piVar3 = (int*)eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::front();
                        if (*piVar3 == 3) {
                            new (&local_268) filesystem::QueueItem();
                            pQVar4 = (QueueItem*)eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::front();
                            local_268.swap(pQVar4);
                            this_00->pop_front();
                            ProcessRequest(&local_268);
                            local_268.~QueueItem();
                        }
                    } else {
                        FileSystem::m_resetPending = '\0';
                        FileSystem::m_runningReset = '\0';
                    }
                    local_278->~scoped_lock();
                }
                cVar2 = this_00->empty();
                if (cVar2 == '\0') {
                    new (&local_268) filesystem::QueueItem();
                    new (local_278) std::scoped_lock<std::mutex>(puVar1);
                    cVar2 = this_00->empty();
                    if (cVar2 == '\0') {
                        pQVar4 = (QueueItem*)eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::front();
                        local_268.swap(pQVar4);
                        this_00->pop_front();
                    }
                    local_278->~scoped_lock();
                    if ((local_268.field_0 != 4294967295) && ((field_2336 == '\0' || (local_268.field_0 != 0)))) {
                        ProcessRequest(&local_268);
                    }
                    local_268.~QueueItem();
                }
                goto LAB_100b20b9d;
            }
            SQLInit::Destroy();
            SQLClose(this);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b20e10, 288 bytes, placed by class name
    // FileSystem_SQLite::ServiceInstance()
    void FileSystem_SQLite::ServiceInstance() {
        undefined1* this_00;
        char cVar1;
        QueueItem* pQVar2;
        int iVar3;
        FileSystem* this_01;
        unique_lock<std::mutex> local_278[16];
        QueueItem local_268;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_2432;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            std::unique_lock<std::mutex>::unique_lock(local_278, (mutex*)&field_2368);
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                iVar3 = -100;
                do {
                    iVar3 = iVar3 + 1;
                    if (iVar3 == 0)
                        break;
                    new (&local_268) filesystem::QueueItem();
                    pQVar2 = (QueueItem*)eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::front();
                    local_268.swap(pQVar2);
                    this_00->pop_front();
                    this_01 = (FileSystem*)local_278;
                    std::unique_lock<std::mutex>::unlock(local_278);
                    this_01->ProcessResponse(&local_268);
                    std::unique_lock<std::mutex>::lock(local_278);
                    local_268.~QueueItem();
                    cVar1 = this_00->empty();
                } while (cVar1 == '\0');
            }
            std::unique_lock<std::mutex>::~unique_lock(local_278);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b20f30, 16 bytes, placed by class name
    // FileSystem_SQLite::GetUsageQuota()
    void FileSystem_SQLite::GetUsageQuota() {}

    // 0x100b20f40, 528 bytes, placed by class name
    // FileSystem_SQLite::HandleSQLErrorImpl(FileSystem_SQLite::Database&, int)
    void FileSystem_SQLite::HandleSQLErrorImpl(Database* param_1, int param_2) {
        long lVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        undefined8 in_stack_fffffffffffffe58;
        undefined4 uVar6;
        Error local_190[8];
        undefined1 local_170[312];
        long local_38;

        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("rc != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      367, (char*)0);
        }
        lVar1 = param_1->field_0;
        uVar3 = logger::default_logger();
        if (lVar1 == 0) {
            pcVar5 = "SQLError[%d]";
            uVar4 = 374;
        } else {
            _jag_sqlite3_errmsg(param_1->field_0);
            pcVar5 = "SQLError[%d]: %s";
            uVar4 = 370;
        }
        logger::Logger::Log(uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                            "sqlite/FileSystem_SQLite.cpp",
                            uVar4, pcVar5, CONCAT44(uVar6, param_2));
        cVar2 = SQLInit::IsDBCorruptionError(param_2);
        if (cVar2 != '\0') {
            GetDatabaseFilename((FileSystem_SQLite*)(local_170 + 8));
            uVar3 = logger::default_logger();
            uVar4 = ((local_170 + 8))->GetName();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                "sqlite/FileSystem_SQLite.cpp",
                                381, "Database corrupted, deleting %s and starting again", uVar4);
            SQLClose(this);
            new (local_170) callstack::Callstack();
            cVar2 = ((local_170 + 8))->RemoveFile(local_170);
            if (cVar2 == '\0') {
                uVar3 = logger::default_logger();
                local_190->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                    "filesystem/sqlite/FileSystem_SQLite.cpp",
                                    387, "Database was corrupted, but file could not be deleted to recover: %s", uVar4);
                local_190->~basic_string();
            }
            (&field_1008)->clear();
            SQLOpen(this);
            ((local_170 + 8))->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b21180, 128 bytes, placed by class name
    // FileSystem_SQLite::CheckSettingsTable(char const*, bool)
    void FileSystem_SQLite::CheckSettingsTable(char* param_1, bool param_2) {
        undefined7 in_register_00000011;
        hashtable_iterator_base* extraout_RDX;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        undefined4 local_38;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000011, param_2);
        local_38 = stringtools::hash32(param_1);
        eastl::rbtree<unsigned int, eastl::pair<unsigned int const, eastl::string>, eastl::less<unsigned int>,
                      eastl::fixed_node_allocator<72ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned int const, eastl::string>>, true, true>::find((uint*)
                                                                                                              local_48);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if ((eastl::operator==(local_48, local_40, extraout_RDX)) && ((char)local_34 != '\0')) {
            CreateTable(this, param_1);
        }
    }

    // 0x100b212e0, 288 bytes, placed by class name
    // FileSystem_SQLite::CreateTable(char const*)
    void FileSystem_SQLite::CreateTable(char* param_1) {
        undefined8 uVar1;
        int iVar2;
        undefined8 uVar3;
        eastl::string* this_00;
        undefined8 local_168;
        uint local_15c;
        fixed_string<char, 256, true, eastl::allocator> local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_158);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_158,
            "CREATE TABLE IF NOT EXISTS \'%s\'(KEY      STRING PRIMARY KEY UNIQUE,DATA     TEXT);PRAGMA "
            "page_size;PRAGMA page_count;",
            param_1);
        local_168 = 0;
        uVar1 = *(undefined8*)field_920;
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar2 = _jag_sqlite3_exec(uVar1, uVar3, PageCountCallback, this, &local_168);
        if (iVar2 == 0) {
            local_15c = stringtools::hash32(param_1);
            this_00 =
                (eastl::string*)eastl::map<unsigned int, eastl::string, eastl::less<unsigned int>,
                                           eastl::fixed_node_allocator<72ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((map<unsigned int, eastl::string, eastl::less<unsigned int>,
                                eastl::fixed_node_allocator<72ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)&field_1008,
                           &local_15c);
            eastl::string::assign(this_00, param_1);
        }
        HandleSQLError(this, (Database*)field_920, iVar2);
        /* WARNING: Subroutine does not return */
        local_158->~fixed_string();
    }

    // 0x100b21400, 80 bytes, placed by class name
    // FileSystem_SQLite::BeginTransactionImpl()
    void FileSystem_SQLite::BeginTransactionImpl() {
        int iVar1;
        undefined8 uVar2;

        if (field_2352 == '\0') {
            uVar2 = field_920->GetBeginStatement();
            iVar1 = _jag_sqlite3_step(uVar2);
            if (iVar1 == 101) {
                field_2352 = '\x01';
                iVar1 = 0;
            }
            HandleSQLError(this, (Database*)field_920, iVar1);
        }
    }

    // 0x100b21490, 80 bytes, placed by class name
    // FileSystem_SQLite::EndTransactionImpl()
    void FileSystem_SQLite::EndTransactionImpl() {
        int iVar1;
        undefined8 uVar2;

        if (field_2352 != '\0') {
            uVar2 = field_920->GetEndStatement();
            iVar1 = _jag_sqlite3_step(uVar2);
            if (iVar1 == 101) {
                field_2352 = '\0';
                iVar1 = 0;
            }
            HandleSQLError(this, (Database*)field_920, iVar1);
        }
    }

    // 0x100b21500, 880 bytes, placed by class name
    // FileSystem_SQLite::PerformWrite(FileSystem_SQLite::Database&, filesystem::QueueItem const&)
    ulong FileSystem_SQLite::PerformWrite(Database* param_1, QueueItem* param_2) {
        int iVar2;
        uint uVar3;
        undefined4 uVar4;
        char* pcVar5;
        undefined8 uVar6;
        long lVar7;
        undefined8 uVar8;
        ulong unaff_RBX;
        Filename local_520;
        SQLStatement local_508;
        Filename local_4f0[19];
        fixed_string<char, 256, true, eastl::allocator> local_3c0[296];
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_508) oldscape::SuperShuffledPacketFactory(param_1);
        Filename::Filename(local_168, (Filename*)param_2->field_8);
        if (field_658 == '\0') {
            uVar6 = param_1->GetInsertStatement();
            uVar8 = local_168->GetName();
            iVar2 = _jag_sqlite3_bind_text(uVar6, 1, uVar8, 4294967295, 18446744073709551615);
            if (iVar2 == 0) {
                uVar3 = IsSettingsStyle();
                unaff_RBX = (ulong)uVar3;
                uVar8 = (&param_2->field_312)->data();
                uVar4 = (&param_2->field_312)->end();
                if ((char)uVar3 == '\0') {
                    iVar2 = _jag_sqlite3_bind_blob(uVar6, 2, uVar8, uVar4, 18446744073709551615);
                } else {
                    iVar2 = _jag_sqlite3_bind_text(uVar6, 2, uVar8, uVar4, 18446744073709551615);
                }
                if (iVar2 == 0) {
                    iVar2 = _jag_sqlite3_step(uVar6);
                    _jag_sqlite3_reset(uVar6);
                    _jag_sqlite3_clear_bindings(uVar6);
                    unaff_RBX = CONCAT71((uint7)(uint3)(uVar3 >> 8), 1);
                    if (iVar2 == 101)
                        goto LAB_100b217b4;
                }
            }
            HandleSQLError(this, param_1, iVar2);
            unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8), iVar2 == 0);
        } else {
            local_298->GetParentPath();
            pcVar5 = Filename::operator_cast_to_char_(local_298);
            if (CheckSettingsTable(this, pcVar5, true) != '\0') {
                eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_3c0);
                uVar6 = local_298->GetName();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_3c0, "INSERT OR REPLACE INTO \'%s\'(KEY,DATA) VALUES(?,?);", uVar6);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_508.Prepare(pcVar5);
                local_508.end();
                uVar6 = local_298->GetName();
                lVar7 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(uVar6, 47);
                if (lVar7 == 0) {
                    uVar6 = local_298->GetName();
                    lVar7 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(uVar6, 92);
                    if (lVar7 == 0) {
                        local_520.GetFile();
                        Filename::Filename(local_4f0, (basic_string*)&local_520);
                        Filename::operator=(local_168, local_4f0);
                        local_4f0->~pair();
                        local_520.~basic_string();
                        /* WARNING: Subroutine does not return */
                        local_3c0->~fixed_string();
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("strchr(parent.GetName(), \'/\') == nullptr && strchr(parent.GetName(), \'\\\\\') == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                          "FileSystem_SQLite.cpp",
                          467, "Invalid filename. Must only contain a single parent path key");
            }
            local_298->~pair();
            unaff_RBX = 0;
        }
    LAB_100b217b4:
        local_168->~pair();
        local_508.~SQLStatement();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return unaff_RBX & 4294967295;
    }

    // 0x100b21870, 112 bytes, placed by class name
    // FileSystem_SQLite::SQLStatement::Prepare(char const*)
    void FileSystem_SQLite::SQLStatement::Prepare(char* param_1) {
        long lVar1;
        size_t sVar2;

        if (*field_0 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_database",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      1060, (char*)0);
        }
        Reset(this);
        lVar1 = *field_0;
        sVar2 = _strlen(param_1);
        _jag_sqlite3_prepare_v2(lVar1, param_1, sVar2 & 4294967295, &field_8, 0);
    }

    // 0x100b21910, 240 bytes, placed by class name
    // FileSystem_SQLite::WriteFileImpl(filesystem::QueueItem&&)
    void FileSystem_SQLite::WriteFileImpl(QueueItem* param_1) {
        char cVar1;
        scoped_lock<std::mutex> local_30[8];
        undefined4 local_28[2];

        if (param_1->field_336 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!qi.m_append",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      508, (char*)0);
        }
        SetDiskState(param_1->field_8, 1);
        cVar1 = PerformWrite(this, (Database*)field_920, param_1);
        SetDiskState(param_1, 4294967295);
        if (cVar1 == '\0') {
            oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)local_28, 5);
            *(undefined4*)param_1->field_544 = local_28[0];
        } else {
            UpdateCacheSize(this);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_2368);
        (&field_2432, param_1)->push_back();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100b21a00, 96 bytes, placed by class name
    // FileSystem_SQLite::UpdateCacheSize()
    void FileSystem_SQLite::UpdateCacheSize() {
        if (field_2356 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_databasePageSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      585, (char*)0);
        }
        _jag_sqlite3_exec(*(undefined8*)field_920, "PRAGMA page_count;", PageCountCallback, this, 0);
    }

    // 0x100b21ac0, 912 bytes, placed by class name
    // FileSystem_SQLite::PerformReadAll(FileSystem_SQLite::Database&, filesystem::QueueItem&)
    undefined8 FileSystem_SQLite::PerformReadAll(Database* param_1, QueueItem* param_2) {
        int iVar2;
        int iVar3;
        char* pcVar4;
        undefined8 uVar5;
        uchar* puVar6;
        size_t sVar7;
        SQLStatement local_620;
        mutex* local_608;
        list<filesystem::QueueItem, SafeBucketAllocatorEASTL>* local_600;
        Filename local_5f8[19];
        undefined1 local_4c8[568];
        fixed_string<char, 256, true, eastl::allocator> local_290[296];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_168->GetParentPath();
        pcVar4 = Filename::operator_cast_to_char_(local_168);
        if (CheckSettingsTable(this, pcVar4, false) != '\0') {
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_290);
            uVar5 = local_168->GetName();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_290, "SELECT KEY,DATA FROM \'%s\';", uVar5);
            new (&local_620) oldscape::SuperShuffledPacketFactory(param_1);
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = local_620.Prepare(pcVar4);
            if (iVar2 == 0) {
                local_608 = (mutex*)&field_2368;
                local_600 = (list<filesystem::QueueItem, SafeBucketAllocatorEASTL>*)&field_2432;
                while (true) {
                    uVar5 = local_620.end();
                    iVar3 = _jag_sqlite3_step(uVar5);
                    if (iVar3 != 100)
                        break;
                    uVar5 = local_620.end();
                    pcVar4 = (char*)_jag_sqlite3_column_text(uVar5, 0);
                    uVar5 = local_620.end();
                    puVar6 = (uchar*)_jag_sqlite3_column_text(uVar5);
                    if ((pcVar4 != (char*)0) && (puVar6 != (uchar*)0)) {
                        new (local_4c8) filesystem::QueueItem(param_2);
                        Filename::Filename(local_5f8, pcVar4);
                        Filename::operator=((Filename*)(local_4c8 + 8), local_5f8);
                        local_5f8->~pair();
                        sVar7 = _strlen((char*)puVar6);
                        new (local_5f8) Array<unsigned char, SafeBucketAllocatorEASTL>(puVar6, puVar6 + sVar7);
                        Array<unsigned char, SafeBucketAllocatorEASTL>::operator=(
                            (Array<unsigned char, SafeBucketAllocatorEASTL>*)(local_4c8 + 312), (Array*)local_5f8);
                        local_5f8->~Array();
                        new (local_5f8) std::scoped_lock<std::mutex>(local_608);
                        eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::push_back(local_600,
                                                                                                (QueueItem*)local_4c8);
                        local_5f8->~scoped_lock();
                        local_4c8->~QueueItem();
                    }
                }
                iVar2 = 0;
                if (iVar3 != 101) {
                    iVar2 = iVar3;
                }
                new (local_4c8) filesystem::QueueItem(param_2);
                Filename::Filename(local_5f8, "--end--");
                Filename::operator=((Filename*)(local_4c8 + 8), local_5f8);
                local_5f8->~pair();
                new (local_5f8) std::scoped_lock<std::mutex>(local_608);
                eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::push_back(local_600,
                                                                                        (QueueItem*)local_4c8);
                local_5f8->~scoped_lock();
                local_4c8->~QueueItem();
            }
            local_620.~SQLStatement();
            HandleSQLError(this, param_1, iVar2);
            /* WARNING: Subroutine does not return */
            local_290->~fixed_string();
        }
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return 0;
    }

    // 0x100b21e70, 368 bytes, placed by class name
    // FileSystem_SQLite::PerformRead(FileSystem_SQLite::Database&, filesystem::QueueItem&)
    undefined8 FileSystem_SQLite::PerformRead(Database* param_1, QueueItem* param_2) {
        uint uVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;
        undefined4 local_50[2];
        undefined4 local_48[2];
        char* local_40;
        char* local_38;

        if (IsSettingsStyle() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsSettingsStyle()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      591, "This shouldn\'t happen");
        }
        uVar4 = param_1->GetSelectStatement();
        uVar5 = param_2->field_8->GetName();
        uVar2 = _jag_sqlite3_bind_text(uVar4, 1, uVar5, 4294967295, 18446744073709551615);
        if (uVar2 == 0) {
            uVar2 = _jag_sqlite3_step(uVar4);
            if (uVar2 == 101) {
                oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)local_48, 2);
                *(undefined4*)param_2->field_544 = local_48[0];
                (&param_2->field_312)->clear();
            } else if (uVar2 == 100) {
                uVar3 = _jag_sqlite3_column_bytes(uVar4, 0);
                local_38 = (char*)CONCAT44(local_38._4_4_, uVar3);
                pcVar6 = (char*)_jag_sqlite3_column_blob(uVar4, 0);
                if (pcVar6 == (char*)0) {
                    oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                        (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)local_50, 2);
                    *(undefined4*)param_2->field_544 = local_50[0];
                } else {
                    local_40 = (char*)(long)(int)local_38;
                    local_38 = pcVar6;
                    (&param_2->field_312, (ulong)local_40, 0)->set_max_size();
                    local_40 = local_38 + (long)local_40;
                    pcVar6 = (char*)(&param_2->field_312)->data();
                    eastl::copy<char*, char*>(local_38, local_40, pcVar6);
                }
            }
            _jag_sqlite3_reset(uVar4);
            if ((uVar2 & 4294967294) == 100) {
                return 1;
            }
        }
        HandleSQLError(this, param_1, uVar2);
        return 0;
    }

    // 0x100b22050, 480 bytes, placed by class name
    // FileSystem_SQLite::ReadFileImpl(filesystem::QueueItem&&)
    void FileSystem_SQLite::ReadFileImpl(QueueItem* param_1) {
        char cVar1;
        int iVar2;
        Filename local_48;

        if (param_1->field_336 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!qi.m_append",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      635, (char*)0);
        }
        SetDiskState(param_1->field_8, 0);
        cVar1 = IsSettingsStyle();
        if (cVar1 == '\0') {
            cVar1 = PerformRead(this, (Database*)field_920, param_1);
            SetDiskState(param_1, 4294967295);
            if (cVar1 == '\0') {
                oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)&local_48, 5);
                *(undefined4*)param_1->field_544 = local_48._0_4_;
                new (&local_48) std::scoped_lock<std::mutex>((mutex*)&field_2368);
                (&field_2432, param_1)->push_back();
            } else {
                new (&local_48) std::scoped_lock<std::mutex>((mutex*)&field_2368);
                (&field_2432, param_1)->push_back();
            }
        } else {
            local_48.GetFile();
            iVar2 = local_48.compare("*");
            local_48.~basic_string();
            if (iVar2 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                "sqlite/FileSystem_SQLite.cpp",
                                659, (char*)0);
            }
            SetDiskState(param_1, 4294967295);
            cVar1 = PerformReadAll(this, (Database*)field_920, param_1);
            if (cVar1 != '\0') {
                return;
            }
            oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)&local_48, 2);
            *(undefined4*)param_1->field_544 = local_48._0_4_;
            new (&local_48) std::scoped_lock<std::mutex>((mutex*)&field_2368);
            (&field_2432, param_1)->push_back();
        }
        local_48.~scoped_lock();
    }

    // 0x100b22230, 752 bytes, placed by class name
    // FileSystem_SQLite::PerformDelete(FileSystem_SQLite::Database&, filesystem::QueueItem&)
    undefined8 FileSystem_SQLite::PerformDelete(Database* param_1, QueueItem* param_2) {
        uint uVar3;
        char* pcVar4;
        undefined8 uVar5;
        long lVar6;
        undefined8 uVar7;
        ulong uVar8;
        Filename local_518;
        SQLStatement local_500;
        Filename local_4f0[19];
        fixed_string<char, 256, true, eastl::allocator> local_3c0[296];
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::Filename(local_168, (Filename*)param_2->field_8);
        new (&local_500) oldscape::SuperShuffledPacketFactory(param_1);
        if (field_658 == '\0') {
            uVar5 = param_1->GetDeleteStatement();
            uVar7 = local_168->GetName();
            uVar3 = _jag_sqlite3_bind_text(uVar5, 1, uVar7, 4294967295, 18446744073709551615);
            uVar8 = (ulong)uVar3;
            if (uVar3 == 0) {
                uVar3 = _jag_sqlite3_step(uVar5);
                uVar8 = 0;
                if (uVar3 != 101) {
                    uVar8 = (ulong)uVar3;
                }
                _jag_sqlite3_reset(uVar5);
            }
            HandleSQLError(this, param_1, (int)uVar8);
            uVar5 = CONCAT71((int7)(uVar8 >> 8), (int)uVar8 == 0);
        } else {
            local_298->GetParentPath();
            pcVar4 = Filename::operator_cast_to_char_(local_298);
            if (CheckSettingsTable(this, pcVar4, true) != '\0') {
                eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_3c0);
                uVar5 = local_298->GetName();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_3c0, "DELETE FROM \'%s\' WHERE KEY = ?;", uVar5);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                if (local_500.Prepare(pcVar4) == 0) {
                    local_500.end();
                }
                uVar5 = local_298->GetName();
                lVar6 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(uVar5, 47);
                if (lVar6 == 0) {
                    uVar5 = local_298->GetName();
                    lVar6 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(uVar5, 92);
                    if (lVar6 == 0) {
                        local_518.GetFile();
                        Filename::Filename(local_4f0, (basic_string*)&local_518);
                        Filename::operator=(local_168, local_4f0);
                        local_4f0->~pair();
                        local_518.~basic_string();
                        /* WARNING: Subroutine does not return */
                        local_3c0->~fixed_string();
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("strchr(parent.GetName(), \'/\') == nullptr && strchr(parent.GetName(), \'\\\\\') == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                          "FileSystem_SQLite.cpp",
                          709, "Invalid filename. Must only contain a single parent path key");
            }
            local_298->~pair();
            uVar5 = 0;
        }
        local_500.~SQLStatement();
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar5;
    }

    // 0x100b22540, 224 bytes, placed by class name
    // FileSystem_SQLite::DeleteFileImpl(filesystem::QueueItem&&)
    void FileSystem_SQLite::DeleteFileImpl(QueueItem* param_1) {
        char cVar1;
        scoped_lock<std::mutex> local_30[8];
        undefined4 local_28[2];

        if (param_1->field_336 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!qi.m_append",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/sqlite/"
                      "FileSystem_SQLite.cpp",
                      736, (char*)0);
        }
        SetDiskState(param_1->field_8, 2);
        cVar1 = PerformDelete(this, (Database*)field_920, param_1);
        SetDiskState(param_1, 4294967295);
        if (cVar1 == '\0') {
            oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)local_28, 5);
            *(undefined4*)param_1->field_544 = local_28[0];
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_2368);
        (&field_2432, param_1)->push_back();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100b22620, 176 bytes, placed by class name
    // FileSystem_SQLite::ResetImpl(filesystem::QueueItem&&)
    void FileSystem_SQLite::ResetImpl(QueueItem* param_1) {
        scoped_lock<std::mutex> local_28[8];

        SQLClose(this);
        (field_312, (Error*)0)->RemoveDirectoryContents();
        FileSystem::m_resetPending = 0;
        FileSystem::m_runningReset = 0;
        (field_312, (Error*)0)->CreateDirectories();
        (&field_1008)->clear();
        SQLOpen(this);
        ResetDiskState();
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_2368);
        (&field_2432, param_1)->push_back();
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100b226d0, 96 bytes, placed by class name
    // FileSystem_SQLite::GetCurrentTableList(eastl::fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>, eastl::allocator>&)
    void FileSystem_SQLite::GetCurrentTableList(fixed_map* param_1) {
        int iVar1;
        undefined8 local_20;

        local_20 = 0;
        iVar1 = _jag_sqlite3_exec(*(undefined8*)field_920, "SELECT name FROM sqlite_master WHERE type = \'table\';",
                                  TableQueryCallback, param_1, &local_20);
        HandleSQLError(this, (Database*)field_920, iVar1);
    }

    // 0x100b22730, 176 bytes, placed by __FILE__ string
    // TableQueryCallback(void*, int, char**, char**)
    undefined8 TableQueryCallback(void* param_1, int param_2, char** param_3, char** param_4) {
        char* pcVar1;
        eastl::string* this;
        ulong uVar3;
        uint local_34;

        if (0 < param_2) {
            uVar3 = 0;
            do {
                if (_strcmp(param_4[uVar3], "name") != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("strcmp(azColName[i], \"name\") == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                              "sqlite/FileSystem_SQLite.cpp",
                              787, (char*)0);
                }
                pcVar1 = param_3[uVar3];
                local_34 = stringtools::hash32(pcVar1);
                this = (eastl::string*)eastl::map<
                    unsigned int, eastl::string, eastl::less<unsigned int>,
                    eastl::fixed_node_allocator<72ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::operator[](param_1,
                                                                                                           &local_34);
                eastl::string::assign(this, pcVar1);
                uVar3 = uVar3 + 1;
            } while ((uint)param_2 != uVar3);
        }
        return 0;
    }

    // 0x100b227e0, 544 bytes, placed by class name
    // FileSystem_SQLite::UpdateAllTableSchemasFromVersion1to2()
    undefined8 FileSystem_SQLite::UpdateAllTableSchemasFromVersion1to2() {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        char* pcVar6;
        undefined8 uVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar8;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base local_1598[8];
        undefined8 local_1590;
        fixed_string<char, 4096, true, eastl::allocator> local_1588[4136];
        fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>, eastl::allocator> local_560[1320];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>,
                         eastl::allocator>::fixed_map(local_560);
        cVar2 = GetCurrentTableList(this, (fixed_map*)local_560);
        if (cVar2 == '\0') {
            eastl::fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>,
                             eastl::allocator>::~fixed_map(local_560);
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return 0;
        }
        eastl::fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>, eastl::allocator>::
        operator=((fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>,
                             eastl::allocator>*)&field_1008,
                  (fixed_map*)local_560);
        cVar2 = field_2352;
        eastl::fixed_string<char, 4096, true, eastl::allocator>::fixed_string(local_1588);
        if (cVar2 != '\0') {
            (*(code*)field_0[15])(this);
        }
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)local_1588, "BEGIN;");
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar8 = extraout_RDX;
        while (true) {
            bVar3 = eastl::operator!=((eastl*)&local_1590, local_1598, phVar8);
            if (!bVar3)
                break;
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_1590);
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            GetTableSchemaUpdateString<eastl::fixed_string<char, 4096, true, eastl::allocator>>(
                (fixed_string*)local_1588, pcVar6);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_1590);
            phVar8 = extraout_RDX_00;
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)local_1588, "PRAGMA user_version=%u;", 2);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=((basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                       local_1588,
                   "END;");
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=((basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                       local_1588,
                   "VACUUM;");
        local_1590 = 0;
        uVar1 = *(undefined8*)field_920;
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar5 = _jag_sqlite3_exec(uVar1, uVar7, PageCountCallback, this, &local_1590);
        cVar4 = HandleSQLError(this, (Database*)field_920, iVar5);
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            local_1588->~fixed_string();
        }
        if (cVar2 != '\0') {
            (*(code*)field_0[14])(this);
        }
        /* WARNING: Subroutine does not return */
        local_1588->~fixed_string();
    }

    // 0x100b22a30, 48 bytes, placed by neighbouring functions
    // void GetTableSchemaUpdateString<eastl::fixed_string<char, 4096, true, eastl::allocator> >(eastl::fixed_string<char, 4096, true, eastl::allocator>&, char const*)
    void GetTableSchemaUpdateString<eastl::fixed_string<char, 4096, true, eastl::allocator>>(fixed_string* param_1,
                                                                                             char* param_2) {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf(
                (char*)param_1,
                "ALTER TABLE \'%s\' RENAME TO \'OLD_%s\';CREATE TABLE IF NOT EXISTS \'%s\'(  KEY      STRING PRIMARY "
                "KEY UNIQUE,  DATA     TEXT  );INSERT INTO \'%s\' SELECT * FROM \'OLD_%s\';DROP TABLE \'OLD_%s\';",
                param_2, param_2, param_2, param_2, param_2, param_2);
    }

    // 0x100b22be0, 352 bytes, placed by class name
    // FileSystem_SQLite::SQLCheckProperties(FileSystem_SQLite::Database&, bool&, bool)
    void FileSystem_SQLite::SQLCheckProperties(Database* param_1, bool* param_2, bool param_3) {
        undefined8 uVar1;
        undefined8 uVar3;
        undefined8 local_268;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        local_260->append("PRAGMA temp_store=MEMORY;PRAGMA journal_mode=OFF;PRAGMA synchronous=OFF;PRAGMA "
                          "auto_vacuum=NONE;PRAGMA page_size;PRAGMA page_count;");
        if (param_3) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, "%s=%u;%s=%u;", "PRAGMA application_id", 1701737810,
                               "PRAGMA user_version", 2);
        } else {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, "%s;%s;", "PRAGMA application_id", "PRAGMA user_version");
        }
        local_268 = 0;
        uVar1 = param_1->field_0;
        uVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        if (_jag_sqlite3_exec(uVar1, uVar3, PageCountCallback, this, &local_268) == 0) {
            if (field_2364 == 1701737810) {
                if (field_2360 < 2) {
                    UpdateAllTableSchemasFromVersion1to2(this);
                }
            } else {
                *param_2 = true;
            }
        }
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x100b22d40, 128 bytes, placed by class name
    // FileSystem_SQLite::PerformClose(FileSystem_SQLite::Database&)
    ulong FileSystem_SQLite::PerformClose(Database* param_1) {
        int iVar1;
        undefined8 unaff_R15;
        ulong uVar2;

        (&param_1->field_56)->Reset();
        (&param_1->field_72)->Reset();
        (&param_1->field_8)->Reset();
        (&param_1->field_24)->Reset();
        (&param_1->field_40)->Reset();
        uVar2 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (param_1->field_0 != 0) {
            iVar1 = _jag_sqlite3_close();
            if (iVar1 == 0) {
                param_1->field_0 = 0;
            } else {
                HandleSQLError(this, param_1, iVar1);
                uVar2 = 0;
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x100b22dc0, 48 bytes, placed by class name
    // FileSystem_SQLite::ClearStatement(sqlite3_stmt*&)
    bool FileSystem_SQLite::ClearStatement(sqlite3_stmt** param_1) {
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

    // 0x100b22df0, 48 bytes, placed by class name
    // FileSystem_SQLite::SQLStatement::Reset()
    void FileSystem_SQLite::SQLStatement::Reset() {
        if (field_8 != 0) {
            _jag_sqlite3_finalize();
            field_8 = 0;
        }
    }

    // 0x100b22e20, 144 bytes, placed by class name
    // FileSystem_SQLite::Database::BuildStatement(char const*, FileSystem_SQLite::SQLStatement&)
    undefined8 FileSystem_SQLite::Database::BuildStatement(char* param_1, SQLStatement* param_2) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        lVar2 = param_2->end();
        if ((lVar2 == 0) && (iVar1 = param_2->Prepare(param_1), iVar1 != 0)) {
            uVar3 = logger::default_logger();
            uVar4 = _jag_sqlite3_errmsg(field_0);
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                                "sqlite/FileSystem_SQLite.cpp",
                                1051, "sqlite3_prepare_v2 error: %s", uVar4);
            return 0;
        }
        uVar3 = param_2->end();
        return uVar3;
    }

    // 0x100b23ca0, 16 bytes, base-object destructor, placed by class name and neighbouring functions
    // FileSystem::DeleteDirectory(Filename const&)::$_0::~$_0()
    /* ~$_0() */

    void FileSystem::DeleteDirectory(Filename_const&)::$_0::~__0() {
        ~pair();
    }

    // 0x100b26010, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // FileSystem::DeleteDirectory(Filename const&)::$_0::$_0($_0&&): jumps straight to the base-object constructor

    // 0x100b26020, 16 bytes, base-object constructor, placed by class name and neighbouring functions
    // FileSystem::DeleteDirectory(Filename const&)::$_0::$_0($_0&&)
    /* $_0($_0&&) */

    void FileSystem::DeleteDirectory(Filename_const&)::$_0::__0(__0* param_1) {
        new (this) Filename(param_1);
    }

    // 0x100b26110, 16 bytes, placed by class name and neighbouring functions
    // FileSystem::DeleteDirectory(Filename const&)::$_0::operator()() const
    /* FileSystem::DeleteDirectory(Filename const&)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void FileSystem::DeleteDirectory(Filename_const&)::$_0::operator()() {
        DeleteDirectory((Filename*)this);
    }

    // 0x100b292b0, 16 bytes, placed by class name
    // FileSystem_SQLite::FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*, bool)::$_1::operator()(int) const
    /* FileSystem_SQLite::FileSystem_SQLite(Filename const&, FileSystem::Scope, char
   const*, bool)::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void FileSystem_SQLite::FileSystem_SQLite(Filename_const&, FileSystem::Scope, char const*,
                                              bool)::$_1::operator()(int param_1) {
        ThreadRunnerWrapper(field_0, param_1);
    }

} // namespace jag

// 0x100b218e0, 16 bytes, placed by neighbouring functions
// _ZL6strchrUa9enable_ifIXLb1EEEPKci
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
