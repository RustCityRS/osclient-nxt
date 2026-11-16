// libs/game/runetek5/compression/huffman/Huffman.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x10013c8f0
    LoginState::~LoginState() {
        field_448.~LoginState_ReconnectPacket();
        field_296.~LoginState_AllowLoginResult();
        field_136.~JagexConfig();
    }

    // 0x10013c930
    LoginState_ReconnectPacket::~LoginState_ReconnectPacket() {}

    // 0x10013c940
    LoginState_AllowLoginResult::~LoginState_AllowLoginResult() {}

    // 0x10013c950
    LoginState_OneTimeLoginToken::~LoginState_OneTimeLoginToken() {
        field_128.~basic_string();
        field_96.~basic_string();
        field_64.~basic_string();
        field_32.~basic_string();
    }

    // 0x10013c990
    LoginState_Common::~LoginState_Common() {
        field_48->~ClientMessage();
        field_8.~basic_string();
    }

} // namespace jag::oldscape

namespace jag::game {
    class Huffman {
    public:
        ~Huffman();
        Huffman(PacketT<Array<unsigned char>>& arg1);
        void ReadyInit(PacketT<Array<unsigned char>>& arg1);
        unsigned long Ready();
        unsigned int CalculateEncodedLength(const eastl::string& str, unsigned int arg2, unsigned int arg3);
        int Encode(const eastl::string& str, unsigned int arg2, unsigned int arg3, unsigned char* arg4,
                   unsigned long arg5, unsigned int arg6);
        int Decode(const Array<unsigned char>& arg1, unsigned int arg2, eastl::string& str, unsigned int arg4,
                   unsigned int arg5);
        unsigned int Encode<Array<unsigned char>>(const eastl::string& str, unsigned int arg2, unsigned int arg3,
                                                  Array<unsigned char>& arg4, unsigned int arg5);

    private:
        Js5ResourceProvider* field_0;
        Js5ArchiveSettings* field_8;
        uint8_t _unknown_16[104];
    };

    // 0x10013c750
    Huffman::~Huffman() {
        field_112.~vector();
        field_80.~vector();
        field_48.~vector();
        field_16.~basic_string();
    }

    // 0x1005f96d0
    unsigned int Huffman::Encode<Array<unsigned char, BucketAllocatorEASTL>>(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str, unsigned int arg2, unsigned int arg3,
        Array<unsigned char, BucketAllocatorEASTL>& arg4, unsigned int arg5) {
        unsigned long arg5_00 = arg4.data();
        unsigned int uVar1 = arg4.end();
        uVar1 = Encode((basic_string<char, BucketAllocatorEASTL>*)this, (unsigned int)str, arg2,
                       (unsigned char*)(unsigned long)arg3, arg5_00, uVar1);
        return uVar1;
    }

} // namespace jag::game

namespace jag::auth {
    // 0x10013c950: JagexConfig::~JagexConfig() has the same machine code as oldscape::LoginState_OneTimeLoginToken::~LoginState_OneTimeLoginToken()

} // namespace jag::auth
