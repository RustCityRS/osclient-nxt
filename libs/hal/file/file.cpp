// libs/hal/file/file.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.file

#include "file.h"

namespace jag {
    // 0x100d9e9e0, 4 bytes, __const
    File::DEFAULT_CREATE_MODE = 1538;

    // 0x100d9e9e4, 4 bytes, __const
    File::DEFAULT_OPEN_MODE = 2;

    // 0x100d9e9e8, 4 bytes, __const
    File::READONLY_OPEN_MODE = 0;

    // 0x100d9e9ec, 4 bytes, __const
    File::DEFAULT_SHARE_MODE = 0;

    // 0x100d9e9f0, 4 bytes, __const
    File::TEXT_CREATE_MODE = 1538;

    // 0x100d9e9f4, 44 bytes, __const
    File::TEXT_OPEN_MODE = {
        2.802597e-45f, 0, 2.0f, 176.0f, 2816.0f, 0, 0, 0, 176.0f, 0, 2816.0f,
    };

    // 0x100b10aa0: the linker folded this into ClientSocket::SetErrorCode(Error*, int), which has identical code
    File::SetErrorCode(Error*, int);

    // 0x100cb46c0, 176 bytes, placed by class name
    // File::open(int, Error*)
    bool File::open(int param_1, Error* param_2) {
        uint uVar1;
        char* pcVar2;
        int* piVar3;

        if (field_0 != 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle == -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 22,
                (char*)0);
        }
        SetErrorCode(param_2, 0);
        pcVar2 = (char*)field_8->GetName();
        uVar1 = GetFilePermissionMode(pcVar2);
        pcVar2 = (char*)field_8->GetName();
        uVar1 = _open(pcVar2, param_1, (ulong)uVar1 & 65535);
        if (uVar1 == 4294967295) {
            piVar3 = ___error();
            SetErrorCode(param_2, *piVar3);
        } else {
            field_0 = uVar1;
        }
        return uVar1 != 4294967295;
    }

    // 0x100cb4770, 160 bytes, placed by class name
    // File::create(Error*)
    bool File::create(Error* param_1) {
        uint uVar1;
        char* pcVar2;
        int* piVar3;

        if (field_0 != 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle == -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 37,
                (char*)0);
        }
        SetErrorCode(param_1, 0);
        pcVar2 = (char*)field_8->GetName();
        uVar1 = GetFilePermissionMode(pcVar2);
        pcVar2 = (char*)field_8->GetName();
        uVar1 = _open(pcVar2, 1538, (ulong)uVar1 & 65535);
        if (uVar1 == 4294967295) {
            piVar3 = ___error();
            SetErrorCode(param_1, *piVar3);
        } else {
            field_0 = uVar1;
        }
        return uVar1 != 4294967295;
    }

    // 0x100cb4810, 80 bytes, placed by class name
    // File::close(Error*)
    bool File::close(Error* param_1) {
        int iVar1;
        bool bVar2;

        bVar2 = false;
        SetErrorCode(param_1, 0);
        if (field_0 != 4294967295) {
            iVar1 = _close(field_0);
            SetErrorCode(param_1, iVar1);
            field_0 = 4294967295;
            bVar2 = iVar1 == 0;
        }
        return bVar2;
    }

    // 0x100cb4860, 144 bytes, placed by class name
    // File::length(Error*) const
    off_t File::length(Error* param_1) {
        off_t oVar1;
        off_t oVar2;
        int* piVar3;

        if (field_0 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 66,
                "Tried to get length of invalid file");
        }
        oVar1 = _lseek(field_0, 0, 1);
        oVar2 = _lseek(field_0, 0, 2);
        if (oVar2 < 0) {
            piVar3 = ___error();
            SetErrorCode(param_1, *piVar3);
        } else {
            _lseek(field_0, oVar1, 0);
        }
        return oVar2;
    }

    // 0x100cb48f0, 128 bytes, placed by class name
    // File::seek(long, int, Error*) const
    bool File::seek(long param_1, int param_2, Error* param_3) {
        off_t oVar1;
        int* piVar2;

        if (field_0 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 84,
                "Tried to seek in invalid file");
        }
        oVar1 = _lseek(field_0, param_1, param_2);
        if (oVar1 == -1) {
            piVar2 = ___error();
            SetErrorCode(param_3, *piVar2);
        }
        return oVar1 != -1;
    }

    // 0x100cb4970, 208 bytes, placed by class name
    // File::read(eastl::vector<unsigned char, eastl::allocator>&, unsigned int, unsigned int, Error*) const
    ssize_t File::read(vector* param_1, uint param_2, uint param_3, Error* param_4) {
        uint uVar1;
        ulong uVar2;
        void* pvVar3;
        size_t sVar4;
        ssize_t sVar5;
        int* piVar6;

        if (field_0 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 97,
                "Tried to read from invalid file");
        }
        uVar2 = param_1->size();
        if (uVar2 < param_2 + param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "offset + readBytes <= targetBuffer.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 98,
                (char*)0);
        }
        SetErrorCode(param_4, 0);
        uVar1 = field_0;
        pvVar3 = (void*)eastl::vector<unsigned char, eastl::allocator>::operator[](
            (vector<unsigned char, eastl::allocator>*)param_1, (ulong)param_3);
        sVar4 = param_1->size();
        sVar5 = _read(uVar1, pvVar3, sVar4);
        if (sVar5 < 0) {
            piVar6 = ___error();
            SetErrorCode(param_4, *piVar6);
            sVar5 = 0;
        }
        return sVar5;
    }

    // 0x100cb4a80, 144 bytes, placed by class name
    // File::read(char*, unsigned int, unsigned int, Error*) const
    ssize_t File::read(char* param_1, uint param_2, uint param_3, Error* param_4) {
        ssize_t sVar1;
        int* piVar2;

        if (field_0 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 112,
                "Tried to read from invalid file");
        }
        SetErrorCode(param_4, 0);
        sVar1 = _read(field_0, param_1 + param_3, (ulong)param_2);
        if (sVar1 < 0) {
            piVar2 = ___error();
            SetErrorCode(param_4, *piVar2);
            sVar1 = 0;
        }
        return sVar1;
    }

    // 0x100cb4b10, 144 bytes, placed by class name
    // File::write(char const*, unsigned int, Error*) const
    ssize_t File::write(char* param_1, uint param_2, Error* param_3) {
        ssize_t sVar1;
        int* piVar2;

        if (field_0 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 125,
                "Tried to write in invalid file");
        }
        SetErrorCode(param_3, 0);
        sVar1 = _write(field_0, param_1, (ulong)param_2);
        if (sVar1 != (int)param_2) {
            piVar2 = ___error();
            SetErrorCode(param_3, *piVar2);
            if (sVar1 < 0) {
                sVar1 = 0;
            }
        }
        return sVar1;
    }

    // 0x100cb4ba0, 32 bytes, placed by class name
    // File::tell() const
    void File::tell() {
        _lseek(field_0, 0, 1);
    }

    // 0x100cb4bc0, 96 bytes, placed by class name
    // File::lock(long, long, Error*) const
    bool File::lock(long param_1, long param_2, Error* param_3) {
        int iVar1;
        int* piVar2;
        long local_30[3];

        local_30[2] = 12884901888;
        local_30[1] = 1;
        local_30[0] = param_1;
        iVar1 = _fcntl(field_0, 8, local_30);
        if (iVar1 != 0) {
            piVar2 = ___error();
            SetErrorCode(param_3, *piVar2);
        }
        return iVar1 == 0;
    }

    // 0x100cb4c20, 96 bytes, placed by class name
    // File::unlock(long, long, Error*) const
    bool File::unlock(long param_1, long param_2, Error* param_3) {
        int iVar1;
        int* piVar2;
        long local_30[3];

        local_30[2] = 8589934592;
        local_30[1] = 1;
        local_30[0] = param_1;
        iVar1 = _fcntl(field_0, 8, local_30);
        if (iVar1 != 0) {
            piVar2 = ___error();
            SetErrorCode(param_3, *piVar2);
        }
        return iVar1 == 0;
    }

    // 0x100cb4c80, 96 bytes, placed by class name
    // File::islocked(long, long, Error*) const
    undefined8 File::islocked(long param_1, long param_2, Error* param_3) {
        int iVar1;
        undefined4 extraout_var;
        int* piVar2;
        undefined8 uVar3;
        long local_28[2];
        short sStack_14;
        undefined8 local_18;

        local_18 = 12884901888;
        local_28[1] = 1;
        local_28[0] = param_1;
        iVar1 = _fcntl(field_0, 7, local_28);
        if (iVar1 == 0) {
            uVar3 = CONCAT71((int7)(CONCAT44(extraout_var, iVar1) >> 8), sStack_14 != 2);
        } else {
            piVar2 = ___error();
            SetErrorCode(param_3, *piVar2);
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100cb4ce0, 448 bytes, placed by class name and debug map
    // File::readline() const
    File* File::readline() {
        char cVar1;
        ulong uVar2;
        undefined8 uVar3;
        ulong uVar4;
        File* in_RSI;
        long lVar5;
        eastl::string local_460[32];
        long local_440;
        char local_438[1024];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (in_RSI->field_0 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FileHandle != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/file.cpp", 18,
                      "Tried to read from invalid file");
        }
        local_440 = tell(in_RSI);
        uVar2 = read(in_RSI, local_438, 1024, 0, (Error*)0);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                cVar1 = local_438[uVar4];
                if ((cVar1 == '\r') || (cVar1 == '\n')) {
                    new (this) eastl::string();
                    assign(local_438, uVar4);
                    lVar5 = uVar4 + 1;
                    if ((cVar1 == '\r') && (local_438[uVar4 + 1] == '\n')) {
                        lVar5 = uVar4 + 2;
                    }
                    seek(in_RSI, lVar5 + local_440, 0, (Error*)0);
                    if ((cVar1 == '\n') || (cVar1 == '\r'))
                        goto LAB_100cb4e48;
                }
                uVar4 = uVar4 + 1;
            } while (uVar2 != uVar4);
        }
        eastl::string::basic_string(local_460);
        eastl::string::assign(local_460, local_438, uVar2);
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/file.cpp",
                            49, "readline() could not find a line in the first 1024 bytes");
        new (this) eastl::string(local_460);
        eastl::string::~basic_string(local_460);
    LAB_100cb4e48:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100cb54d0, 256 bytes, placed by debug map only (low confidence)
    // GetVolumeSerialNumber(Filename const&)
    undefined4 GetVolumeSerialNumber(Filename* param_1) {
        char cVar1;
        int iVar2;
        char* pcVar3;
        undefined4 uVar4;
        statvfs local_280[4];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::Filename(local_150, param_1);
        while (true) {
            cVar1 = local_150->Exists();
            if (cVar1 != '\0')
                break;
            cVar1 = local_150->IsEmpty();
            if (cVar1 != '\0')
                break;
            local_280->GetParentPath();
            Filename::operator=(local_150, (Filename*)local_280);
            local_280->~pair();
        }
        pcVar3 = (char*)local_150->GetName();
        iVar2 = _statvfs(pcVar3, local_280);
        uVar4 = 0;
        if (iVar2 == 0) {
            uVar4 = (undefined4)local_280[0].f_fsid;
        }
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4;
    }

} // namespace jag
