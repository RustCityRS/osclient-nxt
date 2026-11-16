// libs/game/runetek5/config/idktype/IDKTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005a76c0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::IDKType* placement_new<game::IDKType, game::BaseTemplateConfigTypeList<game::IDKType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::IDKType>*&, int&)
    /* game::IDKType* placement_new<game::IDKType,
   game::BaseTemplateConfigTypeList<game::IDKType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::IDKType>*&, unsigned int&) */

    IDKType* jag::placement_new<game::IDKType, game::BaseTemplateConfigTypeList<game::IDKType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::IDKType::IDKType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005a76e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32> >* placement_new<MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32> >, MakeSharedPool<game::IDKType, 32>::RefCounterAndData*&, game::IDKType*>(void*, MakeSharedPool<game::IDKType, 32>::RefCounterAndData*&, game::IDKType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>,
                       MakeSharedPool<game::IDKType, 32>::RefCounterAndData*&, game::IDKType*>(
        void* param_1, RefCounterAndData** param_2, IDKType** param_3) {
        MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005a7700, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::IDKType>(ref_counter_base*, game::IDKType*, game::IDKType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::IDKType>(ref_counter_base* param_1, IDKType* param_2,
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

    // 0x1005a8c40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32> >::MakeSharedPoolRefCounter(void*, game::IDKType*): jumps straight to the base-object constructor

    // 0x1005a8c50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32> >::MakeSharedPoolRefCounter(void*, game::IDKType*)
    void MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>* this, void* param_1,
        IDKType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ae8 + 16;
        *(void**)(this + 16) = param_1;
        *(IDKType**)(this + 24) = param_2;
    }

    // 0x1005a8c90, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::IDKType, 32>::deallocate(pvVar1);
    }

    // 0x1005ad050, 32 bytes, inline, placed by debug map only (low confidence)
    // game::MapElementType* placement_new<game::MapElementType, game::BaseTemplateConfigTypeList<game::MapElementType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::MapElementType>*&, int&)
    /* game::MapElementType* placement_new<game::MapElementType,
   game::BaseTemplateConfigTypeList<game::MapElementType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::MapElementType>*&, unsigned int&) */

    MapElementType*
    jag::placement_new<game::MapElementType, game::BaseTemplateConfigTypeList<game::MapElementType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::MapElementType::MapElementType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005ad070, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512> >* placement_new<MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512> >, MakeSharedPool<game::MapElementType, 512>::RefCounterAndData*&, game::MapElementType*>(void*, MakeSharedPool<game::MapElementType, 512>::RefCounterAndData*&, game::MapElementType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>,
                       MakeSharedPool<game::MapElementType, 512>::RefCounterAndData*&, game::MapElementType*>(
        void* param_1, RefCounterAndData** param_2, MapElementType** param_3) {
        MakeSharedPoolRefCounter<game::MapElementType,
                                 MakeSharedPool<game::MapElementType, 512>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                      *param_3);
        return param_1;
    }

    // 0x1005ad090, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::MapElementType>(ref_counter_base*, game::MapElementType*, game::MapElementType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::MapElementType>(ref_counter_base* param_1, MapElementType* param_2,
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

    // 0x1005aeea0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512> >::MakeSharedPoolRefCounter(void*, game::MapElementType*): jumps straight to the base-object constructor

    // 0x1005aeeb0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512> >::MakeSharedPoolRefCounter(void*, game::MapElementType*)
    void jag::MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>* this,
            void* param_1, MapElementType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a30 + 16;
        *(void**)(this + 16) = param_1;
        *(MapElementType**)(this + 24) = param_2;
    }

    // 0x1005aeef0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::MapElementType, 512>::deallocate(pvVar1);
    }

    // 0x1005b38e0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::MSIType* placement_new<game::MSIType, game::BaseTemplateConfigTypeList<game::MSIType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::MSIType>*&, int&)
    /* game::MSIType* placement_new<game::MSIType,
   game::BaseTemplateConfigTypeList<game::MSIType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::MSIType>*&, unsigned int&) */

    MSIType* jag::placement_new<game::MSIType, game::BaseTemplateConfigTypeList<game::MSIType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::MSIType::MSIType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005b3900, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32> >* placement_new<MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32> >, MakeSharedPool<game::MSIType, 32>::RefCounterAndData*&, game::MSIType*>(void*, MakeSharedPool<game::MSIType, 32>::RefCounterAndData*&, game::MSIType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>,
                       MakeSharedPool<game::MSIType, 32>::RefCounterAndData*&, game::MSIType*>(
        void* param_1, RefCounterAndData** param_2, MSIType** param_3) {
        MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005b3920, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::MSIType>(ref_counter_base*, game::MSIType*, game::MSIType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::MSIType>(ref_counter_base* param_1, MSIType* param_2,
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

    // 0x1005b4c00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32> >::MakeSharedPoolRefCounter(void*, game::MSIType*): jumps straight to the base-object constructor

    // 0x1005b4c10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32> >::MakeSharedPoolRefCounter(void*, game::MSIType*)
    void MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>* this, void* param_1,
        MSIType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b08 + 16;
        *(void**)(this + 16) = param_1;
        *(MSIType**)(this + 24) = param_2;
    }

    // 0x1005b4c50, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::MSIType, 32>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class IDKTypeList {
    public:
        // virtual methods in vtable order
        virtual ~IDKTypeList();
        IDKTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005a6560, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // IDKTypeList::IDKTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005a6580, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // IDKTypeList::IDKTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void IDKTypeList::IDKTypeList() {
        BaseTemplateConfigTypeList<IDKType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ed0 + 16;
    }

    // 0x1005a6700, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // IDKTypeList::~IDKTypeList(): jumps straight to the base-object destructor

    // 0x1005a6710, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // IDKTypeList::~IDKTypeList()
    void IDKTypeList::~IDKTypeList() {
        ~IDKTypeList(this);
        operator_delete(this);
    }

    // 0x1005a6a70: the linker folded this into BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList(), which has identical code
    IDKTypeList::~IDKTypeList();

} // namespace jag::game
