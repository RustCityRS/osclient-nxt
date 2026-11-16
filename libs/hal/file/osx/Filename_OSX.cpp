// libs/hal/file/osx/Filename_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.file

#include "libs/hal/file/Filename.h"

namespace jag {
    // 0x100cb4ea0, 64 bytes, placed by class name and neighbouring functions
    // Filename::Exists() const
    ulong Filename::Exists() {
        int iVar1;
        char* pcVar2;
        int* piVar3;
        undefined8 unaff_RBX;
        undefined7 uVar5;
        ulong uVar4;

        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = _access(pcVar2, 6);
        uVar5 = (undefined7)((ulong)unaff_RBX >> 8);
        uVar4 = CONCAT71(uVar5, 1);
        if (iVar1 != 0) {
            piVar3 = ___error();
            if (*piVar3 != 13) {
                piVar3 = ___error();
                uVar4 = CONCAT71(uVar5, *piVar3 == 30);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100cb4ee0, 16 bytes, placed by class name and neighbouring functions
    // Filename::CreateFolderForEveryone(Error*) const
    void Filename::CreateFolderForEveryone(Error* param_1) {
        CreateDirectories(this, param_1);
    }

    // 0x100cb4ef0, 288 bytes, placed by class name and neighbouring functions
    // Filename::CreateDirectories(Error*) const
    ulong Filename::CreateDirectories(Error* param_1) {
        char cVar1;
        uint uVar3;
        char* pcVar5;
        int* piVar6;
        undefined8 unaff_RBX;
        ulong uVar7;
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        SetErrorCode(0, param_1);
        cVar1 = Exists(this);
        uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (cVar1 != '\0')
            goto LAB_100cb4fb8;
        GetParentPath(local_158);
        if (GetName(local_158) == 0) {
        LAB_100cb4fa2:
            uVar3 = Exists(this);
            uVar7 = (ulong)uVar3;
        } else {
            cVar1 = Exists(local_158);
            if (cVar1 != '\0') {
            LAB_100cb4f6f:
                cVar1 = Exists(local_158);
                if (cVar1 != '\0') {
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    if (_mkdir(pcVar5, 509) != 0) {
                        piVar6 = ___error();
                        if (*piVar6 != 17) {
                            piVar6 = ___error();
                            SetErrorCode(*piVar6, param_1);
                            uVar7 = 0;
                            goto LAB_100cb4fac;
                        }
                    }
                }
                goto LAB_100cb4fa2;
            }
            cVar1 = CreateDirectories(local_158, param_1);
            if (cVar1 != '\0')
                goto LAB_100cb4f6f;
            uVar7 = 0;
        }
    LAB_100cb4fac:
        local_158->~pair();
    LAB_100cb4fb8:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7 & 4294967295;
    }

    // 0x100cb5030, 192 bytes, placed by class name and neighbouring functions
    // Filename::IsDirectoryEmpty() const
    ulong Filename::IsDirectoryEmpty() {
        int iVar2;
        undefined8 uVar3;
        long lVar4;
        long lVar5;
        undefined8 unaff_R13;
        ulong uVar6;

        if (IsDirectory(this) != '\0') {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar4 = _opendir_INODE64(uVar3);
            if (lVar4 != 0) {
                lVar5 = _readdir_INODE64(lVar4);
                uVar6 = CONCAT71((int7)((ulong)unaff_R13 >> 8), lVar5 == 0);
                if (lVar5 != 0) {
                    do {
                        iVar2 = _strcmp((char*)(lVar5 + 21), ".");
                        if ((iVar2 != 0) && (iVar2 = _strcmp((char*)(lVar5 + 21), ".."), iVar2 != 0))
                            break;
                        lVar5 = _readdir_INODE64(lVar4);
                        uVar6 = CONCAT71((int7)(uVar6 >> 8), lVar5 == 0);
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

    // 0x100cb50f0, 160 bytes, placed by class name and neighbouring functions
    // Filename::Rename(Filename const&, Error*) const
    ulong Filename::Rename(Filename* param_1, Error* param_2) {
        char* pcVar3;
        char* pcVar4;
        int* piVar5;
        ulong uVar6;

        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (_rename(pcVar3, pcVar4) == 0) {
            SetErrorCode(0, param_2);
            uVar6 = CONCAT71((int7)((ulong)pcVar3 >> 8), 1);
        } else {
            piVar5 = ___error();
            if (*piVar5 == 18) {
                uVar6 = 0;
                if (Copy(this, param_1, false, param_2) != '\0') {
                    pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    _unlink(pcVar3);
                    uVar6 = 1;
                }
            } else {
                piVar5 = ___error();
                SetErrorCode(*piVar5, param_2);
                uVar6 = 0;
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x100cb5190, 384 bytes, placed by class name and neighbouring functions
    // Filename::Copy(Filename const&, bool, Error*) const
    ulong Filename::Copy(Filename* param_1, bool param_2, Error* param_3) {
        int iVar2;
        int iVar3;
        char* pcVar4;
        undefined8 uVar5;
        size_t sVar6;
        size_t sVar7;
        int* piVar8;
        undefined7 in_register_00000011;
        ulong uVar9;
        undefined1 local_40d0[4];
        ushort local_40cc;
        undefined1 local_4038[16384];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            if (Exists(param_1) == '\0')
                goto LAB_100cb51dd;
            SetErrorCode(17, param_3);
        } else {
        LAB_100cb51dd:
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = _open(pcVar4, 0, 0);
            if (iVar2 == -1) {
                piVar8 = ___error();
                SetErrorCode(*piVar8, param_3);
            } else {
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                _stat_INODE64(uVar5, local_40d0);
                uVar9 = (ulong)(local_40cc & 73 | 420);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar3 = _open(pcVar4, 1537, uVar9);
                if (iVar3 == -1) {
                    piVar8 = ___error();
                    SetErrorCode(*piVar8, param_3);
                } else {
                    do {
                        sVar6 = _read(iVar2, local_4038, 16384);
                        uVar9 = CONCAT71((int7)(uVar9 >> 8), sVar6 == 0);
                        if (sVar6 == 0)
                            goto LAB_100cb52a1;
                        sVar7 = _write(iVar3, local_4038, sVar6);
                    } while (sVar7 == sVar6);
                    piVar8 = ___error();
                    SetErrorCode(*piVar8, param_3);
                LAB_100cb52a1:
                    _close(iVar3);
                    _close(iVar2);
                }
                if (iVar3 != -1)
                    goto LAB_100cb52e3;
            }
            _close(iVar2);
        }
        uVar9 = 0;
    LAB_100cb52e3:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9 & 18446744073709551361;
    }

    // 0x100cb5310, 384 bytes, placed by class name and neighbouring functions
    // Filename::GetFolderSize() const
    long Filename::GetFolderSize() {
        int iVar1;
        undefined8 uVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        int* piVar6;
        long lVar7;
        undefined1 local_200[96];
        long local_1a0;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = _opendir_INODE64(uVar2);
        if (lVar3 == 0) {
            piVar6 = ___error();
            if (*piVar6 == 0) {
                lVar7 = -1;
            } else {
                piVar6 = ___error();
                lVar7 = (long)*piVar6;
            }
        } else {
            lVar4 = _readdir_INODE64(lVar3);
            if (lVar4 == 0) {
                lVar7 = 0;
            } else {
                lVar7 = 0;
                do {
                    pcVar5 = (char*)(lVar4 + 21);
                    iVar1 = _strcmp(pcVar5, ".");
                    if (iVar1 != 0) {
                        iVar1 = _strcmp(pcVar5, "..");
                        if (iVar1 != 0) {
                            Filename<260, true>(local_168, (fixed_string*)(Filename*)this);
                            operator/=(local_168, pcVar5);
                            pcVar5 = operator_cast_to_char_(local_168);
                            _stat_INODE64(pcVar5, local_200);
                            lVar7 = lVar7 + local_1a0;
                            if ((*(byte*)(lVar4 + 20) & 4) != 0) {
                                lVar4 = GetFolderSize(local_168);
                                lVar7 = lVar7 + lVar4;
                            }
                            local_168->~pair();
                        }
                    }
                    lVar4 = _readdir_INODE64(lVar3);
                } while (lVar4 != 0);
            }
            _closedir(lVar3);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar7;
    }

    // 0x100cb54a0, 48 bytes, placed by class name and neighbouring functions
    // Filename::IsSameFilesystem(Filename const&)
    bool Filename::IsSameFilesystem(Filename* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = GetVolumeSerialNumber(this);
        lVar2 = GetVolumeSerialNumber(param_1);
        return lVar1 == lVar2;
    }

    // 0x100cb55d0, 368 bytes, placed by class name and debug map
    // Filename::ExcludeFromBackup() const
    bool Filename::ExcludeFromBackup() {
        undefined* puVar1;
        char cVar2;
        undefined8 uVar3;
        ID IVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 local_38;

        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar3);
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
        IVar4 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL, "fileURLWithPath:", uVar3);
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
        IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber, "numberWithBool:", 1);
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
        local_38 = 0;
        cVar2 =
            (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "setResourceValue:forKey:error:", uVar6,
                                                  *(undefined8*)PTR__NSURLIsExcludedFromBackupKey_100ee4028, &local_38);
        uVar7 = (*(code*)PTR__objc_retain_100ee9e68)(local_38);
        (*(code*)PTR__objc_release_100ee9e60)(uVar6);
        if (cVar2 == '\0') {
            uVar6 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "lastPathComponent");
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            _NSLog(&cf_Errorexcluding__frombackup__, uVar6, uVar7);
            (*(code*)PTR__objc_release_100ee9e60)(uVar6);
        }
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar7);
        (*(code*)puVar1)(uVar5);
        (*(code*)puVar1)(uVar3);
        return cVar2 != '\0';
    }

} // namespace jag
