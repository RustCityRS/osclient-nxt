// libs/hal/filesystem/FileSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.filesystem

#include "FileSystem.h"

namespace jag {
    // 0x103bc2268, 32 bytes, __common; set at startup by ___cxx_global_var_init
    eastl::list<weak_ptr<FileSystem>, eastl::allocator> FileSystem::m_FileSystemList =
        list<weak_ptr<FileSystem>, eastl::allocator>();

    // 0x103bc2288, 1 bytes, __common; zero-initialised
    FileSystem::m_resetPending;

    // 0x103bc2289, 1 bytes, __common; zero-initialised
    FileSystem::m_runningReset;

    // 0x103bc228a, 6 bytes, __common; zero-initialised
    FileSystem::ms_diskThreadQuit;

    // 0x103bc2290, 8 bytes, __common; zero-initialised
    FileSystem::m_cacheFolderUsage;

    // 0x103bc2298, 8 bytes, __common; zero-initialised
    FileSystem::m_userFolderUsage;

    // 0x103bc22a0, 8 bytes, __common; zero-initialised
    FileSystem::m_notificationHandler;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    FileSystem::SetIndexUpdateCallback(std::function<Array<unsigned char, eastl::allocator>*(int)> const&);

    // 0x10017a580: the linker folded this into http::HTTPRequest::GetErrorCode() const, which has identical code
    FileSystem::GetScope() const;

