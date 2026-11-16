// libs/hal/file/osx/Filename_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.file

#include "libs/hal/file/Filename.h"

namespace jag {
    // 0x100cb4ea0
    unsigned long Filename::Exists() const {
        int* piVar3;
        uint64_t unaff_RBX;

        int iVar1 = _access((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), 6);
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_RBX >> 8);
        unsigned long uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
        if (iVar1 != 0) {
            piVar3 = ___error();
            if (*piVar3 != 13) {
                piVar3 = ___error();
                uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(*piVar3 == 30));
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100cb4ee0
    void Filename::CreateFolderForEveryone(Error* error) const {
        CreateDirectories(error);
    }

    // 0x100cb4ef0
    unsigned long Filename::CreateDirectories(Error* error) const {
        unsigned int uVar3;
        int* piVar5;
        uint64_t unaff_RBX;
        Filename local_158;

        SetErrorCode(0, error);
        bool cVar1 = Exists();
        unsigned long uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (cVar1)
            goto LAB_100cb4fb8;
        GetParentPath(&local_158, this);
        auto pcVar4 = GetName(&local_158);
        if (pcVar4 == nullptr) {
        LAB_100cb4fa2:
            uVar3 = Exists();
            uVar6 = (unsigned long)uVar3;
        } else {
            cVar1 = Exists(&local_158);
            if (cVar1) {
            LAB_100cb4f6f:
                cVar1 = Exists(&local_158);
                if (cVar1) {
                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    if (_mkdir(pcVar4, 509) != 0) {
                        piVar5 = ___error();
                        if (*piVar5 != 17) {
                            piVar5 = ___error();
                            SetErrorCode(*piVar5, error);
                            uVar6 = 0;
                            goto LAB_100cb4fac;
                        }
                    }
                }
                goto LAB_100cb4fa2;
            }
            cVar1 = CreateDirectories(&local_158, error);
            if (cVar1)
                goto LAB_100cb4f6f;
            uVar6 = 0;
        }
    LAB_100cb4fac:
    LAB_100cb4fb8:
        return uVar6 & 4294967295;
    }

    // 0x100cb5030
    unsigned long Filename::IsDirectoryEmpty() const {
        int iVar2;
        long lVar4;
        long lVar5;
        uint64_t unaff_R13;
        unsigned long uVar6;

        if (IsDirectory() != '\0') {
            lVar4 = _opendir_INODE64(eastl::basic_string<char, BucketAllocatorEASTL>::begin());
            if (lVar4 != 0) {
                lVar5 = _readdir_INODE64(lVar4);
                uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)(lVar5 == 0));
                if (lVar5 != 0) {
                    do {
                        iVar2 = _strcmp((char*)(lVar5 + 21), ".");
                        if ((iVar2 != 0) && (iVar2 = _strcmp((char*)(lVar5 + 21), ".."), iVar2 != 0))
                            break;
                        lVar5 = _readdir_INODE64(lVar4);
                        uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)(lVar5 == 0));
                    } while (lVar5 != 0);
                }
                _closedir(lVar4);
                goto LAB_100cb50d3;
            }
        }
        uVar6 = 0;
    LAB_100cb50d3:
        return uVar6 & 4294967041;
    }

    // 0x100cb50f0
    unsigned long Filename::Rename(const Filename& filename, Error* error) const {
        int* piVar5;
        unsigned long uVar6;

        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (_rename(pcVar3, pcVar4) == 0) {
            SetErrorCode(0, error);
            uVar6 = (((uint64_t)((int64_t)((unsigned long)pcVar3 >> 8)) << 8) | (uint8_t)1);
        } else {
            piVar5 = ___error();
            if (*piVar5 == 18) {
                uVar6 = 0;
                if (Copy(filename, false, error) != '\0') {
                    pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    _unlink(pcVar3);
                    uVar6 = 1;
                }
            } else {
                piVar5 = ___error();
                SetErrorCode(*piVar5, error);
                uVar6 = 0;
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x100cb5190
    unsigned long Filename::Copy(const Filename& filename, bool arg2, Error* error) const {
        int iVar2;
        int iVar3;
        char* pcVar4;
        size_t sVar6;
        size_t sVar7;
        int* piVar8;
        uint64_t in_register_00000011;
        unsigned long uVar9;
        uint8_t local_40d0[4];
        unsigned short local_40cc;
        uint8_t local_4038[16384];

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            if (Exists(filename) == '\0')
                goto LAB_100cb51dd;
            SetErrorCode(17, error);
        } else {
        LAB_100cb51dd:
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = _open(pcVar4, 0, 0);
            if (iVar2 == -1) {
                piVar8 = ___error();
                SetErrorCode(*piVar8, error);
            } else {
                _stat_INODE64(eastl::basic_string<char, BucketAllocatorEASTL>::begin(), local_40d0);
                uVar9 = (unsigned long)(local_40cc & 73 | 420);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar3 = _open(pcVar4, 1537, uVar9);
                if (iVar3 == -1) {
                    piVar8 = ___error();
                    SetErrorCode(*piVar8, error);
                } else {
                    do {
                        sVar6 = _read(iVar2, local_4038, 16384);
                        uVar9 = (((uint64_t)((int64_t)(uVar9 >> 8)) << 8) | (uint8_t)(sVar6 == 0));
                        if (sVar6 == 0)
                            goto LAB_100cb52a1;
                        sVar7 = _write(iVar3, local_4038, sVar6);
                    } while (sVar7 == sVar6);
                    piVar8 = ___error();
                    SetErrorCode(*piVar8, error);
                LAB_100cb52a1:
                    close(iVar3);
                    close(iVar2);
                }
                if (iVar3 != -1)
                    goto LAB_100cb52e3;
            }
            close(iVar2);
        }
        uVar9 = 0;
    LAB_100cb52e3:
        return uVar9 & 18446744073709551361;
    }

    // 0x100cb5310
    long Filename::GetFolderSize() const {
        char* str;
        int iVar1;
        long lVar4;
        int* piVar5;
        long lVar6;
        uint8_t local_200[96];
        long local_1a0;
        pair<eastl::fixed_string<char, 16>, unsigned int> local_168;

        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar3 = _opendir_INODE64(uVar2);
        if (lVar3 == 0) {
            piVar5 = ___error();
            if (*piVar5 == 0) {
                lVar6 = -1;
            } else {
                piVar5 = ___error();
                lVar6 = (long)*piVar5;
            }
        } else {
            lVar4 = _readdir_INODE64(lVar3);
            if (lVar4 == 0) {
                lVar6 = 0;
            } else {
                lVar6 = 0;
                do {
                    str = (char*)(lVar4 + 21);
                    iVar1 = _strcmp(str, ".");
                    if (iVar1 != 0) {
                        iVar1 = _strcmp(str, "..");
                        if (iVar1 != 0) {
                            Filename<260, true>(&local_168, (fixed_string<char, _260>*)this);
                            operator/=(&local_168, str);
                            uVar2 = operator_cast_to_char_(&local_168);
                            _stat_INODE64(uVar2, local_200);
                            lVar6 = lVar6 + local_1a0;
                            if ((*(uint8_t*)(lVar4 + 20) & 4) != 0) {
                                lVar4 = GetFolderSize(&local_168);
                                lVar6 = lVar6 + lVar4;
                            }
                        }
                    }
                    lVar4 = _readdir_INODE64(lVar3);
                } while (lVar4 != 0);
            }
            _closedir(lVar3);
        }
        return lVar6;
    }

    // 0x100cb54a0
    bool Filename::IsSameFilesystem(const Filename& filename) {
        long lVar1 = GetVolumeSerialNumber(this);
        long lVar2 = GetVolumeSerialNumber(filename);
        return lVar1 == lVar2;
    }

    // 0x100cb55d0
    bool Filename::ExcludeFromBackup() const {
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        ID IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar3);
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
        IVar4 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL, "fileURLWithPath:", uVar3);
        uint64_t uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
        IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber, "numberWithBool:", 1);
        uint64_t uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
        uint64_t local_38 = 0;
        bool cVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(
            uVar5, "setResourceValue:forKey:error:", uVar6, *(uint64_t*)PTR__NSURLIsExcludedFromBackupKey_100ee4028,
            &local_38);
        uint64_t uVar7 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(local_38);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
        if (!cVar2) {
            uVar6 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "lastPathComponent");
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            _NSLog(&cf_Errorexcluding__frombackup__, uVar6, uVar7);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
        }
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar7);
        (*(void (*)(...))puVar1)(uVar5);
        (*(void (*)(...))puVar1)(uVar3);
        return cVar2;
    }

} // namespace jag
