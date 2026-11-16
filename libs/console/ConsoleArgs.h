// libs/console/ConsoleArgs.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::console {
    class VarAny {
    public:
        ~VarAny();
        GetTypeName() const;
        VarAny* Decode(StringView);
        bool Valid() const;
        VarAny();
        VarAny* operator=(VarAny const&);
        void Encode<eastl::string>(eastl::string&) const;
        VarAny* operator=(VarAny&&);
        VarAny(VarAny&&);
        VarAny(VarAny const&);

        // data members, from how the methods use this: 104 bytes
        char _unknown_0[72];
        undefined8 field_72; // offset 72
        undefined8 field_80; // offset 80
        undefined8 field_88; // offset 88
        undefined7 field_96; // offset 96
        byte field_103;      // offset 103
    };

    // 0x1006e0db0, 304 bytes, inline, placed by debug map only (low confidence)
    // VarAny::Decode(StringView)
    VarAny* VarAny::Decode(StringView param_1) {
        byte bVar1;
        Base64* this_00;
        uchar* puVar2;
        ulong uVar3;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_f0[32];
        fixed_vector<unsigned char, 128ul, true, eastl::allocator> local_d0[168];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        VarAny(this);
        eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>::fixed_vector(local_d0);
        this_00 = (Base64*)Base64::Instance();
        Base64::DecodeString<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(
            this_00, (fixed_vector*)local_d0, (StringView*)param_1.field_0);
        puVar2 = (uchar*)local_d0->HeapBeginPtr();
        uVar3 = local_d0->size();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_f0, puVar2, uVar3);
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringNoConversion<32, true>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_f0, (fixed_string*)this,
            false);
        bVar1 = local_f0->g1();
        field_103 = bVar1;
        puVar2 = (uchar*)(&field_72)->data();
        local_f0->gArrayBuffer(puVar2, 0, (ulong)bVar1);
        local_f0->~PacketT();
        eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>::~fixed_vector(local_d0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1006e0ee0, 48 bytes, inline, placed by debug map only (low confidence)
    // VarAny::Valid() const
    bool VarAny::Valid() {
        bool bVar2;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            bVar2 = field_103 != 0;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

} // namespace jag::console
