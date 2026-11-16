// libs/game/runetek5/config/structtype/StructTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class StructTypeList {
    public:
        // virtual methods in vtable order
        virtual ~StructTypeList();
        StructTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005e9d20, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StructTypeList::StructTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005e9d40, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // StructTypeList::StructTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void StructTypeList::StructTypeList() {
        BaseTemplateConfigTypeList<StructType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f60 + 16;
    }

    // 0x1005e9ec0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // StructTypeList::~StructTypeList(): jumps straight to the base-object destructor

    // 0x1005e9ed0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // StructTypeList::~StructTypeList()
    void StructTypeList::~StructTypeList() {
        ~StructTypeList(this);
        operator_delete(this);
    }

    // 0x1005ea230: the linker folded this into BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList(), which has identical code
    StructTypeList::~StructTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005eae90, 32 bytes, inline, placed by debug map only (low confidence)
    // game::StructType* placement_new<game::StructType, game::BaseTemplateConfigTypeList<game::StructType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::StructType>*&, int&)
    /* game::StructType* placement_new<game::StructType,
   game::BaseTemplateConfigTypeList<game::StructType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::StructType>*&, unsigned int&) */

    StructType*
    jag::placement_new<game::StructType, game::BaseTemplateConfigTypeList<game::StructType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::StructType::StructType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005eaeb0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024> >* placement_new<MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024> >, MakeSharedPool<game::StructType, 1024>::RefCounterAndData*&, game::StructType*>(void*, MakeSharedPool<game::StructType, 1024>::RefCounterAndData*&, game::StructType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>,
                       MakeSharedPool<game::StructType, 1024>::RefCounterAndData*&, game::StructType*>(
        void* param_1, RefCounterAndData** param_2, StructType** param_3) {
        MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005eaed0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::StructType>(ref_counter_base*, game::StructType*, game::StructType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::StructType>(ref_counter_base* param_1, StructType* param_2,
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

    // 0x1005ec1b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024> >::MakeSharedPoolRefCounter(void*, game::StructType*): jumps straight to the base-object constructor

    // 0x1005ec1c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024> >::MakeSharedPoolRefCounter(void*, game::StructType*)
    void MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>* this, void* param_1,
        StructType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee79e8 + 16;
        *(void**)(this + 16) = param_1;
        *(StructType**)(this + 24) = param_2;
    }

    // 0x1005ec200, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::StructType, 1024>::deallocate(pvVar1);
    }

} // namespace jag
