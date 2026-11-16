// projects/osclient/OldscapeToNxtJs5Index.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::js5 {
    class OldscapeToNxtJs5Index {
    public:
        OldscapeToNxtJs5Index(const jagex3::Js5& js5);
        ~OldscapeToNxtJs5Index();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[28];
        uint32_t field_32;
        uint8_t field_36;
        uint8_t _unknown_37[3];
        unsigned int field_40;
        uint8_t _unknown_44[92];
        uint64_t field_136;
        uint64_t field_144;
        uint8_t _unknown_152[97];
    };

} // namespace jag::oldscape::js5

namespace jag {
    // 0x1001b2ac0
    ref_counter_shared<oldscape::configdecoder::OldscapeVarType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarType>, int,
                  oldscape::configdecoder::OldscapeVarType*&>(void* arg1, int&& arg2,
                                                              oldscape::configdecoder::OldscapeVarType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::OldscapeVarType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
