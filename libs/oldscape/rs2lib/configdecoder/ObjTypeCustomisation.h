// libs/oldscape/rs2lib/configdecoder/ObjTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class ObjTypeCustomisation {
    public:
        ObjTypeCustomisation(int arg1);
        ObjTypeCustomisation(shared_ptr<ObjType> objType);
        ObjTypeCustomisation* Unpack(int arg1, PacketJ<Array<unsigned char>>& packetJ);
        ~ObjTypeCustomisation();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        short* field_16;
        uint8_t _unknown_24[8];
    };

    // 0x10024b8f0
    ObjTypeCustomisation::~ObjTypeCustomisation() {
        field_24.~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10024b920
    oldscape::configdecoder::ParamType* placement_new<oldscape::configdecoder::ParamType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::configdecoder::ParamType();
        return arg1;
    }

    // 0x10024b950
    ref_counter_shared<oldscape::configdecoder::ParamType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::ParamType>, int, oldscape::configdecoder::ParamType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::ParamType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::ParamType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
