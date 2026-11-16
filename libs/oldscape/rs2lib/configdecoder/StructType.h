// libs/oldscape/rs2lib/configdecoder/StructType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10024ee80
    ref_counter_shared<oldscape::configdecoder::StructType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::StructType* structType)
        : ref_counter_base() {}

    // 0x10024eec0
    void ref_counter_shared<oldscape::configdecoder::StructType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::StructType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((StructType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~StructType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::StructType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10024f990
    oldscape::configdecoder::VarBitType* placement_new<oldscape::configdecoder::VarBitType>(void* arg1) {
        *(uint32_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)arg1 = 0;
        return arg1;
    }

    // 0x10024f9b0
    ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>, int,
                  oldscape::configdecoder::VarBitType*&>(void* arg1, int&& arg2,
                                                         oldscape::configdecoder::VarBitType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10024f9e0
    ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarBitType* varBitType)
        : ref_counter_base() {}

    // 0x10024fc30
    ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>, int,
                  oldscape::configdecoder::VarConBitType*&>(void* arg1, int&& arg2,
                                                            oldscape::configdecoder::VarConBitType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10024fc60
    ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarConBitType* varConBitType)
        : ref_counter_base() {}

    // 0x1002506f0
    ref_counter_shared_trivial<oldscape::configdecoder::VarConType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConType>, int,
                  oldscape::configdecoder::VarConType*&>(void* arg1, int&& arg2,
                                                         oldscape::configdecoder::VarConType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarConType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100250720
    ref_counter_shared_trivial<oldscape::configdecoder::VarConType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarConType* varConType)
        : ref_counter_base() {}

    // 0x100250dd0
    ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>, int,
                  oldscape::configdecoder::VarGlobalType*&>(void* arg1, int&& arg2,
                                                            oldscape::configdecoder::VarGlobalType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100250e00
    ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarGlobalType* varGlobalType)
        : ref_counter_base() {}

    // 0x1002510d0
    ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>, int,
                  oldscape::configdecoder::VarObjType*&>(void* arg1, int&& arg2,
                                                         oldscape::configdecoder::VarObjType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100251100
    ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarObjType* varObjType)
        : ref_counter_base() {}

    // 0x100251b90
    oldscape::configdecoder::VarcType* placement_new<oldscape::configdecoder::VarcType>(void* arg1) {
        *(uint8_t*)arg1 = 0;
        new (arg1) oldscape::configdecoder::VeccType();
        return arg1;
    }

    // 0x100251bb0
    ref_counter_shared_trivial<oldscape::configdecoder::VarcType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarcType>, int,
                  oldscape::configdecoder::VarcType*&>(void* arg1, int&& arg2,
                                                       oldscape::configdecoder::VarcType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarcType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class StructType {
    public:
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void PostDecode();
        void GetParam(int arg1, int arg2);
        auto GetParam(int arg1, const eastl::string& str);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        StructType();
        ~StructType();
        static int64_t m_pConfigClient;
        static LRUHashCache<StructType, 64ul, 65ul, false, unsigned long long> m_recentUse;

        uint8_t _unknown_0[16];
    };

    // 0x10024ee30
    StructType::StructType() {

        new (&field_8) eastl::hash_map<long long, ParamTypeHelper::ParamVariant>(local_20);
    }

    // 0x10024ef20
    StructType::~StructType() {
        field_8.~hash_map();
    }

} // namespace jag::oldscape::configdecoder
