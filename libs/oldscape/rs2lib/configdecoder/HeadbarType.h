// libs/oldscape/rs2lib/configdecoder/HeadbarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100281ee0
    ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::HeadbarType* headbarType)
        : ref_counter_base() {}

    // 0x100282770
    oldscape::configdecoder::HitmarkType* placement_new<oldscape::configdecoder::HitmarkType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 112) = 0;
        new (arg1) oldscape::configdecoder::HitmarkType();
        return arg1;
    }

    // 0x1002827b0
    ref_counter_shared<oldscape::configdecoder::HitmarkType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::HitmarkType>, int,
                  oldscape::configdecoder::HitmarkType*&>(void* arg1, int&& arg2,
                                                          oldscape::configdecoder::HitmarkType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::HitmarkType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class HeadbarType {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52);
        auto List(long long arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        auto GetFullSprite();
        auto GetEmptySprite();
        void ResetCache();
        void PostDecode();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        HeadbarType();
        static int64_t m_dataNotReady;
        static LRUHashCache<HeadbarType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>
            m_spriteCache; // = LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache")
        static int64_t m_pSprites;
        static int64_t m_pConfigClient;

    private:
        uint8_t _unknown_0[4];
        unsigned int field_4;
        unsigned int field_8;
        unsigned int field_12;
        unsigned int field_16;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        int field_32;
        int field_36;
        unsigned int field_40;
        unsigned int field_44;
        uint8_t _unknown_48[4];
    };

    // 0x100281e90
    HeadbarType::HeadbarType() : field_4(4294967295), field_8(255), field_12(255), field_16(4294967295) {
        *(uint64_t*)&field_20 = 300647710721;
        field_28 = 4294967295;
        field_32 = -1;
        field_36 = -1;
        field_40 = 30;
        field_44 = 0;
    }

} // namespace jag::oldscape::configdecoder
