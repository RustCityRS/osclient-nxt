// projects/osclient/ProtShuffleIncludes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class SuperShuffledPacketFactory {
    public:
        void gArrayBuffer_alt2();
        void gStringCP1252ToUTF8();
        void pStringNoConversion();
        void pStringUTF8ToCP1252();
        void g1();
        void g2();
        void g3();
        void g4();
        void gBit();
        void g1_alt1();
        void g1_alt2();
        void g1_alt3();
        void g2_alt1();
        void g2_alt2();
        void g2_alt3();
        void g3_alt1();
        void g3_alt2();
        void g3_alt3();
        void g4_alt1();
        void g4_alt2();
        void g4_alt3();
        SuperShuffledPacketFactory(core::SuperPacket& arg1);
        SuperShuffledPacketFactory(core::SuperPacket& superPacket);
        void gSmarts();

    private:
        sqlite3** field_0;
        uint64_t field_8;
    };

    // 0x10018e5d0
    void SuperShuffledPacketFactory::gSmarts() {
        ShuffledPacketFactory::p2_alt2();
    }

} // namespace jag::oldscape
