// libs/graphics/runetek7/fonts/FontData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x1008e7290, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // RuntimeGeneratedFontMetrics::~RuntimeGeneratedFontMetrics(): jumps straight to the base-object destructor

} // namespace jag::graphics

namespace jag {
    // 0x1008e7900, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g1s()
    int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g1s(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar1);
        return (int)*pcVar2;
    }

} // namespace jag
