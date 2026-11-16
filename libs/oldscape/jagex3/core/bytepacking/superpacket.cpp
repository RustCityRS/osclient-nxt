// libs/oldscape/jagex3/core/bytepacking/superpacket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "superpacket.h"

namespace jag::oldscape::core {
    // 0x1000e2f20: the linker folded this into SystemSettings::SetModeGame(ModeGame const*), which has identical code
    SuperPacket::SetEnc(Isaac&);

    // 0x100348650, 64 bytes, placed by class name and debug map
    // SuperPacket::GBitStart()
    void SuperPacket::GBitStart() {
        undefined1 local_20[8];

        std::make_unique<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit, SuperPacket&>(
            (SuperPacket*)local_20);
        std::unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                        std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>::
        operator=((unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                              std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>*)&field_32,
                  (unique_ptr*)local_20);
        local_20->~unique_ptr();
    }

    // 0x100348730, 48 bytes, placed by class name and debug map
    // SuperPacket::gBit(int)
    void SuperPacket::gBit(int param_1) {
        Bit* this_00;

        this_00 =
            (Bit*)std::unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                                  std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>::
            operator->(
                (unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                            std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>*)&field_32);
        this_00->gBit(param_1);
    }

    // 0x100348870, 48 bytes, placed by class name and debug map
    // SuperPacket::BitsLeft(int)
    void SuperPacket::BitsLeft(int param_1) {
        Bit* this_00;

        this_00 =
            (Bit*)std::unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                                  std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>::
            operator->(
                (unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                            std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>*)&field_32);
        this_00->bitsLeft(param_1);
    }

    // 0x1003488b0, 32 bytes, placed by class name and debug map
    // SuperPacket::GBitEnd()
    void SuperPacket::GBitEnd() {
        (&field_32, (Bit*)0)->reset();
    }

} // namespace jag::oldscape::core
