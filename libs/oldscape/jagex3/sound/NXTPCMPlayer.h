// libs/oldscape/jagex3/sound/NXTPCMPlayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class NXTPCMPlayer {
    public:
        // virtual methods in vtable order
        virtual ~NXTPCMPlayer();
        virtual void Service();
        virtual SubclassInit();
        virtual void Open(int);
        virtual void AlreadyWritten();
        virtual void Close();
        virtual void DiscardBufferInner();
        NXTPCMPlayer();
        Service_Locked();

        // data members, from how the methods use this: 624 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        int field_12; // offset 12
        char _unknown_16[24];
        undefined8 field_40; // offset 40
        char _unknown_48[4];
        undefined8 field_52;   // offset 52
        undefined8 field_60;   // offset 60
        mach_header* field_68; // offset 68
        undefined8 field_76;   // offset 76
        char _unknown_84[4];
        undefined8 field_88; // offset 88
        char _unknown_96[32];
        int field_128; // offset 128
        char _unknown_132[52];
        AudioBuffer field_184; // offset 184
        char _unknown_404[212];
        int field_616; // offset 616
        char _unknown_620[4];
    };

    class NXTPCMPlayerFactory {
    public:
        // virtual methods in vtable order
        virtual NXTPCMPlayerFactory* CreatePCMPlayer();
        virtual ~NXTPCMPlayerFactory();
        NXTPCMPlayerFactory();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100126d50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // NXTPCMPlayerFactory::NXTPCMPlayerFactory(): jumps straight to the base-object constructor

    // 0x100126d70, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // NXTPCMPlayerFactory::NXTPCMPlayerFactory()
    void NXTPCMPlayerFactory::NXTPCMPlayerFactory() {
        new (this) PCMPlayerFactory();
        field_0 = PTR_vtable_100ee8960 + 16;
    }

    // 0x1002a7590, 16 bytes, complete-object destructor, inline, placed by class name
    // NXTPCMPlayer::~NXTPCMPlayer(): jumps straight to the base-object destructor

    // 0x1002a75a0, 32 bytes, deleting destructor, inline, placed by class name
    // NXTPCMPlayer::~NXTPCMPlayer()
    void NXTPCMPlayer::~NXTPCMPlayer() {
        ~NXTPCMPlayer(this);
        operator_delete(this);
    }

    // 0x1002a85d0, 64 bytes, base-object destructor, inline, placed by class name
    // NXTPCMPlayer::~NXTPCMPlayer()
    void NXTPCMPlayer::~NXTPCMPlayer() {
        field_0 = &PTR__NXTPCMPlayer_100ef9ba8;
        ((field_184 + 216))->~AudioBuffer();
        field_184->~AudioBuffer();
        ~PCMPlayer();
    }

} // namespace jag::oldscape::sound
