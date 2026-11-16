// libs/clientstream/standard/standard_ClientStream_impl.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.js5

namespace jag {
    class SafeBucketAllocatorEASTL {
    public:
        void operator=(const SafeBucketAllocatorEASTL& arg1);
        SafeBucketAllocatorEASTL(const char* arg1);
        void deallocate(void* arg1, unsigned long arg2);
        void allocate(unsigned long arg1);
        void allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3);

        uint8_t _unknown_0[1];
    };

    // 0x1009f36d0
    auto PacketT<Array<unsigned char>>::ToStringPos() const {
        auto result;

        int arg2 = size();
        ToString(&result, this, 0, arg2);
        return result;
    }

    // 0x1009f6390
    shared_ptr_if_not_array<ClientStream>::type
    make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&>(
        const char*&& arg1, const int& arg2, const int& arg3, const int& arg4, const int& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ClientStream* local_40[2];

        auto arg1_00 = aligned_alloc(304, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<ClientStream>::type result;
        } else {
            local_40[0] = placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1009f8410
    void SafeBucketAllocatorEASTL::allocate(unsigned long arg1) {
        BucketManager::Allocate(arg1, 4, 16);
    }

    // 0x1009f8430
    void SafeBucketAllocatorEASTL::allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3) {
        BucketManager::Allocate(arg1, 4, arg2);
    }

    // 0x1009f98b0
    Js5MasterIndexArchiveData::Js5MasterIndexArchiveData() {
        new (&field_8) Array<unsigned char>();
    }

} // namespace jag

// 0x1009f41d0
void Js5WorkerRequestMessage::Deserialize(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    uint8_t bVar1;
    uint8_t bVar2;
    uint32_t uVar3;
    uint64_t uVar6;
    Array<unsigned char> local_38;

    long lVar4 = arg1.size();
    long lVar5 = arg1.GetTextureAtlas();
    if (24 < (unsigned long)(lVar4 - lVar5)) {
        bVar1 = arg1.g1();
        *(unsigned int*)(this + 4) = (unsigned int)bVar1;
        uVar3 = arg1.g4();
        *(uint32_t*)(this + 8) = uVar3;
        uVar3 = arg1.g4();
        *(uint32_t*)(this + 12) = uVar3;
        bVar1 = arg1.g1();
        uVar6 = ((EncodeType*)(unsigned long)bVar1)->GetByID((unsigned int)arg1);
        *(uint64_t*)(this + 16) = uVar6;
        bVar1 = arg1.g1();
        this[24] = (Js5WorkerRequestMessage)(bVar1 & 1);
        this[25] = (Js5WorkerRequestMessage)(bVar1 >> 1 & 1);
        this[26] = (Js5WorkerRequestMessage)(bVar1 >> 2 & 1);
        this[27] = (Js5WorkerRequestMessage)('\x02' - ((bVar1 & 16) == 0));
        uVar3 = arg1.g4();
        *(uint32_t*)(this + 28) = uVar3;
        uVar3 = arg1.g4();
        *(uint32_t*)(this + 32) = uVar3;
        bVar2 = arg1.g1();
        uVar6 = ((Priority*)(unsigned long)bVar2)->GetByID((unsigned int)arg1);
        *(uint64_t*)(this + 40) = uVar6;
        if ((bVar1 & 8) != 0) {
            local_38 = jag::Array<unsigned char>(64);
            (*((this + 48))) = local_38;
            arg1.gArrayBuffer((unsigned char*)((this + 48))->data(), 0, 64);
        }
    }
}

// 0x1009f6890
unsigned char* SzAlloc(const ISzAlloc* iSzAlloc, unsigned long arg2) {
    unsigned char* puVar2;
    unsigned long arg2_00;

    if (arg2 < 4194305) {
        if (arg2 < 32769) {
            puVar2 = (unsigned char*)SzGetSmallPermanentBuffer();
            arg2_00 = 32768;
        } else {
            puVar2 = (unsigned char*)SzGetLargePermanentBuffer();
            arg2_00 = 4194304;
        }
        if (SzMarkPermanentBufferUsed(puVar2, arg2_00, true) != '\0') {
            return puVar2;
        }
    }
    puVar2 = (unsigned char*)jag::BucketManager::Allocate(arg2, 0, 16);
    return puVar2;
}

