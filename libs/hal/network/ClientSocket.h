// libs/hal/network/ClientSocket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ClientSocket {
    public:
        uint8_t* GetRawAddress() const;
        bool IsOpen() const;
        uint32_t Connect(const char* str, Error* error, int arg3, int arg4);
        auto GetIPAddress() const;
        ClientSocket(unsigned int arg1);
        void GlobalInit();
        void InitImpl();
        ~ClientSocket();
        uint64_t Close(Error* error);
        unsigned int Connect(const sock::AddressInfo& addressInfo, Error* error, int arg3, int arg4);
        void SetErrorCode(Error* error, int arg2);
        uint64_t Shutdown(int arg1, Error* error);
        long Read(unsigned char* arg1, unsigned long arg2, Error* error) const;
        long Write(const unsigned char* arg1, unsigned long arg2, Error* error) const;
        uint64_t Available(Error* error) const;
        void SetSocketRecvTimeOut(int arg1);
        void SetSocketConnectTimeOut(int arg1);

    private:
        int field_0;
        int field_4;
        int field_8;
        uint8_t _unknown_12[116];
        char field_128;
        uint8_t field_129;
        uint8_t _unknown_130[6];
    };

    // 0x1009f9a90
    bool ClientSocket::IsOpen() const {
        if (field_8 == -1) {
            return false;
        }
        return field_128 != '\0';
    }

    // 0x1009fbb10
    PacketT<Array<unsigned char>>* placement_new<PacketT<Array<unsigned char>>, int>(void* arg1, int&& arg2) {
        new (arg1) PacketT((long)*arg2);
        return arg1;
    }

    // 0x1009fbb30
    PacketT<Array<unsigned char>>::PacketT(PacketT<Array<unsigned char>>&& arg1) : Array<unsigned char>(arg1) {
        *(uint64_t*)(this + 24) = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(arg1 + 24) = 0;
    }

    // 0x1009fbc70
    unsigned int PacketReaderMixin<PacketView>::gT<unsigned int>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = end();
        long lVar2 = *(long*)(this + 16);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(uint64_t*)(this + 16);
            uVar6 = HeapBeginPtr();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(unsigned int*)(lVar4 + lVar2);
        ReorderToBE<int>(&local_2c);
        return local_2c;
    }

    // 0x1009fbfe0
    auto PacketT<Array<unsigned char>>::ToString(int arg1, int arg2) const {
        uint8_t arg1_00;
        unsigned char arg1_01;
        uint64_t uVar1;
        bool cVar2;
        uint64_t uVar4;
        unsigned long uVar5;
        uint8_t* pbVar6;
        unsigned char* puVar7;
        unsigned long arg1_02;
        char* pcVar8;
        unsigned long arg1_03;
        eastl::string local_a8;
        unsigned int local_84;
        fixed_string<char, 20> local_78;

        if (GetTextureAtlas() == 0) {
            auto result("{ Packet : empty }");
        } else {
            local_a8 = eastl::string();
            local_a8.reserve(512);
            uVar1 = *(uint64_t*)(this + 24);
            uVar4 = end();
            local_a8.sprintf("{ Packet: pos=%llu/%llu:", uVar1, uVar4);
            if (0 < arg2) {
                local_84 = arg2 + arg1;
                uVar5 = (unsigned long)(int)local_84;
                do {
                    arg1_03 = (unsigned long)(unsigned int)arg1;
                    pcVar8 = " ";
                    if (arg1 == *(unsigned int*)(this + 24)) {
                        pcVar8 = "^";
                    }
                    local_a8 += pcVar8;
                    arg1_02 = (unsigned long)arg1;
                    pbVar6 = (uint8_t*)(*this)[arg1_02];
                    arg1_00 = *pbVar6;
                    cVar2 = isVeryInterestingCharacter(arg1_00);
                    if ((!cVar2) || ((int)local_84 <= (int)(arg1 + 2U))) {
                    LAB_1009fc1a0:
                        local_78 = eastl::fixed_string<char, 20>();
                        local_78.sprintf("%02X", (unsigned long)arg1_00);
                        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_a8 += pcVar8;
                    }
                    puVar7 = (unsigned char*)(*this)[(long)(int)(arg1 + 1)];
                    cVar2 = isInterestingCharacter(*puVar7);
                    if (!cVar2)
                        goto LAB_1009fc1a0;
                    puVar7 = (unsigned char*)(*this)[(long)(int)(arg1 + 2U)];
                    cVar2 = isInterestingCharacter(*puVar7);
                    if (!cVar2)
                        goto LAB_1009fc1a0;
                    if (arg1 < (int)local_84) {
                        arg1_03 = arg1_02;
                        do {
                            puVar7 = (unsigned char*)(*this)[arg1_03];
                            arg1_01 = *puVar7;
                            cVar2 = isInterestingCharacter(arg1_01);
                            if (!cVar2)
                                goto LAB_1009fc1f3;
                            if (((long)arg1_02 < (long)arg1_03) && ((int)arg1_03 == *(int*)(this + 24))) {
                                local_a8 += '^';
                            }
                            local_a8 += arg1_01;
                            arg1_03 = arg1_03 + 1;
                        } while (uVar5 != arg1_03);
                        arg1 = local_84;
                    } else {
                    LAB_1009fc1f3:
                        arg1 = (int)arg1_03;
                    }
                } while (arg1 < (int)local_84);
            }
            pcVar8 = " ";
            if (arg1 == *(unsigned int*)(this + 24)) {
                pcVar8 = "^";
            }
            local_a8 += pcVar8;
            local_a8 += "}";
            new (&result) eastl::string(local_a8);
        }
        return result;
    }

    // 0x1009fc2d0
    bool isVeryInterestingCharacter(unsigned char arg1) {
        bool bVar1 = true;
        if (25 < (uint8_t)(arg1 + 159)) {
            bVar1 = (arg1 == '/' || arg1 == '\\') || (uint8_t)(arg1 + 191) < 26;
        }
        return bVar1;
    }

    // 0x1009fc300
    bool isInterestingCharacter(unsigned char arg1) {
        bool bVar1 = true;
        if (25 < (uint8_t)(arg1 + 159)) {
            bVar1 = (arg1 == '/' || arg1 == '\\') || (uint8_t)(arg1 - 33) < 58;
        }
        return bVar1;
    }

    // 0x1009fe5b0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
            math::BigInteger*, eastl::string, bool)::$_1>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void()>>::allocate(unsigned long arg1,
                           std::__packaged_task_func<
                               std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                                   Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
                               SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(352, 4, 8);
    }

    // 0x1009fea70
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
            math::BigInteger*, eastl::string, bool)::$_1>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                           Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                           math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 352), arg2);
    }

    // 0x100a008c0
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT() : Array<unsigned char, BucketAllocatorEASTL>() {
        *(uint64_t*)(this + 24) = 0;
    }

    // 0x100a00a70
    PacketT<Array<unsigned char>>* placement_new<PacketT<Array<unsigned char>>, unsigned int>(void* arg1,
                                                                                              unsigned int&& arg2) {
        new (arg1) PacketT((unsigned long)*arg2);
        return arg1;
    }

    // 0x100a00a90
    PacketT<Array<unsigned char>>::PacketT(const Array<unsigned char>& arg1) : Array<unsigned char>() {
        *(uint64_t*)(this + 24) = 0;
        unsigned long arg1_00 = arg1.end();
        Reserve(this, arg1_00);
        auto pvVar1 = data();
        auto pvVar2 = arg1.data();
        size_t sVar3 = arg1.end();
        _memcpy(pvVar1, pvVar2, sVar3);
    }

    // 0x100a00b10
    PacketT<Array<unsigned char>>::PacketT(Array<unsigned char>&& arg1) : Array<unsigned char>() {
        *(uint64_t*)(this + 24) = 0;
        eastl::swap<Array<unsigned char>>(*this, arg1);
    }

    // 0x100a00bc0
    PacketT<Array<unsigned char>>*
    placement_new<PacketT<Array<unsigned char>>, Array<unsigned char>>(void* arg1, Array<unsigned char>&& arg2) {
        new (arg1) PacketT(arg2);
        return arg1;
    }

    // 0x100a00be0
    PacketT<Array<unsigned char>>*
    placement_new<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>>(void* arg1,
                                                                                PacketT<Array<unsigned char>>&& arg2) {
        new (arg1) PacketT(arg2);
        return arg1;
    }

    // 0x100a00c00
    ref_counter_shared<PacketT<Array<unsigned char>>>*
    placement_new<ref_counter_shared<PacketT<Array<unsigned char>>>, int, PacketT<Array<unsigned char>>*&>(
        void* arg1, int&& arg2, PacketT<Array<unsigned char>>*& arg3) {
        new (arg1) ref_counter_shared<PacketT<Array<unsigned char>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a00c30
    ref_counter_shared<PacketT<Array<unsigned char>>>::ref_counter_shared(unsigned long arg1,
                                                                          PacketT<Array<unsigned char>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee74f8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(PacketT<Array<unsigned char> _>**)(this + 24) = arg2;
    }

    // 0x100a00c70
    void ref_counter_shared<PacketT<Array<unsigned char>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((VBOMapper*)(*(long*)(this + 24) + lVar2))->~VBOMapper();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100a00cc0
    PacketT<Array<unsigned char>>*
    placement_new<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>&>(void* arg1,
                                                                                 PacketT<Array<unsigned char>>& arg2) {
        new (arg1) PacketT(arg2);
        return arg1;
    }

    // 0x100a00e40
    bool operator<< Js5WorkerRequestMessage,
        Js5WorkerRequestMessage > (const shared_ptr<Js5WorkerRequestMessage>& js5WorkerRequestMessage1,
                                   const shared_ptr<Js5WorkerRequestMessage>& js5WorkerRequestMessage2) {
        Js5WorkerRequestMessage** arg2;

        uint64_t local_20 = js5WorkerRequestMessage1.end();
        auto local_18 = js5WorkerRequestMessage2.end();
        return (bool)std::less<Js5WorkerRequestMessage*>::operator()((less<Js5WorkerRequestMessage*>*)&local_20,
                                                                     &local_18, arg2);
    }

    // 0x100a00f50
    Js5WorkerRequestMessage* placement_new<Js5WorkerRequestMessage>(void* arg1) {
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        new (arg1) Js5WorkerRequestMessage();
        return arg1;
    }

    // 0x100a00f90
    MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>*
    placement_new<MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>,
                  MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData*&, Js5WorkerRequestMessage*>(
        void* arg1, MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData*& arg2,
        Js5WorkerRequestMessage*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>(arg2, arg3);
        return arg1;
    }

    // 0x100a01020
    MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>::
        MakeSharedPoolRefCounter(void* arg1, Js5WorkerRequestMessage* js5WorkerRequestMessage)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee79c0 + 16;
        *(void**)(this + 16) = arg1;
        *(Js5WorkerRequestMessage**)(this + 24) = js5WorkerRequestMessage;
    }

    // 0x100a01060
    void MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>::DeleteData() {
        if (*(Js5WorkerRequestMessage**)(this + 24) != nullptr) {
            (*(Js5WorkerRequestMessage**)(this + 24))->~Js5WorkerRequestMessage();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100a01090
    void MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<Js5WorkerRequestMessage, 768>::deallocate(arg1);
    }

    // 0x100a01d70
    PacketT<Array<unsigned char>>* placement_new<PacketT<Array<unsigned char>>>(void* arg1) {
        new (arg1) PacketT();
        return arg1;
    }

    // 0x100b0b7e0
    uint32_t ClientSocket::Connect(const char* str, Error* error, int arg3, int arg4) {
        uint32_t uVar2;

        AddressInfo local_48(str);
        if (local_48.operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = Connect(&local_48, error, arg3, arg4);
        }
        char* str_00 = "";
        if ((char)uVar2 != '\0') {
            str_00 = str;
        }
        (&field_96)->assign(str_00);
        return uVar2;
    }

    // 0x100b0b920
    auto ClientSocket::GetIPAddress() const {
        auto result;
        result = field_16.GetIPAddress();
        return result;
    }

    // 0x100b10aa0
    void ClientSocket::SetErrorCode(Error* error, int arg2) {
        if (this != nullptr) {
            new (this) std::__cxx_atomic_base_impl((int)error);
        }
    }

} // namespace jag

// 0x1009f9c80
Js5WorkerRequestMessage::Js5WorkerRequestMessage() : jag::MakeSharedPool<Js5WorkerRequestMessage, 768>() {
    *(uint64_t*)this = 18446744069414584350;
    *(uint64_t*)(this + 8) = 4294967295;
    *(uint8_t**)(this + 16) = jag::EncodeType::NONE;
    *(uint32_t*)(this + 24) = 16777216;
    *(uint64_t*)(this + 28) = 0;
    *(uint8_t**)(this + 40) = jag::Priority::LOW;
    new ((this + 48)) jag::Array<unsigned char>();
}
