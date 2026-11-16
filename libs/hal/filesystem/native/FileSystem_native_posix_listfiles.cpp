// libs/hal/filesystem/native/FileSystem_native_posix_listfiles.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.filesystem

#include "libs/hal/filesystem/FileSystem.h"

namespace jag {
    // 0x100b1ed50, 592 bytes, placed by class name and debug map
    // FileSystem::GetFileList(Filename const&, eastl::list<filesystem::FileListContents, eastl::allocator>&, bool, Filename const*)
    int FileSystem::GetFileList(Filename* param_1, list* param_2, bool param_3, Filename* param_4) {
        dirent* pdVar1;
        int iVar2;
        char* pcVar3;
        long lVar4;
        int* piVar5;
        dirent* pdVar6;
        undefined7 in_register_00000011;
        stat* psVar7;
        stat local_360[144];
        undefined4 local_2b4;
        Filename local_2b0[19];
        FileListContents local_180;
        long local_38;

        local_2b4 = (undefined4)CONCAT71(in_register_00000011, param_3);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar3 = Filename::operator_cast_to_char_(param_1);
        lVar4 = _opendir_INODE64(pcVar3);
        if (lVar4 == 0) {
            piVar5 = ___error();
            if (*piVar5 == 0) {
                iVar2 = -1;
            } else {
                piVar5 = ___error();
                iVar2 = *piVar5;
            }
        } else {
            if (ms_diskThreadQuit == '\0') {
                do {
                    pdVar6 = (dirent*)_readdir_INODE64(lVar4);
                    if (pdVar6 == (dirent*)0)
                        break;
                    pdVar1 = pdVar6 + 21;
                    iVar2 = _strcmp((char*)pdVar1, ".");
                    if (iVar2 != 0) {
                        iVar2 = _strcmp((char*)pdVar1, "..");
                        if (iVar2 != 0) {
                            new (&local_180) filesystem::FileListContents();
                            if (param_4 == (Filename*)0) {
                                Filename::Filename(local_2b0, (char*)pdVar1);
                                Filename::operator=((Filename*)&local_180, local_2b0);
                                local_2b0->~pair();
                            } else {
                                Filename::operator=((Filename*)&local_180, param_4);
                                Filename::operator/=((Filename*)&local_180, (char*)pdVar1);
                            }
                            Filename::Filename(local_2b0, param_1);
                            Filename::operator/=(local_2b0, (char*)pdVar1);
                            pcVar3 = Filename::operator_cast_to_char_(local_2b0);
                            _stat_INODE64(pcVar3, local_360);
                            psVar7 = local_360;
                            local_180.field_320 = ConvertAttributes(pdVar6, local_360);
                            local_180.field_312 = (Pix8*)ConvertSize((dirent*)local_360, psVar7);
                            local_180.field_304 = (Pix8*)ConvertDateTime((dirent*)local_360, psVar7);
                            param_2->push_back(&local_180);
                            if (((char)local_2b4 != '\0') && ((local_180.field_320 & 8) != 0)) {
                                GetFileList(local_2b0, param_2, true, (Filename*)&local_180);
                            }
                            local_2b0->~pair();
                            local_180.~__alt();
                        }
                    }
                } while (ms_diskThreadQuit == '\0');
            }
            _closedir(lVar4);
            iVar2 = 0;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar2;
    }

    // 0x100b1f320, 16 bytes, complete-object destructor, placed by class name and debug map
    // FileSystem::DeleteDirectory(Filename const&)::$_0::~$_0(): jumps straight to the base-object destructor

    // 0x100b1f380, 448 bytes, placed by class name and debug map
    // FileSystem::GetFolderSizeBytes(Filename const&, bool)
    long FileSystem::GetFolderSizeBytes(Filename* param_1, bool param_2) {
        dirent* pdVar1;
        int iVar2;
        uint uVar3;
        char* pcVar4;
        long lVar5;
        int* piVar6;
        dirent* pdVar7;
        long lVar8;
        undefined7 in_register_00000031;
        stat* psVar9;
        long lVar10;
        stat local_208[144];
        uint local_16c;
        Filename local_168[19];
        long local_38;

        local_16c = (uint)CONCAT71(in_register_00000031, param_2);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar4 = Filename::operator_cast_to_char_(param_1);
        lVar5 = _opendir_INODE64(pcVar4);
        if (lVar5 == 0) {
            piVar6 = ___error();
            if (*piVar6 == 0) {
                lVar10 = -1;
            } else {
                piVar6 = ___error();
                lVar10 = (long)*piVar6;
            }
        } else {
            if (ms_diskThreadQuit == '\0') {
                local_16c = local_16c ^ 1;
                lVar10 = 0;
                do {
                    pdVar7 = (dirent*)_readdir_INODE64(lVar5);
                    if (pdVar7 == (dirent*)0)
                        break;
                    pdVar1 = pdVar7 + 21;
                    iVar2 = _strcmp((char*)pdVar1, ".");
                    if ((iVar2 != 0) && (iVar2 = _strcmp((char*)pdVar1, ".."), iVar2 != 0)) {
                        Filename::Filename(local_168, param_1);
                        Filename::operator/=(local_168, (char*)pdVar1);
                        pcVar4 = Filename::operator_cast_to_char_(local_168);
                        _stat_INODE64(pcVar4, local_208);
                        psVar9 = local_208;
                        uVar3 = ConvertAttributes(pdVar7, local_208);
                        lVar8 = ConvertSize((dirent*)local_208, psVar9);
                        lVar10 = lVar8 + lVar10;
                        if ((uVar3 & 8) != 0 && (char)local_16c == '\0') {
                            lVar8 = GetFolderSizeBytes(local_168, true);
                            lVar10 = lVar10 + lVar8;
                        }
                        local_168->~pair();
                    }
                } while (ms_diskThreadQuit == '\0');
            } else {
                lVar10 = 0;
            }
            _closedir(lVar5);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar10;
    }

    // 0x100b1f540, 32 bytes, placed by debug map only (low confidence)
    // ConvertAttributes(dirent const*, stat const*)
    int ConvertAttributes(dirent* param_1, stat* param_2) {
        return (uint)(((byte)param_2[4] & 128) == 0) + (*(uint*)(param_1 + 20) & 4) * 2;
    }

    // 0x100b1f560, 16 bytes, placed by debug map only (low confidence)
    // ConvertSize(dirent const*, stat const*)
    undefined8 ConvertSize(dirent* param_1, stat* param_2) {
        return *(undefined8*)(param_1 + 96);
    }

    // 0x100b1f570, 16 bytes, placed by debug map only (low confidence)
    // ConvertDateTime(dirent const*, stat const*)
    undefined8 ConvertDateTime(dirent* param_1, stat* param_2) {
        return *(undefined8*)(param_1 + 48);
    }

} // namespace jag
