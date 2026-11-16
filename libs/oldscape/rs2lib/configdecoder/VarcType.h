// libs/oldscape/rs2lib/configdecoder/VarcType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag {
    // 0x100251c00
    ref_counter_shared_trivial<oldscape::configdecoder::VarcType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarcType* varcType)
        : ref_counter_base() {}

    // 0x100252230
    ref_counter_shared_trivial<oldscape::configdecoder::VarnBitType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarnBitType>, int,
                  oldscape::configdecoder::VarnBitType*&>(void* arg1, int&& arg2,
                                                          oldscape::configdecoder::VarnBitType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarnBitType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100252260
    ref_counter_shared_trivial<oldscape::configdecoder::VarnBitType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarnBitType* varnBitType)
        : ref_counter_base() {}

    // 0x100252530
    ref_counter_shared_trivial<oldscape::configdecoder::VarnType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarnType>, int,
                  oldscape::configdecoder::VarnType*&>(void* arg1, int&& arg2,
                                                       oldscape::configdecoder::VarnType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarnType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100252560
    ref_counter_shared_trivial<oldscape::configdecoder::VarnType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarnType* varnType)
        : ref_counter_base() {}

    // 0x100252ff0
    ref_counter_shared_trivial<oldscape::configdecoder::VarpType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarpType>, int,
                  oldscape::configdecoder::VarpType*&>(void* arg1, int&& arg2,
                                                       oldscape::configdecoder::VarpType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VarpType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100253020
    ref_counter_shared_trivial<oldscape::configdecoder::VarpType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VarpType* varpType)
        : ref_counter_base() {}

    // 0x100253650
    ref_counter_shared_trivial<oldscape::configdecoder::VeccType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VeccType>, int,
                  oldscape::configdecoder::VeccType*&>(void* arg1, int&& arg2,
                                                       oldscape::configdecoder::VeccType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::VeccType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100253680
    ref_counter_shared_trivial<oldscape::configdecoder::VeccType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::VeccType* veccType)
        : ref_counter_base() {}

    // 0x100253cb0
    oldscape::configdecoder::DBRowType* placement_new<oldscape::configdecoder::DBRowType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        new (arg1) oldscape::configdecoder::DBRowType();
        return arg1;
    }

    // 0x100253ce0
    ref_counter_shared<oldscape::configdecoder::DBRowType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::DBRowType>, int, oldscape::configdecoder::DBRowType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::DBRowType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::DBRowType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100253ea0
    ref_counter_shared<oldscape::configdecoder::DBRowType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::DBRowType* dbRowType)
        : ref_counter_base() {}

    // 0x100253ee0
    void ref_counter_shared<oldscape::configdecoder::DBRowType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::DBRowType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((DBRowType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~DBRowType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::DBRowType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 56;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100257560
    oldscape::configdecoder::DBTableType* placement_new<oldscape::configdecoder::DBTableType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::configdecoder::DBTableType();
        return arg1;
    }

    // 0x100257590
    ref_counter_shared<oldscape::configdecoder::DBTableType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::DBTableType>, int,
                  oldscape::configdecoder::DBTableType*&>(void* arg1, int&& arg2,
                                                          oldscape::configdecoder::DBTableType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::DBTableType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class VarcType {
    public:
        void Init(jagex3::Js5* js5);
        shared_ptr<midi2::MidiPlayerMainThread>* List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        VarcType();
        static int64_t m_pConfigClient;
        static LRUHashCache<VarcType, 64ul, 65ul, false, unsigned long long> m_recentUse;

        uint8_t _unknown_0[1];
    };

    // 0x100251be0
    VarcType::VarcType() {
        *this = (VeccType)0;
    }

} // namespace jag::oldscape::configdecoder

namespace jag::graphics {
    // 0x100251bd0: TextFlags::TextFlags() has the same machine code as oldscape::configdecoder::VarcType::VarcType()

} // namespace jag::graphics
