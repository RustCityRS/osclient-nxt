// libs/hal/filesystem/native/FileSystem_native_posix_listfiles.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.filesystem

#include "libs/hal/filesystem/FileSystem.h"

namespace jag {
    // 0x100b1ed50
    int FileSystem::GetFileList(const Filename& filename1, eastl::list<filesystem::FileListContents>& fileListContentss,
                                bool arg3, const Filename* filename2) {
        dirent* str;
        int iVar1;
        int* piVar4;
        dirent* dirent;
        uint64_t in_register_00000011;
        stat local_360;
        pair<eastl::fixed_string<char, 16>, unsigned int> local_2b0;
        FileListContents local_180;

        uint32_t local_2b4 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
        uint64_t uVar2 = Filename::operator_cast_to_char_(filename1);
        long lVar3 = _opendir_INODE64(uVar2);
        if (lVar3 == 0) {
            piVar4 = ___error();
            if (*piVar4 == 0) {
                iVar1 = -1;
            } else {
                piVar4 = ___error();
                iVar1 = *piVar4;
            }
        } else {
            if (ms_diskThreadQuit == '\0') {
                do {
                    dirent = (dirent*)_readdir_INODE64(lVar3);
                    if (dirent == nullptr)
                        break;
                    str = dirent + 21;
                    iVar1 = _strcmp((char*)str, ".");
                    if (iVar1 != 0) {
                        iVar1 = _strcmp((char*)str, "..");
                        if (iVar1 != 0) {
                            local_180 = filesystem::FileListContents();
                            if (filename2 == nullptr) {
                                local_2b0 = Filename(str);
                                local_180 = local_2b0;
                            } else {
                                local_180 = *filename2;
                                local_180 /= str;
                            }
                            local_2b0 = Filename(filename1);
                            local_2b0 /= str;
                            uVar2 = Filename::operator_cast_to_char_(&local_2b0);
                            _stat_INODE64(uVar2, &local_360);
                            local_180.field_320 = ConvertAttributes(dirent, &local_360);
                            local_180.field_312 = (Pix32*)ConvertSize(&local_360, &local_360);
                            local_180.field_304 = (Pix32*)ConvertDateTime(&local_360, &local_360);
                            fileListContentss.push_back(local_180);
                            if (((char)local_2b4 != '\0') && ((local_180.field_320 & 8) != 0)) {
                                GetFileList(&local_2b0, fileListContentss, true, (Filename*)&local_180);
                            }
                        }
                    }
                } while (ms_diskThreadQuit == '\0');
            }
            _closedir(lVar3);
            iVar1 = 0;
        }
        return iVar1;
    }

    // 0x100b1f380
    long FileSystem::GetFolderSizeBytes(const Filename& filename, bool arg2) {
        dirent* str;
        int iVar1;
        unsigned int uVar2;
        int* piVar5;
        dirent* dirent;
        long lVar6;
        uint64_t in_register_00000031;
        long lVar7;
        stat local_208;
        pair<eastl::fixed_string<char, 16>, unsigned int> local_168;

        unsigned int local_16c = (unsigned int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2);
        uint64_t uVar3 = Filename::operator_cast_to_char_(filename);
        long lVar4 = _opendir_INODE64(uVar3);
        if (lVar4 == 0) {
            piVar5 = ___error();
            if (*piVar5 == 0) {
                lVar7 = -1;
            } else {
                piVar5 = ___error();
                lVar7 = (long)*piVar5;
            }
        } else {
            if (ms_diskThreadQuit == '\0') {
                local_16c = local_16c ^ 1;
                lVar7 = 0;
                do {
                    dirent = (dirent*)_readdir_INODE64(lVar4);
                    if (dirent == nullptr)
                        break;
                    str = dirent + 21;
                    iVar1 = _strcmp((char*)str, ".");
                    if ((iVar1 != 0) && (iVar1 = _strcmp((char*)str, ".."), iVar1 != 0)) {
                        local_168 = Filename(filename);
                        local_168 /= str;
                        uVar3 = Filename::operator_cast_to_char_(&local_168);
                        _stat_INODE64(uVar3, &local_208);
                        uVar2 = ConvertAttributes(dirent, &local_208);
                        lVar6 = ConvertSize(&local_208, &local_208);
                        lVar7 = lVar6 + lVar7;
                        if ((uVar2 & 8) != 0 && (char)local_16c == '\0') {
                            lVar6 = GetFolderSizeBytes(&local_168, true);
                            lVar7 = lVar7 + lVar6;
                        }
                    }
                } while (ms_diskThreadQuit == '\0');
            } else {
                lVar7 = 0;
            }
            _closedir(lVar4);
        }
        return lVar7;
    }

    // 0x100b1f540
    int ConvertAttributes(const dirent* dirent, const stat* stat) {
        return (unsigned int)(((uint8_t)stat[4] & 128) == 0) + (*(unsigned int*)(dirent + 20) & 4) * 2;
    }

    // 0x100b1f560
    void ConvertSize(const dirent* dirent, const stat* stat) {
        return *(uint64_t*)(dirent + 96);
    }

    // 0x100b1f570
    void ConvertDateTime(const dirent* dirent, const stat* stat) {
        return *(uint64_t*)(dirent + 48);
    }

} // namespace jag
