// libs/game/runetek5/compression/huffman/WordPack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WordPack {
    public:
        ~WordPack();
        WordPack(PacketT<Array<unsigned char>>& arg1);
        int PackUTF8AsCP1252(PacketT<Array<unsigned char>>& arg1, const eastl::string& str);
        uint32_t UnpackCP1252AsUTF8(eastl::string& str, PacketT<Array<unsigned char>>& arg2);

    private:
        Js5ResourceProvider* field_0;
        Js5ArchiveSettings* field_8;
        uint8_t _unknown_16[97];
    };

    // 0x10013c730
    WordPack::~WordPack() {}

    // 0x100143c80
    WordPack::WordPack(PacketT<Array<unsigned char>>& arg1) : Huffman(arg1) {}

} // namespace jag::game
