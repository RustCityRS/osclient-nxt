// libs/oldscape/jagex3/shared/prot/ClientMessage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::shared {
    class ClientMessage {
    public:
        ClientMessage();
        ClientMessage* operator=(ClientMessage&& clientMessage);
        auto MakeClientMessage();
        ClientMessage(ClientMessage&& clientMessage);
        ~ClientMessage();
        auto MakeClientMessage(ClientProt::ID id, Isaac& isaac);
        void GetOrCreatePacketMemory(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void ReturnToPool(PacketJ<Array<unsigned char>>&& packetJ);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[48];
        uint32_t field_56;
        uint8_t _unknown_60[4];
    };

    // 0x1000f0f40
    ClientMessage* ClientMessage::operator=(ClientMessage&& clientMessage) {
        field_0 = clientMessage.field_0;
        field_8 = clientMessage.field_8;
        field_56 = clientMessage.field_56;
        return this;
    }

    // 0x100111740
    auto ClientMessage::MakeClientMessage() {
        auto result;
        ClientMessage(&result);
        result = (ReturnValue)40;
        *(uint32_t*)(&result + 7) = 0;
        GetOrCreatePacketMemory((PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)(&result + 1), 4998);
        return result;
    }

    // 0x100126200
    ClientMessage::ClientMessage(ClientMessage&& clientMessage)
        : field_0(clientMessage.field_0), field_8(clientMessage.field_8), field_56(clientMessage.field_56) {}

    // 0x100196f40
    ClientMessage::~ClientMessage() {
        field_8.~SuperPacket();
    }

} // namespace jag::oldscape::shared

namespace jag {
    // 0x1000f1020
    void ShuffledPacket3::p4<int>(int arg1) {
        p4_alt2(arg1);
    }

    // 0x1000f1030
    void ShuffledPacket2::p1<int>(int arg1) {
        p1_alt1(arg1);
    }

    // 0x1000f1050
    void ShuffledPacket2::p3<int>(int arg1) {
        p3_alt1(arg1);
    }

    // 0x1000f1060
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize2(unsigned short arg1) {
        pSize<unsigned short>(this, arg1);
    }

} // namespace jag
