// libs/game/runetek5/compression/huffman/Huffman.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x10013c8e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // LoginState::~LoginState(): jumps straight to the base-object destructor

    // 0x10013c8f0, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LoginState::~LoginState()
    void LoginState::~LoginState() {
        (&field_448)->~LoginState_ReconnectPacket();
        (&field_296)->~LoginState_AllowLoginResult();
        (&field_136)->~JagexConfig();
        ~LoginState_Common();
    }

    // 0x10013c930, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LoginState_ReconnectPacket::~LoginState_ReconnectPacket()
    void LoginState_ReconnectPacket::~LoginState_ReconnectPacket() {
        ~ServerMessage();
    }

    // 0x10013c940, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LoginState_AllowLoginResult::~LoginState_AllowLoginResult()
    void LoginState_AllowLoginResult::~LoginState_AllowLoginResult() {
        ~array();
    }

    // 0x10013c950, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LoginState_OneTimeLoginToken::~LoginState_OneTimeLoginToken()
    /* jag::auth::JagexConfig::~JagexConfig() */

    void jag::auth::JagexConfig::~JagexConfig() {
        (&field_128)->~basic_string();
        (&field_96)->~basic_string();
        (&field_64)->~basic_string();
        (&field_32)->~basic_string();
        ~basic_string();
    }

    // 0x10013c990, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LoginState_Common::~LoginState_Common()
    void LoginState_Common::~LoginState_Common() {
        field_48->~ClientMessage();
        (&field_8)->~basic_string();
    }

} // namespace jag::oldscape

namespace jag::game {
    class Huffman {
    public:
        ~Huffman();
        Huffman(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ReadyInit(PacketT<Array<unsigned char, eastl::allocator>>&);
        ulong Ready();
        uint CalculateEncodedLength(eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned int, unsigned int);
        int Encode(eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned int, unsigned int, unsigned char*,
                   unsigned long, unsigned int);
        int Decode(Array<unsigned char, eastl::allocator> const&, unsigned int,
                   eastl::basic_string<char, BucketAllocatorEASTL>&, unsigned int, unsigned int);
        unsigned int
        Encode<Array<unsigned char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL> const&,
                                                           unsigned int, unsigned int,
                                                           Array<unsigned char, BucketAllocatorEASTL>&, unsigned int);

        // data members, from how the methods use this: 120 bytes
        Js5ResourceProvider* field_0; // offset 0
        Js5ArchiveSettings* field_8;  // offset 8
        char _unknown_16[32];
        undefined1 field_48; // offset 48
        char _unknown_49[31];
        undefined1 field_80; // offset 80
        char _unknown_81[31];
        undefined1 field_112; // offset 112
        char _unknown_113[7];
    };

    // 0x10013c740, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Huffman::~Huffman(): jumps straight to the base-object destructor

    // 0x10013c750, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // Huffman::~Huffman()
    void Huffman::~Huffman() {
        (&field_112)->~vector();
        (&field_80)->~vector();
        (&field_48)->~vector();
        (&field_16)->~basic_string();
    }

    // 0x1005f96d0, 112 bytes, inline, placed by class name
    // unsigned int Huffman::Encode<Array<unsigned char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned int, unsigned int, Array<unsigned char, BucketAllocatorEASTL>&, unsigned int)
    uint Huffman::Encode<Array<unsigned char, BucketAllocatorEASTL>>(basic_string* param_1, uint param_2, uint param_3,
                                                                     Array* param_4, uint param_5) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)param_4->data();
        uVar2 = param_4->end();
        return Encode(this, param_1, param_2, param_3, puVar1, uVar2, param_5);
    }

} // namespace jag::game

namespace jag::auth {
    // 0x10013c950: the linker folded this into oldscape::LoginState_OneTimeLoginToken::~LoginState_OneTimeLoginToken(), which has identical code
    JagexConfig::~JagexConfig();

} // namespace jag::auth
