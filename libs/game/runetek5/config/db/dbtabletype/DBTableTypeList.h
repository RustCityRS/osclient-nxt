// libs/game/runetek5/config/db/dbtabletype/DBTableTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class DBTableTypeList {
    public:
        // virtual methods in vtable order
        virtual ~DBTableTypeList();
        DBTableTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x10057c800, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DBTableTypeList::DBTableTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x10057c820, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // DBTableTypeList::DBTableTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void DBTableTypeList::DBTableTypeList() {
        BaseTemplateConfigTypeList<DBTableType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f70 + 16;
    }

    // 0x10057c9a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DBTableTypeList::~DBTableTypeList(): jumps straight to the base-object destructor

    // 0x10057c9b0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // DBTableTypeList::~DBTableTypeList()
    void DBTableTypeList::~DBTableTypeList() {
        ~DBTableTypeList(this);
        operator_delete(this);
    }

    // 0x10057cd10: the linker folded this into BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList(), which has identical code
    DBTableTypeList::~DBTableTypeList();

} // namespace jag::game

namespace jag {
    // 0x10057d980, 32 bytes, inline, placed by debug map only (low confidence)
    // game::DBTableType* placement_new<game::DBTableType, game::BaseTemplateConfigTypeList<game::DBTableType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::DBTableType>*&, int&)
    /* game::DBTableType* placement_new<game::DBTableType,
   game::BaseTemplateConfigTypeList<game::DBTableType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::DBTableType>*&, unsigned int&) */

    DBTableType*
    jag::placement_new<game::DBTableType, game::BaseTemplateConfigTypeList<game::DBTableType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::DBTableType::DBTableType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10057d9a0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4> >* placement_new<MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4> >, MakeSharedPool<game::DBTableType, 4>::RefCounterAndData*&, game::DBTableType*>(void*, MakeSharedPool<game::DBTableType, 4>::RefCounterAndData*&, game::DBTableType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>,
                       MakeSharedPool<game::DBTableType, 4>::RefCounterAndData*&, game::DBTableType*>(
        void* param_1, RefCounterAndData** param_2, DBTableType** param_3) {
        MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10057d9c0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::DBTableType>(ref_counter_base*, game::DBTableType*, game::DBTableType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::DBTableType>(ref_counter_base* param_1, DBTableType* param_2,
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

    // 0x10057ecf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4> >::MakeSharedPoolRefCounter(void*, game::DBTableType*): jumps straight to the base-object constructor

    // 0x10057ed00, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4> >::MakeSharedPoolRefCounter(void*, game::DBTableType*)
    void MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>* this, void* param_1,
        DBTableType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee79f8 + 16;
        *(void**)(this + 16) = param_1;
        *(DBTableType**)(this + 24) = param_2;
    }

    // 0x10057ed40, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::DBTableType, 4>::deallocate(pvVar1);
    }

} // namespace jag
