// libs/game/runetek5/config/bastype/BASTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BASTypeList {
    public:
        // virtual methods in vtable order
        virtual ~BASTypeList();
        BASTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x10058b990, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BASTypeList::BASTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x10058b9b0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // BASTypeList::BASTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void BASTypeList::BASTypeList() {
        BaseTemplateConfigTypeList<BASType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ec0 + 16;
    }

    // 0x10058bb30, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BASTypeList::~BASTypeList(): jumps straight to the base-object destructor

    // 0x10058bb40, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BASTypeList::~BASTypeList()
    void BASTypeList::~BASTypeList() {
        ~BASTypeList(this);
        operator_delete(this);
    }

    // 0x10058bea0: the linker folded this into BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList(), which has identical code
    BASTypeList::~BASTypeList();

} // namespace jag::game

namespace jag {
    // 0x10058caf0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BASType* placement_new<game::BASType, game::BaseTemplateConfigTypeList<game::BASType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::BASType>*&, int&)
    /* game::BASType* placement_new<game::BASType,
   game::BaseTemplateConfigTypeList<game::BASType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::BASType>*&, unsigned int&) */

    BASType* jag::placement_new<game::BASType, game::BaseTemplateConfigTypeList<game::BASType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::BASType::BASType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10058cb10, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96> >* placement_new<MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96> >, MakeSharedPool<game::BASType, 96>::RefCounterAndData*&, game::BASType*>(void*, MakeSharedPool<game::BASType, 96>::RefCounterAndData*&, game::BASType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>,
                       MakeSharedPool<game::BASType, 96>::RefCounterAndData*&, game::BASType*>(
        void* param_1, RefCounterAndData** param_2, BASType** param_3) {
        MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10058cb30, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::BASType>(ref_counter_base*, game::BASType*, game::BASType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::BASType>(ref_counter_base* param_1, BASType* param_2,
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

    // 0x10058df10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96> >::MakeSharedPoolRefCounter(void*, game::BASType*): jumps straight to the base-object constructor

    // 0x10058df20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96> >::MakeSharedPoolRefCounter(void*, game::BASType*)
    void MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>* this, void* param_1,
        BASType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ae0 + 16;
        *(void**)(this + 16) = param_1;
        *(BASType**)(this + 24) = param_2;
    }

    // 0x10058df60, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BASType, 96>::deallocate(pvVar1);
    }

} // namespace jag
