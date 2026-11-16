// libs/game/runetek5/config/enumtype/EnumTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class EnumTypeList {
    public:
        // virtual methods in vtable order
        virtual ~EnumTypeList();
        EnumTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005ddc70, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EnumTypeList::EnumTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005ddc90, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // EnumTypeList::EnumTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void EnumTypeList::EnumTypeList() {
        BaseTemplateConfigTypeList<EnumType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f08 + 16;
    }

    // 0x1005dde10, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // EnumTypeList::~EnumTypeList(): jumps straight to the base-object destructor

    // 0x1005dde20, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // EnumTypeList::~EnumTypeList()
    void EnumTypeList::~EnumTypeList() {
        ~EnumTypeList(this);
        operator_delete(this);
    }

    // 0x1005de180: the linker folded this into BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList(), which has identical code
    EnumTypeList::~EnumTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005dedd0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::EnumType* placement_new<game::EnumType, game::BaseTemplateConfigTypeList<game::EnumType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::EnumType>*&, int&)
    /* game::EnumType* placement_new<game::EnumType,
   game::BaseTemplateConfigTypeList<game::EnumType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::EnumType>*&, unsigned int&) */

    EnumType* jag::placement_new<game::EnumType, game::BaseTemplateConfigTypeList<game::EnumType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::EnumType::EnumType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005dedf0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128> >* placement_new<MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128> >, MakeSharedPool<game::EnumType, 128>::RefCounterAndData*&, game::EnumType*>(void*, MakeSharedPool<game::EnumType, 128>::RefCounterAndData*&, game::EnumType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>,
                       MakeSharedPool<game::EnumType, 128>::RefCounterAndData*&, game::EnumType*>(
        void* param_1, RefCounterAndData** param_2, EnumType** param_3) {
        MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005dee10, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::EnumType>(ref_counter_base*, game::EnumType*, game::EnumType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::EnumType>(ref_counter_base* param_1, EnumType* param_2,
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

    // 0x1005e0b50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128> >::MakeSharedPoolRefCounter(void*, game::EnumType*): jumps straight to the base-object constructor

    // 0x1005e0b60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128> >::MakeSharedPoolRefCounter(void*, game::EnumType*)
    void MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>* this, void* param_1,
        EnumType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b30 + 16;
        *(void**)(this + 16) = param_1;
        *(EnumType**)(this + 24) = param_2;
    }

    // 0x1005e0ba0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::EnumType, 128>::deallocate(pvVar1);
    }

} // namespace jag
