// libs/hal/file/linux/Filename_Linux.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.file

#include "libs/hal/file/Filename.h"

namespace jag {
    // 0x100cb3fc0, 448 bytes, placed by class name and debug map
    // Filename::RemoveDirectoryContents(Error*) const
    bool Filename::RemoveDirectoryContents(Error* param_1) {
        int iVar2;
        undefined8 uVar3;
        long lVar4;
        long lVar5;
        char* pcVar6;
        int* piVar7;
        bool bVar8;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        SetErrorCode(0, param_1);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar4 = _opendir_INODE64(uVar3);
        if (lVar4 == 0) {
            piVar7 = ___error();
            SetErrorCode(*piVar7, param_1);
            piVar7 = ___error();
            if (*piVar7 != 0) {
                piVar7 = ___error();
                bVar8 = *piVar7 != 0;
                goto LAB_100cb4131;
            }
        } else {
            lVar5 = _readdir_INODE64(lVar4);
            if (lVar5 != 0) {
                do {
                    iVar2 = _strcmp((char*)(lVar5 + 21), ".");
                    if (iVar2 != 0) {
                        iVar2 = _strcmp((char*)(lVar5 + 21), "..");
                        if (iVar2 != 0) {
                            operator/(local_168, (char*)this);
                            if ((*(byte*)(lVar5 + 20) & 4) == 0) {
                                pcVar6 = (char*)GetName(local_168);
                                iVar2 = _remove(pcVar6);
                                if (iVar2 == 0) {
                                LAB_100cb4055:
                                    local_168->~pair();
                                    goto LAB_100cb405d;
                                }
                                piVar7 = ___error();
                            LAB_100cb410d:
                                SetErrorCode(*piVar7, param_1);
                            } else {
                                if (RemoveDirectoryContents(local_168, param_1) != '\0') {
                                    pcVar6 = (char*)GetName(local_168);
                                    iVar2 = _rmdir(pcVar6);
                                    if (iVar2 == 0)
                                        goto LAB_100cb4055;
                                    piVar7 = ___error();
                                    goto LAB_100cb410d;
                                }
                            }
                            local_168->~pair();
                            break;
                        }
                    }
                LAB_100cb405d:
                    lVar5 = _readdir_INODE64(lVar4);
                } while (lVar5 != 0);
            }
            _closedir(lVar4);
        }
        bVar8 = true;
    LAB_100cb4131:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return bVar8;
    }

    // 0x100cb4180, 128 bytes, placed by class name and debug map
    // Filename::RemoveEmptyDirectory(Error*) const
    ulong Filename::RemoveEmptyDirectory(Error* param_1) {
        char cVar1;
        char* pcVar3;
        int* piVar4;
        ulong uVar5;
        int iVar6;

        cVar1 = IsDirectory(this);
        if (cVar1 == '\0') {
            iVar6 = 20;
        } else {
            cVar1 = IsDirectoryEmpty(this);
            iVar6 = 0;
            if (cVar1 == '\0') {
                iVar6 = 66;
            } else {
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                if (_rmdir(pcVar3) == 0) {
                    uVar5 = CONCAT71((int7)((ulong)this >> 8), 1);
                    goto LAB_100cb41d6;
                }
                piVar4 = ___error();
                iVar6 = *piVar4;
            }
        }
        uVar5 = 0;
    LAB_100cb41d6:
        SetErrorCode(iVar6, param_1);
        return uVar5 & 4294967295;
    }

    // 0x100cb4200, 96 bytes, placed by class name and debug map
    // Filename::RemoveFile(Error*) const
    ulong Filename::RemoveFile(Error* param_1) {
        char cVar1;
        char* pcVar3;
        int* piVar4;
        int iVar5;
        undefined8 unaff_R15;
        ulong uVar6;

        cVar1 = IsFile(this);
        iVar5 = 0;
        if (cVar1 == '\0') {
            iVar5 = 2;
        } else {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (_remove(pcVar3) == 0) {
                uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                goto LAB_100cb4249;
            }
            piVar4 = ___error();
            iVar5 = *piVar4;
        }
        uVar6 = 0;
    LAB_100cb4249:
        SetErrorCode(iVar5, param_1);
        return uVar6 & 4294967295;
    }

    // 0x100cb4260, 192 bytes, placed by class name and debug map
    // Filename::SanitiseFileName(eastl::fixed_string<char, 260, true, eastl::allocator> const&)
    Filename* Filename::SanitiseFileName(fixed_string* param_1) {
        char* pcVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;

        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>();
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            uVar5 = 0;
            do {
                pcVar2 = (char*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    uVar5);
                uVar4 = (uint)*pcVar2;
                if ((uVar4 < 32) ||
                    (((uVar4 - 34 < 59 && ((288230377040912641U >> ((ulong)(uVar4 - 34) & 63) & 1) != 0)) ||
                      (uVar4 == 124)))) {
                    append("-");
                } else {
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)this, &DAT_100e625b4);
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            } while (uVar5 < uVar3);
        }
        return this;
    }

    // 0x100cb4430, 64 bytes, placed by class name and debug map
    // Filename::IsFile() const
    bool Filename::IsFile() {
        undefined8 uVar1;
        int iVar2;
        undefined1 local_98[4];
        short local_94;

        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar2 = _stat_INODE64(uVar1, local_98);
        return local_94 < 0 && iVar2 == 0;
    }

    // 0x100cb4470, 64 bytes, placed by class name and debug map
    // Filename::GetLastModified() const
    undefined8 Filename::GetLastModified() {
        undefined8 uVar2;
        undefined1 local_98[48];
        undefined8 local_68;

        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (_stat_INODE64(uVar2, local_98) != 0) {
            local_68 = 0;
        }
        return local_68;
    }

    // 0x100cb44b0, 64 bytes, placed by class name and debug map
    // Filename::GetFileSize() const
    undefined8 Filename::GetFileSize() {
        undefined8 uVar2;
        undefined1 local_98[96];
        undefined8 local_38;

        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (_stat_INODE64(uVar2, local_98) != 0) {
            local_38 = 0;
        }
        return local_38;
    }

    // 0x100cb44f0, 272 bytes, placed by class name and debug map
    // Filename::GetAllFiles() const
    Filename* Filename::GetAllFiles() {
        undefined8 uVar1;
        long lVar2;
        long lVar3;
        char* in_RSI;
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) eastl::vector<Filename, eastl::allocator>();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar2 = _opendir_INODE64(uVar1);
        if (lVar2 != 0) {
            while (lVar3 = _readdir_INODE64(lVar2), lVar3 != 0) {
                if ((*(char*)(lVar3 + 21) != '.') ||
                    ((*(char*)(lVar3 + 22) != '\0' &&
                      ((*(char*)(lVar3 + 22) != '.' || (*(char*)(lVar3 + 23) != '\0')))))) {
                    operator/(local_160, in_RSI);
                    push_back(local_160);
                    local_160->~pair();
                }
            }
            _closedir(lVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag
