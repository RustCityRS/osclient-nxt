// libs/game/runetek5/config/invtype/InvTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100583070, 32 bytes, inline, placed by debug map only (low confidence)
    // game::InvType* placement_new<game::InvType, game::BaseTemplateConfigTypeList<game::InvType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::InvType>*&, int&)
    /* game::InvType* placement_new<game::InvType,
   game::BaseTemplateConfigTypeList<game::InvType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::InvType>*&, unsigned int&) */

    InvType* jag::placement_new<game::InvType, game::BaseTemplateConfigTypeList<game::InvType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::InvType::InvType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100583090, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32> >* placement_new<MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32> >, MakeSharedPool<game::InvType, 32>::RefCounterAndData*&, game::InvType*>(void*, MakeSharedPool<game::InvType, 32>::RefCounterAndData*&, game::InvType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>,
                       MakeSharedPool<game::InvType, 32>::RefCounterAndData*&, game::InvType*>(
        void* param_1, RefCounterAndData** param_2, InvType** param_3) {
        MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005830b0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::InvType>(ref_counter_base*, game::InvType*, game::InvType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::InvType>(ref_counter_base* param_1, InvType* param_2,
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

    // 0x1005843d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32> >::MakeSharedPoolRefCounter(void*, game::InvType*): jumps straight to the base-object constructor

    // 0x1005843e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32> >::MakeSharedPoolRefCounter(void*, game::InvType*)
    void MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>* this, void* param_1,
        InvType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7af0 + 16;
        *(void**)(this + 16) = param_1;
        *(InvType**)(this + 24) = param_2;
    }

    // 0x100584420, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::InvType, 32>::deallocate(pvVar1);
    }

    // 0x100588630, 32 bytes, inline, placed by debug map only (low confidence)
    // game::VarBitType* placement_new<game::VarBitType, game::BaseTemplateConfigTypeList<game::VarBitType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::VarBitType>*&, int&)
    /* game::VarBitType* placement_new<game::VarBitType,
   game::BaseTemplateConfigTypeList<game::VarBitType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::VarBitType>*&, unsigned int&) */

    VarBitType*
    jag::placement_new<game::VarBitType, game::BaseTemplateConfigTypeList<game::VarBitType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::VarBitType::VarBitType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100588650, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048> >* placement_new<MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048> >, MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData*&, game::VarBitType*>(void*, MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData*&, game::VarBitType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>,
                       MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData*&, game::VarBitType*>(
        void* param_1, RefCounterAndData** param_2, VarBitType** param_3) {
        MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100588670, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::VarBitType>(ref_counter_base*, game::VarBitType*, game::VarBitType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::VarBitType>(ref_counter_base* param_1, VarBitType* param_2,
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

    // 0x100588760, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048> >::MakeSharedPoolRefCounter(void*, game::VarBitType*): jumps straight to the base-object constructor

    // 0x100588770, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048> >::MakeSharedPoolRefCounter(void*, game::VarBitType*)
    void MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>* this, void* param_1,
        VarBitType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee79f0 + 16;
        *(void**)(this + 16) = param_1;
        *(VarBitType**)(this + 24) = param_2;
    }

    // 0x1005887b0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::VarBitType, 2048>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class InvTypeList {
    public:
        // virtual methods in vtable order
        virtual ~InvTypeList();
        InvTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x100581ef0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // InvTypeList::InvTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x100581f10, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // InvTypeList::InvTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void InvTypeList::InvTypeList() {
        BaseTemplateConfigTypeList<InvType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ed8 + 16;
    }

    // 0x100582090, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // InvTypeList::~InvTypeList(): jumps straight to the base-object destructor

    // 0x1005820a0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // InvTypeList::~InvTypeList()
    void InvTypeList::~InvTypeList() {
        ~InvTypeList(this);
        operator_delete(this);
    }

    // 0x100582400: the linker folded this into BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList(), which has identical code
    InvTypeList::~InvTypeList();

} // namespace jag::game
