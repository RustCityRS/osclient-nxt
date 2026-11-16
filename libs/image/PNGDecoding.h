// libs/image/PNGDecoding.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class PNGDecoder {
    public:
        LoadFromMemory(RGBAImage&, Array<unsigned char, eastl::allocator> const&);
        ulong LoadFromPacket(RGBAImage&, PacketView&);
    };

    // 0x1002b4c50, 112 bytes, inline, placed by debug map only (low confidence)
    // PNGDecoder::LoadFromMemory(RGBAImage&, Array<unsigned char, eastl::allocator> const&)
    undefined4 PNGDecoder::LoadFromMemory(RGBAImage* param_1, Array* param_2) {
        undefined4 uVar1;
        WrapArray<unsigned char const> local_58[16];
        PacketView local_48;

        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_58, param_2);
        new (&local_48) PacketView(local_58);
        uVar1 = LoadFromPacket(param_1, &local_48);
        local_48.~PacketView();
        return uVar1;
    }

} // namespace jag
