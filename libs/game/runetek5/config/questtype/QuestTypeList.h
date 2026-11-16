// libs/game/runetek5/config/questtype/QuestTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class QuestTypeList {
    public:
        // virtual methods in vtable order
        virtual ~QuestTypeList();
        GetConfigProvider();
        QuestTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&,
                      ConfigProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        undefined8 m_configProvider; // offset 112
    };

    // 0x1004c5ce0: the linker folded this into VarBitTypeList::GetConfigProvider(), which has identical code
    QuestTypeList::GetConfigProvider();

    // 0x1005b81e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // QuestTypeList::QuestTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&): jumps straight to the base-object constructor

    // 0x1005b8200, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // QuestTypeList::QuestTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&)
    void QuestTypeList::QuestTypeList() {
        undefined8 in_R9;

        BaseTemplateConfigTypeList<QuestType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f30 + 16;
        m_configProvider = in_R9;
    }

    // 0x1005b8390, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // QuestTypeList::~QuestTypeList(): jumps straight to the base-object destructor

    // 0x1005b83a0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // QuestTypeList::~QuestTypeList()
    void QuestTypeList::~QuestTypeList() {
        ~QuestTypeList(this);
        operator_delete(this);
    }

    // 0x1005b8700: the linker folded this into BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList(), which has identical code
    QuestTypeList::~QuestTypeList();

} // namespace jag::game

namespace jag {
    // 0x1005b9310, 32 bytes, inline, placed by debug map only (low confidence)
    // game::QuestType* placement_new<game::QuestType, game::BaseTemplateConfigTypeList<game::QuestType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::QuestType>*&, int&)
    /* game::QuestType* placement_new<game::QuestType,
   game::BaseTemplateConfigTypeList<game::QuestType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::QuestType>*&, unsigned int&) */

    QuestType* jag::placement_new<game::QuestType, game::BaseTemplateConfigTypeList<game::QuestType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::QuestType::QuestType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005b9330, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128> >* placement_new<MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128> >, MakeSharedPool<game::QuestType, 128>::RefCounterAndData*&, game::QuestType*>(void*, MakeSharedPool<game::QuestType, 128>::RefCounterAndData*&, game::QuestType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>,
                       MakeSharedPool<game::QuestType, 128>::RefCounterAndData*&, game::QuestType*>(
        void* param_1, RefCounterAndData** param_2, QuestType** param_3) {
        MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005b9350, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::QuestType>(ref_counter_base*, game::QuestType*, game::QuestType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::QuestType>(ref_counter_base* param_1, QuestType* param_2,
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

    // 0x1005baba0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128> >::MakeSharedPoolRefCounter(void*, game::QuestType*): jumps straight to the base-object constructor

    // 0x1005babb0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128> >::MakeSharedPoolRefCounter(void*, game::QuestType*)
    void MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>* this, void* param_1,
        QuestType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b60 + 16;
        *(void**)(this + 16) = param_1;
        *(QuestType**)(this + 24) = param_2;
    }

    // 0x1005babf0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::QuestType, 128>::deallocate(pvVar1);
    }

} // namespace jag
