// libs/oldscape/rs2lib/configdecoder/FloType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class FloType {
    public:
        void Init(jagex3::Js5*);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void PostDecode();
        List(int);
        void GetHsl(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int);
        FloType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 32 bytes */ m_list;
        static /* 8 bytes */ m_defaultWater;

        // data members, from how the methods use this: 40 bytes
        undefined4 field_0; // offset 0
        uint field_4;       // offset 4
        undefined1 field_8; // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        undefined4 field_28; // offset 28
        undefined8 field_32; // offset 32
    };

    // 0x100280a90, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // FloType::FloType(): jumps straight to the base-object constructor

    // 0x100280ab0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // FloType::FloType()
    void FloType::FloType() {
        field_0 = 0;
        field_4 = 4294967295;
        field_8 = 1;
        field_12 = 4294967295;
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100281e30, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::HeadbarType* placement_new<oldscape::configdecoder::HeadbarType>(void*)
    HeadbarType* placement_new<oldscape::configdecoder::HeadbarType>(void* param_1) {
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::configdecoder::HeadbarType::HeadbarType(param_1);
        return param_1;
    }

    // 0x100281e60, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>, int, oldscape::configdecoder::HeadbarType*&>(void*, int&&, oldscape::configdecoder::HeadbarType*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>, int,
                       oldscape::configdecoder::HeadbarType*&>(void* param_1, int* param_2, HeadbarType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
