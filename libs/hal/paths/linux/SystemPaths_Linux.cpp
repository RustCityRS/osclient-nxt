// libs/hal/paths/linux/SystemPaths_Linux.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.paths

#include "libs/hal/paths/SystemPaths.h"

namespace jag {
    // 0x100ba48b0, 352 bytes, placed by class name and debug map
    // SystemPaths::InitImpl()
    void SystemPaths::InitImpl() {
        char* pcVar1;
        Filename local_280[19];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar1 = _getenv("HOME");
        if (pcVar1 != (char*)0) {
            Filename::Filename(local_150, pcVar1);
            Filename::operator/=(local_150, "Jagex");
            Filename::operator=((Filename*)&m_PathCacheFolder, local_150);
            m_PathCacheFolder.CreateDirectories(0);
            m_PathCacheFolder.ExcludeFromBackup();
            Filename::operator=((Filename*)&m_PathPrivateFolder, local_150);
            Filename::Filename(local_280, pcVar1);
            Filename::operator=(local_150, local_280);
            local_280->~pair();
            Filename::operator/=(local_150, "Jagex");
            Filename::operator=((Filename*)&m_PathUserFolder, local_150);
            Filename::operator=((Filename*)&m_PathUserPicturesFolder, local_150);
            local_150->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba4a10, 288 bytes, placed by class name and debug map
    // SystemPaths::GetFreeDiskSpace(Filename const&, Error*)
    long SystemPaths::GetFreeDiskSpace(Filename* param_1, Error* param_2) {
        char cVar1;
        char* pcVar3;
        int* piVar4;
        long lVar5;
        statvfs local_288[4];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::Filename(local_158, param_1);
        while (true) {
            cVar1 = local_158->Exists();
            if (cVar1 != '\0')
                break;
            cVar1 = local_158->IsEmpty();
            if (cVar1 != '\0')
                break;
            local_288->GetParentPath();
            Filename::operator=(local_158, (Filename*)local_288);
            local_288->~pair();
        }
        pcVar3 = (char*)local_158->GetName();
        if (_statvfs(pcVar3, local_288) == 0) {
            lVar5 = local_288[0].f_bavail * local_288[0].f_bsize;
        } else {
            if (param_2 != (Error*)0) {
                piVar4 = ___error();
                new (param_2) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(*piVar4);
            }
            lVar5 = 0;
        }
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar5;
    }

    // 0x100ba4b30, 32 bytes, placed by class name and debug map
    // SystemPaths::ChangeWorkingDirectory(Filename const&)
    bool SystemPaths::ChangeWorkingDirectory(Filename* param_1) {
        char* pcVar1;

        pcVar1 = (char*)param_1->GetName();
        return _chdir(pcVar1) == 0;
    }

    // 0x100ba4b50, 368 bytes, placed by class name and debug map
    // SystemPaths::GetApplicationFolder()
    SystemPaths* SystemPaths::GetApplicationFolder() {
        bool bVar2;
        Filename local_3b0[19];
        Filename local_280[19];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetFullApplicationPath((SystemPaths*)local_150);
        if (local_150->IsEmpty() == '\0') {
            local_280->GetParentPath();
            local_3b0->GetFile();
            bVar2 = eastl::operator==((basic_string*)local_3b0, (value_type*)"MacOS");
            local_3b0->~basic_string();
            if (bVar2) {
                local_3b0->GetParentPath();
                Filename::operator/((Filename*)this, (char*)local_3b0);
                local_3b0->~pair();
            } else {
                new (this) Filename(local_280);
            }
            local_280->~pair();
        } else {
            new (this) Filename(local_150);
        }
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100ba4cc0, 256 bytes, placed by class name and debug map
    // SystemPaths::GetFullApplicationPath()
    SystemPaths* SystemPaths::GetFullApplicationPath() {
        int iVar1;
        char* pcVar2;
        uint local_55c;
        Filename local_558[19];
        char local_428[1024];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_55c = 1024;
        iVar1 = __NSGetExecutablePath(local_428, &local_55c);
        pcVar2 = local_428;
        if (iVar1 != 0) {
            local_55c = local_55c + 1;
            pcVar2 = operator_new__((ulong)local_55c);
            iVar1 = __NSGetExecutablePath(pcVar2, &local_55c);
            if (iVar1 != 0) {
                operator_delete__(pcVar2);
                new (this) Filename();
                goto LAB_100ba4d7b;
            }
        }
        Filename::Filename(local_558, pcVar2);
        if (pcVar2 != local_428) {
            operator_delete__(pcVar2);
        }
        new (this) Filename(local_558);
        local_558->~pair();
    LAB_100ba4d7b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag
