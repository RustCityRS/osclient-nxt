// libs/hal/paths/SystemPaths.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.paths

#include "SystemPaths.h"

namespace jag {
    // 0x100f48540, 4 bytes, __data
    SystemPaths::m_maxInstances = 16;

    // 0x100f48544, 4 bytes, __data
    SystemPaths::m_instanceNumber = -1;

    // 0x103bd9060, 304 bytes, __common; set at startup by ___cxx_global_var_init
    Filename SystemPaths::m_PathCacheFolder = Filename();

    // 0x103bd9190, 304 bytes, __common; set at startup by ___cxx_global_var_init.1
    Filename SystemPaths::m_PathUserFolder = Filename();

    // 0x103bd92c0, 304 bytes, __common; set at startup by ___cxx_global_var_init.2
    Filename SystemPaths::m_PathDefaultCacheFolder = Filename();

    // 0x103bd93f0, 304 bytes, __common; set at startup by ___cxx_global_var_init.3
    Filename SystemPaths::m_PathDefaultUserFolder = Filename();

    // 0x103bd9520, 304 bytes, __common; set at startup by ___cxx_global_var_init.4
    Filename SystemPaths::m_PathPrivateFolder = Filename();

    // 0x103bd9650, 304 bytes, __common; set at startup by ___cxx_global_var_init.5
    Filename SystemPaths::m_PathUserPicturesFolder = Filename();

    // 0x103bd9780, 304 bytes, __common; set at startup by ___cxx_global_var_init.6
    Filename SystemPaths::m_overrideFolder = Filename();

    // 0x103bd98b0, 1 bytes, __common; zero-initialised
    SystemPaths::m_bInit;

    // 0x103bd98b1, 1 bytes, __common; zero-initialised
    SystemPaths::m_isLauncher;

    // 0x103bd98b2, 6 bytes, __common; zero-initialised
    SystemPaths::m_singleInstance;

    // 0x103bd98b8, 312 bytes, __common; set at startup by ___cxx_global_var_init.7
    File SystemPaths::m_lockFile = File();

    // 0x103bd99f0, 48 bytes, __common; zero-initialised
    SystemPaths::m_callbacks;

