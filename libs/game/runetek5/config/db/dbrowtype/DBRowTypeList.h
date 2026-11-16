// libs/game/runetek5/config/db/dbrowtype/DBRowTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class DBRowTypeList {
    public:
        // virtual methods in vtable order
        virtual ~DBRowTypeList();
        DBRowTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x100576d40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DBRowTypeList::DBRowTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x100576d60, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // DBRowTypeList::DBRowTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void DBRowTypeList::DBRowTypeList() {
        BaseTemplateConfigTypeList<DBRowType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f10 + 16;
    }

    // 0x100576ee0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DBRowTypeList::~DBRowTypeList(): jumps straight to the base-object destructor

    // 0x100576ef0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // DBRowTypeList::~DBRowTypeList()
    void DBRowTypeList::~DBRowTypeList() {
        ~DBRowTypeList(this);
        operator_delete(this);
    }

    // 0x100577250: the linker folded this into BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList(), which has identical code
    DBRowTypeList::~DBRowTypeList();

} // namespace jag::game

namespace jag {
    // 0x100577eb0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::DBRowType* placement_new<game::DBRowType, game::BaseTemplateConfigTypeList<game::DBRowType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::DBRowType>*&, int&)
    /* game::DBRowType* placement_new<game::DBRowType,
   game::BaseTemplateConfigTypeList<game::DBRowType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::DBRowType>*&, unsigned int&) */

    DBRowType* jag::placement_new<game::DBRowType, game::BaseTemplateConfigTypeList<game::DBRowType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::DBRowType::DBRowType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100577ed0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128> >* placement_new<MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128> >, MakeSharedPool<game::DBRowType, 128>::RefCounterAndData*&, game::DBRowType*>(void*, MakeSharedPool<game::DBRowType, 128>::RefCounterAndData*&, game::DBRowType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>,
                       MakeSharedPool<game::DBRowType, 128>::RefCounterAndData*&, game::DBRowType*>(
        void* param_1, RefCounterAndData** param_2, DBRowType** param_3) {
        MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100577ef0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::DBRowType>(ref_counter_base*, game::DBRowType*, game::DBRowType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::DBRowType>(ref_counter_base* param_1, DBRowType* param_2,
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

    // 0x100579620, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128> >::MakeSharedPoolRefCounter(void*, game::DBRowType*): jumps straight to the base-object constructor

    // 0x100579630, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128> >::MakeSharedPoolRefCounter(void*, game::DBRowType*)
    void MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>* this, void* param_1,
        DBRowType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b40 + 16;
        *(void**)(this + 16) = param_1;
        *(DBRowType**)(this + 24) = param_2;
    }

    // 0x100579670, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::DBRowType, 128>::deallocate(pvVar1);
    }

} // namespace jag
