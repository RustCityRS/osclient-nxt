// libs/oldscape/rs2lib/configdecoder/ParamTypeHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10024d120
    oldscape::configdecoder::SeqType* placement_new<oldscape::configdecoder::SeqType>(void* arg1) {
        ___bzero(arg1, 264);
        new (arg1) oldscape::configdecoder::SeqType();
        return arg1;
    }

    // 0x10024d150
    ref_counter_shared<oldscape::configdecoder::SeqType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::SeqType>, int, oldscape::configdecoder::SeqType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::SeqType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::SeqType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10024d2d0
    ref_counter_shared<oldscape::configdecoder::SeqType>::ref_counter_shared(unsigned long arg1,
                                                                             oldscape::configdecoder::SeqType* seqType)
        : ref_counter_base() {}

    // 0x10024d310
    void ref_counter_shared<oldscape::configdecoder::SeqType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::SeqType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((SeqType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~SeqType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::SeqType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 264;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10024e650
    oldscape::configdecoder::SpotType* placement_new<oldscape::configdecoder::SpotType>(void* arg1) {
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
        *(uint64_t*)((long)arg1 + 128) = 0;
        new (arg1) oldscape::configdecoder::SpotType();
        return arg1;
    }

    // 0x10024e6a0
    ref_counter_shared<oldscape::configdecoder::SpotType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::SpotType>, int, oldscape::configdecoder::SpotType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::SpotType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::SpotType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class ParamTypeHelper {
    public:
        class ParamVariant;
        void UnpackClientParams(PacketJ<Array<unsigned char>>& packetJ, eastl::hash_map<long long, ParamVariant>& arg2);
        int GetParam(const eastl::hash_map<long long, ParamVariant>& arg1, int arg2, int arg3);
        eastl::string* GetParam(const eastl::hash_map<long long, ParamVariant>& arg1, int arg2,
                                const eastl::string& str);
    };

    class ParamTypeHelper::ParamVariant {
    public:
        ~ParamVariant();
        ParamVariant();
    };

    // 0x10024c430
    ParamTypeHelper::ParamVariant::ParamVariant() {
        new (&field_8) eastl::string();
    }

} // namespace jag::oldscape::configdecoder
