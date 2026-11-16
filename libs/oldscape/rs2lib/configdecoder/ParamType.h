// libs/oldscape/rs2lib/configdecoder/ParamType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class ParamType {
    public:
        ~ParamType();
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void PostDecode();
        bool IsStringType();
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        ParamType();
        static int64_t m_pConfigClient;
        static LRUHashCache<ParamType, 64ul, 65ul, false, unsigned long long> m_recentUse;

    private:
        uint16_t field_0;
        uint8_t _unknown_2[2];
        uint32_t field_4;
        uint8_t _unknown_8[32];
        uint8_t field_40;
    };

    // 0x10024b980
    ParamType::ParamType() : field_40(1) {}

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10024b9b0
    ref_counter_shared<oldscape::configdecoder::ParamType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::ParamType* paramType)
        : ref_counter_base() {}

    // 0x10024b9f0
    void ref_counter_shared<oldscape::configdecoder::ParamType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::ParamType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((LanguageMessage*)((long)&(this[3]._vptr)->_dtor + lVar2))->~LanguageMessage();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::ParamType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
