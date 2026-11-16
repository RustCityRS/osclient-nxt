// projects/osclient/social/ChainablePlayerDataComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class ChainablePlayerDataComparator {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual void AddChainedComparator(
            std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>&&);
        ChainablePlayerDataComparator();
        GetChainedCompare(FriendData const&, FriendData const&) const;
        ~ChainablePlayerDataComparator();
        void AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                                                  std::default_delete<PlayerDataComparator<FriendChatUser>>>&&);
        GetChainedCompare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100170650, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // ChainablePlayerDataComparator<FriendData>::ChainablePlayerDataComparator()
    void ChainablePlayerDataComparator<FriendData>::ChainablePlayerDataComparator() {
        new (this) PlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8ba0 + 16;
        std::unique_ptr<PlayerDataComparator<FriendData>,
                        std::default_delete<PlayerDataComparator<FriendData>>>::unique_ptr<true,
                                                                                           void>((
            unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData>>>*)(this +
                                                                                                                  8));
    }

    // 0x1001706e0, 64 bytes, inline, placed by class name and debug map
    // ChainablePlayerDataComparator<FriendData>::AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendData>, std::default_delete<PlayerDataComparator<FriendData> > >&&)
    /* ChainablePlayerDataComparator<FriendData>::AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendData>,
   std::default_delete<PlayerDataComparator<FriendData>
   > >&&) */

    void ChainablePlayerDataComparator<FriendData>::AddChainedComparator(unique_ptr* param_1) {
        long* plVar2;
        unique_ptr* this_00;

        this_00 = (unique_ptr*)(this + 8);
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

    // 0x100170780, 80 bytes, inline, placed by class name and debug map
    // ChainablePlayerDataComparator<FriendData>::GetChainedCompare(FriendData const&, FriendData const&) const
    undefined8 ChainablePlayerDataComparator<FriendData>::GetChainedCompare(FriendData* param_1, FriendData* param_2) {
        bool bVar1;
        undefined8* puVar2;
        undefined8 uVar3;

        bVar1 = std::operator==((unique_ptr*)(this + 8), (_func_decltype_nullptr*)param_1);
        uVar3 = 0;
        if (!bVar1) {
            puVar2 = (undefined8*)std::unique_ptr<PlayerDataComparator<FriendData>,
                                                  std::default_delete<PlayerDataComparator<FriendData>>>::
                     operator->((unique_ptr<PlayerDataComparator<FriendData>,
                                            std::default_delete<PlayerDataComparator<FriendData>>>*)(this + 8));
            uVar3 = (**(code**)*puVar2)(puVar2, param_1, param_2);
        }
        return uVar3;
    }

    // 0x1001707e0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ChainablePlayerDataComparator<FriendData>::~ChainablePlayerDataComparator()
    void ChainablePlayerDataComparator<FriendData>::~ChainablePlayerDataComparator() {
        *(undefined**)this = PTR_vtable_100ee8ba0 + 16;
        ((this + 8))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100174d60, 48 bytes, base-object constructor, inline, placed by class name
    // ChainablePlayerDataComparator<FriendChatUser>::ChainablePlayerDataComparator()
    void ChainablePlayerDataComparator<FriendChatUser>::ChainablePlayerDataComparator() {
        new (this) PlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8ba8 + 16;
        std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>::unique_ptr<true,
                                                                                               void>(
            (unique_ptr<PlayerDataComparator<FriendChatUser>,
                        std::default_delete<PlayerDataComparator<FriendChatUser>>>*)(this + 8));
    }

    // 0x100174df0, 64 bytes, inline, placed by class name
    // ChainablePlayerDataComparator<FriendChatUser>::AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>, std::default_delete<PlayerDataComparator<FriendChatUser> > >&&)
    /* ChainablePlayerDataComparator<FriendChatUser>::AddChainedComparator(std::unique_ptr<PlayerDataComparator<FriendChatUser>,
   std::default_delete<PlayerDataComparator<FriendChatUser>
   > >&&) */

    void ChainablePlayerDataComparator<FriendChatUser>::AddChainedComparator(unique_ptr* param_1) {
        long* plVar2;
        unique_ptr* this_00;

        this_00 = (unique_ptr*)(this + 8);
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

    // 0x100174e90, 80 bytes, inline, placed by class name
    // ChainablePlayerDataComparator<FriendChatUser>::GetChainedCompare(FriendChatUser const&, FriendChatUser const&) const
    undefined8 ChainablePlayerDataComparator<FriendChatUser>::GetChainedCompare(FriendChatUser* param_1,
                                                                                FriendChatUser* param_2) {
        bool bVar1;
        undefined8* puVar2;
        undefined8 uVar3;

        bVar1 = std::operator==((unique_ptr*)(this + 8), (_func_decltype_nullptr*)param_1);
        uVar3 = 0;
        if (!bVar1) {
            puVar2 = (undefined8*)std::unique_ptr<PlayerDataComparator<FriendChatUser>,
                                                  std::default_delete<PlayerDataComparator<FriendChatUser>>>::
                     operator->((unique_ptr<PlayerDataComparator<FriendChatUser>,
                                            std::default_delete<PlayerDataComparator<FriendChatUser>>>*)(this + 8));
            uVar3 = (**(code**)*puVar2)(puVar2, param_1, param_2);
        }
        return uVar3;
    }

    // 0x100174ef0, 48 bytes, base-object destructor, inline, placed by class name
    // ChainablePlayerDataComparator<FriendChatUser>::~ChainablePlayerDataComparator()
    void ChainablePlayerDataComparator<FriendChatUser>::~ChainablePlayerDataComparator() {
        *(undefined**)this = PTR_vtable_100ee8ba8 + 16;
        ((this + 8))->~unique_ptr();
        ~AutoSingleton();
    }

} // namespace jag::oldscape::social
