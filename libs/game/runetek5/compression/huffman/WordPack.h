// libs/game/runetek5/compression/huffman/WordPack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WordPack {
    public:
        ~WordPack();
        WordPack(PacketT<Array<unsigned char, eastl::allocator>>&);
        int PackUTF8AsCP1252(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                             eastl::basic_string<char, BucketAllocatorEASTL> const&);
        UnpackCP1252AsUTF8(eastl::basic_string<char, BucketAllocatorEASTL>&,
                           PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 113 bytes
        Js5ResourceProvider* field_0; // offset 0
        Js5ArchiveSettings* field_8;  // offset 8
        char _unknown_16[97];
    };

    // 0x10013c720, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WordPack::~WordPack(): jumps straight to the base-object destructor

    // 0x10013c730, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // WordPack::~WordPack()
    void WordPack::~WordPack() {
        ~Huffman();
    }

    // 0x100143c60, 16 bytes, complete-object constructor, inline, placed by class name
    // WordPack::WordPack(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100143c80, 16 bytes, base-object constructor, inline, placed by class name
    // WordPack::WordPack(PacketT<Array<unsigned char, eastl::allocator> >&)
    void WordPack::WordPack(PacketT* param_1) {
        new (this) Huffman(param_1);
    }

} // namespace jag::game
