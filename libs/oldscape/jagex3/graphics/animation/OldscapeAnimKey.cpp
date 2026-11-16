// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKey.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OldscapeAnimKey.h"

namespace jag::oldscape::graphics::animation {
    // 0x10012d160: OldscapeAnimKey::~OldscapeAnimKey() has the same machine code as FoundObject::~FoundObject()

    // 0x100321100
    void OldscapeAnimKey::LoadFromPacket(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint32_t in_register_00000034;

        PacketReaderMixin<PacketT<Array<unsigned char>>>* packetReaderMixin =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                (uint32_t)arg2);
        short sVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                           (uint32_t)arg2))
                          ->g2s();
        *(int*)(packetJ + 16) = (int)sVar1;
        uint32_t uVar2 = packetReaderMixin->gFloat();
        *(uint32_t*)(packetJ + 20) = uVar2;
        uVar2 = packetReaderMixin->gFloat();
        *(uint32_t*)(packetJ + 24) = uVar2;
        uVar2 = packetReaderMixin->gFloat();
        *(uint32_t*)(packetJ + 28) = uVar2;
        uVar2 = packetReaderMixin->gFloat();
        *(uint32_t*)(packetJ + 32) = uVar2;
        uVar2 = packetReaderMixin->gFloat();
        *(uint32_t*)(packetJ + 36) = uVar2;
    }

} // namespace jag::oldscape::graphics::animation