// 0x1009f6900
void SzFree(const ISzAlloc* iSzAlloc, void* arg2) {
    void* pvVar1;
    unsigned long arg2_00;

    if (arg2 != nullptr) {
        pvVar1 = (void*)SzGetLargePermanentBuffer();
        if (pvVar1 == arg2) {
            arg2_00 = 4194304;
        } else {
            pvVar1 = (void*)SzGetSmallPermanentBuffer();
            if (pvVar1 != arg2) {
                jag::BucketManager::DeAllocate(arg2);
                return;
            }
            arg2_00 = 32768;
        }
        SzMarkPermanentBufferUsed(arg2, arg2_00, false);
    }
}

// 0x1009f6950
void SzGetSmallPermanentBuffer() {
    unique_ptr<unsigned char[]>* puVar2;
    long lVar3;
    uint8_t* puVar4;
    unsigned char* arg1;

    char* pcVar1 = (char*)(*(void (*)(...))SzGetSmallPermanentBuffer()::permanentBuffer)();
    if (*pcVar1 == '\0') {
        arg1 = (unsigned char*)operator_new__(32769);
        puVar2 = (unique_ptr<unsigned char[]>*)(*(void (*)(...))SzGetSmallPermanentBuffer()::permanentBuffer)();
        puVar2->unique_ptr<unsigned char*, true, void, void>(arg1);
        __tlv_atexit(std::unique_ptr<unsigned char[]>::~unique_ptr, puVar2, 4294967296);
        puVar4 = (uint8_t*)(*(void (*)(...))SzGetSmallPermanentBuffer()::permanentBuffer)();
        *puVar4 = 1;
    }
    pcVar1 = (char*)(*(void (*)(...))SzGetSmallPermanentBuffer()::initialised)();
    if (*pcVar1 == '\0') {
        puVar2 = (unique_ptr<unsigned char[]>*)(*(void (*)(...))SzGetSmallPermanentBuffer()::permanentBuffer)();
        lVar3 = puVar2->get();
        *(uint8_t*)(lVar3 + 32768) = 0;
        puVar4 = (uint8_t*)(*(void (*)(...))SzGetSmallPermanentBuffer()::initialised)();
        *puVar4 = 1;
    }
    puVar2 = (unique_ptr<unsigned char[]>*)(*(void (*)(...))SzGetSmallPermanentBuffer()::permanentBuffer)();
    puVar2->get();
}

// 0x1009f6a40
void SzGetLargePermanentBuffer() {
    unique_ptr<unsigned char[]>* puVar2;
    long lVar3;
    uint8_t* puVar4;
    unsigned char* arg1;

    char* pcVar1 = (char*)(*(void (*)(...))SzGetLargePermanentBuffer()::permanentBuffer)();
    if (*pcVar1 == '\0') {
        arg1 = (unsigned char*)operator_new__(4194305);
        puVar2 = (unique_ptr<unsigned char[]>*)(*(void (*)(...))SzGetLargePermanentBuffer()::permanentBuffer)();
        puVar2->unique_ptr<unsigned char*, true, void, void>(arg1);
        __tlv_atexit(std::unique_ptr<unsigned char[]>::~unique_ptr, puVar2, 4294967296);
        puVar4 = (uint8_t*)(*(void (*)(...))SzGetLargePermanentBuffer()::permanentBuffer)();
        *puVar4 = 1;
    }
    pcVar1 = (char*)(*(void (*)(...))SzGetLargePermanentBuffer()::initialised)();
    if (*pcVar1 == '\0') {
        puVar2 = (unique_ptr<unsigned char[]>*)(*(void (*)(...))SzGetLargePermanentBuffer()::permanentBuffer)();
        lVar3 = puVar2->get();
        *(uint8_t*)(lVar3 + 4194304) = 0;
        puVar4 = (uint8_t*)(*(void (*)(...))SzGetLargePermanentBuffer()::initialised)();
        *puVar4 = 1;
    }
    puVar2 = (unique_ptr<unsigned char[]>*)(*(void (*)(...))SzGetLargePermanentBuffer()::permanentBuffer)();
    puVar2->get();
}
