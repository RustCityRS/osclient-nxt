// libs/oldscape/jagex3/sound/NXTPCMPlayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class NXTPCMPlayer {
    public:
        // virtual methods in vtable order
        virtual ~NXTPCMPlayer();
        virtual void Service();
        virtual void SubclassInit();
        virtual void Open(int arg1);
        virtual void AlreadyWritten();
        virtual void Close();
        virtual void DiscardBufferInner();
        NXTPCMPlayer();
        uint64_t Service_Locked();

    private:
        uint8_t _unknown_8[4];
        int field_12;
        uint8_t _unknown_16[24];
        uint64_t field_40;
        uint8_t _unknown_48[4];
        uint64_t field_52;
        uint64_t field_60;
        mach_header* field_68;
        uint64_t field_76;
        uint8_t _unknown_84[4];
        uint64_t field_88;
        uint8_t _unknown_96[32];
        int field_128;
        uint8_t _unknown_132[52];
        AudioBuffer field_184;
        uint8_t _unknown_404[212];
        int field_616;
        uint8_t _unknown_620[4];
    };

    class NXTPCMPlayerFactory {
    public:
        // virtual methods in vtable order
        virtual NXTPCMPlayerFactory* CreatePCMPlayer();
        virtual ~NXTPCMPlayerFactory();
        NXTPCMPlayerFactory();
    };

    // 0x100126d70
    NXTPCMPlayerFactory::NXTPCMPlayerFactory() : PCMPlayerFactory() {}

    // 0x1002a85d0
    NXTPCMPlayer::~NXTPCMPlayer() {
        ((field_184 + 216))->~AudioBuffer();
        field_184->~AudioBuffer();
    }

} // namespace jag::oldscape::sound
