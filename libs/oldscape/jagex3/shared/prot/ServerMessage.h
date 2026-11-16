// libs/oldscape/jagex3/shared/prot/ServerMessage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::shared {
    class ServerMessage {
    public:
        ServerMessage* operator=(ServerMessage&& serverMessage);
        ServerMessage();
        ~ServerMessage();
        ServerMessage(ServerMessage&& serverMessage);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[12];
    };

    // 0x1000bbc50
    ServerMessage* ServerMessage::operator=(ServerMessage&& serverMessage) {
        field_0 = serverMessage.field_0;
        field_8 = serverMessage.field_8;
        return this;
    }

    // 0x100126500
    ServerMessage::ServerMessage() {
        new (&field_8) core::SuperPacket();
    }

    // 0x1001265f0
    ServerMessage::ServerMessage(ServerMessage&& serverMessage)
        : field_0(serverMessage.field_0), field_8(serverMessage.field_8) {}

    // 0x100126610
    ServerMessage::~ServerMessage() {
        field_8.~SuperPacket();
    }

} // namespace jag::oldscape::shared

namespace jag::oldscape::jagex3 {
    // 0x1000bbc80
    auto LockFreeStackData<ServerConnectionWorkItem>::Reverse() {
        auto result;
        ReturnValue RVar1;

        if (&result == nullptr) {
            return nullptr;
        }
        ReturnValue RVar2 = (ReturnValue)0;
        do {
            RVar1 = result;
            result = RVar2;
            RVar2 = (ReturnValue)&result;
            &result = (ReturnValue*)RVar1;
        } while (RVar1 != (ReturnValue)0);
        return (ReturnValue*)RVar2;
    }

} // namespace jag::oldscape::jagex3
