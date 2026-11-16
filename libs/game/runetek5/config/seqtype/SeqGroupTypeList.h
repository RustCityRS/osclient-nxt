// libs/game/runetek5/config/seqtype/SeqGroupTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class SeqGroupTypeList {
    public:
        // virtual methods in vtable order
        virtual ~SeqGroupTypeList();
        SeqGroupTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005bdd80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SeqGroupTypeList::SeqGroupTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005bdda0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // SeqGroupTypeList::SeqGroupTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void SeqGroupTypeList::SeqGroupTypeList() {
        BaseTemplateConfigTypeList<SeqGroupType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7fa0 + 16;
    }

    // 0x1005bdf20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SeqGroupTypeList::~SeqGroupTypeList(): jumps straight to the base-object destructor

    // 0x1005bdf30, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // SeqGroupTypeList::~SeqGroupTypeList()
    void SeqGroupTypeList::~SeqGroupTypeList() {
        ~SeqGroupTypeList(this);
        operator_delete(this);
    }

    // 0x1005be290: the linker folded this into BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList(), which has identical code
    SeqGroupTypeList::~SeqGroupTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005bef00, 32 bytes, inline, placed by debug map only (low confidence)
    // game::SeqGroupType* placement_new<game::SeqGroupType, game::BaseTemplateConfigTypeList<game::SeqGroupType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::SeqGroupType>*&, int&)
    /* game::SeqGroupType* placement_new<game::SeqGroupType,
   game::BaseTemplateConfigTypeList<game::SeqGroupType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::SeqGroupType>*&, unsigned int&) */

    SeqGroupType*
    jag::placement_new<game::SeqGroupType, game::BaseTemplateConfigTypeList<game::SeqGroupType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::SeqGroupType::SeqGroupType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005bef20, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64> >* placement_new<MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64> >, MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData*&, game::SeqGroupType*>(void*, MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData*&, game::SeqGroupType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>,
                       MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData*&, game::SeqGroupType*>(
        void* param_1, RefCounterAndData** param_2, SeqGroupType** param_3) {
        MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005bef40, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::SeqGroupType>(ref_counter_base*, game::SeqGroupType*, game::SeqGroupType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::SeqGroupType>(ref_counter_base* param_1, SeqGroupType* param_2,
                                                                   enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

} // namespace jag
