// libs/oldscape/rs2lib/configdecoder/IdkType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class IdkType {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        unsigned long CheckModel();
        auto GetModelNoCheck();
        unsigned long CheckHead();
        IdkType* GetHeadNoCheck();
        void ResetCache();
        IdkType();
        ~IdkType();
        static int64_t m_pConfigClient;
        static int64_t m_pModels;
        static int64_t m_numDefinitions;
        static LRUHashCache<IdkType, 64ul, 65ul, false, unsigned long long> m_recentUse;

    private:
        unsigned int field_0;
        uint8_t _unknown_4[124];
        uint32_t field_128;
        uint32_t field_132;
        uint32_t field_136;
        uint32_t field_140;
        uint32_t field_144;
        uint8_t field_148;
        uint8_t _unknown_149[3];
    };

    // 0x100283700
    IdkType::IdkType()
        : field_0(4294967295), field_128(4294967295), field_132(4294967295), field_136(4294967295),
          field_140(4294967295), field_144(4294967295), field_148(0) {}

    // 0x100283870
    IdkType::~IdkType() {
        field_104.~Array();
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
        field_8.~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002837d0
    ref_counter_shared<oldscape::configdecoder::IdkType>::ref_counter_shared(unsigned long arg1,
                                                                             oldscape::configdecoder::IdkType* idkType)
        : ref_counter_base() {}

    // 0x100283810
    void ref_counter_shared<oldscape::configdecoder::IdkType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::IdkType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((IdkType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~IdkType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::IdkType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 152;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
