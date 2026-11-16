// projects/osclient/OldscapeToNxtJs5Index.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::js5 {
    class OldscapeToNxtJs5Index {
    public:
        OldscapeToNxtJs5Index(jagex3::Js5 const&);
        ~OldscapeToNxtJs5Index();

        // data members, from how the methods use this: 249 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[28];
        undefined4 field_32; // offset 32
        undefined1 field_36; // offset 36
        char _unknown_37[3];
        uint field_40; // offset 40
        char _unknown_44[92];
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        char _unknown_152[97];
    };

    // 0x1001b23b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // OldscapeToNxtJs5Index::~OldscapeToNxtJs5Index(): jumps straight to the base-object destructor

} // namespace jag::oldscape::js5

namespace jag {
    // 0x1001b2ac0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarType>* placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarType>, int, oldscape::configdecoder::OldscapeVarType*&>(void*, int&&, oldscape::configdecoder::OldscapeVarType*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarType>, int,
                                           oldscape::configdecoder::OldscapeVarType*&>(void* param_1, int* param_2,
                                                                                       OldscapeVarType** param_3) {
        ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::ref_counter_shared(param_1, (long)*param_2,
                                                                                         *param_3);
        return param_1;
    }

} // namespace jag
