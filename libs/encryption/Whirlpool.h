// libs/encryption/Whirlpool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Whirlpool {
    public:
        Whirlpool();
        void Update(const unsigned char* arg1, unsigned long arg2);
        void Final(unsigned char* arg1);
        void processBuffer(NESSIEstruct* nessiEstruct);
        void NESSIEinit(NESSIEstruct* nessiEstruct);
        void NESSIEadd(const unsigned char* arg1, unsigned long arg2, NESSIEstruct* nessiEstruct);
        void NESSIEfinalize(NESSIEstruct* nessiEstruct, unsigned char* arg2);
        static int32_t C0[512]; // initialised in its definition
        static int32_t C1[512]; // initialised in its definition
        static int32_t C2[512]; // initialised in its definition
        static int32_t C3[512]; // initialised in its definition
        static int32_t C4[512]; // initialised in its definition
        static int32_t C5[512]; // initialised in its definition
        static int32_t C6[512]; // initialised in its definition
        static int32_t C7[512]; // initialised in its definition
        static int32_t rc[24];  // initialised in its definition

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        NESSIEstruct field_32;
        uint8_t _unknown_33[31];
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        unsigned int field_96;
        int field_100;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
        uint64_t field_160;
    };

    // 0x1009e0330
    void Whirlpool::Update(const unsigned char* arg1, unsigned long arg2) {
        NESSIEadd(arg1, arg2 << 3, this);
    }

    // 0x1009e0360
    void Whirlpool::Final(unsigned char* arg1) {
        NESSIEfinalize(this, arg1);
    }

    // 0x1009e0380
    auto PacketT<Array<unsigned char>>::ToString() const {
        auto result;

        auto enumOptionToggle2 = size();
        int arg2 = eastl::min<graphics::GraphicsQuality>(20, enumOptionToggle2);
        ToString(&result, this, 0, arg2);
        return result;
    }

    // 0x1009f6c80
    Whirlpool::Whirlpool() {
        NESSIEinit(this);
    }

} // namespace jag
