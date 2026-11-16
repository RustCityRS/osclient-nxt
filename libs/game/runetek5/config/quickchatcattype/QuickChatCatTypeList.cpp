// libs/game/runetek5/config/quickchatcattype/QuickChatCatTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "QuickChatCatTypeList.h"

namespace jag::game {
    // 0x1004f5a10, 48 bytes, base-object constructor, placed by class name and debug map
    // QuickChatCatTypeList::QuickChatCatTypeList(Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>&)
    void QuickChatCatTypeList::QuickChatCatTypeList(Array* param_1) {
        new (this) LRUCache<QuickChatCatType>(64, "LRUCache");
        field_3336 = param_1;
    }

    // 0x1004f5a50, 16 bytes, complete-object constructor, placed by class name and debug map
    // QuickChatCatTypeList::QuickChatCatTypeList(Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1004f5a60, 288 bytes, placed by class name and debug map
    // QuickChatCatTypeList::GetQuickChatCatType(unsigned int)
    QuickChatCatTypeList* QuickChatCatTypeList::GetQuickChatCatType(uint param_1) {
        shared_ptr* psVar2;
        vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>* this_00;
        PacketT* pPVar3;
        QuickChatCatType* this_01;
        uint in_EDX;
        undefined4 in_register_00000034;
        LRUCache<QuickChatCatType>* this_02;
        VBOMapper local_68;
        shared_ptr local_48;
        shared_ptr local_38;
        uint local_24;

        this_02 = (LRUCache<QuickChatCatType>*)CONCAT44(in_register_00000034, param_1);
        local_24 = in_EDX;
        psVar2 = (shared_ptr*)this_02->Find((ulong)in_EDX);
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        if (shared_ptr::operator_cast_to_bool(&local_48)) {
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_48);
        } else {
            this_00 = (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)Array<
                eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>::
            operator[](*(Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                               eastl::allocator>**)(this_02 + 3336),
                       0);
            pPVar3 =
                (PacketT*)eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                    this_00, (ulong)local_24);
            new (&local_68) PacketT<Array<unsigned char, eastl::allocator>>(pPVar3);
            local_68.SetPos(0);
            make_shared<QuickChatCatType, unsigned int&>((jag*)&local_38, &local_24);
            this_01 =
                (QuickChatCatType*)shared_ptr<QuickChatCatType>::operator->((shared_ptr<QuickChatCatType>*)&local_38);
            this_01->Decode((PacketT*)&local_68);
            psVar2 = (shared_ptr*)this_02->Put(&local_38, 1, (ulong)local_24);
            new (this) shared_ptr<oldscape::dash3d::Decor>(psVar2);
            local_38.~shared_ptr();
            local_68.~VBOMapper();
        }
        local_48.~shared_ptr();
        return this;
    }

} // namespace jag::game

namespace jag {
    // 0x1004f5c20, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::QuickChatCatType>::type make_shared<game::QuickChatCatType, unsigned int&>(unsigned int&)
    jag* make_shared<game::QuickChatCatType, unsigned int&>(uint* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        QuickChatCatType* local_30[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<game::QuickChatCatType, unsigned int&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<game::QuickChatCatType>, int, game::QuickChatCatType*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
