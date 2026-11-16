// projects/osclient/social/OnlinePlayerData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerData {
    public:
        void SetWorld(int arg1, int arg2);
        ~OnlinePlayerData();
        uint32_t GetWorldId() const;
        bool IsOnline() const;
        OnlinePlayerData();
    };

    // 0x10012e8b0
    void OnlinePlayerData<FriendChatUser>::SetWorld(int arg1, int arg2) {
        *(int*)&this[17]._vptr = arg1;
        *(int*)((long)&this[17]._vptr + 4) = arg2;
    }

    // 0x10012ea80
    OnlinePlayerData<FriendChatUser>::~OnlinePlayerData() {
        ((this + 18))->~basic_string();
    }

    // 0x10012f260
    uint32_t OnlinePlayerData<FriendChatUser>::GetWorldId() const {
        return m_lastNumVerts;
    }

    // 0x100131360
    bool OnlinePlayerData<FriendData>::IsOnline() const {
        return 0 < *(int*)&this[17]._vptr;
    }

    // 0x10013ae70
    OnlinePlayerData<FriendData>::OnlinePlayerData() : PlayerData<FriendData>() {
        new ((this + 18)) eastl::string();
    }

    // 0x100151350
    OnlinePlayerData<FriendChatUser>::OnlinePlayerData() : PlayerData<FriendChatUser>() {
        new ((this + 18)) eastl::string();
    }

    // 0x1001af850
    OnlinePlayerData<FriendData>::~OnlinePlayerData() {
        ((this + 18))->~basic_string();
    }

} // namespace jag::oldscape::social
