// libs/game/runetek5/config/paramtype/ParamTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class ParamTypeList {
    public:
        // virtual methods in vtable order
        virtual ~ParamTypeList();
        ParamTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x100571360, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ParamTypeList::ParamTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x100571380, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // ParamTypeList::ParamTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void ParamTypeList::ParamTypeList() {
        BaseTemplateConfigTypeList<ParamType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f28 + 16;
    }

    // 0x100571500, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ParamTypeList::~ParamTypeList(): jumps straight to the base-object destructor

    // 0x100571510, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ParamTypeList::~ParamTypeList()
    void ParamTypeList::~ParamTypeList() {
        ~ParamTypeList(this);
        operator_delete(this);
    }

    // 0x100571870: the linker folded this into BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList(), which has identical code
    ParamTypeList::~ParamTypeList();

} // namespace jag::game

namespace jag {
    // 0x100572510, 32 bytes, inline, placed by debug map only (low confidence)
    // game::ParamType* placement_new<game::ParamType, game::BaseTemplateConfigTypeList<game::ParamType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::ParamType>*&, int&)
    /* game::ParamType* placement_new<game::ParamType,
   game::BaseTemplateConfigTypeList<game::ParamType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::ParamType>*&, unsigned int&) */

    ParamType* jag::placement_new<game::ParamType, game::BaseTemplateConfigTypeList<game::ParamType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::ParamType::ParamType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100572530, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640> >* placement_new<MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640> >, MakeSharedPool<game::ParamType, 640>::RefCounterAndData*&, game::ParamType*>(void*, MakeSharedPool<game::ParamType, 640>::RefCounterAndData*&, game::ParamType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>,
                       MakeSharedPool<game::ParamType, 640>::RefCounterAndData*&, game::ParamType*>(
        void* param_1, RefCounterAndData** param_2, ParamType** param_3) {
        MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100572550, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::ParamType>(ref_counter_base*, game::ParamType*, game::ParamType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::ParamType>(ref_counter_base* param_1, ParamType* param_2,
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

    // 0x100573970, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640> >::MakeSharedPoolRefCounter(void*, game::ParamType*): jumps straight to the base-object constructor

    // 0x100573980, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640> >::MakeSharedPoolRefCounter(void*, game::ParamType*)
    void MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>* this, void* param_1,
        ParamType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b58 + 16;
        *(void**)(this + 16) = param_1;
        *(ParamType**)(this + 24) = param_2;
    }

    // 0x1005739c0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::ParamType, 640>::deallocate(pvVar1);
    }

} // namespace jag
