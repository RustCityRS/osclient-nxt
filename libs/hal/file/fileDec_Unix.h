// libs/hal/file/fileDec_Unix.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.file

namespace jag {
    // 0x100cb4680
    unsigned short GetFilePermissionMode(const char* str) {
        uint8_t local_98[4];
        unsigned short local_94;

        int iVar2 = _stat_INODE64(str, local_98);
        unsigned short uVar1 = 420;
        if (iVar2 != -1) {
            uVar1 = local_94 & 73 | 420;
        }
        return uVar1;
    }

} // namespace jag
