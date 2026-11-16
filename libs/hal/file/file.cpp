// libs/hal/file/file.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.file

#include "file.h"

namespace jag {
    // 0x100d9e9e0
    int32_t File::DEFAULT_CREATE_MODE = 1538;

    // 0x100d9e9e4
    int32_t File::DEFAULT_OPEN_MODE = 2;

    // 0x100d9e9e8
    int32_t File::READONLY_OPEN_MODE = 0;

    // 0x100d9e9ec
    int32_t File::DEFAULT_SHARE_MODE = 0;

    // 0x100d9e9f0
    int32_t File::TEXT_CREATE_MODE = 1538;

    // 0x100d9e9f4
    float File::TEXT_OPEN_MODE[11] = {
        2.802597e-45f, 0, 2.0f, 176.0f, 2816.0f, 0, 0, 0, 176.0f, 0, 2816.0f,
    };

    // 0x100b10aa0: File::SetErrorCode(Error*, int) has the same machine code as ClientSocket::SetErrorCode(Error*, int)

    // 0x100cb46c0
    bool File::open(int arg1, Error* error) {
        unsigned int* puVar4;
        int arg2;

        if (field_0 != -1) {
            LogAssert(
                "m_FileHandle == -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 22,
                nullptr);
        }
        SetErrorCode((File*)error, nullptr, (int)error);
        auto pcVar3 = field_8.GetName();
        unsigned int uVar1 = GetFilePermissionMode(pcVar3);
        pcVar3 = field_8.GetName();
        int iVar2 = _open(pcVar3, arg1, (unsigned long)uVar1 & 65535);
        if (iVar2 == -1) {
            puVar4 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar4, arg2);
        } else {
            field_0 = iVar2;
        }
        return iVar2 != -1;
    }

    // 0x100cb4770
    bool File::create(Error* error) {
        unsigned int* puVar4;
        int in_EDX;
        int arg2;

        if (field_0 != -1) {
            LogAssert(
                "m_FileHandle == -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 37,
                nullptr);
        }
        SetErrorCode((File*)error, nullptr, in_EDX);
        auto pcVar3 = field_8.GetName();
        unsigned int uVar1 = GetFilePermissionMode(pcVar3);
        pcVar3 = field_8.GetName();
        int iVar2 = _open(pcVar3, 1538, (unsigned long)uVar1 & 65535);
        if (iVar2 == -1) {
            puVar4 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar4, arg2);
        } else {
            field_0 = iVar2;
        }
        return iVar2 != -1;
    }

    // 0x100cb4810
    bool File::close(Error* error) {
        unsigned int uVar1;
        int in_EDX;
        int arg2;

        bool bVar2 = false;
        SetErrorCode((File*)error, nullptr, in_EDX);
        if (field_0 != -1) {
            uVar1 = close(field_0);
            SetErrorCode((File*)error, (Error*)(unsigned long)uVar1, arg2);
            field_0 = -1;
            bVar2 = uVar1 == 0;
        }
        return bVar2;
    }

    // 0x100cb4860
    off_t File::length(Error* error) const {
        unsigned int* puVar3;
        int arg2;

        if (field_0 == -1) {
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 66,
                "Tried to get length of invalid file");
        }
        auto oVar1 = _lseek(field_0, 0, 1);
        auto oVar2 = _lseek(field_0, 0, 2);
        if (oVar2 < 0) {
            puVar3 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar3, arg2);
        } else {
            _lseek(field_0, oVar1, 0);
        }
        return oVar2;
    }

    // 0x100cb48f0
    bool File::seek(long arg1, int arg2, Error* error) const {
        unsigned int* puVar2;
        int arg2_00;

        if (field_0 == -1) {
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 84,
                "Tried to seek in invalid file");
        }
        auto oVar1 = _lseek(field_0, arg1, arg2);
        if (oVar1 == -1) {
            puVar2 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar2, arg2_00);
        }
        return oVar1 != -1;
    }

    // 0x100cb4970
    ssize_t File::read(eastl::vector<unsigned char>& arg1, unsigned int arg2, unsigned int arg3, Error* error) const {
        unsigned int* puVar5;
        int arg2_00;
        uint8_t auVar6[12];

        if (field_0 == -1) {
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 97,
                "Tried to read from invalid file");
        }
        auVar6 = arg1.size();
        if (auVar6._0_8_ < (unsigned long)(arg2 + arg3)) {
            LogAssert(
                "offset + readBytes <= targetBuffer.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 98,
                nullptr);
        }
        SetErrorCode((File*)error, nullptr, auVar6._8_4_);
        int iVar1 = field_0;
        void* pvVar2 = &arg1[(unsigned long)arg3];
        size_t sVar3 = arg1.size();
        auto sVar4 = _read(iVar1, pvVar2, sVar3);
        if (sVar4 < 0) {
            puVar5 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar5, arg2_00);
            sVar4 = 0;
        }
        return sVar4;
    }

    // 0x100cb4a80
    ssize_t File::read(char* str, unsigned int arg2, unsigned int arg3, Error* error) const {
        unsigned int* puVar2;
        int arg2_00;

        if (field_0 == -1) {
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 112,
                "Tried to read from invalid file");
        }
        SetErrorCode((File*)error, nullptr, arg2);
        auto sVar1 = _read(field_0, str + arg3, (unsigned long)arg2);
        if (sVar1 < 0) {
            puVar2 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar2, arg2_00);
            sVar1 = 0;
        }
        return sVar1;
    }

    // 0x100cb4b10
    ssize_t File::write(const char* str, unsigned int arg2, Error* error) const {
        unsigned int* puVar2;
        int arg2_00;

        if (field_0 == -1) {
            LogAssert(
                "m_FileHandle != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/osx/fileDec_OSX.h", 125,
                "Tried to write in invalid file");
        }
        SetErrorCode((File*)error, nullptr, arg2);
        auto sVar1 = _write(field_0, str, (unsigned long)arg2);
        if (sVar1 != (int)arg2) {
            puVar2 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar2, arg2_00);
            if (sVar1 < 0) {
                sVar1 = 0;
            }
        }
        return sVar1;
    }

    // 0x100cb4ba0
    void File::tell() const {
        _lseek(field_0, 0, 1);
    }

    // 0x100cb4bc0
    bool File::lock(long arg1, long arg2, Error* error) const {
        unsigned int* puVar2;
        int arg2_00;
        long local_30[3];

        local_30[2] = 12884901888;
        local_30[1] = 1;
        local_30[0] = arg1;
        int iVar1 = _fcntl(field_0, 8, local_30);
        if (iVar1 != 0) {
            puVar2 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar2, arg2_00);
        }
        return iVar1 == 0;
    }

    // 0x100cb4c20
    bool File::unlock(long arg1, long arg2, Error* error) const {
        unsigned int* puVar2;
        int arg2_00;
        long local_30[3];

        local_30[2] = 8589934592;
        local_30[1] = 1;
        local_30[0] = arg1;
        int iVar1 = _fcntl(field_0, 8, local_30);
        if (iVar1 != 0) {
            puVar2 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar2, arg2_00);
        }
        return iVar1 == 0;
    }

    // 0x100cb4c80
    uint64_t File::islocked(long arg1, long arg2, Error* error) const {
        uint32_t extraout_var;
        unsigned int* puVar2;
        uint64_t uVar3;
        int arg2_00;
        long local_28[2];
        short sStack_14;

        uint64_t local_18 = 12884901888;
        local_28[1] = 1;
        local_28[0] = arg1;
        int iVar1 = _fcntl(field_0, 7, local_28);
        if (iVar1 == 0) {
            uVar3 = (((uint64_t)((int64_t)((((uint64_t)extraout_var << 32) | (uint32_t)iVar1) >> 8)) << 8) |
                     (uint8_t)(sStack_14 != 2));
        } else {
            puVar2 = (unsigned int*)___error();
            SetErrorCode((File*)error, (Error*)(unsigned long)*puVar2, arg2_00);
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100cb4ce0
    auto File::readline() const {
        char cVar1;
        unsigned long arg2_00;
        long lVar2;
        char local_438[1024];

        if (field_0 == -1) {
            LogAssert("m_FileHandle != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/file.cpp", 18,
                      "Tried to read from invalid file");
        }
        long local_440 = tell();
        unsigned long arg2 = read(local_438, 1024, 0, nullptr);
        if (arg2 != 0) {
            arg2_00 = 0;
            do {
                cVar1 = local_438[arg2_00];
                if ((cVar1 == '\r') || (cVar1 == '\n')) {
                    auto result;
                    result.assign(local_438, arg2_00);
                    lVar2 = arg2_00 + 1;
                    if ((cVar1 == '\r') && (local_438[arg2_00 + 1] == '\n')) {
                        lVar2 = arg2_00 + 2;
                    }
                    seek(lVar2 + local_440, 0, nullptr);
                    if ((cVar1 == '\n') || (cVar1 == '\r'))
                        goto LAB_100cb4e48;
                }
                arg2_00 = arg2_00 + 1;
            } while (arg2 != arg2_00);
        }
        eastl::string local_460;
        eastl::string::assign(&local_460, local_438, arg2);
        (logger::default_logger())
            ->Log(false, 3, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/file/file.cpp",
                  49, "readline() could not find a line in the first 1024 bytes");
        new (&result) eastl::string(local_460);
    LAB_100cb4e48:
        return result;
    }

    // 0x100cb54d0
    void GetVolumeSerialNumber(const Filename& filename) {
        bool cVar1;
        statvfs local_280;

        Filename local_150(filename);
        while (true) {
            cVar1 = local_150.Exists();
            if (cVar1)
                break;
            cVar1 = local_150.IsEmpty();
            if (cVar1)
                break;
            local_280 = local_150.GetParentPath();
            local_150 = local_280;
        }
        int iVar2 = _statvfs(local_150.GetName(), &local_280);
        uint32_t uVar4 = 0;
        if (iVar2 == 0) {
            uVar4 = (uint32_t)local_280[0].f_fsid;
        }
        return uVar4;
    }

} // namespace jag
