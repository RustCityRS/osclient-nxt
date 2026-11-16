// libs/oldscape/rs2lib/configdecoder/ObjTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class ObjTypeCustomisation {
    public:
        ObjTypeCustomisation(int);
        ObjTypeCustomisation(shared_ptr<ObjType>);
        ObjTypeCustomisation* Unpack(int, PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        ~ObjTypeCustomisation();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8;    // offset 8
        ushort* field_16; // offset 16
        char _unknown_24[8];
    };

    // 0x10024b8e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ObjTypeCustomisation::~ObjTypeCustomisation(): jumps straight to the base-object destructor

    // 0x10024b8f0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ObjTypeCustomisation::~ObjTypeCustomisation()
    void ObjTypeCustomisation::~ObjTypeCustomisation() {
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10024b920, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::ParamType* placement_new<oldscape::configdecoder::ParamType>(void*)
    ParamType* placement_new<oldscape::configdecoder::ParamType>(void* param_1) {
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::configdecoder::ParamType::ParamType(param_1);
        return param_1;
    }

    // 0x10024b950, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ParamType>* placement_new<ref_counter_shared<oldscape::configdecoder::ParamType>, int, oldscape::configdecoder::ParamType*&>(void*, int&&, oldscape::configdecoder::ParamType*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::configdecoder::ParamType>, int,
                                           oldscape::configdecoder::ParamType*&>(void* param_1, int* param_2,
                                                                                 ParamType** param_3) {
        ref_counter_shared<oldscape::configdecoder::ParamType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
