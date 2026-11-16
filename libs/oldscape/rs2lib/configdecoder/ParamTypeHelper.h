// libs/oldscape/rs2lib/configdecoder/ParamTypeHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10024d120, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::SeqType* placement_new<oldscape::configdecoder::SeqType>(void*)
    SeqType* placement_new<oldscape::configdecoder::SeqType>(void* param_1) {
        ___bzero(param_1, 264);
        oldscape::configdecoder::SeqType::SeqType(param_1);
        return param_1;
    }

    // 0x10024d150, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SeqType>* placement_new<ref_counter_shared<oldscape::configdecoder::SeqType>, int, oldscape::configdecoder::SeqType*&>(void*, int&&, oldscape::configdecoder::SeqType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::SeqType>, int, oldscape::configdecoder::SeqType*&>(
        void* param_1, int* param_2, SeqType** param_3) {
        ref_counter_shared<oldscape::configdecoder::SeqType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10024d2c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SeqType>::ref_counter_shared(unsigned long, oldscape::configdecoder::SeqType*): jumps straight to the base-object constructor

    // 0x10024d2d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SeqType>::ref_counter_shared(unsigned long, oldscape::configdecoder::SeqType*)
    void ref_counter_shared<oldscape::configdecoder::SeqType>::ref_counter_shared(ulong param_1, SeqType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7620 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SeqType**)(this + 24) = param_2;
    }

    // 0x10024d310, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SeqType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::SeqType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~SeqType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 264;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10024e650, 80 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::SpotType* placement_new<oldscape::configdecoder::SpotType>(void*)
    SpotType* placement_new<oldscape::configdecoder::SpotType>(void* param_1) {
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 128) = 0;
        oldscape::configdecoder::SpotType::SpotType(param_1);
        return param_1;
    }

    // 0x10024e6a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SpotType>* placement_new<ref_counter_shared<oldscape::configdecoder::SpotType>, int, oldscape::configdecoder::SpotType*&>(void*, int&&, oldscape::configdecoder::SpotType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::SpotType>, int, oldscape::configdecoder::SpotType*&>(
        void* param_1, int* param_2, SpotType** param_3) {
        ref_counter_shared<oldscape::configdecoder::SpotType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class ParamTypeHelper {
    public:
        class ParamVariant;
        UnpackClientParams(PacketJ<Array<unsigned char, eastl::allocator>>&,
                           eastl::hash_map<long long, ParamVariant, eastl::hash<long long>, eastl::equal_to<long long>,
                                           eastl::allocator, false>&);
        int GetParam(eastl::hash_map<long long, ParamVariant, eastl::hash<long long>, eastl::equal_to<long long>,
                                     eastl::allocator, false> const&,
                     int, int);
        basic_string* GetParam(eastl::hash_map<long long, ParamVariant, eastl::hash<long long>,
                                               eastl::equal_to<long long>, eastl::allocator, false> const&,
                               int, eastl::string const&);
    };

    class ParamTypeHelper::ParamVariant {
    public:
        ~ParamVariant();
        ParamVariant();
    };

    // 0x10024c420, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParamTypeHelper::ParamVariant::ParamVariant(): jumps straight to the base-object constructor

    // 0x10024c430, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ParamTypeHelper::ParamVariant::ParamVariant()
    /* jag::graphics::AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor()
    */

    void jag::graphics::AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor() {
        new (&field_8) eastl::string();
    }

} // namespace jag::oldscape::configdecoder
