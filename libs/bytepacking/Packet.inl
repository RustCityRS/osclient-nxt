// libs/bytepacking/Packet.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1000bcc80, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p1<oldscape::shared::LoginProt::ID>(oldscape::shared::LoginProt::ID)
    /* void PacketT<Array<unsigned char, eastl::allocator> >::p1<unsigned long>(unsigned long)
    */

    void PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, ulong param_1) {
        pT<signed char>(this, (int)(char)param_1);
    }

} // namespace jag
