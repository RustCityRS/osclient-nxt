// libs/game/runetek5/config/achievementtype/AchievementTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class AchievementTypeList {
    public:
        // virtual methods in vtable order
        virtual ~AchievementTypeList();
        GetConfigProvider();
        AchievementTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&,
                            ConfigProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        undefined8 field_112; // offset 112
    };

    // 0x1004c5ce0: the linker folded this into VarBitTypeList::GetConfigProvider(), which has identical code
    AchievementTypeList::GetConfigProvider();

    // 0x1005ef3b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AchievementTypeList::AchievementTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&): jumps straight to the base-object constructor

    // 0x1005ef3d0, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // AchievementTypeList::AchievementTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&)
    void AchievementTypeList::AchievementTypeList() {
        undefined8 in_R9;

        BaseTemplateConfigTypeList<AchievementType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7fd0 + 16;
        field_112 = in_R9;
    }

    // 0x1005ef560, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AchievementTypeList::~AchievementTypeList(): jumps straight to the base-object destructor

    // 0x1005ef570, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // AchievementTypeList::~AchievementTypeList()
    void AchievementTypeList::~AchievementTypeList() {
        ~AchievementTypeList(this);
        operator_delete(this);
    }

    // 0x1005ef8d0: the linker folded this into BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList(), which has identical code
    AchievementTypeList::~AchievementTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005f0520, 32 bytes, inline, placed by debug map only (low confidence)
    // game::AchievementType* placement_new<game::AchievementType, game::BaseTemplateConfigTypeList<game::AchievementType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::AchievementType>*&, int&)
    /* game::AchievementType* placement_new<game::AchievementType,
   game::BaseTemplateConfigTypeList<game::AchievementType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::AchievementType>*&, unsigned int&) */

    AchievementType*
    jag::placement_new<game::AchievementType, game::BaseTemplateConfigTypeList<game::AchievementType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::AchievementType::AchievementType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005f0540, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256> >* placement_new<MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256> >, MakeSharedPool<game::AchievementType, 256>::RefCounterAndData*&, game::AchievementType*>(void*, MakeSharedPool<game::AchievementType, 256>::RefCounterAndData*&, game::AchievementType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>,
                       MakeSharedPool<game::AchievementType, 256>::RefCounterAndData*&, game::AchievementType*>(
        void* param_1, RefCounterAndData** param_2, AchievementType** param_3) {
        MakeSharedPoolRefCounter<game::AchievementType,
                                 MakeSharedPool<game::AchievementType, 256>>::MakeSharedPoolRefCounter(param_1,
                                                                                                       *param_2,
                                                                                                       *param_3);
        return param_1;
    }

    // 0x1005f0560, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::AchievementType>(ref_counter_base*, game::AchievementType*, game::AchievementType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::AchievementType>(ref_counter_base* param_1,
                                                                      AchievementType* param_2,
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

    // 0x1005f2110, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256> >::MakeSharedPoolRefCounter(void*, game::AchievementType*): jumps straight to the base-object constructor

    // 0x1005f2120, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256> >::MakeSharedPoolRefCounter(void*, game::AchievementType*)
    void jag::MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>* this,
            void* param_1, AchievementType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a38 + 16;
        *(void**)(this + 16) = param_1;
        *(AchievementType**)(this + 24) = param_2;
    }

    // 0x1005f2160, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::AchievementType, 256>::deallocate(pvVar1);
    }

} // namespace jag
