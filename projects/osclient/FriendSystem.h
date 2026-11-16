// projects/osclient/FriendSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class FriendSystem {
    public:
        void NotifyConnectingFriendServer();
        IsOnlineFriend(rs2lib::social::DisplayName const&) const;
        FriendSystem(rs2lib::social::NameSpace);
        ~FriendSystem();
        bool IsReady() const;
        void ProcessFriendListUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, int, ErrorCapture&);
        void Service();
        void Reset();
        IsFriend(rs2lib::social::DisplayName const&, bool) const;
        void AddFriend(eastl::string const&);
        ulong IsFriendListAtMaxCapacity() const;
        void NotifyFriendListFull();
        void NotifyCannotFriendSelf();
        void NotifyAlreadyFriend(eastl::string const&);
        void IsIgnored(rs2lib::social::DisplayName const&) const;
        void NotifyFriendOnIgnoreList(eastl::string const&);
        void SendAddFriendServerMessage(eastl::string const&);
        void AddFriendSystemChatNotification(eastl::string const&);
        void AddIgnore(eastl::string const&);
        ulong IsIgnoreListAtMaxCapacity() const;
        void NotifyIgnoreListFull();
        void NotifyCannotIgnoreSelf();
        void NotifyAlreadyIgnored(eastl::string const&);
        void NotifyIgnoreOnFriendList(eastl::string const&);
        void SendAddIgnoreServerMessage(eastl::string const&);
        void DelFriend(eastl::string const&);
        void DelIgnore(eastl::string const&, bool);
        void SetFriendRank(eastl::string const&, int);

        // data members, from how the methods use this: 26336 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        FriendList field_8; // offset 8
        char _unknown_184[24];
        IgnoreList field_208; // offset 208
        undefined4 field_376; // offset 376
        char _unknown_380[25956];
    };

    // 0x1001140f0, 16 bytes, inline, placed by class name and debug map
    // FriendSystem::NotifyConnectingFriendServer()
    void FriendSystem::NotifyConnectingFriendServer() {
        field_376 = 1;
    }

    // 0x100114860, 144 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::CheckCrc()
    bool PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::CheckCrc(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        int iVar1;
        int iVar2;
        vector* pvVar3;
        type* ptVar4;
        bool bVar5;
        Array<unsigned char, eastl::allocator> local_38[24];

        iVar1 = size();
        iVar1 = iVar1 + -4;
        if (iVar1 < 0) {
            bVar5 = false;
        } else {
            ptVar4 = (type*)(long)iVar1;
            SetPos((ulong)ptVar4);
            pvVar3 = SSOBeginPtr(ptVar4);
            Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(local_38, (Array*)pvVar3);
            iVar1 = GetCrc((Array*)local_38, 0, iVar1);
            local_38->~Array();
            iVar2 = g4();
            bVar5 = iVar1 == iVar2;
        }
        return bVar5;
    }

    // 0x10011dbc0, 32 bytes, inline, placed by class name
    // FriendSystem::IsOnlineFriend(rs2lib::social::DisplayName const&) const
    undefined8 FriendSystem::IsOnlineFriend(DisplayName* param_1) {
        OnlinePlayerData<social::FriendData>* this_00;

        this_00 = (OnlinePlayerData<social::FriendData>*)(field_8, param_1)->GetPlayer();
        if (this_00 == (OnlinePlayerData<social::FriendData>*)0) {
            return 0;
        }
        return this_00->IsOnline();
    }

    // 0x100139fb0, 16 bytes, complete-object constructor, inline, placed by class name
    // FriendSystem::FriendSystem(rs2lib::social::NameSpace): jumps straight to the base-object constructor

    // 0x100139fd0, 96 bytes, base-object constructor, inline, placed by class name
    // FriendSystem::FriendSystem(rs2lib::social::NameSpace)
    void FriendSystem::FriendSystem(undefined4 param_2) {
        field_0 = param_2;
        new (field_8) social::FriendList();
        new (field_208, param_2) social::IgnoreList();
        field_376 = 0;
    }

    // 0x10013cfc0, 16 bytes, complete-object destructor, inline, placed by class name
    // FriendSystem::~FriendSystem(): jumps straight to the base-object destructor

    // 0x10013cfd0, 48 bytes, base-object destructor, inline, placed by class name
    // FriendSystem::~FriendSystem()
    void FriendSystem::~FriendSystem() {
        field_208->~IgnoreList();
        field_8->~FriendList();
    }

    // 0x1001611a0, 16 bytes, inline, placed by class name
    // FriendSystem::IsReady() const
    bool FriendSystem::IsReady() {
        return field_376 == 2;
    }

    // 0x100185e30, 32 bytes, inline, placed by class name
    // FriendSystem::IsIgnored(rs2lib::social::DisplayName const&) const
    void FriendSystem::IsIgnored(DisplayName* param_1) {
        (field_208, param_1)->ContainsPlayerDisplayName();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100114150, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannel>::type make_shared<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(oldscape::core::SuperPacket&)
    jag* make_shared<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(SuperPacket* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ClanChannel* local_30[2];

        pvVar1 = (void*)aligned_alloc(184, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannel>, int,
                                   oldscape::rs2lib::social::ClanChannel*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100114200, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettings>::type make_shared<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(oldscape::core::SuperPacket&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(SuperPacket* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ClanSettings* local_30[2];

        pvVar1 = (void*)aligned_alloc(456, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int,
                                   oldscape::rs2lib::social::ClanSettings*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100114330, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(oldscape::core::SuperPacket&)
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(SuperPacket* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ClanChannelDelta* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>, int,
                                   oldscape::rs2lib::social::ClanChannelDelta*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100114450, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(oldscape::core::SuperPacket&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(SuperPacket* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ClanSettingsDelta* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>, int,
                                   oldscape::rs2lib::social::ClanSettingsDelta*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100114900, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket4::g4()
    /* ShuffledPacket4::g4s() */

    void ShuffledPacket4::g4s() {
        g4s_alt3();
    }

    // 0x100114900: the linker folded this into ShuffledPacket4::g4(), which has identical code
    ShuffledPacket4::g4s();

    // 0x100114910, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket3::g2s()
    int ShuffledPacket3::g2s() {
        short sVar1;

        sVar1 = g2s_alt2();
        return (int)sVar1;
    }

} // namespace jag

namespace jag::oldscape::helpers {
    // 0x100114970, 192 bytes, inline, placed by debug map only (low confidence)
    // eastl::list<int, eastl::allocator> GetKeysIf<int, SubInterface, Client::TcpIn(ServerConnection&)::$_17>(eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, Client::TcpIn(ServerConnection&)::$_17)
    list<int, eastl::allocator>* helpers::GetKeysIf<int, SubInterface, Client::TcpIn(ServerConnection&)::__17>(
        list<int, eastl::allocator>* param_1) {
        bool bVar1;
        char cVar2;
        __17* this;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar3;
        eastl local_48[16];
        hashtable_iterator_base local_38[16];

        eastl::list<int, eastl::allocator>::list(param_1);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        phVar3 = local_38;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_48, phVar3, extraout_RDX);
        if (bVar1) {
            do {
                this = (__17*)local_48->HeapBeginPtr();
                cVar2 = (ServerConnection&)->TcpIn()::$_17::operator()(this, (pair*)phVar3);
                if (cVar2 != '\0') {
                    eastl::list<int, eastl::allocator>::push_back(param_1, (int*)this);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_48);
                phVar3 = local_38;
                bVar1 = eastl::operator!=(local_48, local_38, extraout_RDX_00);
            } while (bVar1);
        }
        return param_1;
    }

} // namespace jag::oldscape::helpers
