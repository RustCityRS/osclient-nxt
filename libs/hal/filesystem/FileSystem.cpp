// libs/hal/filesystem/FileSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.filesystem

#include "FileSystem.h"

namespace jag {
    // 0x103bc2268, set at startup by ___cxx_global_var_init
    eastl::list<weak_ptr<FileSystem>> FileSystem::m_FileSystemList = list<weak_ptr<FileSystem>>();

    // 0x103bc2288
    bool FileSystem::m_resetPending;

    // 0x103bc2289
    bool FileSystem::m_runningReset;

    // 0x103bc228a
    int16_t FileSystem::ms_diskThreadQuit;

    // 0x103bc2290
    int64_t FileSystem::m_cacheFolderUsage;

    // 0x103bc2298
    int64_t FileSystem::m_userFolderUsage;

    // 0x103bc22a0
    int64_t FileSystem::m_notificationHandler;

    // 0x100029ea0: FileSystem::SetIndexUpdateCallback(std::function<Array<unsigned char>* (int)> const&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10017a580: FileSystem::GetScope() const has the same machine code as http::HTTPRequest::GetErrorCode() const

    // 0x100b1cae0
    void FileSystem::Service() {
        weak_ptr<oldscape::rs2lib::IfType>* weak_ptr;
        long* plVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        ListIterator<weak_ptr<FileSystem>, weak_ptr<FileSystem> const*, weak_ptr<FileSystem> const&>* local_40;

        auto local_38 = m_FileSystemList.begin();
        shared_ptr local_58 = m_FileSystemList.end();
        bool cVar1 = local_38 != local_58;
        if (!cVar1) {
            lVar6 = 0;
            lVar5 = 0;
        } else {
            lVar5 = 0;
            lVar6 = 0;
            do {
                weak_ptr = (weak_ptr<oldscape::rs2lib::IfType>*)*local_38;
                local_58 = weak_ptr->lock();
                cVar1 = shared_ptr::operator_cast_to_bool(&local_58);
                if (!cVar1) {
                    new (&local_40) eastl::ListIterator(&local_38);
                    local_38 = m_FileSystemList.erase(local_40);
                } else {
                    plVar3 = (long*)local_58.operator->();
                    (**(void (**)(...))(*plVar3 + 64))(plVar3);
                    if (((Slider*)local_58.operator->())->GetCurrentValue() == 0) {
                        plVar3 = (long*)local_58.operator->();
                        lVar4 = (**(void (**)(...))(*plVar3 + 48))(plVar3);
                        lVar6 = lVar6 + lVar4;
                    } else {
                        plVar3 = (long*)local_58.operator->();
                        lVar4 = (**(void (**)(...))(*plVar3 + 48))(plVar3);
                        lVar5 = lVar5 + lVar4;
                    }
                }
                ++local_38;
                local_58 = m_FileSystemList.end();
                cVar1 = local_38 != local_58;
            } while (cVar1);
        }
        m_cacheFolderUsage = lVar6;
        m_userFolderUsage = lVar5;
    }

    // 0x100b1ccd0
    FileSystem::FileSystem(const Filename& filename, FileSystem::Scope scope, const char* str, bool arg4)
        : SystemPathsCallbackInterface(), field_8(filename) {
        Filename* pFVar1;

        uint8_t* this_00 = &field_312;
        new (this_00) Filename();
        m_scope = scope;
        new (&field_624) eastl::string(str);
        *(uint16_t*)&m_ready = 0;
        m_settingsStyle = arg4;
        new (&field_664) std::mutex();
        new (&field_728) eastl::map(local_168);
        new (&field_776) std::mutex();
        new (&field_840) std::condition_variable();
        new (&field_888) eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>();
        field_912 = 0;
        if (scope == 1) {
            pFVar1 = SystemPaths::GetUserFolder();
            local_168 = *pFVar1 / str;
            *this_00 = local_168;
        } else {
            if (scope != 0)
                goto LAB_100b1ce67;
            pFVar1 = SystemPaths::GetCacheFolder();
            local_168 = *pFVar1 / str;
            *this_00 = local_168;
        }
    LAB_100b1ce67:
        SystemPaths::RegisterPathChangeCallback(this);
    }