    // 0x100b1cae0, 352 bytes, placed by class name and debug map
    // FileSystem::Service()
    void FileSystem::Service() {
        bool bVar1;
        long* plVar3;
        Slider* this;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        long lVar5;
        long lVar6;
        shared_ptr local_58;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        local_38.begin();
        local_58.end();
        bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_58, extraout_RDX);
        if (bVar1) {
            lVar5 = 0;
            lVar6 = 0;
            do {
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                weak_ptr<oldscape::rs2lib::IfType>::lock();
                bVar1 = shared_ptr::operator_cast_to_bool(&local_58);
                if (bVar1) {
                    plVar3 = (long*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&local_58);
                    (**(code**)(*plVar3 + 64))(plVar3);
                    this = (Slider*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&local_58);
                    if (GetCurrentValue() == 0) {
                        plVar3 = (long*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&local_58);
                        lVar4 = (**(code**)(*plVar3 + 48))(plVar3);
                        lVar6 = lVar6 + lVar4;
                    } else {
                        plVar3 = (long*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&local_58);
                        lVar4 = (**(code**)(*plVar3 + 48))(plVar3);
                        lVar5 = lVar5 + lVar4;
                    }
                } else {
                    new (&local_40) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                        (ListIterator*)&local_38);
                    eastl::list<weak_ptr<FileSystem>, eastl::allocator>::erase(&local_48, &m_FileSystemList, local_40);
                    local_38 = local_48;
                }
                local_58.~shared_ptr();
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                local_58.end();
                bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_58, extraout_RDX_00);
            } while (bVar1);
        } else {
            lVar6 = 0;
            lVar5 = 0;
        }
        m_cacheFolderUsage = lVar6;
        m_userFolderUsage = lVar5;
    }

    // 0x100b1ccd0, 608 bytes, base-object constructor, placed by class name
    // FileSystem::FileSystem(Filename const&, FileSystem::Scope, char const*, bool)
    void FileSystem::FileSystem(Filename* param_1, int param_3, char* param_4, undefined1 param_5) {
        undefined1* this_00;
        char* pcVar1;
        SystemPaths* this_01;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) SystemPathsCallbackInterface();
        field_0 = &PTR_OnCacheFolderChanged_100f255f0;
        new (field_8, param_1) Filename();
        this_00 = field_312;
        new (this_00) Filename();
        field_616 = param_3;
        new (local_168) eastl::allocator("EASTL basic_string");
        new (&field_624, param_4, (allocator*)local_168) eastl::string();
        *(undefined2*)&m_ready = 0;
        m_settingsStyle = param_5;
        new (&field_664) std::mutex();
        new (local_168) eastl::allocator("EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_728);
        new (&field_776) std::mutex();
        new (&field_840) std::condition_variable();
        this_01 = (SystemPaths*)&field_888;
        eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::list();
        field_912 = 0;
        if (param_3 == 1) {
            pcVar1 = (char*)this_01->GetUserFolder();
            Filename::operator/(local_168, pcVar1);
            Filename::operator=((Filename*)this_00, local_168);
        } else {
            if (param_3 != 0)
                goto LAB_100b1ce67;
            pcVar1 = (char*)this_01->GetCacheFolder();
            Filename::operator/(local_168, pcVar1);
            Filename::operator=((Filename*)this_00, local_168);
        }
        local_168->~pair();
    LAB_100b1ce67:
        SystemPaths::RegisterPathChangeCallback((SystemPathsCallbackInterface*)this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1cf70, 240 bytes, base-object destructor, placed by class name
    // FileSystem::~FileSystem()
    void FileSystem::~FileSystem() {
        field_0 = &PTR_OnCacheFolderChanged_100f255f0;
        SystemPaths::UnregisterPathChangeCallback((SystemPathsCallbackInterface*)this);
        (&field_888)->~list();
        (&field_840)->~condition_variable();
        (&field_776)->~mutex();
        (&field_728)->~map();
        (&field_664)->~mutex();
        (&field_624)->~basic_string();
        field_312->~pair();
        field_8->~pair();
    }

    // 0x100b1d060, 16 bytes, complete-object destructor, placed by class name
    // FileSystem::~FileSystem(): jumps straight to the base-object destructor

    // 0x100b1d070, 16 bytes, deleting destructor, placed by class name
    // FileSystem::~FileSystem()
    void FileSystem::~FileSystem() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100b1d080, 160 bytes, placed by class name
    // FileSystem::OnCacheFolderChanged(Filename const&, Filename const&)
    void FileSystem::OnCacheFolderChanged(Filename* param_1, Filename* param_2) {
        Filename* this_00;
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_616 == 0) {
            this_00 = (Filename*)GetCacheFolder();
            Filename::operator/(local_150, this_00, (fixed_string*)&field_624);
            (*(code*)field_0[9])(this, local_150);
            local_150->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1d120, 160 bytes, placed by class name
    // FileSystem::OnUserFolderChanged(Filename const&, Filename const&)
    void FileSystem::OnUserFolderChanged(Filename* param_1, Filename* param_2) {
        Filename* this_00;
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_616 == 1) {
            this_00 = (Filename*)GetUserFolder();
            Filename::operator/(local_150, this_00, (fixed_string*)&field_624);
            (*(code*)field_0[9])(this, local_150);
            local_150->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1d1c0, 288 bytes, placed by class name
    // FileSystem::ProcessAllQueuedRequests()
    void FileSystem::ProcessAllQueuedRequests() {
        undefined1* this_00;
        char cVar1;
        QueueItem* pQVar2;
        unique_lock<std::mutex> local_278[16];
        QueueItem local_268;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = IsReady(this);
        if (cVar1 != '\0') {
            std::unique_lock<std::mutex>::unique_lock(local_278, (mutex*)&field_776);
            this_00 = &field_888;
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                do {
                    new (&local_268) filesystem::QueueItem();
                    pQVar2 = (QueueItem*)eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::front();
                    local_268.swap(pQVar2);
                    this_00->pop_front();
                    std::unique_lock<std::mutex>::unlock(local_278);
                    ProcessRequest(this, &local_268);
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

    // 0x100b1d460, 224 bytes, placed by class name
    // FileSystem::ProcessRequest(filesystem::QueueItem&&)
    void FileSystem::ProcessRequest(QueueItem* param_1) {
        undefined8 uVar2;

        if (IsReady(this) != '\0') {
            switch (param_1->field_0) {
            case 0:
                (*(code*)field_0[11])(this, param_1);
                break;
            case 1:
                (*(code*)field_0[10])(this, param_1);
                break;
            case 2:
                (*(code*)field_0[12])(this, param_1);
                break;
            case 3:
                (*(code*)field_0[13])(this, param_1);
                break;
            default:
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                    "filesystem/FileSystem.cpp",
                                    194, "FileSystem::ProcessRequest: Unknown request type: %d", param_1->field_0);
                break;
            case 5:
                (*(code*)field_0[14])(this);
                break;
            case 6:
                (*(code*)field_0[15])(this);
            }
        }
    }

    // 0x100b1d560, 624 bytes, placed by class name
    // FileSystem::ProcessQueuedRequest(filesystem::QueueItem const&)
    void FileSystem::ProcessQueuedRequest(QueueItem* param_1) {
        undefined1* this_00;
        char cVar2;
        bool bVar3;
        int iVar4;
        QueueItem* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar5;
        undefined8 local_298;
        scoped_lock<std::mutex> local_290[8];
        list<console::Line, eastl::allocator> local_288[8];
        QueueItem* local_280;
        list<console::Line, eastl::allocator> local_270[8];
        QueueItem local_268;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_280 = param_1;
        cVar2 = IsReady(this);
        if ((cVar2 != '\0') && (field_912 == '\0')) {
            field_912 = 1;
            new (&local_268) filesystem::QueueItem();
            std::scoped_lock<std::mutex>::scoped_lock(local_290, (mutex*)&field_776);
            eastl::list<console::Line, eastl::allocator>::begin(local_270);
            local_280 = (QueueItem*)local_280->field_8;
            do {
                eastl::list<console::Line, eastl::allocator>::end(local_288);
                bVar3 = eastl::operator!=((eastl*)local_270, (hashtable_iterator_base*)local_288, extraout_RDX);
                iVar5 = 0;
                if (!bVar3)
                    goto LAB_100b1d72d;
                this_01 = (QueueItem*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_270);
                this_00 = this_01->field_8;
                cVar2 = Filename::operator==((Filename*)this_00, (Filename*)local_280);
                if (cVar2 == '\0') {
                    eastl::list<console::Line, eastl::allocator>::begin(local_288);
                    bVar3 = eastl::operator==((eastl*)local_270, (hashtable_iterator_base*)local_288, extraout_RDX_00);
                    if ((bVar3) && (cVar2 = this_00->IsEmpty(), cVar2 != '\0'))
                        goto LAB_100b1d662;
                    cVar2 = this_00->IsEmpty();
                    if (cVar2 == '\0') {
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_270);
                        iVar4 = 0;
                    } else {
                        ((FileSystem*)this)->field_912 = 0;
                        iVar4 = 1;
                    }
                } else {
                LAB_100b1d662:
                    this_01->swap(&local_268);
                    new (&local_298)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_270);
                    eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::erase(local_288, &field_888,
                                                                                        local_298);
                    iVar4 = 3;
                }
            } while (iVar4 == 0);
            iVar5 = 0;
            if (iVar4 != 3) {
                iVar5 = iVar4;
            }
        LAB_100b1d72d:
            std::scoped_lock<std::mutex>::~scoped_lock(local_290);
            if (iVar5 == 0) {
                if (local_268.field_0 != 4294967295) {
                    ProcessRequest((FileSystem*)this, &local_268);
                }
                ((FileSystem*)this)->field_912 = 0;
            }
            local_268.~QueueItem();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1d820, 432 bytes, placed by class name
    // FileSystem::ProcessResponse(filesystem::QueueItem&)
    void FileSystem::ProcessResponse(QueueItem* param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        undefined8 uVar4;
        Error local_50[8];

        cVar1 = param_1->field_544->IsValid();
        if (cVar1 == '\0') {
            switch (param_1->field_0) {
            case 0:
                bVar2 = (&param_1->field_448)->operator_cast_to_bool();
                if (bVar2) {
                    Array<unsigned char, eastl::allocator>::Array<SafeBucketAllocatorEASTL>(
                        (Array<unsigned char, eastl::allocator>*)local_50, (Array*)&param_1->field_312);
                    std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::operator()(
                        (Filename*)&param_1->field_448, (Array*)param_1->field_8);
                    local_50->~Array();
                }
                break;
            case 1:
            case 2:
                bVar2 = (&param_1->field_400)->operator_cast_to_bool();
                if (bVar2) {
                    std::function<void(Filename_const&)>::operator()(
                        (function<void(Filename_const&)>*)&param_1->field_400, (Filename*)param_1->field_8);
                }
                break;
            case 3:
                bVar2 = (&param_1->field_352)->operator_cast_to_bool();
                if (bVar2) {
                    std::function<void()>::operator()((function<void()>*)&param_1->field_352);
                }
                break;
            default:
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                    "filesystem/FileSystem.cpp",
                                    235, "FileSystem::ProcessResponse: Unknown request type: %d", param_1->field_0);
                break;
            case 5:
            case 6:
                break;
            }
        } else {
            bVar2 = (&param_1->field_496)->operator_cast_to_bool();
            if (bVar2) {
                uVar3 = param_1->field_544->GetX();
                local_50->GetErrorString();
                std::function<void(Filename_const&, int, eastl::stringconst&)>::operator()(
                    (Filename*)&param_1->field_496, (int)param_1 + 8, (basic_string*)(ulong)uVar3);
                local_50->~basic_string();
            }
        }
    }

    // 0x100b1da50, 48 bytes, placed by class name
    // FileSystem::FinishedRequest(filesystem::QueueItem const&)
    void FileSystem::FinishedRequest(QueueItem* param_1) {
        SetDiskState(this, param_1, 4294967295);
        ProcessQueuedRequest(this, param_1);
    }

    // 0x100b1da90, 80 bytes, placed by class name
    // FileSystem::ResetDiskState()
    void FileSystem::ResetDiskState() {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_664);
        (&field_728)->clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x100b1db10, 128 bytes, placed by class name
    // FileSystem::SetDiskState(Filename const&, filesystem::RequestType)
    void FileSystem::SetDiskState(Filename* param_1, undefined4 param_3) {
        char* pcVar1;
        undefined4* puVar2;
        scoped_lock<std::mutex> local_30[12];
        uint local_24;

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_664);
        pcVar1 = (char*)param_1->GetName();
        local_24 = stringtools::hash32(pcVar1);
        puVar2 = (undefined4*)
            eastl::map<unsigned int, filesystem::RequestType, eastl::less<unsigned int>, eastl::allocator>::operator[](
                (map<unsigned int, filesystem::RequestType, eastl::less<unsigned int>, eastl::allocator>*)&field_728,
                &local_24);
        *puVar2 = param_3;
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100b1dc50, 176 bytes, placed by class name
    // FileSystem::GetDiskState(Filename const&) const
    undefined4 FileSystem::GetDiskState(Filename* param_1) {
        bool bVar1;
        undefined4 uVar2;
        char* pcVar3;
        long lVar4;
        undefined1 auVar5[16];
        scoped_lock<std::mutex> local_30[8];
        undefined8 local_28;
        undefined8 local_20;

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_664);
        pcVar3 = (char*)param_1->GetName();
        uVar2 = stringtools::hash32(pcVar3);
        local_20 = CONCAT44(local_20._4_4_, uVar2);
        local_28 = eastl::rbtree<unsigned int, eastl::pair<unsigned int const, filesystem::RequestType>,
                                 eastl::less<unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<unsigned int const, filesystem::RequestType>>, true,
                                 true>::find(&field_728);
        auVar5 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_20 = auVar5._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_20, auVar5._8_8_);
        uVar2 = 4294967295;
        if (bVar1) {
            lVar4 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
            uVar2 = *(undefined4*)(lVar4 + 4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return uVar2;
    }

    // 0x100b1dd40, 48 bytes, placed by class name
    // FileSystem::GetFileStatus(Filename const&)
    undefined8 FileSystem::GetFileStatus(Filename* param_1) {
        char cVar1;
        undefined8 uVar2;
        Filename* in_RSI;

        cVar1 = IsReady((FileSystem*)param_1);
        uVar2 = 4294967295;
        if (cVar1 != '\0') {
            uVar2 = GetDiskState((FileSystem*)param_1, in_RSI);
        }
        return uVar2;
    }

    // 0x100b1dd70, 224 bytes, placed by class name
    // FileSystem::FileHasScheduledAction(Filename const&, filesystem::RequestType) const
    ulong FileSystem::FileHasScheduledAction(Filename* param_1, int param_3) {
        bool bVar1;
        int iVar3;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        int* piVar4;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var_01;
        undefined4 extraout_var_02;
        undefined8 unaff_RBX;
        ulong uVar5;
        scoped_lock<std::mutex> local_48[8];
        undefined8 local_40;
        undefined8 local_38;

        iVar3 = GetDiskState(this, param_1);
        uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (iVar3 != param_3) {
            std::scoped_lock<std::mutex>::scoped_lock(local_48, (mutex*)&field_776);
            local_40 = eastl::list<console::Line, eastl::allocator>::begin();
            local_38 = eastl::list<console::Line, eastl::allocator>::end();
            bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38,
                                      (hashtable_iterator_base*)CONCAT44(extraout_var_01, extraout_EDX));
            uVar5 = CONCAT71(extraout_var, bVar1) & 4294967295;
            if (bVar1) {
                do {
                    piVar4 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    if (*piVar4 == param_3) {
                        if (Filename::operator==((Filename*)(piVar4 + 2), param_1) != '\0')
                            break;
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                    bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var_02, extraout_EDX_00));
                    uVar5 = CONCAT71(extraout_var_00, bVar1) & 4294967295;
                } while (bVar1);
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        }
        return uVar5 & 4294967295;
    }

    // 0x100b1de50, 112 bytes, placed by class name
    // FileSystem::PushQuery(filesystem::QueueItem&&)
    void FileSystem::PushQuery(QueueItem* param_1) {
        QueueItem* this_00;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_776);
        this_00 = (QueueItem*)(&field_888)->push_back();
        this_00->swap(param_1);
        std::condition_variable::notify_one();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100b1df00, 304 bytes, placed by class name
    // FileSystem::RemoveQuery(filesystem::QueueItem const&)
    void FileSystem::RemoveQuery(QueueItem* param_1) {
        bool bVar1;
        uint* puVar3;
        undefined8 uVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_50;
        scoped_lock<std::mutex> local_48[8];
        list<console::Line, eastl::allocator> local_40[8];
        list<console::Line, eastl::allocator> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_48, (mutex*)&field_776);
        eastl::list<console::Line, eastl::allocator>::begin(local_40);
        eastl::list<console::Line, eastl::allocator>::end(local_38);
        bVar1 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_38, extraout_RDX);
        if (bVar1) {
            do {
                puVar3 = (uint*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                if (*puVar3 == param_1->field_0) {
                    if (Filename::operator==((Filename*)(puVar3 + 2), (Filename*)param_1->field_8) != '\0') {
                        new (&local_50)
                            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                        eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::erase(local_38, &field_888,
                                                                                            local_50);
                        goto LAB_100b1dffd;
                    }
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                eastl::list<console::Line, eastl::allocator>::end(local_38);
                bVar1 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_38, extraout_RDX_00);
            } while (bVar1);
        }
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/FileSystem.cpp", 331,
            "Tried to RemoveQuery a non existant query");
    LAB_100b1dffd:
        std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    }

    // 0x100b1e030, 144 bytes, placed by class name
    // FileSystem::BeginTransaction()
    void FileSystem::BeginTransaction() {
        QueueItem local_258;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_258) filesystem::QueueItem();
        local_258.field_0 = 5;
        PushQuery(this, &local_258);
        local_258.~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e0c0, 144 bytes, placed by class name
    // FileSystem::EndTransaction()
    void FileSystem::EndTransaction() {
        QueueItem local_258;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_258) filesystem::QueueItem();
        local_258.field_0 = 6;
        PushQuery(this, &local_258);
        local_258.~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e150, 288 bytes, placed by class name
    // FileSystem::WriteFile(Filename const&, Array<unsigned char, eastl::allocator> const&, bool, std::function<void (Filename const&)> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::WriteFile(Filename const&, Array<unsigned char, eastl::allocator>
   const&, bool, std::function<void (Filename const&)> const&, std::function<void
   (Filename const&, int, eastl::string const&)> const&) */

    void FileSystem::WriteFile(Filename* param_1, Array* param_2, bool param_3, function* param_4, function* param_5) {
        Array<unsigned char, SafeBucketAllocatorEASTL> local_288[24];
        FileSystem* local_270;
        undefined1 local_268[336];
        undefined1 local_118;
        function<void(Filename_const&)> local_d8[96];
        function<void(Filename_const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_270 = this;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        Filename::operator=((Filename*)(local_268 + 8), param_1);
        Array<unsigned char, SafeBucketAllocatorEASTL>::Array<eastl::allocator>(local_288, param_2);
        Array<unsigned char, SafeBucketAllocatorEASTL>::operator=(
            (Array<unsigned char, SafeBucketAllocatorEASTL>*)(local_268 + 312), (Array*)local_288);
        local_288->~Array();
        local_118 = param_3;
        std::function<void(Filename_const&)>::operator=(local_d8, param_4);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_78, param_5);
        PushQuery(local_270, (QueueItem*)local_268);
        local_268->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e370, 288 bytes, placed by class name
    // FileSystem::WriteFile(Filename const&, Array<unsigned char, eastl::allocator>&&, bool, std::function<void (Filename const&)> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::WriteFile(Filename const&, Array<unsigned char, eastl::allocator>&&,
   bool, std::function<void (Filename const&)> const&, std::function<void (Filename
   const&, int, eastl::string const&)> const&) */

    void FileSystem::WriteFile(Filename* param_1, Array* param_2, bool param_3, function* param_4, function* param_5) {
        Array<unsigned char, SafeBucketAllocatorEASTL> local_288[24];
        FileSystem* local_270;
        undefined1 local_268[336];
        undefined1 local_118;
        function<void(Filename_const&)> local_d8[96];
        function<void(Filename_const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_270 = this;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        Filename::operator=((Filename*)(local_268 + 8), param_1);
        Array<unsigned char, SafeBucketAllocatorEASTL>::Array<eastl::allocator>(local_288, param_2);
        Array<unsigned char, SafeBucketAllocatorEASTL>::operator=(
            (Array<unsigned char, SafeBucketAllocatorEASTL>*)(local_268 + 312), (Array*)local_288);
        local_288->~Array();
        local_118 = param_3;
        std::function<void(Filename_const&)>::operator=(local_d8, param_4);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_78, param_5);
        PushQuery(local_270, (QueueItem*)local_268);
        local_268->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e490, 304 bytes, placed by class name
    // FileSystem::WriteFile(Filename const&, Array<unsigned char, BucketAllocatorEASTL>&&, bool, std::function<void (Filename const&)> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::WriteFile(Filename const&, Array<unsigned char,
   BucketAllocatorEASTL>&&, bool, std::function<void (Filename const&)> const&,
   std::function<void (Filename const&, int, eastl::string
   const&)> const&) */

    void FileSystem::WriteFile(Filename* param_1, Array* param_2, bool param_3, function* param_4, function* param_5) {
        Array<unsigned char, SafeBucketAllocatorEASTL> local_290[24];
        function* local_278;
        FileSystem* local_270;
        undefined1 local_268[336];
        undefined1 local_118;
        function<void(Filename_const&)> local_d8[96];
        function<void(Filename_const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_278 = param_5;
        local_270 = this;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        Filename::operator=((Filename*)(local_268 + 8), param_1);
        Array<unsigned char, SafeBucketAllocatorEASTL>::Array<BucketAllocatorEASTL>(local_290, param_2);
        Array<unsigned char, SafeBucketAllocatorEASTL>::operator=(
            (Array<unsigned char, SafeBucketAllocatorEASTL>*)(local_268 + 312), (Array*)local_290);
        local_290->~Array();
        local_118 = param_3;
        std::function<void(Filename_const&)>::operator=(local_d8, param_4);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_78, local_278);
        PushQuery(local_270, (QueueItem*)local_268);
        local_268->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e5d0, 240 bytes, placed by class name
    // FileSystem::WriteFile(Filename const&, Array<unsigned char, SafeBucketAllocatorEASTL>&&, bool, std::function<void (Filename const&)> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::WriteFile(Filename const&, Array<unsigned char,
   SafeBucketAllocatorEASTL>&&, bool, std::function<void (Filename const&)> const&,
   std::function<void (Filename const&, int, eastl::string
   const&)> const&) */

    void FileSystem::WriteFile(Filename* param_1, Array* param_2, bool param_3, function* param_4, function* param_5) {
        undefined1 local_268[336];
        undefined1 local_118;
        function<void(Filename_const&)> local_d8[96];
        function<void(Filename_const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        Filename::operator=((Filename*)(local_268 + 8), param_1);
        Array<unsigned char, SafeBucketAllocatorEASTL>::operator=(
            (Array<unsigned char, SafeBucketAllocatorEASTL>*)(local_268 + 312), param_2);
        local_118 = param_3;
        std::function<void(Filename_const&)>::operator=(local_d8, param_4);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_78, param_5);
        PushQuery(this, (QueueItem*)local_268);
        local_268->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e6c0, 208 bytes, placed by class name
    // FileSystem::ReadFile(Filename const&, std::function<void (Filename const&, Array<unsigned char, eastl::allocator> const&)> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::ReadFile(Filename const&, std::function<void (Filename const&,
   Array<unsigned char, eastl::allocator> const&)> const&, std::function<void (Filename
   const&, int, eastl::string const&)> const&) */

    void FileSystem::ReadFile(Filename* param_1, function* param_2, function* param_3) {
        undefined1 local_268[496];
        function<void(Filename_const&, int, eastl::stringconst&)> local_78[72];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 0;
        Filename::operator=((Filename*)(local_268 + 8), param_1);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::operator=(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)(local_268 + 448),
            param_2);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_78, param_3);
        PushQuery(this, (QueueItem*)local_268);
        local_268->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e7f0, 208 bytes, placed by class name
    // FileSystem::DeleteFile(Filename const&, std::function<void (Filename const&)> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::DeleteFile(Filename const&, std::function<void (Filename const&)>
   const&, std::function<void (Filename const&, int, eastl::basic_string<char,
   eastl::allocator> const&)> const&) */

    void FileSystem::DeleteFile(Filename* param_1, function* param_2, function* param_3) {
        undefined1 local_268[496];
        function<void(Filename_const&, int, eastl::stringconst&)> local_78[72];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 2;
        Filename::operator=((Filename*)(local_268 + 8), param_1);
        std::function<void(Filename_const&)>::operator=((function<void(Filename_const&)>*)(local_268 + 400), param_2);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_78, param_3);
        PushQuery(this, (QueueItem*)local_268);
        local_268->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e8c0, 192 bytes, placed by class name
    // FileSystem::Reset(std::function<void ()> const&, std::function<void (Filename const&, int, eastl::string const&)> const&)
    /* FileSystem::Reset(std::function<void ()> const&, std::function<void (Filename const&,
   int, eastl::string const&)> const&) */

    void FileSystem::Reset(function* param_1, function* param_2) {
        undefined1 local_258[496];
        function<void(Filename_const&, int, eastl::stringconst&)> local_68[64];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_resetPending = 1;
        new (local_258) filesystem::QueueItem();
        local_258._0_4_ = 3;
        std::function<void()>::operator=((function<void()>*)(local_258 + 352), param_1);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::operator=(local_68, param_2);
        PushQuery(this, (QueueItem*)local_258);
        local_258->~QueueItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b1e980, 960 bytes, placed by class name
    // FileSystem::DeleteDirectory(Filename const&)
    int FileSystem::DeleteDirectory(Filename* param_1) {
        future<int>* this;
        ThreadPool* pTVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        undefined8* puVar5;
        char* pcVar6;
        FileListContents* pFVar7;
        Layout* this_00;
        vector* pvVar8;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        FileListContents* this_01;
        int iVar9;
        list<std::future<int>*, eastl::allocator> local_438[32];
        list<filesystem::FileListContents, eastl::allocator> local_418[32];
        ThreadPool* local_3f8;
        ThreadPool* local_3f0;
        Filename* local_3e8;
        Filename local_3e0[19];
        Filename local_2b0[19];
        FileListContents local_180;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::list<filesystem::FileListContents, eastl::allocator>::list(local_418);
        eastl::list<std::future<int>*, eastl::allocator>::list(local_438);
        iVar9 = 0;
        iVar4 = GetFileList(param_1, (list*)local_418, false, (Filename*)0);
        local_3e8 = param_1;
        if (iVar4 == 0) {
            cVar2 = local_418->empty();
            if (cVar2 == '\0') {
                iVar9 = 0;
                do {
                    this_01 = &local_180;
                    filesystem::FileListContents::FileListContents(this_01);
                    pFVar7 = (FileListContents*)eastl::list<filesystem::FileListContents, eastl::allocator>::front();
                    this_01->swap(pFVar7);
                    eastl::list<filesystem::FileListContents, eastl::allocator>::pop_front(local_418);
                    Filename::Filename(local_2b0, param_1);
                    Filename::operator/=(local_2b0, (Filename*)this_01);
                    if ((local_180.field_320 & 8) == 0) {
                        if ((local_180.field_320 & 7) != 0) {
                            pcVar6 = Filename::operator_cast_to_char_(local_2b0);
                            _chmod(pcVar6, 777);
                        }
                        pcVar6 = Filename::operator_cast_to_char_(local_2b0);
                        _unlink(pcVar6);
                        iVar9 = iVar9 + 1;
                    } else {
                        if ((local_180.field_320 & 7) != 0) {
                            pcVar6 = Filename::operator_cast_to_char_(local_2b0);
                            this_01 = (FileListContents*)777;
                            _chmod(pcVar6, 777);
                        }
                        local_3f0 = operator_new(8);
                        this_00 = (Layout*)8->Instance();
                        pvVar8 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)this_01);
                        Filename::Filename(local_3e0, local_2b0);
                        pTVar1 = local_3f0;
                        ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::__0>(local_3f0, (char*)pvVar8,
                                                                                               (__0*)local_3e0);
                        local_3f8 = pTVar1;
                        eastl::list<std::future<int>*, eastl::allocator>::push_back(local_438, (future**)&local_3f8);
                        DeleteDirectory(Filename_const&)::$_0::~__0((__0*)local_3e0);
                        param_1 = local_3e8;
                    }
                    local_2b0->~pair();
                    local_180.~__alt();
                    cVar2 = local_418->empty();
                } while (cVar2 == '\0');
            }
        }
        local_180.end();
        local_2b0->begin();
        bVar3 = eastl::operator!=((eastl*)local_2b0, (hashtable_iterator_base*)&local_180, extraout_RDX);
        if (bVar3) {
            do {
                puVar5 = (undefined8*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_2b0);
                iVar4 = (*puVar5)->get();
                iVar9 = iVar9 + iVar4;
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_2b0);
                bVar3 = eastl::operator!=((eastl*)local_2b0, (hashtable_iterator_base*)&local_180, extraout_RDX_00);
            } while (bVar3);
        }
        pcVar6 = Filename::operator_cast_to_char_(local_3e8);
        _rmdir(pcVar6);
        local_2b0->begin();
        bVar3 = eastl::operator!=((eastl*)local_2b0, (hashtable_iterator_base*)&local_180, extraout_RDX_01);
        if (bVar3) {
            do {
                puVar5 = (undefined8*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_2b0);
                this = (future<int>*)*puVar5;
                if (this != (future<int>*)0) {
                    std::future<int>::~future(this);
                    operator_delete(this);
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_2b0);
                bVar3 = eastl::operator!=((eastl*)local_2b0, (hashtable_iterator_base*)&local_180, extraout_RDX_02);
            } while (bVar3);
        }
        local_438->~list();
        eastl::list<filesystem::FileListContents, eastl::allocator>::~list(local_418);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar9;
    }

    // 0x100b2aa40, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&FileSystem::m_FileSystemList) eastl::list<weak_ptr<FileSystem>, eastl::allocator>();
        ___cxa_atexit(PTR__list_100ee6d10, &FileSystem::m_FileSystemList, 4294967296);
    }

} // namespace jag

// 0x100b23dd0, 16 bytes, placed by neighbouring functions
// __libcpp_strchr(char const*, int)
void __libcpp_strchr(char* param_1, int param_2) {
    _strchr(param_1, param_2);
}
