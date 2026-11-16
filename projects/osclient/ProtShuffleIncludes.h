// projects/osclient/ProtShuffleIncludes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class SuperShuffledPacketFactory {
    public:
        gArrayBuffer_alt2();
        gStringCP1252ToUTF8();
        pStringNoConversion();
        pStringUTF8ToCP1252();
        g1();
        g2();
        g3();
        g4();
        gBit();
        g1_alt1();
        g1_alt2();
        g1_alt3();
        g2_alt1();
        g2_alt2();
        g2_alt3();
        g3_alt1();
        g3_alt2();
        g3_alt3();
        g4_alt1();
        g4_alt2();
        g4_alt3();
        SuperShuffledPacketFactory(core::SuperPacket&);
        void gSmarts();

        // data members, from how the methods use this: 16 bytes
        PacketT* field_0;   // offset 0
        undefined8 field_8; // offset 8
    };

    // 0x1001866d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SuperShuffledPacketFactory::SuperShuffledPacketFactory(core::SuperPacket&): jumps straight to the base-object constructor

    // 0x10018e5d0, 16 bytes, inline, placed by class header (inline)
    // SuperShuffledPacketFactory::gSmarts()
    void SuperShuffledPacketFactory::gSmarts() {
        p2_alt2();
    }

} // namespace jag::oldscape
