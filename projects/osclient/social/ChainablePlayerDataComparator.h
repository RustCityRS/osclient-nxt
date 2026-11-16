// projects/osclient/social/ChainablePlayerDataComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class ChainablePlayerDataComparator {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual void AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendData>>&& playerDataComparator);
        ChainablePlayerDataComparator();
        uint64_t GetChainedCompare(const FriendData& friendData1, const FriendData& friendData2) const;
        ~ChainablePlayerDataComparator();
        void AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>>&& playerDataComparator);
        uint64_t GetChainedCompare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100170650
    ChainablePlayerDataComparator<FriendData>::ChainablePlayerDataComparator() : PlayerDataComparator<FriendData>() {
        ((this + 1))->unique_ptr<true, void>();
    }

    // 0x1001706e0
    void ChainablePlayerDataComparator<FriendData>::AddChainedComparator(
        std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>&&
            playerDataComparator) {
        long* plVar2;
        unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData> _> _>*
            playerDataComparator_00;

        playerDataComparator_00 = (unique_ptr<PlayerDataComparator<FriendData>,
                                              std::default_delete<PlayerDataComparator<FriendData> _> _>*)(this + 1);
        if (playerDataComparator_00 == playerDataComparator) {
            *playerDataComparator_00 = playerDataComparator;
        } else {
            plVar2 = (long*)(*playerDataComparator_00).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, playerDataComparator);
        }
    }

    // 0x100170780
    uint64_t ChainablePlayerDataComparator<FriendData>::GetChainedCompare(const FriendData& friendData1,
                                                                          const FriendData& friendData2) const {
        uint64_t* puVar2;

        bool bVar1 = ((this + 1)) == friendData1;
        uint64_t uVar3 = 0;
        if (!bVar1) {
            puVar2 = (uint64_t*)(*((this + 1))).operator->();
            uVar3 = (**(void (**)(...))*puVar2)(puVar2, friendData1, friendData2);
        }
        return uVar3;
    }

    // 0x1001707e0
    ChainablePlayerDataComparator<FriendData>::~ChainablePlayerDataComparator() {
        ((this + 1))->~unique_ptr();
    }

    // 0x100174d60
    ChainablePlayerDataComparator<FriendChatUser>::ChainablePlayerDataComparator()
        : PlayerDataComparator<FriendChatUser>() {
        ((this + 1))->unique_ptr<true, void>();
    }

    // 0x100174df0
    void ChainablePlayerDataComparator<FriendChatUser>::AddChainedComparator(
        std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>&& playerDataComparator) {
        long* plVar2;
        unique_ptr<PlayerDataComparator<FriendChatUser>, std::default_delete<PlayerDataComparator<FriendChatUser> _> _>*
            playerDataComparator_00;

        playerDataComparator_00 =
            (unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser> _> _>*)(this + 1);
        if (playerDataComparator_00 == playerDataComparator) {
            *playerDataComparator_00 = playerDataComparator;
        } else {
            plVar2 = (long*)(*playerDataComparator_00).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, playerDataComparator);
        }
    }

    // 0x100174e90
    uint64_t
    ChainablePlayerDataComparator<FriendChatUser>::GetChainedCompare(const FriendChatUser& friendChatUser1,
                                                                     const FriendChatUser& friendChatUser2) const {
        uint64_t* puVar2;

        bool bVar1 = ((this + 1)) == friendChatUser1;
        uint64_t uVar3 = 0;
        if (!bVar1) {
            puVar2 = (uint64_t*)(*((this + 1))).operator->();
            uVar3 = (**(void (**)(...))*puVar2)(puVar2, friendChatUser1, friendChatUser2);
        }
        return uVar3;
    }

    // 0x100174ef0
    ChainablePlayerDataComparator<FriendChatUser>::~ChainablePlayerDataComparator() {
        ((this + 1))->~unique_ptr();
    }

} // namespace jag::oldscape::social
