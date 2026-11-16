// libs/game/runetek5/config/cursortype/CursorTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005d3ef0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::CursorType* placement_new<game::CursorType, game::BaseTemplateConfigTypeList<game::CursorType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::CursorType>*&, int&)
    /* game::CursorType* placement_new<game::CursorType,
   game::BaseTemplateConfigTypeList<game::CursorType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::CursorType>*&, unsigned int&) */

    CursorType*
    jag::placement_new<game::CursorType, game::BaseTemplateConfigTypeList<game::CursorType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::CursorType::CursorType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005d3f10, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64> >* placement_new<MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64> >, MakeSharedPool<game::CursorType, 64>::RefCounterAndData*&, game::CursorType*>(void*, MakeSharedPool<game::CursorType, 64>::RefCounterAndData*&, game::CursorType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>,
                       MakeSharedPool<game::CursorType, 64>::RefCounterAndData*&, game::CursorType*>(
        void* param_1, RefCounterAndData** param_2, CursorType** param_3) {
        MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005d3f30, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::CursorType>(ref_counter_base*, game::CursorType*, game::CursorType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::CursorType>(ref_counter_base* param_1, CursorType* param_2,
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

    // 0x1005d5210, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64> >::MakeSharedPoolRefCounter(void*, game::CursorType*): jumps straight to the base-object constructor

    // 0x1005d5220, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64> >::MakeSharedPoolRefCounter(void*, game::CursorType*)
    void MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>* this, void* param_1,
        CursorType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee79d8 + 16;
        *(void**)(this + 16) = param_1;
        *(CursorType**)(this + 24) = param_2;
    }

    // 0x1005d5260, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::CursorType, 64>::deallocate(pvVar1);
    }

    // 0x1005d94b0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::WorldAreaType* placement_new<game::WorldAreaType, game::BaseTemplateConfigTypeList<game::WorldAreaType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::WorldAreaType>*&, int&)
    /* game::WorldAreaType* placement_new<game::WorldAreaType,
   game::BaseTemplateConfigTypeList<game::WorldAreaType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::WorldAreaType>*&, unsigned int&) */

    WorldAreaType*
    jag::placement_new<game::WorldAreaType, game::BaseTemplateConfigTypeList<game::WorldAreaType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::WorldAreaType::WorldAreaType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005d94d0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024> >* placement_new<MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024> >, MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData*&, game::WorldAreaType*>(void*, MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData*&, game::WorldAreaType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>,
                       MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData*&, game::WorldAreaType*>(
        void* param_1, RefCounterAndData** param_2, WorldAreaType** param_3) {
        MakeSharedPoolRefCounter<game::WorldAreaType,
                                 MakeSharedPool<game::WorldAreaType, 1024>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                      *param_3);
        return param_1;
    }

    // 0x1005d94f0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::WorldAreaType>(ref_counter_base*, game::WorldAreaType*, game::WorldAreaType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::WorldAreaType>(ref_counter_base* param_1, WorldAreaType* param_2,
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

    // 0x1005da7f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024> >::MakeSharedPoolRefCounter(void*, game::WorldAreaType*): jumps straight to the base-object constructor

    // 0x1005da800, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024> >::MakeSharedPoolRefCounter(void*, game::WorldAreaType*)
    void jag::MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>* this,
            void* param_1, WorldAreaType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a20 + 16;
        *(void**)(this + 16) = param_1;
        *(WorldAreaType**)(this + 24) = param_2;
    }

    // 0x1005da840, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::WorldAreaType, 1024>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class CursorTypeList {
    public:
        // virtual methods in vtable order
        virtual ~CursorTypeList();
        CursorTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005d2d90, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CursorTypeList::CursorTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005d2db0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // CursorTypeList::CursorTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void CursorTypeList::CursorTypeList() {
        BaseTemplateConfigTypeList<CursorType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f48 + 16;
    }

    // 0x1005d2f30, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CursorTypeList::~CursorTypeList(): jumps straight to the base-object destructor

    // 0x1005d2f40, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // CursorTypeList::~CursorTypeList()
    void CursorTypeList::~CursorTypeList() {
        ~CursorTypeList(this);
        operator_delete(this);
    }

    // 0x1005d32a0: the linker folded this into BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList(), which has identical code
    CursorTypeList::~CursorTypeList();

} // namespace jag::game
