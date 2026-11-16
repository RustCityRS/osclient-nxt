// libs/hal/filesystem/FileSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class FileSystem {
    public:
        // virtual methods in vtable order
        virtual void OnCacheFolderChanged(Filename const&, Filename const&);
        virtual void OnUserFolderChanged(Filename const&, Filename const&);
        virtual ~FileSystem();
        SetIndexUpdateCallback(std::function<Array<unsigned char, eastl::allocator>*(int)> const&);
        int GetScope() const;
        void Service();
        FileSystem(Filename const&, Scope, char const*, bool);
        void ProcessAllQueuedRequests();
        IsReady() const;
        void ProcessRequest(filesystem::QueueItem&&);
        void ProcessQueuedRequest(filesystem::QueueItem const&);
        void ProcessResponse(filesystem::QueueItem&);
        void FinishedRequest(filesystem::QueueItem const&);
        void SetDiskState(filesystem::QueueItem const&, filesystem::RequestType);
        void ResetDiskState();
        void SetDiskState(Filename const&, filesystem::RequestType);
        GetDiskState(Filename const&) const;
        GetFileStatus(Filename const&);
        ulong FileHasScheduledAction(Filename const&, filesystem::RequestType) const;
        void PushQuery(filesystem::QueueItem&&);
        void RemoveQuery(filesystem::QueueItem const&);
        void BeginTransaction();
        void EndTransaction();
        void WriteFile(Filename const&, Array<unsigned char, eastl::allocator> const&, bool,
                       std::function<void(Filename const&)> const&,
                       std::function<void(Filename const&, int, eastl::string const&)> const&);
        void WriteFile(Filename const&, Array<unsigned char, eastl::allocator>&&, bool,
                       std::function<void(Filename const&)> const&,
                       std::function<void(Filename const&, int, eastl::string const&)> const&);
        void WriteFile(Filename const&, Array<unsigned char, BucketAllocatorEASTL>&&, bool,
                       std::function<void(Filename const&)> const&,
                       std::function<void(Filename const&, int, eastl::string const&)> const&);
        void WriteFile(Filename const&, Array<unsigned char, SafeBucketAllocatorEASTL>&&, bool,
                       std::function<void(Filename const&)> const&,
                       std::function<void(Filename const&, int, eastl::string const&)> const&);
        void ReadFile(Filename const&,
                      std::function<void(Filename const&, Array<unsigned char, eastl::allocator> const&)> const&,
                      std::function<void(Filename const&, int, eastl::string const&)> const&);
        void DeleteFile(Filename const&, std::function<void(Filename const&)> const&,
                        std::function<void(Filename const&, int, eastl::string const&)> const&);
        void Reset(std::function<void()> const&,
                   std::function<void(Filename const&, int, eastl::string const&)> const&);
        int DeleteDirectory(Filename const&);
        int GetFileList(Filename const&, eastl::list<filesystem::FileListContents, eastl::allocator>&, bool,
                        Filename const*);
        long GetFolderSizeBytes(Filename const&, bool);
        FileSystem* NewFileSystem(Filename const&, Scope, char const*, bool);
        IsSettingsStyle() const;
        static eastl::list<weak_ptr<FileSystem>, eastl::allocator> /* 32 bytes */
            m_FileSystemList;                                      // = list<weak_ptr<FileSystem>,eastl::allocator>()
        static /* 1 bytes */ m_resetPending;
        static /* 1 bytes */ m_runningReset;
        static /* 6 bytes */ ms_diskThreadQuit;
        static /* 8 bytes */ m_cacheFolderUsage;
        static /* 8 bytes */ m_userFolderUsage;
        static /* 8 bytes */ m_notificationHandler;

        // data members, from how the methods use this: 913 bytes
        undefined** field_0; // offset 0, vtable pointer
        Filename field_8;    // offset 8
        char _unknown_24[288];
        Filename field_312; // offset 312
        char _unknown_328[288];
        int m_scope; // offset 616
        char _unknown_620[36];
        undefined1 m_ready; // offset 656
        char _unknown_657[1];
        undefined1 m_settingsStyle; // offset 658
        char _unknown_659[69];
        uint field_728; // offset 728
        char _unknown_732[156];
        undefined1 field_888; // offset 888
        char _unknown_889[23];
        undefined1 field_912; // offset 912
    };

    // 0x100b1d2e0, 16 bytes, inline, placed by class name and debug map
    // FileSystem::IsReady() const
    undefined1 FileSystem::IsReady() {
        return m_ready;
    }

    // 0x100b1da80, 16 bytes, inline, placed by class name and debug map
    // FileSystem::SetDiskState(filesystem::QueueItem const&, filesystem::RequestType)
    void FileSystem::SetDiskState(FileSystem* param_1, long param_2) {
        SetDiskState(param_1, param_2 + 8);
    }

    // 0x100b1f7b0, 16 bytes, inline, placed by class name
    // FileSystem::IsSettingsStyle() const
    undefined1 FileSystem::IsSettingsStyle() {
        return m_settingsStyle;
    }

} // namespace jag

namespace jag::filesystem {
    class QueueItem {
    public:
        QueueItem();
        void swap(QueueItem&);
        ~QueueItem();
        QueueItem(QueueItem const&);
        QueueItem(QueueItem&&);

        // data members, from how the methods use this: 552 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        Filename field_8; // offset 8
        char _unknown_24[312];
        undefined1 field_336; // offset 336
        char _unknown_337[207];
        Error field_544; // offset 544
        char _unknown_548[4];
    };

    // 0x100b1d300, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QueueItem::QueueItem(): jumps straight to the base-object constructor

    // 0x100b1d310, 176 bytes, inline, placed by debug map only (low confidence)
    // QueueItem::swap(QueueItem&)
    void QueueItem::swap(QueueItem* param_1) {
        eastl::swap<unsigned int>(&field_0, &param_1->field_0);
        (field_8, (Filename*)param_1->field_8)->swap();
        (&field_312, (Array*)&param_1->field_312)->swap();
        eastl::swap<signed char>((signed*)&field_336, (signed*)&param_1->field_336);
        std::function<void()>::swap((function<void()>*)&field_352, (function*)&param_1->field_352);
        std::function<void(Filename_const&)>::swap((function<void(Filename_const&)>*)&field_400,
                                                   (function*)&param_1->field_400);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::swap(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)&field_448,
            (function*)&param_1->field_448);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::swap(
            (function<void(Filename_const&, int, eastl::stringconst&)>*)&field_496, (function*)&param_1->field_496);
        eastl::swap<Error>((Error*)field_544, (Error*)param_1->field_544);
    }

    // 0x100b1d540, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // QueueItem::~QueueItem(): jumps straight to the base-object destructor

} // namespace jag::filesystem
