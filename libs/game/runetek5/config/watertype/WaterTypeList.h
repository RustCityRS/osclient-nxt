// libs/game/runetek5/config/watertype/WaterTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class WaterTypeList {
    public:
        // virtual methods in vtable order
        virtual ~WaterTypeList();
        WaterTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005ce9d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaterTypeList::WaterTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005ce9f0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // WaterTypeList::WaterTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void WaterTypeList::WaterTypeList() {
        BaseTemplateConfigTypeList<WaterType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f40 + 16;
    }

    // 0x1005ceb70, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WaterTypeList::~WaterTypeList(): jumps straight to the base-object destructor

    // 0x1005ceb80, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // WaterTypeList::~WaterTypeList()
    void WaterTypeList::~WaterTypeList() {
        ~WaterTypeList(this);
        operator_delete(this);
    }

    // 0x1005ceee0: the linker folded this into BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList(), which has identical code
    WaterTypeList::~WaterTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005cfa80, 32 bytes, inline, placed by debug map only (low confidence)
    // game::WaterType* placement_new<game::WaterType, game::BaseTemplateConfigTypeList<game::WaterType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::WaterType>*&, int&)
    /* game::WaterType* placement_new<game::WaterType,
   game::BaseTemplateConfigTypeList<game::WaterType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::WaterType>*&, unsigned int&) */

    WaterType* jag::placement_new<game::WaterType, game::BaseTemplateConfigTypeList<game::WaterType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::WaterType::WaterType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005cfaa0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16> >* placement_new<MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16> >, MakeSharedPool<game::WaterType, 16>::RefCounterAndData*&, game::WaterType*>(void*, MakeSharedPool<game::WaterType, 16>::RefCounterAndData*&, game::WaterType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>,
                       MakeSharedPool<game::WaterType, 16>::RefCounterAndData*&, game::WaterType*>(
        void* param_1, RefCounterAndData** param_2, WaterType** param_3) {
        MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005cfac0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::WaterType>(ref_counter_base*, game::WaterType*, game::WaterType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::WaterType>(ref_counter_base* param_1, WaterType* param_2,
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

    // 0x1005cfbb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16> >::MakeSharedPoolRefCounter(void*, game::WaterType*): jumps straight to the base-object constructor

    // 0x1005cfbc0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16> >::MakeSharedPoolRefCounter(void*, game::WaterType*)
    void MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>* this, void* param_1,
        WaterType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b68 + 16;
        *(void**)(this + 16) = param_1;
        *(WaterType**)(this + 24) = param_2;
    }

    // 0x1005cfc00, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::WaterType, 16>::deallocate(pvVar1);
    }

} // namespace jag
