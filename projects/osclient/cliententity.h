// projects/osclient/cliententity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientEntity : public jag::graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientEntity();
        virtual IsClientNPC();
        virtual Ready() const;
        IsClientLocAnim() const;
        IsLit() const;
        IsUnlit() const;
        GetScriptedOverlayIndex(int);
        void SetScriptedOverlay(int, int);
        void RemoveScriptedOverlay(int);
        void SetUnhidden();
        void SetHiddenBy(ClientEntityID const&);
        void ClearSpotAnims();
        void AbortRoute();
        void ClearPendingFacing();
        GetSpotAnims();
        GetServerX() const;
        GetServerZ() const;
        GetScriptedOverlays();
        void IsHiddenBelowOtherEntity() const;
        GetHiddenBy() const;
        ulong HasHitmark(int) const;
        void AddSpotAnim(int, int, int, int, int);
        void AddHitmark(int, int, int, int, int, int);
        void AddHeadbar(int, int, int, int, int, int);
        void ClearHeadbar(int);
        void CombineWithSpotAnim(shared_ptr<dash3d::ModelLit>&);
        byte HasHeadbar() const;
        byte HasScriptedOverlays() const;
        ClientEntity();

        // data members, from how the methods use this: 960 bytes, the first 16 are Drawable
        long field_16;       // offset 16
        undefined8 field_24; // offset 24
        char _unknown_32[8];
        undefined8 field_40;  // offset 40
        undefined4 field_48;  // offset 48
        undefined4 field_52;  // offset 52
        undefined4 field_56;  // offset 56
        undefined4 field_60;  // offset 60
        undefined4 field_64;  // offset 64
        undefined4 field_68;  // offset 68
        undefined4 field_72;  // offset 72
        undefined4 field_76;  // offset 76
        undefined4 field_80;  // offset 80
        undefined4 field_84;  // offset 84
        undefined4 field_88;  // offset 88
        undefined4 field_92;  // offset 92
        undefined4 field_96;  // offset 96
        undefined4 field_100; // offset 100
        undefined4 field_104; // offset 104
        char _unknown_108[36];
        undefined2 field_144; // offset 144
        char _unknown_146[2];
        undefined8 field_148; // offset 148
        undefined4 field_156; // offset 156
        char _unknown_160[48];
        undefined1 field_208; // offset 208
        char _unknown_209[3];
        undefined1 field_212[16]; // offset 212
        undefined1 field_228[16]; // offset 228
        undefined1 field_244[16]; // offset 244
        undefined1 field_260[16]; // offset 260
        undefined1 field_276[16]; // offset 276
        char _unknown_292[36];
        undefined4 field_328; // offset 328
        undefined1 field_332; // offset 332
        char _unknown_333[3];
        undefined4 field_336; // offset 336
        char _unknown_340[12];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined8 field_356; // offset 356
        undefined8 field_364; // offset 364
        undefined4 field_372; // offset 372
        undefined8 field_376; // offset 376
        undefined8 field_384; // offset 384
        undefined8 field_392; // offset 392
        undefined8 field_400; // offset 400
        undefined8 field_408; // offset 408
        undefined8 field_416; // offset 416
        undefined8 field_424; // offset 424
        undefined8 field_432; // offset 432
        undefined4 field_440; // offset 440
        undefined1 field_444; // offset 444
        char _unknown_445[39];
        undefined1 field_484; // offset 484
        char _unknown_485[51];
        undefined8 field_536; // offset 536
        undefined8 field_544; // offset 544
        undefined4 field_552; // offset 552
        char _unknown_556[3];
        undefined1 field_559;     // offset 559
        undefined1 m_hiddenBy[8]; // offset 560
        char _unknown_568[392];
    };

    class ClientEntityID {
    public:
        GetSlotID() const;
        ClientEntityID();
        ClientEntityID(bool, int);
        bool IsValid() const;
        bool IsPlayer() const;

        // data members, from how the methods use this: 12 bytes
        undefined2 field_0; // offset 0
        char _unknown_2[2];
        int field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x1000c4620, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ClientEntityID::ClientEntityID(): jumps straight to the base-object constructor

    // 0x1000de5f0, 48 bytes, inline, placed by class name
    // ClientEntity::SetUnhidden()
    void ClientEntity::SetUnhidden() {
        undefined8 in_RAX;
        undefined1 local_18[8];

        local_18 = (undefined1[8])in_RAX;
        new (local_18) ClientEntityID();
        *&m_hiddenBy = local_18;
    }

    // 0x1000de640, 16 bytes, inline, placed by class name
    // ClientEntity::SetHiddenBy(ClientEntityID const&)
    void ClientEntity::SetHiddenBy(ClientEntityID* param_1) {
        undefined2 uVar1;
        int iVar2;

        uVar1 = *(undefined2*)&param_1->field_2;
        iVar2 = param_1->field_4;
        *(undefined2*)(m_hiddenBy + 0) = param_1->field_0;
        *(undefined2*)(m_hiddenBy + 2) = uVar1;
        *(int*)(m_hiddenBy + 4) = iVar2;
    }

    // 0x1000f8790, 32 bytes, inline, placed by class name
    // ClientEntity::ClearSpotAnims()
    void ClientEntity::ClearSpotAnims() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1000f9490, 16 bytes, inline, placed by class name
    // ClientEntity::GetSpotAnims()
    undefined1* ClientEntity::GetSpotAnims() {
        return &field_952;
    }

    // 0x1000fc670, 32 bytes, inline, placed by class name
    // ClientEntity::GetServerX() const
    undefined4 ClientEntity::GetServerX() {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<int, 10ul>::operator[]((ulong)&field_444);
        return *puVar1;
    }

    // 0x1000fc690, 32 bytes, inline, placed by class name
    // ClientEntity::GetServerZ() const
    undefined4 ClientEntity::GetServerZ() {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<int, 10ul>::operator[]((ulong)&field_484);
        return *puVar1;
    }

    // 0x100110620, 32 bytes, inline, placed by class name
    // ClientEntity::IsHiddenBelowOtherEntity() const
    void ClientEntity::IsHiddenBelowOtherEntity() {
        m_hiddenBy->IsValid();
    }

    // 0x1001106c0, 16 bytes, inline, placed by class name
    // ClientEntity::GetHiddenBy() const
    undefined1* ClientEntity::GetHiddenBy() {
        return m_hiddenBy;
    }

    // 0x10011cd40, 32 bytes, inline, placed by class name
    // ClientEntity::HasHeadbar() const
    byte ClientEntity::HasHeadbar() {
        byte bVar1;

        bVar1 = (&field_296)->empty();
        return bVar1 ^ 1;
    }

    // 0x10011cd60, 32 bytes, inline, placed by class name
    // ClientEntity::HasScriptedOverlays() const
    byte ClientEntity::HasScriptedOverlays() {
        byte bVar1;

        bVar1 = (&field_568)->empty();
        return bVar1 ^ 1;
    }

    // 0x100131e30, 96 bytes, base-object destructor, inline, placed by class name
    // ClientEntity::~ClientEntity()
    void ClientEntity::~ClientEntity() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__OptionStore_100ef4178;
        (&field_952)->~vector_map();
        (&field_568)->~fixed_map();
        (&field_296)->~list();
        (&field_160)->~fixed_vector();
        (&field_112)->~basic_string();
        eastl::destruct<highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x100153340, 496 bytes, base-object constructor, inline, placed by class name
    // ClientEntity::ClientEntity()
    void ClientEntity::ClientEntity() {
        new (this) dash3d::UniqueModelSource();
        field_0 = &PTR__OptionStore_100ef4178;
        field_24 = 0;
        *(undefined8*)((long)&field_24 + 5) = 0;
        field_40 = 1;
        field_48 = 4294967295;
        field_52 = 4294967295;
        field_56 = 4294967295;
        field_60 = 4294967295;
        field_64 = 4294967295;
        field_68 = 4294967295;
        field_72 = 4294967295;
        field_76 = 4294967295;
        field_80 = 4294967295;
        field_84 = 4294967295;
        field_88 = 4294967295;
        field_92 = 4294967295;
        field_92 = 4294967295;
        field_96 = 4294967295;
        field_100 = 4294967295;
        field_104 = 4294967295;
        new (&field_112) eastl::string();
        field_144 = 0;
        field_148 = 100;
        field_156 = 0;
        new (&field_160) eastl::fixed_vector<unsigned char, 8ul, true, eastl::allocator>();
        field_208 = 0;
        *&field_212 = (undefined1[16])0;
        *&field_228 = (undefined1[16])0;
        *&field_244 = (undefined1[16])0;
        *&field_260 = (undefined1[16])0;
        *&field_276 = (undefined1[16])0;
        new (&field_296) eastl::list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>();
        field_328 = 4294967295;
        field_332 = 0;
        field_336 = 4294967295;
        new (&field_340) rs2lib::CoordGrid();
        field_352 = 0;
        field_356 = 4294967295;
        field_364 = 0;
        field_372 = 4294967295;
        field_376 = 0;
        field_384 = 0;
        field_392 = 0;
        field_400 = 0;
        field_408 = 0;
        field_416 = 0;
        field_424 = 200;
        field_432 = 137438953472;
        field_440 = 0;
        field_536 = 0;
        field_544 = 18446744073709551615;
        field_552 = 4294967295;
        field_559 = 0;
        new (m_hiddenBy) ClientEntityID();
        new (&field_568) eastl::fixed_map<int, unsigned long, 5ul, true, eastl::less<int>, eastl::allocator>();
        new (&field_952) eastl::vector_map<int, SpotAnimClient, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, SpotAnimClient>, eastl::allocator>>();
    }

    // 0x100154460, 48 bytes, inline, placed by class name
    // ClientEntity::ClearHeadbar(int)::$_23::operator()(shared_ptr<configdecoder::HeadbarQueue>&) const
    /* ClientEntity::ClearHeadbar(int)::$_23::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<configdecoder::HeadbarQueue>&)
   const */

    void ClientEntity::ClearHeadbar(int)::$_23::operator()(shared_ptr* param_1) {
        jag* this_00;
        shared_ptr* psVar1;
        shared_ptr* extraout_RDX;

        this_00 = *(jag**)this;
        psVar1 = (shared_ptr*)shared_ptr<configdecoder::HeadbarQueue>::operator->(
            (shared_ptr<configdecoder::HeadbarQueue>*)param_1);
        operator==(this_00, psVar1, extraout_RDX);
    }

} // namespace jag::oldscape
