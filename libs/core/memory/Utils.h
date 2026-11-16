// libs/core/memory/Utils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1000550c0
    oldscape::DBTableIndex* placement_new<oldscape::DBTableIndex, oldscape::PacketJ<Array<unsigned char>>&>(
        void* arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        new (arg1) oldscape::DBTableIndex(packetJ);
        return arg1;
    }

    // 0x1000550e0
    MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>*
    placement_new<MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>,
                  MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData*&, oldscape::DBTableIndex*>(
        void* arg1, MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData*& arg2,
        oldscape::DBTableIndex*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>(arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::utils {
    // 0x100bbc990
    unsigned int FindFirstSetBit(unsigned long long arg1) {
        long lVar1 = 0;
        if (arg1 != 0) {
            for (; (arg1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
        }
        return -(unsigned int)(arg1 == 0) | (unsigned int)lVar1;
    }

} // namespace jag::utils
