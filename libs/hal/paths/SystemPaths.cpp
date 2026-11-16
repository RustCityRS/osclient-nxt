// libs/hal/paths/SystemPaths.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.paths

#include "SystemPaths.h"

namespace jag {
    // 0x100f48540
    int32_t SystemPaths::m_maxInstances = 16;

    // 0x100f48544
    int32_t SystemPaths::m_instanceNumber = -1;

    // 0x103bd9060, set at startup by ___cxx_global_var_init
    Filename SystemPaths::m_PathCacheFolder = Filename();

    // 0x103bd9190, set at startup by ___cxx_global_var_init.1
    Filename SystemPaths::m_PathUserFolder = Filename();

    // 0x103bd92c0, set at startup by ___cxx_global_var_init.2
    Filename SystemPaths::m_PathDefaultCacheFolder = Filename();

    // 0x103bd93f0, set at startup by ___cxx_global_var_init.3
    Filename SystemPaths::m_PathDefaultUserFolder = Filename();

    // 0x103bd9520, set at startup by ___cxx_global_var_init.4
    Filename SystemPaths::m_PathPrivateFolder = Filename();

    // 0x103bd9650, set at startup by ___cxx_global_var_init.5
    Filename SystemPaths::m_PathUserPicturesFolder = Filename();

    // 0x103bd9780, set at startup by ___cxx_global_var_init.6
    Filename SystemPaths::m_overrideFolder = Filename();

    // 0x103bd98b0
    bool SystemPaths::m_bInit;

    // 0x103bd98b1
    bool SystemPaths::m_isLauncher;

    // 0x103bd98b2
    int16_t SystemPaths::m_singleInstance;

    // 0x103bd98b8, set at startup by ___cxx_global_var_init.7
    File SystemPaths::m_lockFile = File();

    // 0x103bd99f0
    map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>> SystemPaths::m_callbacks;

    // 0x100ba3c60
    void SystemPaths::SetCacheFolder(const char* str) {

        Init();
        Filename local_148(str);
        Filename local_278(&m_PathCacheFolder);
        if (local_148 != &local_278 != '\0') {
            m_PathCacheFolder = local_148;
            CheckCacheFolder();
            m_PathCacheFolder.CreateDirectories(nullptr);
            RunCallbacks(0, &local_278, (Filename*)&m_PathCacheFolder);
        }
    }

    // 0x100ba3d60
    void SystemPaths::CheckCacheFolder() {
        Filename local_3b8;

        bool cVar1 = m_PathCacheFolder.Exists();
        if (cVar1) {
        LAB_100ba3e99:
            return;
        }
        Filename local_158 = m_PathCacheFolder.GetParentPath();
        Filename local_288;
        while (true) {
            cVar1 = local_158.Exists();
            if (cVar1)
                break;
            local_288 = local_158;
            local_3b8 = local_158.GetParentPath();
            local_158 = local_3b8;
        }
        cVar1 = local_158.Exists();
        if (cVar1) {
            cVar1 = local_288.Exists();
            if (!cVar1) {
                cVar1 = local_288.IsEmpty();
                if (!cVar1) {
                    local_288.CreateFolderForEveryone(nullptr);
                    m_PathCacheFolder.CreateDirectories(nullptr);
                } else {
                    m_PathCacheFolder.CreateFolderForEveryone(nullptr);
                }
                local_288.~pair();
                local_158.~pair();
                goto LAB_100ba3e99;
            }
        }
        LogAssert("path.Exists() && !lastPath.Exists()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp", 85,
                  nullptr);
    }

    // 0x100ba3f00
    void SystemPaths::RunCallbacks(SystemPaths::Scope scope, const Filename& filename1, const Filename& filename2) {
        uint64_t* puVar2;

        uint64_t local_40 = m_callbacks.begin();
        uint64_t local_38 = m_callbacks.end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                puVar2 = (uint64_t*)*local_40;
                (**(void (**)(...))(*(long*)*puVar2 + (unsigned long)(scope != 0) * 8))((long*)*puVar2, filename1,
                                                                                        filename2);
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
    }

    // 0x100ba3fa0
    void SystemPaths::SetUserFolder(const char* str) {

        Init();
        Filename local_148(str);
        Filename local_278(&m_PathUserFolder);
        if (local_148 != &local_278 != '\0') {
            m_PathUserFolder = local_148;
            m_PathUserFolder.CreateDirectories(nullptr);
            RunCallbacks(1, &local_278, (Filename*)&m_PathUserFolder);
        }
    }

