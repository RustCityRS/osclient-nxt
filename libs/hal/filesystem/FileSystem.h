// libs/hal/filesystem/FileSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class FileSystem {
    public:
        // virtual methods in vtable order
        virtual void OnCacheFolderChanged(const Filename& filename1, const Filename& filename2);
        virtual void OnUserFolderChanged(const Filename& filename1, const Filename& filename2);
        virtual ~FileSystem();
        uint64_t SetIndexUpdateCallback(std::function<Array<unsigned char>*(int)> const& arg1);
        Scope GetScope() const;
        void Service();
        FileSystem(const Filename& filename, Scope scope, const char* str, bool arg4);
        void ProcessAllQueuedRequests();
        bool IsReady() const;
        void ProcessRequest(filesystem::QueueItem&& queueItem);
        void ProcessQueuedRequest(const filesystem::QueueItem& queueItem);
        void ProcessResponse(filesystem::QueueItem& queueItem);
        void FinishedRequest(const filesystem::QueueItem& queueItem);
        void SetDiskState(const filesystem::QueueItem& queueItem, filesystem::RequestType requestType);
        void ResetDiskState();
        void SetDiskState(const Filename& filename, filesystem::RequestType requestType);
        uint32_t GetDiskState(const Filename& filename) const;
        uint64_t GetFileStatus(const Filename& filename);
        unsigned long FileHasScheduledAction(const Filename& filename, filesystem::RequestType requestType) const;
        void PushQuery(filesystem::QueueItem&& queueItem);
        void RemoveQuery(const filesystem::QueueItem& queueItem);
        void BeginTransaction();
        void EndTransaction();
        void WriteFile(const Filename& filename, const Array<unsigned char>& arg2, bool arg3,
                       std::function<void(Filename const&)> const& callback1,
                       std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        void WriteFile(const Filename& filename, Array<unsigned char>&& arg2, bool arg3,
                       std::function<void(Filename const&)> const& callback1,
                       std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        void WriteFile(const Filename& filename, Array<unsigned char>&& arg2, bool arg3,
                       std::function<void(Filename const&)> const& callback1,
                       std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        void WriteFile(const Filename& filename, Array<unsigned char, SafeBucketAllocatorEASTL>&& arg2, bool arg3,
                       std::function<void(Filename const&)> const& callback1,
                       std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        void ReadFile(const Filename& filename,
                      std::function<void(Filename const&, Array<unsigned char> const&)> const& callback1,
                      std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        void DeleteFile(const Filename& filename, std::function<void(Filename const&)> const& callback1,
                        std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        void Reset(const std::function<void()>& callback1,
                   std::function<void(Filename const&, int, eastl::string const&)> const& callback2);
        int DeleteDirectory(const Filename& filename);
        int GetFileList(const Filename& filename1, eastl::list<filesystem::FileListContents>& fileListContentss,
                        bool arg3, const Filename* filename2);
        long GetFolderSizeBytes(const Filename& filename, bool arg2);
        auto NewFileSystem(const Filename& filename, Scope scope, const char* str, bool arg4);
        bool IsSettingsStyle() const;
        static eastl::list<weak_ptr<FileSystem>> m_FileSystemList; // = list<weak_ptr<FileSystem>>()
        static bool m_resetPending;
        static bool m_runningReset;
        static int16_t ms_diskThreadQuit;
        static int64_t m_cacheFolderUsage;
        static int64_t m_userFolderUsage;
        static int64_t m_notificationHandler;

    private:
        uint8_t _unknown_8[608];
        Scope m_scope;
        uint8_t _unknown_620[36];
        uint8_t m_ready;
        uint8_t _unknown_657[1];
        bool m_settingsStyle;
        uint8_t _unknown_659[253];
        uint8_t field_912;
    };

    // 0x100b1d2e0
    bool FileSystem::IsReady() const {
        return m_ready;
    }

    // 0x100b1da80
    void FileSystem::SetDiskState(const filesystem::QueueItem& queueItem, filesystem::RequestType requestType) {
        SetDiskState(queueItem.field_8, requestType);
    }

    // 0x100b1f7b0
    bool FileSystem::IsSettingsStyle() const {
        return m_settingsStyle;
    }

} // namespace jag

namespace jag::filesystem {
    class QueueItem {
    public:
        QueueItem();
        void swap(QueueItem& queueItem);
        ~QueueItem();
        QueueItem(const QueueItem& queueItem);
        QueueItem(QueueItem&& queueItem);

    private:
        int field_0;
        uint8_t _unknown_4[332];
        uint8_t field_336;
        uint8_t _unknown_337[207];
        Error field_544;
        uint8_t _unknown_548[4];
    };

    // 0x100b1d310
    void QueueItem::swap(QueueItem& queueItem) {
        eastl::swap<unsigned int>(field_0, queueItem.field_0);
        field_8.swap(queueItem.field_8);
        field_312.swap(queueItem.field_312);
        eastl::swap<signed char>(field_336, queueItem.field_336);
        field_352.swap(queueItem.field_352);
        field_400.swap(queueItem.field_400);
        field_448.swap(queueItem.field_448);
        field_496.swap(queueItem.field_496);
        eastl::swap<Error>(*field_544, queueItem.field_544);
    }

} // namespace jag::filesystem
