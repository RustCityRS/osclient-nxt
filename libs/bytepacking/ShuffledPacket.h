// libs/bytepacking/ShuffledPacket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ShuffledPacket2 {
    public:
        void p2<int>(int arg1);
        void p1<int>(int arg1);
        void p3<int>(int arg1);
        void p4<int>(int arg1);
        void g4();
        int g2s();
        void g3s();
        uint8_t g1();
        int g1s();
        uint16_t g2();

    private:
        uint8_t _unknown_0[24];
        unsigned long field_24;
    };

    class ShuffledPacket3 {
    public:
        void p2<int>(int arg1);
        void p1<int>(int arg1);
        void p4<int>(int arg1);
        void g3();
        void g4();
        int g2s();
        void g3s();
        void gArrayBuffer(PacketT<Array<unsigned char>>& arg1, unsigned long arg2);
        uint16_t g2();
        uint8_t g1();
        int g1s();

    private:
        uint8_t _unknown_0[24];
        unsigned long field_24;
    };

    class ShuffledPacket4 {
    public:
        void p1<int>(int arg1);
        void p2<int>(int arg1);
        void p4<int>(int arg1);
        void g3();
        void g4();
        void g4s();
        uint16_t g2();
        uint8_t g1();
        int g1s();

    private:
        uint8_t _unknown_0[24];
        unsigned long field_24;
    };

    class ShuffledPacketFactory {
    public:
        void p1();
        void p1_alt1();
        void p1_alt2();
        void p1_alt3();
        void p2();
        void p4();
        void p2_alt1();
        void p2_alt2();
        void p2_alt3();
        void p3_alt1();
        void p4_alt1();
        void p4_alt2();
        void p4_alt3();
        ShuffledPacketFactory(PacketT<Array<unsigned char>>& arg1);

    private:
        sqlite3** field_0;
        uint64_t field_8;
    };

    // 0x1000ddd70
    void ShuffledPacket3::p2<int>(int arg1) {
        p2_alt2(arg1);
    }

    // 0x1000ddd80
    void ShuffledPacket4::p1<int>(int arg1) {
        p1_alt3(arg1);
    }

    // 0x1000ddd90
    void ShuffledPacket4::p2<int>(int arg1) {
        p2_alt3(arg1);
    }

    // 0x1000ddda0
    void ShuffledPacket3::p1<int>(int arg1) {
        p1_alt2(arg1);
    }

    // 0x1000dddb0
    void ShuffledPacket2::p2<int>(int arg1) {
        p2_alt1(arg1);
    }

    // 0x1000fccd0
    void ShuffledPacket2::p4<int>(int arg1) {
        p4_alt1(arg1);
    }

    // 0x10018e500
    void ShuffledPacket3::gArrayBuffer(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, unsigned long arg2) {
        gArrayBuffer_alt2<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(arg1, arg2);
    }

    // 0x10018e510
    uint8_t ShuffledPacket2::g1() {
        return g1_alt1();
    }

    // 0x10018e520
    uint16_t ShuffledPacket4::g2() {
        return g2_alt3();
    }

    // 0x10018e5f0
    uint16_t ShuffledPacket3::g2() {
        return g2_alt2();
    }

    // 0x10018e600
    uint8_t ShuffledPacket3::g1() {
        return g1_alt2();
    }

} // namespace jag
