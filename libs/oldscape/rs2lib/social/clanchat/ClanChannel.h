// libs/oldscape/rs2lib/social/clanchat/ClanChannel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::social {
    class ClanChannel {
    public:
        // virtual methods in vtable order
        virtual ~ClanChannel();
        ClanChannel(long long, bool, bool);
        ClanChannel(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        GetUserSortedIndex();
        uint AddUser(shared_ptr<ClanChannelUser>&);
        ulong IsExistingUser(shared_ptr<ClanChannelUser>&);
        void DoAddUser(shared_ptr<ClanChannelUser>&);
        void DoDeleteUser(int);
        void GetUserListSize();
        uint IsGuestLimitReached();
        bool DeleteUser(long long);
        ulong FindUserPos(long long);
        ulong FindUserPos(eastl::string);
        FindUser(long long);
        int GetEncodeLength(bool, bool);
        void EncodeV2(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, int, bool, bool);
        GetDescription();
        static /* 1 bytes */ m_verbose;
        static /* 1 bytes */ m_fluttered;

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined8 field_24; // offset 24
        longlong field_32;   // offset 32
        bool field_40;       // offset 40
        bool field_41;       // offset 41
        char _unknown_42[38];
        undefined8 field_80; // offset 80
        char _unknown_88[32];
        bool field_120; // offset 120
        char field_121; // offset 121
        char field_122; // offset 122
        char _unknown_123[13];
    };

    // 0x100269c60, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanChannel::~ClanChannel(): jumps straight to the base-object destructor

    // 0x100269c70, 32 bytes, deleting destructor, inline, placed by class name
    // ClanChannel::~ClanChannel()
    void ClanChannel::~ClanChannel() {
        ~ClanChannel(this);
        operator_delete(this);
    }

    // 0x100283b70, 68 bytes, base-object destructor, inline, placed by class name
    // ClanChannel::~ClanChannel()
    void ClanChannel::~ClanChannel() {
        field_0 = PTR_vtable_100ee8ab8 + 16;
        (&field_128)->~Array();
        (&field_88)->~basic_string();
        (&field_48)->~vector();
        ~Linkable();
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x10025afb0, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gStringNoConversion(bool)
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringNoConversion(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, bool param_1) {
        bool in_DL;
        undefined7 in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                                               CONCAT71(in_register_00000031, param_1),
                                           (basic_string*)this, in_DL);
        return this;
    }

    // 0x10025b000, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelUser>::type make_shared<oldscape::rs2lib::social::ClanChannelUser>()
    jag* make_shared<oldscape::rs2lib::social::ClanChannelUser>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ClanChannelUser* local_28[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelUser>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>, int,
                                   oldscape::rs2lib::social::ClanChannelUser*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
