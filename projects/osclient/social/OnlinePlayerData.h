// projects/osclient/social/OnlinePlayerData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerData {
    public:
        void SetWorld(int, int);
        ~OnlinePlayerData();
        GetWorldId() const;
        bool IsOnline() const;
        OnlinePlayerData();
    };

    // 0x10012e8b0, 32 bytes, inline, placed by class name and debug map
    // OnlinePlayerData<FriendChatUser>::SetWorld(int, int)
    void OnlinePlayerData<FriendChatUser>::SetWorld(int param_1, int param_2) {
        *(int*)(this + 136) = param_1;
        *(int*)(this + 140) = param_2;
    }

    // 0x10012ea80, 64 bytes, base-object destructor, inline, placed by class name
    // OnlinePlayerData<FriendChatUser>::~OnlinePlayerData()
    void OnlinePlayerData<FriendChatUser>::~OnlinePlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b40 + 16;
        ((this + 144))->~basic_string();
        ~PlayerData();
    }

    // 0x10012f260, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OnlinePlayerData<FriendChatUser>::GetWorldId() const
    /* dash3d::NXTRenderCanvas::GetLastNumVerts() */

    undefined4 dash3d::NXTRenderCanvas::GetLastNumVerts() {
        return m_lastNumVerts;
    }

    // 0x100131360, 16 bytes, inline, placed by class name
    // OnlinePlayerData<FriendData>::IsOnline() const
    bool OnlinePlayerData<FriendData>::IsOnline() {
        return 0 < *(int*)(this + 136);
    }

    // 0x10013ae70, 80 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerData<FriendData>::OnlinePlayerData()
    void OnlinePlayerData<FriendData>::OnlinePlayerData() {
        new (this) PlayerData<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8b38 + 16;
        *(undefined4*)(this + 136) = 4294967295;
        new ((this + 144)) eastl::string();
    }

    // 0x100151350, 80 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerData<FriendChatUser>::OnlinePlayerData()
    void OnlinePlayerData<FriendChatUser>::OnlinePlayerData() {
        new (this) PlayerData<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8b40 + 16;
        *(undefined4*)(this + 136) = 4294967295;
        new ((this + 144)) eastl::string();
    }

    // 0x1001af850, 64 bytes, base-object destructor, inline, placed by class name
    // OnlinePlayerData<FriendData>::~OnlinePlayerData()
    void OnlinePlayerData<FriendData>::~OnlinePlayerData() {
        *(undefined**)this = PTR_vtable_100ee8b38 + 16;
        ((this + 144))->~basic_string();
        ~PlayerData();
    }

} // namespace jag::oldscape::social
