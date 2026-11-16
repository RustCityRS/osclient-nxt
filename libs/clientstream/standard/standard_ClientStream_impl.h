// libs/clientstream/standard/standard_ClientStream_impl.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.js5

namespace jag {
    class SafeBucketAllocatorEASTL {
    public:
        operator=(SafeBucketAllocatorEASTL const&);
        SafeBucketAllocatorEASTL(char const*);
        void deallocate(void*, unsigned long);
        void allocate(unsigned long);
        void allocate(unsigned long, unsigned long, unsigned long);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009f36d0, 48 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::ToStringPos() const
    PacketT<Array<unsigned char, eastl::allocator>>* PacketT<Array<unsigned char, eastl::allocator>>::ToStringPos(
        PacketT<Array<unsigned char, eastl::allocator>>* this) {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* in_RSI;

        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::size(in_RSI);
        ToString(this, (int)in_RSI, 0);
        return this;
    }

    // 0x1009f6390, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<ClientStream>::type make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&>(char const*&&, int const&, int const&, int const&, int const&)
    jag* make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&>(
        char** param_1, int* param_2, int* param_3, int* param_4, int* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientStream* local_40[2];

        pvVar1 = (void*)aligned_alloc(304, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1009f8410, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorEASTL::allocate(unsigned long)
    void SafeBucketAllocatorEASTL::allocate(ulong param_1) {
        BucketManager::Allocate(param_1, 4, 16);
    }

    // 0x1009f8430, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long)
    void SafeBucketAllocatorEASTL::allocate(ulong param_1, ulong param_2, ulong param_3) {
        BucketManager::Allocate(param_2, 4, param_3);
    }

    // 0x1009f98b0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Js5MasterIndexArchiveData::Js5MasterIndexArchiveData()
    void Js5MasterIndexArchiveData::Js5MasterIndexArchiveData() {
        new (&field_8) Array<unsigned char, eastl::allocator>();
    }

} // namespace jag

// 0x1009f41c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
// Js5WorkerRequestMessage::Js5WorkerRequestMessage(): jumps straight to the base-object constructor

// 0x1009f41d0, 320 bytes, inline, placed by debug map only (low confidence)
// Js5WorkerRequestMessage::Deserialize(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void Js5WorkerRequestMessage::Deserialize(PacketT* param_1) {
    byte bVar1;
    byte bVar2;
    undefined4 uVar3;
    long lVar4;
    long lVar5;
    undefined8 uVar6;
    uchar* puVar7;
    Array<unsigned char, eastl::allocator> local_38[24];

    lVar4 = param_1->size();
    lVar5 = param_1->GetTextureAtlas();
    if (24 < (ulong)(lVar4 - lVar5)) {
        bVar1 = param_1->g1();
        *(uint*)(this + 4) = (uint)bVar1;
        uVar3 = param_1->g4();
        *(undefined4*)(this + 8) = uVar3;
        uVar3 = param_1->g4();
        *(undefined4*)(this + 12) = uVar3;
        bVar1 = param_1->g1();
        uVar6 = jag::EncodeType::GetByID((uint)bVar1);
        *(undefined8*)(this + 16) = uVar6;
        bVar1 = param_1->g1();
        this[24] = (Js5WorkerRequestMessage)(bVar1 & 1);
        this[25] = (Js5WorkerRequestMessage)(bVar1 >> 1 & 1);
        this[26] = (Js5WorkerRequestMessage)(bVar1 >> 2 & 1);
        this[27] = (Js5WorkerRequestMessage)('\x02' - ((bVar1 & 16) == 0));
        uVar3 = param_1->g4();
        *(undefined4*)(this + 28) = uVar3;
        uVar3 = param_1->g4();
        *(undefined4*)(this + 32) = uVar3;
        bVar2 = param_1->g1();
        uVar6 = jag::Priority::GetByID((uint)bVar2);
        *(undefined8*)(this + 40) = uVar6;
        if ((bVar1 & 8) != 0) {
            jag::Array<unsigned char, eastl::allocator>::Array(local_38, 64);
            jag::Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(this + 48),
                                                                   (Array*)local_38);
            local_38->~Array();
            puVar7 = (uchar*)((this + 48))->data();
            param_1->gArrayBuffer(puVar7, 0, 64);
        }
    }
}

// 0x1009f6890, 112 bytes, placed by debug map only (low confidence)
// SzAlloc(ISzAlloc const*, unsigned long)
uchar* SzAlloc(ISzAlloc* param_1, ulong param_2) {
    uchar* puVar2;
    ulong uVar3;

    if (param_2 < 4194305) {
        if (param_2 < 32769) {
            puVar2 = (uchar*)SzGetSmallPermanentBuffer();
            uVar3 = 32768;
        } else {
            puVar2 = (uchar*)SzGetLargePermanentBuffer();
            uVar3 = 4194304;
        }
        if (SzMarkPermanentBufferUsed(puVar2, uVar3, true) != '\0') {
            return puVar2;
        }
    }
    puVar2 = (uchar*)jag::BucketManager::Allocate(param_2, 0, 16);
    return puVar2;
}

// 0x1009f6900, 80 bytes, placed by debug map only (low confidence)
// SzFree(ISzAlloc const*, void*)
void SzFree(ISzAlloc* param_1, void* param_2) {
    void* pvVar1;
    ulong uVar2;

    if (param_2 != (void*)0) {
        pvVar1 = (void*)SzGetLargePermanentBuffer();
        if (pvVar1 == param_2) {
            uVar2 = 4194304;
        } else {
            pvVar1 = (void*)SzGetSmallPermanentBuffer();
            if (pvVar1 != param_2) {
                jag::BucketManager::DeAllocate(param_2);
                return;
            }
            uVar2 = 32768;
        }
        SzMarkPermanentBufferUsed(param_2, uVar2, false);
    }
}

// 0x1009f6950, 176 bytes, placed by debug map only (low confidence)
// SzGetSmallPermanentBuffer()
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SzGetSmallPermanentBuffer() */

void SzGetSmallPermanentBuffer() {
    char* pcVar1;
    unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* puVar2;
    long lVar3;
    undefined1* puVar4;
    uchar* puVar5;

    pcVar1 = (char*)(*(code*)SzGetSmallPermanentBuffer()::permanentBuffer)();
    if (*pcVar1 == '\0') {
        puVar5 = operator_new__(32769);
        puVar2 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)(*(
            code*)SzGetSmallPermanentBuffer()::permanentBuffer)();
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<unsigned char*, true, void,
                                                                                           void>(puVar2, puVar5);
        __tlv_atexit(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::~unique_ptr, puVar2,
                     4294967296);
        puVar4 = (undefined1*)(*(code*)SzGetSmallPermanentBuffer()::permanentBuffer)();
        *puVar4 = 1;
    }
    pcVar1 = (char*)(*(code*)SzGetSmallPermanentBuffer()::initialised)();
    if (*pcVar1 == '\0') {
        puVar2 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)(*(
            code*)SzGetSmallPermanentBuffer()::permanentBuffer)();
        lVar3 = std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(puVar2);
        *(undefined1*)(lVar3 + 32768) = 0;
        puVar4 = (undefined1*)(*(code*)SzGetSmallPermanentBuffer()::initialised)();
        *puVar4 = 1;
    }
    puVar2 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)(*(
        code*)SzGetSmallPermanentBuffer()::permanentBuffer)();
    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(puVar2);
}