    // 0x100b1cf70
    FileSystem::~FileSystem() {
        SystemPaths::UnregisterPathChangeCallback(this);
        field_888.~list();
        (&field_840)->~condition_variable();
        (&field_776)->~mutex();
        field_728.~map();
        (&field_664)->~mutex();
        field_624.~basic_string();
        field_312.~pair();
        field_8.~pair();
    }

    // 0x100b1d080
    void FileSystem::OnCacheFolderChanged(const Filename& filename1, const Filename& filename2) {
        Filename* this_00;
        ReturnValue local_150;

        if (m_scope == 0) {
            this_00 = SystemPaths::GetCacheFolder();
            local_150 = *this_00 / &field_624;
            (*this->_vptr[2].OnUserFolderChanged)((Filename*)this, &local_150);
        }
    }

    // 0x100b1d120
    void FileSystem::OnUserFolderChanged(const Filename& filename1, const Filename& filename2) {
        Filename* this_00;
        ReturnValue local_150;

        if (m_scope == 1) {
            this_00 = SystemPaths::GetUserFolder();
            local_150 = *this_00 / &field_624;
            (*this->_vptr[2].OnUserFolderChanged)((Filename*)this, &local_150);
        }
    }

    // 0x100b1d1c0
    void FileSystem::ProcessAllQueuedRequests() {
        uint8_t* this_00;
        QueueItem* queueItem;
        unique_lock<std::mutex> local_278;
        QueueItem local_268;

        bool cVar1 = IsReady();
        if (cVar1) {
            local_278 = std::unique_lock<std::mutex>(field_776);
            this_00 = &field_888;
            cVar1 = this_00->empty();
            if (!cVar1) {
                do {
                    local_268 = filesystem::QueueItem();
                    queueItem = (QueueItem*)this_00->front();
                    local_268.swap(*queueItem);
                    this_00->pop_front();
                    local_278.unlock();
                    ProcessRequest(local_268);
                    local_278.lock();
                    cVar1 = this_00->empty();
                } while (!cVar1);
            }
        }
    }

