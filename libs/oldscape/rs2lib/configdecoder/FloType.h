// libs/oldscape/rs2lib/configdecoder/FloType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class FloType {
    public:
        void Init(jagex3::Js5* js5);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void PostDecode();
        int* List(int arg1);
        void GetHsl(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3);
        FloType();
        static int64_t m_pConfigClient;
        static vector<std::unique_ptr<FloType>> m_list;
        static int64_t m_defaultWater;

    private:
        uint32_t field_0;
        unsigned int field_4;
        uint8_t field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        int field_16;
        int field_20;
        int field_24;
        uint32_t field_28;
        uint64_t field_32;
    };

    // 0x100280ab0
    FloType::FloType() : field_0(0), field_4(4294967295), field_8(1), field_12(4294967295) {}

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100281e30
    oldscape::configdecoder::HeadbarType* placement_new<oldscape::configdecoder::HeadbarType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::configdecoder::HeadbarType();
        return arg1;
    }

    // 0x100281e60
    ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>, int,
                  oldscape::configdecoder::HeadbarType*&>(void* arg1, int&& arg2,
                                                          oldscape::configdecoder::HeadbarType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
