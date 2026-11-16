// libs/js5/network/Js5NetQueueRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Js5NetQueueRequest {
    public:
        bool IsUrgent() const;
        uint GetGroupID() const;
        uint GetArchiveID() const;
        uint GetFooterLength() const;
        Priority* GetPriority() const;
        ~Js5NetQueueRequest();
        IsRequested() const;
        SetRequested(bool);
        uint GetKey(int, int);
        void ResetDataPacket();
        Js5NetQueueRequest(
            unsigned int, unsigned int, unsigned int, bool,
            std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                               PacketT<Array<unsigned char, eastl::allocator>>&&, bool)> const&,
            PacketT<Array<unsigned char, eastl::allocator>>&&, Priority const*);
        GetDataPacket() const;
        void CreateDataPacket(unsigned long);
        void DownloadComplete();
        Js5NetQueueRequest(Js5NetQueueRequest&&);
        Js5NetQueueRequest* operator=(Js5NetQueueRequest&&);
        Js5NetQueueRequest();

        // data members, from how the methods use this: 129 bytes
        uint m_archiveID;      // offset 0
        uint m_groupID;        // offset 4
        bool m_urgent;         // offset 8
        undefined3 field_9;    // offset 9
        uint m_footerLength;   // offset 12
        VBOMapper field_16;    // offset 16
        Priority* m_pPriority; // offset 48
        char _unknown_56[72];
        undefined1 m_requested; // offset 128
    };

    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    bool Js5NetQueueRequest::IsUrgent() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint Js5NetQueueRequest::GetGroupID() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint Js5NetQueueRequest::GetArchiveID() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    uint Js5NetQueueRequest::GetFooterLength() const;

    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    Priority* Js5NetQueueRequest::GetPriority() const;

    // 0x10019e200, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Js5NetQueueRequest::~Js5NetQueueRequest(): jumps straight to the base-object destructor

    // 0x10019e210, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // Js5NetQueueRequest::~Js5NetQueueRequest()
    void Js5NetQueueRequest::~Js5NetQueueRequest() {
        (&field_112)->~shared_ptr();
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            ~function((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                     PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64);
        field_16->~VBOMapper();
    }

    // 0x10019e290, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Js5WorkerThread>::ref_counter_shared(unsigned long, Js5WorkerThread*): jumps straight to the base-object constructor

    // 0x10019e2a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Js5WorkerThread>::ref_counter_shared(unsigned long, Js5WorkerThread*)
    void ref_counter_shared<Js5WorkerThread>::ref_counter_shared(ulong param_1, Js5WorkerThread* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7190 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Js5WorkerThread**)(this + 24) = param_2;
    }

    // 0x10019e2e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_base::ref_counter_base()
    void ref_counter_base::ref_counter_base() {
        field_0 = PTR_vtable_100ee7168 + 16;
        std::atomic<int>::atomic((int)this + 8);
        std::atomic<int>::atomic((int)this + 12);
    }

    // 0x10019e320, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Js5WorkerThread>::DeleteData()
    /* ref_counter_shared<tweak::GradientSlider>::DeleteData() */

    void ref_counter_shared<tweak::GradientSlider>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 928;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10019f2c0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >, unsigned long>(void*, unsigned long&&)
    /* PacketT<Array<unsigned char, eastl::allocator> >*
   placement_new<PacketT<Array<unsigned char, eastl::allocator> >, unsigned
   long&>(void*, unsigned long&) */

    PacketT* jag::placement_new<PacketT<Array<unsigned char, eastl::allocator>>, unsigned long&>(void* param_1,
                                                                                                 ulong* param_2) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1, *param_2);
        return param_1;
    }

    // 0x10019f2e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192> >* placement_new<MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData*&, PacketT<Array<unsigned char, eastl::allocator> >*>(void*, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData*&, PacketT<Array<unsigned char, eastl::allocator> >*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                                MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>>,
                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData*&,
                       PacketT<Array<unsigned char, eastl::allocator>>*>(void* param_1, RefCounterAndData** param_2,
                                                                         PacketT** param_3) {
        MakeSharedPoolRefCounter<
            PacketT<Array<unsigned char, eastl::allocator>>,
            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>>::MakeSharedPoolRefCounter(param_1,
                                                                                                              *param_2,
                                                                                                              *param_3);
        return param_1;
    }

    // 0x10019f7a0, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete_array<unsigned long>(unsigned long*&)
    /* void safe_delete_array<float>(float*&) */

    void safe_delete_array<float>(float** param_1) {
        if (*param_1 != (float*)0) {
            operator_delete__(*param_1);
        }
        *param_1 = (float*)0;
    }

    // 0x10019fc30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192> >::MakeSharedPoolRefCounter(void*, PacketT<Array<unsigned char, eastl::allocator> >*): jumps straight to the base-object constructor

    // 0x10019fc40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192> >::MakeSharedPoolRefCounter(void*, PacketT<Array<unsigned char, eastl::allocator> >*)
    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                     MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>>* this,
            void* param_1, PacketT* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b78 + 16;
        *(void**)(this + 16) = param_1;
        *(PacketT**)(this + 24) = param_2;
    }

    // 0x10019fc80, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192> >::DeleteData()
    /* MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >,
   MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>
   >::DeleteData() */

    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>::
        DeleteData(MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>* this) {
        if (*(VBOMapper**)(this + 24) != (VBOMapper*)0) {
            (*(VBOMapper**)(this + 24))->~VBOMapper();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10019fcb0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>>::
        DeleteSelf(
            MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                     MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::deallocate(pvVar1);
    }

    // 0x10019fed0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::predictLengthPStringNoConversion(char const*, unsigned long, bool)
    int PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(char* param_1, ulong param_2,
                                                                                          bool param_3) {
        undefined7 in_register_00000011;

        return (int)CONCAT71(in_register_00000011, param_3) + (int)param_2 + 1;
    }

    // 0x10019ff60, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pT<signed char>(signed char)
    void PacketT<Array<unsigned char, eastl::allocator>>::pT<signed char>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, uchar* param_2) {
        ulong uVar1;
        long lVar2;
        jag local_19;

        local_19 = SUB81(param_2, 0);
        lVar2 = *(long*)(this + 24);
        uVar1 = end();
        if (uVar1 < lVar2 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<unsigned char>(&local_19, param_2);
        lVar2 = data();
        *(jag*)(lVar2 + *(long*)(this + 24)) = local_19;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
    }

    // 0x10019ffd0, 48 bytes, inline, placed by debug map only (low confidence)
    // void ReorderToBE<signed char>(signed char&)
    /* void ReorderToBE<unsigned char>(unsigned char&) */

    void ReorderToBE<unsigned char>(uchar* param_1) {
        NpcUID* extraout_RDX;

        if (IsLittleEndian() != '\0') {
            eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, (NpcUID*)param_1, extraout_RDX);
        }
    }

    // 0x1001a0000, 176 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pStringNoConversion(char const*, unsigned long, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion(
        PacketT<Array<unsigned char, eastl::allocator>>* this, char* param_1, ulong param_2, bool param_3) {
        long lVar1;
        undefined1* puVar2;
        ulong uVar3;
        void* pvVar4;
        undefined7 in_register_00000009;

        if ((int)CONCAT71(in_register_00000009, param_3) != 0) {
            uVar3 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar3 + 1;
            puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar3);
            *puVar2 = 0;
        }
        lVar1 = *(long*)(this + 24);
        uVar3 = end();
        if (uVar3 < param_2 + lVar1 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + len + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      311, (char*)0);
        }
        pvVar4 = (void*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        _memcpy(pvVar4, param_1, param_2);
        lVar1 = *(long*)(this + 24);
        *(ulong*)(this + 24) = lVar1 + param_2 + 1;
        puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, lVar1 + param_2);
        *puVar2 = 0;
    }

    // 0x1001a00b0, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pT<short>(short)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pT<short>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               short param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;
        short local_1a;

        lVar1 = *(long*)(this + 24);
        local_1a = param_1;
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<short>(&local_1a);
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(short*)(lVar3 + lVar1) = local_1a;
        *(long*)(this + 24) = lVar1 + 2;
    }

    // 0x1001a0120, 16 bytes, inline, placed by debug map only (low confidence)
    // void DoByteReorder<EndianSwap, short>(short&)
    /* void DoByteReorder<EndianSwap, unsigned short>(unsigned short&) */

    void DoByteReorder<EndianSwap, unsigned short>(ushort* param_1) {
        ByteReorder<EndianSwap, unsigned short>::swap(param_1);
    }

    // 0x1004dd430: the linker folded this into game::QuickChatPhraseType::IsSearchable() const, which has identical code
    Js5NetQueueRequest::IsRequested() const;

    // 0x1006797b0: the linker folded this into ui::SwipeState::SetIsDrifting(bool), which has identical code
    Js5NetQueueRequest::SetRequested(bool);

    // 0x100937190: the linker folded this into graphics::GetKeyFromMapSquare(int, int), which has identical code
    Js5NetQueueRequest::GetKey(int, int);

    // 0x1009f2730, 16 bytes, inline, placed by class name
    // Js5NetQueueRequest::ResetDataPacket()
    void Js5NetQueueRequest::ResetDataPacket() {
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::reset();
    }

    // 0x1009f2b40, 32 bytes, complete-object constructor, inline, placed by class name
    // Js5NetQueueRequest::Js5NetQueueRequest(unsigned int, unsigned int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)> const&, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*)
    /* Js5NetQueueRequest::Js5NetQueueRequest(unsigned int, unsigned int, unsigned int, bool,
   std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char,
   eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>
   const&, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*) */

    void Js5NetQueueRequest::Js5NetQueueRequest(uint param_1, uint param_2, uint param_3, bool param_4,
                                                function* param_5, PacketT* param_6, Priority* param_7) {
        Js5NetQueueRequest(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x1009f3700, 32 bytes, inline, placed by class name
    // Js5NetQueueRequest::GetDataPacket() const
    Js5NetQueueRequest* Js5NetQueueRequest::GetDataPacket() {
        long in_RSI;

        new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(in_RSI + 112));
        return this;
    }

    // 0x1009f3720, 96 bytes, inline, placed by class name
    // Js5NetQueueRequest::CreateDataPacket(unsigned long)
    void Js5NetQueueRequest::CreateDataPacket(ulong param_1) {
        ulong* in_RDX;
        shared_ptr local_30;
        ulong local_20;

        local_20 = param_1;
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned long&>(
            &local_30, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_20, in_RDX);
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&field_112, &local_30);
        local_30.~shared_ptr();
    }

    // 0x1009f3830, 96 bytes, inline, placed by class name
    // Js5NetQueueRequest::DownloadComplete()
    void Js5NetQueueRequest::DownloadComplete() {
        uint uVar1;
        uint uVar2;
        PacketT* pPVar3;
        _func_decltype_nullptr* in_RSI;

        if (std::operator!=((function*)&field_64, in_RSI)) {
            uVar1 = m_archiveID;
            uVar2 = m_groupID;
            pPVar3 = (PacketT*)(&field_112)->end();
            std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                               PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            operator()((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                      PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64,
                       uVar1, uVar2, pPVar3, (PacketT*)field_16, m_urgent);
        }
    }

    // 0x1009f99f0, 160 bytes, base-object constructor, inline, placed by class name
    // Js5NetQueueRequest::Js5NetQueueRequest(unsigned int, unsigned int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)> const&, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*)
    /* Js5NetQueueRequest::Js5NetQueueRequest(unsigned int, unsigned int, unsigned int, bool,
   std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char,
   eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>
   const&, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*) */

    void Js5NetQueueRequest::Js5NetQueueRequest(uint param_1, uint param_2, uint param_3, bool param_4,
                                                function* param_5, PacketT* param_6, Priority* param_7) {
        m_archiveID = param_1;
        m_groupID = param_2;
        m_urgent = param_4;
        m_footerLength = param_3;
        new (field_16) PacketT<Array<unsigned char, eastl::allocator>>();
        m_pPriority = param_7;
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            function((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                    PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64,
                     param_5);
        new (&field_112, (_func_decltype_nullptr*)param_5)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_requested = 0;
        (field_16, param_6)->swap();
    }

    // 0x100a08190, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5NetQueueRequest::Js5NetQueueRequest(Js5NetQueueRequest&&): jumps straight to the base-object constructor

    // 0x100a081a0, 128 bytes, base-object constructor, inline, placed by class name
    // Js5NetQueueRequest::Js5NetQueueRequest(Js5NetQueueRequest&&)
    void Js5NetQueueRequest::Js5NetQueueRequest(Js5NetQueueRequest* param_1) {
        uint uVar1;
        bool bVar2;
        undefined3 uVar3;
        uint uVar4;

        uVar1 = param_1->m_groupID;
        bVar2 = param_1->m_urgent;
        uVar3 = param_1->field_9;
        uVar4 = param_1->m_footerLength;
        m_archiveID = param_1->m_archiveID;
        m_groupID = uVar1;
        m_urgent = bVar2;
        field_9 = uVar3;
        m_footerLength = uVar4;
        new (field_16, (PacketT*)param_1->field_16) PacketT<Array<unsigned char, eastl::allocator>>();
        m_pPriority = param_1->m_pPriority;
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            function((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                    PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64,
                     (function*)&param_1->field_64);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_112, (shared_ptr*)&param_1->field_112);
        m_requested = param_1->m_requested;
    }

    // 0x100a086a0, 96 bytes, inline, placed by class name
    // Js5NetQueueRequest::operator=(Js5NetQueueRequest&&)
    /* Js5NetQueueRequest::TEMPNAMEPLACEHOLDERVALUE(Js5NetQueueRequest&&) */

    Js5NetQueueRequest* Js5NetQueueRequest::operator=(Js5NetQueueRequest* param_1) {
        uint uVar1;
        bool bVar2;
        undefined3 uVar3;
        uint uVar4;

        uVar1 = param_1->m_groupID;
        bVar2 = param_1->m_urgent;
        uVar3 = param_1->field_9;
        uVar4 = param_1->m_footerLength;
        m_archiveID = param_1->m_archiveID;
        m_groupID = uVar1;
        m_urgent = bVar2;
        field_9 = uVar3;
        m_footerLength = uVar4;
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)field_16, (PacketT*)param_1->field_16);
        m_pPriority = param_1->m_pPriority;
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
        operator=((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                 PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64,
                  (function*)&param_1->field_64);
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&field_112, (shared_ptr*)&param_1->field_112);
        m_requested = param_1->m_requested;
        return this;
    }

    // 0x100a08840, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5NetQueueRequest::Js5NetQueueRequest(): jumps straight to the base-object constructor

    // 0x100a08da0, 96 bytes, base-object constructor, inline, placed by class name
    // Js5NetQueueRequest::Js5NetQueueRequest()
    void Js5NetQueueRequest::Js5NetQueueRequest() {
        _func_decltype_nullptr* in_RSI;

        new (field_16) PacketT<Array<unsigned char, eastl::allocator>>();
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            function((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                    PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64);
        new (&field_112, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag
