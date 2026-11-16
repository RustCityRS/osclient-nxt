// libs/oldscape/jagex3/shared/prot/ServerMessage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::shared {
    class ServerMessage {
    public:
        ServerMessage* operator=(ServerMessage&&);
        ServerMessage();
        ~ServerMessage();
        ServerMessage(ServerMessage&&);

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x1000bbc50, 48 bytes, inline, placed by class name and debug map
    // ServerMessage::operator=(ServerMessage&&)
    /* ServerMessage::TEMPNAMEPLACEHOLDERVALUE(ServerMessage&&)
    */

    ServerMessage* ServerMessage::operator=(ServerMessage* param_1) {
        field_0 = param_1->field_0;
        core::SuperPacket::operator=((SuperPacket*)&field_8, (SuperPacket*)&param_1->field_8);
        return this;
    }

    // 0x1000bc090, 16 bytes, complete-object constructor, inline, placed by class name
    // ServerMessage::ServerMessage(): jumps straight to the base-object constructor

    // 0x1000bc120, 16 bytes, complete-object destructor, inline, placed by class name
    // ServerMessage::~ServerMessage(): jumps straight to the base-object destructor

    // 0x100126500, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ServerMessage::ServerMessage()
    /* ClientMessage::ClientMessage() */

    void ClientMessage::ClientMessage() {
        new (&field_8) core::SuperPacket();
    }

    // 0x1001265e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ServerMessage::ServerMessage(ServerMessage&&): jumps straight to the base-object constructor

    // 0x1001265f0, 32 bytes, base-object constructor, inline, placed by class name
    // ServerMessage::ServerMessage(ServerMessage&&)
    void ServerMessage::ServerMessage(ServerMessage* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (SuperPacket*)&param_1->field_8) core::SuperPacket();
    }

    // 0x100126610, 16 bytes, base-object destructor, inline, placed by class name
    // ServerMessage::~ServerMessage()
    void ServerMessage::~ServerMessage() {
        (&field_8)->~SuperPacket();
    }

} // namespace jag::oldscape::shared

namespace jag::oldscape::jagex3 {
    // 0x1000bbc80, 48 bytes, inline, placed by debug map only (low confidence)
    // LockFreeStackData<ServerConnectionWorkItem>::Reverse()
    /* LockFreeStackData<sound::Mixer::QueuedOp>::Reverse() */

    LockFreeStackData<sound::Mixer::QueuedOp>* LockFreeStackData<sound::Mixer::QueuedOp>::Reverse() {
        LockFreeStackData<sound::Mixer::QueuedOp>* pLVar1;
        LockFreeStackData<sound::Mixer::QueuedOp>* pLVar2;

        if (this == (LockFreeStackData<sound::Mixer::QueuedOp>*)0) {
            return (LockFreeStackData<sound::Mixer::QueuedOp>*)0;
        }
        pLVar2 = (LockFreeStackData<sound::Mixer::QueuedOp>*)0;
        do {
            pLVar1 = *(LockFreeStackData<sound::Mixer::QueuedOp>**)this;
            *(LockFreeStackData<sound::Mixer::QueuedOp>**)this = pLVar2;
            pLVar2 = this;
            this = pLVar1;
        } while (pLVar1 != (LockFreeStackData<sound::Mixer::QueuedOp>*)0);
        return pLVar2;
    }

} // namespace jag::oldscape::jagex3