    // 0x100ba3c60, 256 bytes, placed by class name and debug map
    // SystemPaths::SetCacheFolder(char const*)
    void SystemPaths::SetCacheFolder(char* param_1) {
        Filename local_278[19];
        Filename local_148[19];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Init((SystemPaths*)param_1);
        Filename::Filename(local_148, param_1);
        Filename::Filename(local_278, (Filename*)&m_PathCacheFolder);
        if (Filename::operator!=(local_148, local_278) != '\0') {
            Filename::operator=((Filename*)&m_PathCacheFolder, local_148);
            CheckCacheFolder();
            m_PathCacheFolder.CreateDirectories(0);
            RunCallbacks(0, local_278, &m_PathCacheFolder);
        }
        local_278->~pair();
        local_148->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba3d60, 416 bytes, placed by class name and debug map
    // SystemPaths::CheckCacheFolder()
    void SystemPaths::CheckCacheFolder() {
        char cVar1;
        Filename local_3b8[19];
        Filename local_288[19];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = m_PathCacheFolder.Exists();
        if (cVar1 != '\0') {
        LAB_100ba3e99:
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        local_158->GetParentPath();
        Filename::Filename(local_288);
        while (true) {
            cVar1 = local_158->Exists();
            if (cVar1 != '\0')
                break;
            Filename::operator=(local_288, local_158);
            local_3b8->GetParentPath();
            Filename::operator=(local_158, local_3b8);
            local_3b8->~pair();
        }
        cVar1 = local_158->Exists();
        if (cVar1 != '\0') {
            cVar1 = local_288->Exists();
            if (cVar1 == '\0') {
                cVar1 = local_288->IsEmpty();
                if (cVar1 == '\0') {
                    local_288->CreateFolderForEveryone(0);
                    m_PathCacheFolder.CreateDirectories(0);
                } else {
                    m_PathCacheFolder.CreateFolderForEveryone(0);
                }
                local_288->~pair();
                local_158->~pair();
                goto LAB_100ba3e99;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("path.Exists() && !lastPath.Exists()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp", 85,
                  (char*)0);
    }

    // 0x100ba3f00, 160 bytes, placed by class name and debug map
    // SystemPaths::RunCallbacks(SystemPaths::Scope, Filename const&, Filename const&)
    void SystemPaths::RunCallbacks(int param_1, undefined8 param_2, undefined8 param_3) {
        bool bVar1;
        undefined8* puVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar3[16];
        undefined8 local_40;
        undefined8 local_38;

        local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar3 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_38 = auVar3._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar3._8_8_);
        if (bVar1) {
            do {
                puVar2 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
                (**(code**)(*(long*)*puVar2 + (ulong)(param_1 != 0) * 8))((long*)*puVar2, param_2, param_3);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar1);
        }
    }

    // 0x100ba3fa0, 256 bytes, placed by class name and debug map
    // SystemPaths::SetUserFolder(char const*)
    void SystemPaths::SetUserFolder(char* param_1) {
        Filename local_278[19];
        Filename local_148[19];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Init((SystemPaths*)param_1);
        Filename::Filename(local_148, param_1);
        Filename::Filename(local_278, (Filename*)&m_PathUserFolder);
        if (Filename::operator!=(local_148, local_278) != '\0') {
            Filename::operator=((Filename*)&m_PathUserFolder, local_148);
            m_PathUserFolder.CreateDirectories(0);
            RunCallbacks(1, local_278, &m_PathUserFolder);
        }
        local_278->~pair();
        local_148->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba40a0, 768 bytes, placed by class name and debug map
    // SystemPaths::CheckLauncherCFG()
    void SystemPaths::CheckLauncherCFG() {
        char cVar1;
        int iVar2;
        ulong uVar3;
        char* pcVar4;
        long lVar5;
        eastl::string local_640[32];
        File local_620[12];
        fixed_string<char, 40, true, eastl::allocator> local_4f0[296];
        fixed_string<char, 256, true, eastl::allocator> local_3c8[296];
        ClientCompositeZone local_2a0[13];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::operator/((Filename*)local_2a0, &m_PathDefaultCacheFolder);
        Filename::operator/(local_168, (char*)local_2a0);
        local_2a0->~pair();
        new (local_2a0) File(local_168, 0, 0);
        cVar1 = local_2a0->IsValid();
        if (cVar1 == '\0') {
        LAB_100ba42c3:
            local_2a0->~File();
            local_168->~pair();
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        eastl::string::basic_string(local_640);
        do {
            local_620->readline();
            eastl::string::operator=(local_640, (basic_string*)local_620);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            local_620->~basic_string();
            if (cVar1 != '\0') {
                eastl::string::~basic_string(local_640);
                goto LAB_100ba42c3;
            }
            uVar3 = local_640->find('=', 0);
        } while (uVar3 == 18446744073709551615);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_3c8, pcVar4, uVar3);
        lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_4f0) eastl::fixed_string<char, 256, true, eastl::allocator>((char*)(lVar5 + uVar3 + 1));
        iVar2 = local_3c8->compare("cache_folder");
        if (iVar2 == 0) {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new (local_620) Filename(pcVar4);
            cVar1 = local_620->Exists();
            if (cVar1 != '\0') {
                cVar1 = local_620->IsDirectory();
                if (cVar1 != '\0') {
                    Filename::operator=((Filename*)&m_PathCacheFolder, (Filename*)local_620);
                }
            }
        } else {
            iVar2 = local_3c8->compare("user_folder");
            if (iVar2 != 0)
                goto LAB_100ba4168;
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new (local_620) Filename(pcVar4);
            cVar1 = local_620->Exists();
            if (cVar1 != '\0') {
                cVar1 = local_620->IsDirectory();
                if (cVar1 != '\0') {
                    Filename::operator=((Filename*)&m_PathUserFolder, (Filename*)local_620);
                }
            }
        }
        local_620->~pair();
    LAB_100ba4168:
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_4f0);
    }

    // 0x100ba43b0, 672 bytes, placed by class name and debug map
    // SystemPaths::GetInstanceUniqueLock()
    void SystemPaths::GetInstanceUniqueLock() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        int iVar4;
        undefined1 local_298[8];
        File local_290[13];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_singleInstance != '\0') {
            m_instanceNumber = 0;
            goto LAB_100ba45de;
        }
        GetLockFilename((SystemPaths*)local_158);
        if (m_instanceNumber != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_instanceNumber == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                      154, (char*)0);
        }
        new (local_298) callstack::Callstack();
        new ((local_298 + 8)) File(local_158, 2, local_298);
        File::operator=((File*)&m_lockFile, (File*)(local_298 + 8));
        ((local_298 + 8))->~File();
        cVar1 = m_lockFile.IsValid();
        if (cVar1 == '\0') {
            new ((local_298 + 8)) File(local_158, 1538, local_298);
            File::operator=((File*)&m_lockFile, (File*)(local_298 + 8));
            ((local_298 + 8))->~File();
            cVar1 = m_lockFile.IsValid();
            if (cVar1 != '\0')
                goto LAB_100ba44cd;
            uVar2 = logger::default_logger();
            ((local_298 + 8))->GetErrorString();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp", 163,
                "Could not create instance locking file: %s", uVar3);
            ((local_298 + 8))->~basic_string();
        } else {
        LAB_100ba44cd:
            cVar1 = m_lockFile.IsValid();
            if ((cVar1 != '\0') && (0 < m_maxInstances)) {
                iVar4 = 0;
                do {
                    cVar1 = m_lockFile.lock((ulong)((uint)m_isLauncher * 256 + iVar4), 1, local_298);
                    if (cVar1 != '\0') {
                        m_instanceNumber = iVar4;
                        goto LAB_100ba45d2;
                    }
                    iVar4 = iVar4 + 1;
                } while (iVar4 < m_maxInstances);
            }
            uVar2 = logger::default_logger();
            uVar3 = local_158->GetName();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp", 183,
                "Could not find unique lock slot in %s. Will use default Settings.jcache", uVar3);
        }
    LAB_100ba45d2:
        local_158->~pair();
    LAB_100ba45de:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba4650, 96 bytes, placed by class name and debug map
    // SystemPaths::GetLockFilename()
    SystemPaths* SystemPaths::GetLockFilename() {
        Filename* pFVar1;

        pFVar1 = (Filename*)GetDefaultCacheFolder(this);
        new (this) Filename(pFVar1);
        Filename::operator/=((Filename*)this, "launcher");
        CreateDirectories(0);
        Filename::operator/=((Filename*)this, "instance.lock");
        return this;
    }

    // 0x100ba46d0, 32 bytes, placed by class name and debug map
    // SystemPaths::GetInstanceNumber()
    int SystemPaths::GetInstanceNumber() {
        if (m_instanceNumber == -1) {
            GetInstanceUniqueLock();
        }
        return m_instanceNumber;
    }

    // 0x100ba46f0, 224 bytes, placed by class name and debug map
    // SystemPaths::GetInstanceCount()
    int SystemPaths::GetInstanceCount() {
        char cVar1;
        byte bVar2;
        uint uVar3;
        int iVar4;
        int iVar5;

        if (m_instanceNumber == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_instanceNumber != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                      207, (char*)0);
        }
        cVar1 = m_lockFile.IsValid();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_lockFile.isopen()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                      208, (char*)0);
        }
        cVar1 = m_lockFile.IsValid();
        iVar5 = 0;
        if ((cVar1 != '\0') && (0 < m_maxInstances)) {
            iVar4 = 0;
            iVar5 = 0;
            do {
                uVar3 = 1;
                if (iVar4 != m_instanceNumber) {
                    bVar2 = m_lockFile.islocked((ulong)((uint)m_isLauncher * 256 + iVar4), 1, 0);
                    uVar3 = (uint)bVar2;
                }
                iVar5 = iVar5 + uVar3;
                iVar4 = iVar4 + 1;
            } while (iVar4 < m_maxInstances);
        }
        return iVar5;
    }

    // 0x100ba47d0, 224 bytes, placed by class name and debug map
    // SystemPaths::IsOnlyInstance()
    ulong SystemPaths::IsOnlyInstance() {
        char cVar1;
        int iVar2;
        undefined8 unaff_R14;
        ulong uVar3;

        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (m_singleInstance == '\0') {
            if (m_instanceNumber == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_instanceNumber != -1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                    238, (char*)0);
            }
            cVar1 = m_lockFile.IsValid();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_lockFile.isopen()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/paths/SystemPaths.cpp",
                    239, (char*)0);
            }
            cVar1 = m_lockFile.IsValid();
            if ((cVar1 != '\0') && (0 < m_maxInstances)) {
                iVar2 = 0;
                do {
                    if (iVar2 != m_instanceNumber) {
                        cVar1 = m_lockFile.islocked((ulong)((uint)m_isLauncher * 256 + iVar2), 1, 0);
                        if (cVar1 != '\0') {
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

    // 0x100ba5310, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&SystemPaths::m_PathCacheFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_PathCacheFolder, 4294967296);
    }

    // 0x100ba5350, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&SystemPaths::m_PathUserFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_PathUserFolder, 4294967296);
    }

    // 0x100ba5390, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        new (&SystemPaths::m_PathDefaultCacheFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_PathDefaultCacheFolder, 4294967296);
    }

    // 0x100ba53d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&SystemPaths::m_PathDefaultUserFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_PathDefaultUserFolder, 4294967296);
    }

    // 0x100ba5410, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        new (&SystemPaths::m_PathPrivateFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_PathPrivateFolder, 4294967296);
    }

    // 0x100ba5450, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5() {
        new (&SystemPaths::m_PathUserPicturesFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_PathUserPicturesFolder, 4294967296);
    }

    // 0x100ba5490, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        new (&SystemPaths::m_overrideFolder) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &SystemPaths::m_overrideFolder, 4294967296);
    }

    // 0x100ba54d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7() {
        new (&SystemPaths::m_lockFile) File();
        ___cxa_atexit(PTR__File_100ee64b8, &SystemPaths::m_lockFile, 4294967296);
    }

} // namespace jag
