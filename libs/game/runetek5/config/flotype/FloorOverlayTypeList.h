// libs/game/runetek5/config/flotype/FloorOverlayTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class FloorOverlayTypeList {
    public:
        // virtual methods in vtable order
        virtual ~FloorOverlayTypeList();
        FloorOverlayTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005967a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // FloorOverlayTypeList::FloorOverlayTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005967c0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // FloorOverlayTypeList::FloorOverlayTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void FloorOverlayTypeList::FloorOverlayTypeList() {
        BaseTemplateConfigTypeList<FloorOverlayType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ff8 + 16;
    }

    // 0x100596940, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FloorOverlayTypeList::~FloorOverlayTypeList(): jumps straight to the base-object destructor

    // 0x100596950, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // FloorOverlayTypeList::~FloorOverlayTypeList()
    void FloorOverlayTypeList::~FloorOverlayTypeList() {
        ~FloorOverlayTypeList(this);
        operator_delete(this);
    }

    // 0x100596cb0: the linker folded this into BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList(), which has identical code
    FloorOverlayTypeList::~FloorOverlayTypeList();

} // namespace jag::game

namespace jag {
    // 0x100597920, 32 bytes, inline, placed by debug map only (low confidence)
    // game::FloorOverlayType* placement_new<game::FloorOverlayType, game::BaseTemplateConfigTypeList<game::FloorOverlayType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::FloorOverlayType>*&, int&)
    /* game::FloorOverlayType* placement_new<game::FloorOverlayType,
   game::BaseTemplateConfigTypeList<game::FloorOverlayType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::FloorOverlayType>*&, unsigned int&) */

    FloorOverlayType*
    jag::placement_new<game::FloorOverlayType, game::BaseTemplateConfigTypeList<game::FloorOverlayType>*&,
                       unsigned int&>(void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::FloorOverlayType::FloorOverlayType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100597940, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128> >* placement_new<MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128> >, MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData*&, game::FloorOverlayType*>(void*, MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData*&, game::FloorOverlayType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>,
                       MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData*&, game::FloorOverlayType*>(
        void* param_1, RefCounterAndData** param_2, FloorOverlayType** param_3) {
        MakeSharedPoolRefCounter<game::FloorOverlayType,
                                 MakeSharedPool<game::FloorOverlayType, 128>>::MakeSharedPoolRefCounter(param_1,
                                                                                                        *param_2,
                                                                                                        *param_3);
        return param_1;
    }

    // 0x100597960, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::FloorOverlayType>(ref_counter_base*, game::FloorOverlayType*, game::FloorOverlayType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::FloorOverlayType>(ref_counter_base* param_1,
                                                                       FloorOverlayType* param_2,
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

    // 0x100598c60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128> >::MakeSharedPoolRefCounter(void*, game::FloorOverlayType*): jumps straight to the base-object constructor

    // 0x100598c70, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128> >::MakeSharedPoolRefCounter(void*, game::FloorOverlayType*)
    void jag::MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>* this,
            void* param_1, FloorOverlayType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a50 + 16;
        *(void**)(this + 16) = param_1;
        *(FloorOverlayType**)(this + 24) = param_2;
    }

    // 0x100598cb0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::FloorOverlayType, 128>::deallocate(pvVar1);
    }

} // namespace jag
