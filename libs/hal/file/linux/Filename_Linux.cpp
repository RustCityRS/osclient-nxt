// libs/hal/file/linux/Filename_Linux.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.file

#include "libs/hal/file/Filename.h"

namespace jag {
    // 0x100cb3fc0
    bool Filename::RemoveDirectoryContents(Error* error) const {
        int iVar2;
        long lVar5;
        char* pcVar6;
        int* piVar7;
        bool bVar8;
        Filename local_168;

        SetErrorCode(0, error);
        long lVar4 = _opendir_INODE64(eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        if (lVar4 == 0) {
            piVar7 = ___error();
            SetErrorCode(*piVar7, error);
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
                    pcVar6 = (char*)(lVar5 + 21);
                    iVar2 = _strcmp(pcVar6, ".");
                    if (iVar2 != 0) {
                        iVar2 = _strcmp(pcVar6, "..");
                        if (iVar2 != 0) {
                            operator/(&local_168, this, pcVar6);
                            if ((*(uint8_t*)(lVar5 + 20) & 4) == 0) {
                                pcVar6 = GetName(&local_168);
                                iVar2 = remove(pcVar6);
                                if (iVar2 == 0) {
                                LAB_100cb4055:
                                    goto LAB_100cb405d;
                                }
                                piVar7 = ___error();
                            LAB_100cb410d:
                                SetErrorCode(*piVar7, error);
                            } else {
                                if (RemoveDirectoryContents(&local_168, error) != '\0') {
                                    pcVar6 = GetName(&local_168);
                                    iVar2 = _rmdir(pcVar6);
                                    if (iVar2 == 0)
                                        goto LAB_100cb4055;
                                    piVar7 = ___error();
                                    goto LAB_100cb410d;
                                }
                            }
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
        return bVar8;
    }

    // 0x100cb4180
    unsigned long Filename::RemoveEmptyDirectory(Error* error) const {
        char* pcVar3;
        int* piVar4;
        unsigned long uVar5;
        int arg1;

        bool cVar1 = IsDirectory();
        if (!cVar1) {
            arg1 = 20;
        } else {
            cVar1 = IsDirectoryEmpty();
            arg1 = 0;
            if (!cVar1) {
                arg1 = 66;
            } else {
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                if (_rmdir(pcVar3) == 0) {
                    uVar5 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                    goto LAB_100cb41d6;
                }
                piVar4 = ___error();
                arg1 = *piVar4;
            }
        }
        uVar5 = 0;
    LAB_100cb41d6:
        SetErrorCode(arg1, error);
        return uVar5 & 4294967295;
    }

    // 0x100cb4200
    unsigned long Filename::RemoveFile(Error* error) const {
        char* pcVar3;
        int* piVar4;
        uint64_t unaff_R15;
        unsigned long uVar5;

        bool cVar1 = IsFile();
        int arg1 = 0;
        if (!cVar1) {
            arg1 = 2;
        } else {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (remove(pcVar3) == 0) {
                uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100cb4249;
            }
            piVar4 = ___error();
            arg1 = *piVar4;
        }
        uVar5 = 0;
    LAB_100cb4249:
        SetErrorCode(arg1, error);
        return uVar5 & 4294967295;
    }

    // 0x100cb4260
    auto Filename::SanitiseFileName(const eastl::fixed_string<char, 260>& str) {
        char* pcVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        auto result;
        if (str.size() != 0) {
            arg1 = 0;
            do {
                pcVar2 = &str[arg1];
                uVar4 = (unsigned int)*pcVar2;
                if ((uVar4 < 32) ||
                    (((uVar4 - 34 < 59 && ((288230377040912641U >> ((unsigned long)(uVar4 - 34) & 63) & 1) != 0)) ||
                      (uVar4 == 124)))) {
                    result.append("-");
                } else {
                    result.append_sprintf("%c");
                }
                arg1 = arg1 + 1;
                uVar3 = str.size();
            } while (arg1 < uVar3);
        }
        return result;
    }

    // 0x100cb4430
    bool Filename::IsFile() const {
        uint8_t local_98[4];
        short local_94;

        int iVar2 = _stat_INODE64(eastl::basic_string<char, BucketAllocatorEASTL>::begin(), local_98);
        return local_94 < 0 && iVar2 == 0;
    }

    // 0x100cb4470
    uint64_t Filename::GetLastModified() const {
        uint8_t local_98[48];
        uint64_t local_68;

        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (_stat_INODE64(uVar2, local_98) != 0) {
            local_68 = 0;
        }
        return local_68;
    }

    // 0x100cb44b0
    uint64_t Filename::GetFileSize() const {
        uint8_t local_98[96];
        uint64_t local_38;

        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (_stat_INODE64(uVar2, local_98) != 0) {
            local_38 = 0;
        }
        return local_38;
    }

    // 0x100cb44f0
    auto Filename::GetAllFiles() const {
        long lVar3;
        Filename local_160;

        auto result;
        long lVar2 = _opendir_INODE64(eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        if (lVar2 != 0) {
            while (lVar3 = _readdir_INODE64(lVar2), lVar3 != 0) {
                if ((*(char*)(lVar3 + 21) != '.') ||
                    ((*(char*)(lVar3 + 22) != '\0' &&
                      ((*(char*)(lVar3 + 22) != '.' || (*(char*)(lVar3 + 23) != '\0')))))) {
                    operator/(&local_160, this, (char*)(lVar3 + 21));
                    result.push_back(local_160);
                }
            }
            _closedir(lVar2);
        }
        return result;
    }

} // namespace jag
