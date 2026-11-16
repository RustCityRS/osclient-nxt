// libs/oldscape/rs2lib/configdecoder/StructType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10024ee70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::StructType>::ref_counter_shared(unsigned long, oldscape::configdecoder::StructType*): jumps straight to the base-object constructor

    // 0x10024ee80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::StructType>::ref_counter_shared(unsigned long, oldscape::configdecoder::StructType*)
    void ref_counter_shared<oldscape::configdecoder::StructType>::ref_counter_shared(ulong param_1,
                                                                                     StructType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(StructType**)(this + 24) = param_2;
    }

    // 0x10024eec0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::StructType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::StructType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~StructType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10024f990, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::VarBitType* placement_new<oldscape::configdecoder::VarBitType>(void*)
    VarBitType* placement_new<oldscape::configdecoder::VarBitType>(void* param_1) {
        *(undefined4*)((long)param_1 + 8) = 0;
        *(undefined8*)param_1 = 0;
        return param_1;
    }

    // 0x10024f9b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>, int, oldscape::configdecoder::VarBitType*&>(void*, int&&, oldscape::configdecoder::VarBitType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>, int,
                                                   oldscape::configdecoder::VarBitType*&>(void* param_1, int* param_2,
                                                                                          VarBitType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10024f9d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarBitType*): jumps straight to the base-object constructor

    // 0x10024f9e0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarBitType*)
    void
    ref_counter_shared_trivial<oldscape::configdecoder::VarBitType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                VarBitType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c70 + 16;
    }

    // 0x10024fc30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>, int, oldscape::configdecoder::VarConBitType*&>(void*, int&&, oldscape::configdecoder::VarConBitType*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>, int,
                       oldscape::configdecoder::VarConBitType*&>(void* param_1, int* param_2, VarConBitType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10024fc50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarConBitType*): jumps straight to the base-object constructor

    // 0x10024fc60, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarConBitType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::VarConBitType>::ref_counter_shared_trivial(
        ulong param_1, VarConBitType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ca0 + 16;
    }

    // 0x1002506f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarConType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConType>, int, oldscape::configdecoder::VarConType*&>(void*, int&&, oldscape::configdecoder::VarConType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarConType>, int,
                                                   oldscape::configdecoder::VarConType*&>(void* param_1, int* param_2,
                                                                                          VarConType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::VarConType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100250710, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarConType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarConType*): jumps straight to the base-object constructor

    // 0x100250720, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarConType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarConType*)
    void
    ref_counter_shared_trivial<oldscape::configdecoder::VarConType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                VarConType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c78 + 16;
    }

    // 0x100250dd0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>, int, oldscape::configdecoder::VarGlobalType*&>(void*, int&&, oldscape::configdecoder::VarGlobalType*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>, int,
                       oldscape::configdecoder::VarGlobalType*&>(void* param_1, int* param_2, VarGlobalType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100250df0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarGlobalType*): jumps straight to the base-object constructor

    // 0x100250e00, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarGlobalType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::VarGlobalType>::ref_counter_shared_trivial(
        ulong param_1, VarGlobalType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ca8 + 16;
    }

    // 0x1002510d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>, int, oldscape::configdecoder::VarObjType*&>(void*, int&&, oldscape::configdecoder::VarObjType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>, int,
                                                   oldscape::configdecoder::VarObjType*&>(void* param_1, int* param_2,
                                                                                          VarObjType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002510f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarObjType*): jumps straight to the base-object constructor

    // 0x100251100, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarObjType*)
    void
    ref_counter_shared_trivial<oldscape::configdecoder::VarObjType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                VarObjType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c80 + 16;
    }

    // 0x100251b90, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::VarcType* placement_new<oldscape::configdecoder::VarcType>(void*)
    /* oldscape::configdecoder::VeccType*
   placement_new<oldscape::configdecoder::VeccType>(void*) */

    VeccType* placement_new<oldscape::configdecoder::VeccType>(void* param_1) {
        *(undefined1*)param_1 = 0;
        oldscape::configdecoder::VeccType::VeccType(param_1);
        return param_1;
    }

    // 0x100251bb0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::configdecoder::VarcType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarcType>, int, oldscape::configdecoder::VarcType*&>(void*, int&&, oldscape::configdecoder::VarcType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarcType>, int,
                                                   oldscape::configdecoder::VarcType*&>(void* param_1, int* param_2,
                                                                                        VarcType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::VarcType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class StructType {
    public:
        void Init(jagex3::Js5*);
        StructType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PostDecode();
        void GetParam(int, int);
        GetParam(int, eastl::string const&);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        StructType();
        ~StructType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    // 0x10024ee20, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StructType::StructType(): jumps straight to the base-object constructor

    // 0x10024ee30, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // StructType::StructType()
    void StructType::StructType() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&field_8, local_20) eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>,
                                                 eastl::equal_to<long long>, eastl::allocator, false>();
    }

    // 0x10024ef10, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // StructType::~StructType(): jumps straight to the base-object destructor

    // 0x10024ef20, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // StructType::~StructType()
    void StructType::~StructType() {
        (&field_8)->~hash_map();
    }

} // namespace jag::oldscape::configdecoder
