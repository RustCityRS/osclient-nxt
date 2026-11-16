// libs/hal/paths/SystemPaths.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class SystemPaths {
    public:
        GetDefaultUserFolder();
        GetUserFolder();
        GetUserPicturesFolder();
        void RegisterPathChangeCallback(SystemPathsCallbackInterface*);
        void UnregisterPathChangeCallback(SystemPathsCallbackInterface*);
        GetCacheFolder();
        void Init();
        void SetOverrideFolder(char const*);
        void SetCacheFolder(char const*);
        void CheckCacheFolder();
        void RunCallbacks(Scope, Filename const&, Filename const&);
        void SetUserFolder(char const*);
        void CheckLauncherCFG();
        void GetInstanceUniqueLock();
        SystemPaths* GetLockFilename();
        GetDefaultCacheFolder();
        int GetInstanceNumber();
        int GetInstanceCount();
        ulong IsOnlyInstance();
        void InitImpl();
        long GetFreeDiskSpace(Filename const&, Error*);
        bool ChangeWorkingDirectory(Filename const&);
        SystemPaths* GetApplicationFolder();
        SystemPaths* GetFullApplicationPath();
        static /* 4 bytes */ m_maxInstances;                      // = 16
        static /* 4 bytes */ m_instanceNumber;                    // = -1
        static Filename /* 304 bytes */ m_PathCacheFolder;        // = Filename()
        static Filename /* 304 bytes */ m_PathUserFolder;         // = Filename()
        static Filename /* 304 bytes */ m_PathDefaultCacheFolder; // = Filename()
        static Filename /* 304 bytes */ m_PathDefaultUserFolder;  // = Filename()
        static Filename /* 304 bytes */ m_PathPrivateFolder;      // = Filename()
        static Filename /* 304 bytes */ m_PathUserPicturesFolder; // = Filename()
        static Filename /* 304 bytes */ m_overrideFolder;         // = Filename()
        static /* 1 bytes */ m_bInit;
        static /* 1 bytes */ m_isLauncher;
        static /* 6 bytes */ m_singleInstance;
        static File /* 312 bytes */ m_lockFile; // = File()
        static /* 48 bytes */ m_callbacks;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class SystemPathsCallbackInterface {
    public:
        // virtual methods in vtable order
        virtual OnUserFolderChanged(Filename const&, Filename const&);
        OnCacheFolderChanged(Filename const&, Filename const&);
        SystemPathsCallbackInterface();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1000dd490, 32 bytes, inline, placed by class name and debug map
    // SystemPaths::GetDefaultUserFolder()
    undefined1* SystemPaths::GetDefaultUserFolder() {
        Init(this);
        return &m_PathDefaultUserFolder;
    }

    // 0x10014d510, 32 bytes, inline, placed by class name
    // SystemPaths::GetUserFolder()
    undefined1* SystemPaths::GetUserFolder() {
        Init(this);
        return &m_PathUserFolder;
    }

    // 0x10014d530, 32 bytes, inline, placed by class name
    // SystemPaths::GetUserPicturesFolder()
    undefined1* SystemPaths::GetUserPicturesFolder() {
        Init(this);
        return &m_PathUserPicturesFolder;
    }

    // 0x1009e90c0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // SystemPathsCallbackInterface::SystemPathsCallbackInterface()
    void SystemPathsCallbackInterface::SystemPathsCallbackInterface() {
        field_0 = PTR_vtable_100ee7d78 + 16;
    }

    // 0x1009e9250, 48 bytes, inline, placed by class name
    // SystemPaths::RegisterPathChangeCallback(SystemPathsCallbackInterface*)
    void SystemPaths::RegisterPathChangeCallback(SystemPathsCallbackInterface* param_1) {
        SystemPathsCallbackInterface* local_10;

        local_10 = param_1;
        eastl::rbtree<SystemPathsCallbackInterface*, SystemPathsCallbackInterface*,
                      eastl::less<SystemPathsCallbackInterface*>, eastl::allocator,
                      eastl::use_self<SystemPathsCallbackInterface*>, false, true>::
            insert<SystemPathsCallbackInterface*&, void>(
                (rbtree<SystemPathsCallbackInterface*, SystemPathsCallbackInterface*,
                        eastl::less<SystemPathsCallbackInterface*>, eastl::allocator,
                        eastl::use_self<SystemPathsCallbackInterface*>, false, true>*)&m_callbacks,
                &local_10);
    }

    // 0x1009e94a0, 48 bytes, inline, placed by class name
    // SystemPaths::UnregisterPathChangeCallback(SystemPathsCallbackInterface*)
    void SystemPaths::UnregisterPathChangeCallback(SystemPathsCallbackInterface* param_1) {
        eastl::set<SystemPathsCallbackInterface*, eastl::less<SystemPathsCallbackInterface*>, eastl::allocator>::erase(
            (SystemPathsCallbackInterface**)&m_callbacks);
    }

    // 0x1009eb0c0, 32 bytes, inline, placed by class name
    // SystemPaths::GetCacheFolder()
    undefined1* SystemPaths::GetCacheFolder() {
        Init(this);
        return &m_PathCacheFolder;
    }

    // 0x1009f9210, 144 bytes, inline, placed by class name
    // SystemPaths::Init()
    void SystemPaths::Init() {
        char* pcVar2;

        if (m_bInit == '\0') {
            InitImpl();
            if (m_overrideFolder.GetName() != 0) {
                pcVar2 = (char*)m_overrideFolder.GetName();
                SetOverrideFolder(pcVar2);
            }
            Filename::operator=((Filename*)&m_PathDefaultCacheFolder, (Filename*)&m_PathCacheFolder);
            Filename::operator=((Filename*)&m_PathDefaultUserFolder, (Filename*)&m_PathUserFolder);
            if (m_isLauncher == '\0') {
                CheckLauncherCFG();
            }
            CheckCacheFolder();
            m_bInit = '\x01';
        }
    }

    // 0x1009f92a0, 176 bytes, inline, placed by class name
    // SystemPaths::SetOverrideFolder(char const*)
    void SystemPaths::SetOverrideFolder(char* param_1) {
        Filename local_148[19];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::Filename(local_148, param_1);
        Filename::operator=((Filename*)&m_PathCacheFolder, local_148);
        Filename::operator=((Filename*)&m_PathPrivateFolder, local_148);
        Filename::operator=((Filename*)&m_PathUserFolder, local_148);
        local_148->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba46b0, 32 bytes, inline, placed by class name
    // SystemPaths::GetDefaultCacheFolder()
    undefined1* SystemPaths::GetDefaultCacheFolder() {
        Init(this);
        return &m_PathDefaultCacheFolder;
    }

} // namespace jag
