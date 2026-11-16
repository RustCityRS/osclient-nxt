// libs/oldscape/rs2lib/configdecoder/SpotType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10024e770
    ref_counter_shared<oldscape::configdecoder::SpotType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::SpotType* spotType)
        : ref_counter_base() {}

    // 0x10024e7b0
    void ref_counter_shared<oldscape::configdecoder::SpotType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::SpotType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((SpotType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~SpotType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::SpotType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 136;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10024edd0
    oldscape::configdecoder::StructType* placement_new<oldscape::configdecoder::StructType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::configdecoder::StructType();
        return arg1;
    }

    // 0x10024ee00
    ref_counter_shared<oldscape::configdecoder::StructType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::StructType>, int, oldscape::configdecoder::StructType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::StructType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::StructType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class SpotType {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        auto GetTempModel2(int arg1);
        auto GetBaseModel();
        void ResetCache();
        SpotType();
        ~SpotType();
        static int64_t m_pConfigClient;
        static int64_t m_pModels;
        static LRUHashCache<SpotType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static LRUHashCache<dash3d::ModelLit, 30ul, 31ul, false, unsigned long long> m_modelCache;

    private:
        int field_0;
        unsigned int field_4;
        unsigned int field_8;
        uint8_t _unknown_12[100];
        unsigned int field_112;
        unsigned int field_116;
        unsigned int field_120;
        unsigned int field_124;
        unsigned int field_128;
        uint8_t _unknown_132[4];
    };

    // 0x10024e6d0
    SpotType::SpotType()
        : field_8(4294967295), field_112(128), field_116(128), field_120(0), field_124(0), field_128(0) {}

    // 0x10024e810
    SpotType::~SpotType() {
        field_88.~Array();
        field_64.~Array();
        field_40.~Array();
        field_16.~Array();
    }

} // namespace jag::oldscape::configdecoder
