// libs/hal/file/fileDec_Unix.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.file

namespace jag {
    // 0x100cb4680, 64 bytes, placed by debug map only (low confidence)
    // GetFilePermissionMode(char const*)
    ushort GetFilePermissionMode(char* param_1) {
        ushort uVar1;
        int iVar2;
        undefined1 local_98[4];
        ushort local_94;

        iVar2 = _stat_INODE64(param_1, local_98);
        uVar1 = 420;
        if (iVar2 != -1) {
            uVar1 = local_94 & 73 | 420;
        }
        return uVar1;
    }

} // namespace jag
