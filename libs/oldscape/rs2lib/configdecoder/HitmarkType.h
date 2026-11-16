// libs/oldscape/rs2lib/configdecoder/HitmarkType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100282890
    ref_counter_shared<oldscape::configdecoder::HitmarkType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::HitmarkType* hitmarkType)
        : ref_counter_base() {}

    // 0x1002828d0
    void ref_counter_shared<oldscape::configdecoder::HitmarkType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::HitmarkType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((HitmarkType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~HitmarkType();
                    prVar1 =
                        (ref_counter_shared<oldscape::configdecoder::HitmarkType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 120;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100282fa0
    ref_counter_shared_trivial<oldscape::configdecoder::HuntType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HuntType>, int,
                  oldscape::configdecoder::HuntType*&>(void* arg1, int&& arg2,
                                                       oldscape::configdecoder::HuntType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::HuntType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100282fd0
    ref_counter_shared_trivial<oldscape::configdecoder::HuntType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::HuntType* huntType)
        : ref_counter_base() {}

    // 0x100283680
    oldscape::configdecoder::IdkType* placement_new<oldscape::configdecoder::IdkType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 128) = 0;
        *(uint64_t*)((long)arg1 + 136) = 0;
        *(uint64_t*)((long)arg1 + 112) = 0;
        *(uint64_t*)((long)arg1 + 120) = 0;
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
        *(uint64_t*)((long)arg1 + 144) = 0;
        new (arg1) oldscape::configdecoder::IdkType();
        return arg1;
    }

    // 0x1002836d0
    ref_counter_shared<oldscape::configdecoder::IdkType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::IdkType>, int, oldscape::configdecoder::IdkType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::IdkType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::IdkType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class HitmarkType {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        auto GetMultiHitmark();
        auto GetString(int arg1);
        auto GetIconSprite();
        auto GetBackgroundSprite();
        auto GetBackgroundLeftSprite();
        auto GetBackgroundRightSprite();
        auto GetFont();
        void ResetCache();
        HitmarkType();
        ~HitmarkType();
        static int64_t m_pConfigClient;
        static int64_t m_pSprites;
        static int64_t m_pFontMetrics;
        static int64_t m_numDefinitions;
        static LRUHashCache<HitmarkType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>
            m_spriteCache; // = LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache")
        static LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long> m_fontCache;
        static int64_t m_dataNotReady;

    private:
        uint8_t _unknown_0[4];
        int field_4;
        uint32_t field_8;
        unsigned int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        int field_36;
        unsigned int field_40;
        uint8_t _unknown_44[36];
        unsigned int field_80;
        int field_84;
        uint8_t _unknown_88[24];
        unsigned int field_112;
        unsigned int field_116;
        uint8_t _unknown_120[4];
    };

    // 0x1002827e0
    HitmarkType::HitmarkType()
        : field_4(-1), field_8(16777215), field_12(70), field_16(-1), field_20(-1), field_24(-1), field_28(-1),
          field_32(0), field_36(0), field_40(4294967295) {

        new (&field_48) eastl::string("");
        field_80 = 4294967295;
        field_84 = 0;
        new (&field_88) Array<int>();
        field_112 = 4294967295;
        field_116 = 4294967295;
    }

    // 0x100282930
    HitmarkType::~HitmarkType() {
        field_88.~Array();
        field_48.~basic_string();
    }

} // namespace jag::oldscape::configdecoder
