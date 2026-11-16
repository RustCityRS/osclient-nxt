// libs/oldscape/jagex3/sound/envelope.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class Envelope {
    public:
        ~Envelope();
        Envelope();
        void Load(PacketJ<Array<unsigned char>>& packetJ);
        void LoadPoints(PacketJ<Array<unsigned char>>& packetJ);
        void LoadUncompressed(PacketJ<Array<unsigned char>>& packetJ);
        void SaveUncompressed(PacketJ<Array<unsigned char>>& packetJ);
        void GenInit();
        int GenNext(int arg1);

    private:
        uint32_t field_0;
        uint32_t field_4;
        unsigned int field_8;
        uint8_t field_12;
        uint8_t _unknown_13[3];
        int field_16;
        unsigned int field_20;
        int field_24;
        int field_28;
        int field_32;
        unsigned int field_36;
        uint8_t _unknown_40[32];
    };

    // 0x100137f90
    Envelope::~Envelope() {
        field_64.~Array();
        field_40.~Array();
    }

} // namespace jag::oldscape::sound
