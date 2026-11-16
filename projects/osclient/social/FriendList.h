// projects/osclient/social/FriendList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    class FriendList {
    public:
        class FriendEvent;
        // virtual methods in vtable order
        virtual FriendList* CreatePlayerData() const;
        FriendList(rs2lib::social::NameSpace nameSpace);
        void ProcessUpdate(PacketJ<Array<unsigned char>>& packetJ, int arg2, ErrorCapture& errorCapture);
        ~FriendList();
        bool IsFriend(const rs2lib::social::DisplayName& displayName, bool arg2) const;

    private:
        int field_8;
        int field_12;
        uint8_t _unknown_16[144];
        NameSpace field_160;
        int field_164;
        uint8_t _unknown_168[8];
    };

    class FriendList::FriendEvent {
    public:
        FriendEvent(const rs2lib::social::DisplayName& displayName, int arg2);
        FriendEvent(FriendEvent&& friendEvent);
        ~FriendEvent();
        FriendEvent* operator=(FriendEvent&& friendEvent);

    private:
        uint8_t _unknown_0[64];
        int field_64;
        short field_68;
        uint8_t field_70;
        uint8_t _unknown_71[5];
    };

    // 0x100056a00
    FriendList::FriendEvent::FriendEvent(FriendList::FriendEvent&& friendEvent) : ConsoleCommandHelp(friendEvent) {
        int iVar1 = friendEvent.field_64;
        *(uint32_t*)((long)&field_64 + 3) = *(uint32_t*)((long)&friendEvent.field_64 + 3);
        field_64 = iVar1;
    }

    // 0x10013aa30
    FriendList::~FriendList() {
        field_168.~vector();
    }

    // 0x10013aad0
    FriendList* FriendList::CreatePlayerData() const {
        *this = std::make_unique<FriendData>();
        return this;
    }

    // 0x100185bc0
    bool FriendList::IsFriend(const rs2lib::social::DisplayName& displayName, bool arg2) const {
        uint64_t uVar2;

        long lVar1 = GetPlayer(displayName);
        if ((lVar1 == 0) || ((arg2 && (*(int*)(lVar1 + 136) == 0)))) {
            uVar2 = 0;
        } else {
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x1001af6d0
    FriendEvent* FriendList::FriendEvent::operator=(FriendList::FriendEvent&& friendEvent) {
        *this = friendEvent;
        uint32_t uVar1 = *(uint32_t*)((long)&friendEvent.field_64 + 3);
        field_64 = friendEvent.field_64;
        *(uint32_t*)((long)&field_64 + 3) = uVar1;
        return this;
    }

} // namespace jag::oldscape::social
