// libs/core/memory/Utils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1000550c0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::DBTableIndex* placement_new<oldscape::DBTableIndex, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(void*, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    DBTableIndex*
    jag::placement_new<oldscape::DBTableIndex, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, PacketJ* param_2) {
        oldscape::DBTableIndex::DBTableIndex(param_1, param_2);
        return param_1;
    }

    // 0x1000550e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64> >* placement_new<MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64> >, MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData*&, oldscape::DBTableIndex*>(void*, MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData*&, oldscape::DBTableIndex*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>,
                       MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData*&, oldscape::DBTableIndex*>(
        void* param_1, RefCounterAndData** param_2, DBTableIndex** param_3) {
        MakeSharedPoolRefCounter<oldscape::DBTableIndex,
                                 MakeSharedPool<oldscape::DBTableIndex, 64>>::MakeSharedPoolRefCounter(param_1,
                                                                                                       *param_2,
                                                                                                       *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::utils {
    // 0x100bbc990, 32 bytes, inline, placed by class name
    // FindFirstSetBit(unsigned long long)
    uint FindFirstSetBit(ulonglong param_1) {
        long lVar1;

        lVar1 = 0;
        if (param_1 != 0) {
            for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
        }
        return -(uint)(param_1 == 0) | (uint)lVar1;
    }

} // namespace jag::utils
