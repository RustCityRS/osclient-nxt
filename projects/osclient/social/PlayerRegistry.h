// projects/osclient/social/PlayerRegistry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerRegistry {
    public:
        class Indirector;
        class IndirectorComparator;
        PlayerRegistry(int arg1);
        void UpdatePlayerNames(FriendData* friendData, const rs2lib::social::DisplayName& displayName1,
                               const rs2lib::social::DisplayName& displayName2);
        FriendData* AddPlayer(const rs2lib::social::DisplayName& displayName1,
                              const rs2lib::social::DisplayName& displayName2);
        void UpdatePlayerNames(IgnoreData* ignoreData, const rs2lib::social::DisplayName& displayName1,
                               const rs2lib::social::DisplayName& displayName2);
        IgnoreData* AddPlayer(const rs2lib::social::DisplayName& displayName1,
                              const rs2lib::social::DisplayName& displayName2);
        void AddPlayerToIndexes(FriendData* friendData);
        void AddPlayerToIndexes(IgnoreData* ignoreData);
        uint64_t GetPlayerByOldDisplayName(const rs2lib::social::DisplayName& displayName) const;
        void Sort();
        bool ContainsPlayerDisplayName(const rs2lib::social::DisplayName& displayName) const;
        uint64_t GetPlayerBySlot(int arg1) const;
        void Reset();
        uint64_t AddPlayer(const rs2lib::social::DisplayName& displayName);
        FriendChatUser* AddPlayer(const rs2lib::social::DisplayName& displayName1,
                                  const rs2lib::social::DisplayName& displayName2);
        void AddPlayerToIndexes(FriendChatUser* friendChatUser);
        void RemovePlayer(const FriendChatUser* friendChatUser);
        unsigned long FindSlotFromPlayer(const FriendChatUser* friendChatUser);
        bool RemovePlayerFromIndexes(const FriendChatUser* friendChatUser);
        void RemoveSlotFromMasterList(int arg1);
        ~PlayerRegistry();
        void ResetSortComparator();
        void AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendData>>&& playerDataComparator);
        void AddSortComparator(std::unique_ptr<PlayerDataComparator<IgnoreData>>&& playerDataComparator);
        void AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>>&& playerDataComparator);
        uint64_t GetPlayerByCurrentDisplayName(const rs2lib::social::DisplayName& displayName) const;
        bool IsFull() const;
        bool RemovePlayer(const rs2lib::social::DisplayName& displayName);
        void GetPlayer(const rs2lib::social::DisplayName& displayName) const;
        void RemovePlayer(const FriendData* friendData);
        unsigned long FindSlotFromPlayer(const FriendData* friendData);
        void RemovePlayer(const IgnoreData* ignoreData);
        unsigned long FindSlotFromPlayer(const IgnoreData* ignoreData);
    };

    template <typename...> // 1 instantiations, e.g.
    class PlayerRegistry::Indirector {
    public:
        unsigned int operator()(const std::unique_ptr<FriendChatUser>& friendChatUser1,
                                const std::unique_ptr<FriendChatUser>& friendChatUser2);
        unsigned int operator()(const std::unique_ptr<FriendData>& friendData1,
                                const std::unique_ptr<FriendData>& friendData2);
        unsigned int operator()(const std::unique_ptr<IgnoreData>& ignoreData1,
                                const std::unique_ptr<IgnoreData>& ignoreData2);
    };

    template <typename...> // 1 instantiations, e.g.
    class PlayerRegistry::IndirectorComparator {
    public:
        unsigned int operator()(const std::unique_ptr<FriendChatUser>& friendChatUser1,
                                const std::unique_ptr<FriendChatUser>& friendChatUser2);
        unsigned int operator()(const std::unique_ptr<FriendData>& friendData1,
                                const std::unique_ptr<FriendData>& friendData2);
        unsigned int operator()(const std::unique_ptr<IgnoreData>& ignoreData1,
                                const std::unique_ptr<IgnoreData>& ignoreData2);
    };

    // 0x100024c00
    PlayerRegistry<FriendData>::PlayerRegistry(int arg1) {
        hash<rs2lib::social::DisplayName> local_40;
        equal_to<rs2lib::social::DisplayName> local_38;

        *(uint8_t**)this = PTR_vtable_100ee8b20 + 16;
        *(int*)(this + 8) = arg1;
        *(uint32_t*)(this + 12) = 0;
        new ((this + 16)) Array<std::unique_ptr<FriendData>>();
        int iVar1 = arg1 + 7;
        if (-1 < arg1) {
            iVar1 = arg1;
        }
        new ((this + 40))
            eastl::hash_map<rs2lib::social::DisplayName, FriendData*>((long)(iVar1 >> 3), local_40, local_38, local_48);
        new ((this + 96))
            eastl::hash_map<rs2lib::social::DisplayName, FriendData*>((long)(iVar1 >> 3), local_40, local_38, local_48);
        ((this + 152))->unique_ptr<true, void>();
        ((this + 16))->set_max_size((long)arg1, 3);
    }

    // 0x100025240
    void PlayerRegistry<FriendData>::UpdatePlayerNames(FriendData* friendData,
                                                       const rs2lib::social::DisplayName& displayName1,
                                                       const rs2lib::social::DisplayName& displayName2) {
        RemovePlayerFromIndexes(this, (FriendChatUser*)friendData);
        friendData->SetDisplayNames(displayName1, displayName2);
        AddPlayerToIndexes(this, friendData);
    }

    // 0x1000252e0
    FriendData* PlayerRegistry<FriendData>::AddPlayer(const rs2lib::social::DisplayName& displayName1,
                                                      const rs2lib::social::DisplayName& displayName2) {
        unique_ptr<FriendData>* puVar2;
        FriendData* friendData;
        unique_ptr<FriendData, std::default_delete<FriendData> _> local_38;

        if (GetPlayerByCurrentDisplayName(this, displayName1) == 0) {
            (*(void (*)(...)) * *(uint64_t**)this)(&local_38, this);
            puVar2 = (unique_ptr<FriendData>*)(*((this + 16)))[(long)*(int*)(this + 12)];
            *puVar2 = &local_38;
            puVar2 = (unique_ptr<FriendData>*)(*((this + 16)))[(long)*(int*)(this + 12)];
            friendData = (FriendData*)puVar2->get();
            *(int*)(this + 12) = *(int*)(this + 12) + 1;
            friendData->SetDisplayNames(displayName1, displayName2);
            AddPlayerToIndexes(this, friendData);
        } else {
            friendData = nullptr;
        }
        return friendData;
    }

    // 0x1000256e0
    void PlayerRegistry<IgnoreData>::UpdatePlayerNames(IgnoreData* ignoreData,
                                                       const rs2lib::social::DisplayName& displayName1,
                                                       const rs2lib::social::DisplayName& displayName2) {
        RemovePlayerFromIndexes(ignoreData);
        ignoreData->SetDisplayNames(displayName1, displayName2);
        AddPlayerToIndexes(this, ignoreData);
    }

    // 0x100025720
    IgnoreData* PlayerRegistry<IgnoreData>::AddPlayer(const rs2lib::social::DisplayName& displayName1,
                                                      const rs2lib::social::DisplayName& displayName2) {
        unique_ptr<IgnoreData>* puVar2;
        IgnoreData* ignoreData;
        unique_ptr<IgnoreData, std::default_delete<IgnoreData> _> local_38;

        if (GetPlayerByCurrentDisplayName(displayName1) == 0) {
            (*(void (*)(...)) * *(uint64_t**)this)(&local_38, this);
            puVar2 = (unique_ptr<IgnoreData>*)(*((this + 16)))[(long)*(int*)(this + 12)];
            *puVar2 = &local_38;
            puVar2 = (unique_ptr<IgnoreData>*)(*((this + 16)))[(long)*(int*)(this + 12)];
            ignoreData = (IgnoreData*)puVar2->get();
            *(int*)(this + 12) = *(int*)(this + 12) + 1;
            ignoreData->SetDisplayNames(displayName1, displayName2);
            AddPlayerToIndexes(this, ignoreData);
        } else {
            ignoreData = nullptr;
        }
        return ignoreData;
    }

    // 0x100056520
    void PlayerRegistry<FriendData>::AddPlayerToIndexes(FriendData* friendData) {
        FriendData* this_01;

        uint64_t* puVar1 = (uint64_t*)(*((this + 40)))[friendData->field_8];
        *puVar1 = friendData;
        uint8_t* this_00 = &friendData->field_72;
        if (this_00->IsValid() != '\0') {
            this_01 = (FriendData*)GetPlayerByOldDisplayName(*this_00);
            puVar1 = (uint64_t*)(*((this + 96)))[*this_00];
            *puVar1 = friendData;
            if ((this_01 != nullptr) && (this_01 != friendData)) {
                this_01->ClearOldDisplayName();
            }
        }
    }

    // 0x100056f30
    void PlayerRegistry<IgnoreData>::AddPlayerToIndexes(IgnoreData* ignoreData) {
        IgnoreData* this_01;

        uint64_t* puVar1 = (uint64_t*)(*((this + 40)))[ignoreData->field_8];
        *puVar1 = ignoreData;
        uint8_t* this_00 = &ignoreData->field_72;
        if (this_00->IsValid() != '\0') {
            this_01 = (IgnoreData*)GetPlayerByOldDisplayName(*this_00);
            puVar1 = (uint64_t*)(*((this + 96)))[*this_00];
            *puVar1 = ignoreData;
            if ((this_01 != nullptr) && (this_01 != ignoreData)) {
                this_01->ClearOldDisplayName();
            }
        }
    }

    // 0x100056fd0
    uint64_t
    PlayerRegistry<IgnoreData>::GetPlayerByOldDisplayName(const rs2lib::social::DisplayName& displayName) const {
        long lVar2;
        obj_iterator local_38;
        eastl local_28;

        if (displayName.IsValid()) {
            &local_28 = (eastl[16])((this + 96))->find(displayName);
            &local_38 = (obj_iterator[16])((this + 96))->end();
            if (!(local_28 == local_38)) {
                lVar2 = local_28.HeapBeginPtr();
                return *(uint64_t*)(lVar2 + 64);
            }
        }
        return 0;
    }

    // 0x1000f3740
    void PlayerRegistry<FriendChatUser>::Sort() {
        unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>* friendChatUser1;
        PlayerDataComparator<FriendChatUser>* playerDataComparator;
        Indirector* indirector;
        void* in_RSI;
        IndirectorComparator* local_30;
        eastl local_28;

        friendChatUser1 = (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>*)((this + 16))->data();
        int iVar1 = *(int*)(this + 12);
        if (((this + 152)) == in_RSI) {
            eastl::destruct<highlight::NpcUID*>(&local_28);
            std::sort<std::unique_ptr<FriendChatUser>*, PlayerRegistry<FriendChatUser>::Indirector>(
                friendChatUser1, friendChatUser1 + (long)iVar1 * 8, indirector);
        } else {
            playerDataComparator = (PlayerDataComparator<FriendChatUser>*)((this + 152))->get();
            new (&local_30)
                eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
            std::sort<std::unique_ptr<FriendChatUser>*, PlayerRegistry<FriendChatUser>::IndirectorComparator>(
                friendChatUser1, friendChatUser1 + (long)iVar1 * 8, local_30);
        }
    }

    // 0x10011dc50
    bool
    PlayerRegistry<FriendChatUser>::ContainsPlayerDisplayName(const rs2lib::social::DisplayName& displayName) const {
        uint64_t uVar2;
        uint8_t auVar3[16];
        eastl local_40;
        obj_iterator local_30;

        bool cVar1 = displayName.IsValid();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            &local_40 = (eastl[16])((this + 40))->find(displayName);
            &local_30 = (obj_iterator[16])((this + 40))->end();
            cVar1 = local_40 != local_30;
            uVar2 = 1;
            if (!cVar1) {
                auVar3 = ((this + 96))->find(displayName);
                &local_40 = (eastl[16])auVar3;
                auVar3 = ((this + 96))->end();
                &local_30 = (obj_iterator[16])auVar3;
                uVar2 = local_40 != local_30;
            }
        }
        return uVar2;
    }

    // 0x10012d050
    uint64_t PlayerRegistry<FriendChatUser>::GetPlayerBySlot(int arg1) const {
        if ((arg1 < 0) || (*(int*)(this + 12) <= arg1)) {
            return 0;
        }
        return ((unique_ptr<FriendChatUser>*)(*((this + 16)))[(long)arg1])->get();
    }

    // 0x10012e7f0
    void PlayerRegistry<FriendChatUser>::Reset() {
        unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>* friendChatUser1;
        uint8_t auVar1[16];

        *(uint32_t*)(this + 12) = 0;
        friendChatUser1 = (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>*)((this + 16))->data();
        auVar1 = ((this + 16))->end();
        std::fill<std::unique_ptr<FriendChatUser>*, decltype(nullptr)>(friendChatUser1, auVar1._0_8_, *auVar1._8_8_);
        ((this + 40))->clear();
        ((this + 96))->clear();
    }

    // 0x10012e850
    uint64_t PlayerRegistry<FriendChatUser>::AddPlayer(const rs2lib::social::DisplayName& displayName) {
        DisplayName local_60;
        uint64_t uVar1 = AddPlayer(this, displayName, &local_60);
        return uVar1;
    }

    // 0x10012ebf0
    FriendChatUser* PlayerRegistry<FriendChatUser>::AddPlayer(const rs2lib::social::DisplayName& displayName1,
                                                              const rs2lib::social::DisplayName& displayName2) {
        unique_ptr<FriendChatUser>* puVar2;
        FriendChatUser* friendChatUser;
        unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _> local_38;

        if (GetPlayerByCurrentDisplayName(displayName1) == 0) {
            (*(void (*)(...)) * *(uint64_t**)this)(&local_38, this);
            puVar2 = (unique_ptr<FriendChatUser>*)(*((this + 16)))[(long)*(int*)(this + 12)];
            *puVar2 = &local_38;
            puVar2 = (unique_ptr<FriendChatUser>*)(*((this + 16)))[(long)*(int*)(this + 12)];
            friendChatUser = (FriendChatUser*)puVar2->get();
            *(int*)(this + 12) = *(int*)(this + 12) + 1;
            friendChatUser->SetDisplayNames(displayName1, displayName2);
            AddPlayerToIndexes(this, friendChatUser);
        } else {
            friendChatUser = nullptr;
        }
        return friendChatUser;
    }

    // 0x10012edf0
    void PlayerRegistry<FriendChatUser>::AddPlayerToIndexes(FriendChatUser* friendChatUser) {
        FriendChatUser* this_01;

        uint64_t* puVar1 = (uint64_t*)(*((this + 40)))[friendChatUser->field_8];
        *puVar1 = friendChatUser;
        uint8_t* this_00 = &friendChatUser->field_72;
        if (this_00->IsValid() != '\0') {
            this_01 = (FriendChatUser*)GetPlayerByOldDisplayName(this, (DisplayName*)this_00);
            puVar1 = (uint64_t*)(*((this + 96)))[*this_00];
            *puVar1 = friendChatUser;
            if ((this_01 != nullptr) && (this_01 != friendChatUser)) {
                this_01->ClearOldDisplayName();
            }
        }
    }

    // 0x10012f270
    void PlayerRegistry<FriendChatUser>::RemovePlayer(const FriendChatUser* friendChatUser) {
        int arg1 = FindSlotFromPlayer(this, friendChatUser);
        if (arg1 != -1) {
            RemovePlayerFromIndexes(friendChatUser);
            RemoveSlotFromMasterList(this, arg1);
        }
    }

    // 0x10012f2b0
    unsigned long PlayerRegistry<FriendChatUser>::FindSlotFromPlayer(const FriendChatUser* friendChatUser) {
        unique_ptr<FriendChatUser>* this_00;
        unsigned long arg1;

        if (0 < *(int*)(this + 12)) {
            arg1 = 0;
            do {
                this_00 = (unique_ptr<FriendChatUser>*)(*((this + 16)))[arg1];
                if ((FriendChatUser*)this_00->get() == friendChatUser) {
                    return arg1 & 4294967295;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)*(int*)(this + 12));
        }
        return 4294967295;
    }

    // 0x10012f320
    bool PlayerRegistry<FriendChatUser>::RemovePlayerFromIndexes(const FriendChatUser* friendChatUser) {
        long lVar2 = ((this + 40))->erase(friendChatUser->field_8);
        if (lVar2 != 0) {
            if (friendChatUser->field_72.IsValid() != '\0') {
                ((this + 96))->erase(friendChatUser->field_72);
            }
        }
        return lVar2 != 0;
    }

    // 0x10012f380
    void PlayerRegistry<FriendChatUser>::RemoveSlotFromMasterList(int arg1) {
        long lVar2;

        int iVar1 = *(int*)(this + 12);
        *(int*)(this + 12) = iVar1 - 1;
        if (arg1 < iVar1 - 1) {
            lVar2 = ((this + 16))->data();
            eastl::move<std::unique_ptr<FriendChatUser>*, std::unique_ptr<FriendChatUser>*>(
                (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>*)(lVar2 + (long)arg1 * 8 + 8),
                (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>*)(lVar2 +
                                                                                     (long)*(int*)(this + 12) * 8 + 8),
                (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> _>*)(lVar2 + (long)arg1 * 8));
        }
    }

    // 0x10013a090
    PlayerRegistry<IgnoreData>::PlayerRegistry(int arg1) {
        hash<rs2lib::social::DisplayName> local_40;
        equal_to<rs2lib::social::DisplayName> local_38;

        *(uint8_t**)this = PTR_vtable_100ee8b28 + 16;
        *(int*)(this + 8) = arg1;
        *(uint32_t*)(this + 12) = 0;
        new ((this + 16)) Array<std::unique_ptr<IgnoreData>>();
        int iVar1 = arg1 + 7;
        if (-1 < arg1) {
            iVar1 = arg1;
        }
        new ((this + 40))
            eastl::hash_map<rs2lib::social::DisplayName, IgnoreData*>((long)(iVar1 >> 3), local_40, local_38, local_48);
        new ((this + 96))
            eastl::hash_map<rs2lib::social::DisplayName, IgnoreData*>((long)(iVar1 >> 3), local_40, local_38, local_48);
        ((this + 152))->unique_ptr<true, void>();
        ((this + 16))->set_max_size((long)arg1, 3);
    }

    // 0x10013aa80
    PlayerRegistry<FriendData>::~PlayerRegistry() {
        *(uint8_t**)this = PTR_vtable_100ee8b20 + 16;
        ((this + 152))->~unique_ptr();
        ((this + 96))->~hash_map();
        ((this + 40))->~hash_map();
        ((this + 16))->~Array();
    }

    // 0x10013bf50
    PlayerRegistry<FriendChatUser>::~PlayerRegistry() {
        *(uint8_t**)this = PTR_vtable_100ee8b30 + 16;
        ((this + 152))->~unique_ptr();
        ((this + 96))->~hash_map();
        ((this + 40))->~hash_map();
        ((this + 16))->~Array();
    }

    // 0x10013d020
    PlayerRegistry<IgnoreData>::~PlayerRegistry() {
        *(uint8_t**)this = PTR_vtable_100ee8b28 + 16;
        ((this + 152))->~unique_ptr();
        ((this + 96))->~hash_map();
        ((this + 40))->~hash_map();
        ((this + 16))->~Array();
    }

    // 0x100148880
    unsigned int
    PlayerRegistry<FriendChatUser>::Indirector::operator()(const std::unique_ptr<FriendChatUser>& friendChatUser1,
                                                           const std::unique_ptr<FriendChatUser>& friendChatUser2) {
        FriendChatUser* friendChatUser;

        auto this_00 = friendChatUser1.operator->();
        friendChatUser = (FriendChatUser*)friendChatUser2.get();
        return this_00->CompareTo(*friendChatUser) >> 31;
    }

    // 0x1001493b0
    unsigned int PlayerRegistry<FriendChatUser>::IndirectorComparator::operator()(
        const std::unique_ptr<FriendChatUser>& friendChatUser1,
        const std::unique_ptr<FriendChatUser>& friendChatUser2) {
        uint64_t* puVar1 = *(uint64_t**)this;
        uint64_t uVar3 = friendChatUser1.get();
        uint64_t uVar4 = friendChatUser2.get();
        return (**(void (**)(...))*puVar1)(puVar1, uVar3, uVar4) >> 31;
    }

    // 0x100150db0
    PlayerRegistry<FriendChatUser>::PlayerRegistry(int arg1) {
        hash<rs2lib::social::DisplayName> local_40;
        equal_to<rs2lib::social::DisplayName> local_38;

        *(uint8_t**)this = PTR_vtable_100ee8b30 + 16;
        *(int*)(this + 8) = arg1;
        *(uint32_t*)(this + 12) = 0;
        new ((this + 16)) Array<std::unique_ptr<FriendChatUser>>();
        int iVar1 = arg1 + 7;
        if (-1 < arg1) {
            iVar1 = arg1;
        }
        new ((this + 40)) eastl::hash_map<rs2lib::social::DisplayName, FriendChatUser*>((long)(iVar1 >> 3), local_40,
                                                                                        local_38, local_48);
        new ((this + 96)) eastl::hash_map<rs2lib::social::DisplayName, FriendChatUser*>((long)(iVar1 >> 3), local_40,
                                                                                        local_38, local_48);
        ((this + 152))->unique_ptr<true, void>();
        ((this + 16))->set_max_size((long)arg1, 3);
    }

    // 0x1001611b0
    uint64_t PlayerRegistry<FriendData>::GetPlayerBySlot(int arg1) const {
        if ((arg1 < 0) || (*(int*)(this + 12) <= arg1)) {
            return 0;
        }
        return ((unique_ptr<FriendData>*)(*((this + 16)))[(long)arg1])->get();
    }

    // 0x100161230
    uint64_t PlayerRegistry<IgnoreData>::GetPlayerBySlot(int arg1) const {
        if ((arg1 < 0) || (*(int*)(this + 12) <= arg1)) {
            return 0;
        }
        return ((unique_ptr<IgnoreData>*)(*((this + 16)))[(long)arg1])->get();
    }

    // 0x1001612c0
    void PlayerRegistry<FriendData>::ResetSortComparator() {
        void* in_RSI;

        (*((this + 152))) = in_RSI;
    }

    // 0x1001612e0
    void PlayerRegistry<FriendData>::AddSortComparator(
        std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>&&
            playerDataComparator) {
        long* plVar2;
        unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData> _> _>*
            playerDataComparator_00;

        playerDataComparator_00 = (unique_ptr<PlayerDataComparator<FriendData>,
                                              std::default_delete<PlayerDataComparator<FriendData> _> _>*)(this + 152);
        if (playerDataComparator_00 == playerDataComparator) {
            *playerDataComparator_00 = playerDataComparator;
        } else {
            plVar2 = (long*)(*playerDataComparator_00).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, playerDataComparator);
        }
    }

    // 0x100161840
    void PlayerRegistry<FriendData>::Sort() {
        PlayerDataComparator<FriendChatUser>* playerDataComparator;
        Indirector* indirector;
        void* in_RSI;
        IndirectorComparator* local_30;
        eastl local_28;

        unique_ptr<FriendData, std::default_delete<FriendData> _>* friendData1 =
            (unique_ptr<FriendData, std::default_delete<FriendData> _>*)((this + 16))->data();
        int iVar1 = *(int*)(this + 12);
        if (((this + 152)) == in_RSI) {
            eastl::destruct<highlight::NpcUID*>(&local_28);
            std::sort<std::unique_ptr<FriendData>*, PlayerRegistry<FriendData>::Indirector>(
                friendData1, friendData1 + (long)iVar1 * 8, indirector);
        } else {
            playerDataComparator = (PlayerDataComparator<FriendChatUser>*)((this + 152))->get();
            new (&local_30)
                eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
            std::sort<std::unique_ptr<FriendData>*, PlayerRegistry<FriendData>::IndirectorComparator>(
                friendData1, friendData1 + (long)iVar1 * 8, local_30);
        }
    }

    // 0x1001618c0
    void PlayerRegistry<IgnoreData>::ResetSortComparator() {
        void* in_RSI;

        (*((this + 152))) = in_RSI;
    }

    // 0x1001618e0
    void PlayerRegistry<IgnoreData>::AddSortComparator(
        std::unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData>>>&&
            playerDataComparator) {
        long* plVar2;
        unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData> _> _>*
            playerDataComparator_00;

        playerDataComparator_00 = (unique_ptr<PlayerDataComparator<IgnoreData>,
                                              std::default_delete<PlayerDataComparator<IgnoreData> _> _>*)(this + 152);
        if (playerDataComparator_00 == playerDataComparator) {
            *playerDataComparator_00 = playerDataComparator;
        } else {
            plVar2 = (long*)(*playerDataComparator_00).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, playerDataComparator);
        }
    }

    // 0x100161a40
    void PlayerRegistry<IgnoreData>::Sort() {
        PlayerDataComparator<FriendChatUser>* playerDataComparator;
        Indirector* indirector;
        void* in_RSI;
        IndirectorComparator* local_30;
        eastl local_28;

        unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>* ignoreData1 =
            (unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>*)((this + 16))->data();
        int iVar1 = *(int*)(this + 12);
        if (((this + 152)) == in_RSI) {
            eastl::destruct<highlight::NpcUID*>(&local_28);
            std::sort<std::unique_ptr<IgnoreData>*, PlayerRegistry<IgnoreData>::Indirector>(
                ignoreData1, ignoreData1 + (long)iVar1 * 8, indirector);
        } else {
            playerDataComparator = (PlayerDataComparator<FriendChatUser>*)((this + 152))->get();
            new (&local_30)
                eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
            std::sort<std::unique_ptr<IgnoreData>*, PlayerRegistry<IgnoreData>::IndirectorComparator>(
                ignoreData1, ignoreData1 + (long)iVar1 * 8, local_30);
        }
    }

    // 0x100161ac0
    void PlayerRegistry<FriendChatUser>::ResetSortComparator() {
        void* in_RSI;

        (*((this + 152))) = in_RSI;
    }

    // 0x100161ae0
    void PlayerRegistry<FriendChatUser>::AddSortComparator(
        std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>&& playerDataComparator) {
        long* plVar2;
        unique_ptr<PlayerDataComparator<FriendChatUser>, std::default_delete<PlayerDataComparator<FriendChatUser> _> _>*
            playerDataComparator_00;

        playerDataComparator_00 =
            (unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser> _> _>*)(this + 152);
        if (playerDataComparator_00 == playerDataComparator) {
            *playerDataComparator_00 = playerDataComparator;
        } else {
            plVar2 = (long*)(*playerDataComparator_00).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, playerDataComparator);
        }
    }

    // 0x100171c00
    unsigned int PlayerRegistry<FriendData>::Indirector::operator()(const std::unique_ptr<FriendData>& friendData1,
                                                                    const std::unique_ptr<FriendData>& friendData2) {
        auto this_00 = friendData1.operator->();
        auto friendData = friendData2.get();
        return this_00->CompareTo(*friendData) >> 31;
    }

    // 0x100172820
    unsigned int
    PlayerRegistry<FriendData>::IndirectorComparator::operator()(const std::unique_ptr<FriendData>& friendData1,
                                                                 const std::unique_ptr<FriendData>& friendData2) {
        uint64_t* puVar1 = *(uint64_t**)this;
        uint64_t uVar3 = friendData1.get();
        uint64_t uVar4 = friendData2.get();
        return (**(void (**)(...))*puVar1)(puVar1, uVar3, uVar4) >> 31;
    }

    // 0x100173730
    unsigned int PlayerRegistry<IgnoreData>::Indirector::operator()(const std::unique_ptr<IgnoreData>& ignoreData1,
                                                                    const std::unique_ptr<IgnoreData>& ignoreData2) {
        auto this_00 = ignoreData1.operator->();
        auto ignoreData = ignoreData2.get();
        return this_00->CompareTo(*ignoreData) >> 31;
    }

    // 0x100174330
    unsigned int
    PlayerRegistry<IgnoreData>::IndirectorComparator::operator()(const std::unique_ptr<IgnoreData>& ignoreData1,
                                                                 const std::unique_ptr<IgnoreData>& ignoreData2) {
        uint64_t* puVar1 = *(uint64_t**)this;
        uint64_t uVar3 = ignoreData1.get();
        uint64_t uVar4 = ignoreData2.get();
        return (**(void (**)(...))*puVar1)(puVar1, uVar3, uVar4) >> 31;
    }

    // 0x10017e8e0
    uint64_t PlayerRegistry<FriendChatUser>::GetPlayerByCurrentDisplayName(
        const rs2lib::social::DisplayName& displayName) const {
        long lVar2;
        obj_iterator local_38;
        eastl local_28;

        if (displayName.IsValid()) {
            &local_28 = (eastl[16])((this + 40))->find(displayName);
            &local_38 = (obj_iterator[16])((this + 40))->end();
            if (!(local_28 == local_38)) {
                lVar2 = local_28.HeapBeginPtr();
                return *(uint64_t*)(lVar2 + 64);
            }
        }
        return 0;
    }

    // 0x100185a10
    void PlayerRegistry<FriendData>::Reset() {
        uint8_t auVar1[16];

        *(uint32_t*)(this + 12) = 0;
        unique_ptr<FriendData, std::default_delete<FriendData> _>* friendData1 =
            (unique_ptr<FriendData, std::default_delete<FriendData> _>*)((this + 16))->data();
        auVar1 = ((this + 16))->end();
        std::fill<std::unique_ptr<FriendData>*, decltype(nullptr)>(friendData1, auVar1._0_8_, *auVar1._8_8_);
        ((this + 40))->clear();
        ((this + 96))->clear();
    }

    // 0x100185a70
    void PlayerRegistry<IgnoreData>::Reset() {
        uint8_t auVar1[16];

        *(uint32_t*)(this + 12) = 0;
        unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>* ignoreData1 =
            (unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>*)((this + 16))->data();
        auVar1 = ((this + 16))->end();
        std::fill<std::unique_ptr<IgnoreData>*, decltype(nullptr)>(ignoreData1, auVar1._0_8_, *auVar1._8_8_);
        ((this + 40))->clear();
        ((this + 96))->clear();
    }

    // 0x100185ff0
    bool PlayerRegistry<FriendData>::IsFull() const {
        return *(int*)(this + 12) == *(int*)(this + 8);
    }

    // 0x100186440
    bool PlayerRegistry<FriendData>::RemovePlayer(const rs2lib::social::DisplayName& displayName) {
        auto friendData = GetPlayerByCurrentDisplayName(this, displayName);
        if (friendData != nullptr) {
            RemovePlayer(this, friendData);
        }
        return friendData != nullptr;
    }

    // 0x1001865c0
    bool PlayerRegistry<IgnoreData>::RemovePlayer(const rs2lib::social::DisplayName& displayName) {
        auto ignoreData = GetPlayerByCurrentDisplayName(displayName);
        if (ignoreData != nullptr) {
            RemovePlayer(this, ignoreData);
        }
        return ignoreData != nullptr;
    }

    // 0x100198790
    void PlayerRegistry<FriendData>::GetPlayer(const rs2lib::social::DisplayName& displayName) const {
        if (GetPlayerByCurrentDisplayName(this, displayName) == 0) {
            GetPlayerByOldDisplayName(displayName);
        }
    }

    // 0x1001afa60
    void PlayerRegistry<FriendData>::RemovePlayer(const FriendData* friendData) {
        int arg1 = FindSlotFromPlayer(this, friendData);
        if (arg1 != -1) {
            RemovePlayerFromIndexes(this, (FriendChatUser*)friendData);
            RemoveSlotFromMasterList(this, arg1);
        }
    }

    // 0x1001afaa0
    unsigned long PlayerRegistry<FriendData>::FindSlotFromPlayer(const FriendData* friendData) {
        unique_ptr<FriendData>* this_00;
        unsigned long arg1;

        if (0 < *(int*)(this + 12)) {
            arg1 = 0;
            do {
                this_00 = (unique_ptr<FriendData>*)(*((this + 16)))[arg1];
                if ((FriendData*)this_00->get() == friendData) {
                    return arg1 & 4294967295;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)*(int*)(this + 12));
        }
        return 4294967295;
    }

    // 0x1001afb10
    void PlayerRegistry<FriendData>::RemoveSlotFromMasterList(int arg1) {
        long lVar2;

        int iVar1 = *(int*)(this + 12);
        *(int*)(this + 12) = iVar1 - 1;
        if (arg1 < iVar1 - 1) {
            lVar2 = ((this + 16))->data();
            eastl::move<std::unique_ptr<FriendData>*, std::unique_ptr<FriendData>*>(
                (unique_ptr<FriendData, std::default_delete<FriendData> _>*)(lVar2 + (long)arg1 * 8 + 8),
                (unique_ptr<FriendData, std::default_delete<FriendData> _>*)(lVar2 + (long)*(int*)(this + 12) * 8 + 8),
                (unique_ptr<FriendData, std::default_delete<FriendData> _>*)(lVar2 + (long)arg1 * 8));
        }
    }

    // 0x1001afd70
    void PlayerRegistry<IgnoreData>::RemovePlayer(const IgnoreData* ignoreData) {
        int arg1 = FindSlotFromPlayer(this, ignoreData);
        if (arg1 != -1) {
            RemovePlayerFromIndexes(ignoreData);
            RemoveSlotFromMasterList(this, arg1);
        }
    }

    // 0x1001afdb0
    unsigned long PlayerRegistry<IgnoreData>::FindSlotFromPlayer(const IgnoreData* ignoreData) {
        unique_ptr<IgnoreData>* this_00;
        unsigned long arg1;

        if (0 < *(int*)(this + 12)) {
            arg1 = 0;
            do {
                this_00 = (unique_ptr<IgnoreData>*)(*((this + 16)))[arg1];
                if ((IgnoreData*)this_00->get() == ignoreData) {
                    return arg1 & 4294967295;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)*(int*)(this + 12));
        }
        return 4294967295;
    }

    // 0x1001afe20
    void PlayerRegistry<IgnoreData>::RemoveSlotFromMasterList(int arg1) {
        long lVar2;

        int iVar1 = *(int*)(this + 12);
        *(int*)(this + 12) = iVar1 - 1;
        if (arg1 < iVar1 - 1) {
            lVar2 = ((this + 16))->data();
            eastl::move<std::unique_ptr<IgnoreData>*, std::unique_ptr<IgnoreData>*>(
                (unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>*)(lVar2 + (long)arg1 * 8 + 8),
                (unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>*)(lVar2 + (long)*(int*)(this + 12) * 8 + 8),
                (unique_ptr<IgnoreData, std::default_delete<IgnoreData> _>*)(lVar2 + (long)arg1 * 8));
        }
    }

} // namespace jag::oldscape::social
