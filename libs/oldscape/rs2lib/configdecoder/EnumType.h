// libs/oldscape/rs2lib/configdecoder/EnumType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class EnumType {
    public:
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        unsigned int GetNumOptions();
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        EnumType();
        ~EnumType();
        static int64_t m_pConfigClient;
        static LRUHashCache<EnumType, 64ul, 65ul, false, unsigned long long> m_recentUse;

    private:
        unsigned short field_0;
        unsigned short field_2;
        uint8_t _unknown_4[36];
        uint32_t field_40;
        unsigned int m_numOptions;
        uint8_t _unknown_48[56];
    };

    // 0x100280210
    EnumType::EnumType() : field_8(*((eastl::string*)&constants::text::null)), m_numOptions(0) {}

    // 0x100280350
    EnumType::~EnumType() {
        field_96.~Array();
        field_72.~Array();
        field_48.~Array();
        field_8.~basic_string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002802b0
    ref_counter_shared<oldscape::configdecoder::EnumType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::EnumType* enumType)
        : ref_counter_base() {}

    // 0x1002802f0
    void ref_counter_shared<oldscape::configdecoder::EnumType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::EnumType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((EnumType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~EnumType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::EnumType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 120;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