    // 0x100b1d460
    void FileSystem::ProcessRequest(filesystem::QueueItem&& queueItem) {
        if (IsReady() != '\0') {
            switch (queueItem.field_0) {
            case 0:
                (*this->_vptr[2]._deleting_dtor)(this, queueItem);
                break;
            case 1:
                (*this->_vptr[2]._dtor)(this, queueItem);
                break;
            case 2:
                (*this->_vptr[3].OnCacheFolderChanged)((Filename*)this, (Filename*)queueItem);
                break;
            case 3:
                (*this->_vptr[3].OnUserFolderChanged)((Filename*)this, (Filename*)queueItem);
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                          "FileSystem.cpp",
                          194, "FileSystem::ProcessRequest: Unknown request type: %d", queueItem.field_0);
                break;
            case 5:
                (*this->_vptr[3]._dtor)(this);
                break;
            case 6:
                (*this->_vptr[3]._deleting_dtor)(this);
            }
        }
    }

    // 0x100b1d560
    void FileSystem::ProcessQueuedRequest(const filesystem::QueueItem& queueItem) {
        uint8_t* this_00;
        uint8_t* this_01;
        int iVar3;
        QueueItem* this_02;
        int iVar4;
        ListIterator<filesystem::QueueItem, filesystem::QueueItem const*, filesystem::QueueItem const&>* local_298;
        scoped_lock<std::mutex> local_290;
        ReturnValue local_288;
        ReturnValue local_270;
        QueueItem local_268;

        QueueItem* local_280 = queueItem;
        bool cVar2 = IsReady();
        if ((cVar2) && (field_912 == '\0')) {
            field_912 = 1;
            local_268 = filesystem::QueueItem();
            local_290 = std::scoped_lock(field_776);
            this_01 = &field_888;
            local_270 = this_01->begin();
            local_280 = (QueueItem*)&local_280->field_8;
            do {
                local_288 = this_01->end();
                cVar2 = local_270 != local_288;
                iVar4 = 0;
                if (!cVar2)
                    goto LAB_100b1d72d;
                this_02 = (QueueItem*)*local_270;
                this_00 = &this_02->field_8;
                cVar2 = *this_00 == local_280;
                if (!cVar2) {
                    local_288 = this_01->begin();
                    cVar2 = local_270 == local_288;
                    if ((cVar2) && (cVar2 = this_00->IsEmpty(), cVar2))
                        goto LAB_100b1d662;
                    cVar2 = this_00->IsEmpty();
                    if (!cVar2) {
                        ++local_270;
                        iVar3 = 0;
                    } else {
                        field_912 = 0;
                        iVar3 = 1;
                    }
                } else {
                LAB_100b1d662:
                    this_02->swap(local_268);
                    new (&local_298) eastl::ListIterator(&local_270);
                    local_288 = this_01->erase(local_298);
                    iVar3 = 3;
                }
            } while (iVar3 == 0);
            iVar4 = 0;
            if (iVar3 != 3) {
                iVar4 = iVar3;
            }
        LAB_100b1d72d:
            if (iVar4 == 0) {
                if (local_268.field_0 != -1) {
                    ProcessRequest(local_268);
                }
                field_912 = 0;
            }
        }
    }

    // 0x100b1d820
    void FileSystem::ProcessResponse(filesystem::QueueItem& queueItem) {
        int arg2;
        ReturnValue local_50;

        uint8_t* this_00 = queueItem.field_544;
        if (!(this_00->IsValid())) {
            switch (queueItem.field_0) {
            case 0:
                if ((&queueItem.field_448)->operator_cast_to_bool()) {
                    local_50.Array<SafeBucketAllocatorEASTL>(queueItem.field_312);
                    std::function<void(Filename const&, Array<unsigned char> const&)>::operator()(
                        (function<void(Filename const&, Array<unsigned char> const&)>*)&queueItem.field_448,
                        (Filename*)&queueItem.field_8, &local_50);
                }
                break;
            case 1:
            case 2:
                if ((&queueItem.field_400)->operator_cast_to_bool()) {
                    std::function<void(Filename const&)>::operator()(
                        (function<void(Filename const&)>*)&queueItem.field_400, (Filename*)&queueItem.field_8);
                }
                break;
            case 3:
                if ((&queueItem.field_352)->operator_cast_to_bool()) {
                    std::function<void()>::operator()((function<void()>*)&queueItem.field_352);
                }
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/"
                          "FileSystem.cpp",
                          235, "FileSystem::ProcessResponse: Unknown request type: %d", queueItem.field_0);
                break;
            case 5:
            case 6:
                break;
            }
        } else {
            if ((&queueItem.field_496)->operator_cast_to_bool()) {
                arg2 = this_00->GetX();
                local_50 = this_00->GetErrorString();
                std::function<void(Filename const&, int, eastl::stringconst&)>::operator()(
                    (function<void(Filename const&, int, eastl::stringconst&)>*)&queueItem.field_496,
                    (Filename*)&queueItem.field_8, arg2, &local_50);
            }
        }
    }

    // 0x100b1da50
    void FileSystem::FinishedRequest(const filesystem::QueueItem& queueItem) {
        SetDiskState(queueItem, 4294967295);
        ProcessQueuedRequest(queueItem);
    }

    // 0x100b1da90
    void FileSystem::ResetDiskState() {

        scoped_lock<std::mutex> local_18(field_664);
        field_728.clear();
    }

    // 0x100b1db10
    void FileSystem::SetDiskState(const Filename& filename, filesystem::RequestType requestType) {
        scoped_lock<std::mutex> local_30(field_664);
        unsigned int local_24 = stringtools::hash32(filename.GetName());
        RequestType* pRVar1 = &field_728[local_24];
        *pRVar1 = requestType;
    }

    // 0x100b1dc50
    uint32_t FileSystem::GetDiskState(const Filename& filename) const {
        long lVar3;
        uint64_t local_20;

        scoped_lock<std::mutex> local_30(field_664);
        uint32_t uVar2 = stringtools::hash32(filename.GetName());
        local_20 = (((uint64_t)local_20._4_4_ << 32) | (uint32_t)uVar2);
        uint64_t local_28 = field_728.find(local_20);
        local_20 = field_728.end();
        bool cVar1 = local_28 != local_20;
        uVar2 = 4294967295;
        if (cVar1) {
            lVar3 = *local_28;
            uVar2 = *(uint32_t*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x100b1dd40
    uint64_t FileSystem::GetFileStatus(const Filename& filename) {
        bool cVar1 = IsReady();
        uint64_t uVar2 = 4294967295;
        if (cVar1) {
            uVar2 = GetDiskState(filename);
        }
        return uVar2;
    }

    // 0x100b1dd70
    unsigned long FileSystem::FileHasScheduledAction(const Filename& filename,
                                                     filesystem::RequestType requestType) const {
        unsigned int uVar3;
        RequestType* pRVar4;
        uint64_t unaff_RBX;
        scoped_lock<std::mutex> local_48;
        uint64_t local_40;
        uint64_t local_38;

        auto RVar2 = GetDiskState(filename);
        unsigned long uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (RVar2 != requestType) {
            local_48 = std::scoped_lock(field_776);
            local_40 = field_888.begin();
            local_38 = field_888.end();
            uVar3 = local_40 != local_38;
            uVar5 = (unsigned long)uVar3;
            if ((char)uVar3 != '\0') {
                do {
                    pRVar4 = (RequestType*)*local_40;
                    if (*pRVar4 == requestType) {
                        if ((*((pRVar4 + 2))) == filename != '\0')
                            break;
                    }
                    ++local_40;
                    uVar3 = local_40 != local_38;
                    uVar5 = (unsigned long)uVar3;
                } while ((char)uVar3 != '\0');
            }
        }
        return uVar5 & 4294967041;
    }

    // 0x100b1de50
    void FileSystem::PushQuery(filesystem::QueueItem&& queueItem) {

        scoped_lock<std::mutex> local_20(field_776);
        ((QueueItem*)field_888.push_back())->swap(queueItem);
        std::condition_variable::notify_one();
    }

    // 0x100b1df00
    void FileSystem::RemoveQuery(const filesystem::QueueItem& queueItem) {
        int* piVar2;
        ListIterator<filesystem::QueueItem, filesystem::QueueItem const*, filesystem::QueueItem const&>* local_50;

        scoped_lock<std::mutex> local_48(field_776);
        uint8_t* this_01 = &field_888;
        auto local_40 = this_01->begin();
        auto local_38 = this_01->end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                piVar2 = (int*)*local_40;
                if (*piVar2 == queueItem.field_0) {
                    cVar1 = (*((piVar2 + 2))) == &queueItem.field_8;
                    if (cVar1) {
                        new (&local_50) eastl::ListIterator(&local_40);
                        local_38 = this_01->erase(local_50);
                        goto LAB_100b1dffd;
                    }
                }
                ++local_40;
                local_38 = this_01->end();
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/filesystem/FileSystem.cpp",
                  331, "Tried to RemoveQuery a non existant query");
    LAB_100b1dffd:
    }

    // 0x100b1e030
    void FileSystem::BeginTransaction() {

        QueueItem local_258;
        local_258.field_0 = 5;
        PushQuery(local_258);
    }

    // 0x100b1e0c0
    void FileSystem::EndTransaction() {

        QueueItem local_258;
        local_258.field_0 = 6;
        PushQuery(local_258);
    }

    // 0x100b1e150
    void FileSystem::WriteFile(const Filename& filename, const Array<unsigned char>& arg2, bool arg3,
                               std::function<void(Filename const&)> const& callback1,
                               std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        Array<unsigned char, SafeBucketAllocatorEASTL> local_288;
        uint8_t local_268[312];
        function<void(Filename const&)> local_d8[96];
        function<void(Filename const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        FileSystem* local_270 = this;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        (*((local_268 + 8))) = filename;
        local_288.Array<eastl::allocator>(arg2);
        Array<unsigned char, SafeBucketAllocatorEASTL> local_130 = local_288;
        uint8_t local_118 = arg3;
        *local_d8 = callback1;
        *local_78 = callback2;
        PushQuery(local_270, (QueueItem*)local_268);
    }

    // 0x100b1e370
    void FileSystem::WriteFile(const Filename& filename, Array<unsigned char>&& arg2, bool arg3,
                               std::function<void(Filename const&)> const& callback1,
                               std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        Array<unsigned char, SafeBucketAllocatorEASTL> local_288;
        uint8_t local_268[312];
        function<void(Filename const&)> local_d8[96];
        function<void(Filename const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        FileSystem* local_270 = this;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        (*((local_268 + 8))) = filename;
        local_288.Array<eastl::allocator>(arg2);
        Array<unsigned char, SafeBucketAllocatorEASTL> local_130 = local_288;
        uint8_t local_118 = arg3;
        *local_d8 = callback1;
        *local_78 = callback2;
        PushQuery(local_270, (QueueItem*)local_268);
    }

    // 0x100b1e490
    void FileSystem::WriteFile(const Filename& filename, Array<unsigned char, BucketAllocatorEASTL>&& arg2, bool arg3,
                               std::function<void(Filename const&)> const& callback1,
                               std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        Array<unsigned char, SafeBucketAllocatorEASTL> local_290;
        function<void_(Filename const&, int, eastl::string const&)>* local_278;
        uint8_t local_268[312];
        function<void(Filename const&)> local_d8[96];
        function<void(Filename const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        local_278 = callback2;
        FileSystem* local_270 = this;
        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        (*((local_268 + 8))) = filename;
        local_290.Array<BucketAllocatorEASTL>(arg2);
        Array<unsigned char, SafeBucketAllocatorEASTL> local_130 = local_290;
        uint8_t local_118 = arg3;
        *local_d8 = callback1;
        *local_78 = *local_278;
        PushQuery(local_270, (QueueItem*)local_268);
    }

    // 0x100b1e5d0
    void FileSystem::WriteFile(const Filename& filename, Array<unsigned char, SafeBucketAllocatorEASTL>&& arg2,
                               bool arg3, std::function<void(Filename const&)> const& callback1,
                               std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        uint8_t local_268[312];
        function<void(Filename const&)> local_d8[96];
        function<void(Filename const&, int, eastl::stringconst&)> local_78[64];
        long local_38;

        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 1;
        (*((local_268 + 8))) = filename;
        Array<unsigned char, SafeBucketAllocatorEASTL> local_130 = arg2;
        uint8_t local_118 = arg3;
        *local_d8 = callback1;
        *local_78 = callback2;
        PushQuery(*local_268);
    }

    // 0x100b1e6c0
    void FileSystem::ReadFile(const Filename& filename,
                              std::function<void(Filename const&, Array<unsigned char> const&)> const& callback1,
                              std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        uint8_t local_268[448];
        function<void(Filename const&, Array<unsigned char> const&)> local_a8[48];
        function<void(Filename const&, int, eastl::stringconst&)> local_78[72];
        long local_30;

        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 0;
        (*((local_268 + 8))) = filename;
        *local_a8 = callback1;
        *local_78 = callback2;
        PushQuery(*local_268);
    }

    // 0x100b1e7f0
    void FileSystem::DeleteFile(const Filename& filename, std::function<void(Filename const&)> const& callback1,
                                std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        uint8_t local_268[400];
        function<void(Filename const&)> local_d8[96];
        function<void(Filename const&, int, eastl::stringconst&)> local_78[72];
        long local_30;

        new (local_268) filesystem::QueueItem();
        local_268._0_4_ = 2;
        (*((local_268 + 8))) = filename;
        *local_d8 = callback1;
        *local_78 = callback2;
        PushQuery(*local_268);
    }

    // 0x100b1e8c0
    void FileSystem::Reset(const std::function<void()>& callback1,
                           std::function<void(Filename const&, int, eastl::string const&)> const& callback2) {
        uint8_t local_258[496];
        function<void(Filename const&, int, eastl::stringconst&)> local_68[64];
        long local_28;

        m_resetPending = 1;
        new (local_258) filesystem::QueueItem();
        local_258._0_4_ = 3;
        (*((local_258 + 352))) = callback1;
        *local_68 = callback2;
        PushQuery(*local_258);
    }

    // 0x100b1e980
    int FileSystem::DeleteDirectory(const Filename& filename) {
        future<int>* future;
        ReturnValue* pRVar1;
        bool cVar2;
        uint64_t* puVar4;
        char* pcVar5;
        FileListContents* fileListContents;
        Layout* this_00;
        list<std::future<int>*> local_438[32];
        ReturnValue* local_3f0;
        Filename local_3e0;

        list<filesystem::FileListContents> local_418;
        new (local_438) eastl::list<std::future<int>*>();
        int iVar6 = 0;
        int iVar3 = GetFileList(filename, (list<filesystem::FileListContents>*)&local_418, false, nullptr);
        Filename* local_3e8 = filename;
        if (iVar3 == 0) {
            cVar2 = local_418.empty();
            if (!cVar2) {
                iVar6 = 0;
                do {
                    local_180 = filesystem::FileListContents();
                    fileListContents = (FileListContents*)local_418.front();
                    local_180.swap(*fileListContents);
                    local_418.pop_front();
                    local_2b0 = Filename(filename);
                    local_2b0 /= &local_180;
                    if ((local_180.field_320 & 8) == 0) {
                        if ((local_180.field_320 & 7) != 0) {
                            pcVar5 = (char*)Filename::operator_cast_to_char_(&local_2b0);
                            _chmod(pcVar5, 777);
                        }
                        pcVar5 = (char*)Filename::operator_cast_to_char_(&local_2b0);
                        _unlink(pcVar5);
                        iVar6 = iVar6 + 1;
                    } else {
                        if ((local_180.field_320 & 7) != 0) {
                            pcVar5 = (char*)Filename::operator_cast_to_char_(&local_2b0);
                            _chmod(pcVar5, 777);
                        }
                        local_3f0 = (ReturnValue*)operator new(8);
                        this_00 = (Layout*)8->Instance();
                        pcVar5 = (char*)this_00->SSOBeginPtr();
                        local_3e0 = Filename(&local_2b0);
                        pRVar1 = local_3f0;
                        ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::__0>(local_3f0, pcVar5,
                                                                                               &local_3e0);
                        local_438->push_back(pRVar1);
                        DeleteDirectory(Filename const&)::$_0::~__0(&local_3e0);
                        filename = local_3e8;
                    }
                    cVar2 = local_418.empty();
                } while (!cVar2);
            }
        }
        FileListContents local_180 = local_438->end();
        auto local_2b0 = local_438->begin();
        cVar2 = local_2b0 != local_180;
        if (cVar2) {
            do {
                puVar4 = (uint64_t*)*local_2b0;
                iVar3 = (*puVar4)->get();
                iVar6 = iVar6 + iVar3;
                ++local_2b0;
                cVar2 = local_2b0 != local_180;
            } while (cVar2);
        }
        pcVar5 = (char*)Filename::operator_cast_to_char_(local_3e8);
        _rmdir(pcVar5);
        local_2b0 = local_438->begin();
        cVar2 = local_2b0 != local_180;
        if (cVar2) {
            do {
                puVar4 = (uint64_t*)*local_2b0;
                future = (future<int>*)*puVar4;
                if (future != nullptr) {
                    future->~future();
                    operator delete(future);
                }
                ++local_2b0;
                cVar2 = local_2b0 != local_180;
            } while (cVar2);
        }
        return iVar6;
    }

} // namespace jag

// 0x100b23dd0
void __libcpp_strchr(const char* str, int arg2) {
    _strchr(str, arg2);
}
