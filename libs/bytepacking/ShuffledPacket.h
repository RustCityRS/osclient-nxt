// libs/bytepacking/ShuffledPacket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ShuffledPacket2 {
    public:
        void p2<int>(int);
        void p1<int>(int);
        void p3<int>(int);
        void p4<int>(int);
        void g4();
        int g2s();
        void g3s();
        g1();
        int g1s();
        g2();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        ulong field_24; // offset 24
    };

    class ShuffledPacket3 {
    public:
        void p2<int>(int);
        void p1<int>(int);
        void p4<int>(int);
        void g3();
        void g4();
        int g2s();
        void g3s();
        void gArrayBuffer(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, unsigned long);
        g2();
        g1();
        int g1s();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        ulong field_24; // offset 24
    };

    class ShuffledPacket4 {
    public:
        void p1<int>(int);
        void p2<int>(int);
        void p4<int>(int);
        void g3();
        void g4();
        void g4s();
        g2();
        g1();
        int g1s();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        ulong field_24; // offset 24
    };

    class ShuffledPacketFactory {
    public:
        p1();
        p1_alt1();
        p1_alt2();
        p1_alt3();
        p2();
        p4();
        p2_alt1();
        p2_alt2();
        p2_alt3();
        p3_alt1();
        p4_alt1();
        p4_alt2();
        p4_alt3();
        ShuffledPacketFactory(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 16 bytes
        PacketT* field_0;   // offset 0
        undefined8 field_8; // offset 8
    };

    // 0x1000ddd70, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket3::p2<int>(int)
    void ShuffledPacket3::p2<int>(int param_1) {
        p2_alt2(param_1);
    }

    // 0x1000ddd80, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket4::p1<int>(int)
    void ShuffledPacket4::p1<int>(int param_1) {
        p1_alt3(param_1);
    }

    // 0x1000ddd90, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket4::p2<int>(int)
    void ShuffledPacket4::p2<int>(int param_1) {
        p2_alt3(param_1);
    }

    // 0x1000ddda0, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket3::p1<int>(int)
    void ShuffledPacket3::p1<int>(int param_1) {
        p1_alt2(param_1);
    }

    // 0x1000dddb0, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket2::p2<int>(int)
    void ShuffledPacket2::p2<int>(int param_1) {
        p2_alt1(param_1);
    }

    // 0x1000fccd0, 16 bytes, inline, placed by class header (inline)
    // void ShuffledPacket2::p4<int>(int)
    /* void ShuffledPacket2::p4<unsigned int>(unsigned int) */

    void ShuffledPacket2::p4<unsigned int>(uint param_1) {
        p4_alt1(param_1);
    }

    // 0x10018e500, 16 bytes, inline, placed by class header (inline)
    // ShuffledPacket3::gArrayBuffer(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, unsigned long)
    void ShuffledPacket3::gArrayBuffer(PacketT* param_1, ulong param_2) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::gArrayBuffer_alt2<
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, param_1, param_2);
    }

    // 0x10018e510, 16 bytes, inline, placed by class header (inline)
    // ShuffledPacket2::g1()
    undefined1 ShuffledPacket2::g1() {
        undefined1 uVar1;

        uVar1 = g1_alt1();
        return uVar1;
    }

    // 0x10018e520, 16 bytes, inline, placed by class header (inline)
    // ShuffledPacket4::g2()
    undefined2 ShuffledPacket4::g2() {
        undefined2 uVar1;

        uVar1 = g2_alt3();
        return uVar1;
    }

    // 0x10018e5f0, 16 bytes, inline, placed by class header (inline)
    // ShuffledPacket3::g2()
    undefined2 ShuffledPacket3::g2() {
        undefined2 uVar1;

        uVar1 = g2_alt2();
        return uVar1;
    }

    // 0x10018e600, 16 bytes, inline, placed by class header (inline)
    // ShuffledPacket3::g1()
    undefined1 ShuffledPacket3::g1() {
        undefined1 uVar1;

        uVar1 = g1_alt2();
        return uVar1;
    }

} // namespace jag