// 0x1009f6a40, 176 bytes, placed by debug map only (low confidence)
// SzGetLargePermanentBuffer()
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SzGetLargePermanentBuffer() */

void SzGetLargePermanentBuffer() {
    char* pcVar1;
    unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* puVar2;
    long lVar3;
    undefined1* puVar4;
    uchar* puVar5;

    pcVar1 = (char*)(*(code*)SzGetLargePermanentBuffer()::permanentBuffer)();
    if (*pcVar1 == '\0') {
        puVar5 = operator_new__(4194305);
        puVar2 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)(*(
            code*)SzGetLargePermanentBuffer()::permanentBuffer)();
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<unsigned char*, true, void,
                                                                                           void>(puVar2, puVar5);
        __tlv_atexit(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::~unique_ptr, puVar2,
                     4294967296);
        puVar4 = (undefined1*)(*(code*)SzGetLargePermanentBuffer()::permanentBuffer)();
        *puVar4 = 1;
    }
    pcVar1 = (char*)(*(code*)SzGetLargePermanentBuffer()::initialised)();
    if (*pcVar1 == '\0') {
        puVar2 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)(*(
            code*)SzGetLargePermanentBuffer()::permanentBuffer)();
        lVar3 = std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(puVar2);
        *(undefined1*)(lVar3 + 4194304) = 0;
        puVar4 = (undefined1*)(*(code*)SzGetLargePermanentBuffer()::initialised)();
        *puVar4 = 1;
    }
    puVar2 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)(*(
        code*)SzGetLargePermanentBuffer()::permanentBuffer)();
    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(puVar2);
}
