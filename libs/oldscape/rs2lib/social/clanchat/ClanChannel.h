// libs/oldscape/rs2lib/social/clanchat/ClanChannel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::social {
    class ClanChannel {
    public:
        // virtual methods in vtable order
        virtual ~ClanChannel();
        ClanChannel(long long arg1, bool arg2, bool arg3);
        ClanChannel(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        Array<int> GetUserSortedIndex();
        unsigned int AddUser(shared_ptr<ClanChannelUser>& clanChannelUser);
        unsigned long IsExistingUser(shared_ptr<ClanChannelUser>& clanChannelUser);
        void DoAddUser(shared_ptr<ClanChannelUser>& clanChannelUser);
        void DoDeleteUser(int arg1);
        void GetUserListSize();
        bool IsGuestLimitReached();
        bool DeleteUser(long long arg1);
        unsigned long FindUserPos(long long arg1);
        unsigned long FindUserPos(eastl::string str);
        auto FindUser(long long arg1);
        int GetEncodeLength(bool arg1, bool arg2);
        void EncodeV2(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        void Encode(PacketJ<Array<unsigned char>>& packetJ, int arg2, bool arg3, bool arg4);
        auto GetDescription();
        static bool m_verbose;
        static bool m_fluttered;

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
        long long field_32;
        bool field_40;
        bool field_41;
        uint8_t _unknown_42[38];
        uint64_t field_80;
        uint8_t _unknown_88[32];
        bool field_120;
        bool field_121;
        bool field_122;
        uint8_t _unknown_123[13];
    };

    // 0x100283b70
    ClanChannel::~ClanChannel() {
        field_128.~Array();
        field_88.~basic_string();
        field_48.~vector();
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x10025afb0
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringNoConversion(bool arg1) {
        bool in_DL;
        uint64_t in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(((uint64_t)in_register_00000031
                                                                                       << 8) |
                                                                                      (uint8_t)arg1),
            (eastl::string*)this, in_DL);
        return this;
    }

    // 0x10025b000
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelUser>::type
    make_shared<oldscape::rs2lib::social::ClanChannelUser>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ClanChannelUser* local_28[2];

        auto arg1 = aligned_alloc(128, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelUser>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelUser>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>, int,
                              oldscape::rs2lib::social::ClanChannelUser*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
