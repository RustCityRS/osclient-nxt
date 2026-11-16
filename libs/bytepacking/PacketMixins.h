// libs/bytepacking/PacketMixins.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1000bbfe0
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart1or2EncTest(Isaac& isaac) {
        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        bool cVar1 = *pcVar3;
        bool cVar2 = isaac.PollNextValue();
        return (uint8_t)(cVar1 - cVar2) >> 7 & 4294967295;
    }

} // namespace jag
