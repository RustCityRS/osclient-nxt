// libs/game/runetek5/config/flutype/FloorUnderlayTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class FloorUnderlayTypeList {
    public:
        // virtual methods in vtable order
        virtual ~FloorUnderlayTypeList();
        FloorUnderlayTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005910f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // FloorUnderlayTypeList::FloorUnderlayTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x100591110, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // FloorUnderlayTypeList::FloorUnderlayTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void FloorUnderlayTypeList::FloorUnderlayTypeList() {
        BaseTemplateConfigTypeList<FloorUnderlayType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee8008 + 16;
    }

    // 0x100591290, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FloorUnderlayTypeList::~FloorUnderlayTypeList(): jumps straight to the base-object destructor

    // 0x1005912a0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // FloorUnderlayTypeList::~FloorUnderlayTypeList()
    void FloorUnderlayTypeList::~FloorUnderlayTypeList() {
        ~FloorUnderlayTypeList(this);
        operator_delete(this);
    }

    // 0x100591600: the linker folded this into BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList(), which has identical code
    FloorUnderlayTypeList::~FloorUnderlayTypeList();

} // namespace jag::game

namespace jag {
    // 0x100592260, 32 bytes, inline, placed by debug map only (low confidence)
    // game::FloorUnderlayType* placement_new<game::FloorUnderlayType, game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*&, int&)
    /* game::FloorUnderlayType* placement_new<game::FloorUnderlayType,
   game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*&, unsigned int&) */

    FloorUnderlayType*
    jag::placement_new<game::FloorUnderlayType, game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*&,
                       unsigned int&>(void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::FloorUnderlayType::FloorUnderlayType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100592280, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128> >* placement_new<MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128> >, MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData*&, game::FloorUnderlayType*>(void*, MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData*&, game::FloorUnderlayType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>,
                       MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData*&, game::FloorUnderlayType*>(
        void* param_1, RefCounterAndData** param_2, FloorUnderlayType** param_3) {
        MakeSharedPoolRefCounter<game::FloorUnderlayType,
                                 MakeSharedPool<game::FloorUnderlayType, 128>>::MakeSharedPoolRefCounter(param_1,
                                                                                                         *param_2,
                                                                                                         *param_3);
        return param_1;
    }

    // 0x1005922a0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::FloorUnderlayType>(ref_counter_base*, game::FloorUnderlayType*, game::FloorUnderlayType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::FloorUnderlayType>(ref_counter_base* param_1,
                                                                        FloorUnderlayType* param_2,
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

    // 0x1005935a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128> >::MakeSharedPoolRefCounter(void*, game::FloorUnderlayType*): jumps straight to the base-object constructor

    // 0x1005935b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128> >::MakeSharedPoolRefCounter(void*, game::FloorUnderlayType*)
    void jag::MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>* this,
            void* param_1, FloorUnderlayType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a68 + 16;
        *(void**)(this + 16) = param_1;
        *(FloorUnderlayType**)(this + 24) = param_2;
    }

    // 0x1005935f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::FloorUnderlayType, 128>::deallocate(pvVar1);
    }

} // namespace jag
