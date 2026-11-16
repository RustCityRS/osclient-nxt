// libs/core/utils/BitUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100010f60
    int FindClearLSB(unsigned int* arg1) {
        unsigned int uVar1 = *arg1;
        int iVar2 = 0;
        if (uVar1 != 0) {
            for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
        }
        int iVar3 = -1;
        if (uVar1 != 0) {
            iVar3 = iVar2;
        }
        *arg1 = uVar1 - 1 & uVar1;
        return iVar3;
    }

} // namespace jag

namespace jag::oldscape::highlight {
    // 0x100011210
    unsigned long UniqueStaticEntityKey(int arg1, int arg2) {
        return (long)arg2 | (unsigned long)(unsigned int)arg1 << 32;
    }

} // namespace jag::oldscape::highlight
