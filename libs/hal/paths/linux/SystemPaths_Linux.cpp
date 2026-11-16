// libs/hal/paths/linux/SystemPaths_Linux.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.paths

#include "libs/hal/paths/SystemPaths.h"

namespace jag {
    // 0x100ba48b0
    void SystemPaths::InitImpl() {
        Filename local_280;
        Filename local_150;

        auto str = _getenv("HOME");
        if (str != nullptr) {
            local_150 = Filename(str);
            local_150 /= "Jagex";
            m_PathCacheFolder = local_150;
            m_PathCacheFolder.CreateDirectories(nullptr);
            m_PathCacheFolder.ExcludeFromBackup();
            m_PathPrivateFolder = local_150;
            local_280 = Filename(str);
            local_150 = local_280;
            local_150 /= "Jagex";
            m_PathUserFolder = local_150;
            m_PathUserPicturesFolder = local_150;
        }
    }

    // 0x100ba4a10
    long SystemPaths::GetFreeDiskSpace(const Filename& filename, Error* error) {
        bool cVar1;
        int* piVar4;
        long lVar5;
        statvfs local_288;

        Filename local_158(filename);
        while (true) {
            cVar1 = local_158.Exists();
            if (cVar1)
                break;
            cVar1 = local_158.IsEmpty();
            if (cVar1)
                break;
            local_288 = local_158.GetParentPath();
            local_158 = local_288;
        }
        auto pcVar3 = local_158.GetName();
        if (_statvfs(pcVar3, &local_288) == 0) {
            lVar5 = local_288[0].f_bavail * local_288[0].f_bsize;
        } else {
            if (error != nullptr) {
                piVar4 = ___error();
                new (error) std::__cxx_atomic_base_impl(*piVar4);
            }
            lVar5 = 0;
        }
        return lVar5;
    }

    // 0x100ba4b30
    uint64_t SystemPaths::ChangeWorkingDirectory(const Filename& filename) {
        auto pcVar2 = GetName();
        return _chdir(pcVar2) == 0;
    }

    // 0x100ba4b50
    Filename SystemPaths::GetApplicationFolder() {
        bool bVar2;
        ReturnValue local_3b0;
        Filename local_280;
        Filename local_150;

        GetFullApplicationPath(&local_150);
        if (local_150.IsEmpty() == '\0') {
            local_280 = local_150.GetParentPath();
            local_3b0.GetFile(&local_280);
            bVar2 = local_3b0 == (*((value_type*)"MacOS"));
            if (bVar2) {
                local_3b0 = local_280.GetParentPath();
                result = local_3b0 / "Resources";
                local_3b0.~pair();
            } else {
                Filename result(&local_280);
            }
        } else {
            new (&result) Filename(&local_150);
        }
        return result;
    }

    // 0x100ba4cc0
    Filename SystemPaths::GetFullApplicationPath() {
        char local_428[1024];

        unsigned int local_55c = 1024;
        int iVar1 = __NSGetExecutablePath(local_428, &local_55c);
        char* str = local_428;
        if (iVar1 != 0) {
            local_55c = local_55c + 1;
            str = (char*)operator_new__((unsigned long)local_55c);
            iVar1 = __NSGetExecutablePath(str, &local_55c);
            if (iVar1 != 0) {
                operator_delete__(str);
                Filename result;
                goto LAB_100ba4d7b;
            }
        }
        Filename local_558(str);
        if (str != local_428) {
            operator_delete__(str);
        }
        new (&result) Filename(&local_558);
    LAB_100ba4d7b:
        return result;
    }

} // namespace jag
