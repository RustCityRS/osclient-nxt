// libs/oldscape/jagex3/js5/MultiCursorPacketHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "MultiCursorPacketHelper.h"

namespace jag::oldscape::jagex3 {
    // 0x1002bdb40, 112 bytes, base-object constructor, placed by class name and debug map
    // MultiCursorPacketHelper::MultiCursorPacketHelper(unsigned char const*, unsigned long)
    void MultiCursorPacketHelper::MultiCursorPacketHelper(uchar* param_1, ulong param_2) {
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (this) eastl::hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                   eastl::equal_to<unsigned long>, eastl::allocator, false>(local_30);
        (&field_56, param_1, param_2)->PacketT();
    }

    // 0x1002bdbd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MultiCursorPacketHelper::MultiCursorPacketHelper(unsigned char const*, unsigned long): jumps straight to the base-object constructor

    // 0x1002bdbe0, 32 bytes, placed by class name and debug map
    // MultiCursorPacketHelper::SetPos(unsigned long, unsigned long)
    void MultiCursorPacketHelper::SetPos(ulong param_1, ulong param_2) {
        ulong* puVar1;
        ulong local_18;

        local_18 = param_1;
        puVar1 = (ulong*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_18);
        *puVar1 = param_2;
    }

} // namespace jag::oldscape::jagex3
