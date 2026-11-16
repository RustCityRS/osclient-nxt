// projects/osclient/social/PlayerRegistry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerRegistry {
    public:
        class Indirector;
        class IndirectorComparator;
        PlayerRegistry(int);
        void UpdatePlayerNames(FriendData*, rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&);
        FriendData* AddPlayer(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&);
        void UpdatePlayerNames(IgnoreData*, rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&);
        IgnoreData* AddPlayer(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&);
        void AddPlayerToIndexes(FriendData*);
        void AddPlayerToIndexes(IgnoreData*);
        GetPlayerByOldDisplayName(rs2lib::social::DisplayName const&) const;
        void Sort();
        bool ContainsPlayerDisplayName(rs2lib::social::DisplayName const&) const;
        GetPlayerBySlot(int) const;
        void Reset();
        AddPlayer(rs2lib::social::DisplayName const&);
        FriendChatUser* AddPlayer(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&);
        void AddPlayerToIndexes(FriendChatUser*);
        void RemovePlayer(FriendChatUser const*);
        ulong FindSlotFromPlayer(FriendChatUser const*);
        bool RemovePlayerFromIndexes(FriendChatUser const*);
        void RemoveSlotFromMasterList(int);
        ~PlayerRegistry();
        void ResetSortComparator();
        void AddSortComparator(
            std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>&&);
        void AddSortComparator(
            std::unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData>>>&&);
        void AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                                               std::default_delete<PlayerDataComparator<FriendChatUser>>>&&);
        GetPlayerByCurrentDisplayName(rs2lib::social::DisplayName const&) const;
        IsFull() const;
        bool RemovePlayer(rs2lib::social::DisplayName const&);
        void GetPlayer(rs2lib::social::DisplayName const&) const;
        void RemovePlayer(FriendData const*);
        ulong FindSlotFromPlayer(FriendData const*);
        void RemovePlayer(IgnoreData const*);
        ulong FindSlotFromPlayer(IgnoreData const*);
    };

    template <typename...> // 1 instantiations, e.g.
    class PlayerRegistry::Indirector {
    public:
        uint operator()(std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>> const&,
                        std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>> const&);
        uint operator()(std::unique_ptr<FriendData, std::default_delete<FriendData>> const&,
                        std::unique_ptr<FriendData, std::default_delete<FriendData>> const&);
        uint operator()(std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>> const&,
                        std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>> const&);
    };

    template <typename...> // 1 instantiations, e.g.
    class PlayerRegistry::IndirectorComparator {
    public:
        uint operator()(std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>> const&,
                        std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>> const&);
        uint operator()(std::unique_ptr<FriendData, std::default_delete<FriendData>> const&,
                        std::unique_ptr<FriendData, std::default_delete<FriendData>> const&);
        uint operator()(std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>> const&,
                        std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>> const&);
    };

    // 0x100024c00, 272 bytes, base-object constructor, inline, placed by class name and debug map
    // PlayerRegistry<FriendData>::PlayerRegistry(int)
    void PlayerRegistry<FriendData>::PlayerRegistry(int param_1) {
        int iVar1;
        allocator local_48[8];
        hash local_40[8];
        equal_to local_38[8];

        *(undefined**)this = PTR_vtable_100ee8b20 + 16;
        *(int*)(this + 8) = param_1;
        *(undefined4*)(this + 12) = 0;
        new ((this + 16)) Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>();
        iVar1 = param_1 + 7;
        if (-1 < param_1) {
            iVar1 = param_1;
        }
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new ((this + 40))
            eastl::hash_map<rs2lib::social::DisplayName, FriendData*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>(
                (long)(iVar1 >> 3), local_40, local_38, local_48);
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new ((this + 96))
            eastl::hash_map<rs2lib::social::DisplayName, FriendData*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>(
                (long)(iVar1 >> 3), local_40, local_38, local_48);
        std::unique_ptr<PlayerDataComparator<FriendData>,
                        std::default_delete<PlayerDataComparator<FriendData>>>::unique_ptr<true,
                                                                                           void>((
            unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>*)(this +
                                                                                                                  152));
        ((this + 16))->set_max_size((long)param_1, 3);
    }

    // 0x100025240, 64 bytes, inline, placed by class name and debug map
    // PlayerRegistry<FriendData>::UpdatePlayerNames(FriendData*, rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    void PlayerRegistry<FriendData>::UpdatePlayerNames(FriendData* param_1, DisplayName* param_2,
                                                       DisplayName* param_3) {
        RemovePlayerFromIndexes(this, param_1);
        param_1->SetDisplayNames(param_2, param_3);
        AddPlayerToIndexes(this, param_1);
    }

    // 0x1000252e0, 192 bytes, inline, placed by class name and debug map
    // PlayerRegistry<FriendData>::AddPlayer(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    FriendData* PlayerRegistry<FriendData>::AddPlayer(DisplayName* param_1, DisplayName* param_2) {
        long lVar1;
        unique_ptr<FriendData, std::default_delete<FriendData>>* puVar2;
        FriendData* this_00;
        unique_ptr local_38[8];

        lVar1 = GetPlayerByCurrentDisplayName(this, param_1);
        if (lVar1 == 0) {
            (*(code*)**(undefined8**)this)(local_38, this);
            puVar2 = (unique_ptr<FriendData, std::default_delete<FriendData>>*)
                Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>*)(this + 16),
                    (long)*(int*)(this + 12));
            std::unique_ptr<FriendData, std::default_delete<FriendData>>::operator=(puVar2, local_38);
            local_38->~unique_ptr();
            puVar2 = (unique_ptr<FriendData, std::default_delete<FriendData>>*)
                Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>*)(this + 16),
                    (long)*(int*)(this + 12));
            this_00 = (FriendData*)std::unique_ptr<FriendData, std::default_delete<FriendData>>::get(puVar2);
            *(int*)(this + 12) = *(int*)(this + 12) + 1;
            this_00->SetDisplayNames(param_1, param_2);
            AddPlayerToIndexes(this, this_00);
        } else {
            this_00 = (FriendData*)0;
        }
        return this_00;
    }

    // 0x1000256e0, 64 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::UpdatePlayerNames(IgnoreData*, rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    void PlayerRegistry<IgnoreData>::UpdatePlayerNames(IgnoreData* param_1, DisplayName* param_2,
                                                       DisplayName* param_3) {
        RemovePlayerFromIndexes(param_1);
        param_1->SetDisplayNames(param_2, param_3);
        AddPlayerToIndexes(this, param_1);
    }

    // 0x100025720, 192 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::AddPlayer(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    IgnoreData* PlayerRegistry<IgnoreData>::AddPlayer(DisplayName* param_1, DisplayName* param_2) {
        long lVar1;
        unique_ptr<IgnoreData, std::default_delete<IgnoreData>>* puVar2;
        IgnoreData* this_00;
        unique_ptr local_38[8];

        lVar1 = GetPlayerByCurrentDisplayName(param_1);
        if (lVar1 == 0) {
            (*(code*)**(undefined8**)this)(local_38, this);
            puVar2 = (unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*)
                Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>*)(this + 16),
                    (long)*(int*)(this + 12));
            std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>::operator=(puVar2, local_38);
            local_38->~unique_ptr();
            puVar2 = (unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*)
                Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>*)(this + 16),
                    (long)*(int*)(this + 12));
            this_00 = (IgnoreData*)std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>::get(puVar2);
            *(int*)(this + 12) = *(int*)(this + 12) + 1;
            this_00->SetDisplayNames(param_1, param_2);
            AddPlayerToIndexes(this, this_00);
        } else {
            this_00 = (IgnoreData*)0;
        }
        return this_00;
    }

    // 0x100056520, 112 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::AddPlayerToIndexes(FriendData*)
    void PlayerRegistry<FriendData>::AddPlayerToIndexes(FriendData* param_1) {
        undefined1* this_00;
        undefined8* puVar1;
        FriendData* this_01;

        puVar1 = (undefined8*)
            eastl::hash_map<rs2lib::social::DisplayName, FriendData*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>::
            operator[]((hash_map<rs2lib::social::DisplayName, FriendData*, eastl::hash<rs2lib::social::DisplayName>,
                                 eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>*)(this + 40),
                       (DisplayName*)&param_1->field_8);
        *puVar1 = param_1;
        this_00 = &param_1->field_72;
        if (this_00->IsValid() != '\0') {
            this_01 = (FriendData*)GetPlayerByOldDisplayName(this_00);
            puVar1 = (undefined8*)
                eastl::hash_map<rs2lib::social::DisplayName, FriendData*, eastl::hash<rs2lib::social::DisplayName>,
                                eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>::
                operator[](
                    (hash_map<rs2lib::social::DisplayName, FriendData*, eastl::hash<rs2lib::social::DisplayName>,
                              eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>*)(this + 96),
                    (DisplayName*)this_00);
            *puVar1 = param_1;
            if ((this_01 != (FriendData*)0) && (this_01 != param_1)) {
                this_01->ClearOldDisplayName();
            }
        }
    }

    // 0x100056f30, 112 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::AddPlayerToIndexes(IgnoreData*)
    void PlayerRegistry<IgnoreData>::AddPlayerToIndexes(IgnoreData* param_1) {
        undefined1* this_00;
        undefined8* puVar1;
        IgnoreData* this_01;

        puVar1 = (undefined8*)
            eastl::hash_map<rs2lib::social::DisplayName, IgnoreData*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>::
            operator[]((hash_map<rs2lib::social::DisplayName, IgnoreData*, eastl::hash<rs2lib::social::DisplayName>,
                                 eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>*)(this + 40),
                       (DisplayName*)&param_1->field_8);
        *puVar1 = param_1;
        this_00 = &param_1->field_72;
        if (this_00->IsValid() != '\0') {
            this_01 = (IgnoreData*)GetPlayerByOldDisplayName(this_00);
            puVar1 = (undefined8*)
                eastl::hash_map<rs2lib::social::DisplayName, IgnoreData*, eastl::hash<rs2lib::social::DisplayName>,
                                eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>::
                operator[](
                    (hash_map<rs2lib::social::DisplayName, IgnoreData*, eastl::hash<rs2lib::social::DisplayName>,
                              eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>*)(this + 96),
                    (DisplayName*)this_00);
            *puVar1 = param_1;
            if ((this_01 != (IgnoreData*)0) && (this_01 != param_1)) {
                this_01->ClearOldDisplayName();
            }
        }
    }

    // 0x100056fd0, 112 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::GetPlayerByOldDisplayName(rs2lib::social::DisplayName const&) const
    /* PlayerRegistry<FriendChatUser>::GetPlayerByOldDisplayName(rs2lib::social::DisplayName
   const&) const */

    undefined8 PlayerRegistry<FriendChatUser>::GetPlayerByOldDisplayName(DisplayName* param_1) {
        long lVar3;
        hashtable_iterator_base local_38[16];
        eastl local_28[16];

        if (param_1->IsValid() != '\0') {
            local_28 = (eastl[16])((this + 96))->find(param_1);
            local_38 = (hashtable_iterator_base[16])((this + 96))->end();
            if (!eastl::operator==(local_28, local_38, local_38._8_8_)) {
                lVar3 = local_28->HeapBeginPtr();
                return *(undefined8*)(lVar3 + 64);
            }
        }
        return 0;
    }

    // 0x1000f3740, 128 bytes, inline, placed by class name and debug map
    // PlayerRegistry<FriendChatUser>::Sort()
    void PlayerRegistry<FriendChatUser>::Sort() {
        long lVar1;
        long lVar3;
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;
        undefined1 auVar4[16];
        undefined8 local_30;
        eastl local_28[8];

        lVar3 = ((this + 16))->data();
        lVar1 = lVar3 + (long)*(int*)(this + 12) * 8;
        if (std::operator==((unique_ptr*)(this + 152), (_func_decltype_nullptr*)in_RSI)) {
            eastl::destruct<highlight::NpcUID*>(local_28, in_RSI, extraout_RDX);
            std::sort<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*,
                      PlayerRegistry<FriendChatUser>::Indirector>(lVar3, lVar1);
        } else {
            auVar4 = ((this + 152))->get();
            new (&local_30)
                eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar4._0_8_, auVar4._8_8_);
            std::sort<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*,
                      PlayerRegistry<FriendChatUser>::IndirectorComparator>(lVar3, lVar1, local_30);
        }
    }

    // 0x10011dc50, 160 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::ContainsPlayerDisplayName(rs2lib::social::DisplayName const&) const
    /* PlayerRegistry<FriendData>::ContainsPlayerDisplayName(rs2lib::social::DisplayName
   const&) const */

    bool PlayerRegistry<FriendData>::ContainsPlayerDisplayName(DisplayName* param_1) {
        bool bVar2;
        bool bVar3;
        undefined1 auVar4[16];
        eastl local_40[16];
        hashtable_iterator_base local_30[16];

        if (param_1->IsValid() == '\0') {
            bVar3 = false;
        } else {
            local_40 = (eastl[16])((this + 40))->find(param_1);
            local_30 = (hashtable_iterator_base[16])((this + 40))->end();
            bVar2 = eastl::operator!=(local_40, local_30, local_30._8_8_);
            bVar3 = true;
            if (!bVar2) {
                auVar4 = ((this + 96))->find(param_1);
                local_40 = (eastl[16])auVar4;
                auVar4 = ((this + 96))->end();
                local_30 = (hashtable_iterator_base[16])auVar4;
                bVar3 = eastl::operator!=(local_40, local_30, auVar4._8_8_);
            }
        }
        return bVar3;
    }

    // 0x10012d050, 48 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::GetPlayerBySlot(int) const
    undefined8 PlayerRegistry<FriendChatUser>::GetPlayerBySlot(int param_1) {
        unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>* this_00;
        undefined8 uVar1;

        if ((param_1 < 0) || (*(int*)(this + 12) <= param_1)) {
            return 0;
        }
        this_00 = (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*)
            Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>, eastl::allocator>*)(this +
                                                                                                                 16),
                (long)param_1);
        uVar1 = std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>::get(this_00);
        return uVar1;
    }

    // 0x10012e7f0, 96 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::Reset()
    void PlayerRegistry<FriendChatUser>::Reset() {
        unique_ptr* puVar1;
        undefined1 auVar2[16];

        *(undefined4*)(this + 12) = 0;
        puVar1 = (unique_ptr*)((this + 16))->data();
        auVar2 = ((this + 16))->end();
        std::fill<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*, decltype(nullptr)>(
            puVar1, auVar2._0_8_, auVar2._8_8_);
        ((this + 40))->clear();
        ((this + 96))->clear();
    }

    // 0x10012e850, 96 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::AddPlayer(rs2lib::social::DisplayName const&)
    undefined8 PlayerRegistry<FriendChatUser>::AddPlayer(DisplayName* param_1) {
        undefined8 uVar1;
        DisplayName local_60;

        new (&local_60) rs2lib::social::DisplayName();
        uVar1 = AddPlayer(this, param_1, &local_60);
        local_60.~pair();
        return uVar1;
    }

    // 0x10012ebf0, 192 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::AddPlayer(rs2lib::social::DisplayName const&, rs2lib::social::DisplayName const&)
    FriendChatUser* PlayerRegistry<FriendChatUser>::AddPlayer(DisplayName* param_1, DisplayName* param_2) {
        long lVar1;
        unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>* puVar2;
        FriendChatUser* this_00;
        unique_ptr local_38[8];

        lVar1 = GetPlayerByCurrentDisplayName(param_1);
        if (lVar1 == 0) {
            (*(code*)**(undefined8**)this)(local_38, this);
            puVar2 = (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*)
                Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>, eastl::allocator>::
                operator[]((Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>,
                                  eastl::allocator>*)(this + 16),
                           (long)*(int*)(this + 12));
            std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>::operator=(puVar2, local_38);
            local_38->~unique_ptr();
            puVar2 = (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*)
                Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>, eastl::allocator>::
                operator[]((Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>,
                                  eastl::allocator>*)(this + 16),
                           (long)*(int*)(this + 12));
            this_00 =
                (FriendChatUser*)std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>::get(puVar2);
            *(int*)(this + 12) = *(int*)(this + 12) + 1;
            this_00->SetDisplayNames(param_1, param_2);
            AddPlayerToIndexes(this, this_00);
        } else {
            this_00 = (FriendChatUser*)0;
        }
        return this_00;
    }

    // 0x10012edf0, 112 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::AddPlayerToIndexes(FriendChatUser*)
    void PlayerRegistry<FriendChatUser>::AddPlayerToIndexes(FriendChatUser* param_1) {
        undefined1* this_00;
        undefined8* puVar1;
        FriendChatUser* this_01;

        puVar1 = (undefined8*)
            eastl::hash_map<rs2lib::social::DisplayName, FriendChatUser*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>::
            operator[]((hash_map<rs2lib::social::DisplayName, FriendChatUser*, eastl::hash<rs2lib::social::DisplayName>,
                                 eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>*)(this + 40),
                       (DisplayName*)&param_1->field_8);
        *puVar1 = param_1;
        this_00 = &param_1->field_72;
        if (this_00->IsValid() != '\0') {
            this_01 = (FriendChatUser*)GetPlayerByOldDisplayName(this, (DisplayName*)this_00);
            puVar1 = (undefined8*)
                eastl::hash_map<rs2lib::social::DisplayName, FriendChatUser*, eastl::hash<rs2lib::social::DisplayName>,
                                eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>::
                operator[](
                    (hash_map<rs2lib::social::DisplayName, FriendChatUser*, eastl::hash<rs2lib::social::DisplayName>,
                              eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>*)(this + 96),
                    (DisplayName*)this_00);
            *puVar1 = param_1;
            if ((this_01 != (FriendChatUser*)0) && (this_01 != param_1)) {
                this_01->ClearOldDisplayName();
            }
        }
    }

    // 0x10012f270, 64 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::RemovePlayer(FriendChatUser const*)
    void PlayerRegistry<FriendChatUser>::RemovePlayer(FriendChatUser* param_1) {
        int iVar1;

        iVar1 = FindSlotFromPlayer(this, param_1);
        if (iVar1 != -1) {
            RemovePlayerFromIndexes(param_1);
            RemoveSlotFromMasterList(this, iVar1);
        }
    }

    // 0x10012f2b0, 112 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::FindSlotFromPlayer(FriendChatUser const*)
    ulong PlayerRegistry<FriendChatUser>::FindSlotFromPlayer(FriendChatUser* param_1) {
        unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>* this_00;
        FriendChatUser* pFVar1;
        ulong uVar2;

        if (0 < *(int*)(this + 12)) {
            uVar2 = 0;
            do {
                this_00 = (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*)
                    Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>, eastl::allocator>::
                    operator[]((Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>,
                                      eastl::allocator>*)(this + 16),
                               uVar2);
                pFVar1 =
                    (FriendChatUser*)std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>::get(this_00);
                if (pFVar1 == param_1) {
                    return uVar2 & 4294967295;
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)*(int*)(this + 12));
        }
        return 4294967295;
    }

    // 0x10012f320, 96 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::RemovePlayerFromIndexes(FriendChatUser const*)
    /* PlayerRegistry<FriendData>::RemovePlayerFromIndexes(FriendData
   const*) */

    bool PlayerRegistry<FriendData>::RemovePlayerFromIndexes(FriendData* param_1) {
        long lVar2;

        lVar2 = ((this + 40))->erase((DisplayName*)&param_1->field_8);
        if (lVar2 != 0) {
            if ((&param_1->field_72)->IsValid() != '\0') {
                ((this + 96))->erase((DisplayName*)&param_1->field_72);
            }
        }
        return lVar2 != 0;
    }

    // 0x10012f380, 80 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::RemoveSlotFromMasterList(int)
    void PlayerRegistry<FriendChatUser>::RemoveSlotFromMasterList(int param_1) {
        int iVar1;
        long lVar2;

        iVar1 = *(int*)(this + 12);
        *(int*)(this + 12) = iVar1 + -1;
        if (param_1 < iVar1 + -1) {
            lVar2 = ((this + 16))->data();
            eastl::move<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*,
                        std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*>(
                (unique_ptr*)(lVar2 + (long)param_1 * 8 + 8), (unique_ptr*)(lVar2 + (long)*(int*)(this + 12) * 8 + 8),
                (unique_ptr*)(lVar2 + (long)param_1 * 8));
        }
    }

    // 0x10013a090, 272 bytes, base-object constructor, inline, placed by class name
    // PlayerRegistry<IgnoreData>::PlayerRegistry(int)
    void PlayerRegistry<IgnoreData>::PlayerRegistry(int param_1) {
        int iVar1;
        allocator local_48[8];
        hash local_40[8];
        equal_to local_38[8];

        *(undefined**)this = PTR_vtable_100ee8b28 + 16;
        *(int*)(this + 8) = param_1;
        *(undefined4*)(this + 12) = 0;
        new ((this + 16)) Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>();
        iVar1 = param_1 + 7;
        if (-1 < param_1) {
            iVar1 = param_1;
        }
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new ((this + 40))
            eastl::hash_map<rs2lib::social::DisplayName, IgnoreData*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>(
                (long)(iVar1 >> 3), local_40, local_38, local_48);
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new ((this + 96))
            eastl::hash_map<rs2lib::social::DisplayName, IgnoreData*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>(
                (long)(iVar1 >> 3), local_40, local_38, local_48);
        std::unique_ptr<PlayerDataComparator<IgnoreData>,
                        std::default_delete<PlayerDataComparator<IgnoreData>>>::unique_ptr<true,
                                                                                           void>((
            unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData>>>*)(this +
                                                                                                                  152));
        ((this + 16))->set_max_size((long)param_1, 3);
    }

    // 0x10013aa80, 80 bytes, base-object destructor, inline, placed by class name
    // PlayerRegistry<FriendData>::~PlayerRegistry()
    void PlayerRegistry<FriendData>::~PlayerRegistry() {
        *(undefined**)this = PTR_vtable_100ee8b20 + 16;
        ((this + 152))->~unique_ptr();
        ((this + 96))->~hash_map();
        ((this + 40))->~hash_map();
        ((this + 16))->~Array();
    }

    // 0x10013bf50, 80 bytes, base-object destructor, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::~PlayerRegistry()
    void PlayerRegistry<FriendChatUser>::~PlayerRegistry() {
        *(undefined**)this = PTR_vtable_100ee8b30 + 16;
        ((this + 152))->~unique_ptr();
        ((this + 96))->~hash_map();
        ((this + 40))->~hash_map();
        ((this + 16))->~Array();
    }

    // 0x10013d020, 80 bytes, base-object destructor, inline, placed by class name
    // PlayerRegistry<IgnoreData>::~PlayerRegistry()
    void PlayerRegistry<IgnoreData>::~PlayerRegistry() {
        *(undefined**)this = PTR_vtable_100ee8b28 + 16;
        ((this + 152))->~unique_ptr();
        ((this + 96))->~hash_map();
        ((this + 40))->~hash_map();
        ((this + 16))->~Array();
    }

    // 0x100148880, 48 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::Indirector::operator()(std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> > const&, std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> > const&)
    /* PlayerRegistry<FriendChatUser>::Indirector::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<FriendChatUser,
   std::default_delete<FriendChatUser> > const&,
   std::unique_ptr<FriendChatUser,
   std::default_delete<FriendChatUser> > const&) */

    uint PlayerRegistry<FriendChatUser>::Indirector::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        PlayerData<FriendData>* this_00;
        FriendData* pFVar2;

        this_00 =
            (PlayerData<FriendData>*)std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>::operator->(
                (unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>*)param_1);
        pFVar2 = (FriendData*)param_2->get();
        return this_00->CompareTo(pFVar2) >> 31;
    }

    // 0x1001493b0, 64 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::IndirectorComparator::operator()(std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> > const&, std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser> > const&)
    /* PlayerRegistry<FriendChatUser>::IndirectorComparator::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<FriendChatUser,
   std::default_delete<FriendChatUser> > const&,
   std::unique_ptr<FriendChatUser,
   std::default_delete<FriendChatUser> > const&) */

    uint PlayerRegistry<FriendChatUser>::IndirectorComparator::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        undefined8* puVar1;
        undefined8 uVar3;
        undefined8 uVar4;

        puVar1 = *(undefined8**)this;
        uVar3 = param_1->get();
        uVar4 = param_2->get();
        return (**(code**)*puVar1)(puVar1, uVar3, uVar4) >> 31;
    }

    // 0x100150db0, 272 bytes, base-object constructor, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::PlayerRegistry(int)
    void PlayerRegistry<FriendChatUser>::PlayerRegistry(int param_1) {
        int iVar1;
        allocator local_48[8];
        hash local_40[8];
        equal_to local_38[8];

        *(undefined**)this = PTR_vtable_100ee8b30 + 16;
        *(int*)(this + 8) = param_1;
        *(undefined4*)(this + 12) = 0;
        new ((this + 16))
            Array<std::unique_ptr<FriendChatUser, std::default_delete<FriendChatUser>>, eastl::allocator>();
        iVar1 = param_1 + 7;
        if (-1 < param_1) {
            iVar1 = param_1;
        }
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new ((this + 40))
            eastl::hash_map<rs2lib::social::DisplayName, FriendChatUser*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>(
                (long)(iVar1 >> 3), local_40, local_38, local_48);
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new ((this + 96))
            eastl::hash_map<rs2lib::social::DisplayName, FriendChatUser*, eastl::hash<rs2lib::social::DisplayName>,
                            eastl::equal_to<rs2lib::social::DisplayName>, eastl::allocator, false>(
                (long)(iVar1 >> 3), local_40, local_38, local_48);
        std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>::unique_ptr<true,
                                                                                               void>(
            (unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>*)(this + 152));
        ((this + 16))->set_max_size((long)param_1, 3);
    }

    // 0x1001611b0, 48 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::GetPlayerBySlot(int) const
    undefined8 PlayerRegistry<FriendData>::GetPlayerBySlot(int param_1) {
        unique_ptr<FriendData, std::default_delete<FriendData>>* this_00;
        undefined8 uVar1;

        if ((param_1 < 0) || (*(int*)(this + 12) <= param_1)) {
            return 0;
        }
        this_00 = (unique_ptr<FriendData, std::default_delete<FriendData>>*)
            Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>*)(this + 16),
                (long)param_1);
        uVar1 = std::unique_ptr<FriendData, std::default_delete<FriendData>>::get(this_00);
        return uVar1;
    }

    // 0x100161230, 48 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::GetPlayerBySlot(int) const
    undefined8 PlayerRegistry<IgnoreData>::GetPlayerBySlot(int param_1) {
        unique_ptr<IgnoreData, std::default_delete<IgnoreData>>* this_00;
        undefined8 uVar1;

        if ((param_1 < 0) || (*(int*)(this + 12) <= param_1)) {
            return 0;
        }
        this_00 = (unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*)
            Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>*)(this + 16),
                (long)param_1);
        uVar1 = std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>::get(this_00);
        return uVar1;
    }

    // 0x1001612c0, 32 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::ResetSortComparator()
    void PlayerRegistry<FriendData>::ResetSortComparator() {
        _func_decltype_nullptr* in_RSI;

        std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>::
        operator=((unique_ptr<PlayerDataComparator<FriendData>,
                              std::default_delete<PlayerDataComparator<FriendData>>>*)(this + 152),
                  in_RSI);
    }

    // 0x1001612e0, 80 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData> > >&&)
    /* PlayerRegistry<FriendData>::AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendData>,
   std::default_delete<PlayerDataComparator<FriendData>
   > >&&) */

    void PlayerRegistry<FriendData>::AddSortComparator(unique_ptr* param_1) {
        long* plVar2;
        unique_ptr* this_00;

        this_00 = (unique_ptr*)(this + 152);
        if (std::operator==(this_00, (_func_decltype_nullptr*)param_1)) {
            std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>::
            operator=(
                (unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>*)
                    this_00,
                param_1);
        } else {
            plVar2 = (long*)std::unique_ptr<PlayerDataComparator<FriendData>,
                                            std::default_delete<PlayerDataComparator<FriendData>>>::
                     operator->((unique_ptr<PlayerDataComparator<FriendData>,
                                            std::default_delete<PlayerDataComparator<FriendData>>>*)this_00);
            (**(code**)(*plVar2 + 24))(plVar2, param_1);
        }
    }

    // 0x100161840, 128 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::Sort()
    void PlayerRegistry<FriendData>::Sort() {
        long lVar1;
        long lVar3;
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;
        undefined1 auVar4[16];
        undefined8 local_30;
        eastl local_28[8];

        lVar3 = ((this + 16))->data();
        lVar1 = lVar3 + (long)*(int*)(this + 12) * 8;
        if (std::operator==((unique_ptr*)(this + 152), (_func_decltype_nullptr*)in_RSI)) {
            eastl::destruct<highlight::NpcUID*>(local_28, in_RSI, extraout_RDX);
            std::sort<std::unique_ptr<FriendData, std::default_delete<FriendData>>*,
                      PlayerRegistry<FriendData>::Indirector>(lVar3, lVar1);
        } else {
            auVar4 = ((this + 152))->get();
            new (&local_30)
                eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar4._0_8_, auVar4._8_8_);
            std::sort<std::unique_ptr<FriendData, std::default_delete<FriendData>>*,
                      PlayerRegistry<FriendData>::IndirectorComparator>(lVar3, lVar1, local_30);
        }
    }

    // 0x1001618c0, 32 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::ResetSortComparator()
    void PlayerRegistry<IgnoreData>::ResetSortComparator() {
        _func_decltype_nullptr* in_RSI;

        std::unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData>>>::
        operator=((unique_ptr<PlayerDataComparator<IgnoreData>,
                              std::default_delete<PlayerDataComparator<IgnoreData>>>*)(this + 152),
                  in_RSI);
    }

    // 0x1001618e0, 80 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::AddSortComparator(std::unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData> > >&&)
    /* PlayerRegistry<IgnoreData>::AddSortComparator(std::unique_ptr<PlayerDataComparator<IgnoreData>,
   std::default_delete<PlayerDataComparator<IgnoreData>
   > >&&) */

    void PlayerRegistry<IgnoreData>::AddSortComparator(unique_ptr* param_1) {
        long* plVar2;
        unique_ptr* this_00;

        this_00 = (unique_ptr*)(this + 152);
        if (std::operator==(this_00, (_func_decltype_nullptr*)param_1)) {
            std::unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData>>>::
            operator=(
                (unique_ptr<PlayerDataComparator<IgnoreData>, std::default_delete<PlayerDataComparator<IgnoreData>>>*)
                    this_00,
                param_1);
        } else {
            plVar2 = (long*)std::unique_ptr<PlayerDataComparator<IgnoreData>,
                                            std::default_delete<PlayerDataComparator<IgnoreData>>>::
                     operator->((unique_ptr<PlayerDataComparator<IgnoreData>,
                                            std::default_delete<PlayerDataComparator<IgnoreData>>>*)this_00);
            (**(code**)(*plVar2 + 24))(plVar2, param_1);
        }
    }

    // 0x100161a40, 128 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::Sort()
    void PlayerRegistry<IgnoreData>::Sort() {
        long lVar1;
        long lVar3;
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;
        undefined1 auVar4[16];
        undefined8 local_30;
        eastl local_28[8];

        lVar3 = ((this + 16))->data();
        lVar1 = lVar3 + (long)*(int*)(this + 12) * 8;
        if (std::operator==((unique_ptr*)(this + 152), (_func_decltype_nullptr*)in_RSI)) {
            eastl::destruct<highlight::NpcUID*>(local_28, in_RSI, extraout_RDX);
            std::sort<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*,
                      PlayerRegistry<IgnoreData>::Indirector>(lVar3, lVar1);
        } else {
            auVar4 = ((this + 152))->get();
            new (&local_30)
                eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(auVar4._0_8_, auVar4._8_8_);
            std::sort<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*,
                      PlayerRegistry<IgnoreData>::IndirectorComparator>(lVar3, lVar1, local_30);
        }
    }

    // 0x100161ac0, 32 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::ResetSortComparator()
    void PlayerRegistry<FriendChatUser>::ResetSortComparator() {
        _func_decltype_nullptr* in_RSI;

        std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>::
        operator=((unique_ptr<PlayerDataComparator<FriendChatUser>,
                              std::default_delete<PlayerDataComparator<FriendChatUser>>>*)(this + 152),
                  in_RSI);
    }

    // 0x100161ae0, 80 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>, std::default_delete<PlayerDataComparator<FriendChatUser> > >&&)
    /* PlayerRegistry<FriendChatUser>::AddSortComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>,
   std::default_delete<PlayerDataComparator<FriendChatUser>
   > >&&) */

    void PlayerRegistry<FriendChatUser>::AddSortComparator(unique_ptr* param_1) {
        long* plVar2;
        unique_ptr* this_00;

        this_00 = (unique_ptr*)(this + 152);
        if (std::operator==(this_00, (_func_decltype_nullptr*)param_1)) {
            std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                            std::default_delete<PlayerDataComparator<FriendChatUser>>>::
            operator=((unique_ptr<PlayerDataComparator<FriendChatUser>,
                                  std::default_delete<PlayerDataComparator<FriendChatUser>>>*)this_00,
                      param_1);
        } else {
            plVar2 = (long*)std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                                            std::default_delete<PlayerDataComparator<FriendChatUser>>>::
                     operator->((unique_ptr<PlayerDataComparator<FriendChatUser>,
                                            std::default_delete<PlayerDataComparator<FriendChatUser>>>*)this_00);
            (**(code**)(*plVar2 + 24))(plVar2, param_1);
        }
    }

    // 0x100171c00, 48 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::Indirector::operator()(std::unique_ptr<FriendData, std::default_delete<FriendData> > const&, std::unique_ptr<FriendData, std::default_delete<FriendData> > const&)
    /* PlayerRegistry<FriendData>::Indirector::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<FriendData,
   std::default_delete<FriendData> > const&,
   std::unique_ptr<FriendData,
   std::default_delete<FriendData> > const&) */

    uint PlayerRegistry<FriendData>::Indirector::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        FriendData* this_00;
        FriendData* pFVar2;

        this_00 = (FriendData*)std::unique_ptr<FriendData, std::default_delete<FriendData>>::operator->(
            (unique_ptr<FriendData, std::default_delete<FriendData>>*)param_1);
        pFVar2 = (FriendData*)param_2->get();
        return this_00->CompareTo(pFVar2) >> 31;
    }

    // 0x100172820, 64 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::IndirectorComparator::operator()(std::unique_ptr<FriendData, std::default_delete<FriendData> > const&, std::unique_ptr<FriendData, std::default_delete<FriendData> > const&)
    /* PlayerRegistry<FriendData>::IndirectorComparator::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<FriendData,
   std::default_delete<FriendData> > const&,
   std::unique_ptr<FriendData,
   std::default_delete<FriendData> > const&) */

    uint PlayerRegistry<FriendData>::IndirectorComparator::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        undefined8* puVar1;
        undefined8 uVar3;
        undefined8 uVar4;

        puVar1 = *(undefined8**)this;
        uVar3 = param_1->get();
        uVar4 = param_2->get();
        return (**(code**)*puVar1)(puVar1, uVar3, uVar4) >> 31;
    }

    // 0x100173730, 48 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::Indirector::operator()(std::unique_ptr<IgnoreData, std::default_delete<IgnoreData> > const&, std::unique_ptr<IgnoreData, std::default_delete<IgnoreData> > const&)
    /* PlayerRegistry<IgnoreData>::Indirector::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<IgnoreData,
   std::default_delete<IgnoreData> > const&,
   std::unique_ptr<IgnoreData,
   std::default_delete<IgnoreData> > const&) */

    uint PlayerRegistry<IgnoreData>::Indirector::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        IgnoreData* this_00;
        IgnoreData* pIVar2;

        this_00 = (IgnoreData*)std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>::operator->(
            (unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*)param_1);
        pIVar2 = (IgnoreData*)param_2->get();
        return this_00->CompareTo(pIVar2) >> 31;
    }

    // 0x100174330, 64 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::IndirectorComparator::operator()(std::unique_ptr<IgnoreData, std::default_delete<IgnoreData> > const&, std::unique_ptr<IgnoreData, std::default_delete<IgnoreData> > const&)
    /* PlayerRegistry<IgnoreData>::IndirectorComparator::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<IgnoreData,
   std::default_delete<IgnoreData> > const&,
   std::unique_ptr<IgnoreData,
   std::default_delete<IgnoreData> > const&) */

    uint PlayerRegistry<IgnoreData>::IndirectorComparator::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        undefined8* puVar1;
        undefined8 uVar3;
        undefined8 uVar4;

        puVar1 = *(undefined8**)this;
        uVar3 = param_1->get();
        uVar4 = param_2->get();
        return (**(code**)*puVar1)(puVar1, uVar3, uVar4) >> 31;
    }

    // 0x10017e8e0, 112 bytes, inline, placed by class name
    // PlayerRegistry<FriendChatUser>::GetPlayerByCurrentDisplayName(rs2lib::social::DisplayName const&) const
    /* PlayerRegistry<FriendData>::GetPlayerByCurrentDisplayName(rs2lib::social::DisplayName
   const&) const */

    undefined8 PlayerRegistry<FriendData>::GetPlayerByCurrentDisplayName(DisplayName* param_1) {
        long lVar3;
        hashtable_iterator_base local_38[16];
        eastl local_28[16];

        if (param_1->IsValid() != '\0') {
            local_28 = (eastl[16])((this + 40))->find(param_1);
            local_38 = (hashtable_iterator_base[16])((this + 40))->end();
            if (!eastl::operator==(local_28, local_38, local_38._8_8_)) {
                lVar3 = local_28->HeapBeginPtr();
                return *(undefined8*)(lVar3 + 64);
            }
        }
        return 0;
    }

    // 0x100185a10, 96 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::Reset()
    void PlayerRegistry<FriendData>::Reset() {
        unique_ptr* puVar1;
        undefined1 auVar2[16];

        *(undefined4*)(this + 12) = 0;
        puVar1 = (unique_ptr*)((this + 16))->data();
        auVar2 = ((this + 16))->end();
        std::fill<std::unique_ptr<FriendData, std::default_delete<FriendData>>*, decltype(nullptr)>(
            puVar1, auVar2._0_8_, auVar2._8_8_);
        ((this + 40))->clear();
        ((this + 96))->clear();
    }

    // 0x100185a70, 96 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::Reset()
    void PlayerRegistry<IgnoreData>::Reset() {
        unique_ptr* puVar1;
        undefined1 auVar2[16];

        *(undefined4*)(this + 12) = 0;
        puVar1 = (unique_ptr*)((this + 16))->data();
        auVar2 = ((this + 16))->end();
        std::fill<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*, decltype(nullptr)>(
            puVar1, auVar2._0_8_, auVar2._8_8_);
        ((this + 40))->clear();
        ((this + 96))->clear();
    }

    // 0x100185ff0, 16 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::IsFull() const
    /* PlayerRegistry<IgnoreData>::IsFull() const */

    undefined4 PlayerRegistry<IgnoreData>::IsFull() {
        return CONCAT31((int3)((uint) * (int*)(this + 12) >> 8), *(int*)(this + 12) == *(int*)(this + 8));
    }

    // 0x100186440, 48 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::RemovePlayer(rs2lib::social::DisplayName const&)
    bool PlayerRegistry<FriendData>::RemovePlayer(DisplayName* param_1) {
        FriendData* pFVar1;

        pFVar1 = (FriendData*)GetPlayerByCurrentDisplayName(this, param_1);
        if (pFVar1 != (FriendData*)0) {
            RemovePlayer(this, pFVar1);
        }
        return pFVar1 != (FriendData*)0;
    }

    // 0x1001865c0, 48 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::RemovePlayer(rs2lib::social::DisplayName const&)
    bool PlayerRegistry<IgnoreData>::RemovePlayer(DisplayName* param_1) {
        IgnoreData* pIVar1;

        pIVar1 = (IgnoreData*)GetPlayerByCurrentDisplayName(param_1);
        if (pIVar1 != (IgnoreData*)0) {
            RemovePlayer(this, pIVar1);
        }
        return pIVar1 != (IgnoreData*)0;
    }

    // 0x100198790, 48 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::GetPlayer(rs2lib::social::DisplayName const&) const
    void PlayerRegistry<FriendData>::GetPlayer(DisplayName* param_1) {
        if (GetPlayerByCurrentDisplayName(this, param_1) == 0) {
            GetPlayerByOldDisplayName(param_1);
        }
    }

    // 0x1001afa60, 64 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::RemovePlayer(FriendData const*)
    void PlayerRegistry<FriendData>::RemovePlayer(FriendData* param_1) {
        int iVar1;

        iVar1 = FindSlotFromPlayer(this, param_1);
        if (iVar1 != -1) {
            RemovePlayerFromIndexes(this, param_1);
            RemoveSlotFromMasterList(this, iVar1);
        }
    }

    // 0x1001afaa0, 112 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::FindSlotFromPlayer(FriendData const*)
    ulong PlayerRegistry<FriendData>::FindSlotFromPlayer(FriendData* param_1) {
        unique_ptr<FriendData, std::default_delete<FriendData>>* this_00;
        FriendData* pFVar1;
        ulong uVar2;

        if (0 < *(int*)(this + 12)) {
            uVar2 = 0;
            do {
                this_00 = (unique_ptr<FriendData, std::default_delete<FriendData>>*)
                    Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<FriendData, std::default_delete<FriendData>>, eastl::allocator>*)(this +
                                                                                                                 16),
                        uVar2);
                pFVar1 = (FriendData*)std::unique_ptr<FriendData, std::default_delete<FriendData>>::get(this_00);
                if (pFVar1 == param_1) {
                    return uVar2 & 4294967295;
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)*(int*)(this + 12));
        }
        return 4294967295;
    }

    // 0x1001afb10, 80 bytes, inline, placed by class name
    // PlayerRegistry<FriendData>::RemoveSlotFromMasterList(int)
    void PlayerRegistry<FriendData>::RemoveSlotFromMasterList(int param_1) {
        int iVar1;
        long lVar2;

        iVar1 = *(int*)(this + 12);
        *(int*)(this + 12) = iVar1 + -1;
        if (param_1 < iVar1 + -1) {
            lVar2 = ((this + 16))->data();
            eastl::move<std::unique_ptr<FriendData, std::default_delete<FriendData>>*,
                        std::unique_ptr<FriendData, std::default_delete<FriendData>>*>(
                (unique_ptr*)(lVar2 + (long)param_1 * 8 + 8), (unique_ptr*)(lVar2 + (long)*(int*)(this + 12) * 8 + 8),
                (unique_ptr*)(lVar2 + (long)param_1 * 8));
        }
    }

    // 0x1001afd70, 64 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::RemovePlayer(IgnoreData const*)
    void PlayerRegistry<IgnoreData>::RemovePlayer(IgnoreData* param_1) {
        int iVar1;

        iVar1 = FindSlotFromPlayer(this, param_1);
        if (iVar1 != -1) {
            RemovePlayerFromIndexes(param_1);
            RemoveSlotFromMasterList(this, iVar1);
        }
    }

    // 0x1001afdb0, 112 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::FindSlotFromPlayer(IgnoreData const*)
    ulong PlayerRegistry<IgnoreData>::FindSlotFromPlayer(IgnoreData* param_1) {
        unique_ptr<IgnoreData, std::default_delete<IgnoreData>>* this_00;
        IgnoreData* pIVar1;
        ulong uVar2;

        if (0 < *(int*)(this + 12)) {
            uVar2 = 0;
            do {
                this_00 = (unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*)
                    Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>, eastl::allocator>*)(this +
                                                                                                                 16),
                        uVar2);
                pIVar1 = (IgnoreData*)std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>::get(this_00);
                if (pIVar1 == param_1) {
                    return uVar2 & 4294967295;
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)*(int*)(this + 12));
        }
        return 4294967295;
    }

    // 0x1001afe20, 80 bytes, inline, placed by class name
    // PlayerRegistry<IgnoreData>::RemoveSlotFromMasterList(int)
    void PlayerRegistry<IgnoreData>::RemoveSlotFromMasterList(int param_1) {
        int iVar1;
        long lVar2;

        iVar1 = *(int*)(this + 12);
        *(int*)(this + 12) = iVar1 + -1;
        if (param_1 < iVar1 + -1) {
            lVar2 = ((this + 16))->data();
            eastl::move<std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*,
                        std::unique_ptr<IgnoreData, std::default_delete<IgnoreData>>*>(
                (unique_ptr*)(lVar2 + (long)param_1 * 8 + 8), (unique_ptr*)(lVar2 + (long)*(int*)(this + 12) * 8 + 8),
                (unique_ptr*)(lVar2 + (long)param_1 * 8));
        }
    }

} // namespace jag::oldscape::social
