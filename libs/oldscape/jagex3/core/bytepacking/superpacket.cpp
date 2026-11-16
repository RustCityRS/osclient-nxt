// libs/oldscape/jagex3/core/bytepacking/superpacket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "superpacket.h"

namespace jag::oldscape::core {
    // 0x1000e2f20: SuperPacket::SetEnc(Isaac&) has the same machine code as SystemSettings::SetModeGame(ModeGame const*)

    // 0x100348650
    void SuperPacket::GBitStart() {
        auto local_20 = std::make_unique<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit, SuperPacket&>(*this);
        field_32 = local_20;
    }

    // 0x100348730
    void SuperPacket::gBit(int arg1) {
        ((Bit*)field_32.operator->())->gBit(arg1);
    }

    // 0x100348870
    void SuperPacket::BitsLeft(int arg1) {
        ((Bit*)field_32.operator->())->bitsLeft(arg1);
    }

    // 0x1003488b0
    void SuperPacket::GBitEnd() {
        field_32.reset(nullptr);
    }

} // namespace jag::oldscape::core
