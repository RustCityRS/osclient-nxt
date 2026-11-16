// libs/graphics/runetek7/fonts/FontData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1008e7900
    int PacketReaderMixin<PacketT<Array<unsigned char>>>::g1s() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return (int)*pcVar1;
    }

} // namespace jag
