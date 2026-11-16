// libs/oldscape/jagex3/client/clientlocanim.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100151810, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool, shared_ptr<oldscape::dash3d::ModelSource>&, int&>(void*, int&, int&&, int&, int&, int&, int&, int&, bool&&, shared_ptr<oldscape::dash3d::ModelSource>&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                      shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        bool* param_9, shared_ptr* param_10, int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::dash3d::Decor> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, param_10);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x1001518d0, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool, shared_ptr<oldscape::dash3d::ModelSource>&, int&>(void*, int&&, int&&, int&, int&, int&, int&, int&, bool&&, shared_ptr<oldscape::dash3d::ModelSource>&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                      shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        bool* param_9, shared_ptr* param_10, int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::dash3d::Decor> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, param_10);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100151990, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::MapSpotAnim* placement_new<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(void*, int&, int&, int&, int&, int&&, int&, int&)
    MapSpotAnim* placement_new<oldscape::MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7,
        int* param_8) {
        oldscape::MapSpotAnim::MapSpotAnim(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7,
                                           *param_8);
        return param_1;
    }

    // 0x1001519d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::MapSpotAnim>* placement_new<ref_counter_shared<oldscape::MapSpotAnim>, int, oldscape::MapSpotAnim*&>(void*, int&&, oldscape::MapSpotAnim*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::MapSpotAnim>, int, oldscape::MapSpotAnim*&>(
        void* param_1, int* param_2, MapSpotAnim** param_3) {
        ref_counter_shared<oldscape::MapSpotAnim>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001519f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::MapSpotAnim>::ref_counter_shared(unsigned long, oldscape::MapSpotAnim*): jumps straight to the base-object constructor

    // 0x100151a00, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::MapSpotAnim>::ref_counter_shared(unsigned long, oldscape::MapSpotAnim*)
    void ref_counter_shared<oldscape::MapSpotAnim>::ref_counter_shared(ulong param_1, MapSpotAnim* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MapSpotAnim**)(this + 24) = param_2;
    }

    // 0x100151a40, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::MapSpotAnim>::DeleteData()
    void ref_counter_shared<oldscape::MapSpotAnim>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MapSpotAnim();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100151b50, 128 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientProj* placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(void*, int&, int&, int&, int&, int&&, int&&, int&&, int&, int&, int&, int&)
    ClientProj* placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10, int* param_11, int* param_12) {
        oldscape::ClientProj::ClientProj(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7, *param_8,
                                         *param_9, *param_10, *param_11, *param_12);
        return param_1;
    }

    // 0x100151bd0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientProj>* placement_new<ref_counter_shared<oldscape::ClientProj>, int, oldscape::ClientProj*&>(void*, int&&, oldscape::ClientProj*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::ClientProj>, int, oldscape::ClientProj*&>(
        void* param_1, int* param_2, ClientProj** param_3) {
        ref_counter_shared<oldscape::ClientProj>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100151bf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientProj>::ref_counter_shared(unsigned long, oldscape::ClientProj*): jumps straight to the base-object constructor

    // 0x100151c00, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientProj>::ref_counter_shared(unsigned long, oldscape::ClientProj*)
    void ref_counter_shared<oldscape::ClientProj>::ref_counter_shared(ulong param_1, ClientProj* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7598 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientProj**)(this + 24) = param_2;
    }

    // 0x100151c40, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientProj>::DeleteData()
    void ref_counter_shared<oldscape::ClientProj>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClientProj();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 192;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100151d50, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannel* placement_new<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(void*, oldscape::core::SuperPacket&)
    ClanChannel*
    placement_new<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(void* param_1,
                                                                                       SuperPacket* param_2) {
        oldscape::rs2lib::social::ClanChannel::ClanChannel(param_1, (PacketJ*)param_2);
        return param_1;
    }

    // 0x100151d70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannel>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannel>, int, oldscape::rs2lib::social::ClanChannel*&>(void*, int&&, oldscape::rs2lib::social::ClanChannel*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannel>, int,
                                           oldscape::rs2lib::social::ClanChannel*&>(void* param_1, int* param_2,
                                                                                    ClanChannel** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x100151d90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannel*): jumps straight to the base-object constructor

    // 0x100151da0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannel*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannel>::ref_counter_shared(ulong param_1,
                                                                                       ClanChannel* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7830 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClanChannel**)(this + 24) = param_2;
    }

    // 0x100151de0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanSettings* placement_new<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(void*, oldscape::core::SuperPacket&)
    ClanSettings*
    placement_new<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(void* param_1,
                                                                                        SuperPacket* param_2) {
        oldscape::rs2lib::social::ClanSettings::ClanSettings(param_1, (PacketJ*)param_2);
        return param_1;
    }

    // 0x100151e00, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettings>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int, oldscape::rs2lib::social::ClanSettings*&>(void*, int&&, oldscape::rs2lib::social::ClanSettings*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int,
                                           oldscape::rs2lib::social::ClanSettings*&>(void* param_1, int* param_2,
                                                                                     ClanSettings** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::ref_counter_shared(param_1, (long)*param_2,
                                                                                       *param_3);
        return param_1;
    }

    // 0x100151e20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettings*): jumps straight to the base-object constructor

    // 0x100151e30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettings*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::ref_counter_shared(ulong param_1,
                                                                                        ClanSettings* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7840 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClanSettings**)(this + 24) = param_2;
    }

    // 0x100151e70, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettings>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClanSettings();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 424;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape {
    class ClientLocAnim : public jag::graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientLocAnim();
        virtual GetTempModel(int);
        virtual IsLit() const;
        virtual IsClientLocAnim() const;
        IsUnlit() const;
        ClientLocAnim(int, int, int, int, int, int, int, bool, shared_ptr<dash3d::ModelSource>, int);
        void Hmap(int, int);

        // data members, from how the methods use this: 68 bytes, the first 16 are Drawable
        int field_16; // offset 16
        int field_20; // offset 20
        int field_24; // offset 24
        int field_28; // offset 28
        int field_32; // offset 32
        int field_36; // offset 36
        char _unknown_40[16];
        int field_56; // offset 56
        int field_60; // offset 60
        char _unknown_64[4];
    };

    // 0x100151750, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClientLocAnim::~ClientLocAnim(): jumps straight to the base-object destructor

    // 0x100151760, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ClientLocAnim::~ClientLocAnim()
    void ClientLocAnim::~ClientLocAnim() {
        (&field_40)->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x100370cf0, 32 bytes, deleting destructor, inline, placed by class name
    // ClientLocAnim::~ClientLocAnim()
    void ClientLocAnim::~ClientLocAnim() {
        ~ClientLocAnim(this);
        operator_delete(this);
    }

} // namespace jag::oldscape
