// libs/core/utils/BitUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100010f60, 32 bytes, inline, placed by debug map only (low confidence)
    // FindClearLSB(unsigned int*)
    /* graphics::FindClearLSB(unsigned int*) */

    int graphics::FindClearLSB(uint* param_1) {
        uint uVar1;
        int iVar2;
        int iVar3;

        uVar1 = *param_1;
        iVar2 = 0;
        if (uVar1 != 0) {
            for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
        }
        iVar3 = -1;
        if (uVar1 != 0) {
            iVar3 = iVar2;
        }
        *param_1 = uVar1 - 1 & uVar1;
        return iVar3;
    }

} // namespace jag

namespace jag::oldscape::highlight {
    // 0x100011210, 16 bytes, inline, placed by debug map only (low confidence)
    // UniqueStaticEntityKey(int, int)
    ulong UniqueStaticEntityKey(int param_1, int param_2) {
        return (long)param_2 | (ulong)(uint)param_1 << 32;
    }

} // namespace jag::oldscape::highlight
