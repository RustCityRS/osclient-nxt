// libs/oldscape/jagex3/shared/prot/ClientMessage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::shared {
    class ClientMessage {
    public:
        ClientMessage();
        ClientMessage* operator=(ClientMessage&&);
        ClientMessage* MakeClientMessage();
        ClientMessage(ClientMessage&&);
        ~ClientMessage();
        ClientMessage* MakeClientMessage(ClientProt::ID, Isaac&);
        void GetOrCreatePacketMemory(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, int);
        void ReturnToPool(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&&);

        // data members, from how the methods use this: 64 bytes
        uint field_0; // offset 0
        int field_4;  // offset 4
        char _unknown_8[48];
        undefined4 field_56; // offset 56
        char _unknown_60[4];
    };

    // 0x1000f0f40, 48 bytes, inline, placed by class name and debug map
    // ClientMessage::operator=(ClientMessage&&)
    /* ClientMessage::TEMPNAMEPLACEHOLDERVALUE(ClientMessage&&)
    */

    ClientMessage* ClientMessage::operator=(ClientMessage* param_1) {
        int iVar1;

        iVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        core::SuperPacket::operator=((SuperPacket*)&field_8, (SuperPacket*)&param_1->field_8);
        field_56 = param_1->field_56;
        return this;
    }

    // 0x100111740, 80 bytes, inline, placed by class name
    // ClientMessage::MakeClientMessage()
    ClientMessage* ClientMessage::MakeClientMessage() {
        ClientMessage(this);
        field_0 = 40;
        field_4 = 0;
        field_56 = 0;
        GetOrCreatePacketMemory((PacketJ*)&field_8, 4998);
        return this;
    }

    // 0x1001261f0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientMessage::ClientMessage(ClientMessage&&): jumps straight to the base-object constructor

    // 0x100126200, 48 bytes, base-object constructor, inline, placed by class name
    // ClientMessage::ClientMessage(ClientMessage&&)
    void ClientMessage::ClientMessage(ClientMessage* param_1) {
        int iVar1;

        iVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        new (&field_8, (SuperPacket*)&param_1->field_8) core::SuperPacket();
        field_56 = param_1->field_56;
    }

    // 0x10017cc80, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientMessage::~ClientMessage(): jumps straight to the base-object destructor

    // 0x100196f40, 64 bytes, base-object destructor, inline, placed by class name
    // ClientMessage::~ClientMessage()
    void ClientMessage::~ClientMessage() {
        ReturnToPool((PacketJ*)&field_8);
        (&field_8)->~SuperPacket();
    }

} // namespace jag::oldscape::shared

namespace jag {
    // 0x1000f1020, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket3::p4<int>(int)
    /* void ShuffledPacket3::p4<unsigned int>(unsigned int) */

    void ShuffledPacket3::p4<unsigned int>(uint param_1) {
        p4_alt2(param_1);
    }

    // 0x1000f1030, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket2::p1<int>(int)
    void ShuffledPacket2::p1<int>(int param_1) {
        p1_alt1(param_1);
    }

    // 0x1000f1050, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket2::p3<int>(int)
    void ShuffledPacket2::p3<int>(int param_1) {
        p3_alt1(param_1);
    }

    // 0x1000f1060, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSize2(unsigned short)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ushort param_1) {
        pSize<unsigned short>(this, param_1);
    }

} // namespace jag
