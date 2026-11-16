// libs/oldscape/jagex3/core/bytepacking/superpacket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::core {
    class SuperPacket {
    public:
        void SetEnc(Isaac& modeGame);
        SuperPacket(SuperPacket&& superPacket);
        SuperPacket* operator=(SuperPacket&& superPacket);
        SuperPacket();
        ~SuperPacket();
        void pHead(int arg1);
        void GBitStart();
        void gBit(int arg1);
        void BitsLeft(int arg1);
        void GBitEnd();

    private:
        uint8_t _unknown_0[24];
        unsigned long field_24;
        uint8_t _unknown_32[8];
        ModeGame* m_pEnc;
    };

    // 0x100126240
    SuperPacket::SuperPacket(SuperPacket&& superPacket)
        : PacketJ(superPacket), field_32(superPacket.field_32), m_pEnc(superPacket.m_pEnc) {}

    // 0x1001263b0
    SuperPacket* SuperPacket::operator=(SuperPacket&& superPacket) {
        *this = superPacket;
        field_32 = superPacket.field_32;
        m_pEnc = superPacket.m_pEnc;
        return this;
    }

    // 0x100126520
    SuperPacket::SuperPacket() : PacketT() {
        field_32.unique_ptr<true, void>();
        m_pEnc = nullptr;
    }

    // 0x100196f90
    SuperPacket::~SuperPacket() {
        field_32.~unique_ptr();
    }

    // 0x100292f10
    void SuperPacket::pHead(int arg1) {
        if (m_pEnc == nullptr) {
            LogAssert("m_pIsaac != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "bytepacking/superpacket.h",
                      24, nullptr);
        }
        p1Isaac<unsigned char>((unsigned char)arg1, *m_pEnc);
    }

} // namespace jag::oldscape::core

namespace jag::oldscape {
    // 0x100126270
    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketJ(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&& packetJ)
        : PacketT(packetJ) {}

    // 0x1001263e0
    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&& packetJ) {
        *this = packetJ;
        return this;
    }

    // 0x100126550
    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketJ() {
        PacketT(this);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100126290
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>&& arg1)
        : Array<unsigned char, BucketAllocatorEASTL>(arg1) {
        *(uint64_t*)(this + 24) = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(arg1 + 24) = 0;
    }

    // 0x100126430
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>* PacketT<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>&& arg1) {
        swap(this, arg1);
        return this;
    }

    // 0x100126450
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::swap(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        eastl::swap<oldscape::graphics::Pix8*>(*((this + 24)), *((arg1 + 24)));
        swap(arg1);
    }

} // namespace jag

// 0x1001266f0
void __libcpp_strchr(const char* str, int arg2) {
    _strchr(str, 10);
}
