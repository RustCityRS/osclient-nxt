// libs/bytepacking/PacketMixins.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1000bbfe0, 48 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart1or2EncTest(Isaac&)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart1or2EncTest(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, Isaac* param_1) {
        char cVar1;
        char cVar2;
        char* pcVar3;
        undefined8 unaff_RBX;

        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        cVar1 = *pcVar3;
        cVar2 = param_1->PollNextValue();
        return CONCAT71((int7)((ulong)unaff_RBX >> 8), (byte)(cVar1 - cVar2) >> 7) & 4294967295;
    }

} // namespace jag
