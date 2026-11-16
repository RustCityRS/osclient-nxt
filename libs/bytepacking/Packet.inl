// libs/bytepacking/Packet.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1000bcc80
    void PacketT<Array<unsigned char>>::p1<oldscape::shared::LoginProt::ID>(oldscape::shared::LoginProt::ID id) {
        pT<signed char>(this, (schar)id);
    }

} // namespace jag
