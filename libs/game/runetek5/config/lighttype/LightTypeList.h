// libs/game/runetek5/config/lighttype/LightTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class LightTypeList {
    public:
        // virtual methods in vtable order
        virtual ~LightTypeList();
        LightTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 105 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[97];
    };

    // 0x1005c34c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LightTypeList::LightTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005c34e0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // LightTypeList::LightTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void LightTypeList::LightTypeList() {
        BaseTemplateConfigTypeList<LightType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f20 + 16;
    }

    // 0x1005c3660, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LightTypeList::~LightTypeList(): jumps straight to the base-object destructor

    // 0x1005c3670, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // LightTypeList::~LightTypeList()
    void LightTypeList::~LightTypeList() {
        ~LightTypeList(this);
        operator_delete(this);
    }

    // 0x1005c39d0: the linker folded this into BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList(), which has identical code
    LightTypeList::~LightTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005c4630, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LightType* placement_new<game::LightType, game::BaseTemplateConfigTypeList<game::LightType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::LightType>*&, int&)
    /* game::LightType* placement_new<game::LightType,
   game::BaseTemplateConfigTypeList<game::LightType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::LightType>*&, unsigned int&) */

    LightType* jag::placement_new<game::LightType, game::BaseTemplateConfigTypeList<game::LightType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::LightType::LightType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005c4650, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32> >* placement_new<MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32> >, MakeSharedPool<game::LightType, 32>::RefCounterAndData*&, game::LightType*>(void*, MakeSharedPool<game::LightType, 32>::RefCounterAndData*&, game::LightType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>,
                       MakeSharedPool<game::LightType, 32>::RefCounterAndData*&, game::LightType*>(
        void* param_1, RefCounterAndData** param_2, LightType** param_3) {
        MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005c4670, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::LightType>(ref_counter_base*, game::LightType*, game::LightType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::LightType>(ref_counter_base* param_1, LightType* param_2,
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

    // 0x1005c5980, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32> >::MakeSharedPoolRefCounter(void*, game::LightType*): jumps straight to the base-object constructor

    // 0x1005c5990, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32> >::MakeSharedPoolRefCounter(void*, game::LightType*)
    void MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>* this, void* param_1,
        LightType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b48 + 16;
        *(void**)(this + 16) = param_1;
        *(LightType**)(this + 24) = param_2;
    }

    // 0x1005c59d0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::LightType, 32>::deallocate(pvVar1);
    }

} // namespace jag
