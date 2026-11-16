// libs/js5/network/Js5NetQueueRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Js5NetQueueRequest {
    public:
        bool IsUrgent() const;
        unsigned int GetGroupID() const;
        unsigned int GetArchiveID() const;
        bool GetFooterLength() const;
        Priority* GetPriority() const;
        ~Js5NetQueueRequest();
        bool IsRequested() const;
        void SetRequested(bool arg1);
        unsigned int GetKey(int arg1, int arg2);
        void ResetDataPacket();
        Js5NetQueueRequest(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
                           std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                              PacketT<Array<unsigned char>>&&, bool)> const& callback,
                           PacketT<Array<unsigned char>>&& arg6, const Priority* priority);
        auto GetDataPacket() const;
        void CreateDataPacket(unsigned long arg1);
        void DownloadComplete();
        Js5NetQueueRequest(Js5NetQueueRequest&& js5NetQueueRequest);
        Js5NetQueueRequest* operator=(Js5NetQueueRequest&& js5NetQueueRequest);
        Js5NetQueueRequest();

    private:
        unsigned int m_archiveID;
        unsigned int m_groupID;
        bool m_urgent;
        uint8_t field_9[3];
        unsigned int m_footerLength;
        VBOMapper field_16;
        Priority* m_pPriority;
        uint8_t _unknown_56[72];
        uint8_t m_requested;
    };

    // 0x1000096a0: Js5NetQueueRequest::IsUrgent() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x100073980: Js5NetQueueRequest::GetGroupID() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: Js5NetQueueRequest::GetArchiveID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    bool Js5NetQueueRequest::GetFooterLength() const {
        return m_urgent;
    }

    // 0x1000fcbb0: Js5NetQueueRequest::GetPriority() const has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x10019e210
    Js5NetQueueRequest::~Js5NetQueueRequest() {
        field_112.~shared_ptr();
        field_64.~function();
        field_16->~VBOMapper();
    }

    // 0x10019e2a0
    ref_counter_shared<Js5WorkerThread>::ref_counter_shared(unsigned long arg1, Js5WorkerThread* js5WorkerThread)
        : ref_counter_base() {}

    // 0x10019e2e0
    ref_counter_base::ref_counter_base() {}

    // 0x10019e320
    void ref_counter_shared<Js5WorkerThread>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::GradientSlider> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::GradientSlider> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 928;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10019f2c0
    PacketT<Array<unsigned char>>* placement_new<PacketT<Array<unsigned char>>, unsigned long>(void* arg1,
                                                                                               unsigned long&& arg2) {
        new (arg1) PacketT(arg2);
        return arg1;
    }

    // 0x10019f2e0
    MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 16192>>*
    placement_new<
        MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 16192>>,
        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData*&, PacketT<Array<unsigned char>>*>(
        void* arg1, MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData*& arg2,
        PacketT<Array<unsigned char>>*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>,
                                            MakeSharedPool<PacketT<Array<unsigned char>>, 16192>>(arg2, arg3);
        return arg1;
    }

    // 0x10019f7a0
    void safe_delete_array<unsigned long>(unsigned long*& arg1) {
        if (arg1 != nullptr) {
            operator_delete__(arg1);
        }
        arg1 = nullptr;
    }

    // 0x10019fc40
    MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 16192>>::
        MakeSharedPoolRefCounter(void* arg1, PacketT<Array<unsigned char>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b78 + 16;
        *(void**)(this + 16) = arg1;
        *(PacketT<Array<unsigned char> _>**)(this + 24) = arg2;
    }

    // 0x10019fc80
    void MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>,
                                  MakeSharedPool<PacketT<Array<unsigned char>>, 16192>>::DeleteData() {
        if (*(VBOMapper**)(this + 24) != nullptr) {
            (*(VBOMapper**)(this + 24))->~VBOMapper();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10019fcb0
    void MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>,
                                  MakeSharedPool<PacketT<Array<unsigned char>>, 16192>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::deallocate(arg1);
    }

    // 0x10019fed0
    int PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(const char* str, unsigned long arg2,
                                                                        bool arg3) {
        uint64_t in_register_00000011;

        return (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) + (int)arg2 + 1;
    }

    // 0x10019ff60
    void PacketT<Array<unsigned char>>::pT<signed char>(signed char arg1) {
        long lVar2 = *(long*)(this + 24);
        schar local_19 = arg1;
        if (end() < lVar2 + 1U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<unsigned char>(&local_19);
        lVar2 = data();
        *(schar*)(lVar2 + *(long*)(this + 24)) = local_19;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
    }

    // 0x10019ffd0
    void ReorderToBE<signed char>(signed char& arg1) {
        if (IsLittleEndian() != '\0') {
            arg1.destruct<oldscape::highlight::NpcUID*>();
        }
    }

    // 0x1001a0000
    void PacketT<Array<unsigned char>>::pStringNoConversion(const char* str, unsigned long arg2, bool arg3) {
        uint8_t* puVar2;
        unsigned long uVar3;
        uint64_t in_register_00000009;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            uVar3 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar3 + 1;
            puVar2 = (uint8_t*)(*this)[uVar3];
            *puVar2 = 0;
        }
        long lVar1 = *(long*)(this + 24);
        uVar3 = end();
        if (uVar3 < arg2 + lVar1 + 1) {
            LogAssert("m_pos + len + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      311, nullptr);
        }
        _memcpy((void*)(*this)[*(unsigned long*)(this + 24)], str, arg2);
        lVar1 = *(long*)(this + 24);
        *(unsigned long*)(this + 24) = lVar1 + arg2 + 1;
        puVar2 = (uint8_t*)(*this)[lVar1 + arg2];
        *puVar2 = 0;
    }

    // 0x1001a00b0
    void PacketT<Array<unsigned char>>::pT<short>(short arg1) {
        long lVar1 = *(long*)(this + 24);
        short local_1a = arg1;
        if (end() < lVar1 + 2U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<short>(&local_1a);
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(short*)(lVar3 + lVar1) = local_1a;
        *(long*)(this + 24) = lVar1 + 2;
    }

    // 0x1001a0120
    void DoByteReorder<EndianSwap, short>(short& arg1) {
        ByteReorder<EndianSwap, unsigned short>::swap(arg1);
    }

    // 0x1004dd430: Js5NetQueueRequest::IsRequested() const has the same machine code as game::QuickChatPhraseType::IsSearchable() const

    // 0x1006797b0: Js5NetQueueRequest::SetRequested(bool) has the same machine code as ui::SwipeState::SetIsDrifting(bool)

    // 0x100937190: Js5NetQueueRequest::GetKey(int, int) has the same machine code as graphics::GetKeyFromMapSquare(int, int)

    // 0x1009f2730
    void Js5NetQueueRequest::ResetDataPacket() {
        field_112.reset();
    }

    // 0x1009f3700
    auto Js5NetQueueRequest::GetDataPacket() const {
        return auto(&field_112);
    }

    // 0x1009f3720
    void Js5NetQueueRequest::CreateDataPacket(unsigned long arg1) {
        shared_ptr<PacketT<Array<unsigned char> _> _> local_30;

        unsigned long local_20 = arg1;
        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned long&>(&local_30);
        field_112 = local_30;
    }

    // 0x1009f3830
    void Js5NetQueueRequest::DownloadComplete() {
        unsigned int arg1;
        unsigned int arg2;
        PacketT<Array<unsigned char> _>* arg3;
        void* in_RSI;

        if (&field_64 != in_RSI) {
            arg1 = m_archiveID;
            arg2 = m_groupID;
            arg3 = (PacketT<Array<unsigned char> _>*)field_112.end();
            std::function<void(
                unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                bool)>::operator()((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                  PacketT<Array<unsigned char>>&&, bool)>*)&field_64,
                                   arg1, arg2, arg3, (PacketT<Array<unsigned char> _>*)field_16, m_urgent);
        }
    }

    // 0x1009f99f0
    Js5NetQueueRequest::Js5NetQueueRequest(
        unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                           bool)> const& callback,
        PacketT<Array<unsigned char>>&& arg6, const Priority* priority)
        : m_archiveID(arg1), m_groupID(arg2), m_urgent(arg4), m_footerLength(arg3), m_pPriority(priority),
          field_64(callback) {
        new (&field_112) shared_ptr();
        m_requested = 0;
        field_16->swap(arg6);
    }

    // 0x100a081a0
    Js5NetQueueRequest::Js5NetQueueRequest(Js5NetQueueRequest&& js5NetQueueRequest) {
        unsigned int uVar1 = js5NetQueueRequest.m_groupID;
        bool bVar2 = js5NetQueueRequest.m_urgent;
        uint32_t uVar3 = js5NetQueueRequest.field_9;
        unsigned int uVar4 = js5NetQueueRequest.m_footerLength;
        m_archiveID = js5NetQueueRequest.m_archiveID;
        m_groupID = uVar1;
        m_urgent = bVar2;
        field_9 = uVar3;
        m_footerLength = uVar4;
        new (field_16) PacketT(js5NetQueueRequest.field_16);
        m_pPriority = js5NetQueueRequest.m_pPriority;
        new (&field_64) std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                           PacketT<Array<unsigned char>>&&, bool)>(js5NetQueueRequest.field_64);
        field_112.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(js5NetQueueRequest.field_112);
        m_requested = js5NetQueueRequest.m_requested;
    }

    // 0x100a086a0
    Js5NetQueueRequest* Js5NetQueueRequest::operator=(Js5NetQueueRequest&& js5NetQueueRequest) {
        unsigned int uVar1 = js5NetQueueRequest.m_groupID;
        bool bVar2 = js5NetQueueRequest.m_urgent;
        uint32_t uVar3 = js5NetQueueRequest.field_9;
        unsigned int uVar4 = js5NetQueueRequest.m_footerLength;
        m_archiveID = js5NetQueueRequest.m_archiveID;
        m_groupID = uVar1;
        m_urgent = bVar2;
        field_9 = uVar3;
        m_footerLength = uVar4;
        *field_16 = js5NetQueueRequest.field_16;
        m_pPriority = js5NetQueueRequest.m_pPriority;
        field_64 = js5NetQueueRequest.field_64;
        field_112 = js5NetQueueRequest.field_112;
        m_requested = js5NetQueueRequest.m_requested;
        return this;
    }

    // 0x100a08da0
    Js5NetQueueRequest::Js5NetQueueRequest() {
        new (field_16) PacketT();
        new (&field_64) std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                           PacketT<Array<unsigned char>>&&, bool)>();
        new (&field_112) shared_ptr();
    }

} // namespace jag