    // 0x100ba40a0
    void SystemPaths::CheckLauncherCFG() {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* basic_string;
        unsigned long arg2;
        ReturnValue local_620;

        ClientCompositeZone local_2a0 = m_PathDefaultCacheFolder / "launcher";
        Filename local_168 = local_2a0 / "preferences.cfg";
        local_2a0 = File(&local_168, 0, nullptr);
        bool cVar1 = local_2a0.IsValid();
        if (!cVar1) {
        LAB_100ba42c3:
            return;
        }
        eastl::string local_640;
        do {
            local_620 = local_2a0.readline();
            basic_string = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)local_640 =
                &local_620;
            cVar1 = basic_string->empty();
            if (cVar1) {
                goto LAB_100ba42c3;
            }
            arg2 = local_640.find('=', 0);
        } while (arg2 == 18446744073709551615);
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fixed_string<char, 256> local_3c8(pcVar3, arg2);
        long lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fixed_string<char, 40> local_4f0((lVar4 + arg2 + 1));
        int iVar2 = local_3c8.compare("cache_folder");
        if (iVar2 == 0) {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_620 = Filename(pcVar3);
            cVar1 = local_620.Exists();
            if (cVar1) {
                cVar1 = local_620.IsDirectory();
                if (cVar1) {
                    m_PathCacheFolder = local_620;
                }
            }
        } else {
            iVar2 = local_3c8.compare("user_folder");
            if (iVar2 != 0)
                goto LAB_100ba4168;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_620 = Filename(pcVar3);
            cVar1 = local_620.Exists();
            if (cVar1) {
                cVar1 = local_620.IsDirectory();
                if (cVar1) {
                    m_PathUserFolder = local_620;
                }
            }
        }
    LAB_100ba4168:
    }

    // 0x100ba43b0
    void SystemPaths::GetInstanceUniqueLock() {
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        int iVar5;
        uint8_t local_298[8];
        Filename local_158;

        if (m_singleInstance != '\0') {
            m_instanceNumber = 0;
            goto LAB_100ba45de;
        }
        GetLockFilename(&local_158);
        if (m_instanceNumber != -1) {
            LogAssert("m_instanceNumber == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                      154, nullptr);
        }
        new (local_298) callstack::Callstack();
        new ((local_298 + 8)) File(&local_158, 2, local_298);
        m_lockFile = (*((local_298 + 8)));
        ((local_298 + 8))->~File();
        bool cVar1 = m_lockFile.IsValid();
        if (!cVar1) {
            new ((local_298 + 8)) File(&local_158, 1538, local_298);
            m_lockFile = (*((local_298 + 8)));
            ((local_298 + 8))->~File();
            cVar1 = m_lockFile.IsValid();
            if (cVar1)
                goto LAB_100ba44cd;
            pLVar2 = logger::default_logger();
            *((local_298 + 8)) = local_298->GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp", 163,
                "Could not create instance locking file: %s", uVar4);
            ((local_298 + 8))->~basic_string();
        } else {
        LAB_100ba44cd:
            cVar1 = m_lockFile.IsValid();
            if ((cVar1) && (0 < m_maxInstances)) {
                iVar5 = 0;
                do {
                    cVar1 = m_lockFile.lock((unsigned long)((unsigned int)m_isLauncher * 256 + iVar5), 1, local_298);
                    if (cVar1) {
                        m_instanceNumber = iVar5;
                        goto LAB_100ba45d2;
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 < m_maxInstances);
            }
            pLVar2 = logger::default_logger();
            pcVar3 = local_158.GetName();
            pLVar2->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp", 183,
                "Could not find unique lock slot in %s. Will use default Settings.jcache", pcVar3);
        }
    LAB_100ba45d2:
    LAB_100ba45de:
    }

    // 0x100ba4650
    Filename SystemPaths::GetLockFilename() {
        auto filename = GetDefaultCacheFolder();
        Filename result(filename);
        result /= "launcher";
        result.CreateDirectories(nullptr);
        result /= "instance.lock";
        return result;
    }

    // 0x100ba46d0
    int SystemPaths::GetInstanceNumber() {
        if (m_instanceNumber == -1) {
            GetInstanceUniqueLock();
        }
        return m_instanceNumber;
    }

    // 0x100ba46f0
    int SystemPaths::GetInstanceCount() {
        uint8_t bVar2;
        unsigned int uVar3;
        int iVar4;

        if (m_instanceNumber == -1) {
            LogAssert("m_instanceNumber != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                      207, nullptr);
        }
        bool cVar1 = m_lockFile.IsValid();
        if (!cVar1) {
            LogAssert("m_lockFile.isopen()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                      208, nullptr);
        }
        cVar1 = m_lockFile.IsValid();
        int iVar5 = 0;
        if ((cVar1) && (0 < m_maxInstances)) {
            iVar4 = 0;
            iVar5 = 0;
            do {
                uVar3 = 1;
                if (iVar4 != m_instanceNumber) {
                    bVar2 = m_lockFile.islocked((unsigned long)((unsigned int)m_isLauncher * 256 + iVar4), 1, nullptr);
                    uVar3 = (unsigned int)bVar2;
                }
                iVar5 = iVar5 + uVar3;
                iVar4 = iVar4 + 1;
            } while (iVar4 < m_maxInstances);
        }
        return iVar5;
    }

    // 0x100ba47d0
    unsigned long SystemPaths::IsOnlyInstance() {
        bool cVar1;
        int iVar2;
        uint64_t unaff_R14;

        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (m_singleInstance == '\0') {
            if (m_instanceNumber == -1) {
                LogAssert(
                    "m_instanceNumber != -1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                    238, nullptr);
            }
            cVar1 = m_lockFile.IsValid();
            if (!cVar1) {
                LogAssert(
                    "m_lockFile.isopen()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                    239, nullptr);
            }
            cVar1 = m_lockFile.IsValid();
            if ((cVar1) && (0 < m_maxInstances)) {
                iVar2 = 0;
                do {
                    if (iVar2 != m_instanceNumber) {
                        cVar1 =
                            m_lockFile.islocked((unsigned long)((unsigned int)m_isLauncher * 256 + iVar2), 1, nullptr);
                        if (cVar1) {
                            uVar3 = 0;
                            break;
                        }
                    }
                    iVar2 = iVar2 + 1;
                } while (iVar2 < m_maxInstances);
            }
        }
        return uVar3 & 4294967295;
    }

} // namespace jag
