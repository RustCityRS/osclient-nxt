// libs/oldscape/jagex3/js5/MultiCursorPacketHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "MultiCursorPacketHelper.h"

namespace jag::oldscape::jagex3 {
    // 0x1002bdb40
    MultiCursorPacketHelper::MultiCursorPacketHelper(const unsigned char* arg1, unsigned long arg2) {

        new (this) eastl::hash_map<unsigned long, unsigned long>(local_30);
        field_56.PacketT(arg1, arg2);
    }

    // 0x1002bdbe0
    void MultiCursorPacketHelper::SetPos(unsigned long arg1, unsigned long arg2) {
        unsigned long* puVar1 = (unsigned long*)(*this)[arg1];
        *puVar1 = arg2;
    }

} // namespace jag::oldscape::jagex3
