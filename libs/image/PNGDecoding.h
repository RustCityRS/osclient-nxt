// libs/image/PNGDecoding.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class PNGDecoder {
    public:
        uint32_t LoadFromMemory(RGBAImage& rgbaImage, const Array<unsigned char>& arg2);
        unsigned long LoadFromPacket(RGBAImage& rgbaImage, PacketView& packetView);

        uint8_t _unknown_0[1];
    };

    // 0x1002b4c50
    uint32_t PNGDecoder::LoadFromMemory(RGBAImage& rgbaImage, const Array<unsigned char>& arg2) {
        WrapArray<unsigned char const> local_58;

        local_58.WrapArray<Array<unsigned char>>(rgbaImage);
        PacketView local_48(&local_58);
        uint32_t uVar1 = LoadFromPacket((RGBAImage*)this, &local_48);
        return uVar1;
    }

} // namespace jag
