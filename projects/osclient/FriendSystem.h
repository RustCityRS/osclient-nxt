// projects/osclient/FriendSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class FriendSystem {
    public:
        void NotifyConnectingFriendServer();
        bool IsOnlineFriend(const rs2lib::social::DisplayName& displayName) const;
        FriendSystem(rs2lib::social::NameSpace nameSpace);
        ~FriendSystem();
        bool IsReady() const;
        void ProcessFriendListUpdate(PacketJ<Array<unsigned char>>& packetJ, int arg2, ErrorCapture& errorCapture);
        void Service();
        void Reset();
        bool IsFriend(const rs2lib::social::DisplayName& displayName, bool arg2) const;
        void AddFriend(const eastl::string& str);
        unsigned long IsFriendListAtMaxCapacity() const;
        void NotifyFriendListFull();
        void NotifyCannotFriendSelf();
        void NotifyAlreadyFriend(const eastl::string& str);
        void IsIgnored(const rs2lib::social::DisplayName& displayName) const;
        void NotifyFriendOnIgnoreList(const eastl::string& str);
        void SendAddFriendServerMessage(const eastl::string& str);
        void AddFriendSystemChatNotification(const eastl::string& str);
        void AddIgnore(const eastl::string& str);
        unsigned long IsIgnoreListAtMaxCapacity() const;
        void NotifyIgnoreListFull();
        void NotifyCannotIgnoreSelf();
        void NotifyAlreadyIgnored(const eastl::string& str);
        void NotifyIgnoreOnFriendList(const eastl::string& str);
        void SendAddIgnoreServerMessage(const eastl::string& str);
        void DelFriend(const eastl::string& str);
        void DelIgnore(const eastl::string& str, bool arg2);
        void SetFriendRank(const eastl::string& str, int arg2);

    private:
        NameSpace field_0;
        uint8_t _unknown_4[4];
        FriendList field_8;
        uint8_t _unknown_184[24];
        IgnoreList field_208;
        uint32_t field_376;
        uint8_t _unknown_380[25956];
    };

    // 0x1001140f0
    void FriendSystem::NotifyConnectingFriendServer() {
        field_376 = 1;
    }

    // 0x100114860
    bool PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::CheckCrc() {
        int iVar2;
        Array<unsigned char, BucketAllocatorEASTL>* arg1;
        bool bVar3;
        Array<unsigned char> local_38;

        int iVar1 = size();
        iVar1 = iVar1 - 4;
        if (iVar1 < 0) {
            bVar3 = false;
        } else {
            SetPos((long)iVar1);
            arg1 = (Array<unsigned char, BucketAllocatorEASTL>*)SSOBeginPtr();
            local_38.Array<BucketAllocatorEASTL>(*arg1);
            iVar1 = GetCrc(&local_38, 0, iVar1);
            iVar2 = g4();
            bVar3 = iVar1 == iVar2;
        }
        return bVar3;
    }

    // 0x10011dbc0
    bool FriendSystem::IsOnlineFriend(const rs2lib::social::DisplayName& displayName) const {
        auto this_00 = field_8->GetPlayer(displayName);
        if (this_00 == nullptr) {
            return 0;
        }
        return this_00->IsOnline();
    }

    // 0x100139fd0
    FriendSystem::FriendSystem(rs2lib::social::NameSpace nameSpace)
        : field_0(nameSpace), field_8(nameSpace), field_208(nameSpace), field_376(0) {}

    // 0x10013cfd0
    FriendSystem::~FriendSystem() {
        field_208->~IgnoreList();
        field_8->~FriendList();
    }

    // 0x1001611a0
    bool FriendSystem::IsReady() const {
        return field_376 == 2;
    }

    // 0x100185e30
    void FriendSystem::IsIgnored(const rs2lib::social::DisplayName& displayName) const {
        field_208->ContainsPlayerDisplayName(displayName);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100114150
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannel>::type
    make_shared<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(
        oldscape::core::SuperPacket& superPacket) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ClanChannel* local_30[2];

        auto arg1 = aligned_alloc(184, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannel>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanChannel, oldscape::core::SuperPacket&>(
                (void*)((long)arg1 + 32), superPacket);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannel>, int,
                              oldscape::rs2lib::social::ClanChannel*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100114200
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettings>::type
    make_shared<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(
        oldscape::core::SuperPacket& superPacket) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ClanSettings* local_30[2];

        auto arg1 = aligned_alloc(456, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettings>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettings, oldscape::core::SuperPacket&>(
                (void*)((long)arg1 + 32), superPacket);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettings>, int,
                              oldscape::rs2lib::social::ClanSettings*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100114330
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(
        oldscape::core::SuperPacket& superPacket) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ClanChannelDelta* local_30[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(
                (void*)((long)arg1 + 32), superPacket);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>, int,
                              oldscape::rs2lib::social::ClanChannelDelta*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100114450
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(
        oldscape::core::SuperPacket& superPacket) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ClanSettingsDelta* local_30[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(
                (void*)((long)arg1 + 32), superPacket);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100114900
    void ShuffledPacket4::g4() {
        g4s_alt3();
    }

    // 0x100114900: ShuffledPacket4::g4s() has the same machine code as ShuffledPacket4::g4()

    // 0x100114910
    int ShuffledPacket3::g2s() {
        short sVar1 = g2s_alt2();
        return (int)sVar1;
    }

} // namespace jag

namespace jag::oldscape::helpers {
    // 0x100114970
    eastl::list<int>
    GetKeysIf<int, SubInterface, Client::TcpIn(ServerConnection&)::$_17>(eastl::hash_map<int, SubInterface>& arg1,
                                                                         Client::TcpIn(ServerConnection&)::$_17 arg2) {
        eastl::list<int> result;
        __17* self;
        ReturnValue result;
        ReturnValue local_38;

        new (arg1) eastl::list<int>();
        auto local_48 = arg2->begin();
        &result = &local_38;
        result = arg2->end();
        bool cVar1 = local_48 != result;
        if (cVar1) {
            do {
                self = (__17*)local_48.HeapBeginPtr();
                cVar1 = (ServerConnection&)->TcpIn()::$_17::operator()(self, &result);
                if (cVar1) {
                    arg1.push_back(*self);
                }
                ++local_48;
                &result = &local_38;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
        return arg1;
    }

} // namespace jag::oldscape::helpers
