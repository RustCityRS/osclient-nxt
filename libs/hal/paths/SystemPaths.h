// libs/hal/paths/SystemPaths.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class SystemPaths {
    public:
        Filename* GetDefaultUserFolder();
        Filename* GetUserFolder();
        Filename* GetUserPicturesFolder();
        void RegisterPathChangeCallback(SystemPathsCallbackInterface* systemPathsCallbackInterface);
        void UnregisterPathChangeCallback(SystemPathsCallbackInterface* systemPathsCallbackInterface);
        Filename* GetCacheFolder();
        void Init();
        void SetOverrideFolder(const char* str);
        void SetCacheFolder(const char* str);
        void CheckCacheFolder();
        void RunCallbacks(Scope scope, const Filename& filename1, const Filename& filename2);
        void SetUserFolder(const char* str);
        void CheckLauncherCFG();
        void GetInstanceUniqueLock();
        Filename GetLockFilename();
        void GetDefaultCacheFolder();
        int GetInstanceNumber();
        int GetInstanceCount();
        unsigned long IsOnlyInstance();
        void InitImpl();
        long GetFreeDiskSpace(const Filename& filename, Error* error);
        uint64_t ChangeWorkingDirectory(const Filename& filename);
        Filename GetApplicationFolder();
        Filename GetFullApplicationPath();
        static int32_t m_maxInstances;            // = 16
        static int32_t m_instanceNumber;          // = -1
        static Filename m_PathCacheFolder;        // = Filename()
        static Filename m_PathUserFolder;         // = Filename()
        static Filename m_PathDefaultCacheFolder; // = Filename()
        static Filename m_PathDefaultUserFolder;  // = Filename()
        static Filename m_PathPrivateFolder;      // = Filename()
        static Filename m_PathUserPicturesFolder; // = Filename()
        static Filename m_overrideFolder;         // = Filename()
        static bool m_bInit;
        static bool m_isLauncher;
        static int16_t m_singleInstance;
        static File m_lockFile; // = File()
        static map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>> m_callbacks;

        uint8_t _unknown_0[1];
    };

    class SystemPathsCallbackInterface {
    public:
        // virtual methods in vtable order
        virtual void OnUserFolderChanged(const Filename& arg1, const Filename& arg2);
        void OnCacheFolderChanged(const Filename& arg1, const Filename& arg2);
        SystemPathsCallbackInterface();
    };

    // 0x1000dd490
    Filename* SystemPaths::GetDefaultUserFolder() {
        Init();
        return (Filename*)&m_PathDefaultUserFolder;
    }

    // 0x10014d510
    Filename* SystemPaths::GetUserFolder() {
        Init();
        return (Filename*)&m_PathUserFolder;
    }

    // 0x10014d530
    Filename* SystemPaths::GetUserPicturesFolder() {
        Init();
        return (Filename*)&m_PathUserPicturesFolder;
    }

    // 0x1009e90c0
    SystemPathsCallbackInterface::SystemPathsCallbackInterface() {}

    // 0x1009e9250
    void SystemPaths::RegisterPathChangeCallback(SystemPathsCallbackInterface* systemPathsCallbackInterface) {
        m_callbacks.insert<SystemPathsCallbackInterface*&, void>(systemPathsCallbackInterface);
    }

    // 0x1009e94a0
    void SystemPaths::UnregisterPathChangeCallback(SystemPathsCallbackInterface* systemPathsCallbackInterface) {
        eastl::set<SystemPathsCallbackInterface*>::erase(m_callbacks);
    }

    // 0x1009eb0c0
    Filename* SystemPaths::GetCacheFolder() {
        Init();
        return (Filename*)&m_PathCacheFolder;
    }

    // 0x1009f9210
    void SystemPaths::Init() {
        char* pcVar1;

        if (m_bInit == '\0') {
            InitImpl();
            pcVar1 = m_overrideFolder.GetName();
            if (pcVar1 != nullptr) {
                pcVar1 = m_overrideFolder.GetName();
                SetOverrideFolder(pcVar1);
            }
            m_PathDefaultCacheFolder = m_PathCacheFolder;
            m_PathDefaultUserFolder = m_PathUserFolder;
            if (m_isLauncher == '\0') {
                CheckLauncherCFG();
            }
            CheckCacheFolder();
            m_bInit = '\x01';
        }
    }

    // 0x1009f92a0
    void SystemPaths::SetOverrideFolder(const char* str) {

        Filename local_148(str);
        m_PathCacheFolder = local_148;
        m_PathPrivateFolder = local_148;
        m_PathUserFolder = local_148;
    }

    // 0x100ba46b0
    void SystemPaths::GetDefaultCacheFolder() {
        Init();
        return &m_PathDefaultCacheFolder;
    }

} // namespace jag
